
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/90:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/89:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/88:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/87:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/86:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/85:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/84:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/83:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/82:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/81:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/80:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/79:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/78:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/77:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/75:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/74:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/73:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/72:
  Jump functions of caller  Dcm_Dsl_BufferFree/71:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/70:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetState/69:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/68:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/67:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/66:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/64:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/63:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/62:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/60:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/59:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/57:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/56:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/55:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetTxState/54:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetRxState/53:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/52:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/51:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/50:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/49:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/48:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/47:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/46:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_Init/45:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_Init/44:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/43:
  Jump functions of caller  Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42:
    callsite  Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42 -> Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40:
    callsite  Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40 -> Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39:
    callsite  Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39 -> Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent/38:
  Jump functions of caller  Dcm_Dsl_Supervisor_ResetDiagnosticSession/37:
    callsite  Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 -> Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91 : 
  Jump functions of caller  Dcm_Dsl_Supervisor_ProcessTYPE1Request/36:
    callsite  Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 -> Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         Unknown bits
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 -> Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35:
  Jump functions of caller  Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34:
    callsite  Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33:
    callsite  Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32:
    callsite  Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 -> Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30:
    callsite  Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29:
    callsite  Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28:
    callsite  Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 -> Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 -> Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_DetermineRequestType/26:
  Jump functions of caller  Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/25:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType/24:
  Jump functions of caller  Dcm_Dsl_Supervisor_DefaultSessionEntered/23:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProcessingEnd/22:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolFree/21:
  Jump functions of caller  Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/20:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProcessRequest/19:
    callsite  Dcm_Dsl_Supervisor_ProcessRequest/19 -> Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         Unknown bits
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProcessRequest/19 -> Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         Unknown bits
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProcessRequest/19 -> Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         Unknown bits
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_ProcessRequest/19 -> Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         Unknown bits
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_TransmissionFinished/18:
  Jump functions of caller  Dcm_Dsl_Supervisor_P2TimerTimeout/17:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProtocolRequestType/16:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/14:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/13:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/12:
  Jump functions of caller  Dcm_Dsl_Supervisor_IncomingReceptionFinished/11:
  Jump functions of caller  Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest/10:
  Jump functions of caller  Dcm_Dsl_Supervisor_IncomingReception/9:
  Jump functions of caller  Dcm_Dsl_Supervisor_RequestRxPermission/8:
    callsite  Dcm_Dsl_Supervisor_RequestRxPermission/8 -> Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RequestRxPermission/8 -> Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RequestRxPermission/8 -> Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_RequestRxPermission/8 -> Dcm_Dsl_Supervisor_DetermineRequestType/26 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/7:
  Jump functions of caller  Dcm_Dsl_Supervisor_RequestProcessingInhibited/6:
  Jump functions of caller  Dcm_Dsl_Supervisor_InhibitRequestProcessing/5:
  Jump functions of caller  Dcm_Dsl_Supervisor_PostProcessingMainFunction/4:
  Jump functions of caller  Dcm_Dsl_Supervisor_PreProcessingMainFunction/3:
    callsite  Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 -> Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 : 
    callsite  Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 -> Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 : 
  Jump functions of caller  Dcm_Dsl_Supervisor_Init/2:

 Propagating constants:

Not considering Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_DefaultSessionEntered for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProcessingEnd for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProtocolFree for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_IsSessionClearedToSwitch for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_ProcessRequest for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_TransmissionFinished for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_P2TimerTimeout for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_GetProtocolRequestType for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_GetProcessingProtocolIndex for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_IncomingReceptionFinished for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_IncomingReception for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_RequestRxPermission for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_DisinhibitRequestProcessing for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_RequestProcessingInhibited for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_InhibitRequestProcessing for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_PostProcessingMainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_PreProcessingMainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_Init for cloning; -fipa-cp-clone disabled.

