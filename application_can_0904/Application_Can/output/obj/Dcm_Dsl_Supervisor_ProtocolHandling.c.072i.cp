
IPA constant propagation start:
Determining dynamic type for call: StackCanAcceptRequest_15 = Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest (StackNumber_13(D), &TYPE1PresumptiveProtocolIndex, 1);
  Starting walk at: StackCanAcceptRequest_15 = Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest (StackNumber_13(D), &TYPE1PresumptiveProtocolIndex, 1);
  instance pointer: &TYPE1PresumptiveProtocolIndex  Outer instance pointer: TYPE1PresumptiveProtocolIndex offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_End/78:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/77:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/76:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/75:
  Jump functions of caller  Dcm_Dsl_BufferFree/74:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/73:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetState/72:
  Jump functions of caller  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/71:
  Jump functions of caller  Dcm_Dsp_ProtocolCancel/70:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/69:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/68:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StopTimer/65:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/64:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/63:
  Jump functions of caller  Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/62:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/61:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/60:
  Jump functions of caller  Dcm_Dsl_BufferGive/59:
  Jump functions of caller  Dcm_Dsl_BufferChangeState/58:
  Jump functions of caller  Dcm_Dsp_ProtocolStart/57:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/56:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/55:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/53:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/52:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/51:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/50:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/48:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/47:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 -> Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 -> Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 -> Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 -> Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 -> Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 -> Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 -> Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 -> Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 -> Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 -> Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1ff
         VR  [12, 267]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35 -> Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35 -> Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 -> Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/20:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 -> Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 : 
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 -> Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16 -> Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 -> Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/10:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/9:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 -> Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7 -> Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/6:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5:
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 -> Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 -> Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 -> Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 -> Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 : 
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_Init/4:

 Propagating constants:

Not considering Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolHandling_Init for cloning; -fipa-cp-clone disabled.

overall_size: 1348, max_new_size: 11001
 - context independent values, size: 13, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Dcm_StackNumberType [0, 1]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Dcm_StackNumberType [0, 1]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Dcm_ProtocolIndexType [0, 1]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1ff
         Dcm_BufferUserType [12, 267]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Dcm_StackNumberType [0, 1]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dcm_ProtocolIndexType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         boolean [1, 1]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Dcm_StackNumberType [0, 1]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/20:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17:
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
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15:
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
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13:
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
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5:
  Node: Dcm_Dsl_Supervisor_ProtocolHandling_Init/4:

IPA decision stage:

 - Creating a specialized node of Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35 for all known contexts.
    replacing param #2 RequestIsType1 with const 1
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest.constprop/86:
 param 0: value = 0x0, mask = 0x1
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44:
 param 0: value = 0x0, mask = 0x1
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41:
 param 0: value = 0x0, mask = 0x1
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39:
 param 0: value = 0x0, mask = 0x1
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37:
 param 1: value = 0x0, mask = 0x1ff
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35:
 param 0: value = 0x0, mask = 0x1
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31:
 param 0: value = 0x0, mask = 0x1

IPA constant propagation end

