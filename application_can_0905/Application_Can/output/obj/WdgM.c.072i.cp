
IPA constant propagation start:
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: StartDMData_1(D)  Outer instance pointer: StartDMData_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: &TimeStamp  Outer instance pointer: TimeStamp offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: &MaxCycles  Outer instance pointer: MaxCycles offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: &IsActive  Outer instance pointer: IsActive offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_StoreDMData.isra.0 (StartDMData_1(D), _9, _8, 1);
  Starting walk at: WdgM_EB_StoreDMData.isra.0 (StartDMData_1(D), _9, _8, 1);
  instance pointer: StartDMData_1(D)  Outer instance pointer: StartDMData_1(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  Function call may change dynamic type:Supervisor_WdgM_GetElapsedTimeCallout (&TimeStamp, &ElapsedTime);
Determining dynamic type for call: _13 = WdgM_EB_GetCheckedCPDeadlineData.isra.0 (_12, &CPDeadlineResult);
  Starting walk at: _13 = WdgM_EB_GetCheckedCPDeadlineData.isra.0 (_12, &CPDeadlineResult);
  instance pointer: &CPDeadlineResult  Outer instance pointer: CPDeadlineResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = WdgM_EB_GetCheckedDMData (StartDMData_1(D), &TimeStamp, &MaxCycles, &IsActive);
  Function call may change dynamic type:WdgM_EB_StoreDMData.isra.0 (StartDMData_1(D), _9, _8, 1);
  Function call may change dynamic type:Supervisor_WdgM_GetElapsedTimeCallout (&TimeStamp, &ElapsedTime);
Determining dynamic type for call: RetVal_9 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_8, &CPLogicalResult);
  Starting walk at: RetVal_9 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_8, &CPLogicalResult);
  instance pointer: &CPLogicalResult  Outer instance pointer: CPLogicalResult offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_21, Local_NumOfSEperGraphId_22);
  Starting walk at: WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_21, Local_NumOfSEperGraphId_22);
  instance pointer: IntExtGraphDataSeqPtr_21  Outer instance pointer: IntExtGraphDataSeqPtr_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_21, Local_NumOfSEperGraphId_22);
Determining dynamic type for call: SetModeRetVal_13 = WdgM_EB_SetMode (ExpectedWdgMMode.77_3, 1, CoreInstance_8(D));
  Starting walk at: SetModeRetVal_13 = WdgM_EB_SetMode (ExpectedWdgMMode.77_3, 1, CoreInstance_8(D));
  instance pointer: CoreInstance_8(D)  Outer instance pointer: CoreInstance_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ExtRetVal_11 = Supervisor_WdgM_GetExpectedWdgMModeCallout (&ExpectedWdgMMode);
Determining dynamic type for call: DeInitRetVal_10 = WdgM_EB_DeInit (CoreInstance_8(D));
  Starting walk at: DeInitRetVal_10 = WdgM_EB_DeInit (CoreInstance_8(D));
  instance pointer: CoreInstance_8(D)  Outer instance pointer: CoreInstance_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ExtRetVal_7 = Supervisor_WdgM_GetExpectedInitStateCallout (&ExpectedInitState);
Determining dynamic type for call: InitRetVal_10 = WdgM_EB_Init (CoreInstance_8(D));
  Starting walk at: InitRetVal_10 = WdgM_EB_Init (CoreInstance_8(D));
  instance pointer: CoreInstance_8(D)  Outer instance pointer: CoreInstance_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ExtRetVal_7 = Supervisor_WdgM_GetExpectedInitStateCallout (&ExpectedInitState);
Determining dynamic type for call: WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_12);
  Starting walk at: WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_12);
  instance pointer: CPData_12  Outer instance pointer: CPData_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_14, OldAliveCounter.53_5, _22);
  Function call may change dynamic type:WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Function call may change dynamic type:WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_12);
Determining dynamic type for call: WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Starting walk at: WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  instance pointer: &OldAliveCounter  Outer instance pointer: OldAliveCounter offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_14, OldAliveCounter.53_5, _22);
  Function call may change dynamic type:WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Function call may change dynamic type:WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_12);
Determining dynamic type for call: WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Starting walk at: WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  instance pointer: _24  Outer instance pointer: _24 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_14, OldAliveCounter.53_5, _22);
  Function call may change dynamic type:WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Function call may change dynamic type:WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_12);
Determining dynamic type for call: WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_14, OldAliveCounter.53_5, _22);
  Starting walk at: WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_14, OldAliveCounter.53_5, _22);
  instance pointer: _22  Outer instance pointer: _22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Function call may change dynamic type:WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_14, OldAliveCounter.53_5, _22);
  Function call may change dynamic type:WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_23, IntRamIdx_14, &OldAliveCounter, _24);
  Function call may change dynamic type:WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_12);
Determining dynamic type for call: WdgM_EB_StoreExpiredSEID (&ExpiredSEID, _15);
  Starting walk at: WdgM_EB_StoreExpiredSEID (&ExpiredSEID, _15);
  instance pointer: &ExpiredSEID  Outer instance pointer: ExpiredSEID offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_SetSELocalStatus (IntSEId_21, IntSEId_21, AliveResult_29, DeadlineResult_16, LogicalResult_17, CoreInstance_41(D));
  Starting walk at: WdgM_EB_SetSELocalStatus (IntSEId_21, IntSEId_21, AliveResult_29, DeadlineResult_16, LogicalResult_17, CoreInstance_41(D));
  instance pointer: CoreInstance_41(D)  Outer instance pointer: CoreInstance_41(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_SetSELocalStatus (IntSEId_21, IntSEId_21, AliveResult_29, DeadlineResult_16, LogicalResult_17, CoreInstance_41(D));
  Function call may change dynamic type:TmpResult_47 = WdgM_EB_DetermineAliveResult (IntSEId_21, CPId_24, IntRamIdx_44, CPAliveCfg_45);
  Function call may change dynamic type:TmpResult_52 = WdgM_EB_DetermineDeadlineResult (IntSEId_21, CPId_24);
  Function call may change dynamic type:TmpResult_50 = WdgM_EB_CheckDeadlineViolation (CPId_24, CPDeadlineCfg_48);
  Function call may change dynamic type:LogicalResult_56 = WdgM_EB_DetermineLogicalResult (IntSEId_21, CPId_24);
Determining dynamic type for call: TmpResult_47 = WdgM_EB_DetermineAliveResult (IntSEId_21, CPId_24, IntRamIdx_44, CPAliveCfg_45);
  Starting walk at: TmpResult_47 = WdgM_EB_DetermineAliveResult (IntSEId_21, CPId_24, IntRamIdx_44, CPAliveCfg_45);
  instance pointer: CPAliveCfg_45  Outer instance pointer: CPAliveCfg_45 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_SetSELocalStatus (IntSEId_21, IntSEId_21, AliveResult_29, DeadlineResult_16, LogicalResult_17, CoreInstance_41(D));
  Function call may change dynamic type:TmpResult_47 = WdgM_EB_DetermineAliveResult (IntSEId_21, CPId_24, IntRamIdx_44, CPAliveCfg_45);
  Function call may change dynamic type:TmpResult_52 = WdgM_EB_DetermineDeadlineResult (IntSEId_21, CPId_24);
  Function call may change dynamic type:TmpResult_50 = WdgM_EB_CheckDeadlineViolation (CPId_24, CPDeadlineCfg_48);
  Function call may change dynamic type:LogicalResult_56 = WdgM_EB_DetermineLogicalResult (IntSEId_21, CPId_24);
Determining dynamic type for call: TmpResult_50 = WdgM_EB_CheckDeadlineViolation (CPId_24, CPDeadlineCfg_48);
  Starting walk at: TmpResult_50 = WdgM_EB_CheckDeadlineViolation (CPId_24, CPDeadlineCfg_48);
  instance pointer: CPDeadlineCfg_48  Outer instance pointer: CPDeadlineCfg_48 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TmpResult_47 = WdgM_EB_DetermineAliveResult (IntSEId_21, CPId_24, IntRamIdx_44, CPAliveCfg_45);
  Function call may change dynamic type:TmpResult_52 = WdgM_EB_DetermineDeadlineResult (IntSEId_21, CPId_24);
  Function call may change dynamic type:TmpResult_50 = WdgM_EB_CheckDeadlineViolation (CPId_24, CPDeadlineCfg_48);
  Function call may change dynamic type:LogicalResult_56 = WdgM_EB_DetermineLogicalResult (IntSEId_21, CPId_24);
  Function call may change dynamic type:WdgM_EB_SetSELocalStatus (IntSEId_21, IntSEId_21, AliveResult_29, DeadlineResult_16, LogicalResult_17, CoreInstance_41(D));
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_16, &CPLogicalResult);
  Starting walk at: _5 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_16, &CPLogicalResult);
  instance pointer: &CPLogicalResult  Outer instance pointer: CPLogicalResult offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedCPDeadlineData.isra.0 (_16, &CPDeadlineResult);
  Starting walk at: _5 = WdgM_EB_GetCheckedCPDeadlineData.isra.0 (_16, &CPDeadlineResult);
  instance pointer: &CPDeadlineResult  Outer instance pointer: CPDeadlineResult offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _8 = WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_34, IntRamIdx_29(D), &AliveCounter, _35);
  Starting walk at: _8 = WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_34, IntRamIdx_29(D), &AliveCounter, _35);
  instance pointer: &AliveCounter  Outer instance pointer: AliveCounter offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _8 = WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_34, IntRamIdx_29(D), &AliveCounter, _35);
  Starting walk at: _8 = WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_34, IntRamIdx_29(D), &AliveCounter, _35);
  instance pointer: _35  Outer instance pointer: _35 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_29(D), AliveCounter.63_19, _33);
  Starting walk at: WdgM_EB_ResetCPAliveCounterData.isra.0 (IntRamIdx_29(D), AliveCounter.63_19, _33);
  instance pointer: _33  Outer instance pointer: _33 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_8 = WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (_34, IntRamIdx_29(D), &AliveCounter, _35);
Determining dynamic type for call: WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_11);
  Starting walk at: WdgM_EB_IncrementCPAliveCounterData.isra.0 (CPData_11);
  instance pointer: CPData_11  Outer instance pointer: CPData_11 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = WdgM_EB_CheckCPAliveCounterData.isra.0 (_14);
Determining dynamic type for call: _4 = WdgM_EB_DecMaxCyclesDMData (StartDMData_9);
  Starting walk at: _4 = WdgM_EB_DecMaxCyclesDMData (StartDMData_9);
  instance pointer: StartDMData_9  Outer instance pointer: &WdgM_EB_DMData[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: DMData_13(D)  Outer instance pointer: DMData_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: &TimeStamp  Outer instance pointer: TimeStamp offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: &MaxCycles  Outer instance pointer: MaxCycles offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  Starting walk at: _1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
  instance pointer: &IsActive  Outer instance pointer: IsActive offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_StoreDMData.isra.0 (DMData_13(D), _32, MaxCycles.12_4, 0);
  Starting walk at: WdgM_EB_StoreDMData.isra.0 (DMData_13(D), _32, MaxCycles.12_4, 0);
  instance pointer: DMData_13(D)  Outer instance pointer: DMData_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Supervisor_WdgM_GetElapsedTimeCallout (&TimeStamp, &ElapsedTime);
  Function call may change dynamic type:_1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
Determining dynamic type for call: _5 = WdgM_EB_GetCheckedCPDeadlineData.isra.0 (_33, &CPDeadlineResult);
  Starting walk at: _5 = WdgM_EB_GetCheckedCPDeadlineData.isra.0 (_33, &CPDeadlineResult);
  instance pointer: &CPDeadlineResult  Outer instance pointer: CPDeadlineResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_StoreDMData.isra.0 (DMData_13(D), _32, MaxCycles.12_4, 0);
  Function call may change dynamic type:Supervisor_WdgM_GetElapsedTimeCallout (&TimeStamp, &ElapsedTime);
  Function call may change dynamic type:_1 = WdgM_EB_GetCheckedDMData (DMData_13(D), &TimeStamp, &MaxCycles, &IsActive);
Determining dynamic type for call: StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
  Starting walk at: StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
  instance pointer: StopDMData_29  Outer instance pointer: &WdgM_EB_DMData[_7] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
  Starting walk at: StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
  instance pointer: StopCPData_30  Outer instance pointer: StopCPData_30 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
  Starting walk at: StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
  instance pointer: iftmp.8_14  Outer instance pointer: iftmp.8_14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  Starting walk at: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  instance pointer: StartDMData_28  Outer instance pointer: &WdgM_EB_DMData[_6] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
Determining dynamic type for call: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  Starting walk at: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  instance pointer: StopDMData_29  Outer instance pointer: &WdgM_EB_DMData[_7] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
Determining dynamic type for call: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  Starting walk at: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  instance pointer: StartCPData_21  Outer instance pointer: StartCPData_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
Determining dynamic type for call: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  Starting walk at: StartCPRetVal_34 = WdgM_EB_StartCheckpointDeadline.isra.0 (StartDMData_28, StopDMData_29, StartCPData_21, _35, _10);
  instance pointer: _35  Outer instance pointer: CPDeadlineCfg_18(D) offset: 64 (bits) vtbl reference: 
  Function call may change dynamic type:StopCPRetVal_32 = WdgM_EB_StopCheckpointDeadline (StopDMData_29, StopCPData_30, iftmp.8_14);
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: GraphData_43  Outer instance pointer: &WdgM_EB_ExternalGraphData[_6] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: &LastIntSEId  Outer instance pointer: LastIntSEId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: &LastCPId  Outer instance pointer: LastCPId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: &ActiveFlag  Outer instance pointer: ActiveFlag offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  Starting walk at: WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  instance pointer: IntExtGraphDataSeqPtr_44  Outer instance pointer: IntExtGraphDataSeqPtr_44 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _18, 1);
  Starting walk at: WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _18, 1);
  instance pointer: IntExtGraphDataSeqPtr_44  Outer instance pointer: IntExtGraphDataSeqPtr_44 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Starting walk at: RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  instance pointer: CPExtLogicalCfg_42(D)  Outer instance pointer: CPExtLogicalCfg_42(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: _13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Starting walk at: _13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  instance pointer: IntExtGraphDataSeqPtr_44  Outer instance pointer: IntExtGraphDataSeqPtr_44 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: _13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Starting walk at: _13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  instance pointer: &Local_ExtGraphDataSeq  Outer instance pointer: Local_ExtGraphDataSeq offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _16, _15);
  Starting walk at: WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _16, _15);
  instance pointer: IntExtGraphDataSeqPtr_44  Outer instance pointer: IntExtGraphDataSeqPtr_44 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: WdgM_EB_StoreGraphData (GraphData_43, IntSEId_38(D), CPId_40(D), ActiveFlag.32_19);
  Starting walk at: WdgM_EB_StoreGraphData (GraphData_43, IntSEId_38(D), CPId_40(D), ActiveFlag.32_19);
  instance pointer: GraphData_43  Outer instance pointer: &WdgM_EB_ExternalGraphData[_6] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _18, 1);
  Function call may change dynamic type:WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _16, _15);
Determining dynamic type for call: _21 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_75, &CPLogicalResult);
  Starting walk at: _21 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_75, &CPLogicalResult);
  instance pointer: &CPLogicalResult  Outer instance pointer: CPLogicalResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_StoreGraphData (GraphData_43, IntSEId_38(D), CPId_40(D), ActiveFlag.32_19);
  Function call may change dynamic type:_13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _18, 1);
  Function call may change dynamic type:WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _16, _15);
Determining dynamic type for call: _24 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, idx_29, &Other_SeqNumber);
  Starting walk at: _24 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, idx_29, &Other_SeqNumber);
  instance pointer: IntExtGraphDataSeqPtr_44  Outer instance pointer: IntExtGraphDataSeqPtr_44 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_21 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_75, &CPLogicalResult);
  Function call may change dynamic type:WdgM_EB_StoreGraphData (GraphData_43, IntSEId_38(D), CPId_40(D), ActiveFlag.32_19);
  Function call may change dynamic type:_13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _18, 1);
  Function call may change dynamic type:WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _16, _15);
  Function call may change dynamic type:Dem_ReportErrorStatus (6, 1);
  Function call may change dynamic type:_24 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, idx_29, &Other_SeqNumber);