overall_size: 712, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91:
  Node: Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40:
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
  Node: Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39:
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
  Node: Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent/38:
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
  Node: Dcm_Dsl_Supervisor_ResetDiagnosticSession/37:
  Node: Dcm_Dsl_Supervisor_ProcessTYPE1Request/36:
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
  Node: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35:
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
  Node: Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34:
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
  Node: Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33:
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
  Node: Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 5, loc_size: 31, prop_time: 0, prop_size: 0]
               4 [loc_time: 5, loc_size: 25, prop_time: 0, prop_size: 0]
               5 [loc_time: 5, loc_size: 25, prop_time: 0, prop_size: 0]
               2 [loc_time: 5, loc_size: 31, prop_time: 0, prop_size: 0]
               3 [loc_time: 5, loc_size: 31, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x3, mask = 0x7
         Dcm_RequestOriginType [1, 5]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28:
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
  Node: Dcm_Dsl_Supervisor_DetermineRequestType/26:
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
  Node: Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/25:
  Node: Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType/24:
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
  Node: Dcm_Dsl_Supervisor_DefaultSessionEntered/23:
  Node: Dcm_Dsl_Supervisor_ProcessingEnd/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProtocolFree/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_ProcessRequest/19:
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
  Node: Dcm_Dsl_Supervisor_TransmissionFinished/18:
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
  Node: Dcm_Dsl_Supervisor_P2TimerTimeout/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_GetProtocolRequestType/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15:
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
  Node: Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/12:
  Node: Dcm_Dsl_Supervisor_IncomingReceptionFinished/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_IncomingReception/9:
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
  Node: Dcm_Dsl_Supervisor_RequestRxPermission/8:
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
  Node: Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/7:
  Node: Dcm_Dsl_Supervisor_RequestProcessingInhibited/6:
  Node: Dcm_Dsl_Supervisor_InhibitRequestProcessing/5:
  Node: Dcm_Dsl_Supervisor_PostProcessingMainFunction/4:
  Node: Dcm_Dsl_Supervisor_PreProcessingMainFunction/3:
  Node: Dcm_Dsl_Supervisor_Init/2:

IPA decision stage:

Propagated bits info for function Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32:
 param 1: value = 0x3, mask = 0x7

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91 (Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0) @06eb0620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_ResetDiagnosticSession/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (365072224 (estimated locally),0.34 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/50 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/51 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/90 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered) @06f2c620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_DefaultSessionEntered/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/89 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd) @06f2c460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessingEnd/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/88 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree) @06f2c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProtocolFree/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/87 (Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch) @06f2c0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/86 (Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer) @06f22ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (273804165 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/85 (Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer) @06f22e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (273804165 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/84 (Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive) @06f22d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/83 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession) @06f22c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (178447301 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/82 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols) @06f22b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (309658552 (estimated locally),0.29 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/81 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack) @06f22a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (445388108 (estimated locally),0.41 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/80 (Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack) @06f229a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/79 (Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack) @06f228c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/78 (Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack) @06f227e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/77 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @06f22700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_ProtocolConfig/76 (Dcm_ProtocolConfig) @06f21bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (read)Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/75 (Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime) @06f222a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (57155621 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (273804165 (estimated locally),0.26 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/74 (Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC) @06f22000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (57155621 (estimated locally),0.05 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/73 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin) @06f18ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (57155621 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (725288981 (estimated locally),0.68 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/72 (Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout) @06f18e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) 
  Calls: 
Dcm_Dsl_BufferFree/71 (Dcm_Dsl_BufferFree) @06f18d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (667498492 (estimated locally),0.62 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/70 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection) @06f18c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (1073619985 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetState/69 (Dcm_Dsl_RxConnectionGetState) @06f18b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (1073619985 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/68 (Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished) @06f188c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_TransmissionFinished/18 (194076967 (estimated locally),1.69 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/67 (Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout) @06f18700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_P2TimerTimeout/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/66 (Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType) @06f18540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_GetProtocolRequestType/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_MainConnectionConfig/65 (Dcm_MainConnectionConfig) @06f1a240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (read)Dcm_Dsl_Supervisor_TransmissionFinished/18 (read)Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (read)Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (read)Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType/24 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/64 (Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol) @06f182a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/63 (Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig) @06f180e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/62 (Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex) @06f0dee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd) @06f0dd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessRequest/19 (667498492 (estimated locally),0.62 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (142714881 (estimated locally),0.13 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (181322245 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_IncomingReceptionFinished/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/60 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest) @06f0db60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/59 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin) @06f0d9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_IncomingReception/9 (921955766 (estimated locally),0.86 per call) 
  Calls: 
Dcm_RxPduIdConfig/58 (Dcm_RxPduIdConfig) @06f0c360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent/38 (read)Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType/24 (read)Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (read)Dcm_Dsl_Supervisor_ProcessRequest/19 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/57 (Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment) @06f0d0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (350401686 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/56 (Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE) @06f0d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (180509959 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/55 (Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy) @06eceee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (530911645 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_GetTxState/54 (Dcm_Dsl_ComMChannelStateManager_GetTxState) @06ecee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_GetRxState/53 (Dcm_Dsl_ComMChannelStateManager_GetRxState) @06eced20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06ece9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_IncomingReception/9 (921955766 (estimated locally),0.86 per call) Dcm_Dsl_Supervisor_DetermineRequestType/26 (1073527120 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/51 (Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession) @06ece2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/50 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ece1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessingEnd/22 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolFree/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/49 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ece0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessingEnd/22 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolFree/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/48 (Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction) @06ec6ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/47 (Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction) @06ec6e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_PostProcessingMainFunction/4 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/46 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction) @06ec6d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_PostProcessingMainFunction/4 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_Init/45 (Dcm_Dsl_Supervisor_MainConnectionHandling_Init) @06ec6b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_Init/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_Init/44 (Dcm_Dsl_Supervisor_ProtocolHandling_Init) @06ec6a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_Init/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/43 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init) @06ec69a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_Init/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42 (Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest) @06ec67e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RequestRxPermission/8 (190118694 (estimated locally),0.18 per call) 
  Calls: Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40 (Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest) @06ec6460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RequestRxPermission/8 (190118694 (estimated locally),0.18 per call) 
  Calls: Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39 (Dcm_Dsl_Supervisor_RxPermissionNormalRequest) @06ec62a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RequestRxPermission/8 (190118694 (estimated locally),0.18 per call) 
  Calls: Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent/38 (Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent) @06ec60e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RxPduIdConfig/58 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (Dcm_Dsl_Supervisor_ResetDiagnosticSession) @06ebcee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ResetDiagnosticSession/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/50 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91 (365072224 (estimated locally),0.34 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/49 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (Dcm_Dsl_Supervisor_ProcessTYPE1Request) @06ebcd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/76 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessRequest/19 (58034762 (estimated locally),0.05 per call) 
  Calls: Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_BufferFree/71 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61 (142714881 (estimated locally),0.13 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/74 (57155621 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/73 (57155621 (estimated locally),0.05 per call) Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/75 (57155621 (estimated locally),0.05 per call) Dcm_Dsl_BufferFree/71 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61 (181322245 (estimated locally),0.17 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive) @06ebc7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ResetDiagnosticSession/0 (write)Dcm_ProtocolConfig/76 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (268435456 (estimated locally),0.25 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/86 (273804165 (estimated locally),0.26 per call) Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/85 (273804165 (estimated locally),0.26 per call) Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/75 (273804165 (estimated locally),0.26 per call) Dcm_Dsl_Supervisor_ProtocolHandling_EnqueueAsPresumptive/84 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/73 (725288981 (estimated locally),0.68 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelUDSProtocolsInNonDefaultSession/83 (178447301 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelROEProcessingOnAllProtocols/82 (309658552 (estimated locally),0.29 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelOngoingReceptionsOnLowerPriorityProtocolsOfSameStack/81 (445388108 (estimated locally),0.41 per call) Dcm_Dsl_Supervisor_ProtocolHandling_TerminateCurrentProtocolOnSameStack/80 (217325345 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_ProtocolHandling_PreemptionNecessaryOnStack/79 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_CancelTYPE1PresumptiveProtocolsOnSameStack/78 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/64 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/77 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (Dcm_Dsl_Supervisor_RearbitrationTYPE1Request) @06ebc2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073527120 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (178956971 (estimated locally),0.17 per call) 
Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request) @06ebc0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073527120 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (178956971 (estimated locally),0.17 per call) 
Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request) @06eb0ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RearbitrationTYPE1Request/34 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment/57 (350401686 (estimated locally),0.33 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/56 (180509959 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/55 (530911645 (estimated locally),0.49 per call) Dcm_Dsl_ComMChannelStateManager_GetTxState/54 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_ComMChannelStateManager_GetRxState/53 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic/30 (Dcm_Dsl_Supervisor_PrearbitrationTYPE1Periodic) @06eb0b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE/29 (Dcm_Dsl_Supervisor_PrearbitrationTYPE1ROE) @06eb09a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_PrearbitrationNormalRequest/28 (Dcm_Dsl_Supervisor_PrearbitrationNormalRequest) @06eb07e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_RequestIsPotentialConcurrentTesterPresent/38 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_DetermineRequestType/26 (Dcm_Dsl_Supervisor_DetermineRequestType) @06eb0460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073527120 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_RequestRxPermission/8 (1073741823 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (1073527120 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/25 (Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession) @06eb02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetDiagnosticSession/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType/24 (Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType) @06eb00e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/58 (read)Dcm_MainConnectionConfig/65 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_DefaultSessionEntered/23 (Dcm_Dsl_Supervisor_DefaultSessionEntered) @06eaaee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/90 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProcessingEnd/22 (Dcm_Dsl_Supervisor_ProcessingEnd) @06eaad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/50 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/89 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/49 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProtocolFree/21 (Dcm_Dsl_Supervisor_ProtocolFree) @06eaab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/50 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree/88 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/49 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/20 (Dcm_Dsl_Supervisor_IsSessionClearedToSwitch) @06eaa8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch/87 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_ProcessRequest/19 (Dcm_Dsl_Supervisor_ProcessRequest) @06eaa700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/58 (read)
  Referring: 
  Availability: available
  Function flags: count:1073619985 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/74 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/73 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/72 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_ProcessTYPE1Request/36 (58034762 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61 (667498492 (estimated locally),0.62 per call) Dcm_Dsl_BufferFree/71 (667498492 (estimated locally),0.62 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE/56 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/55 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_ComMChannelStateManager_GetRxState/53 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/70 (1073619985 (estimated locally),1.00 per call) Dcm_Dsl_RxConnectionGetState/69 (1073619985 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_TransmissionFinished/18 (Dcm_Dsl_Supervisor_TransmissionFinished) @06eaa380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionConfig/65 (read)
  Referring: 
  Availability: available
  Function flags: count:114863534 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/68 (194076967 (estimated locally),1.69 per call) 
Dcm_Dsl_Supervisor_P2TimerTimeout/17 (Dcm_Dsl_Supervisor_P2TimerTimeout) @06eaa1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout/67 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_GetProtocolRequestType/16 (Dcm_Dsl_Supervisor_GetProtocolRequestType) @06eaa000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType/66 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15 (Dcm_Dsl_Supervisor_GetProcessingProtocolIndex) @06ea4d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/58 (read)Dcm_MainConnectionConfig/65 (read)Dcm_MainConnectionConfig/65 (read)Dcm_MainConnectionConfig/65 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request/33 (178956971 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/14 (Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol) @06ea4b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol/64 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/13 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig) @06ea49a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig/63 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/12 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol) @06ea47e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex/62 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_IncomingReceptionFinished/11 (Dcm_Dsl_Supervisor_IncomingReceptionFinished) @06ea4460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/61 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest/10 (Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest) @06ea42a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_IncomingReception/9 (Dcm_Dsl_Supervisor_IncomingReception) @06ea40e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/59 (921955766 (estimated locally),0.86 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/52 (921955766 (estimated locally),0.86 per call) 
Dcm_Dsl_Supervisor_RequestRxPermission/8 (Dcm_Dsl_Supervisor_RequestRxPermission) @06e43c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_InhibitRequestProcessing/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest/42 (190118694 (estimated locally),0.18 per call) Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest/40 (190118694 (estimated locally),0.18 per call) Dcm_Dsl_Supervisor_RxPermissionNormalRequest/39 (190118694 (estimated locally),0.18 per call) Dcm_Dsl_Supervisor_DetermineRequestType/26 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/7 (Dcm_Dsl_Supervisor_DisinhibitRequestProcessing) @06e46ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_InhibitRequestProcessing/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_RequestProcessingInhibited/6 (Dcm_Dsl_Supervisor_RequestProcessingInhibited) @06e46d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_InhibitRequestProcessing/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_InhibitRequestProcessing/5 (Dcm_Dsl_Supervisor_InhibitRequestProcessing) @06e46b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_InhibitRequestProcessing/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_PostProcessingMainFunction/4 (Dcm_Dsl_Supervisor_PostProcessingMainFunction) @06e469a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/47 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/46 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_PreProcessingMainFunction/3 (Dcm_Dsl_Supervisor_PreProcessingMainFunction) @06e467e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction/48 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/47 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/46 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_Init/2 (Dcm_Dsl_Supervisor_Init) @06e46620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetDiagnosticSession/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_Init/45 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_Init/44 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/43 (1073741824 (estimated locally),1.00 per call) 
Dcm_InhibitRequestProcessing/1 (Dcm_InhibitRequestProcessing) @06d44900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_RequestProcessingInhibited/6 (read)Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/7 (write)Dcm_Dsl_Supervisor_InhibitRequestProcessing/5 (write)Dcm_Dsl_Supervisor_RequestRxPermission/8 (read)
  Availability: available
  Varpool flags: initialized
Dcm_ResetDiagnosticSession/0 (Dcm_ResetDiagnosticSession) @06d448b8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_ResetDiagnosticSession/37 (read)Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0/91 (write)Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/25 (write)Dcm_Dsl_Supervisor_Init/2 (write)Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive/35 (write)
  Availability: available
  Varpool flags: initialized

;; Function Dcm_Dsl_Supervisor_ResetDiagnosticSession (Dcm_Dsl_Supervisor_ResetDiagnosticSession, funcdef_no=35, decl_uid=7734, cgraph_uid=36, symbol_order=37)

Modification phase of node Dcm_Dsl_Supervisor_ResetDiagnosticSession/37
Dcm_Dsl_Supervisor_ResetDiagnosticSession ()
{
  unsigned char Dcm_ResetDiagnosticSession.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_ResetDiagnosticSession.0_1 = Dcm_ResetDiagnosticSession;
  if (Dcm_ResetDiagnosticSession.0_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  Dcm_Dsl_Supervisor_ResetDiagnosticSession.part.0 ();
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_Supervisor_Init (Dcm_Dsl_Supervisor_Init, funcdef_no=0, decl_uid=6499, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_Dsl_Supervisor_Init/2
Dcm_Dsl_Supervisor_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_Init ();
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession
  # DEBUG BEGIN_STMT
  Dcm_ResetDiagnosticSession = 1;
  return;

}



;; Function Dcm_Dsl_Supervisor_PreProcessingMainFunction (Dcm_Dsl_Supervisor_PreProcessingMainFunction, funcdef_no=1, decl_uid=6501, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_Dsl_Supervisor_PreProcessingMainFunction/3
Dcm_Dsl_Supervisor_PreProcessingMainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ResetDiagnosticSession ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_MainFunction ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ResetDiagnosticSession ();
  return;

}



;; Function Dcm_Dsl_Supervisor_PostProcessingMainFunction (Dcm_Dsl_Supervisor_PostProcessingMainFunction, funcdef_no=2, decl_uid=6503, cgraph_uid=3, symbol_order=4)

Modification phase of node Dcm_Dsl_Supervisor_PostProcessingMainFunction/4
Dcm_Dsl_Supervisor_PostProcessingMainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction ();
  return;

}



;; Function Dcm_Dsl_Supervisor_InhibitRequestProcessing (Dcm_Dsl_Supervisor_InhibitRequestProcessing, funcdef_no=3, decl_uid=6505, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_Dsl_Supervisor_InhibitRequestProcessing/5
Dcm_Dsl_Supervisor_InhibitRequestProcessing ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_InhibitRequestProcessing = 1;
  return;

}



;; Function Dcm_Dsl_Supervisor_RequestProcessingInhibited (Dcm_Dsl_Supervisor_RequestProcessingInhibited, funcdef_no=4, decl_uid=6507, cgraph_uid=5, symbol_order=6)

Modification phase of node Dcm_Dsl_Supervisor_RequestProcessingInhibited/6
Dcm_Dsl_Supervisor_RequestProcessingInhibited ()
{
  boolean _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_InhibitRequestProcessing;
  return _2;

}



;; Function Dcm_Dsl_Supervisor_DisinhibitRequestProcessing (Dcm_Dsl_Supervisor_DisinhibitRequestProcessing, funcdef_no=5, decl_uid=6509, cgraph_uid=6, symbol_order=7)

Modification phase of node Dcm_Dsl_Supervisor_DisinhibitRequestProcessing/7
Dcm_Dsl_Supervisor_DisinhibitRequestProcessing ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_InhibitRequestProcessing = 0;
  return;

}



;; Function Dcm_Dsl_Supervisor_IncomingReception (Dcm_Dsl_Supervisor_IncomingReception, funcdef_no=7, decl_uid=6512, cgraph_uid=8, symbol_order=9)

Modification phase of node Dcm_Dsl_Supervisor_IncomingReception/9
Dcm_Dsl_Supervisor_IncomingReception (Dcm_BufferUserType RxConnectionId, Dcm_RequestTypeType RequestType)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = RequestType_3(D) + 250;
  if (_1 <= 1)
    goto <bb 7>; [25.50%]
  else
    goto <bb 3>; [74.50%]

  <bb 3> [local count: 799937660]:
  if (RequestType_3(D) == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 527958855]:
  if (RequestType_3(D) == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 348452844]:
  if (RequestType_3(D) == 8)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 229978877]:
  if (RequestType_3(D) == 9)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 921955766]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_5(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin (RxConnectionId_5(D));
  RxPduIdInfo ={v} {CLOBBER};

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest (Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest, funcdef_no=8, decl_uid=6514, cgraph_uid=9, symbol_order=10)

Modification phase of node Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest/10
Dcm_Dsl_Supervisor_AnnounceIncomingApplicationDiagnosticRequest (Dcm_BufferUserType RxConnectionId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest (RxConnectionId_2(D));
  return;

}



;; Function Dcm_Dsl_Supervisor_IncomingReceptionFinished (Dcm_Dsl_Supervisor_IncomingReceptionFinished, funcdef_no=9, decl_uid=6516, cgraph_uid=10, symbol_order=11)

Modification phase of node Dcm_Dsl_Supervisor_IncomingReceptionFinished/11
Dcm_Dsl_Supervisor_IncomingReceptionFinished (Dcm_BufferUserType RxConnectionId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (RxConnectionId_2(D));
  return;

}



;; Function Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol, funcdef_no=10, decl_uid=6518, cgraph_uid=11, symbol_order=12)

Modification phase of node Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/12
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol ()
{
  Dcm_BufferUserType ProtocolId;
  unsigned char _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolIndex ();
  _2 = (short unsigned int) _1;
  ProtocolId_5 = _2 + 12;
  # DEBUG ProtocolId => ProtocolId_5
  # DEBUG BEGIN_STMT
  return ProtocolId_5;

}



;; Function Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig, funcdef_no=11, decl_uid=6520, cgraph_uid=12, symbol_order=13)

Modification phase of node Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/13
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig (struct Dcm_ProtocolConfigType * const CurrentProtocolConfig)
{
  Std_ReturnType GetProtocolConfigResult;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG GetProtocolConfigResult => 1
  # DEBUG BEGIN_STMT
  GetProtocolConfigResult_4 = Dcm_Dsl_Supervisor_ProtocolHandling_GetLatestExternalUDSProtocolConfig (CurrentProtocolConfig_2(D));
  # DEBUG GetProtocolConfigResult => GetProtocolConfigResult_4
  # DEBUG BEGIN_STMT
  return GetProtocolConfigResult_4;

}



;; Function Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol (Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol, funcdef_no=12, decl_uid=6522, cgraph_uid=13, symbol_order=14)

Modification phase of node Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol/14
Dcm_Dsl_Supervisor_GetProtocolGroupTypeForProtocol (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_ProtocolGroupType ProtocolGroup;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ProtocolGroup_4 = Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolGroupTypeForProtocol (ProtocolIndex_2(D));
  # DEBUG ProtocolGroup => ProtocolGroup_4
  # DEBUG BEGIN_STMT
  return ProtocolGroup_4;

}



;; Function Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (Dcm_Dsl_Supervisor_GetProcessingProtocolIndex, funcdef_no=13, decl_uid=6530, cgraph_uid=14, symbol_order=15)

Modification phase of node Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/15
Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (Dcm_BufferUserType RxConnectionId, Dcm_RequestOriginType RequestOrigin)
{
  Dcm_MainConnectionIndexType MainConnectionIndex;
  Dcm_ProtocolIndexType ProcessingProtocolIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  int _1;
  int _2;
  int _3;
  int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProcessingProtocolIndex => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_7(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_7(D);
  MainConnectionIndex_9 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  # DEBUG MainConnectionIndex => MainConnectionIndex_9
  # DEBUG BEGIN_STMT
  switch (RequestOrigin_10(D)) <default: <L9> [25.00%], case 1: <L0> [25.00%], case 2: <L3> [25.00%], case 3: <L4> [25.00%], case 4 ... 5: <L0> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 = (int) MainConnectionIndex_9;
  ProcessingProtocolIndex_13 = Dcm_MainConnectionConfig[_2].ProtocolIndex;
  # DEBUG ProcessingProtocolIndex => ProcessingProtocolIndex_13
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L3>:
  # DEBUG BEGIN_STMT
  _3 = (int) MainConnectionIndex_9;
  ProcessingProtocolIndex_12 = Dcm_MainConnectionConfig[_3].ProtocolIndex;
  # DEBUG ProcessingProtocolIndex => ProcessingProtocolIndex_12
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L4>:
  # DEBUG BEGIN_STMT
  _4 = (int) MainConnectionIndex_9;
  ProcessingProtocolIndex_11 = Dcm_MainConnectionConfig[_4].ProtocolIndex;
  # DEBUG ProcessingProtocolIndex => ProcessingProtocolIndex_11
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  # ProcessingProtocolIndex_5 = PHI <ProcessingProtocolIndex_13(3), ProcessingProtocolIndex_12(4), ProcessingProtocolIndex_11(5), 2(2)>
<L9>:
  # DEBUG ProcessingProtocolIndex => ProcessingProtocolIndex_5
  # DEBUG BEGIN_STMT
  RxPduIdInfo ={v} {CLOBBER};
  return ProcessingProtocolIndex_5;

}



;; Function Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request (Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request, funcdef_no=30, decl_uid=7728, cgraph_uid=31, symbol_order=32)

Modification phase of node Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request/32
Adjusting mask for param 1 to 0x7
Setting value range of param 1 [1, 5]
Dcm_Dsl_Supervisor_RxArbitrationTYPE1Request (Dcm_BufferUserType RxConnectionId, Dcm_RequestOriginType RequestOrigin)
{
  const boolean ProtocolBusyWithType1ROE;
  Dcm_ComMChannelOperationStateType ComMChannelOperationState;
  Dcm_ReceptionArbitrationResultType ArbitrationResult;
  Dcm_ProtocolIndexType ProcessingProtocolIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProcessingProtocolIndex => 2
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG ComMChannelOperationState => 0
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_11(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  ProcessingProtocolIndex_15 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (RxConnectionId_11(D), RequestOrigin_13(D));
  # DEBUG ProcessingProtocolIndex => ProcessingProtocolIndex_15
  # DEBUG BEGIN_STMT
  switch (RequestOrigin_13(D)) <default: <L22> [25.00%], case 1: <L0> [25.00%], case 2 ... 3: <L1> [25.00%], case 4 ... 5: <L23> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 = RxPduIdInfo.ComMChannelId;
  ComMChannelOperationState_19 = Dcm_Dsl_ComMChannelStateManager_GetRxState (_1);
  # DEBUG ComMChannelOperationState => ComMChannelOperationState_19
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = RxPduIdInfo.ComMChannelId;
  ComMChannelOperationState_17 = Dcm_Dsl_ComMChannelStateManager_GetTxState (_2);
  # DEBUG ComMChannelOperationState => ComMChannelOperationState_17
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 536870913]:
  # ComMChannelOperationState_7 = PHI <ComMChannelOperationState_19(3), ComMChannelOperationState_17(4)>
<L19>:
  # DEBUG ComMChannelOperationState => ComMChannelOperationState_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ComMChannelOperationState_7 != 1)
    goto <bb 11>; [51.11%]
  else
    goto <bb 6>; [48.89%]

  <bb 6> [local count: 530911645]:
<L23>:
  # DEBUG ComMChannelOperationState => NULL
  # DEBUG BEGIN_STMT
  _3 = RxPduIdInfo.MainConnectionIndex;
  _4 = Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy (_3);
  if (_4 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 7> [local count: 180509959]:
  # DEBUG BEGIN_STMT
  ProtocolBusyWithType1ROE_24 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE (ProcessingProtocolIndex_15);
  # DEBUG ProtocolBusyWithType1ROE => ProtocolBusyWithType1ROE_24
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 1
  # DEBUG BEGIN_STMT
  _5 = RequestOrigin_13(D) + 254;
  if (_5 > 1)
    goto <bb 8>; [59.00%]
  else
    goto <bb 11>; [41.00%]

  <bb 8> [local count: 106500876]:
  if (ProtocolBusyWithType1ROE_24 == 1)
    goto <bb 9>; [21.72%]
  else
    goto <bb 11>; [78.28%]

  <bb 9> [local count: 23131990]:
  # DEBUG BEGIN_STMT
  # DEBUG ArbitrationResult => 6
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 350401686]:
  # DEBUG BEGIN_STMT
  ArbitrationResult_22 = Dcm_Dsl_Supervisor_ProtocolHandling_TYPE1RequestPriorityAssessment (ProcessingProtocolIndex_15, RequestOrigin_13(D));
  # DEBUG ArbitrationResult => ArbitrationResult_22

  <bb 11> [local count: 1073741824]:
  # ArbitrationResult_6 = PHI <2(5), 1(8), ArbitrationResult_22(10), 1(7), 6(9), 2(2)>
<L22>:
  # DEBUG ComMChannelOperationState => NULL
  # DEBUG ArbitrationResult => ArbitrationResult_6
  # DEBUG BEGIN_STMT
  RxPduIdInfo ={v} {CLOBBER};
  return ArbitrationResult_6;

}



;; Function Dcm_Dsl_Supervisor_RequestRxPermission (Dcm_Dsl_Supervisor_RequestRxPermission, funcdef_no=6, decl_uid=6540, cgraph_uid=7, symbol_order=8)

Modification phase of node Dcm_Dsl_Supervisor_RequestRxPermission/8
Dcm_Dsl_Supervisor_RequestRxPermission (Dcm_BufferUserType RxConnectionId, PduLengthType Length, Dcm_RequestOriginType RequestOrigin)
{
  Dcm_RequestTypeType AcceptAsRequestType;
  const Dcm_RequestTypeType InitialRequestType;
  unsigned char Dcm_InhibitRequestProcessing.1_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  InitialRequestType_8 = Dcm_Dsl_Supervisor_DetermineRequestType (RxConnectionId_5(D), RequestOrigin_6(D));
  # DEBUG InitialRequestType => InitialRequestType_8
  # DEBUG BEGIN_STMT
  # DEBUG AcceptAsRequestType => 17
  # DEBUG BEGIN_STMT
  Dcm_InhibitRequestProcessing.1_1 = Dcm_InhibitRequestProcessing;
  if (Dcm_InhibitRequestProcessing.1_1 != 1)
    goto <bb 5>; [66.00%]
  else
    goto <bb 3>; [34.00%]

  <bb 3> [local count: 365072220]:
  if (InitialRequestType_8 == 9)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 240947665]:
  if (InitialRequestType_8 == 8)
    goto <bb 5>; [48.89%]
  else
    goto <bb 10>; [51.11%]

  <bb 5> [local count: 950593472]:
  # DEBUG BEGIN_STMT
  switch (InitialRequestType_8) <default: <L16> [20.00%], case 1 ... 2: <L3> [20.00%], case 8 ... 9: <L17> [20.00%], case 10 ... 11: <L5> [20.00%], case 14: <L9> [20.00%]>

  <bb 6> [local count: 190118694]:
<L3>:
  # DEBUG BEGIN_STMT
  AcceptAsRequestType_15 = Dcm_Dsl_Supervisor_RxPermissionNormalRequest (RxConnectionId_5(D), Length_13(D), InitialRequestType_8);
  # DEBUG AcceptAsRequestType => AcceptAsRequestType_15
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 190118694]:
<L5>:
  # DEBUG BEGIN_STMT
  AcceptAsRequestType_12 = Dcm_Dsl_Supervisor_RxPermissionTYPE1ROERequest (RxConnectionId_5(D), InitialRequestType_8);
  # DEBUG AcceptAsRequestType => AcceptAsRequestType_12
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 190118694]:
<L17>:
  # DEBUG BEGIN_STMT
  # DEBUG InitialRequestType => InitialRequestType_8
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG AcceptAsRequestType => 17
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG ReceptionArbitrationResult => 6
  # DEBUG BEGIN_STMT
  # DEBUG RxPermission => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RxPermission => 1
  # DEBUG BEGIN_STMT
  # DEBUG RxPermission => 1
  # DEBUG BEGIN_STMT
  # DEBUG ReceptionPermission => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG AcceptAsRequestType => InitialRequestType_8
  # DEBUG BEGIN_STMT
  # DEBUG AcceptAsRequestType => InitialRequestType_8
  # DEBUG BEGIN_STMT
  # DEBUG InitialRequestType => NULL
  # DEBUG AcceptAsRequestType => InitialRequestType_8
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 190118694]:
<L9>:
  # DEBUG BEGIN_STMT
  AcceptAsRequestType_10 = Dcm_Dsl_Supervisor_RxPermissionTYPE1PeriodicRequest (RxConnectionId_5(D));
  # DEBUG AcceptAsRequestType => AcceptAsRequestType_10
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # AcceptAsRequestType_2 = PHI <AcceptAsRequestType_12(7), 17(4), AcceptAsRequestType_15(6), 17(5), AcceptAsRequestType_10(9), InitialRequestType_8(8)>
<L16>:
  # DEBUG AcceptAsRequestType => AcceptAsRequestType_2
  # DEBUG BEGIN_STMT
  return AcceptAsRequestType_2;

}



;; Function Dcm_Dsl_Supervisor_ProcessTYPE1Request (Dcm_Dsl_Supervisor_ProcessTYPE1Request, funcdef_no=34, decl_uid=7732, cgraph_uid=35, symbol_order=36)

Modification phase of node Dcm_Dsl_Supervisor_ProcessTYPE1Request/36
Dcm_Dsl_Supervisor_ProcessTYPE1Request (Dcm_BufferUserType RxConnectionId, Dcm_RequestTypeType RequestType, struct Dcm_BufferType RequestBuffer)
{
  short unsigned int RequestBuffer$BufferId;
  Dcm_TimerValueType ServerAdjust;
  Dcm_TimerValueType P2MaxTime;
  Dcm_TimerValueType NRCTimeout;
  Dcm_ReceptionArbitrationResultType ReceptionArbitrationResult;
  Dcm_ProtocolIndexType ProcessingProtocolIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  unsigned char _1;
  int _2;
  short unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  RequestBuffer$BufferId_18 = MEM[(struct  *)&RequestBuffer + 8B];
  # DEBUG RequestBuffer$BufferId => RequestBuffer$BufferId_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ProcessingProtocolIndex_13 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndexForTYPE1Request (RxConnectionId_10(D), RequestType_11(D));
  # DEBUG ProcessingProtocolIndex => ProcessingProtocolIndex_13
  # DEBUG BEGIN_STMT
  ReceptionArbitrationResult_15 = Dcm_Dsl_Supervisor_RearbitrationTYPE1Request (RxConnectionId_10(D), RequestType_11(D));
  # DEBUG ReceptionArbitrationResult => ReceptionArbitrationResult_15
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_10(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (ReceptionArbitrationResult_15) <default: <L23> [25.00%], case 0 ... 2: <L0> [25.00%], case 3 ... 4: <L7> [25.00%], case 6: <L20> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 = RequestType_11(D) + 255;
  if (_1 <= 1)
    goto <bb 6>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 4> [local count: 199984415]:
  if (RequestType_11(D) == 8)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 131989714]:
  if (RequestType_11(D) == 9)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 181322245]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (RxConnectionId_10(D));

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferFree (14, RequestBuffer$BufferId_18);
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 8> [local count: 268435456]:
<L7>:
  # DEBUG BEGIN_STMT
  if (RequestType_11(D) != 14)
    goto <bb 9>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 9> [local count: 177167401]:
  if (RequestType_11(D) != 10)
    goto <bb 10>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 10> [local count: 116930485]:
  if (RequestType_11(D) != 11)
    goto <bb 11>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 11> [local count: 57155621]:
  # DEBUG BEGIN_STMT
  # DEBUG NRCTimeout => 0
  # DEBUG BEGIN_STMT
  P2MaxTime_20 = Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime (ProcessingProtocolIndex_13);
  # DEBUG P2MaxTime => P2MaxTime_20
  # DEBUG BEGIN_STMT
  _2 = (int) ProcessingProtocolIndex_13;
  _3 = Dcm_ProtocolConfig[_2].P2ServerAdjustTime;
  ServerAdjust_21 = (Dcm_TimerValueType) _3;
  # DEBUG ServerAdjust => ServerAdjust_21
  # DEBUG BEGIN_STMT
  if (P2MaxTime_20 > ServerAdjust_21)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 28577810]:
  # DEBUG BEGIN_STMT
  NRCTimeout_22 = P2MaxTime_20 - ServerAdjust_21;
  # DEBUG NRCTimeout => NRCTimeout_22

  <bb 13> [local count: 57155621]:
  # NRCTimeout_5 = PHI <0(11), NRCTimeout_22(12)>
  # DEBUG NRCTimeout => NRCTimeout_5
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin (RxConnectionId_10(D), 1);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (RxConnectionId_10(D), RequestBuffer, 33, NRCTimeout_5);
  goto <bb 18>; [100.00%]

  <bb 14> [local count: 211279835]:
  # DEBUG BEGIN_STMT
  _4 = RequestType_11(D) + 255;
  if (_4 <= 1)
    goto <bb 17>; [25.50%]
  else
    goto <bb 15>; [74.50%]

  <bb 15> [local count: 157403477]:
  if (RequestType_11(D) == 8)
    goto <bb 17>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 103886295]:
  if (RequestType_11(D) == 9)
    goto <bb 17>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 17> [local count: 142714881]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (RxConnectionId_10(D));

  <bb 18> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferFree (14, RequestBuffer$BufferId_18);
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 268435456]:
<L20>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_EnqueueTYPE1RequestAsPresumptive (RxConnectionId_10(D), ProcessingProtocolIndex_13, RequestType_11(D), RequestBuffer);
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 1073741824]:
<L23>:
  RxPduIdInfo ={v} {CLOBBER};
  return;

}



;; Function Dcm_Dsl_Supervisor_GetProtocolRequestType (Dcm_Dsl_Supervisor_GetProtocolRequestType, funcdef_no=14, decl_uid=6546, cgraph_uid=15, symbol_order=16)

Modification phase of node Dcm_Dsl_Supervisor_GetProtocolRequestType/16
Dcm_Dsl_Supervisor_GetProtocolRequestType (Dcm_BufferUserType ProtocolId)
{
  Dcm_SupervisorProtocolRequestTypeType ProtocolRequestType;
  const Dcm_ProtocolIndexType ProtocolIndex;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) ProtocolId_2(D);
  ProtocolIndex_3 = _1 + 244;
  # DEBUG ProtocolIndex => ProtocolIndex_3
  # DEBUG BEGIN_STMT
  ProtocolRequestType_6 = Dcm_Dsl_Supervisor_ProtocolHandling_GetProtocolRequestType (ProtocolIndex_3);
  # DEBUG ProtocolRequestType => ProtocolRequestType_6
  # DEBUG BEGIN_STMT
  return ProtocolRequestType_6;

}



;; Function Dcm_Dsl_Supervisor_P2TimerTimeout (Dcm_Dsl_Supervisor_P2TimerTimeout, funcdef_no=15, decl_uid=6524, cgraph_uid=16, symbol_order=17)

Modification phase of node Dcm_Dsl_Supervisor_P2TimerTimeout/17
Dcm_Dsl_Supervisor_P2TimerTimeout (Dcm_TimerIndexType TimerIndex)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_P2TimerTimeout (TimerIndex_2(D));
  return;

}



;; Function Dcm_Dsl_Supervisor_TransmissionFinished (Dcm_Dsl_Supervisor_TransmissionFinished, funcdef_no=16, decl_uid=6527, cgraph_uid=17, symbol_order=18)

Modification phase of node Dcm_Dsl_Supervisor_TransmissionFinished/18
Dcm_Dsl_Supervisor_TransmissionFinished (Dcm_BufferUserType TxConnectionId, Dcm_TxResultType TransmissionResult)
{
  boolean TransmissionDone;
  uint16_least MainConnectionIndex;
  short unsigned int _1;
  short unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 114863534]:
  # DEBUG BEGIN_STMT
  # DEBUG MainConnectionIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionDone => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_MainConnectionConfig[MainConnectionIndex_4].ConfirmationTxPduId;
  _2 = TxConnectionId_10(D) + 65530;
  if (_1 == _2)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 194076967]:
  # DEBUG BEGIN_STMT
  _3 = (unsigned char) MainConnectionIndex_4;
  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished (_3, TransmissionResult_12(D));
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionDone => 1
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 764801327]:
  # DEBUG BEGIN_STMT
  MainConnectionIndex_11 = MainConnectionIndex_4 + 1;
  # DEBUG MainConnectionIndex => MainConnectionIndex_11

  <bb 7> [local count: 958878293]:
  # MainConnectionIndex_14 = PHI <MainConnectionIndex_4(4), MainConnectionIndex_11(5)>
  # TransmissionDone_8 = PHI <1(4), 0(5)>

  <bb 10> [local count: 1073741824]:
  # MainConnectionIndex_4 = PHI <MainConnectionIndex_14(7), 0(2)>
  # TransmissionDone_5 = PHI <TransmissionDone_8(7), 0(2)>
  # DEBUG TransmissionDone => TransmissionDone_5
  # DEBUG MainConnectionIndex => MainConnectionIndex_4
  # DEBUG BEGIN_STMT
  if (MainConnectionIndex_4 <= 2)
    goto <bb 8>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 8> [local count: 1014686025]:
  if (TransmissionDone_5 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 114863532]:
  return;

}



;; Function Dcm_Dsl_Supervisor_ProcessRequest (Dcm_Dsl_Supervisor_ProcessRequest, funcdef_no=17, decl_uid=6544, cgraph_uid=18, symbol_order=19)

Modification phase of node Dcm_Dsl_Supervisor_ProcessRequest/19
Dcm_Dsl_Supervisor_ProcessRequest (Dcm_BufferUserType RxConnectionId, Dcm_RequestTypeType RequestType, struct Dcm_BufferType RequestBuffer)
{
  Dcm_MsgItemType * RequestBuffer$BufferPtr;
  Dcm_TimerValueType NRCTimeout;
  boolean ProtocolBusyWithType1ROE;
  boolean RxConnectionCancellationEnqueued;
  boolean MainConnectionBusy;
  Dcm_ComMChannelOperationStateType ComMChannelRxState;
  Dcm_RxConnectionStatusType RxConnectionState;
  Dcm_ProtocolIndexType RxProtocolIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  unsigned char _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned char _6;
  unsigned char _8;
  unsigned char _9;
  short unsigned int _10;

  <bb 2> [local count: 1073619985]:
  RequestBuffer$BufferPtr_7 = MEM[(struct  *)&RequestBuffer + 12B];
  # DEBUG RequestBuffer$BufferPtr => RequestBuffer$BufferPtr_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RxConnectionState_15 = Dcm_Dsl_RxConnectionGetState (RxConnectionId_13(D));
  # DEBUG RxConnectionState => RxConnectionState_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RxConnectionCancellationEnqueued_17 = Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection (RxConnectionId_13(D));
  # DEBUG RxConnectionCancellationEnqueued => RxConnectionCancellationEnqueued_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_13(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  _1 = RxPduIdInfo.ComMChannelId;
  ComMChannelRxState_20 = Dcm_Dsl_ComMChannelStateManager_GetRxState (_1);
  # DEBUG ComMChannelRxState => ComMChannelRxState_20
  # DEBUG BEGIN_STMT
  _2 = RxPduIdInfo.MainConnectionIndex;
  MainConnectionBusy_22 = Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy (_2);
  # DEBUG MainConnectionBusy => MainConnectionBusy_22
  # DEBUG BEGIN_STMT
  RxProtocolIndex_23 = RxPduIdInfo.ProtocolIndex;
  # DEBUG RxProtocolIndex => RxProtocolIndex_23
  # DEBUG BEGIN_STMT
  ProtocolBusyWithType1ROE_25 = Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolIsBusyWithType1ROE (RxProtocolIndex_23);
  # DEBUG ProtocolBusyWithType1ROE => ProtocolBusyWithType1ROE_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (int) RxConnectionId_13(D);
  _4 = Dcm_RxPduIdConfig[_3].AddressingType;
  if (_4 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365030795]:
  _5 = RequestBuffer.FilledLength;
  if (_5 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 124110470]:
  _6 = *RequestBuffer$BufferPtr_7;
  if (_6 == 62)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 42197560]:
  _8 = MEM[(Dcm_MsgItemType *)RequestBuffer$BufferPtr_7 + 1B];
  if (_8 == 128)
    goto <bb 15>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 1059272814]:
  _9 = RequestType_26(D) + 255;
  if (_9 <= 1)
    goto <bb 9>; [41.00%]
  else
    goto <bb 7>; [59.00%]

  <bb 7> [local count: 624970961]:
  if (RequestType_26(D) == 8)
    goto <bb 9>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 412480834]:
  if (RequestType_26(D) == 9)
    goto <bb 9>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 9> [local count: 787035465]:
  if (RxConnectionCancellationEnqueued_17 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 519443407]:
  if (RxConnectionState_15 == 2)
    goto <bb 15>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 11> [local count: 342832648]:
  if (MainConnectionBusy_22 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 116563100]:
  if (ProtocolBusyWithType1ROE_25 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 556788450]:
  if (_9 <= 1)
    goto <bb 14>; [41.00%]
  else
    goto <bb 16>; [59.00%]

  <bb 14> [local count: 228283264]:
  if (ComMChannelRxState_20 != 1)
    goto <bb 15>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 15> [local count: 667498492]:
  # DEBUG BEGIN_STMT
  _10 = RequestBuffer.BufferId;
  Dcm_Dsl_BufferFree (14, _10);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (RxConnectionId_13(D));
  goto <bb 23>; [100.00%]

  <bb 16> [local count: 406121494]:
  # DEBUG BEGIN_STMT
  switch (RequestType_26(D)) <default: <L26> [14.29%], case 1 ... 2: <L14> [14.29%], case 6: <L21> [14.29%], case 7: <L22> [14.29%], case 8 ... 9: <L16> [14.29%], case 10 ... 11: <L18> [14.29%], case 14: <L20> [14.29%]>

  <bb 17> [local count: 58034762]:
<L14>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProcessTYPE1Request (RxConnectionId_13(D), RequestType_26(D), RequestBuffer);
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 18> [local count: 58034762]:
<L16>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProcessTYPE1Request (RxConnectionId_13(D), RequestType_26(D), RequestBuffer);
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 19> [local count: 58034762]:
<L18>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProcessTYPE1Request (RxConnectionId_13(D), RequestType_26(D), RequestBuffer);
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 20> [local count: 58034762]:
<L20>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProcessTYPE1Request (RxConnectionId_13(D), RequestType_26(D), RequestBuffer);
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 21> [local count: 58034762]:
<L21>:
  # DEBUG BEGIN_STMT
  NRCTimeout_32 = Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout (RxProtocolIndex_23);
  # DEBUG NRCTimeout => NRCTimeout_32
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin (RxConnectionId_13(D), 1);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (RxConnectionId_13(D), RequestBuffer, 33, NRCTimeout_32);
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 22> [local count: 58034762]:
<L22>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (RxConnectionId_13(D));
  # DEBUG BEGIN_STMT

  <bb 23> [local count: 1073741824]:
<L26>:
  # DEBUG BEGIN_STMT
  RxPduIdInfo ={v} {CLOBBER};
  return;

}



;; Function Dcm_Dsl_Supervisor_IsSessionClearedToSwitch (Dcm_Dsl_Supervisor_IsSessionClearedToSwitch, funcdef_no=18, decl_uid=6532, cgraph_uid=19, symbol_order=20)

Modification phase of node Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/20
Dcm_Dsl_Supervisor_IsSessionClearedToSwitch (Dcm_SesCtrlType NewSession)
{
  Dcm_SessionSwitchPermissionType IsSessionClearedToSwitch;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  IsSessionClearedToSwitch_4 = Dcm_Dsl_Supervisor_ProtocolHandling_IsSessionClearedToSwitch (NewSession_2(D));
  # DEBUG IsSessionClearedToSwitch => IsSessionClearedToSwitch_4
  # DEBUG BEGIN_STMT
  return IsSessionClearedToSwitch_4;

}



;; Function Dcm_Dsl_Supervisor_ProtocolFree (Dcm_Dsl_Supervisor_ProtocolFree, funcdef_no=19, decl_uid=6534, cgraph_uid=20, symbol_order=21)

Modification phase of node Dcm_Dsl_Supervisor_ProtocolFree/21
Dcm_Dsl_Supervisor_ProtocolFree (Dcm_BufferUserType ProtocolID)
{
  const Dcm_ProtocolIndexType ProtocolIndex;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) ProtocolID_2(D);
  ProtocolIndex_3 = _1 + 244;
  # DEBUG ProtocolIndex => ProtocolIndex_3
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ProtocolFree (ProtocolIndex_3);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function Dcm_Dsl_Supervisor_ProcessingEnd (Dcm_Dsl_Supervisor_ProcessingEnd, funcdef_no=20, decl_uid=6536, cgraph_uid=21, symbol_order=22)

Modification phase of node Dcm_Dsl_Supervisor_ProcessingEnd/22
Dcm_Dsl_Supervisor_ProcessingEnd (Dcm_BufferUserType RxConnectionId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd (RxConnectionId_3(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function Dcm_Dsl_Supervisor_DefaultSessionEntered (Dcm_Dsl_Supervisor_DefaultSessionEntered, funcdef_no=21, decl_uid=6548, cgraph_uid=22, symbol_order=23)

Modification phase of node Dcm_Dsl_Supervisor_DefaultSessionEntered/23
Dcm_Dsl_Supervisor_DefaultSessionEntered ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered ();
  return;

}



;; Function Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType (Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType, funcdef_no=22, decl_uid=6555, cgraph_uid=23, symbol_order=24)

Modification phase of node Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType/24
Dcm_Dsl_Supervisor_GetProtocolIndexFromRxPduIdAndRequestType (PduIdType RxPduId, uint8 MessageType)
{
  Dcm_ProtocolIndexType ProtocolIndex;
  int _1;
  unsigned char _2;
  int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) RxPduId_4(D);
  _2 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  _3 = (int) _2;
  ProtocolIndex_6 = Dcm_MainConnectionConfig[_3].ProtocolIndex;
  # DEBUG ProtocolIndex => ProtocolIndex_6
  # DEBUG BEGIN_STMT
  return ProtocolIndex_6;

}



;; Function Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession (Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession, funcdef_no=23, decl_uid=6557, cgraph_uid=24, symbol_order=25)

Modification phase of node Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession/25
Dcm_Dsl_Supervisor_EnqueueResetOfDiagnosticSession ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_ResetDiagnosticSession = 1;
  return;

}