Reclaiming functions: Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest.constprop.0/86 (Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest.constprop) @070711c0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (1073741823 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 (524952378 (estimated locally),0.49 per call) Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 (410932721 (estimated locally),0.38 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_End/78 (Dcm_Dsl_Supervisor_MainConnectionHandling_End) @06ec41c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (972644962 (estimated locally),0.91 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/77 (Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp) @06ec4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (101096862 (estimated locally),0.09 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/76 (Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest) @06ec4700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (153391689 (estimated locally),0.14 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/75 (Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout) @06ec4460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsl_BufferFree/74 (Dcm_Dsl_BufferFree) @06ec40e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/73 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection) @06e9fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (24550513 (estimated locally),0.16 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetState/72 (Dcm_Dsl_RxConnectionGetState) @06e9fc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (920304118 (estimated locally),6.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/71 (Dcm_Dsl_Supervisor_DisinhibitRequestProcessing) @06e9f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (59652324 (estimated locally),0.06 per call) 
  Calls: 
Dcm_Dsp_ProtocolCancel/70 (Dcm_Dsp_ProtocolCancel) @06e9f0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (177428100 (estimated locally),0.50 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (143172735 (estimated locally),0.40 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (143172735 (estimated locally),0.40 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (143172735 (estimated locally),0.40 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (143172735 (estimated locally),0.40 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (59032178 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (59032178 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (59032178 (estimated locally),0.05 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/69 (Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection) @06e95d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (797455018 (estimated locally),0.74 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (477218590 (estimated locally),0.44 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/68 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd) @06e95c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (592505889 (estimated locally),0.55 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession) @06e95b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (592505889 (estimated locally),0.55 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (59652324 (estimated locally),0.06 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer) @06e959a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25 (273804165 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (22686136 (estimated locally),0.02 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (151089002 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (276286807 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StopTimer/65 (Dcm_Dsl_DiagnosticSessionHandler_StopTimer) @06e958c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25 (273804165 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (151089002 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (276286807 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/64 (Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC) @06e957e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (101096862 (estimated locally),0.09 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (276286807 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/63 (Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue) @06e95700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (276286807 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/62 (Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession) @06e95540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (93735218 (estimated locally),0.09 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/61 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @06e95460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (12252741 (estimated locally),0.01 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (7995715 (estimated locally),0.01 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/60 (Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex) @06e95380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferGive/59 (Dcm_Dsl_BufferGive) @06e951c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37 (1073634451 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferChangeState/58 (Dcm_Dsl_BufferChangeState) @06e950e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_ProtocolStart/57 (Dcm_Dsp_ProtocolStart) @068f1700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (1073634451 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/56 (Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol) @068f1000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (1073634451 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/55 (Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer) @068f1ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Dcm_MainConnectionConfig/54 (Dcm_MainConnectionConfig) @06e94288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @068f1e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (1073419798 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (797455017 (estimated locally),0.74 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (920304118 (estimated locally),6.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (153437706 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (477218590 (estimated locally),0.44 per call) Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/52 (Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol) @068f18c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (346397702 (estimated locally),0.32 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/51 (Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession) @068f12a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (143434728 (estimated locally),0.13 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/50 (Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel) @068f11c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (143434728 (estimated locally),0.13 per call) 
  Calls: 
Dcm_ProtocolConfig/49 (Dcm_ProtocolConfig) @068f0240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 (read)Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 (read)Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (read)Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/6 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (read)Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/9 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (read)Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16 (read)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/48 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06e75e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (143434728 (estimated locally),0.13 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (236235013 (estimated locally),0.66 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/47 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06e75c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (143434728 (estimated locally),0.13 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (236235013 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession) @06e757e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:357878148 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (357878146 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (95627933 (estimated locally),0.27 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess) @06e75620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (59774864 (estimated locally),0.06 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (797455018 (estimated locally),0.74 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/69 (797455018 (estimated locally),0.74 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/68 (592505889 (estimated locally),0.55 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67 (592505889 (estimated locally),0.55 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (151089002 (estimated locally),0.14 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/65 (151089002 (estimated locally),0.14 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (797455017 (estimated locally),0.74 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (276286807 (estimated locally),0.26 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (276286807 (estimated locally),0.26 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/65 (276286807 (estimated locally),0.26 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/64 (276286807 (estimated locally),0.26 per call) Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/63 (276286807 (estimated locally),0.26 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack) @06e6dd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_LatestExternalUDSProtocolIndex/2 (write)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 (715863675 (estimated locally),0.68 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/48 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (59774864 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 (346397702 (estimated locally),0.32 per call) Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/52 (346397702 (estimated locally),0.32 per call) Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest.constprop/86 (1073741823 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/47 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 (Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol) @06e6db60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (346397702 (estimated locally),0.32 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack) @06e6d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/62 (93735218 (estimated locally),0.09 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/61 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack) @06e6d7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 (144890808 (estimated locally),0.14 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/51 (143434728 (estimated locally),0.13 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/48 (143434728 (estimated locally),0.13 per call) Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/50 (143434728 (estimated locally),0.13 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/47 (143434728 (estimated locally),0.13 per call) Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols) @06e6d620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: local
  Function flags: count:357878150 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 (1052582796 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/48 (236235013 (estimated locally),0.66 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/47 (236235013 (estimated locally),0.66 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol) @06e6d460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (339021581 (estimated locally),0.95 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16 (51823687 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 (95627933 (estimated locally),0.27 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/69 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/64 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/75 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/65 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/64 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/63 (214748364 (estimated locally),0.20 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol) @06e25ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolQueue/1 (read)Dcm_MainConnectionConfig/54 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_ProtocolStart/57 (1073634451 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/56 (1073634451 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/55 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/55 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol/37 (Dcm_Dsl_Supervisor_ProtocolHandling_GiveTYPE1RequestBufferToProtocol) @06e252a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_BufferGive/59 (1073634451 (estimated locally),1.00 per call) Dcm_Dsl_BufferChangeState/58 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_BufferChangeState/58 (357878150 (estimated locally),0.33 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack) @06e17b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:404414748 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest/35 (Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest) @06e179a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack) @06e177e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:381851548 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (413653282 (estimated locally),0.39 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive) @06e17620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073527120 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 (Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack) @06e17460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:377410988 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest.constprop/86 (524952378 (estimated locally),0.49 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (273011166 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 (Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request) @06e172a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolStatus/0 (read)
  Referring: 
  Availability: local
  Function flags: count:357878148 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_MainConnNotBusy_StackCanAcceptRequest.constprop/86 (410932721 (estimated locally),0.38 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack) @06e170e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolStatus/0 (read)
  Referring: 
  Availability: local
  Function flags: count:428627386 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 (715863675 (estimated locally),0.68 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (92823797 (estimated locally),0.09 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE) @06e0fee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolStatus/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (765045345 (estimated locally),0.71 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy) @06e0fd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolStatus/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (308696479 (estimated locally),0.29 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE) @06e0fb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (765045345 (estimated locally),0.71 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive) @06e0f9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (308696479 (estimated locally),0.29 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25 (Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd) @06e0f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (273804165 (estimated locally),0.25 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/65 (273804165 (estimated locally),0.25 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE) @06e0f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished) @06e0f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/77 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22 (Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent) @06e06ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout) @06e06d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (write)Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (write)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/48 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_End/78 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (47877856 (estimated locally),0.04 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/64 (101096862 (estimated locally),0.09 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/66 (22686136 (estimated locally),0.02 per call) Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/77 (101096862 (estimated locally),0.09 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/47 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/20 (Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex) @06e067e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_LatestExternalUDSProtocolIndex/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession) @06e06620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:357878146 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ProtocolCancel/70 (177428100 (estimated locally),0.50 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 (357878146 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols) @06e062a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolQueue/1 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:357878148 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ProtocolCancel/70 (143172735 (estimated locally),0.40 per call) Dcm_Dsp_ProtocolCancel/70 (143172735 (estimated locally),0.40 per call) Dcm_Dsp_ProtocolCancel/70 (143172735 (estimated locally),0.40 per call) Dcm_Dsp_ProtocolCancel/70 (143172735 (estimated locally),0.40 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (339021581 (estimated locally),0.95 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive) @06e029a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073419798 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/76 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/76 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/76 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/76 (153391689 (estimated locally),0.14 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (1073419798 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack) @06e027e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolQueue/1 (read)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (51823687 (estimated locally),0.14 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol) @06e02620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (972644962 (estimated locally),0.91 per call) Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (47877856 (estimated locally),0.04 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (797455018 (estimated locally),0.74 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (276286807 (estimated locally),0.26 per call) Dcm_Dsl_Supervisor_ProtocolHandling_DispatchPresumptiveTYPE1Protocol/43 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/71 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_BufferFree/74 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack) @06dedee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: available
  Function flags: count:153437706 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/73 (24550513 (estimated locally),0.16 per call) Dcm_Dsl_RxConnectionGetState/72 (920304118 (estimated locally),6.00 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (920304118 (estimated locally),6.00 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (153437706 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment) @06dedd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/61 (12252741 (estimated locally),0.01 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/61 (7995715 (estimated locally),0.01 per call) Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (92823797 (estimated locally),0.09 per call) Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 (273011166 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (413653282 (estimated locally),0.39 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 (308696479 (estimated locally),0.29 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26 (308696479 (estimated locally),0.29 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29 (765045345 (estimated locally),0.71 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27 (765045345 (estimated locally),0.71 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree) @06dedb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1072883520 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/69 (477218590 (estimated locally),0.44 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/53 (477218590 (estimated locally),0.44 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/67 (59652324 (estimated locally),0.06 per call) Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/71 (59652324 (estimated locally),0.06 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11 (Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch) @06ded7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolStatus/0 (read)Dcm_ProtocolQueue/1 (read)Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: available
  Function flags: count:383366894 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/10 (Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType) @06ded620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/9 (Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol) @06ded460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack) @06ded2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)Dcm_ProtocolStatus/0 (read)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ProtocolCancel/70 (59032178 (estimated locally),0.05 per call) Dcm_Dsp_ProtocolCancel/70 (59032178 (estimated locally),0.05 per call) Dcm_Dsp_ProtocolCancel/70 (59032178 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7 (Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack) @06da4b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/6 (Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig) @06da49a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_LatestExternalUDSProtocolIndex/2 (read)Dcm_ProtocolConfig/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 (Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction) @06da47e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1052582796 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (715863675 (estimated locally),0.68 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (144890808 (estimated locally),0.14 per call) Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (715863675 (estimated locally),0.68 per call) Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (1052582796 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (Dcm_Dsl_Supervisor_ProtocolHandling_Init) @06da4620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolStatus/0 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_ProtocolQueue/1 (write)Dcm_LatestExternalUDSProtocolIndex/2 (write)Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (write)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_PresumptiveProtocolToBeStartedOrDispatched/3 (Dcm_PresumptiveProtocolToBeStartedOrDispatched) @06da12d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (write)
  Availability: available
  Varpool flags:
Dcm_LatestExternalUDSProtocolIndex/2 (Dcm_LatestExternalUDSProtocolIndex) @06da1288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/6 (read)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (write)Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/20 (read)
  Availability: available
  Varpool flags:
Dcm_ProtocolQueue/1 (Dcm_ProtocolQueue) @06da1240
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22 (read)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE/27 (read)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (read)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (read)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32 (read)Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16 (read)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (write)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22 (write)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (write)Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17 (write)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (read)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (read)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ResetToDefaultIfSessionWasSetWithProtocolFromAnotherStack/42 (read)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack/44 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession/46 (read)Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionPendingProcess/45 (read)Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (write)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (read)Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23 (write)Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25 (read)
  Availability: available
  Varpool flags:
Dcm_ProtocolStatus/0 (Dcm_ProtocolStatus) @06da11f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (write)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (write)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack/41 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/10 (read)Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack/34 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28 (read)Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (write)Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (write)Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (write)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (write)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (write)Dcm_Dsl_Supervisor_ProtocolHandling_DispatchTYPE1RequestToProtocol/38 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack/36 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (read)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE/29 (read)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_Init/4 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8 (write)Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30 (read)Dcm_Dsl_Supervisor_ProtocolHandling_MakeStartedProtocolActive/33 (write)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (read)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (read)Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols/40 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (read)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (read)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19 (write)Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24 (read)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive, funcdef_no=22, decl_uid=6929, cgraph_uid=23, symbol_order=26)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive/26
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive (Dcm_ProtocolIndexType ProtocolIndex)
{
  boolean ProtocolPresumptive;
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolPresumptive => 0
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_5(D);
  _2 = Dcm_ProtocolQueue[_1].ProtocolQueueState;
  _3 = _2 + 254;
  if (_3 <= 3)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  if (_2 == 7)
    goto <bb 7>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 354334802]:
  if (_2 == 9)
    goto <bb 7>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 233860969]:
  if (_2 == 6)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 154348240]:
  if (_2 == 8)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 971871986]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolPresumptive => 1

  <bb 8> [local count: 1073741824]:
  # ProtocolPresumptive_4 = PHI <0(6), 1(7)>
  # DEBUG ProtocolPresumptive => ProtocolPresumptive_4
  # DEBUG BEGIN_STMT
  return ProtocolPresumptive_4;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy, funcdef_no=24, decl_uid=6933, cgraph_uid=25, symbol_order=28)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy/28
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy (Dcm_ProtocolIndexType ProtocolIndex)
{
  boolean ProtocolBusy;
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolBusy => 0
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_5(D);
  _2 = Dcm_ProtocolStatus[_1].ProtocolState;
  _3 = _2 + 248;
  if (_3 <= 5)
    goto <bb 7>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  if (_2 == 25)
    goto <bb 7>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 354334802]:
  if (_2 == 26)
    goto <bb 7>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 233860969]:
  if (_2 == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 154348240]:
  if (_2 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 971871986]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolBusy => 1

  <bb 8> [local count: 1073741824]:
  # ProtocolBusy_4 = PHI <0(6), 1(7)>
  # DEBUG ProtocolBusy => ProtocolBusy_4
  # DEBUG BEGIN_STMT
  return ProtocolBusy_4;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack (Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack, funcdef_no=26, decl_uid=6937, cgraph_uid=27, symbol_order=30)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack/30
Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack (Dcm_ProtocolStackNumberType StackNumber)
{
  uint8_least ProtocolIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  Dcm_ProtocolIndexType _9;

  <bb 2> [local count: 428627386]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 22>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProtocolConfig[ProtocolIndex_5].StackNumber;
  if (_1 == StackNumber_7(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 4> [local count: 243393649]:
  _2 = Dcm_ProtocolStatus[ProtocolIndex_5].ProtocolState;
  _3 = _2 + 248;
  if (_3 <= 3)
    goto <bb 23>; [2.00%]
  else
    goto <bb 5>; [98.00%]

  <bb 5> [local count: 238525776]:
  if (_2 == 6)
    goto <bb 23>; [2.00%]
  else
    goto <bb 6>; [98.00%]

  <bb 6> [local count: 233755260]:
  if (_2 == 12)
    goto <bb 23>; [2.00%]
  else
    goto <bb 7>; [98.00%]

  <bb 7> [local count: 229080155]:
  if (_2 == 13)
    goto <bb 23>; [2.00%]
  else
    goto <bb 8>; [98.00%]

  <bb 8> [local count: 224498552]:
  if (_2 == 19)
    goto <bb 23>; [2.00%]
  else
    goto <bb 9>; [98.00%]

  <bb 9> [local count: 220008581]:
  if (_2 == 20)
    goto <bb 23>; [2.00%]
  else
    goto <bb 10>; [98.00%]

  <bb 10> [local count: 215608409]:
  if (_2 == 21)
    goto <bb 23>; [2.00%]
  else
    goto <bb 11>; [98.00%]

  <bb 11> [local count: 211296241]:
  if (_2 == 14)
    goto <bb 23>; [2.00%]
  else
    goto <bb 12>; [98.00%]

  <bb 12> [local count: 207070316]:
  if (_2 == 15)
    goto <bb 23>; [2.00%]
  else
    goto <bb 13>; [98.00%]

  <bb 13> [local count: 202928909]:
  if (_2 == 16)
    goto <bb 23>; [2.00%]
  else
    goto <bb 14>; [98.00%]

  <bb 14> [local count: 198870331]:
  if (_2 == 17)
    goto <bb 23>; [2.00%]
  else
    goto <bb 15>; [98.00%]

  <bb 15> [local count: 194892924]:
  if (_2 == 18)
    goto <bb 23>; [2.00%]
  else
    goto <bb 16>; [98.00%]

  <bb 16> [local count: 190995066]:
  if (_2 == 22)
    goto <bb 23>; [2.00%]
  else
    goto <bb 17>; [98.00%]

  <bb 17> [local count: 187175165]:
  if (_2 == 23)
    goto <bb 23>; [2.00%]
  else
    goto <bb 18>; [98.00%]

  <bb 18> [local count: 183431662]:
  if (_2 == 25)
    goto <bb 23>; [2.00%]
  else
    goto <bb 19>; [98.00%]

  <bb 19> [local count: 179763029]:
  if (_2 == 26)
    goto <bb 23>; [2.00%]
  else
    goto <bb 20>; [98.00%]

  <bb 20> [local count: 176167768]:
  if (_2 == 24)
    goto <bb 23>; [2.00%]
  else
    goto <bb 21>; [98.00%]

  <bb 21> [local count: 645114438]:
  # DEBUG BEGIN_STMT
  ProtocolIndex_8 = ProtocolIndex_5 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_8

  <bb 22> [local count: 1073741824]:
  # ProtocolIndex_5 = PHI <0(2), ProtocolIndex_8(21)>
  # DEBUG ProtocolIndex => ProtocolIndex_5
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_5 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 23>; [33.33%]

  <bb 23> [local count: 428627386]:
  # ProtocolIndex_4 = PHI <ProtocolIndex_5(4), ProtocolIndex_5(5), ProtocolIndex_5(6), ProtocolIndex_5(7), ProtocolIndex_5(8), ProtocolIndex_5(9), ProtocolIndex_5(10), ProtocolIndex_5(11), ProtocolIndex_5(12), ProtocolIndex_5(13), ProtocolIndex_5(14), ProtocolIndex_5(15), ProtocolIndex_5(16), ProtocolIndex_5(17), ProtocolIndex_5(18), ProtocolIndex_5(19), ProtocolIndex_5(20), ProtocolIndex_5(22)>
  # DEBUG BEGIN_STMT
  _9 = (Dcm_ProtocolIndexType) ProtocolIndex_4;
  return _9;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request (Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request, funcdef_no=27, decl_uid=6939, cgraph_uid=28, symbol_order=31)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request/31
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [0, 1]
Dcm_Dsl_Supervisor_ProtocolHandling_StackCanAcceptTYPE1Request (Dcm_StackNumberType StackNumber)
{
  boolean StackCanAcceptRequest;
  uint8_least ProtocolIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 357878148]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG StackCanAcceptRequest => 1
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 23>; [100.00%]

  <bb 3> [local count: 715863674]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProtocolConfig[ProtocolIndex_4].StackNumber;
  if (_1 == StackNumber_9(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 4> [local count: 243393649]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ProtocolStatus[ProtocolIndex_4].ProtocolState;
  _3 = _2 + 248;
  if (_3 <= 3)
    goto <bb 21>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 121696825]:
  if (_2 == 19)
    goto <bb 21>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 80319904]:
  if (_2 == 20)
    goto <bb 21>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 53011137]:
  if (_2 == 21)
    goto <bb 21>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 34987350]:
  if (_2 == 15)
    goto <bb 21>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 23091651]:
  if (_2 == 16)
    goto <bb 21>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 15240490]:
  if (_2 == 14)
    goto <bb 21>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 11> [local count: 10058723]:
  if (_2 == 17)
    goto <bb 21>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 6638757]:
  if (_2 == 18)
    goto <bb 21>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 4381580]:
  if (_2 == 4)
    goto <bb 21>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 14> [local count: 2891843]:
  if (_2 == 5)
    goto <bb 21>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 1908616]:
  if (_2 == 22)
    goto <bb 21>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 1259687]:
  if (_2 == 23)
    goto <bb 21>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 17> [local count: 831393]:
  if (_2 == 24)
    goto <bb 21>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 18> [local count: 548720]:
  if (_2 == 25)
    goto <bb 21>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 19> [local count: 362155]:
  if (_2 == 26)
    goto <bb 21>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 20> [local count: 239022]:
  if (_2 == 27)
    goto <bb 21>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 21> [local count: 243235894]:
  # DEBUG BEGIN_STMT
  # DEBUG StackCanAcceptRequest => 0

  <bb 22> [local count: 715863676]:
  # StackCanAcceptRequest_5 = PHI <StackCanAcceptRequest_6(3), StackCanAcceptRequest_6(20), 0(21)>
  # DEBUG StackCanAcceptRequest => StackCanAcceptRequest_5
  # DEBUG BEGIN_STMT
  ProtocolIndex_10 = ProtocolIndex_4 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_10

  <bb 23> [local count: 1073741824]:
  # ProtocolIndex_4 = PHI <0(2), ProtocolIndex_10(22)>
  # StackCanAcceptRequest_6 = PHI <1(2), StackCanAcceptRequest_5(22)>
  # DEBUG StackCanAcceptRequest => StackCanAcceptRequest_6
  # DEBUG ProtocolIndex => ProtocolIndex_4
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_4 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 24>; [33.33%]

  <bb 24> [local count: 357878150]:
  # StackCanAcceptRequest_7 = PHI <StackCanAcceptRequest_6(23)>
  # DEBUG BEGIN_STMT
  return StackCanAcceptRequest_7;

}



;; Function Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack (Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack, funcdef_no=28, decl_uid=6941, cgraph_uid=29, symbol_order=32)

Modification phase of node Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack/32
Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack (Dcm_StackNumberType StackNumber)
{
  Dcm_ProtocolIndexType FoundProtocol;
  uint8_least ProtocolIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 377410988]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG FoundProtocol => 2
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProtocolConfig[ProtocolIndex_5].StackNumber;
  if (_1 == StackNumber_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 4> [local count: 243393650]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ProtocolQueue[ProtocolIndex_5].ProtocolQueueState;
  _3 = _2 + 254;
  if (_3 <= 3)
    goto <bb 7>; [2.75%]
  else
    goto <bb 5>; [97.25%]

  <bb 5> [local count: 236700324]:
  if (_2 == 7)
    goto <bb 7>; [2.75%]
  else
    goto <bb 6>; [97.25%]

  <bb 6> [local count: 230191065]:
  if (_2 == 6)
    goto <bb 7>; [2.75%]
  else
    goto <bb 8>; [97.25%]

  <bb 7> [local count: 19532839]:
  # ProtocolIndex_4 = PHI <ProtocolIndex_5(4), ProtocolIndex_5(5), ProtocolIndex_5(6)>
  # DEBUG BEGIN_STMT
  FoundProtocol_9 = (Dcm_ProtocolIndexType) ProtocolIndex_4;
  # DEBUG FoundProtocol => FoundProtocol_9
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 696330837]:
  # DEBUG BEGIN_STMT
  ProtocolIndex_10 = ProtocolIndex_5 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_10

  <bb 9> [local count: 1073741824]:
  # ProtocolIndex_5 = PHI <0(2), ProtocolIndex_10(8)>
  # DEBUG ProtocolIndex => ProtocolIndex_5
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_5 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 10>; [33.33%]

  <bb 10> [local count: 377410989]:
  # FoundProtocol_6 = PHI <FoundProtocol_9(7), 2(9)>
  # DEBUG FoundProtocol => FoundProtocol_6
  # DEBUG BEGIN_STMT
  return FoundProtocol_6;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_Init (Dcm_Dsl_Supervisor_ProtocolHandling_Init, funcdef_no=0, decl_uid=6778, cgraph_uid=1, symbol_order=4)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_Init/4
Dcm_Dsl_Supervisor_ProtocolHandling_Init ()
{
  uint8_least ProtocolIndex;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_1].ProtocolState = 1;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_1].RequestType = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].ProtocolQueueState = 1;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].PreemptionTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].RequestType = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].RCRRPsSent = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].RCRRPsConfirmed = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[ProtocolIndex_1].RequestBuffer.BufferId = 18;
  # DEBUG BEGIN_STMT
  ProtocolIndex_16 = ProtocolIndex_1 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_16

  <bb 4> [local count: 1073741824]:
  # ProtocolIndex_1 = PHI <0(2), ProtocolIndex_16(3)>
  # DEBUG ProtocolIndex => ProtocolIndex_1
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_1 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 5>; [33.33%]

  <bb 5> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  Dcm_LatestExternalUDSProtocolIndex = 2;
  # DEBUG BEGIN_STMT
  Dcm_PresumptiveProtocolToBeStartedOrDispatched = 0;
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig (Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig, funcdef_no=2, decl_uid=6782, cgraph_uid=3, symbol_order=6)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/6
Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig (struct Dcm_ProtocolConfigType * const CurrentProtocolConfig)
{
  Std_ReturnType GetProtocolConfigResult;
  unsigned char Dcm_LatestExternalUDSProtocolIndex.8_1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG GetProtocolConfigResult => 1
  # DEBUG BEGIN_STMT
  Dcm_LatestExternalUDSProtocolIndex.8_1 = Dcm_LatestExternalUDSProtocolIndex;
  if (Dcm_LatestExternalUDSProtocolIndex.8_1 != 2)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _2 = (int) Dcm_LatestExternalUDSProtocolIndex.8_1;
  *CurrentProtocolConfig_6(D) = Dcm_ProtocolConfig[_2];
  # DEBUG BEGIN_STMT
  # DEBUG GetProtocolConfigResult => 0

  <bb 4> [local count: 1073741824]:
  # GetProtocolConfigResult_3 = PHI <1(2), 0(3)>
  # DEBUG GetProtocolConfigResult => GetProtocolConfigResult_3
  # DEBUG BEGIN_STMT
  return GetProtocolConfigResult_3;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack (Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack, funcdef_no=3, decl_uid=6784, cgraph_uid=4, symbol_order=7)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/7
Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack (Dcm_ProtocolIndexType NextProtocolIndex)
{
  Dcm_StackNumberType StackNumber;
  Dcm_ProtocolIndexType CurrentProtocolIndex;
  boolean PreemptionNecessary;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PreemptionNecessary => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) NextProtocolIndex_3(D);
  StackNumber_5 = Dcm_ProtocolConfig[_1].StackNumber;
  # DEBUG StackNumber => StackNumber_5
  # DEBUG BEGIN_STMT
  CurrentProtocolIndex_6 = Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack (StackNumber_5);
  # DEBUG CurrentProtocolIndex => CurrentProtocolIndex_6
  # DEBUG BEGIN_STMT
  if (CurrentProtocolIndex_6 != 2)
    goto <bb 3>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (NextProtocolIndex_3(D) != CurrentProtocolIndex_6)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  # DEBUG PreemptionNecessary => 1

  <bb 5> [local count: 1073741824]:
  # PreemptionNecessary_2 = PHI <1(4), 1(2), 0(3)>
  # DEBUG PreemptionNecessary => PreemptionNecessary_2
  # DEBUG BEGIN_STMT
  return PreemptionNecessary_2;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack (Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack, funcdef_no=4, decl_uid=6786, cgraph_uid=5, symbol_order=8)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/8
Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack (Dcm_ProtocolIndexType NextProtocolIndex)
{
  Dcm_ProtocolStackNumberType StackNumber;
  Dcm_ProtocolIndexType CurrentProtocolIndex;
  int _1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) NextProtocolIndex_11(D);
  StackNumber_13 = Dcm_ProtocolConfig[_1].StackNumber;
  # DEBUG StackNumber => StackNumber_13
  # DEBUG BEGIN_STMT
  CurrentProtocolIndex_14 = Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack (StackNumber_13);
  # DEBUG CurrentProtocolIndex => CurrentProtocolIndex_14
  # DEBUG BEGIN_STMT
  if (CurrentProtocolIndex_14 != 2)
    goto <bb 3>; [66.00%]
  else
    goto <bb 15>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (int) CurrentProtocolIndex_14;
  _3 = Dcm_ProtocolStatus[_2].ProtocolState;
  switch (_3) <default: <L24> [8.33%], case 6: <L16> [8.33%], case 9: <L1> [8.33%], case 10: <L3> [8.33%], case 11: <L2> [8.33%], case 12: <L4> [8.33%], case 13: <L5> [8.33%], case 14: <L6> [8.33%], case 15: <L7> [8.33%], case 16: <L8> [8.33%], case 17: <L9> [8.33%], case 18: <L10> [8.33%]>

  <bb 4> [local count: 59032178]:
<L1>:
  # DEBUG BEGIN_STMT
  _4 = (short unsigned int) CurrentProtocolIndex_14;
  _5 = _4 + 12;
  Dcm_Dsp_ProtocolCancel (_5);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 19;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 5> [local count: 59032178]:
<L2>:
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) CurrentProtocolIndex_14;
  _7 = _6 + 12;
  Dcm_Dsp_ProtocolCancel (_7);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 21;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 59032178]:
<L3>:
  # DEBUG BEGIN_STMT
  _8 = (short unsigned int) CurrentProtocolIndex_14;
  _9 = _8 + 12;
  Dcm_Dsp_ProtocolCancel (_9);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 20;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 59032178]:
<L4>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 25;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 8> [local count: 59032178]:
<L5>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 26;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 59032178]:
<L6>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 19;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 59032178]:
<L7>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 20;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 11> [local count: 59032178]:
<L8>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 21;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 59032178]:
<L9>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 22;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 59032178]:
<L10>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 23;
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 59032178]:
<L16>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_2].ProtocolState = 24;
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073458357]:
<L24>:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol (Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol, funcdef_no=5, decl_uid=6788, cgraph_uid=6, symbol_order=9)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/9
Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_ProtocolGroupType ProtocolGroup;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolGroup => 2
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_4(D);
  _2 = Dcm_ProtocolConfig[_1].Type;
  if (_2 <= 2)
    goto <bb 3>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolGroup => 1

  <bb 4> [local count: 1073741824]:
  # ProtocolGroup_3 = PHI <2(2), 1(3)>
  # DEBUG ProtocolGroup => ProtocolGroup_3
  # DEBUG BEGIN_STMT
  return ProtocolGroup_3;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType (Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType, funcdef_no=6, decl_uid=6790, cgraph_uid=7, symbol_order=10)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/10
Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType (Dcm_ProtocolIndexType ProtocolIndex)
{
  int _1;
  Dcm_SupervisorProtocolRequestTypeType _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_2(D);
  _4 = Dcm_ProtocolStatus[_1].RequestType;
  return _4;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch (Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch, funcdef_no=7, decl_uid=6792, cgraph_uid=8, symbol_order=11)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/11
Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch (Dcm_SesCtrlType NewSession)
{
  Dcm_SessionSwitchPermissionType IsSessionClearedToSwitch;
  uint8_least ProtocolIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _7;
  int _9;
  unsigned char _12;

  <bb 2> [local count: 383366894]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG IsSessionClearedToSwitch => 3
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 17>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProtocolStatus[ProtocolIndex_4].ProtocolState;
  _2 = _1 + 248;
  if (_2 <= 3)
    goto <bb 14>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 357931837]:
  if (_1 == 14)
    goto <bb 14>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 236235013]:
  if (_1 == 15)
    goto <bb 14>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 155915108]:
  if (_1 == 16)
    goto <bb 14>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 102903971]:
  if (_1 == 19)
    goto <bb 14>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 67916621]:
  if (_1 == 20)
    goto <bb 14>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 44824970]:
  if (_1 == 21)
    goto <bb 14>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 29584480]:
  if (_1 == 24)
    goto <bb 14>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 11> [local count: 19525757]:
  if (_1 == 25)
    goto <bb 14>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 12887000]:
  if (_1 == 26)
    goto <bb 14>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 8505420]:
  _3 = Dcm_ProtocolQueue[ProtocolIndex_4].ProtocolQueueState;
  if (_3 != 1)
    goto <bb 14>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 14> [local count: 712971832]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => (unsigned char) ProtocolIndex_4
  # DEBUG INLINE_ENTRY Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolGroup => 2
  # DEBUG BEGIN_STMT
  _7 = ProtocolIndex_4;
  _9 = (int) _7;
  _12 = Dcm_ProtocolConfig[_9].Type;
  if (_12 <= 2)
    goto <bb 15>; [65.00%]
  else
    goto <bb 16>; [35.00%]

  <bb 15> [local count: 463431690]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolGroup => 1
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => NULL
  # DEBUG ProtocolGroup => NULL
  # DEBUG ProcessingProtocolGroup => 1
  # DEBUG BEGIN_STMT
  if (NewSession_10(D) != 1)
    goto <bb 18>; [5.50%]
  else
    goto <bb 16>; [94.50%]

  <bb 16> [local count: 690374932]:
  # DEBUG ProtocolIndex => NULL
  # DEBUG ProtocolGroup => NULL
  # DEBUG ProcessingProtocolGroup => NULL
  # DEBUG BEGIN_STMT
  ProtocolIndex_11 = ProtocolIndex_4 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_11

  <bb 17> [local count: 1073741824]:
  # ProtocolIndex_4 = PHI <0(2), ProtocolIndex_11(16)>
  # DEBUG ProtocolIndex => ProtocolIndex_4
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_4 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 18>; [33.33%]

  <bb 18> [local count: 383366893]:
  # IsSessionClearedToSwitch_5 = PHI <2(15), 3(17)>
  # DEBUG IsSessionClearedToSwitch => IsSessionClearedToSwitch_5
  # DEBUG BEGIN_STMT
  return IsSessionClearedToSwitch_5;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree, funcdef_no=8, decl_uid=6794, cgraph_uid=9, symbol_order=12)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/12
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_MainConnectionIndexType MainConnectionIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  int _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;

  <bb 2> [local count: 1072883520]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_9(D);
  _2 = Dcm_ProtocolStatus[_1].ProtocolState;
  switch (_2) <default: <L28> [5.56%], case 2 ... 3: <L6> [5.56%], case 4: <L14> [5.56%], case 5: <L15> [5.56%], case 8: <L0> [5.56%], case 9: <L1> [5.56%], case 10 ... 11: <L2> [5.56%], case 12 ... 13: <L4> [5.56%], case 14: <L19> [5.56%], case 15 ... 16: <L20> [5.56%], case 17: <L8> [5.56%], case 18: <L9> [5.56%], case 19: <L16> [5.56%], case 20: <L18> [5.56%], case 21: <L17> [5.56%], case 22: <L12> [5.56%], case 23: <L13> [5.56%], case 25 ... 26: <L10> [5.56%]>

  <bb 3> [local count: 59652324]:
<L0>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing ();
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  _3 = Dcm_ProtocolStatus[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (_3);
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 4> [local count: 59652324]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  _4 = Dcm_ProtocolStatus[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (_4);
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 5> [local count: 59652324]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 6> [local count: 59652324]:
<L4>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 7> [local count: 59652324]:
<L6>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 1;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 8> [local count: 59652324]:
<L8>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 9> [local count: 59652324]:
<L9>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 10> [local count: 59652324]:
<L10>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 24;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 11> [local count: 59652324]:
<L12>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 24;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 12> [local count: 59652324]:
<L13>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 24;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 13> [local count: 59652324]:
<L14>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 1;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 14> [local count: 59652324]:
<L15>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 1;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 0
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 15> [local count: 59652324]:
<L16>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 24;
  # DEBUG BEGIN_STMT
  _5 = Dcm_ProtocolStatus[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (_5);
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 16> [local count: 59652324]:
<L17>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 24;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 59652324]:
<L18>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 24;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 18> [local count: 59652324]:
<L19>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  _6 = Dcm_ProtocolStatus[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (_6);
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 59652324]:
<L20>:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].ProtocolState = 6;
  # DEBUG BEGIN_STMT
  # DEBUG ResetMainConnection => 1
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 477218590]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = Dcm_ProtocolStatus[_1].RxConnectionId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_7, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  MainConnectionIndex_34 = RxPduIdInfo.MainConnectionIndex;
  # DEBUG MainConnectionIndex => MainConnectionIndex_34
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection (MainConnectionIndex_34);
  RxPduIdInfo ={v} {CLOBBER};

  <bb 21> [local count: 1073741824]:
<L28>:
  # DEBUG ResetMainConnection => NULL
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[_1].RequestType = 0;
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment (Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment, funcdef_no=9, decl_uid=6797, cgraph_uid=10, symbol_order=13)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/13
Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment (Dcm_ProtocolIndexType RequestedProtocolIndex, Dcm_RequestOriginType RequestOrigin)
{
  const Dcm_SesCtrlType CurrentSession;
  const Dcm_SesCtrlType CurrentSession;
  Dcm_ProtocolIndexType CurrentProtocolIndex;
  Dcm_ProtocolIndexType CurrentPresumptiveProtocolIndex;
  Dcm_ProtocolStackNumberType ProcessingStackNumber;
  const boolean ProtocolOfSameTypeRunningOnDifferentStack;
  Dcm_ReceptionArbitrationResultType ArbitrationResult;
  boolean ProtocolBusyOnOtherStack;
  boolean ProtocolBusy;
  boolean ProtocolPresumptive;
  int _1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  int _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  unsigned char _16;
  unsigned char _17;
  unsigned char _18;
  unsigned char _19;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolBusyOnOtherStack => 0
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 4
  # DEBUG BEGIN_STMT
  if (RequestOrigin_24(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  if (RequestOrigin_24(D) == 4)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 467721938]:
  if (RequestOrigin_24(D) == 5)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 765045345]:
  # DEBUG BEGIN_STMT
  ProtocolPresumptive_29 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptiveWithNonROE (RequestedProtocolIndex_26(D));
  # DEBUG ProtocolPresumptive => ProtocolPresumptive_29
  # DEBUG BEGIN_STMT
  ProtocolBusy_30 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithNonROE (RequestedProtocolIndex_26(D));
  # DEBUG ProtocolBusy => ProtocolBusy_30
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 308696479]:
  # DEBUG BEGIN_STMT
  ProtocolPresumptive_27 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsPresumptive (RequestedProtocolIndex_26(D));
  # DEBUG ProtocolPresumptive => ProtocolPresumptive_27
  # DEBUG BEGIN_STMT
  ProtocolBusy_28 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy (RequestedProtocolIndex_26(D));
  # DEBUG ProtocolBusy => ProtocolBusy_28

  <bb 7> [local count: 1073741823]:
  # ProtocolPresumptive_20 = PHI <ProtocolPresumptive_29(5), ProtocolPresumptive_27(6)>
  # ProtocolBusy_21 = PHI <ProtocolBusy_30(5), ProtocolBusy_28(6)>
  # DEBUG ProtocolBusy => ProtocolBusy_21
  # DEBUG ProtocolPresumptive => ProtocolPresumptive_20
  # DEBUG BEGIN_STMT
  ProtocolBusyOnOtherStack_31 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfDifferentTypeRunningOnDifferentStack (RequestedProtocolIndex_26(D));
  # DEBUG ProtocolBusyOnOtherStack => ProtocolBusyOnOtherStack_31
  # DEBUG BEGIN_STMT
  if (ProtocolPresumptive_20 == 1)
    goto <bb 45>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 708669604]:
  if (ProtocolBusy_21 == 1)
    goto <bb 45>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 467721938]:
  if (ProtocolBusyOnOtherStack_31 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 159025459]:
  if (RequestOrigin_24(D) == 2)
    goto <bb 45>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 11> [local count: 413653282]:
  # DEBUG BEGIN_STMT
  ProtocolOfSameTypeRunningOnDifferentStack_32 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolOfSameTypeRunningOnDifferentStack (RequestedProtocolIndex_26(D));
  # DEBUG ProtocolOfSameTypeRunningOnDifferentStack => ProtocolOfSameTypeRunningOnDifferentStack_32
  # DEBUG BEGIN_STMT
  if (ProtocolOfSameTypeRunningOnDifferentStack_32 == 1)
    goto <bb 45>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 273011166]:
  # DEBUG BEGIN_STMT
  _1 = (int) RequestedProtocolIndex_26(D);
  ProcessingStackNumber_33 = Dcm_ProtocolConfig[_1].StackNumber;
  # DEBUG ProcessingStackNumber => ProcessingStackNumber_33
  # DEBUG BEGIN_STMT
  CurrentPresumptiveProtocolIndex_34 = Dcm_Dsl_Supervisor_GetTYPE1PresumptiveProtocolOnStack (ProcessingStackNumber_33);
  # DEBUG CurrentPresumptiveProtocolIndex => CurrentPresumptiveProtocolIndex_34
  # DEBUG BEGIN_STMT
  if (CurrentPresumptiveProtocolIndex_34 != 2)
    goto <bb 13>; [66.00%]
  else
    goto <bb 26>; [34.00%]

  <bb 13> [local count: 180187370]:
  # DEBUG BEGIN_STMT
  _2 = (int) CurrentPresumptiveProtocolIndex_34;
  _3 = Dcm_ProtocolConfig[_2].Priority;
  _4 = Dcm_ProtocolConfig[_1].Priority;
  if (_3 > _4)
    goto <bb 14>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 14> [local count: 90093685]:
  # DEBUG BEGIN_STMT
  if (RequestOrigin_24(D) == 1)
    goto <bb 45>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 59461832]:
  if (RequestOrigin_24(D) == 4)
    goto <bb 45>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 39244809]:
  if (RequestOrigin_24(D) == 5)
    goto <bb 45>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 17> [local count: 25901574]:
  if (RequestOrigin_24(D) == 3)
    goto <bb 45>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 18> [local count: 17095039]:
  # DEBUG BEGIN_STMT
  if (RequestOrigin_24(D) == 2)
    goto <bb 19>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 19> [local count: 5812313]:
  _5 = Dcm_ProtocolQueue[_2].ProtocolQueueState;
  _6 = _5 + 254;
  if (_6 > 3)
    goto <bb 45>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 20> [local count: 14188882]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 4
  goto <bb 45>; [100.00%]

  <bb 21> [local count: 90093685]:
  # DEBUG BEGIN_STMT
  _7 = Dcm_ProtocolQueue[_2].ProtocolQueueState;
  if (_7 == 6)
    goto <bb 22>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 22> [local count: 30631853]:
  if (RequestOrigin_24(D) == 1)
    goto <bb 45>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 23> [local count: 20217023]:
  if (RequestOrigin_24(D) == 4)
    goto <bb 45>; [34.00%]
  else
    goto <bb 24>; [66.00%]

  <bb 24> [local count: 13343235]:
  if (RequestOrigin_24(D) == 5)
    goto <bb 45>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 25> [local count: 68268367]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 4
  goto <bb 45>; [100.00%]

  <bb 26> [local count: 92823797]:
  # DEBUG BEGIN_STMT
  CurrentProtocolIndex_35 = Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack (ProcessingStackNumber_33);
  # DEBUG CurrentProtocolIndex => CurrentProtocolIndex_35
  # DEBUG BEGIN_STMT
  if (CurrentProtocolIndex_35 != 2)
    goto <bb 27>; [66.00%]
  else
    goto <bb 45>; [34.00%]

  <bb 27> [local count: 61263706]:
  # DEBUG BEGIN_STMT
  _8 = (int) CurrentProtocolIndex_35;
  _9 = Dcm_ProtocolStatus[_8].ProtocolState;
  switch (_9) <default: <L87> [20.00%], case 6: <L63> [20.00%], case 8 ... 9: <L34> [20.00%], case 10: <L48> [20.00%], case 11: <L42> [20.00%], case 12 ... 13: <L63> [20.00%], case 14: <L34> [20.00%], case 15: <L48> [20.00%], case 16: <L42> [20.00%], case 17 ... 18: <L63> [20.00%], case 19: <L34> [20.00%], case 20: <L48> [20.00%], case 21: <L42> [20.00%], case 22 ... 26: <L63> [20.00%]>

  <bb 28> [local count: 12252741]:
<L34>:
  # DEBUG BEGIN_STMT
  _10 = Dcm_ProtocolConfig[_8].Priority;
  _11 = Dcm_ProtocolConfig[_1].Priority;
  if (_10 <= _11)
    goto <bb 45>; [50.00%]
  else
    goto <bb 29>; [50.00%]

  <bb 29> [local count: 6126371]:
  if (RequestOrigin_24(D) == 2)
    goto <bb 45>; [34.00%]
  else
    goto <bb 30>; [66.00%]

  <bb 30> [local count: 4043405]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 6
  goto <bb 45>; [100.00%]

  <bb 31> [local count: 12252741]:
<L42>:
  # DEBUG BEGIN_STMT
  _12 = Dcm_ProtocolConfig[_8].Priority;
  _13 = Dcm_ProtocolConfig[_1].Priority;
  if (_12 <= _13)
    goto <bb 45>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 32> [local count: 6126371]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 6
  goto <bb 45>; [100.00%]

  <bb 33> [local count: 12252741]:
<L48>:
  # DEBUG BEGIN_STMT
  if (RequestOrigin_24(D) == 1)
    goto <bb 36>; [20.24%]
  else
    goto <bb 34>; [79.76%]

  <bb 34> [local count: 9772786]:
  if (RequestOrigin_24(D) == 4)
    goto <bb 36>; [34.00%]
  else
    goto <bb 35>; [66.00%]

  <bb 35> [local count: 6450039]:
  if (RequestOrigin_24(D) == 5)
    goto <bb 36>; [34.00%]
  else
    goto <bb 39>; [66.00%]

  <bb 36> [local count: 7995715]:
  # DEBUG BEGIN_STMT
  CurrentSession_37 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  # DEBUG CurrentSession => CurrentSession_37
  # DEBUG BEGIN_STMT
  if (CurrentSession_37 == 1)
    goto <bb 45>; [34.00%]
  else
    goto <bb 37>; [66.00%]

  <bb 37> [local count: 5277172]:
  _14 = Dcm_ProtocolConfig[_8].Priority;
  _15 = Dcm_ProtocolConfig[_1].Priority;
  if (_14 > _15)
    goto <bb 45>; [50.00%]
  else
    goto <bb 38>; [50.00%]

  <bb 38> [local count: 2638586]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 4
  goto <bb 45>; [100.00%]

  <bb 39> [local count: 4257026]:
  # DEBUG BEGIN_STMT
  _16 = Dcm_ProtocolConfig[_8].Priority;
  _17 = Dcm_ProtocolConfig[_1].Priority;
  if (_16 <= _17)
    goto <bb 45>; [50.00%]
  else
    goto <bb 40>; [50.00%]

  <bb 40> [local count: 2128513]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 6
  goto <bb 45>; [100.00%]

  <bb 41> [local count: 12252741]:
<L63>:
  # DEBUG BEGIN_STMT
  CurrentSession_39 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  # DEBUG CurrentSession => CurrentSession_39
  # DEBUG BEGIN_STMT
  _18 = Dcm_ProtocolConfig[_8].Priority;
  _19 = Dcm_ProtocolConfig[_1].Priority;
  if (_18 <= _19)
    goto <bb 42>; [50.00%]
  else
    goto <bb 44>; [50.00%]

  <bb 42> [local count: 6126371]:
  if (RequestedProtocolIndex_26(D) != CurrentProtocolIndex_35)
    goto <bb 43>; [66.00%]
  else
    goto <bb 44>; [34.00%]

  <bb 43> [local count: 4043405]:
  if (CurrentSession_39 != 1)
    goto <bb 45>; [66.00%]
  else
    goto <bb 44>; [34.00%]

  <bb 44> [local count: 9584094]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 6

  <bb 45> [local count: 1073741824]:
  # ArbitrationResult_22 = PHI <4(8), 3(11), 6(23), 6(32), 6(26), 6(19), 4(20), 6(15), 4(25), 6(30), 4(43), 6(40), 6(37), 4(38), 4(31), 4(29), 4(27), 6(44), 4(39), 4(7), 4(10), 6(14), 6(17), 6(16), 6(22), 6(24), 4(28), 6(36)>
<L87>:
  # DEBUG ArbitrationResult => ArbitrationResult_22
  # DEBUG BEGIN_STMT
  return ArbitrationResult_22;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack (Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack, funcdef_no=10, decl_uid=6801, cgraph_uid=11, symbol_order=14)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/14
Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack (Dcm_BufferUserType RxConnectionId)
{
  Dcm_StackNumberType ReceptionStackNumber;
  Dcm_StackNumberType ProcessingStackNumber;
  Dcm_ProtocolPriorityType RxProtocolPriority;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  uint16_least RxConnectionIndex;
  unsigned char _1;
  int _2;
  short unsigned int _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  int _8;
  unsigned char _9;

  <bb 2> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_14(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  _1 = RxPduIdInfo.ProtocolIndex;
  _2 = (int) _1;
  ProcessingStackNumber_16 = Dcm_ProtocolConfig[_2].StackNumber;
  # DEBUG ProcessingStackNumber => ProcessingStackNumber_16
  # DEBUG BEGIN_STMT
  RxProtocolPriority_17 = Dcm_ProtocolConfig[_2].Priority;
  # DEBUG RxProtocolPriority => RxProtocolPriority_17
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (short unsigned int) RxConnectionIndex_10;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_3, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  _4 = RxPduIdInfo.ProtocolIndex;
  _5 = (int) _4;
  ReceptionStackNumber_20 = Dcm_ProtocolConfig[_5].StackNumber;
  # DEBUG ReceptionStackNumber => ReceptionStackNumber_20
  # DEBUG BEGIN_STMT
  _6 = Dcm_Dsl_RxConnectionGetState (_3);
  if (_6 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 4> [local count: 312903400]:
  _7 = RxPduIdInfo.ProtocolIndex;
  _8 = (int) _7;
  _9 = Dcm_ProtocolConfig[_8].Priority;
  if (_9 >= RxProtocolPriority_17)
    goto <bb 5>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 5> [local count: 156451700]:
  if (_3 != RxConnectionId_14(D))
    goto <bb 6>; [77.53%]
  else
    goto <bb 8>; [22.47%]

  <bb 6> [local count: 121297003]:
  if (ProcessingStackNumber_16 == ReceptionStackNumber_20)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 24550513]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection (_3);

  <bb 8> [local count: 920304119]:
  # DEBUG BEGIN_STMT
  RxConnectionIndex_23 = RxConnectionIndex_10 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_23

  <bb 9> [local count: 1073741824]:
  # RxConnectionIndex_10 = PHI <0(2), RxConnectionIndex_23(8)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_10
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_10 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 10>; [14.29%]

  <bb 10> [local count: 153437707]:
  RxPduIdInfo ={v} {CLOBBER};
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol, funcdef_no=11, decl_uid=6804, cgraph_uid=12, symbol_order=15)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/15
Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (Dcm_ProtocolIndexType ProtocolIndex, boolean RequestDispatched)
{
  int _1;
  short unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_5(D);
  Dcm_ProtocolQueue[_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].PreemptionTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].RCRRPsSent = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].RCRRPsConfirmed = 0;
  # DEBUG BEGIN_STMT
  if (RequestDispatched_11(D) == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ProtocolQueue[_1].RequestBuffer.BufferId;
  Dcm_Dsl_BufferFree (14, _2);
  # DEBUG BEGIN_STMT
  _3 = Dcm_ProtocolQueue[_1].ProtocolQueueState;
  if (_3 == 2)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].RequestType = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].RequestBuffer.BufferId = 18;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].ProtocolQueueState = 1;
  # DEBUG BEGIN_STMT
  Dcm_PresumptiveProtocolToBeStartedOrDispatched = 0;
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction (Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction, funcdef_no=1, decl_uid=6780, cgraph_uid=2, symbol_order=5)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/5
Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction ()
{
  Dcm_ProtocolIndexType CurrentProtocolIndex;
  uint8_least StackNumber;
  unsigned char Dcm_PresumptiveProtocolToBeStartedOrDispatched.0_1;
  unsigned char _2;

  <bb 2> [local count: 1052582796]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStopStoppingProtocols ();
  # DEBUG BEGIN_STMT
  Dcm_PresumptiveProtocolToBeStartedOrDispatched.0_1 = Dcm_PresumptiveProtocolToBeStartedOrDispatched;
  if (Dcm_PresumptiveProtocolToBeStartedOrDispatched.0_1 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 8> [local count: 357878150]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) StackNumber_3;
  CurrentProtocolIndex_9 = Dcm_Dsl_Supervisor_ProtocolHandling_GetCurrentProtocolOnStack (_2);
  # DEBUG CurrentProtocolIndex => CurrentProtocolIndex_9
  # DEBUG BEGIN_STMT
  if (CurrentProtocolIndex_9 == 2)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 144890808]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToStartPresumptiveTYPE1ProtocolOnStack (_2);

  <bb 5> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_AttemptToDispatchPresumptiveTYPE1ProtocolOnStack (_2);
  # DEBUG BEGIN_STMT
  StackNumber_12 = StackNumber_3 + 1;
  # DEBUG StackNumber => StackNumber_12

  <bb 6> [local count: 1073741824]:
  # StackNumber_3 = PHI <StackNumber_12(5), 0(8)>
  # DEBUG StackNumber => StackNumber_3
  # DEBUG BEGIN_STMT
  if (StackNumber_3 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 7>; [33.33%]

  <bb 7> [local count: 1052582796]:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol (Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol, funcdef_no=35, decl_uid=6955, cgraph_uid=36, symbol_order=39)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol/39
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [0, 1]
Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol (Dcm_ProtocolIndexType ProtocolIndex)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  Dcm_TimerValueType NRCTimeout;
  const Dcm_TimerValueType NRCTimeout;
  int _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _11;
  short unsigned int _12;
  unsigned char _13;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_5(D);
  _2 = Dcm_ProtocolQueue[_1].ProtocolQueueState;
  switch (_2) <default: <L14> [20.00%], case 2 ... 3: <L0> [20.00%], case 4 ... 5: <L5> [20.00%], case 6 ... 7: <L7> [20.00%], case 8 ... 9: <L10> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  NRCTimeout_20 = Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue (ProtocolIndex_5(D), 2);
  # DEBUG NRCTimeout => NRCTimeout_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Dcm_ProtocolQueue[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (_3, Dcm_ProtocolQueue[_1].RequestBuffer, 33, NRCTimeout_20);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (ProtocolIndex_5(D), 0);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_StopTimer (14, ProtocolIndex_5(D), 2);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (14, ProtocolIndex_5(D));
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748364]:
<L5>:
  # DEBUG BEGIN_STMT
  NRCTimeout_16 = Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout (ProtocolIndex_5(D));
  # DEBUG NRCTimeout => NRCTimeout_16
  # DEBUG BEGIN_STMT
  _11 = Dcm_ProtocolQueue[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (_11, Dcm_ProtocolQueue[_1].RequestBuffer, 33, NRCTimeout_16);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (ProtocolIndex_5(D), 0);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = Dcm_ProtocolQueue[_1].RxConnectionId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_12, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (ProtocolIndex_5(D), 0);
  # DEBUG BEGIN_STMT
  _13 = RxPduIdInfo.MainConnectionIndex;
  Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection (_13);
  # DEBUG BEGIN_STMT
  RxPduIdInfo ={v} {CLOBBER};
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L10>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (ProtocolIndex_5(D), 0);
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
<L14>:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack (Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack, funcdef_no=12, decl_uid=6806, cgraph_uid=13, symbol_order=16)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/16
Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack (Dcm_ProtocolIndexType ProcessingProtocolIndex)
{
  Dcm_ProtocolStackNumberType ProcessingStackNumber;
  uint8_least ProtocolIndex;
  int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProcessingProtocolIndex_8(D);
  ProcessingStackNumber_10 = Dcm_ProtocolConfig[_1].StackNumber;
  # DEBUG ProcessingStackNumber => ProcessingStackNumber_10
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_ProtocolConfig[ProtocolIndex_5].StackNumber;
  if (_2 == ProcessingStackNumber_10)
    goto <bb 4>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 4> [local count: 243393649]:
  _3 = Dcm_ProtocolQueue[ProtocolIndex_5].ProtocolQueueState;
  if (_3 != 1)
    goto <bb 5>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 5> [local count: 160639809]:
  if (_3 != 9)
    goto <bb 6>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 6> [local count: 106022274]:
  if (_3 != 8)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 51823687]:
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) ProtocolIndex_5;
  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol (_4);

  <bb 8> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  ProtocolIndex_12 = ProtocolIndex_5 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_12

  <bb 9> [local count: 1073741824]:
  # ProtocolIndex_5 = PHI <0(2), ProtocolIndex_12(8)>
  # DEBUG ProtocolIndex => ProtocolIndex_5
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_5 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 10>; [33.33%]

  <bb 10> [local count: 357878150]:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive (Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive, funcdef_no=13, decl_uid=6812, cgraph_uid=14, symbol_order=17)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/17
Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive (Dcm_ProtocolIndexType ProcessingProtocolIndex, Dcm_BufferUserType RxConnectionId, Dcm_RequestTypeType RequestType, struct Dcm_BufferType RequestBuffer, boolean PreemptionNecessary)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  int _1;
  short unsigned int _2;
  int _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;

  <bb 2> [local count: 1073419798]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_11(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PreemptionNecessary_13(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 364962731]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProcessingProtocolIndex_14(D);
  _2 = Dcm_ProtocolConfig[_1].PreemptionTimeout;
  Dcm_ProtocolQueue[_1].PreemptionTimeout = _2;

  <bb 4> [local count: 1073419798]:
  # DEBUG BEGIN_STMT
  _3 = (int) ProcessingProtocolIndex_14(D);
  Dcm_ProtocolQueue[_3].RxConnectionId = RxConnectionId_11(D);
  # DEBUG BEGIN_STMT
  switch (RequestType_17(D)) <default: <L14> [14.29%], case 1 ... 2: <L2> [14.29%], case 8 ... 9: <L4> [14.29%], case 10 ... 11: <L6> [14.29%], case 12 ... 13: <L9> [14.29%], case 14: <L8> [14.29%], case 15: <L11> [14.29%]>

  <bb 5> [local count: 153391689]:
<L2>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].ProtocolQueueState = 3;
  # DEBUG BEGIN_STMT
  _4 = RxPduIdInfo.MainConnectionIndex;
  Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest (_4, RxConnectionId_11(D));
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 153391689]:
<L4>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].ProtocolQueueState = 2;
  # DEBUG BEGIN_STMT
  _5 = RxPduIdInfo.MainConnectionIndex;
  Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest (_5, RxConnectionId_11(D));
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 153391689]:
<L6>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].ProtocolQueueState = 6;
  # DEBUG BEGIN_STMT
  _6 = RxPduIdInfo.MainConnectionIndex;
  Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest (_6, RxConnectionId_11(D));
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 153391689]:
<L8>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].ProtocolQueueState = 7;
  # DEBUG BEGIN_STMT
  _7 = RxPduIdInfo.MainConnectionIndex;
  Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest (_7, RxConnectionId_11(D));
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 153391689]:
<L9>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].ProtocolQueueState = 8;
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 153391689]:
<L11>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].ProtocolQueueState = 9;
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 1073741824]:
<L14>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].RequestType = RequestType_17(D);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].RCRRPsSent = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].RCRRPsConfirmed = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_3].RequestBuffer = RequestBuffer;
  # DEBUG BEGIN_STMT
  Dcm_PresumptiveProtocolToBeStartedOrDispatched = 1;
  RxPduIdInfo ={v} {CLOBBER};
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols (Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols, funcdef_no=14, decl_uid=6814, cgraph_uid=15, symbol_order=18)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/18
Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols ()
{
  uint8_least ProtocolIndex;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;

  <bb 2> [local count: 357878148]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 715863672]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProtocolQueue[ProtocolIndex_12].ProtocolQueueState;
  if (_1 == 8)
    goto <bb 5>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 4> [local count: 570972865]:
  if (_1 == 6)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 339021581]:
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) ProtocolIndex_12;
  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveProtocol (_2);

  <bb 6> [local count: 715863672]:
  # DEBUG BEGIN_STMT
  ProtocolIndex_29 = ProtocolIndex_12 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_29

  <bb 7> [local count: 1073741820]:
  # ProtocolIndex_12 = PHI <0(2), ProtocolIndex_29(6)>
  # DEBUG ProtocolIndex => ProtocolIndex_12
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_12 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 16>; [33.33%]

  <bb 16> [local count: 357878148]:
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 715863674]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_ProtocolStatus[ProtocolIndex_13].ProtocolState;
  switch (_3) <default: <L15> [20.00%], case 2: <L7> [20.00%], case 10: <L8> [20.00%], case 12: <L9> [20.00%], case 25: <L10> [20.00%]>

  <bb 9> [local count: 143172735]:
<L7>:
  # DEBUG BEGIN_STMT
  _4 = (short unsigned int) ProtocolIndex_13;
  _5 = _4 + 12;
  Dcm_Dsp_ProtocolCancel (_5);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_13].ProtocolState = 4;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 143172735]:
<L8>:
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) ProtocolIndex_13;
  _7 = _6 + 12;
  Dcm_Dsp_ProtocolCancel (_7);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_13].ProtocolState = 15;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 143172735]:
<L9>:
  # DEBUG BEGIN_STMT
  _8 = (short unsigned int) ProtocolIndex_13;
  _9 = _8 + 12;
  Dcm_Dsp_ProtocolCancel (_9);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_13].ProtocolState = 17;
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 143172735]:
<L10>:
  # DEBUG BEGIN_STMT
  _10 = (short unsigned int) ProtocolIndex_13;
  _11 = _10 + 12;
  Dcm_Dsp_ProtocolCancel (_11);
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_13].ProtocolState = 27;
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 715863674]:
<L15>:
  # DEBUG BEGIN_STMT
  ProtocolIndex_27 = ProtocolIndex_13 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_27

  <bb 14> [local count: 1073741824]:
  # ProtocolIndex_13 = PHI <ProtocolIndex_27(13), 0(16)>
  # DEBUG ProtocolIndex => ProtocolIndex_13
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_13 != 2)
    goto <bb 8>; [66.67%]
  else
    goto <bb 15>; [33.33%]

  <bb 15> [local count: 357878150]:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession (Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession, funcdef_no=15, decl_uid=6816, cgraph_uid=16, symbol_order=19)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/19
Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession ()
{
  uint8_least ProtocolIndex;
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _4;
  unsigned char _5;
  long unsigned int _12;
  int _13;
  unsigned char _23;

  <bb 2> [local count: 357878146]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_CancelPresumptiveUDSProtocolsInNonDefaultSession ();
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => 0
  goto <bb 17>; [100.00%]

  <bb 3> [local count: 715863674]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => (unsigned char) ProtocolIndex_6
  # DEBUG INLINE_ENTRY Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolGroup => 2
  # DEBUG BEGIN_STMT
  _12 = ProtocolIndex_6;
  _13 = (int) _12;
  _23 = Dcm_ProtocolConfig[_13].Type;
  if (_23 <= 2)
    goto <bb 16>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 4> [local count: 250552286]:
  # DEBUG ProtocolGroup => 2
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => NULL
  # DEBUG ProtocolGroup => NULL
  # DEBUG ProtocolGroup => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState;
  _2 = _1 + 247;
  if (_2 <= 4)
    goto <bb 7>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 167870031]:
  if (_1 == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 110794221]:
  if (_1 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 177428100]:
  # DEBUG BEGIN_STMT
  _3 = (short unsigned int) ProtocolIndex_6;
  _4 = _3 + 12;
  Dcm_Dsp_ProtocolCancel (_4);

  <bb 8> [local count: 250552285]:
  # DEBUG BEGIN_STMT
  _5 = Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState;
  switch (_5) <default: <L18> [12.50%], case 2: <L11> [12.50%], case 3: <L12> [12.50%], case 9: <L6> [12.50%], case 10: <L7> [12.50%], case 11: <L8> [12.50%], case 12: <L9> [12.50%], case 13: <L10> [12.50%]>

  <bb 9> [local count: 31319036]:
<L6>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 14;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 10> [local count: 31319036]:
<L7>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 15;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 31319036]:
<L8>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 16;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 12> [local count: 31319036]:
<L9>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 17;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 31319036]:
<L10>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 18;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 31319036]:
<L11>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 4;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 31319036]:
<L12>:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolStatus[ProtocolIndex_6].ProtocolState = 5;
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 715863672]:
<L18>:
  # DEBUG ProtocolIndex => NULL
  # DEBUG ProtocolGroup => NULL
  # DEBUG ProtocolGroup => NULL
  # DEBUG BEGIN_STMT
  ProtocolIndex_22 = ProtocolIndex_6 + 1;
  # DEBUG ProtocolIndex => ProtocolIndex_22

  <bb 17> [local count: 1073741824]:
  # ProtocolIndex_6 = PHI <0(2), ProtocolIndex_22(16)>
  # DEBUG ProtocolIndex => ProtocolIndex_6
  # DEBUG BEGIN_STMT
  if (ProtocolIndex_6 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 18>; [33.33%]

  <bb 18> [local count: 357878150]:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex (Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex, funcdef_no=16, decl_uid=6818, cgraph_uid=17, symbol_order=20)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/20
Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex ()
{
  Dcm_ProtocolIndexType _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_LatestExternalUDSProtocolIndex;
  return _2;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout (Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout, funcdef_no=17, decl_uid=6820, cgraph_uid=18, symbol_order=21)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/21
Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout (Dcm_TimerIndexType TimerIndex)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  uint16 Max_RCRRP;
  Dcm_NegativeResponseCodeType NRCToSend;
  int _1;
  Dcm_MsgItemType * _2;
  unsigned char _3;
  unsigned char _4;
  short unsigned int _5;
  Dcm_MsgItemType * _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int _9;
  unsigned char _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIndex => TimerIndex_15(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) TimerIndex_15(D);
  _2 = Dcm_ProtocolQueue[_1].RequestBuffer.BufferPtr;
  _3 = *_2;
  _4 = _3 + 255;
  if (_4 > 2)
    goto <bb 3>; [67.00%]
  else
    goto <bb 17>; [33.00%]

  <bb 3> [local count: 719407022]:
  if (_3 != 6)
    goto <bb 4>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 4> [local count: 474808634]:
  if (_3 != 7)
    goto <bb 5>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 5> [local count: 313373699]:
  if (_3 != 8)
    goto <bb 6>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 6> [local count: 206826641]:
  if (_3 != 10)
    goto <bb 7>; [48.88%]
  else
    goto <bb 17>; [51.12%]

  <bb 7> [local count: 101096862]:
  # DEBUG BEGIN_STMT
  Max_RCRRP_19 = Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp (TimerIndex_15(D));
  # DEBUG Max_RCRRP => Max_RCRRP_19
  # DEBUG BEGIN_STMT
  _5 = Dcm_ProtocolQueue[_1].RCRRPsSent;
  if (_5 == Max_RCRRP_19)
    goto <bb 8>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 8> [local count: 34372933]:
  if (Max_RCRRP_19 != 255)
    goto <bb 9>; [66.00%]
  else
    goto <bb 13>; [34.00%]

  <bb 9> [local count: 22686136]:
  # DEBUG BEGIN_STMT
  _6 = Dcm_ProtocolQueue[_1].RequestBuffer.BufferPtr;
  _7 = *_6;
  if (_7 != 4)
    goto <bb 10>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 10> [local count: 14972850]:
  if (_7 != 9)
    goto <bb 12>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 11> [local count: 12804055]:
  # DEBUG BEGIN_STMT
  # DEBUG NRCToSend => 34

  <bb 12> [local count: 22686136]:
  # NRCToSend_11 = PHI <16(10), 34(11)>
  # DEBUG NRCToSend => NRCToSend_11
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (14, TimerIndex_15(D));
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 78410726]:
  # DEBUG BEGIN_STMT
  # DEBUG NRCToSend => 120
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].ProtocolQueueState = 4;
  # DEBUG BEGIN_STMT
  Dcm_PresumptiveProtocolToBeStartedOrDispatched = 1;

  <bb 14> [local count: 101096862]:
  # NRCToSend_12 = PHI <NRCToSend_11(12), 120(13)>
  # DEBUG NRCToSend => NRCToSend_12
  # DEBUG BEGIN_STMT
  _8 = Dcm_ProtocolQueue[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (_8, Dcm_ProtocolQueue[_1].RequestBuffer, NRCToSend_12, 0);
  # DEBUG BEGIN_STMT
  if (NRCToSend_12 == 16)
    goto <bb 16>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 15> [local count: 80634857]:
  if (NRCToSend_12 == 34)
    goto <bb 16>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 16> [local count: 47877856]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (TimerIndex_15(D), 0);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 972644962]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = Dcm_ProtocolQueue[_1].RxConnectionId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_9, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  _10 = RxPduIdInfo.MainConnectionIndex;
  Dcm_Dsl_Supervisor_MainConnectionHandling_End (_10);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (TimerIndex_15(D), 0);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (14, TimerIndex_15(D));
  RxPduIdInfo ={v} {CLOBBER};

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent (Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent, funcdef_no=18, decl_uid=6824, cgraph_uid=19, symbol_order=22)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/22
Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent (Dcm_ProtocolIndexType ProtocolIndex)
{
  int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_4(D);
  _2 = Dcm_ProtocolQueue[_1].RCRRPsSent;
  _3 = _2 + 1;
  Dcm_ProtocolQueue[_1].RCRRPsSent = _3;
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_1].ProtocolQueueState = 5;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished (Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished, funcdef_no=19, decl_uid=6822, cgraph_uid=20, symbol_order=23)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/23
Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished (Dcm_ProtocolIndexType ProtocolIndex)
{
  short unsigned int _1;
  int _2;
  short unsigned int _3;
  int _4;
  short unsigned int _5;
  short unsigned int _6;
  int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp (ProtocolIndex_10(D));
  if (_1 == 255)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = (int) ProtocolIndex_10(D);
  _3 = Dcm_ProtocolQueue[_2].RCRRPsSent;
  if (_3 == 255)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 124124555]:
  # DEBUG BEGIN_STMT
  Dcm_ProtocolQueue[_2].RCRRPsSent = 254;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 949617270]:
  # DEBUG BEGIN_STMT
  _4 = (int) ProtocolIndex_10(D);
  _5 = Dcm_ProtocolQueue[_4].RCRRPsConfirmed;
  _6 = _5 + 1;
  Dcm_ProtocolQueue[_4].RCRRPsConfirmed = _6;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _7 = (int) ProtocolIndex_10(D);
  Dcm_ProtocolQueue[_7].ProtocolQueueState = 3;
  # DEBUG BEGIN_STMT
  Dcm_PresumptiveProtocolToBeStartedOrDispatched = 1;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE, funcdef_no=20, decl_uid=6799, cgraph_uid=21, symbol_order=24)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/24
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE (Dcm_ProtocolIndexType ProtocolIndex)
{
  boolean ProtocolBusyWithType1ROE;
  unsigned char _1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolBusyWithType1ROE => 0
  # DEBUG BEGIN_STMT
  _1 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusy (ProtocolIndex_6(D));
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = (int) ProtocolIndex_6(D);
  _3 = Dcm_ProtocolStatus[_2].ProtocolState;
  if (_3 == 10)
    goto <bb 6>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 240947665]:
  if (_3 == 15)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 159025459]:
  if (_3 == 20)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 260115417]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolBusyWithType1ROE => 1

  <bb 7> [local count: 1073741824]:
  # ProtocolBusyWithType1ROE_4 = PHI <0(2), 0(5), 1(6)>
  # DEBUG ProtocolBusyWithType1ROE => ProtocolBusyWithType1ROE_4
  # DEBUG BEGIN_STMT
  return ProtocolBusyWithType1ROE_4;

}



;; Function Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd (Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd, funcdef_no=21, decl_uid=6826, cgraph_uid=22, symbol_order=25)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd/25
Dcm_Dsl_Supervisor_ProtocolHandling_PresumptiveProtocolEnd (Dcm_ProtocolIndexType TYPE1PresumptiveProtocolIndex)
{
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) TYPE1PresumptiveProtocolIndex_5(D);
  _2 = Dcm_ProtocolQueue[_1].RequestType;
  _3 = _2 + 255;
  if (_3 <= 1)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_StopTimer (14, TYPE1PresumptiveProtocolIndex_5(D), 2);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (14, TYPE1PresumptiveProtocolIndex_5(D));

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (TYPE1PresumptiveProtocolIndex_5(D), 0);
  return;

}