Determining dynamic type for call: _24 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, idx_29, &Other_SeqNumber);
  Starting walk at: _24 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, idx_29, &Other_SeqNumber);
  instance pointer: &Other_SeqNumber  Outer instance pointer: Other_SeqNumber offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_21 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_75, &CPLogicalResult);
  Function call may change dynamic type:WdgM_EB_StoreGraphData (GraphData_43, IntSEId_38(D), CPId_40(D), ActiveFlag.32_19);
  Function call may change dynamic type:_13 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, IndexInGraphDataSeq_82, &Local_ExtGraphDataSeq);
  Function call may change dynamic type:RetVal_57 = WdgM_EB_CheckPredCP (CPExtLogicalCfg_42(D), LastIntSEId.24_10, LastCPId.25_11);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_43, &LastIntSEId, &LastCPId, &ActiveFlag);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _18, 1);
  Function call may change dynamic type:WdgM_EB_ResetExtGraphDataSeq (IntExtGraphDataSeqPtr_44, Local_NumOfSEperGraphId_45);
  Function call may change dynamic type:WdgM_EB_StoreSeqNumber (IntExtGraphDataSeqPtr_44, _16, _15);
  Function call may change dynamic type:Dem_ReportErrorStatus (6, 1);
  Function call may change dynamic type:_24 = WdgM_EB_GetCheckedSeqNumber (IntExtGraphDataSeqPtr_44, idx_29, &Other_SeqNumber);
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: GraphData_29  Outer instance pointer: &WdgM_EB_InternalGraphData[_6] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: &LastIntSEId  Outer instance pointer: LastIntSEId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: &LastCPId  Outer instance pointer: LastCPId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  Starting walk at: _7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
  instance pointer: &ActiveFlag  Outer instance pointer: ActiveFlag offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_35 = WdgM_EB_CheckPredCP (CPIntLogicalCfg_28(D), LastIntSEId.17_11, LastCPId.18_12);
  Starting walk at: RetVal_35 = WdgM_EB_CheckPredCP (CPIntLogicalCfg_28(D), LastIntSEId.17_11, LastCPId.18_12);
  instance pointer: CPIntLogicalCfg_28(D)  Outer instance pointer: CPIntLogicalCfg_28(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: WdgM_EB_StoreGraphData (GraphData_29, IntSEId_24(D), CPId_26(D), ActiveFlag.19_14);
  Starting walk at: WdgM_EB_StoreGraphData (GraphData_29, IntSEId_24(D), CPId_26(D), ActiveFlag.19_14);
  instance pointer: GraphData_29  Outer instance pointer: &WdgM_EB_InternalGraphData[_6] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_35 = WdgM_EB_CheckPredCP (CPIntLogicalCfg_28(D), LastIntSEId.17_11, LastCPId.18_12);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: _16 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_46, &CPLogicalResult);
  Starting walk at: _16 = WdgM_EB_GetCheckedCPLogicalData.isra.0 (_46, &CPLogicalResult);
  instance pointer: &CPLogicalResult  Outer instance pointer: CPLogicalResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_StoreGraphData (GraphData_29, IntSEId_24(D), CPId_26(D), ActiveFlag.19_14);
  Function call may change dynamic type:RetVal_35 = WdgM_EB_CheckPredCP (CPIntLogicalCfg_28(D), LastIntSEId.17_11, LastCPId.18_12);
  Function call may change dynamic type:_7 = WdgM_EB_GetCheckedGraphData (GraphData_29, &LastIntSEId, &LastCPId, &ActiveFlag);
Determining dynamic type for call: SEIsActive_29 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_21(D), SECfg_26, IsNormalOperation_20(D), _37);
  Starting walk at: SEIsActive_29 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_21(D), SECfg_26, IsNormalOperation_20(D), _37);
  instance pointer: SECfg_26  Outer instance pointer: &WdgM_EB_SECfg[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SEIsActive_29 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_21(D), SECfg_26, IsNormalOperation_20(D), _37);
  Starting walk at: SEIsActive_29 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_21(D), SECfg_26, IsNormalOperation_20(D), _37);
  instance pointer: _37  Outer instance pointer: CoreInstance_24(D) offset: 160 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_SEResetCPAliveData (IntSEId_11, IntRamIdxBase_13, IsNormalOperation_20(D), CoreInstance_24(D));
  Function call may change dynamic type:SEIsActive_29 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_21(D), SECfg_26, IsNormalOperation_20(D), _37);
  Function call may change dynamic type:WdgM_EB_SEResetData (IntSEId_11);
Determining dynamic type for call: WdgM_EB_SEResetCPAliveData (IntSEId_11, IntRamIdxBase_13, IsNormalOperation_20(D), CoreInstance_24(D));
  Starting walk at: WdgM_EB_SEResetCPAliveData (IntSEId_11, IntRamIdxBase_13, IsNormalOperation_20(D), CoreInstance_24(D));
  instance pointer: CoreInstance_24(D)  Outer instance pointer: CoreInstance_24(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SEIsActive_29 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_21(D), SECfg_26, IsNormalOperation_20(D), _37);
  Function call may change dynamic type:WdgM_EB_SEResetCPAliveData (IntSEId_11, IntRamIdxBase_13, IsNormalOperation_20(D), CoreInstance_24(D));
  Function call may change dynamic type:WdgM_EB_SEResetData (IntSEId_11);
Determining dynamic type for call: RetVal_7 = WdgM_EB_SetMode (WdgM_EB_DeInitModeId.48_1, 1, CoreInstance_5(D));
  Starting walk at: RetVal_7 = WdgM_EB_SetMode (WdgM_EB_DeInitModeId.48_1, 1, CoreInstance_5(D));
  instance pointer: CoreInstance_5(D)  Outer instance pointer: CoreInstance_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_9 = WdgM_EB_SetMode (WdgM_EB_InitialModeId.75_1, 0, CoreInstance_5(D));
  Starting walk at: RetVal_9 = WdgM_EB_SetMode (WdgM_EB_InitialModeId.75_1, 0, CoreInstance_5(D));
  instance pointer: CoreInstance_5(D)  Outer instance pointer: CoreInstance_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
  Starting walk at: WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  Starting walk at: WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
Determining dynamic type for call: WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
  Starting walk at: WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
