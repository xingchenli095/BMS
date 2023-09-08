
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0/28:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/27:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StopTimer/26:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/24:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/23:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/22:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/21:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/20:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17:
  Jump functions of caller  Dcm_Dsl_RxConnectionCancelReceive/16:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14:
    callsite  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 -> Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0/28 : 
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/13:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/12:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11:
    callsite  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 -> Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8:
    callsite  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 -> Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7:
    callsite  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 -> Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6:
    callsite  Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6 -> Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3:

 Propagating constants:

Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init for cloning; -fipa-cp-clone disabled.

overall_size: 272, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0/28:
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9:
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
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5:
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4:
  Node: Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0/28 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0) @06db7000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (143434727 (estimated locally),0.13 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_StopTimer/26 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/27 (Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer) @06ce79a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (61658766 (estimated locally),0.11 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StopTimer/26 (Dcm_Dsl_DiagnosticSessionHandler_StopTimer) @06ce7620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0/28 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_RxPduIdConfig/25 (Dcm_RxPduIdConfig) @06cb2f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/24 (Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection) @06ce7540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (549543372 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/23 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @06ce7460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (451287371 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/22 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06ce71c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (920304119 (estimated locally),2.04 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (153437706 (estimated locally),0.34 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (920304118 (estimated locally),22.81 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (19719752 (estimated locally),0.49 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5 (920304118 (estimated locally),43.63 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/21 (Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic) @06ce7000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5 (153437707 (estimated locally),7.27 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (81322842 (estimated locally),0.69 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/20 (Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic) @06ca9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (50778487 (estimated locally),0.43 per call) 
  Calls: 
Dcm_RxComMChannelIDs/19 (Dcm_RxComMChannelIDs) @06cb24c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ca9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (334011876 (estimated locally),2.83 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (67780821 (estimated locally),0.57 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (50778487 (estimated locally),0.43 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ca9d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (452571183 (estimated locally),3.83 per call) 
  Calls: 
Dcm_Dsl_RxConnectionCancelReceive/16 (Dcm_Dsl_RxConnectionCancelReceive) @06ca9c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (143384540 (estimated locally),1.21 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart) @06ca98c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RxPduIdConfig/25 (read)Dcm_CommunicationSessionState/0 (read)Dcm_RxPduIdConfig/25 (read)
  Referring: 
  Availability: local
  Function flags: count:549543372 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (297849665 (estimated locally),0.66 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (524845004 (estimated locally),0.49 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/27 (61658766 (estimated locally),0.11 per call) Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/24 (549543372 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop) @06ca9700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RxPduIdConfig/25 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (214748364 (estimated locally),0.20 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6 (217325345 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0/28 (143434727 (estimated locally),0.13 per call) Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/24 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/23 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/13 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection) @06ca9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CancelRxConnection/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/12 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection) @06ca91c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CancelRxConnection/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd) @06ca9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationSessionState/0 (read)Dcm_RxComMChannelIDs/19 (read)Dcm_ActionsOnComMChannels/2 (write)
  Referring: 
  Availability: available
  Function flags: count:451287371 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RxConnectionGetRxPduIdInformation/22 (920304119 (estimated locally),2.04 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/22 (153437706 (estimated locally),0.34 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (297849665 (estimated locally),0.66 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/23 (451287371 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession) @06b9be00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationSessionState/0 (read)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin) @06b9bc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationSessionState/0 (write)Dcm_RxComMChannelIDs/19 (read)Dcm_CommunicationSessionState/0 (read)Dcm_ActionsOnComMChannels/2 (write)Dcm_CommunicationSessionState/0 (read)Dcm_CommunicationSessionState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:40343192 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RxConnectionGetRxPduIdInformation/22 (920304118 (estimated locally),22.81 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/22 (19719752 (estimated locally),0.49 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd) @06b9ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationSessionState/0 (read)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)Dcm_CancelRxConnection/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/23 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin) @06b9b8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationSessionState/0 (read)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)Dcm_CommunicationSessionState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (214748364 (estimated locally),0.20 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest) @06b9b700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CommunicationSessionState/0 (read)Dcm_CommunicationSessionState/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14 (217325345 (estimated locally),0.20 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered) @06b9b540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxComMChannelIDs/19 (read)Dcm_CommunicationSessionState/0 (read)
  Referring: 
  Availability: available
  Function flags: count:21091252 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/21 (153437707 (estimated locally),7.27 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/22 (920304118 (estimated locally),43.63 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction) @06b9b380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CancelRxConnection/1 (read)Dcm_CancelRxConnection/1 (write)Dcm_ActionsOnComMChannels/2 (read)Dcm_ActionsOnComMChannels/2 (read)Dcm_ActionsOnComMChannels/2 (read)Dcm_ActionsOnComMChannels/2 (read)Dcm_ActionsOnComMChannels/2 (write)Dcm_RxComMChannelIDs/19 (read)Dcm_ActionsOnComMChannels/2 (read)Dcm_ActionsOnComMChannels/2 (write)Dcm_ActionsOnComMChannels/2 (write)Dcm_ActionsOnComMChannels/2 (write)Dcm_RxComMChannelIDs/19 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic/21 (81322842 (estimated locally),0.69 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (334011876 (estimated locally),2.83 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (67780821 (estimated locally),0.57 per call) Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/20 (50778487 (estimated locally),0.43 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (50778487 (estimated locally),0.43 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17 (452571183 (estimated locally),3.83 per call) Dcm_Dsl_RxConnectionCancelReceive/16 (143384540 (estimated locally),1.21 per call) 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init) @06b9b1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CancelRxConnection/1 (write)Dcm_CommunicationSessionState/0 (write)Dcm_ActionsOnComMChannels/2 (write)Dcm_ActionsOnComMChannels/2 (write)
  Referring: 
  Availability: available
  Function flags: count:153437706 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_ActionsOnComMChannels/2 (Dcm_ActionsOnComMChannels) @06c23558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (write)
  Availability: available
  Varpool flags:
Dcm_CancelRxConnection/1 (Dcm_CancelRxConnection) @06c23510
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/12 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/13 (read)
  Availability: available
  Varpool flags:
Dcm_CommunicationSessionState/0 (Dcm_CommunicationSessionState) @06c234c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10 (read)Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10 (write)Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11 (read)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart (Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart, funcdef_no=12, decl_uid=6614, cgraph_uid=13, symbol_order=15)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart/15
Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart (Dcm_BufferUserType RxConnectionId)
{
  Dcm_MainConnectionIndexType MainConnectionIndex;
  uint16_least RxConnectionIndex;
  boolean CommunicationSessionIsActive;
  int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 549543372]:
  # DEBUG BEGIN_STMT
  # DEBUG CommunicationSessionIsActive => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MainConnectionIndex_10 = Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection ();
  # DEBUG MainConnectionIndex => MainConnectionIndex_10
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_11(D);
  _2 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  if (_2 == MainConnectionIndex_10)
    goto <bb 10>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 10> [local count: 186844746]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 920304119]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_CommunicationSessionState[RxConnectionIndex_6];
  if (_3 != 1)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 607400718]:
  _4 = Dcm_RxPduIdConfig[RxConnectionIndex_6].MainConnectionIndex;
  if (_4 == MainConnectionIndex_10)
    goto <bb 7>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 5> [local count: 886897079]:
  # DEBUG BEGIN_STMT
  RxConnectionIndex_12 = RxConnectionIndex_6 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_12

  <bb 6> [local count: 1073741824]:
  # RxConnectionIndex_6 = PHI <RxConnectionIndex_12(5), 0(10)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_6
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_6 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 7>; [14.29%]

  <bb 7> [local count: 186844746]:
  # CommunicationSessionIsActive_5 = PHI <1(4), 0(6)>
  # DEBUG CommunicationSessionIsActive => CommunicationSessionIsActive_5
  # DEBUG BEGIN_STMT
  if (CommunicationSessionIsActive_5 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 61658766]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer (1000);

  <bb 9> [local count: 549543373]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop (Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop, funcdef_no=11, decl_uid=6612, cgraph_uid=12, symbol_order=14)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop/14
Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop (Dcm_BufferUserType RxConnectionId)
{
  Dcm_MainConnectionIndexType MainConnectionIndex;
  Dcm_SesCtrlType CurrentSession;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CurrentSession_5 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  # DEBUG CurrentSession => CurrentSession_5
  # DEBUG BEGIN_STMT
  MainConnectionIndex_7 = Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection ();
  # DEBUG MainConnectionIndex => MainConnectionIndex_7
  # DEBUG BEGIN_STMT
  if (CurrentSession_5 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 3> [local count: 708669605]:
  _1 = (int) RxConnectionId_8(D);
  _2 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  if (_2 == MainConnectionIndex_7)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 143434727]:
  # DEBUG D#1 => RxConnectionId_8(D)
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop.part.0 ();

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init (Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init, funcdef_no=0, decl_uid=5978, cgraph_uid=1, symbol_order=3)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init/3
Dcm_Dsl_Supervisor_CommunicationSessionHandling_Init ()
{
  uint8_least ComMChannelIndex;
  uint16_least RxConnectionIndex;

  <bb 2> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  Dcm_CancelRxConnection[RxConnectionIndex_1] = 0;
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[RxConnectionIndex_1] = 1;
  # DEBUG BEGIN_STMT
  RxConnectionIndex_10 = RxConnectionIndex_1 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_10

  <bb 4> [local count: 1073741824]:
  # RxConnectionIndex_1 = PHI <0(2), RxConnectionIndex_10(3)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_1
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_1 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 8>; [14.29%]

  <bb 8> [local count: 153437707]:
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 153437707]:
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[0].RequestActiveDiagnostic = 0;
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[0].RequestInactiveDiagnostic = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ComMChannelIndex => 1

  <bb 6> [local count: 306875413]:
  # ComMChannelIndex_2 = PHI <1(5), 0(8)>
  # DEBUG ComMChannelIndex => ComMChannelIndex_2
  # DEBUG BEGIN_STMT
  if (ComMChannelIndex_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 153437707]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction (Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction, funcdef_no=1, decl_uid=5980, cgraph_uid=2, symbol_order=4)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction/4
Dcm_Dsl_Supervisor_CommunicationSessionHandling_MainFunction ()
{
  Dcm_ActiveDiagnosticRequestType ActiveDiagnosticRequest;
  uint8_least ComMChannelIndex;
  uint16_least RxConnectionIndex;
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 708421641]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_CancelRxConnection[RxConnectionIndex_10];
  if (_1 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 143384540]:
  # DEBUG BEGIN_STMT
  _2 = (short unsigned int) RxConnectionIndex_10;
  Dcm_Dsl_RxConnectionCancelReceive (_2);
  # DEBUG BEGIN_STMT
  Dcm_CancelRxConnection[RxConnectionIndex_10] = 0;

  <bb 5> [local count: 708421641]:
  # DEBUG BEGIN_STMT
  RxConnectionIndex_28 = RxConnectionIndex_10 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_28

  <bb 6> [local count: 826533242]:
  # RxConnectionIndex_10 = PHI <0(2), RxConnectionIndex_28(5)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_10
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_10 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 22>; [14.29%]

  <bb 22> [local count: 118111600]:
  goto <bb 21>; [100.00%]

  <bb 7> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  # DEBUG ActiveDiagnosticRequest => 0
  # DEBUG BEGIN_STMT
  _3 = Dcm_ActionsOnComMChannels[0].RequestActiveDiagnostic;
  if (_3 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 8> [local count: 762210667]:
  _4 = Dcm_ActionsOnComMChannels[0].RequestInactiveDiagnostic;
  if (_4 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 9> [local count: 452571183]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _5 = Dcm_ActionsOnComMChannels[0].RequestActiveDiagnostic;
  if (_5 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 10> [local count: 153874202]:
  _6 = Dcm_ActionsOnComMChannels[0].RequestInactiveDiagnostic;
  if (_6 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 50778487]:
  # DEBUG BEGIN_STMT
  # DEBUG ActiveDiagnosticRequest => 1
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[0].RequestActiveDiagnostic = 0;
  # DEBUG ActiveDiagnosticRequest => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = Dcm_RxComMChannelIDs[0];
  Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic (_8);
  goto <bb 19>; [100.00%]

  <bb 12> [local count: 401792696]:
  # DEBUG BEGIN_STMT
  _7 = Dcm_ActionsOnComMChannels[0].RequestInactiveDiagnostic;
  if (_7 == 1)
    goto <bb 13>; [51.12%]
  else
    goto <bb 15>; [48.88%]

  <bb 13> [local count: 205396426]:
  if (_5 == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 67780821]:
  # DEBUG BEGIN_STMT
  # DEBUG ActiveDiagnosticRequest => 2
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[0].RequestInactiveDiagnostic = 0;
  # DEBUG ActiveDiagnosticRequest => 2
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 334011876]:
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[0].RequestActiveDiagnostic = 0;
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[0].RequestInactiveDiagnostic = 0;
  # DEBUG ActiveDiagnosticRequest => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 401792696]:
  # ActiveDiagnosticRequest_31 = PHI <2(14), 0(15)>
  # DEBUG BEGIN_STMT
  if (ActiveDiagnosticRequest_31 == 2)
    goto <bb 17>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 17> [local count: 81322842]:
  # DEBUG BEGIN_STMT
  _9 = Dcm_RxComMChannelIDs[0];
  Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic (_9);

  <bb 19> [local count: 955630224]:
  # ComMChannelIndex_14 = PHI <1(11), 1(16), 1(8), 1(17)>

  <bb 21> [local count: 1073741824]:
  # ComMChannelIndex_11 = PHI <ComMChannelIndex_14(19), 0(22)>
  # DEBUG ComMChannelIndex => ComMChannelIndex_11
  # DEBUG BEGIN_STMT
  if (ComMChannelIndex_11 == 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 20>; [11.00%]

  <bb 20> [local count: 118111601]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered (Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered, funcdef_no=2, decl_uid=5982, cgraph_uid=3, symbol_order=5)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered/5
Dcm_Dsl_Supervisor_CommunicationSessionHandling_DefaultSessionEntered ()
{
  struct Dcm_RxPduIdInfoType SearchRxPduIdInfo;
  const NetworkHandleType CurrentNetworkId;
  uint16_least RxConnectionIndex;
  uint8_least ChannelIndex;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 21091252]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIndex => 0
  goto <bb 11>; [100.00%]

  <bb 3> [local count: 170647394]:
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIsActive => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentNetworkId_11 = Dcm_RxComMChannelIDs[0];
  # DEBUG CurrentNetworkId => CurrentNetworkId_11
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) RxConnectionIndex_6;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_1, &SearchRxPduIdInfo);
  # DEBUG BEGIN_STMT
  _2 = SearchRxPduIdInfo.ComMChannelId;
  if (_2 == CurrentNetworkId_11)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 312903400]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_CommunicationSessionState[RxConnectionIndex_6];
  _4 = _3 + 253;
  if (_4 <= 1)
    goto <bb 6>; [5.50%]
  else
    goto <bb 7>; [94.50%]

  <bb 6> [local count: 17209687]:
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIsActive => 1
  # DEBUG BEGIN_STMT
  SearchRxPduIdInfo ={v} {CLOBBER};
  # DEBUG ChannelIsActive => 1
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 903094432]:
  SearchRxPduIdInfo ={v} {CLOBBER};
  # DEBUG BEGIN_STMT
  RxConnectionIndex_15 = RxConnectionIndex_6 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_15

  <bb 8> [local count: 1073741824]:
  # RxConnectionIndex_6 = PHI <0(3), RxConnectionIndex_15(7)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_6
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_6 != 6)
    goto <bb 4>; [85.71%]
  else
    goto <bb 9>; [14.29%]

  <bb 9> [local count: 153437707]:
  # DEBUG ChannelIsActive => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManager_RequestInactiveDiagnostic (CurrentNetworkId_11);

  <bb 10> [local count: 170647394]:
  # ChannelIndex_8 = PHI <1(6), 1(9)>

  <bb 11> [local count: 191738645]:
  # ChannelIndex_5 = PHI <ChannelIndex_8(10), 0(2)>
  # DEBUG ChannelIndex => ChannelIndex_5
  # DEBUG BEGIN_STMT
  if (ChannelIndex_5 == 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 21091251]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest (Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest, funcdef_no=3, decl_uid=5984, cgraph_uid=4, symbol_order=6)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest/6
Dcm_Dsl_Supervisor_CommunicationSessionHandling_PrepareApplicationDiagnosticRequest (Dcm_BufferUserType RxConnectionId)
{
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_4(D);
  _2 = Dcm_CommunicationSessionState[_1];
  if (_2 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 7;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop (RxConnectionId_4(D));

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin, funcdef_no=4, decl_uid=5986, cgraph_uid=5, symbol_order=7)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin/7
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionBegin (Dcm_BufferUserType RxConnectionId)
{
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_4(D);
  _2 = Dcm_CommunicationSessionState[_1];
  switch (_2) <default: <L6> [20.00%], case 1: <L0> [20.00%], case 3: <L2> [20.00%], case 5: <L3> [20.00%], case 7: <L1> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 2;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerStop (RxConnectionId_4(D));
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 2;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 4;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 6;
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
<L6>:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd, funcdef_no=5, decl_uid=5988, cgraph_uid=6, symbol_order=8)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd/8
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ReceptionEnd (Dcm_BufferUserType RxConnectionId)
{
  Dcm_SesCtrlType CurrentSession;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_5(D);
  _2 = Dcm_CommunicationSessionState[_1];
  switch (_2) <default: <L7> [25.00%], case 2: <L0> [25.00%], case 4: <L1> [25.00%], case 6: <L2> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 1;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 3;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 5;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
<L7>:
  # DEBUG BEGIN_STMT
  Dcm_CancelRxConnection[_1] = 0;
  # DEBUG BEGIN_STMT
  CurrentSession_12 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  # DEBUG CurrentSession => CurrentSession_12
  # DEBUG BEGIN_STMT
  if (CurrentSession_12 != 1)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart (RxConnectionId_5(D));

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin, funcdef_no=6, decl_uid=5991, cgraph_uid=7, symbol_order=9)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin/9
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingBegin (Dcm_BufferUserType RxConnectionId, boolean SendingBusyRepeatRequest)
{
  struct Dcm_RxPduIdInfoType SearchRxPduIdInfo;
  Dcm_RxConnectionIndexType RxConnectionIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  boolean ChannelFound;
  boolean ChannelIsAlreadyActive;
  uint8_least ComMChannelIndex;
  int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _5;
  int _6;
  unsigned char _7;
  unsigned char _8;
  int _10;
  unsigned char _11;

  <bb 2> [local count: 40343192]:
  # DEBUG BEGIN_STMT
  if (SendingBusyRepeatRequest_22(D) == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 3> [local count: 20623440]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_27(D);
  Dcm_CommunicationSessionState[_1] = 5;
  goto <bb 20>; [100.00%]

  <bb 4> [local count: 19719752]:
  # DEBUG BEGIN_STMT
  # DEBUG ComMChannelIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIsAlreadyActive => 0
  # DEBUG BEGIN_STMT
  # DEBUG ChannelFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_27(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 254697603]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_RxComMChannelIDs[0];
  _3 = RxPduIdInfo.ComMChannelId;
  if (_2 == _3)
    goto <bb 21>; [67.00%]
  else
    goto <bb 23>; [33.00%]

  <bb 23> [local count: 84050209]:
  goto <bb 13>; [100.00%]

  <bb 21> [local count: 170647394]:
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionIndex_16, &SearchRxPduIdInfo);
  # DEBUG BEGIN_STMT
  _5 = SearchRxPduIdInfo.ComMChannelId;
  if (_2 == _5)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 312903400]:
  # DEBUG BEGIN_STMT
  _6 = (int) RxConnectionIndex_16;
  _7 = Dcm_CommunicationSessionState[_6];
  _8 = _7 + 253;
  if (_8 <= 1)
    goto <bb 8>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 8> [local count: 17209687]:
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIsAlreadyActive => 1
  # DEBUG BEGIN_STMT
  SearchRxPduIdInfo ={v} {CLOBBER};
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 903094432]:
  SearchRxPduIdInfo ={v} {CLOBBER};
  # DEBUG BEGIN_STMT
  RxConnectionIndex_36 = RxConnectionIndex_16 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_36

  <bb 10> [local count: 1073741824]:
  # RxConnectionIndex_16 = PHI <RxConnectionIndex_36(9), 0(21)>
  # DEBUG ChannelFound => NULL
  # DEBUG RxConnectionIndex => RxConnectionIndex_16
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_16 != 6)
    goto <bb 6>; [85.71%]
  else
    goto <bb 22>; [14.29%]

  <bb 22> [local count: 153437707]:
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 36929439]:
  # ComMChannelIndex_29 = PHI <0(8), 0(4)>
  # ChannelIsAlreadyActive_30 = PHI <1(8), 0(4)>
  # ChannelFound_31 = PHI <1(8), 0(4)>

  <bb 12> [local count: 190367146]:
  # ComMChannelIndex_23 = PHI <ComMChannelIndex_29(11), 0(22)>
  # ChannelIsAlreadyActive_12 = PHI <ChannelIsAlreadyActive_30(11), ChannelIsAlreadyActive_14(22)>
  # ChannelFound_9 = PHI <ChannelFound_31(11), 1(22)>

  <bb 13> [local count: 274417355]:
  # ComMChannelIndex_13 = PHI <ComMChannelIndex_23(12), 1(23)>
  # ChannelIsAlreadyActive_14 = PHI <ChannelIsAlreadyActive_12(12), ChannelIsAlreadyActive_14(23)>
  # ChannelFound_15 = PHI <ChannelFound_9(12), 0(23)>
  # DEBUG ChannelFound => ChannelFound_15
  # DEBUG ChannelIsAlreadyActive => ChannelIsAlreadyActive_14
  # DEBUG ComMChannelIndex => ComMChannelIndex_13
  # DEBUG BEGIN_STMT
  if (ComMChannelIndex_13 == 0)
    goto <bb 14>; [96.34%]
  else
    goto <bb 15>; [3.66%]

  <bb 14> [local count: 264373680]:
  if (ChannelFound_15 == 0)
    goto <bb 5>; [96.34%]
  else
    goto <bb 15>; [3.66%]

  <bb 15> [local count: 19719752]:
  # ComMChannelIndex_24 = PHI <ComMChannelIndex_13(13), 0(14)>
  # ChannelIsAlreadyActive_25 = PHI <ChannelIsAlreadyActive_14(13), ChannelIsAlreadyActive_14(14)>
  # DEBUG BEGIN_STMT
  if (ChannelIsAlreadyActive_25 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 9859876]:
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[ComMChannelIndex_24].RequestActiveDiagnostic = 1;

  <bb 17> [local count: 19719752]:
  # DEBUG BEGIN_STMT
  _10 = (int) RxConnectionId_27(D);
  _11 = Dcm_CommunicationSessionState[_10];
  if (_11 == 2)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 6704716]:
<L20>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_10] = 3;
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 19719752]:
  RxPduIdInfo ={v} {CLOBBER};

  <bb 20> [local count: 40343192]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession, funcdef_no=7, decl_uid=5995, cgraph_uid=8, symbol_order=10)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/10
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (Dcm_BufferUserType RxConnectionId)
{
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_4(D);
  _2 = Dcm_CommunicationSessionState[_1];
  switch (_2) <default: <L7> [20.00%], case 3: <L1> [20.00%], case 4: <L2> [20.00%], case 5: <L3> [20.00%], case 6: <L4> [20.00%]>

  <bb 3> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 1;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 2;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 1;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L4>:
  # DEBUG BEGIN_STMT
  Dcm_CommunicationSessionState[_1] = 2;
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
<L7>:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd, funcdef_no=8, decl_uid=5993, cgraph_uid=9, symbol_order=11)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/11
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd (Dcm_BufferUserType RxConnectionId)
{
  uint8_least ComMChannelIndex;
  struct Dcm_RxPduIdInfoType SearchRxPduIdInfo;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  uint16_least RxConnectionIndex;
  boolean ChannelFound;
  boolean ChannelIsActive;
  Dcm_SesCtrlType CurrentSession;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  long unsigned int _18;

  <bb 2> [local count: 451287371]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIsActive => 0
  # DEBUG BEGIN_STMT
  # DEBUG ChannelFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentSession_22 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  # DEBUG CurrentSession => CurrentSession_22
  # DEBUG BEGIN_STMT
  if (CurrentSession_22 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 297849665]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_CheckS3TimerRestart (RxConnectionId_23(D));
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_23(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => 0
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 920304119]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) RxConnectionIndex_13;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_1, &SearchRxPduIdInfo);
  # DEBUG BEGIN_STMT
  _2 = RxPduIdInfo.ComMChannelId;
  _3 = SearchRxPduIdInfo.ComMChannelId;
  if (_2 == _3)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 312903400]:
  _18 = RxConnectionIndex_13;
  _5 = (int) _18;
  _6 = Dcm_CommunicationSessionState[_5];
  _7 = _6 + 253;
  if (_7 <= 1)
    goto <bb 7>; [41.00%]
  else
    goto <bb 8>; [59.00%]

  <bb 7> [local count: 128290394]:
  # DEBUG BEGIN_STMT
  # DEBUG ChannelIsActive => 1

  <bb 8> [local count: 920304119]:
  # ChannelIsActive_10 = PHI <ChannelIsActive_11(5), ChannelIsActive_11(6), 1(7)>
  # DEBUG ChannelIsActive => ChannelIsActive_10
  SearchRxPduIdInfo ={v} {CLOBBER};
  # DEBUG BEGIN_STMT
  RxConnectionIndex_31 = RxConnectionIndex_13 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_31

  <bb 9> [local count: 1073741824]:
  # ChannelIsActive_11 = PHI <0(4), ChannelIsActive_10(8)>
  # RxConnectionIndex_13 = PHI <0(4), RxConnectionIndex_31(8)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_13
  # DEBUG ChannelIsActive => ChannelIsActive_11
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_13 != 6)
    goto <bb 5>; [85.71%]
  else
    goto <bb 10>; [14.29%]

  <bb 10> [local count: 153437707]:
  # ChannelIsActive_25 = PHI <ChannelIsActive_11(9)>
  # DEBUG BEGIN_STMT
  if (ChannelIsActive_25 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 18> [local count: 76718853]:
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 990890176]:
  # DEBUG BEGIN_STMT
  _8 = Dcm_RxComMChannelIDs[0];
  _9 = RxPduIdInfo.ComMChannelId;
  if (_8 == _9)
    goto <bb 20>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 20> [local count: 326993758]:
  goto <bb 13>; [100.00%]

  <bb 19> [local count: 663896418]:

  <bb 12> [local count: 740615273]:
  # ChannelFound_4 = PHI <0(18), 0(19)>
  # ComMChannelIndex_19 = PHI <0(18), 1(19)>
  # DEBUG ComMChannelIndex => NULL

  <bb 13> [local count: 1067609031]:
  # ChannelFound_12 = PHI <ChannelFound_4(12), 1(20)>
  # ComMChannelIndex_14 = PHI <ComMChannelIndex_19(12), 0(20)>
  # DEBUG ComMChannelIndex => ComMChannelIndex_14
  # DEBUG ChannelFound => ChannelFound_12
  # DEBUG BEGIN_STMT
  if (ComMChannelIndex_14 == 0)
    goto <bb 14>; [96.34%]
  else
    goto <bb 15>; [3.66%]

  <bb 14> [local count: 1028534541]:
  if (ChannelFound_12 == 0)
    goto <bb 11>; [96.34%]
  else
    goto <bb 15>; [3.66%]

  <bb 15> [local count: 76718855]:
  # ComMChannelIndex_29 = PHI <ComMChannelIndex_14(13), 0(14)>
  # DEBUG BEGIN_STMT
  Dcm_ActionsOnComMChannels[ComMChannelIndex_29].RequestInactiveDiagnostic = 1;

  <bb 16> [local count: 153437708]:
  RxPduIdInfo ={v} {CLOBBER};

  <bb 17> [local count: 451287374]:
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection, funcdef_no=9, decl_uid=5997, cgraph_uid=10, symbol_order=12)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection/12
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EnqueueCancellationOfRxConnection (Dcm_RxConnectionIndexType RxConnectionIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionIndex_2(D);
  Dcm_CancelRxConnection[_1] = 1;
  return;

}



;; Function Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection (Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection, funcdef_no=10, decl_uid=5999, cgraph_uid=11, symbol_order=13)

Modification phase of node Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection/13
Dcm_Dsl_Supervisor_CommunicationSessionHandling_IsCancellationEnqueuedForRxConnection (Dcm_RxConnectionIndexType RxConnectionIndex)
{
  int _1;
  boolean _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionIndex_2(D);
  _4 = Dcm_CancelRxConnection[_1];
  return _4;

}