Determining dynamic type for call: WdgM_EB_SetLocalStatus (&WdgM_EB_Context);
  Starting walk at: WdgM_EB_SetLocalStatus (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
Determining dynamic type for call: WdgM_EB_SetGlobalStatus (&WdgM_EB_Context);
  Starting walk at: WdgM_EB_SetGlobalStatus (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_SetLocalStatus (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
Determining dynamic type for call: _5 = WdgM_EB_CheckInitRequest (&WdgM_EB_Context);
  Starting walk at: _5 = WdgM_EB_CheckInitRequest (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_UpdateTriggerConditions.isra.0 (_29);
  Function call may change dynamic type:WdgM_EB_SetGlobalStatus (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_SetLocalStatus (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
Determining dynamic type for call: _8 = WdgM_EB_CheckModeSwitchRequest (&WdgM_EB_Context);
  Starting walk at: _8 = WdgM_EB_CheckModeSwitchRequest (&WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_UpdateTriggerConditions.isra.0 (_29);
  Function call may change dynamic type:WdgM_EB_SetGlobalStatus (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_SetLocalStatus (&WdgM_EB_Context);
  Function call may change dynamic type:WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
  Function call may change dynamic type:_5 = WdgM_EB_CheckInitRequest (&WdgM_EB_Context);
Determining dynamic type for call: RetVal_10 = WdgM_EB_GetCheckedExpiredSEID (WdgM_EB_ExpiredSEID.45_1, &LocalSEId);
  Starting walk at: RetVal_10 = WdgM_EB_GetCheckedExpiredSEID (WdgM_EB_ExpiredSEID.45_1, &LocalSEId);
  instance pointer: &LocalSEId  Outer instance pointer: LocalSEId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _17 = WdgM_EB_CheckpointReachedDeadline (_49, IntCPId_32, CPDeadlineCfg_38);
  Starting walk at: _17 = WdgM_EB_CheckpointReachedDeadline (_49, IntCPId_32, CPDeadlineCfg_38);
  instance pointer: CPDeadlineCfg_38  Outer instance pointer: CPDeadlineCfg_38 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_14 = WdgM_EB_CheckpointReachedAlive (_49, IntCPId_32);
Determining dynamic type for call: _20 = WdgM_EB_CheckpointReachedIntLogical (_49, IntCPId_32, CPIntLogicalCfg_40);
  Starting walk at: _20 = WdgM_EB_CheckpointReachedIntLogical (_49, IntCPId_32, CPIntLogicalCfg_40);
  instance pointer: CPIntLogicalCfg_40  Outer instance pointer: CPIntLogicalCfg_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_14 = WdgM_EB_CheckpointReachedAlive (_49, IntCPId_32);
  Function call may change dynamic type:_17 = WdgM_EB_CheckpointReachedDeadline (_49, IntCPId_32, CPDeadlineCfg_38);
Determining dynamic type for call: _21 = WdgM_EB_CheckpointReachedExtLogical (_49, IntCPId_32, CPExtLogicalCfg_41, &WdgM_EB_Context);
  Starting walk at: _21 = WdgM_EB_CheckpointReachedExtLogical (_49, IntCPId_32, CPExtLogicalCfg_41, &WdgM_EB_Context);
  instance pointer: CPExtLogicalCfg_41  Outer instance pointer: CPExtLogicalCfg_41 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_14 = WdgM_EB_CheckpointReachedAlive (_49, IntCPId_32);
  Function call may change dynamic type:_17 = WdgM_EB_CheckpointReachedDeadline (_49, IntCPId_32, CPDeadlineCfg_38);
  Function call may change dynamic type:_20 = WdgM_EB_CheckpointReachedIntLogical (_49, IntCPId_32, CPIntLogicalCfg_40);
Determining dynamic type for call: _21 = WdgM_EB_CheckpointReachedExtLogical (_49, IntCPId_32, CPExtLogicalCfg_41, &WdgM_EB_Context);
  Starting walk at: _21 = WdgM_EB_CheckpointReachedExtLogical (_49, IntCPId_32, CPExtLogicalCfg_41, &WdgM_EB_Context);
  instance pointer: &WdgM_EB_Context  Outer instance pointer: WdgM_EB_Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_14 = WdgM_EB_CheckpointReachedAlive (_49, IntCPId_32);
  Function call may change dynamic type:_17 = WdgM_EB_CheckpointReachedDeadline (_49, IntCPId_32, CPDeadlineCfg_38);
  Function call may change dynamic type:_20 = WdgM_EB_CheckpointReachedIntLogical (_49, IntCPId_32, CPIntLogicalCfg_40);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  WdgM_PerformReset.part.0/110:
    callsite  WdgM_PerformReset.part.0/110 -> WdgM_EB_UpdateTriggerConditions.isra.0/107 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  WdgM_EB_UpdateTriggerConditions.isra.0/107:
  Jump functions of caller  WdgM_EB_StartCheckpointDeadline.isra.0/106:
    callsite  WdgM_EB_StartCheckpointDeadline.isra.0/106 -> WdgM_EB_GetCheckedCPDeadlineData.isra.0/86 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  WdgM_EB_StartCheckpointDeadline.isra.0/106 -> WdgM_EB_StoreDMData.isra.0/84 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  WdgM_EB_StartCheckpointDeadline.isra.0/106 -> WdgM_EB_GetCheckedDMData/39 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102:
  Jump functions of caller  WdgM_EB_GetCheckedSeqNumber.part.0/100:
  Jump functions of caller  WdgM_EB_CheckPredCP.part.0/97:
    callsite  WdgM_EB_CheckPredCP.part.0/97 -> WdgM_EB_GetCheckedCPLogicalData.isra.0/88 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_CheckCPAliveCounterData.isra.0/96:
  Jump functions of caller  WdgM_EB_SEIsActiveResetData.isra.0/93:
    callsite  WdgM_EB_SEIsActiveResetData.isra.0/93 -> WdgM_EB_ResetExtGraphDataSeq/46 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  WdgM_EB_GetCheckedCPLogicalData.isra.0/88:
  Jump functions of caller  WdgM_EB_GetCheckedCPDeadlineData.isra.0/86:
  Jump functions of caller  WdgM_EB_StoreDMData.isra.0/84:
  Jump functions of caller  WdgM_EB_ResetCPAliveCounterData.isra.0/83:
  Jump functions of caller  WdgM_EB_IncrementCPAliveCounterData.isra.0/82:
  Jump functions of caller  WdgM_EB_GetNewGlobalStatus.isra.0/81:
  Jump functions of caller  Supervisor_WdgM_GetExpectedWdgMModeCallout/79:
  Jump functions of caller  Wdg_SetMode/76:
  Jump functions of caller  Supervisor_WdgM_GetExpectedInitStateCallout/74:
  Jump functions of caller  Wdg_SetTriggerCondition/72:
  Jump functions of caller  Supervisor_WdgM_GetElapsedTimeCallout/65:
  Jump functions of caller  Dem_ReportErrorStatus/63:
  Jump functions of caller  Det_ASR40_ReportError/60:
  Jump functions of caller  WdgM_EB_CheckModeSwitchRequest/58:
    callsite  WdgM_EB_CheckModeSwitchRequest/58 -> WdgM_EB_SetMode/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_CheckDeinitRequest/57:
    callsite  WdgM_EB_CheckDeinitRequest/57 -> WdgM_EB_DeInit/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_CheckInitRequest/56:
    callsite  WdgM_EB_CheckInitRequest/56 -> WdgM_EB_Init/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_SEResetCPAliveData/54:
    callsite  WdgM_EB_SEResetCPAliveData/54 -> WdgM_EB_ResetCPAliveCounterData.isra.0/83 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_SEResetCPAliveData/54 -> WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_SEResetCPAliveData/54 -> WdgM_EB_IncrementCPAliveCounterData.isra.0/82 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_SEResetData/53:
  Jump functions of caller  WdgM_EB_GetCheckedRedundantData8/50:
  Jump functions of caller  WdgM_EB_StoreRedundantData8/49:
  Jump functions of caller  WdgM_EB_GetCheckedExpiredSEID/48:
  Jump functions of caller  WdgM_EB_StoreExpiredSEID/47:
  Jump functions of caller  WdgM_EB_ResetExtGraphDataSeq/46:
  Jump functions of caller  WdgM_EB_DecMaxCyclesDMData/41:
  Jump functions of caller  WdgM_EB_GetCheckedDMData/39:
  Jump functions of caller  WdgM_EB_StoreSeqNumber/34:
  Jump functions of caller  WdgM_EB_GetCheckedSeqNumber/33:
    callsite  WdgM_EB_GetCheckedSeqNumber/33 -> WdgM_EB_GetCheckedSeqNumber.part.0/100 : 
  Jump functions of caller  WdgM_EB_StoreGraphData/32:
  Jump functions of caller  WdgM_EB_GetCheckedGraphData/31:
  Jump functions of caller  WdgM_EB_CheckMainFunctionTimingViolation/30:
  Jump functions of caller  WdgM_EB_UpdateSupervisionCycleCounter/29:
  Jump functions of caller  WdgM_EB_SetGlobalStatus/27:
    callsite  WdgM_EB_SetGlobalStatus/27 -> WdgM_EB_GetNewGlobalStatus.isra.0/81 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  WdgM_EB_SetSELocalStatus/26:
    callsite  WdgM_EB_SetSELocalStatus/26 -> WdgM_EB_StoreExpiredSEID/47 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  WdgM_EB_SetLocalStatus/25:
    callsite  WdgM_EB_SetLocalStatus/25 -> WdgM_EB_SetSELocalStatus/26 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 5: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_SetLocalStatus/25 -> WdgM_EB_DetermineLogicalResult/24 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_SetLocalStatus/25 -> WdgM_EB_DetermineDeadlineResult/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_SetLocalStatus/25 -> WdgM_EB_CheckDeadlineViolation/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_SetLocalStatus/25 -> WdgM_EB_DetermineAliveResult/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_DetermineLogicalResult/24:
    callsite  WdgM_EB_DetermineLogicalResult/24 -> WdgM_EB_GetCheckedCPLogicalData.isra.0/88 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_DetermineDeadlineResult/23:
    callsite  WdgM_EB_DetermineDeadlineResult/23 -> WdgM_EB_GetCheckedCPDeadlineData.isra.0/86 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_DetermineAliveResult/22:
    callsite  WdgM_EB_DetermineAliveResult/22 -> WdgM_EB_ResetCPAliveCounterData.isra.0/83 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_DetermineAliveResult/22 -> WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_CheckPredCP/21:
    callsite  WdgM_EB_CheckPredCP/21 -> WdgM_EB_CheckPredCP.part.0/97 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  WdgM_EB_CheckpointReachedAlive/20:
    callsite  WdgM_EB_CheckpointReachedAlive/20 -> WdgM_EB_IncrementCPAliveCounterData.isra.0/82 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedAlive/20 -> WdgM_EB_CheckCPAliveCounterData.isra.0/96 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_CheckDeadlineViolation/19:
    callsite  WdgM_EB_CheckDeadlineViolation/19 -> WdgM_EB_DecMaxCyclesDMData/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_StopCheckpointDeadline/18:
    callsite  WdgM_EB_StopCheckpointDeadline/18 -> WdgM_EB_GetCheckedCPDeadlineData.isra.0/86 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  WdgM_EB_StopCheckpointDeadline/18 -> WdgM_EB_StoreDMData.isra.0/84 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  WdgM_EB_StopCheckpointDeadline/18 -> WdgM_EB_GetCheckedDMData/39 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_CheckpointReachedDeadline/16:
    callsite  WdgM_EB_CheckpointReachedDeadline/16 -> WdgM_EB_StartCheckpointDeadline.isra.0/106 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 4: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedDeadline/16 -> WdgM_EB_StopCheckpointDeadline/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_CheckpointReachedExtLogical/14:
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_GetCheckedSeqNumber/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_GetCheckedCPLogicalData.isra.0/88 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_StoreGraphData/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_StoreSeqNumber/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_ResetExtGraphDataSeq/46 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_StoreSeqNumber/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_GetCheckedSeqNumber/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_CheckPredCP/21 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedExtLogical/14 -> WdgM_EB_GetCheckedGraphData/31 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_CheckpointReachedIntLogical/13:
    callsite  WdgM_EB_CheckpointReachedIntLogical/13 -> WdgM_EB_GetCheckedCPLogicalData.isra.0/88 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 203
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  WdgM_EB_CheckpointReachedIntLogical/13 -> WdgM_EB_StoreGraphData/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedIntLogical/13 -> WdgM_EB_CheckPredCP/21 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_CheckpointReachedIntLogical/13 -> WdgM_EB_GetCheckedGraphData/31 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_PerformWdgIfModeSwitch/12:
    callsite  WdgM_EB_PerformWdgIfModeSwitch/12 -> WdgM_PerformReset/6 : 
  Jump functions of caller  WdgM_EB_SetMode/11:
    callsite  WdgM_EB_SetMode/11 -> WdgM_EB_PerformWdgIfModeSwitch/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_SetMode/11 -> WdgM_EB_SEResetData/53 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
    callsite  WdgM_EB_SetMode/11 -> WdgM_EB_SEResetCPAliveData/54 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_EB_SetMode/11 -> WdgM_EB_SEIsActiveResetData.isra.0/93 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_EB_DeInit/10:
    callsite  WdgM_EB_DeInit/10 -> WdgM_EB_UpdateTriggerConditions.isra.0/107 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_DeInit/10 -> WdgM_EB_SetMode/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_EB_Init/9:
    callsite  WdgM_EB_Init/9 -> WdgM_EB_UpdateTriggerConditions.isra.0/107 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_EB_Init/9 -> WdgM_EB_SetMode/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  WdgM_MainFunction/8:
    callsite  WdgM_MainFunction/8 -> WdgM_EB_CheckModeSwitchRequest/58 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_MainFunction/8 -> WdgM_EB_CheckInitRequest/56 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_MainFunction/8 -> WdgM_EB_UpdateTriggerConditions.isra.0/107 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  WdgM_MainFunction/8 -> WdgM_EB_SetGlobalStatus/27 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_MainFunction/8 -> WdgM_EB_SetLocalStatus/25 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_MainFunction/8 -> WdgM_EB_UpdateSupervisionCycleCounter/29 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_MainFunction/8 -> WdgM_EB_CheckMainFunctionTimingViolation/30 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_MainFunction/8 -> WdgM_EB_CheckDeinitRequest/57 : 
       param 0: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  WdgM_GetFirstExpiredSEID/7:
    callsite  WdgM_GetFirstExpiredSEID/7 -> WdgM_EB_GetCheckedExpiredSEID/48 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  WdgM_PerformReset/6:
    callsite  WdgM_PerformReset/6 -> WdgM_PerformReset.part.0/110 : 
  Jump functions of caller  WdgM_GetGlobalStatus/5:
  Jump functions of caller  WdgM_GetLocalStatus/4:
  Jump functions of caller  WdgM_UpdateAliveCounter/3:
    callsite  WdgM_UpdateAliveCounter/3 -> WdgM_CheckpointReached/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
  Jump functions of caller  WdgM_CheckpointReached/2:
    callsite  WdgM_CheckpointReached/2 -> WdgM_EB_CheckpointReachedExtLogical/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: CONST: &WdgM_EB_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  WdgM_CheckpointReached/2 -> WdgM_EB_CheckpointReachedIntLogical/13 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_CheckpointReached/2 -> WdgM_EB_CheckpointReachedDeadline/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  WdgM_CheckpointReached/2 -> WdgM_EB_CheckpointReachedAlive/20 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  WdgM_GetMode/1:

 Propagating constants:

Not considering WdgM_EB_GetCheckedRedundantData8 for cloning; -fipa-cp-clone disabled.
Not considering WdgM_EB_StoreRedundantData8 for cloning; -fipa-cp-clone disabled.
Not considering WdgM_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering WdgM_GetFirstExpiredSEID for cloning; -fipa-cp-clone disabled.
Not considering WdgM_PerformReset for cloning; -fipa-cp-clone disabled.
Not considering WdgM_GetGlobalStatus for cloning; -fipa-cp-clone disabled.
Not considering WdgM_GetLocalStatus for cloning; -fipa-cp-clone disabled.
Not considering WdgM_UpdateAliveCounter for cloning; -fipa-cp-clone disabled.
Not considering WdgM_CheckpointReached for cloning; -fipa-cp-clone disabled.
Not considering WdgM_GetMode for cloning; -fipa-cp-clone disabled.

overall_size: 1475, max_new_size: 11001
 - context independent values, size: 21, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 16, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 17, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 74, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 50, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 15, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 26, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 19, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 28, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 49, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 27, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 114, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: WdgM_PerformReset.part.0/110:
  Node: WdgM_EB_UpdateTriggerConditions.isra.0/107:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_StartCheckpointDeadline.isra.0/106:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_DMDataType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct WdgM_EB_DMDataType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint16 * ~[0B, 0B]
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102:
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
         WdgM_EB_AliveCounterType * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_GetCheckedSeqNumber.part.0/100:
  Node: WdgM_EB_CheckPredCP.part.0/97:
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
  Node: WdgM_EB_CheckCPAliveCounterData.isra.0/96:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_SEIsActiveResetData.isra.0/93:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct WdgM_EB_SECfgType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: 1 [loc_time: 12, loc_size: 42, prop_time: 0, prop_size: 0]
               0 [loc_time: 12, loc_size: 40, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         WdgM_ModeType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_GetCheckedCPDeadlineData.isra.0/86:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         WdgM_EB_ResultType * ~[0B, 0B]
        ref offset 0: 203 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: WdgM_EB_StoreDMData.isra.0/84:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_DMDataType * ~[0B, 0B]
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
    param [3]: 1 [loc_time: 4, loc_size: 11, prop_time: 0, prop_size: 0]
               0 [loc_time: 4, loc_size: 11, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
  Node: WdgM_EB_ResetCPAliveCounterData.isra.0/83:
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
  Node: WdgM_EB_IncrementCPAliveCounterData.isra.0/82:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_GetNewGlobalStatus.isra.0/81:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_CheckModeSwitchRequest/58:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_CheckDeinitRequest/57:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_CheckInitRequest/56:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_SEResetCPAliveData/54:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: 1 [loc_time: 18, loc_size: 24, prop_time: 0, prop_size: 0]
               0 [loc_time: 18, loc_size: 26, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
    param [3]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_SEResetData/53:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
        AGGS VARIABLE
  Node: WdgM_EB_GetCheckedRedundantData8/50:
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
  Node: WdgM_EB_StoreRedundantData8/49:
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
  Node: WdgM_EB_StoreExpiredSEID/47:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         WdgM_EB_ExpiredSEIDType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_ResetExtGraphDataSeq/46:
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
  Node: WdgM_EB_DecMaxCyclesDMData/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_DMDataType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_GetCheckedDMData/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct WdgM_EB_DMDataType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         WdgM_EB_TimestampType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         uint16 * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_StoreSeqNumber/34:
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
               1 [loc_time: 4, loc_size: 6, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_GetCheckedSeqNumber/33:
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
  Node: WdgM_EB_StoreGraphData/32:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_GraphDataType * ~[0B, 0B]
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
  Node: WdgM_EB_GetCheckedGraphData/31:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct WdgM_EB_GraphDataType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         WdgM_EB_SEIdType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         WdgM_EB_CPIdType * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_CheckMainFunctionTimingViolation/30:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_UpdateSupervisionCycleCounter/29:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_SetGlobalStatus/27:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_SetSELocalStatus/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
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
    param [5]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_SetLocalStatus/25:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_DetermineLogicalResult/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_DetermineDeadlineResult/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_DetermineAliveResult/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         WdgM_EB_SEIdType [0, 3]
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
  Node: WdgM_EB_CheckPredCP/21:
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
  Node: WdgM_EB_CheckpointReachedAlive/20:
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
  Node: WdgM_EB_CheckDeadlineViolation/19:
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
  Node: WdgM_EB_StopCheckpointDeadline/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_DMDataType * ~[0B, 0B]
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
  Node: WdgM_EB_CheckpointReachedDeadline/16:
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
  Node: WdgM_EB_CheckpointReachedExtLogical/14:
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
    param [3]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_CheckpointReachedIntLogical/13:
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
  Node: WdgM_EB_PerformWdgIfModeSwitch/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: WdgM_EB_SetMode/11:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 8, loc_size: 44, prop_time: 0, prop_size: 0]
               1 [loc_time: 8, loc_size: 44, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
    param [2]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_DeInit/10:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_EB_Init/9:
    param [0]: &WdgM_EB_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct WdgM_EB_CoreContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: WdgM_MainFunction/8:
  Node: WdgM_GetFirstExpiredSEID/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: WdgM_PerformReset/6:
  Node: WdgM_GetGlobalStatus/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: WdgM_GetLocalStatus/4:
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
  Node: WdgM_UpdateAliveCounter/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: WdgM_CheckpointReached/2:
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
  Node: WdgM_GetMode/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of WdgM_EB_CheckDeinitRequest/57 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_DeInit/10 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_CheckMainFunctionTimingViolation/30 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_UpdateSupervisionCycleCounter/29 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_SetLocalStatus/25 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_SetSELocalStatus/26 for all known contexts.
    replacing param #5 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_SetGlobalStatus/27 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_CheckInitRequest/56 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_Init/9 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_CheckModeSwitchRequest/58 for all known contexts.
    replacing param #0 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_SetMode/11 for all known contexts.
    replacing param #2 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_SEResetCPAliveData/54 for all known contexts.
    replacing param #3 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_CheckpointReachedExtLogical/14 for all known contexts.
    replacing param #3 CoreInstance with const &WdgM_EB_Context
 - Creating a specialized node of WdgM_EB_GetCheckedCPDeadlineData.isra.0/86 for all known contexts.
Propagated bits info for function WdgM_EB_CheckpointReachedExtLogical.constprop/123:
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SEResetCPAliveData.constprop/122:
 param 0: value = 0x0, mask = 0x3
 param 2: value = 0x1, mask = 0x1
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetMode.constprop/121:
 param 1: value = 0x1, mask = 0x1
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckModeSwitchRequest.constprop/120:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_Init.constprop/119:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckInitRequest.constprop/118:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetGlobalStatus.constprop/117:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetSELocalStatus.constprop/116:
 param 0: value = 0x0, mask = 0x3
 param 1: value = 0x0, mask = 0x3
 param 5: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetLocalStatus.constprop/115:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_UpdateSupervisionCycleCounter.constprop/114:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckMainFunctionTimingViolation.constprop/113:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_DeInit.constprop/112:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckDeinitRequest.constprop/111:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_StartCheckpointDeadline.isra.0/106:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102:
 param 2: value = 0x0, mask = 0xfffffffe
Propagated bits info for function WdgM_EB_SEIsActiveResetData.isra.0/93:
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x1, mask = 0x1
Propagated bits info for function WdgM_EB_StoreDMData.isra.0/84:
 param 0: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0x1
Propagated bits info for function WdgM_EB_CheckModeSwitchRequest/58:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckDeinitRequest/57:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckInitRequest/56:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SEResetCPAliveData/54:
 param 0: value = 0x0, mask = 0x3
 param 2: value = 0x1, mask = 0x1
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SEResetData/53:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function WdgM_EB_StoreExpiredSEID/47:
 param 0: value = 0x0, mask = 0xfffffffe
Propagated bits info for function WdgM_EB_DecMaxCyclesDMData/41:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_GetCheckedDMData/39:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffe
Propagated bits info for function WdgM_EB_StoreGraphData/32:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_GetCheckedGraphData/31:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckMainFunctionTimingViolation/30:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_UpdateSupervisionCycleCounter/29:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetGlobalStatus/27:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetSELocalStatus/26:
 param 0: value = 0x0, mask = 0x3
 param 1: value = 0x0, mask = 0x3
 param 5: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetLocalStatus/25:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_DetermineLogicalResult/24:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function WdgM_EB_DetermineDeadlineResult/23:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function WdgM_EB_DetermineAliveResult/22:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function WdgM_EB_StopCheckpointDeadline/18:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_CheckpointReachedExtLogical/14:
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_SetMode/11:
 param 1: value = 0x1, mask = 0x1
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_DeInit/10:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function WdgM_EB_Init/9:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: WdgM_EB_GetCheckedCPLogicalData.isra.0/88 WdgM_EB_GetCheckedCPDeadlineData.isra.0/86 WdgM_EB_CheckModeSwitchRequest/58 WdgM_EB_CheckDeinitRequest/57 WdgM_EB_CheckInitRequest/56 WdgM_EB_SEResetCPAliveData/54 WdgM_EB_CheckMainFunctionTimingViolation/30 WdgM_EB_UpdateSupervisionCycleCounter/29 WdgM_EB_SetGlobalStatus/27 WdgM_EB_SetSELocalStatus/26 WdgM_EB_SetLocalStatus/25 WdgM_EB_CheckpointReachedExtLogical/14 WdgM_EB_SetMode/11 WdgM_EB_DeInit/10 WdgM_EB_Init/9
Reclaiming variables:
Clearing address taken flags:
Symbol table:

WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop.0/124 (WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop) @06dadc40
  Type: function definition analyzed
  Visibility: artificial
  References: 
  Referring: 
  Clone of WdgM_EB_GetCheckedCPDeadlineData.isra.0/86
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: WdgM_EB_CheckPredCP.part.0/97 (1073741824 (estimated locally),1.00 per call) WdgM_EB_CheckpointReachedIntLogical/13 (177167401 (estimated locally),0.17 per call) WdgM_EB_DetermineLogicalResult/24 (1073741824 (estimated locally),1.00 per call) WdgM_EB_CheckpointReachedExtLogical.constprop/123 (63818129 (estimated locally),0.17 per call) WdgM_EB_DetermineDeadlineResult/23 (1073741824 (estimated locally),1.00 per call) WdgM_EB_StopCheckpointDeadline/18 (536870913 (estimated locally),0.50 per call) WdgM_EB_StartCheckpointDeadline.isra.0/106 (177167401 (estimated locally),0.17 per call) 
  Calls: 
WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (WdgM_EB_CheckpointReachedExtLogical.constprop) @06dad620
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_ExternalGraphData/67 (addr)WdgM_EB_ExtGraphDataSeqPtr/68 (read)WdgM_EB_ExtGraphDataSeqPtr/68 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_CheckpointReachedExtLogical/14
  Availability: local
  Function flags: count:386776537 (estimated locally) local optimize_size
  Called by: WdgM_CheckpointReached/2 (78420724 (estimated locally),0.07 per call) 
  Calls: WdgM_EB_GetCheckedGraphData/31 (386776537 (estimated locally),1.00 per call) WdgM_EB_CheckPredCP/21 (48347067 (estimated locally),0.12 per call) WdgM_EB_GetCheckedSeqNumber/33 (48347067 (estimated locally),0.12 per call) WdgM_EB_StoreSeqNumber/34 (15954532 (estimated locally),0.04 per call) WdgM_EB_ResetExtGraphDataSeq/46 (31909064 (estimated locally),0.08 per call) WdgM_EB_StoreSeqNumber/34 (31909064 (estimated locally),0.08 per call) WdgM_EB_StoreGraphData/32 (193388269 (estimated locally),0.50 per call) WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (63818129 (estimated locally),0.17 per call) Dem_ReportErrorStatus/63 (21059982 (estimated locally),0.05 per call) WdgM_EB_GetCheckedSeqNumber/33 (505635677 (estimated locally),1.31 per call) 
WdgM_EB_SEResetCPAliveData.constprop.0/122 (WdgM_EB_SEResetCPAliveData.constprop) @06da79a0
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_SEResetCPAliveData/54
  Availability: local
  Function flags: count:118111602 (estimated locally) local optimize_size
  Called by: WdgM_EB_SetMode.constprop/121 (805306370 (estimated locally),2.12 per call) 
  Calls: WdgM_EB_IncrementCPAliveCounterData.isra.0/82 (315357973 (estimated locally),2.67 per call) WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102 (955630223 (estimated locally),8.09 per call) WdgM_EB_ResetCPAliveCounterData.isra.0/83 (955630223 (estimated locally),8.09 per call) 
WdgM_EB_SetMode.constprop.0/121 (WdgM_EB_SetMode.constprop) @06da77e0
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_GlobalStatus/70 (read)WdgM_EB_SECfg/61 (addr)WdgM_EB_SELocalStatus/69 (read)WdgM_EB_SELocalStatus/69 (write)WdgM_EB_SELocalStatus/69 (read)WdgM_EB_SELocalStatus/69 (write)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_SetMode/11
  Availability: local
  Function flags: count:380759509 (estimated locally) local optimize_size
  Called by: WdgM_EB_DeInit.constprop/112 (1073741824 (estimated locally),1.00 per call) WdgM_EB_Init.constprop/119 (1073741824 (estimated locally),1.00 per call) WdgM_EB_CheckModeSwitchRequest.constprop/120 (262422502 (estimated locally),0.24 per call) 
  Calls: WdgM_EB_SEIsActiveResetData.isra.0/93 (805306369 (estimated locally),2.12 per call) WdgM_EB_SEResetCPAliveData.constprop/122 (805306370 (estimated locally),2.12 per call) WdgM_EB_SEResetData/53 (535528736 (estimated locally),1.41 per call) WdgM_EB_PerformWdgIfModeSwitch/12 (268435456 (estimated locally),0.71 per call) 
WdgM_EB_CheckModeSwitchRequest.constprop.0/120 (WdgM_EB_CheckModeSwitchRequest.constprop) @06da7620
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_CheckModeSwitchRequest/58
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (351646152 (estimated locally),0.33 per call) 
  Calls: Supervisor_WdgM_GetExpectedWdgMModeCallout/79 (1073741824 (estimated locally),1.00 per call) WdgM_EB_SetMode.constprop/121 (262422502 (estimated locally),0.24 per call) Det_ASR40_ReportError/60 (43299713 (estimated locally),0.04 per call) 
WdgM_EB_Init.constprop.0/119 (WdgM_EB_Init.constprop) @06da7460
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_InitialModeId/78 (read)WdgM_EB_ExpiredSEID/73 (write)WdgM_EB_IsExpiredSEIdSet/77 (write)WdgM_EB_GlobalStatus/70 (write)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_Init/9
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_EB_CheckInitRequest.constprop/118 (145607981 (estimated locally),0.14 per call) 
  Calls: WdgM_EB_SetMode.constprop/121 (1073741824 (estimated locally),1.00 per call) WdgM_EB_UpdateTriggerConditions.isra.0/107 (354334802 (estimated locally),0.33 per call) 
WdgM_EB_CheckInitRequest.constprop.0/118 (WdgM_EB_CheckInitRequest.constprop) @06da7000
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_CheckInitRequest/56
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (145607981 (estimated locally),0.14 per call) 
  Calls: Supervisor_WdgM_GetExpectedInitStateCallout/74 (1073741824 (estimated locally),1.00 per call) WdgM_EB_Init.constprop/119 (145607981 (estimated locally),0.14 per call) Det_ASR40_ReportError/60 (48050634 (estimated locally),0.04 per call) Det_ASR40_ReportError/60 (928133843 (estimated locally),0.86 per call) 
WdgM_EB_SetGlobalStatus.constprop.0/117 (WdgM_EB_SetGlobalStatus.constprop) @06d4db60
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_GlobalStatus/70 (read)WdgM_EB_GlobalStatus/70 (write)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_SetGlobalStatus/27
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (351646152 (estimated locally),0.33 per call) 
  Calls: WdgM_EB_GetNewGlobalStatus.isra.0/81 (1073741824 (estimated locally),1.00 per call) Dem_ReportErrorStatus/63 (143434728 (estimated locally),0.13 per call) 
WdgM_EB_SetSELocalStatus.constprop.0/116 (WdgM_EB_SetSELocalStatus.constprop) @06d4d8c0
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_ExpiredSEID/73 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_ExpiredSEID/73 (write)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_SetSELocalStatus/26
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_EB_SetLocalStatus.constprop/115 (118111601 (estimated locally),1.25 per call) 
  Calls: WdgM_EB_StoreExpiredSEID/47 (89094481 (estimated locally),0.08 per call) 
WdgM_EB_SetLocalStatus.constprop.0/115 (WdgM_EB_SetLocalStatus.constprop) @06d4d700
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_SetLocalStatus/25
  Availability: local
  Function flags: count:94210413 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (351646152 (estimated locally),0.33 per call) 
  Calls: WdgM_EB_DetermineAliveResult/22 (510975480 (estimated locally),5.42 per call) WdgM_EB_CheckDeadlineViolation/19 (173731663 (estimated locally),1.84 per call) WdgM_EB_DetermineDeadlineResult/23 (35163289 (estimated locally),0.37 per call) WdgM_EB_DetermineLogicalResult/24 (279559492 (estimated locally),2.97 per call) WdgM_EB_SetSELocalStatus.constprop/116 (118111601 (estimated locally),1.25 per call) 
WdgM_EB_UpdateSupervisionCycleCounter.constprop.0/114 (WdgM_EB_UpdateSupervisionCycleCounter.constprop) @06d4d540
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_ModeCfg/71 (read)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_UpdateSupervisionCycleCounter/29
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (351646152 (estimated locally),0.33 per call) 
  Calls: 
WdgM_EB_CheckMainFunctionTimingViolation.constprop.0/113 (WdgM_EB_CheckMainFunctionTimingViolation.constprop) @06d40540
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_CheckMainFunctionTimingViolation/30
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (719407023 (estimated locally),0.67 per call) 
  Calls: Supervisor_WdgM_GetElapsedTimeCallout/65 (1073741823 (estimated locally),1.00 per call) Dem_ReportErrorStatus/63 (120473832 (estimated locally),0.11 per call) 
WdgM_EB_DeInit.constprop.0/112 (WdgM_EB_DeInit.constprop) @06d24d20
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_DeInitModeId/75 (read)WdgM_EB_GlobalStatus/70 (write)WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_DeInit/10
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: WdgM_EB_CheckDeinitRequest.constprop/111 (108662672 (estimated locally),0.10 per call) 
  Calls: WdgM_EB_SetMode.constprop/121 (1073741824 (estimated locally),1.00 per call) WdgM_EB_UpdateTriggerConditions.isra.0/107 (354334802 (estimated locally),0.33 per call) 
WdgM_EB_CheckDeinitRequest.constprop.0/111 (WdgM_EB_CheckDeinitRequest.constprop) @06d248c0
  Type: function definition analyzed
  Visibility:
  References: WdgM_EB_Context/59 (addr)
  Referring: 
  Clone of WdgM_EB_CheckDeinitRequest/57
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: WdgM_MainFunction/8 (351646152 (estimated locally),0.33 per call) 
  Calls: Supervisor_WdgM_GetExpectedInitStateCallout/74 (1073741823 (estimated locally),1.00 per call) WdgM_EB_DeInit.constprop/112 (108662672 (estimated locally),0.10 per call) Det_ASR40_ReportError/60 (35858682 (estimated locally),0.03 per call) 
WdgM_PerformReset.part.0/110 (WdgM_PerformReset.part.0) @06dad460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: WdgM_EB_GlobalStatus/70 (write)WdgM_EB_Context/59 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: WdgM_PerformReset/6 (365072224 (estimated locally),0.34 per call) 
  Calls: WdgM_EB_UpdateTriggerConditions.isra.0/107 (1073741824 (estimated locally),1.00 per call) 
WdgM_EB_UpdateTriggerConditions.isra.0/107 (WdgM_EB_UpdateTriggerConditions.isra.0) @070077e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: WdgM_EB_ModeCfg/71 (read)WdgM_EB_GlobalStatus/70 (read)WdgM_EB_ModeCfg/71 (read)
  Referring: 
  Availability: local
  Function flags: count:118111602 (estimated locally) body local optimize_size
  Called by: WdgM_EB_Init.constprop/119 (354334802 (estimated locally),0.33 per call) WdgM_EB_DeInit.constprop/112 (354334802 (estimated locally),0.33 per call) WdgM_MainFunction/8 (351646152 (estimated locally),0.33 per call) WdgM_PerformReset.part.0/110 (1073741824 (estimated locally),1.00 per call) 
  Calls: Wdg_SetTriggerCondition/72 (477815111 (estimated locally),4.05 per call) 
WdgM_EB_StartCheckpointDeadline.isra.0/106 (WdgM_EB_StartCheckpointDeadline.isra.0) @070172a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedDeadline/16 (217325345 (estimated locally),0.20 per call) 
  Calls: Dem_ReportErrorStatus/63 (58465242 (estimated locally),0.05 per call) WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (177167401 (estimated locally),0.17 per call) WdgM_EB_StoreDMData.isra.0/84 (268435456 (estimated locally),0.25 per call) Supervisor_WdgM_GetElapsedTimeCallout/65 (46788300 (estimated locally),0.04 per call) WdgM_EB_GetCheckedDMData/39 (1073741823 (estimated locally),1.00 per call) 
WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102 (WdgM_EB_GetCheckedCPAliveCounterData.isra.0) @07007460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SEResetCPAliveData.constprop/122 (955630223 (estimated locally),8.09 per call) WdgM_EB_DetermineAliveResult/22 (512926469 (estimated locally),0.48 per call) 
  Calls: Dem_ReportErrorStatus/63 (524845004 (estimated locally),0.49 per call) 
WdgM_EB_GetCheckedSeqNumber.part.0/100 (WdgM_EB_GetCheckedSeqNumber.part.0) @0701ea80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: WdgM_EB_GetCheckedSeqNumber/33 (524845000 (estimated locally),0.49 per call) 
  Calls: Dem_ReportErrorStatus/63 (1073741824 (estimated locally),1.00 per call) 
WdgM_EB_CheckPredCP.part.0/97 (WdgM_EB_CheckPredCP.part.0) @07007b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: WdgM_EB_CheckPredCP/21 (25750041 (estimated locally),0.33 per call) 
  Calls: WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (1073741824 (estimated locally),1.00 per call) Dem_ReportErrorStatus/63 (354334802 (estimated locally),0.33 per call) 
WdgM_EB_CheckCPAliveCounterData.isra.0/96 (WdgM_EB_CheckCPAliveCounterData.isra.0) @0701e0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedAlive/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_ReportErrorStatus/63 (524845004 (estimated locally),0.49 per call) 
WdgM_EB_SEIsActiveResetData.isra.0/93 (WdgM_EB_SEIsActiveResetData.isra.0) @07017000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: WdgM_EB_InternalGraphData/66 (write)WdgM_EB_InternalGraphData/66 (write)WdgM_EB_ExtGraphDataSeqPtr/68 (read)WdgM_EB_ExtGraphDataSeqPtr/68 (read)WdgM_EB_ExternalGraphData/67 (write)WdgM_EB_ExternalGraphData/67 (write)WdgM_EB_DMData/64 (write)WdgM_EB_DMData/64 (write)WdgM_EB_DMData/64 (write)WdgM_EB_DMData/64 (write)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetMode.constprop/121 (805306369 (estimated locally),2.12 per call) 
  Calls: WdgM_EB_ResetExtGraphDataSeq/46 (510975480 (estimated locally),4.33 per call) 
WdgM_EB_GetCheckedCPDeadlineData.isra.0/86 (WdgM_EB_GetCheckedCPDeadlineData.isra.0) @070071c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
WdgM_EB_StoreDMData.isra.0/84 (WdgM_EB_StoreDMData.isra.0) @070070e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_StartCheckpointDeadline.isra.0/106 (268435456 (estimated locally),0.25 per call) WdgM_EB_StopCheckpointDeadline/18 (177167401 (estimated locally),0.17 per call) 
  Calls: 
WdgM_EB_ResetCPAliveCounterData.isra.0/83 (WdgM_EB_ResetCPAliveCounterData.isra.0) @06fd90e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SEResetCPAliveData.constprop/122 (955630223 (estimated locally),8.09 per call) WdgM_EB_DetermineAliveResult/22 (512926470 (estimated locally),0.48 per call) 
  Calls: 
WdgM_EB_IncrementCPAliveCounterData.isra.0/82 (WdgM_EB_IncrementCPAliveCounterData.isra.0) @06fd98c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SEResetCPAliveData.constprop/122 (315357973 (estimated locally),2.67 per call) WdgM_EB_CheckpointReachedAlive/20 (354334802 (estimated locally),0.33 per call) 
  Calls: 
WdgM_EB_GetNewGlobalStatus.isra.0/81 (WdgM_EB_GetNewGlobalStatus.isra.0) @06eafee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: WdgM_EB_GlobalStatus/70 (read)WdgM_EB_SELocalStatus/69 (read)WdgM_EB_ModeCfg/71 (read)WdgM_EB_ExpiredSupervisionCycleCnt/0 (write)WdgM_EB_ExpiredSupervisionCycleCnt/0 (read)WdgM_EB_ExpiredSupervisionCycleCnt/0 (write)WdgM_EB_ModeCfg/71 (read)
  Referring: 
  Availability: local
  Function flags: count:268515986 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetGlobalStatus.constprop/117 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Supervisor_WdgM_GetExpectedWdgMModeCallout/79 (Supervisor_WdgM_GetExpectedWdgMModeCallout) @06e5cb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_CheckModeSwitchRequest.constprop/120 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
WdgM_EB_InitialModeId/78 (WdgM_EB_InitialModeId) @06e6b5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_Init.constprop.0/119 (read)
  Availability: not_available
  Varpool flags: read-only
WdgM_EB_IsExpiredSEIdSet/77 (WdgM_EB_IsExpiredSEIdSet) @06e62510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_StoreExpiredSEID/47 (write)WdgM_EB_StoreExpiredSEID/47 (read)WdgM_EB_Init.constprop.0/119 (write)
  Availability: not_available
  Varpool flags:
Wdg_SetMode/76 (Wdg_SetMode) @06e41700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_PerformWdgIfModeSwitch/12 (1014686025 (estimated locally),8.83 per call) 
  Calls: 
WdgM_EB_DeInitModeId/75 (WdgM_EB_DeInitModeId) @06e40000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_DeInit.constprop.0/112 (read)
  Availability: not_available
  Varpool flags: read-only
Supervisor_WdgM_GetExpectedInitStateCallout/74 (Supervisor_WdgM_GetExpectedInitStateCallout) @06e25ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_CheckInitRequest.constprop/118 (1073741824 (estimated locally),1.00 per call) WdgM_EB_CheckDeinitRequest.constprop/111 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
WdgM_EB_ExpiredSEID/73 (WdgM_EB_ExpiredSEID) @06e390d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_Init.constprop.0/119 (write)WdgM_EB_SetSELocalStatus.constprop.0/116 (read)WdgM_EB_SetSELocalStatus.constprop.0/116 (write)WdgM_GetFirstExpiredSEID/7 (read)
  Availability: not_available
  Varpool flags:
Wdg_SetTriggerCondition/72 (Wdg_SetTriggerCondition) @06e259a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_UpdateTriggerConditions.isra.0/107 (477815111 (estimated locally),4.05 per call) 
  Calls: 
WdgM_EB_ModeCfg/71 (WdgM_EB_ModeCfg) @06e32dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_GetNewGlobalStatus.isra.0/81 (read)WdgM_EB_UpdateSupervisionCycleCounter.constprop.0/114 (read)WdgM_EB_UpdateTriggerConditions.isra.0/107 (read)WdgM_EB_PerformWdgIfModeSwitch/12 (read)WdgM_EB_UpdateTriggerConditions.isra.0/107 (read)WdgM_EB_GetNewGlobalStatus.isra.0/81 (read)WdgM_EB_PerformWdgIfModeSwitch/12 (read)
  Availability: not_available
  Varpool flags: read-only
WdgM_EB_GlobalStatus/70 (WdgM_EB_GlobalStatus) @06e32828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_SetMode.constprop.0/121 (read)WdgM_EB_UpdateTriggerConditions.isra.0/107 (read)WdgM_EB_GetNewGlobalStatus.isra.0/81 (read)WdgM_EB_Init.constprop.0/119 (write)WdgM_PerformReset.part.0/110 (write)WdgM_GetGlobalStatus/5 (read)WdgM_EB_DeInit.constprop.0/112 (write)WdgM_EB_SetGlobalStatus.constprop.0/117 (read)WdgM_EB_SetGlobalStatus.constprop.0/117 (write)
  Availability: not_available
  Varpool flags:
WdgM_EB_SELocalStatus/69 (WdgM_EB_SELocalStatus) @06e324c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_GetLocalStatus/4 (read)WdgM_EB_GetNewGlobalStatus.isra.0/81 (read)WdgM_EB_SetMode.constprop.0/121 (write)WdgM_EB_SetMode.constprop.0/121 (read)WdgM_EB_SetMode.constprop.0/121 (write)WdgM_EB_SetMode.constprop.0/121 (read)
  Availability: not_available
  Varpool flags:
WdgM_EB_ExtGraphDataSeqPtr/68 (WdgM_EB_ExtGraphDataSeqPtr) @06e21e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_SEIsActiveResetData.isra.0/93 (read)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (read)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (read)WdgM_EB_SEIsActiveResetData.isra.0/93 (read)
  Availability: not_available
  Varpool flags: read-only
WdgM_EB_ExternalGraphData/67 (WdgM_EB_ExternalGraphData) @06e21e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (addr)
  Availability: not_available
  Varpool flags:
WdgM_EB_InternalGraphData/66 (WdgM_EB_InternalGraphData) @06e1b3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_CheckpointReachedIntLogical/13 (addr)
  Availability: not_available
  Varpool flags:
Supervisor_WdgM_GetElapsedTimeCallout/65 (Supervisor_WdgM_GetElapsedTimeCallout) @06e091c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_CheckMainFunctionTimingViolation.constprop/113 (1073741823 (estimated locally),1.00 per call) WdgM_EB_StartCheckpointDeadline.isra.0/106 (46788300 (estimated locally),0.04 per call) WdgM_EB_StopCheckpointDeadline/18 (177167401 (estimated locally),0.17 per call) 
  Calls: 
WdgM_EB_DMData/64 (WdgM_EB_DMData) @06e08360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_CheckDeadlineViolation/19 (addr)WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_SEIsActiveResetData.isra.0/93 (write)WdgM_EB_CheckpointReachedDeadline/16 (addr)WdgM_EB_CheckpointReachedDeadline/16 (addr)
  Availability: not_available
  Varpool flags:
Dem_ReportErrorStatus/63 (Dem_ReportErrorStatus) @06df8e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (21059982 (estimated locally),0.05 per call) WdgM_EB_SetGlobalStatus.constprop/117 (143434728 (estimated locally),0.13 per call) WdgM_EB_CheckMainFunctionTimingViolation.constprop/113 (120473832 (estimated locally),0.11 per call) WdgM_EB_PerformWdgIfModeSwitch/12 (55807731 (estimated locally),0.49 per call) WdgM_EB_StartCheckpointDeadline.isra.0/106 (58465242 (estimated locally),0.05 per call) WdgM_EB_StopCheckpointDeadline/18 (177167401 (estimated locally),0.17 per call) WdgM_EB_DetermineLogicalResult/24 (354334802 (estimated locally),0.33 per call) WdgM_EB_DetermineDeadlineResult/23 (354334802 (estimated locally),0.33 per call) WdgM_EB_DecMaxCyclesDMData/41 (887116906 (estimated locally),0.83 per call) WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102 (524845004 (estimated locally),0.49 per call) WdgM_EB_GetCheckedSeqNumber.part.0/100 (1073741824 (estimated locally),1.00 per call) WdgM_EB_CheckpointReachedIntLogical/13 (58465242 (estimated locally),0.05 per call) WdgM_EB_CheckPredCP.part.0/97 (354334802 (estimated locally),0.33 per call) WdgM_EB_GetCheckedGraphData/31 (1010289352 (estimated locally),0.94 per call) WdgM_EB_GetCheckedDMData/39 (1010289352 (estimated locally),0.94 per call) WdgM_EB_CheckCPAliveCounterData.isra.0/96 (524845004 (estimated locally),0.49 per call) 
  Calls: 
WdgM_EB_SEIntSEId/62 (WdgM_EB_SEIntSEId) @06e016c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_UpdateAliveCounter/3 (read)WdgM_CheckpointReached/2 (read)WdgM_GetLocalStatus/4 (read)
  Availability: not_available
  Varpool flags: read-only
WdgM_EB_SECfg/61 (WdgM_EB_SECfg) @06e012d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_EB_DetermineAliveResult/22 (read)WdgM_EB_SetMode.constprop.0/121 (read)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (read)WdgM_EB_DetermineLogicalResult/24 (read)WdgM_EB_CheckpointReachedAlive/20 (read)WdgM_EB_SEResetData/53 (read)WdgM_EB_CheckPredCP.part.0/97 (read)WdgM_UpdateAliveCounter/3 (read)WdgM_EB_CheckpointReachedDeadline/16 (read)WdgM_CheckpointReached/2 (read)WdgM_EB_CheckpointReachedIntLogical/13 (read)WdgM_EB_CheckpointReachedIntLogical/13 (read)WdgM_EB_DetermineDeadlineResult/23 (read)WdgM_EB_SetSELocalStatus.constprop.0/116 (read)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (read)WdgM_EB_CheckpointReachedDeadline/16 (read)WdgM_EB_SetLocalStatus.constprop.0/115 (read)WdgM_EB_SEResetCPAliveData.constprop.0/122 (read)WdgM_EB_SEResetCPAliveData.constprop.0/122 (read)WdgM_EB_SEResetData/53 (read)WdgM_EB_SetLocalStatus.constprop.0/115 (read)WdgM_EB_SetSELocalStatus.constprop.0/116 (read)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (read)WdgM_EB_SetSELocalStatus.constprop.0/116 (read)WdgM_EB_SetMode.constprop.0/121 (addr)WdgM_CheckpointReached/2 (read)WdgM_UpdateAliveCounter/3 (read)WdgM_EB_SetLocalStatus.constprop.0/115 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ASR40_ReportError/60 (Det_ASR40_ReportError) @06df8700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_EB_CheckModeSwitchRequest.constprop/120 (43299713 (estimated locally),0.04 per call) WdgM_EB_CheckInitRequest.constprop/118 (48050634 (estimated locally),0.04 per call) WdgM_EB_CheckInitRequest.constprop/118 (928133843 (estimated locally),0.86 per call) WdgM_EB_CheckDeinitRequest.constprop/111 (35858682 (estimated locally),0.03 per call) WdgM_MainFunction/8 (354334802 (estimated locally),0.33 per call) WdgM_GetFirstExpiredSEID/7 (322122547 (estimated locally),0.30 per call) WdgM_PerformReset/6 (708669605 (estimated locally),0.66 per call) WdgM_GetGlobalStatus/5 (95672716 (estimated locally),0.09 per call) WdgM_GetGlobalStatus/5 (524845004 (estimated locally),0.49 per call) WdgM_GetLocalStatus/4 (226612052 (estimated locally),0.21 per call) WdgM_GetLocalStatus/4 (95672716 (estimated locally),0.09 per call) WdgM_GetLocalStatus/4 (524845004 (estimated locally),0.49 per call) WdgM_UpdateAliveCounter/3 (38976828 (estimated locally),0.06 per call) WdgM_UpdateAliveCounter/3 (118111600 (estimated locally),0.17 per call) WdgM_UpdateAliveCounter/3 (236223200 (estimated locally),0.34 per call) WdgM_UpdateAliveCounter/3 (458550918 (estimated locally),0.66 per call) WdgM_CheckpointReached/2 (37217400 (estimated locally),0.03 per call) WdgM_CheckpointReached/2 (90567975 (estimated locally),0.08 per call) WdgM_CheckpointReached/2 (274448410 (estimated locally),0.26 per call) WdgM_CheckpointReached/2 (524845004 (estimated locally),0.49 per call) WdgM_GetMode/1 (95672716 (estimated locally),0.09 per call) WdgM_GetMode/1 (524845004 (estimated locally),0.49 per call) 
  Calls: 
WdgM_EB_Context/59 (WdgM_EB_Context) @06d4f8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: WdgM_CheckpointReached/2 (read)WdgM_PerformReset.part.0/110 (read)WdgM_GetLocalStatus/4 (read)WdgM_CheckpointReached/2 (read)WdgM_CheckpointReached/2 (read)WdgM_CheckpointReached/2 (read)WdgM_EB_DetermineAliveResult/22 (read)WdgM_UpdateAliveCounter/3 (read)WdgM_EB_DetermineAliveResult/22 (read)WdgM_EB_DetermineAliveResult/22 (read)WdgM_PerformReset/6 (read)WdgM_GetGlobalStatus/5 (read)WdgM_GetMode/1 (read)WdgM_GetMode/1 (read)WdgM_CheckpointReached/2 (read)WdgM_CheckpointReached/2 (addr)WdgM_UpdateAliveCounter/3 (read)WdgM_MainFunction/8 (read)WdgM_MainFunction/8 (write)WdgM_MainFunction/8 (read)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (read)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (read)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (write)WdgM_MainFunction/8 (read)WdgM_MainFunction/8 (addr)WdgM_MainFunction/8 (write)WdgM_MainFunction/8 (write)WdgM_EB_CheckDeinitRequest.constprop.0/111 (addr)WdgM_EB_DeInit.constprop.0/112 (addr)WdgM_EB_CheckMainFunctionTimingViolation.constprop.0/113 (addr)WdgM_EB_UpdateSupervisionCycleCounter.constprop.0/114 (addr)WdgM_EB_SetLocalStatus.constprop.0/115 (addr)WdgM_EB_SetSELocalStatus.constprop.0/116 (addr)WdgM_EB_SetGlobalStatus.constprop.0/117 (addr)WdgM_EB_CheckInitRequest.constprop.0/118 (addr)WdgM_EB_Init.constprop.0/119 (addr)WdgM_EB_CheckModeSwitchRequest.constprop.0/120 (addr)WdgM_EB_SetMode.constprop.0/121 (addr)WdgM_EB_SEResetCPAliveData.constprop.0/122 (addr)WdgM_EB_CheckpointReachedExtLogical.constprop.0/123 (addr)
  Availability: not_available
  Varpool flags:
WdgM_EB_CheckModeSwitchRequest/58 (WdgM_EB_CheckModeSwitchRequest) @06df8540
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_CheckDeinitRequest/57 (WdgM_EB_CheckDeinitRequest) @06df82a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_CheckInitRequest/56 (WdgM_EB_CheckInitRequest) @06df8000
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_SEResetCPAliveData/54 (WdgM_EB_SEResetCPAliveData) @06dad9a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_SEResetData/53 (WdgM_EB_SEResetData) @06dad7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetMode.constprop/121 (535528736 (estimated locally),1.41 per call) 
  Calls: 
WdgM_EB_GetCheckedRedundantData8/50 (WdgM_EB_GetCheckedRedundantData8) @06dad2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: WdgM_EB_GetCheckedExpiredSEID/48 (alias)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
WdgM_EB_StoreRedundantData8/49 (WdgM_EB_StoreRedundantData8) @06dad0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_GetCheckedExpiredSEID/48 (WdgM_EB_GetCheckedExpiredSEID) @06da7ee0
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly
  References: WdgM_EB_GetCheckedRedundantData8/50 (alias)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) icf_merged optimize_size
  Called by: WdgM_GetFirstExpiredSEID/7 (751619278 (estimated locally),0.70 per call) 
  Calls: 
WdgM_EB_StoreExpiredSEID/47 (WdgM_EB_StoreExpiredSEID) @06da7d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_IsExpiredSEIdSet/77 (read)WdgM_EB_IsExpiredSEIdSet/77 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetSELocalStatus.constprop/116 (89094481 (estimated locally),0.08 per call) 
  Calls: 
WdgM_EB_ResetExtGraphDataSeq/46 (WdgM_EB_ResetExtGraphDataSeq) @06da7b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (31909064 (estimated locally),0.08 per call) WdgM_EB_SEIsActiveResetData.isra.0/93 (510975480 (estimated locally),4.33 per call) 
  Calls: 
WdgM_EB_DecMaxCyclesDMData/41 (WdgM_EB_DecMaxCyclesDMData) @06da72a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckDeadlineViolation/19 (217325345 (estimated locally),0.20 per call) 
  Calls: Dem_ReportErrorStatus/63 (887116906 (estimated locally),0.83 per call) 
WdgM_EB_GetCheckedDMData/39 (WdgM_EB_GetCheckedDMData) @06d4de00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_StartCheckpointDeadline.isra.0/106 (1073741823 (estimated locally),1.00 per call) WdgM_EB_StopCheckpointDeadline/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dem_ReportErrorStatus/63 (1010289352 (estimated locally),0.94 per call) 
WdgM_EB_StoreSeqNumber/34 (WdgM_EB_StoreSeqNumber) @06d4d2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (15954532 (estimated locally),0.04 per call) WdgM_EB_CheckpointReachedExtLogical.constprop/123 (31909064 (estimated locally),0.08 per call) 
  Calls: 
WdgM_EB_GetCheckedSeqNumber/33 (WdgM_EB_GetCheckedSeqNumber) @06d4d0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (48347067 (estimated locally),0.12 per call) WdgM_EB_CheckpointReachedExtLogical.constprop/123 (505635677 (estimated locally),1.31 per call) 
  Calls: WdgM_EB_GetCheckedSeqNumber.part.0/100 (524845000 (estimated locally),0.49 per call) 
WdgM_EB_StoreGraphData/32 (WdgM_EB_StoreGraphData) @06d40e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (193388269 (estimated locally),0.50 per call) WdgM_EB_CheckpointReachedIntLogical/13 (536870911 (estimated locally),0.50 per call) 
  Calls: 
WdgM_EB_GetCheckedGraphData/31 (WdgM_EB_GetCheckedGraphData) @06d40c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (386776537 (estimated locally),1.00 per call) WdgM_EB_CheckpointReachedIntLogical/13 (1073741823 (estimated locally),1.00 per call) 
  Calls: Dem_ReportErrorStatus/63 (1010289352 (estimated locally),0.94 per call) 
WdgM_EB_CheckMainFunctionTimingViolation/30 (WdgM_EB_CheckMainFunctionTimingViolation) @06d409a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_UpdateSupervisionCycleCounter/29 (WdgM_EB_UpdateSupervisionCycleCounter) @06d40700
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_SetGlobalStatus/27 (WdgM_EB_SetGlobalStatus) @06d40380
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_SetSELocalStatus/26 (WdgM_EB_SetSELocalStatus) @06d400e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_SetLocalStatus/25 (WdgM_EB_SetLocalStatus) @06d37ee0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:94210413 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_DetermineLogicalResult/24 (WdgM_EB_DetermineLogicalResult) @06d37d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetLocalStatus.constprop/115 (279559492 (estimated locally),2.97 per call) 
  Calls: Dem_ReportErrorStatus/63 (354334802 (estimated locally),0.33 per call) WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (1073741824 (estimated locally),1.00 per call) 
WdgM_EB_DetermineDeadlineResult/23 (WdgM_EB_DetermineDeadlineResult) @06d37a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetLocalStatus.constprop/115 (35163289 (estimated locally),0.37 per call) 
  Calls: Dem_ReportErrorStatus/63 (354334802 (estimated locally),0.33 per call) WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (1073741824 (estimated locally),1.00 per call) 
WdgM_EB_DetermineAliveResult/22 (WdgM_EB_DetermineAliveResult) @06d377e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_Context/59 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetLocalStatus.constprop/115 (510975480 (estimated locally),5.42 per call) 
  Calls: WdgM_EB_ResetCPAliveCounterData.isra.0/83 (512926470 (estimated locally),0.48 per call) WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102 (512926469 (estimated locally),0.48 per call) 
WdgM_EB_CheckPredCP/21 (WdgM_EB_CheckPredCP) @06d37620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:78030430 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (48347067 (estimated locally),0.12 per call) WdgM_EB_CheckpointReachedIntLogical/13 (134217728 (estimated locally),0.13 per call) 
  Calls: WdgM_EB_CheckPredCP.part.0/97 (25750041 (estimated locally),0.33 per call) 
WdgM_EB_CheckpointReachedAlive/20 (WdgM_EB_CheckpointReachedAlive) @06d37380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_CheckpointReached/2 (78420724 (estimated locally),0.07 per call) 
  Calls: WdgM_EB_IncrementCPAliveCounterData.isra.0/82 (354334802 (estimated locally),0.33 per call) WdgM_EB_CheckCPAliveCounterData.isra.0/96 (1073741824 (estimated locally),1.00 per call) 
WdgM_EB_CheckDeadlineViolation/19 (WdgM_EB_CheckDeadlineViolation) @06d371c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_DMData/64 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetLocalStatus.constprop/115 (173731663 (estimated locally),1.84 per call) 
  Calls: WdgM_EB_DecMaxCyclesDMData/41 (217325345 (estimated locally),0.20 per call) 
WdgM_EB_StopCheckpointDeadline/18 (WdgM_EB_StopCheckpointDeadline) @06d37000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_EB_CheckpointReachedDeadline/16 (217325345 (estimated locally),0.20 per call) 
  Calls: Dem_ReportErrorStatus/63 (177167401 (estimated locally),0.17 per call) WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (536870913 (estimated locally),0.50 per call) WdgM_EB_StoreDMData.isra.0/84 (177167401 (estimated locally),0.17 per call) Supervisor_WdgM_GetElapsedTimeCallout/65 (177167401 (estimated locally),0.17 per call) WdgM_EB_GetCheckedDMData/39 (1073741824 (estimated locally),1.00 per call) 
WdgM_EB_CheckpointReachedDeadline/16 (WdgM_EB_CheckpointReachedDeadline) @06d24a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_DMData/64 (addr)WdgM_EB_DMData/64 (addr)WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: WdgM_CheckpointReached/2 (78420724 (estimated locally),0.07 per call) 
  Calls: WdgM_EB_StartCheckpointDeadline.isra.0/106 (217325345 (estimated locally),0.20 per call) WdgM_EB_StopCheckpointDeadline/18 (217325345 (estimated locally),0.20 per call) 
WdgM_EB_CheckpointReachedExtLogical/14 (WdgM_EB_CheckpointReachedExtLogical) @06d24700
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:386776537 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_CheckpointReachedIntLogical/13 (WdgM_EB_CheckpointReachedIntLogical) @06d24460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_SECfg/61 (read)WdgM_EB_InternalGraphData/66 (addr)WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: WdgM_CheckpointReached/2 (78420724 (estimated locally),0.07 per call) 
  Calls: Dem_ReportErrorStatus/63 (58465242 (estimated locally),0.05 per call) WdgM_EB_GetCheckedCPDeadlineData.isra.0.constprop/124 (177167401 (estimated locally),0.17 per call) WdgM_EB_StoreGraphData/32 (536870911 (estimated locally),0.50 per call) WdgM_EB_CheckPredCP/21 (134217728 (estimated locally),0.13 per call) WdgM_EB_GetCheckedGraphData/31 (1073741823 (estimated locally),1.00 per call) 
WdgM_EB_PerformWdgIfModeSwitch/12 (WdgM_EB_PerformWdgIfModeSwitch) @06d241c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: WdgM_EB_ModeCfg/71 (read)WdgM_EB_ModeCfg/71 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: WdgM_EB_SetMode.constprop/121 (268435456 (estimated locally),0.71 per call) 
  Calls: WdgM_PerformReset/6 (55807731 (estimated locally),0.49 per call) Dem_ReportErrorStatus/63 (55807731 (estimated locally),0.49 per call) Wdg_SetMode/76 (1014686025 (estimated locally),8.83 per call) 
WdgM_EB_SetMode/11 (WdgM_EB_SetMode) @06d18e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:380759509 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_DeInit/10 (WdgM_EB_DeInit) @06d18c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_EB_Init/9 (WdgM_EB_Init) @06d18a80
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
WdgM_MainFunction/8 (WdgM_MainFunction) @06d188c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (write)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (write)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (addr)WdgM_EB_Context/59 (write)WdgM_EB_Context/59 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: WdgM_EB_CheckModeSwitchRequest.constprop/120 (351646152 (estimated locally),0.33 per call) WdgM_EB_CheckInitRequest.constprop/118 (145607981 (estimated locally),0.14 per call) WdgM_EB_UpdateTriggerConditions.isra.0/107 (351646152 (estimated locally),0.33 per call) WdgM_EB_SetGlobalStatus.constprop/117 (351646152 (estimated locally),0.33 per call) WdgM_EB_SetLocalStatus.constprop/115 (351646152 (estimated locally),0.33 per call) WdgM_EB_UpdateSupervisionCycleCounter.constprop/114 (351646152 (estimated locally),0.33 per call) WdgM_EB_CheckMainFunctionTimingViolation.constprop/113 (719407023 (estimated locally),0.67 per call) WdgM_EB_CheckDeinitRequest.constprop/111 (351646152 (estimated locally),0.33 per call) Det_ASR40_ReportError/60 (354334802 (estimated locally),0.33 per call) 
WdgM_GetFirstExpiredSEID/7 (WdgM_GetFirstExpiredSEID) @06d18620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_ExpiredSEID/73 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: WdgM_EB_GetCheckedExpiredSEID/48 (751619278 (estimated locally),0.70 per call) Det_ASR40_ReportError/60 (322122547 (estimated locally),0.30 per call) 
WdgM_PerformReset/6 (WdgM_PerformReset) @06d18380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: WdgM_EB_PerformWdgIfModeSwitch/12 (55807731 (estimated locally),0.49 per call) 
  Calls: WdgM_PerformReset.part.0/110 (365072224 (estimated locally),0.34 per call) Det_ASR40_ReportError/60 (708669605 (estimated locally),0.66 per call) 
WdgM_GetGlobalStatus/5 (WdgM_GetGlobalStatus) @06d180e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)WdgM_EB_GlobalStatus/70 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/60 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/60 (524845004 (estimated locally),0.49 per call) 
WdgM_GetLocalStatus/4 (WdgM_GetLocalStatus) @06cded20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)WdgM_EB_SEIntSEId/62 (read)WdgM_EB_SELocalStatus/69 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/60 (226612052 (estimated locally),0.21 per call) Det_ASR40_ReportError/60 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/60 (524845004 (estimated locally),0.49 per call) 
WdgM_UpdateAliveCounter/3 (WdgM_UpdateAliveCounter) @06cde8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)WdgM_EB_SEIntSEId/62 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (read)WdgM_EB_SECfg/61 (read)
  Referring: 
  Availability: available
  Function flags: count:694774119 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/60 (38976828 (estimated locally),0.06 per call) WdgM_CheckpointReached/2 (20078972 (estimated locally),0.03 per call) Det_ASR40_ReportError/60 (118111600 (estimated locally),0.17 per call) Det_ASR40_ReportError/60 (236223200 (estimated locally),0.34 per call) Det_ASR40_ReportError/60 (458550918 (estimated locally),0.66 per call) 
WdgM_CheckpointReached/2 (WdgM_CheckpointReached) @06cde380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)WdgM_EB_SEIntSEId/62 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (read)WdgM_EB_SECfg/61 (read)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: WdgM_UpdateAliveCounter/3 (20078972 (estimated locally),0.03 per call) 
  Calls: WdgM_EB_CheckpointReachedExtLogical.constprop/123 (78420724 (estimated locally),0.07 per call) WdgM_EB_CheckpointReachedIntLogical/13 (78420724 (estimated locally),0.07 per call) WdgM_EB_CheckpointReachedDeadline/16 (78420724 (estimated locally),0.07 per call) WdgM_EB_CheckpointReachedAlive/20 (78420724 (estimated locally),0.07 per call) Det_ASR40_ReportError/60 (37217400 (estimated locally),0.03 per call) Det_ASR40_ReportError/60 (90567975 (estimated locally),0.08 per call) Det_ASR40_ReportError/60 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/60 (524845004 (estimated locally),0.49 per call) 
WdgM_GetMode/1 (WdgM_GetMode) @06cb2e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: WdgM_EB_Context/59 (read)WdgM_EB_Context/59 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/60 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/60 (524845004 (estimated locally),0.49 per call) 
WdgM_EB_ExpiredSupervisionCycleCnt/0 (WdgM_EB_ExpiredSupervisionCycleCnt) @06c1f4c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: WdgM_EB_GetNewGlobalStatus.isra.0/81 (write)WdgM_EB_GetNewGlobalStatus.isra.0/81 (read)WdgM_EB_GetNewGlobalStatus.isra.0/81 (write)
  Availability: available
  Varpool flags:

;; Function WdgM_EB_GetCheckedGraphData (WdgM_EB_GetCheckedGraphData, funcdef_no=30, decl_uid=6442, cgraph_uid=31, symbol_order=31)

Modification phase of node WdgM_EB_GetCheckedGraphData/31
Adjusting mask for param 0 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 0
Setting nonnull for 1
Setting nonnull for 2
Setting nonnull for 3
WdgM_EB_GetCheckedGraphData (const struct WdgM_EB_GraphDataType * GraphData, WdgM_EB_SEIdType * LastIntSEId, WdgM_EB_CPIdType * LastCPId, boolean * ActiveFlag)
{
  const uint8 LastCPIdRedundant;
  const uint8 CheckedLastCPId;
  const uint8 LastSEIdRedundant;
  const uint8 CheckedLastSEId;
  const uint8 IsActiveDataRedundant;
  const uint8 CheckedIsActiveData;
  const uint32 UncheckedLastCPData;
  const uint16 UncheckedIsActiveData;
  Std_ReturnType RetVal;
  short unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  UncheckedIsActiveData_12 = GraphData_11(D)->IsActiveData;
  # DEBUG UncheckedIsActiveData => UncheckedIsActiveData_12
  # DEBUG BEGIN_STMT
  UncheckedLastCPData_13 = GraphData_11(D)->LastCPData;
  # DEBUG UncheckedLastCPData => UncheckedLastCPData_13
  # DEBUG BEGIN_STMT
  CheckedIsActiveData_14 = (const uint8) UncheckedIsActiveData_12;
  # DEBUG CheckedIsActiveData => CheckedIsActiveData_14
  # DEBUG BEGIN_STMT
  _1 = UncheckedIsActiveData_12 >> 8;
  _2 = (unsigned char) _1;
  IsActiveDataRedundant_15 = ~_2;
  # DEBUG IsActiveDataRedundant => IsActiveDataRedundant_15
  # DEBUG BEGIN_STMT
  CheckedLastSEId_16 = (const uint8) UncheckedLastCPData_13;
  # DEBUG CheckedLastSEId => CheckedLastSEId_16
  # DEBUG BEGIN_STMT
  _3 = UncheckedLastCPData_13 >> 8;
  _4 = (unsigned char) _3;
  LastSEIdRedundant_17 = ~_4;
  # DEBUG LastSEIdRedundant => LastSEIdRedundant_17
  # DEBUG BEGIN_STMT
  _5 = UncheckedLastCPData_13 >> 16;
  CheckedLastCPId_18 = (const uint8) _5;
  # DEBUG CheckedLastCPId => CheckedLastCPId_18
  # DEBUG BEGIN_STMT
  _6 = UncheckedLastCPData_13 >> 24;
  _7 = (unsigned char) _6;
  LastCPIdRedundant_19 = ~_7;
  # DEBUG LastCPIdRedundant => LastCPIdRedundant_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (CheckedIsActiveData_14 == IsActiveDataRedundant_15)
    goto <bb 3>; [51.12%]
  else
    goto <bb 6>; [48.88%]

  <bb 3> [local count: 548896821]:
  if (CheckedLastSEId_16 == LastSEIdRedundant_17)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 186624919]:
  if (CheckedLastCPId_18 == LastCPIdRedundant_19)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 63452472]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  *LastIntSEId_20(D) = CheckedLastSEId_16;
  # DEBUG BEGIN_STMT
  *LastCPId_22(D) = CheckedLastCPId_18;
  # DEBUG BEGIN_STMT
  *ActiveFlag_24(D) = CheckedIsActiveData_14;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 1010289352]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Dem_ReportErrorStatus (6, 1);

  <bb 7> [local count: 1073741824]:
  # RetVal_8 = PHI <0(5), 1(6)>
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_8;

}



;; Function WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (WdgM_EB_GetCheckedCPAliveCounterData.isra.0, funcdef_no=71, decl_uid=7955, cgraph_uid=88, symbol_order=102)

Modification phase of node WdgM_EB_GetCheckedCPAliveCounterData.isra.0/102
Adjusting mask for param 2 to 0xfffffffe
Adjusting align: 2, misalign: 0
Setting nonnull for 2
WdgM_EB_GetCheckedCPAliveCounterData.isra.0 (const uint32 ISRA.118, WdgM_EB_IntRamIdxType IntRamIdx, WdgM_EB_AliveCounterType * CPAliveCounter, struct WdgM_EB_CPInternalDataType * const ISRA.119)
{
  Std_ReturnType RetVal;
  const uint32 UncheckedAliveCounterData;
  const WdgM_EB_AliveCounterType CheckedAliveCounterData;
  const WdgM_EB_AliveCounterType AliveCounterDataRedundant;
  const WdgM_EB_AliveCounterType AliveCounterReference;
  WdgM_EB_AliveCounterType AliveCounterData;
  const uint32 AliveCounterDataTemp;
  long unsigned int _4;
  short unsigned int _5;
  struct WdgM_EB_CPInternalDataType * _8;
  long unsigned int _10;
  struct WdgM_EB_CPInternalDataType * _11;
  long unsigned int _14;
  short unsigned int _16;

  <bb 8> [local count: 1073741824]:
  # DEBUG CPData s=> CPData
  # DEBUG CoreInstance s=> CoreInstance

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  UncheckedAliveCounterData_2 = ISRA.118_25(D);
  # DEBUG UncheckedAliveCounterData => UncheckedAliveCounterData_2
  # DEBUG BEGIN_STMT
  CheckedAliveCounterData_3 = (const WdgM_EB_AliveCounterType) UncheckedAliveCounterData_2;
  # DEBUG CheckedAliveCounterData => CheckedAliveCounterData_3
  # DEBUG BEGIN_STMT
  _4 = UncheckedAliveCounterData_2 >> 16;
  _5 = (short unsigned int) _4;
  AliveCounterDataRedundant_6 = ~_5;
  # DEBUG AliveCounterDataRedundant => AliveCounterDataRedundant_6
  # DEBUG BEGIN_STMT
  _8 = ISRA.119_26(D);
  _10 = IntRamIdx_9(D) * 2;
  _11 = _8 + _10;
  AliveCounterReference_12 = _11->AliveCounterData;
  # DEBUG AliveCounterReference => AliveCounterReference_12
  # DEBUG BEGIN_STMT
  # DEBUG AliveCounterData => CheckedAliveCounterData_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (CheckedAliveCounterData_3 == AliveCounterDataRedundant_6)
    goto <bb 4>; [51.12%]
  else
    goto <bb 3>; [48.88%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Dem_ReportErrorStatus (6, 1);

  <bb 4> [local count: 1073741824]:
  # RetVal_20 = PHI <0(2), 1(3)>
  # DEBUG RetVal => RetVal_20
  # DEBUG BEGIN_STMT
  if (CheckedAliveCounterData_3 >= AliveCounterReference_12)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  AliveCounterData_13 = CheckedAliveCounterData_3 - AliveCounterReference_12;
  # DEBUG AliveCounterData => AliveCounterData_13
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _14 = (long unsigned int) AliveCounterReference_12;
  AliveCounterDataTemp_15 = 65536 - _14;
  # DEBUG AliveCounterDataTemp => AliveCounterDataTemp_15
  # DEBUG BEGIN_STMT
  _16 = (short unsigned int) AliveCounterDataTemp_15;
  AliveCounterData_17 = CheckedAliveCounterData_3 + _16;
  # DEBUG AliveCounterData => AliveCounterData_17

  <bb 7> [local count: 1073741824]:
  # AliveCounterData_18 = PHI <AliveCounterData_13(5), AliveCounterData_17(6)>
  # DEBUG AliveCounterData => AliveCounterData_18
  # DEBUG BEGIN_STMT
  *CPAliveCounter_19(D) = AliveCounterData_18;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_20;

}



;; Function WdgM_EB_UpdateTriggerConditions.isra.0 (WdgM_EB_UpdateTriggerConditions.isra.0, funcdef_no=73, decl_uid=8030, cgraph_uid=93, symbol_order=107)

Modification phase of node WdgM_EB_UpdateTriggerConditions.isra.0/107
WdgM_EB_UpdateTriggerConditions.isra.0 (WdgM_ModeType ISRA.134)
{
  const struct WdgM_EB_TriggerCfgType * const TriggerCfg;
  WdgM_EB_TriggerIdType TriggerId;
  WdgM_EB_TriggerConditionType TriggerCondition;
  unsigned char _2;
  int _3;
  unsigned int _6;
  unsigned int _7;
  const struct WdgM_EB_TriggerCfgType * _8;
  unsigned char _9;
  unsigned char WdgM_EB_GlobalStatus.43_10;
  unsigned char _14;

  <bb 10> [local count: 118111602]:
  # DEBUG CoreInstance s=> CoreInstance

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  _2 = ISRA.134_19(D);
  _3 = (int) _2;
  # DEBUG D#44 => &WdgM_EB_ModeCfg[_3]
  # DEBUG ModeCfg => D#44
  # DEBUG BEGIN_STMT
  TriggerCfg_4 = MEM[(const struct WdgM_EB_ModeCfgType *)&WdgM_EB_ModeCfg][_3].TriggerCfg;
  # DEBUG TriggerCfg => TriggerCfg_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TriggerId => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _6 = (unsigned int) TriggerId_5;
  _7 = _6 * 6;
  _8 = TriggerCfg_4 + _7;
  _9 = _8->WatchdogMode;
  if (_9 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  WdgM_EB_GlobalStatus.43_10 = WdgM_EB_GlobalStatus;
  if (WdgM_EB_GlobalStatus.43_10 == 3)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 315357973]:
  # DEBUG BEGIN_STMT
  TriggerCondition_11 = _8->TriggerCondition;
  # DEBUG TriggerCondition => TriggerCondition_11

  <bb 6> [local count: 477815111]:
  # TriggerCondition_12 = PHI <0(4), TriggerCondition_11(5)>
  # DEBUG TriggerCondition => TriggerCondition_12
  # DEBUG BEGIN_STMT
  Wdg_SetTriggerCondition (TriggerCondition_12);

  <bb 7> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  TriggerId_13 = TriggerId_5 + 1;
  # DEBUG TriggerId => TriggerId_13

  <bb 8> [local count: 1073741824]:
  # TriggerId_5 = PHI <0(2), TriggerId_13(7)>
  # DEBUG TriggerId => TriggerId_5
  # DEBUG BEGIN_STMT
  _14 = MEM[(const struct WdgM_EB_ModeCfgType *)&WdgM_EB_ModeCfg][_3].NumTriggers;
  if (TriggerId_5 < _14)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function WdgM_EB_CheckPredCP (WdgM_EB_CheckPredCP, funcdef_no=20, decl_uid=6379, cgraph_uid=21, symbol_order=21)

Modification phase of node WdgM_EB_CheckPredCP/21
WdgM_EB_CheckPredCP (const struct WdgM_EB_CPLogicalCfgType * CPLogicalCfg, WdgM_EB_SEIdType IntSEId, WdgM_EB_CPIdType CPId)
{
  boolean FoundCP;
  WdgM_EB_CPIdType CPIdx;
  Std_ReturnType RetVal;
  const struct WdgM_EB_CPType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct WdgM_EB_CPType * _4;
  unsigned char _5;
  unsigned char _9;
  unsigned char _10;

  <bb 2> [local count: 78030430]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FoundCP => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CPIdx => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = CPLogicalCfg_15(D)->PredCPs;
  _2 = (unsigned int) CPIdx_12;
  _3 = _2 * 2;
  _4 = _1 + _3;
  _5 = _4->SEId;
  if (_5 == IntSEId_16(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 344993248]:
  _9 = _4->CPId;
  if (_9 == CPId_17(D))
    goto <bb 7>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 5> [local count: 995711397]:
  # DEBUG BEGIN_STMT
  CPIdx_18 = CPIdx_12 + 1;
  # DEBUG CPIdx => CPIdx_18

  <bb 6> [local count: 1073741824]:
  # CPIdx_12 = PHI <0(2), CPIdx_18(5)>
  # DEBUG CPIdx => CPIdx_12
  # DEBUG BEGIN_STMT
  _10 = CPLogicalCfg_15(D)->NumOfPredCPs;
  if (_10 > CPIdx_12)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 78030429]:
  # FoundCP_13 = PHI <1(4), 0(6)>
  # DEBUG FoundCP => FoundCP_13
  # DEBUG BEGIN_STMT
  if (FoundCP_13 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 25750041]:
  # DEBUG D#24 => CPLogicalCfg_15(D)
  RetVal_6 = WdgM_EB_CheckPredCP.part.0 (IntSEId_16(D), CPId_17(D));

  <bb 9> [local count: 78030429]:
  # RetVal_11 = PHI <RetVal_6(8), 1(7)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_11;

}



;; Function WdgM_GetMode (WdgM_GetMode, funcdef_no=0, decl_uid=5385, cgraph_uid=1, symbol_order=1)

Modification phase of node WdgM_GetMode/1
WdgM_GetMode (WdgM_ModeType * Mode)
{
  Std_ReturnType RetVal;
  WdgM_EB_InitStatusType * _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _2 = *_1;
  if (_2 != 85)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 11, 16);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Mode_7(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 11, 20);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  _3 = WdgM_EB_Context.WdgM_EB_CurrentModeId;
  *Mode_7(D) = _3;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <1(3), 1(5), 0(6)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function WdgM_CheckpointReached (WdgM_CheckpointReached, funcdef_no=1, decl_uid=5390, cgraph_uid=2, symbol_order=2)

Modification phase of node WdgM_CheckpointReached/2
WdgM_CheckpointReached (WdgM_SupervisedEntityIdType SEID, WdgM_CheckpointIdType CheckpointID)
{
  const struct WdgM_EB_CPLogicalCfgType * const CPExtLogicalCfg;
  const struct WdgM_EB_CPLogicalCfgType * const CPIntLogicalCfg;
  const struct WdgM_EB_CPDeadlineCfgType * const CPDeadlineCfg;
  const struct WdgM_EB_CPAliveCfgType * const CPAliveCfg;
  const struct WdgM_EB_CPCfgType * const CPCfg;
  boolean CPFailed;
  WdgM_EB_CPIdType IntCPId;
  Std_ReturnType RetVal;
  WdgM_EB_InitStatusType * _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  WdgM_EB_LocalStatusType * _5;
  sizetype _6;
  WdgM_EB_LocalStatusType * _7;
  unsigned char _8;
  const struct WdgM_EB_CPCfgType * _9;
  unsigned int _10;
  unsigned int _11;
  unsigned char _12;
  int _13;
  unsigned char _14;
  unsigned char _15;
  int _16;
  unsigned char _17;
  unsigned char _18;
  int _19;
  unsigned char _20;
  unsigned char _21;
  int _48;
  unsigned char _49;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  IntCPId_32 = (WdgM_EB_CPIdType) CheckpointID_31(D);
  # DEBUG IntCPId => IntCPId_32
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _2 = *_1;
  if (_2 != 85)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 14, 16);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 22>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG SEId => SEID_34(D)
  # DEBUG IntSEId => &IntSEId
  # DEBUG INLINE_ENTRY WdgM_EB_SEId2IntSEId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SEID_34(D) <= 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  _48 = (int) SEID_34(D);
  _49 = WdgM_EB_SEIntSEId[_48];
  # DEBUG IntSEId => _49
  # DEBUG BEGIN_STMT
  # DEBUG IntSEId => _49
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => NULL
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  _3 = (int) _49;
  _4 = WdgM_EB_SECfg[_3].NumOfCPs;
  if (_4 <= IntCPId_32)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG IntSEId => 0
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => NULL
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 14, 19);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 22>; [100.00%]

  <bb 7> [local count: 90567975]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 14, 22);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 22>; [100.00%]

  <bb 8> [local count: 183880434]:
  # DEBUG BEGIN_STMT
  _5 = WdgM_EB_Context.WdgM_EB_SELocalStatus;
  _6 = (sizetype) _49;
  _7 = _5 + _6;
  _8 = *_7;
  if (_8 == 4)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 37217400]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 14, 25);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 22>; [100.00%]

  <bb 10> [local count: 146663034]:
  # DEBUG BEGIN_STMT
  # DEBUG CPFailed => 0
  # DEBUG BEGIN_STMT
  # DEBUG D#47 => &WdgM_EB_SECfg[_3]
  # DEBUG SECfg => D#47
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct WdgM_EB_SECfgType *)&WdgM_EB_SECfg][_3].CPCfg;
  _10 = (unsigned int) IntCPId_32;
  _11 = _10 * 64;
  CPCfg_35 = _9 + _11;
  # DEBUG CPCfg => CPCfg_35
  # DEBUG BEGIN_STMT
  _12 = WdgM_EB_Context.WdgM_EB_CurrentModeId;
  _13 = (int) _12;
  CPAliveCfg_36 = CPCfg_35->AliveCfgPtr[_13];
  # DEBUG CPAliveCfg => CPAliveCfg_36
  # DEBUG BEGIN_STMT
  if (CPAliveCfg_36 != 0B)
    goto <bb 11>; [53.47%]
  else
    goto <bb 13>; [46.53%]

  <bb 11> [local count: 78420724]:
  # DEBUG BEGIN_STMT
  _14 = WdgM_EB_CheckpointReachedAlive (_49, IntCPId_32);
  if (_14 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 39210362]:
  # DEBUG BEGIN_STMT
  # DEBUG CPFailed => 1

  <bb 13> [local count: 146663034]:
  # CPFailed_23 = PHI <0(10), 0(11), 1(12)>
  # DEBUG CPFailed => CPFailed_23
  # DEBUG BEGIN_STMT
  _15 = WdgM_EB_Context.WdgM_EB_CurrentModeId;
  _16 = (int) _15;
  CPDeadlineCfg_38 = CPCfg_35->DeadlineCfgPtr[_16];
  # DEBUG CPDeadlineCfg => CPDeadlineCfg_38
  # DEBUG BEGIN_STMT
  if (CPDeadlineCfg_38 != 0B)
    goto <bb 14>; [53.47%]
  else
    goto <bb 16>; [46.53%]

  <bb 14> [local count: 78420724]:
  # DEBUG BEGIN_STMT
  _17 = WdgM_EB_CheckpointReachedDeadline (_49, IntCPId_32, CPDeadlineCfg_38);
  if (_17 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 39210362]:
  # DEBUG BEGIN_STMT
  # DEBUG CPFailed => 1

  <bb 16> [local count: 146663034]:
  # CPFailed_24 = PHI <CPFailed_23(13), CPFailed_23(14), 1(15)>
  # DEBUG CPFailed => CPFailed_24
  # DEBUG BEGIN_STMT
  _18 = WdgM_EB_Context.WdgM_EB_CurrentModeId;
  _19 = (int) _18;
  CPIntLogicalCfg_40 = CPCfg_35->IntLogicalCfgPtr[_19];
  # DEBUG CPIntLogicalCfg => CPIntLogicalCfg_40
  # DEBUG BEGIN_STMT
  CPExtLogicalCfg_41 = CPCfg_35->ExtLogicalCfgPtr[_19];
  # DEBUG CPExtLogicalCfg => CPExtLogicalCfg_41
  # DEBUG BEGIN_STMT
  if (CPIntLogicalCfg_40 != 0B)
    goto <bb 17>; [53.47%]
  else
    goto <bb 19>; [46.53%]

  <bb 17> [local count: 78420724]:
  # DEBUG BEGIN_STMT
  _20 = WdgM_EB_CheckpointReachedIntLogical (_49, IntCPId_32, CPIntLogicalCfg_40);
  if (_20 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 39210362]:
  # DEBUG BEGIN_STMT
  # DEBUG CPFailed => 1

  <bb 19> [local count: 146663034]:
  # CPFailed_25 = PHI <CPFailed_24(16), CPFailed_24(17), 1(18)>
  # DEBUG CPFailed => CPFailed_25
  # DEBUG BEGIN_STMT
  if (CPExtLogicalCfg_41 != 0B)
    goto <bb 20>; [53.47%]
  else
    goto <bb 21>; [46.53%]

  <bb 20> [local count: 78420724]:
  # DEBUG BEGIN_STMT
  _21 = WdgM_EB_CheckpointReachedExtLogical (_49, IntCPId_32, CPExtLogicalCfg_41, &WdgM_EB_Context);
  if (_21 != 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 21> [local count: 107452672]:
  # DEBUG CPFailed => CPFailed_25
  # DEBUG BEGIN_STMT

  <bb 22> [local count: 1073741823]:
  # RetVal_22 = PHI <1(3), 1(6), 1(7), 1(9), CPFailed_25(21), 1(20)>
  # DEBUG CPFailed => NULL
  # DEBUG RetVal => RetVal_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#46 => {CLOBBER}
  # DEBUG IntSEId => D#46
  return RetVal_22;

}



;; Function WdgM_UpdateAliveCounter (WdgM_UpdateAliveCounter, funcdef_no=2, decl_uid=5387, cgraph_uid=3, symbol_order=3)

Modification phase of node WdgM_UpdateAliveCounter/3
WdgM_UpdateAliveCounter (WdgM_SupervisedEntityIdType SEID)
{
  const struct WdgM_EB_CPCfgType * const CPCfg;
  WdgM_EB_CPIdType FoundCPId;
  uint16 NumOfAliveSupervisions;
  WdgM_EB_CPIdType CPId;
  Std_ReturnType RetVal;
  WdgM_EB_InitStatusType * _1;
  unsigned char _2;
  int _3;
  const struct WdgM_EB_CPCfgType * _4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  int _8;
  const struct WdgM_EB_CPAliveCfgType * _9;
  unsigned char _10;
  short unsigned int _11;
  int _32;
  unsigned char _33;

  <bb 2> [local count: 694774119]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _2 = *_1;
  if (_2 != 85)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 458550918]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 4, 16);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 4, 23);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => SEID_21(D)
  # DEBUG IntSEId => &IntSEId
  # DEBUG INLINE_ENTRY WdgM_EB_SEId2IntSEId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SEID_21(D) <= 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _32 = (int) SEID_21(D);
  _33 = WdgM_EB_SEIntSEId[_32];
  # DEBUG IntSEId => _33
  # DEBUG BEGIN_STMT
  # DEBUG IntSEId => _33
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => NULL
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NumOfAliveSupervisions => 0
  # DEBUG BEGIN_STMT
  # DEBUG FoundCPId => 0
  # DEBUG BEGIN_STMT
  _3 = (int) _33;
  # DEBUG D#49 => &WdgM_EB_SECfg[_3]
  # DEBUG SECfg => D#49
  # DEBUG BEGIN_STMT
  # DEBUG CPId => 0
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 118111600]:
  # DEBUG IntSEId => 0
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => NULL
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 4, 19);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct WdgM_EB_SECfgType *)&WdgM_EB_SECfg][_3].CPCfg;
  _5 = (unsigned int) CPId_13;
  _6 = _5 * 64;
  CPCfg_27 = _4 + _6;
  # DEBUG CPCfg => CPCfg_27
  # DEBUG BEGIN_STMT
  _7 = WdgM_EB_Context.WdgM_EB_CurrentModeId;
  _8 = (int) _7;
  _9 = CPCfg_27->AliveCfgPtr[_8];
  if (_9 != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 8> [local count: 668941156]:
  # DEBUG BEGIN_STMT
  NumOfAliveSupervisions_28 = NumOfAliveSupervisions_15 + 1;
  # DEBUG NumOfAliveSupervisions => NumOfAliveSupervisions_28
  # DEBUG BEGIN_STMT
  # DEBUG FoundCPId => CPId_13

  <bb 9> [local count: 955630223]:
  # NumOfAliveSupervisions_14 = PHI <NumOfAliveSupervisions_15(7), NumOfAliveSupervisions_28(8)>
  # FoundCPId_16 = PHI <FoundCPId_17(7), CPId_13(8)>
  # DEBUG FoundCPId => FoundCPId_16
  # DEBUG NumOfAliveSupervisions => NumOfAliveSupervisions_14
  # DEBUG BEGIN_STMT
  CPId_29 = CPId_13 + 1;
  # DEBUG CPId => CPId_29

  <bb 10> [local count: 1073741824]:
  # CPId_13 = PHI <0(5), CPId_29(9)>
  # NumOfAliveSupervisions_15 = PHI <0(5), NumOfAliveSupervisions_14(9)>
  # FoundCPId_17 = PHI <0(5), FoundCPId_16(9)>
  # DEBUG FoundCPId => FoundCPId_17
  # DEBUG NumOfAliveSupervisions => NumOfAliveSupervisions_15
  # DEBUG CPId => CPId_13
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct WdgM_EB_SECfgType *)&WdgM_EB_SECfg][_3].NumOfCPs;
  if (_10 > CPId_13)
    goto <bb 7>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 11> [local count: 118111601]:
  # NumOfAliveSupervisions_22 = PHI <NumOfAliveSupervisions_15(10)>
  # FoundCPId_23 = PHI <FoundCPId_17(10)>
  # DEBUG BEGIN_STMT
  if (NumOfAliveSupervisions_22 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  if (NumOfAliveSupervisions_22 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 20078972]:
  # DEBUG BEGIN_STMT
  _11 = (short unsigned int) FoundCPId_23;
  RetVal_26 = WdgM_CheckpointReached (SEID_21(D), _11);
  # DEBUG RetVal => RetVal_26
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 38976828]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 4, 24);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 15> [local count: 694774120]:
  # RetVal_12 = PHI <1(3), 1(11), 1(6), 1(14), RetVal_26(13)>
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function WdgM_GetLocalStatus (WdgM_GetLocalStatus, funcdef_no=3, decl_uid=5393, cgraph_uid=4, symbol_order=4)

Modification phase of node WdgM_GetLocalStatus/4
WdgM_GetLocalStatus (WdgM_SupervisedEntityIdType SEID, WdgM_LocalStatusType * Status)
{
  Std_ReturnType RetVal;
  WdgM_EB_InitStatusType * _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  int _14;
  unsigned char _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _2 = *_1;
  if (_2 != 85)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 12, 16);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Status_8(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 12, 20);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  # DEBUG SEId => SEID_9(D)
  # DEBUG IntSEId => &IntSEId
  # DEBUG INLINE_ENTRY WdgM_EB_SEId2IntSEId
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SEID_9(D) <= 2)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 226612052]:
  # DEBUG BEGIN_STMT
  _14 = (int) SEID_9(D);
  _15 = WdgM_EB_SEIntSEId[_14];
  # DEBUG IntSEId => _15
  # DEBUG BEGIN_STMT
  # DEBUG IntSEId => _15
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => NULL
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  _3 = (int) _15;
  _4 = WdgM_EB_SELocalStatus[_3];
  *Status_8(D) = _4;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 226612052]:
  # DEBUG IntSEId => 0
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SEId => NULL
  # DEBUG IntSEId => NULL
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 12, 19);

  <bb 9> [local count: 1073741824]:
  # RetVal_5 = PHI <1(3), 1(5), 1(8), 0(7)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#50 => {CLOBBER}
  # DEBUG IntSEId => D#50
  return RetVal_5;

}



;; Function WdgM_GetGlobalStatus (WdgM_GetGlobalStatus, funcdef_no=4, decl_uid=5395, cgraph_uid=5, symbol_order=5)

Modification phase of node WdgM_GetGlobalStatus/5
WdgM_GetGlobalStatus (WdgM_GlobalStatusType * Status)
{
  Std_ReturnType RetVal;
  WdgM_EB_InitStatusType * _1;
  unsigned char _2;
  unsigned char WdgM_EB_GlobalStatus.42_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _2 = *_1;
  if (_2 != 85)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 13, 16);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Status_7(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 13, 20);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  WdgM_EB_GlobalStatus.42_3 = WdgM_EB_GlobalStatus;
  *Status_7(D) = WdgM_EB_GlobalStatus.42_3;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <1(3), 1(5), 0(6)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function WdgM_PerformReset (WdgM_PerformReset, funcdef_no=5, decl_uid=5399, cgraph_uid=6, symbol_order=6)

Modification phase of node WdgM_PerformReset/6
WdgM_PerformReset ()
{
  WdgM_EB_InitStatusType * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _2 = *_1;
  if (_2 != 85)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 15, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 365072224]:
  WdgM_PerformReset.part.0 ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function WdgM_EB_SetMode.constprop (WdgM_EB_SetMode.constprop.0, funcdef_no=78, decl_uid=8083, cgraph_uid=107, symbol_order=121)

Modification phase of node WdgM_EB_SetMode.constprop/121
Adjusting mask for param 1 to 0x1
Setting value range of param 1 [0, 1]
WdgM_EB_SetMode.constprop (WdgM_ModeType Mode, boolean IsNormalOperation)
{
  Std_ReturnType RetVal;
  WdgM_EB_SEIdType IntSEId;
  WdgM_EB_SEIdType IntCoreSEId;
  WdgM_EB_IntRamIdxType IntRamIdxBase;
  const struct WdgM_EB_SECfgType * const SECfg;
  uint16 * const SEWData_FailedAliveSupervisionRefCycleCnt;
  const boolean SEIsActive;
  struct WdgM_EB_CoreContextType * CoreInstance;
  unsigned char WdgM_EB_GlobalStatus.49_1;
  int _4;
  uint16 * _6;
  unsigned int _7;
  unsigned int _8;
  WdgM_ModeType * _10;
  unsigned char _13;
  unsigned char _14;
  unsigned char _16;
  long unsigned int _17;

  <bb 19> [local count: 380759509]:
  # DEBUG CoreInstance => &WdgM_EB_Context

  <bb 2> [local count: 380759509]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  WdgM_EB_GlobalStatus.49_1 = WdgM_EB_GlobalStatus;
  if (WdgM_EB_GlobalStatus.49_1 > 1)
    goto <bb 3>; [59.00%]
  else
    goto <bb 4>; [41.00%]

  <bb 3> [local count: 224648110]:
  if (IsNormalOperation_2(D) != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435454]:
  # IntSEId_22 = PHI <0(2), 0(3)>
  # IntRamIdxBase_23 = PHI <0(2), 0(3)>
  goto <bb 16>; [100.00%]

  <bb 5> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _4 = (int) IntSEId_3;
  SECfg_5 = &WdgM_EB_SECfg[_4];
  # DEBUG SECfg => SECfg_5
  # DEBUG BEGIN_STMT
  # DEBUG D#52 => &WdgM_EB_SELocalStatus[_4]
  # DEBUG SEWData_SELocalStatus => D#52
  # DEBUG BEGIN_STMT
  _6 = WdgM_EB_Context.WdgM_EB_FailedAliveSupervisionRefCycleCnt;
  _7 = (unsigned int) IntSEId_3;
  _8 = _7 * 2;
  SEWData_FailedAliveSupervisionRefCycleCnt_9 = _6 + _8;
  # DEBUG SEWData_FailedAliveSupervisionRefCycleCnt => SEWData_FailedAliveSupervisionRefCycleCnt_9
  # DEBUG BEGIN_STMT
  _10 = &MEM[(unsigned char *)&WdgM_EB_Context + 20B];
  # DEBUG D#19 => &WdgM_EB_Context
  SEIsActive_12 = WdgM_EB_SEIsActiveResetData.isra.0 (Mode_11(D), SECfg_5, IsNormalOperation_2(D), _10);
  # DEBUG SEIsActive => SEIsActive_12
  # DEBUG BEGIN_STMT
  if (SEIsActive_12 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  _13 = MEM[(WdgM_LocalStatusType *)&WdgM_EB_SELocalStatus][_4];
  if (_13 == 4)
    goto <bb 8>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 265751102]:
  if (IsNormalOperation_2(D) == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 8> [local count: 269777634]:
  # DEBUG BEGIN_STMT
  MEM[(WdgM_LocalStatusType *)&WdgM_EB_SELocalStatus][_4] = 0;
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  _14 = MEM[(WdgM_LocalStatusType *)&WdgM_EB_SELocalStatus][_4];
  if (_14 <= 1)
    goto <bb 11>; [41.00%]
  else
    goto <bb 10>; [59.00%]

  <bb 10> [local count: 237565379]:
  if (IsNormalOperation_2(D) == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 283870495]:
  # DEBUG BEGIN_STMT
  # DEBUG OldLocalStatus => _14
  # DEBUG BEGIN_STMT
  MEM[(WdgM_LocalStatusType *)&WdgM_EB_SELocalStatus][_4] = 4;

  <bb 12> [local count: 805306370]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  WdgM_EB_SEResetCPAliveData (IntSEId_3, IntRamIdxBase_15, IsNormalOperation_2(D), &WdgM_EB_Context);
  # DEBUG BEGIN_STMT
  if (SEIsActive_12 == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 13> [local count: 539555268]:
  if (IsNormalOperation_2(D) == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 535528736]:
  # DEBUG BEGIN_STMT
  *SEWData_FailedAliveSupervisionRefCycleCnt_9 = 0;
  # DEBUG BEGIN_STMT
  WdgM_EB_SEResetData (IntSEId_3);

  <bb 15> [local count: 805306370]:
  # DEBUG BEGIN_STMT
  _16 = MEM[(const struct WdgM_EB_SECfgType *)&WdgM_EB_SECfg][_4].NumOfCPs;
  _17 = (long unsigned int) _16;
  IntRamIdxBase_18 = IntRamIdxBase_15 + _17;
  # DEBUG IntRamIdxBase => IntRamIdxBase_18
  # DEBUG BEGIN_STMT
  IntCoreSEId_19 = IntSEId_3 + 1;
  # DEBUG IntCoreSEId => IntCoreSEId_19
  # DEBUG BEGIN_STMT
  # DEBUG IntSEId => IntCoreSEId_19

  <bb 16> [local count: 1073741824]:
  # IntSEId_3 = PHI <IntSEId_22(4), IntCoreSEId_19(15)>
  # IntRamIdxBase_15 = PHI <IntRamIdxBase_23(4), IntRamIdxBase_18(15)>
  # DEBUG RetVal => NULL
  # DEBUG IntRamIdxBase => IntRamIdxBase_15
  # DEBUG IntCoreSEId => IntSEId_3
  # DEBUG IntSEId => IntSEId_3
  # DEBUG BEGIN_STMT
  if (IntSEId_3 != 3)
    goto <bb 5>; [75.00%]
  else
    goto <bb 17>; [25.00%]

  <bb 17> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  RetVal_20 = WdgM_EB_PerformWdgIfModeSwitch (Mode_11(D));
  # DEBUG RetVal => RetVal_20
  # DEBUG BEGIN_STMT
  WdgM_EB_Context.WdgM_EB_CurrentModeId = Mode_11(D);

  <bb 18> [local count: 380759511]:
  # RetVal_21 = PHI <1(3), RetVal_20(17)>
  # DEBUG RetVal => RetVal_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_21;

}



;; Function WdgM_MainFunction (WdgM_MainFunction, funcdef_no=7, decl_uid=5401, cgraph_uid=8, symbol_order=8)

Modification phase of node WdgM_MainFunction/8
WdgM_MainFunction ()
{
  const WdgM_EB_InitStatusType DoNotCheckInitRequest;
  unsigned char _1;
  WdgM_EB_InitStatusType * _2;
  WdgM_EB_InitStatusType * _3;
  unsigned char _4;
  unsigned char _5;
  WdgM_EB_InitStatusType * _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CoreInstance => &WdgM_EB_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = WdgM_EB_Context.WdgM_EB_MainFunctionActive;
  if (_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 8, 131);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  WdgM_EB_Context.WdgM_EB_MainFunctionActive = 1;
  # DEBUG BEGIN_STMT
  _2 = WdgM_EB_Context.WdgM_EB_InitStatus;
  DoNotCheckInitRequest_16 = *_2;
  # DEBUG DoNotCheckInitRequest => DoNotCheckInitRequest_16
  # DEBUG BEGIN_STMT
  if (DoNotCheckInitRequest_16 != 170)
    goto <bb 5>; [48.88%]
  else
    goto <bb 6>; [51.12%]

  <bb 5> [local count: 351646152]:
  # DEBUG BEGIN_STMT
  WdgM_EB_CheckDeinitRequest (&WdgM_EB_Context);

  <bb 6> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  WdgM_EB_CheckMainFunctionTimingViolation (&WdgM_EB_Context);
  # DEBUG BEGIN_STMT
  _3 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _4 = *_3;
  if (_4 != 170)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 351646152]:
  # DEBUG BEGIN_STMT
  WdgM_EB_UpdateSupervisionCycleCounter (&WdgM_EB_Context);
  # DEBUG BEGIN_STMT
  WdgM_EB_SetLocalStatus (&WdgM_EB_Context);
  # DEBUG BEGIN_STMT
  WdgM_EB_SetGlobalStatus (&WdgM_EB_Context);
  # DEBUG BEGIN_STMT
  _29 = MEM[(unsigned char *)&WdgM_EB_Context + 20B];
  # DEBUG D#45 => &WdgM_EB_Context
  WdgM_EB_UpdateTriggerConditions.isra.0 (_29);

  <bb 8> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (DoNotCheckInitRequest_16 == 170)
    goto <bb 9>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 9> [local count: 145607981]:
  # DEBUG BEGIN_STMT
  _5 = WdgM_EB_CheckInitRequest (&WdgM_EB_Context);
  if (_5 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 72803991]:
  # DEBUG BEGIN_STMT
  WdgM_EB_Context.WdgM_EB_SupervisionCycleCnt = 0;

  <bb 11> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _6 = WdgM_EB_Context.WdgM_EB_InitStatus;
  _7 = *_6;
  if (_7 != 170)
    goto <bb 12>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 12> [local count: 351646152]:
  # DEBUG BEGIN_STMT
  _8 = WdgM_EB_CheckModeSwitchRequest (&WdgM_EB_Context);
  if (_8 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 175823076]:
  # DEBUG BEGIN_STMT
  WdgM_EB_Context.WdgM_EB_SupervisionCycleCnt = 0;

  <bb 14> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  WdgM_EB_Context.WdgM_EB_MainFunctionActive = 0;

  <bb 15> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function WdgM_EB_StoreRedundantData8 (WdgM_EB_StoreRedundantData8, funcdef_no=48, decl_uid=6328, cgraph_uid=49, symbol_order=49)

Modification phase of node WdgM_EB_StoreRedundantData8/49
WdgM_EB_StoreRedundantData8 (uint16 * RedundantData, uint8 Data)
{
  WdgM_EB_ExpiredSEIDType LocalSEID;
  const WdgM_EB_SEIdType ExpiredSEIDRedundant;
  short unsigned int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ExpiredSEIDRedundant_4 = ~Data_3(D);
  # DEBUG ExpiredSEIDRedundant => ExpiredSEIDRedundant_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  LocalSEID_5 = (WdgM_EB_ExpiredSEIDType) Data_3(D);
  # DEBUG LocalSEID => LocalSEID_5
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) ExpiredSEIDRedundant_4;
  _2 = _1 << 8;
  LocalSEID_6 = _2 | LocalSEID_5;
  # DEBUG LocalSEID => LocalSEID_6
  # DEBUG BEGIN_STMT
  *RedundantData_8(D) = LocalSEID_6;
  return;

}



;; Function WdgM_EB_GetCheckedRedundantData8 (WdgM_EB_GetCheckedRedundantData8, funcdef_no=49, decl_uid=6331, cgraph_uid=50, symbol_order=50)

Modification phase of node WdgM_EB_GetCheckedRedundantData8/50
WdgM_EB_GetCheckedRedundantData8 (uint16 RedundantData, uint8 * Data)
{
  const WdgM_EB_SEIdType ExpiredSEIDRedundant;
  const WdgM_EB_SEIdType CheckedExpiredSEID;
  Std_ReturnType RetVal;
  short unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CheckedExpiredSEID_6 = (const WdgM_EB_SEIdType) RedundantData_5(D);
  # DEBUG CheckedExpiredSEID => CheckedExpiredSEID_6
  # DEBUG BEGIN_STMT
  _1 = RedundantData_5(D) >> 8;
  _2 = (unsigned char) _1;
  ExpiredSEIDRedundant_7 = ~_2;
  # DEBUG ExpiredSEIDRedundant => ExpiredSEIDRedundant_7
  # DEBUG BEGIN_STMT
  if (CheckedExpiredSEID_6 == ExpiredSEIDRedundant_7)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  *Data_9(D) = CheckedExpiredSEID_6;

  <bb 4> [local count: 1073741824]:
  # RetVal_3 = PHI <0(3), 1(2)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function WdgM_GetFirstExpiredSEID (WdgM_GetFirstExpiredSEID, funcdef_no=6, decl_uid=5397, cgraph_uid=7, symbol_order=7)

Modification phase of node WdgM_GetFirstExpiredSEID/7
WdgM_GetFirstExpiredSEID (WdgM_SupervisedEntityIdType * SEID)
{
  WdgM_EB_SEIdType LocalSEId;
  Std_ReturnType RetVal;
  short unsigned int WdgM_EB_ExpiredSEID.45_1;
  unsigned char LocalSEId.46_2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SEID_6(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (13, 0, 16, 20);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  LocalSEId = 0;
  # DEBUG BEGIN_STMT
  WdgM_EB_ExpiredSEID.45_1 = WdgM_EB_ExpiredSEID;
  RetVal_10 = WdgM_EB_GetCheckedExpiredSEID (WdgM_EB_ExpiredSEID.45_1, &LocalSEId);
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  LocalSEId.46_2 = LocalSEId;
  _3 = (short unsigned int) LocalSEId.46_2;
  *SEID_6(D) = _3;
  LocalSEId ={v} {CLOBBER};

  <bb 5> [local count: 1073741824]:
  # RetVal_4 = PHI <1(3), RetVal_10(4)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}


