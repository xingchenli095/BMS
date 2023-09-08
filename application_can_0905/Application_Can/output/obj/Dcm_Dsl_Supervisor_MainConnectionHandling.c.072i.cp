
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_BufferFree/28:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/27:
  Jump functions of caller  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/26:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/24:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/23:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/22:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/21:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/20:
  Jump functions of caller  Dcm_Dsl_BufferAllocate/19:
  Jump functions of caller  Dcm_Dsl_TxConnectionTransmit/18:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/16:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/15:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/14:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId/11:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_End/10:
    callsite  Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 -> Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/7:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5:
    callsite  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 -> Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 -> Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 -> Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 -> Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/4:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3:
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2:
    callsite  Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2 -> Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
  Jump functions of caller  Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1:

 Propagating constants:

Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_End for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Supervisor_MainConnectionHandling_Init for cloning; -fipa-cp-clone disabled.

overall_size: 205, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         Dcm_MainConnectionIndexType [0, 2]
        AGGS VARIABLE
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_End/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/7:
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
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5:
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
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3:
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
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2:
  Node: Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1:

IPA decision stage:

Propagated bits info for function Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12:
 param 0: value = 0x0, mask = 0x3

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_BufferFree/28 (Dcm_Dsl_BufferFree) @06d071c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/27 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd) @06d070e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/26 (Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession) @06d07000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_ProtocolConfig/25 (Dcm_ProtocolConfig) @06d02678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/24 (Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime) @06ccc000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/23 (Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol) @06ccca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (177167401 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/22 (Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer) @06ccc9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (177167401 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/21 (Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer) @06ccc8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (91268055 (estimated locally),0.08 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/20 (Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished) @06ccc7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (91268055 (estimated locally),0.08 per call) 
  Calls: 
Dcm_Dsl_BufferAllocate/19 (Dcm_Dsl_BufferAllocate) @06ccc540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_Dsl_TxConnectionTransmit/18 (Dcm_Dsl_TxConnectionTransmit) @06ccc2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ccc1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/16 (Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent) @06ccc0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/15 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06cc5ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/14 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06cc5e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_MainConnectionConfig/13 (Dcm_MainConnectionConfig) @06cc9360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC) @06cc59a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_MainConnectionConfig/13 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2 (265751101 (estimated locally),0.99 per call) 
  Calls: Dcm_Dsl_TxConnectionTransmit/18 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPSent/16 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/15 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/14 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId/11 (Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId) @06cc5620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (Dcm_Dsl_Supervisor_MainConnectionHandling_End) @06cc5460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (131211251 (estimated locally),0.12 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (177167401 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (268435456 (estimated locally),0.25 per call) 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFree/28 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd/27 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession/26 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9 (Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout) @06cc50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/24 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol) @06b8aee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/7 (Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest) @06b8a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection) @06b8a7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished) @06b8a460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionConfig/13 (read)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/17 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (131211251 (estimated locally),0.12 per call) Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol/23 (177167401 (estimated locally),0.17 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/22 (177167401 (estimated locally),0.17 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (177167401 (estimated locally),0.17 per call) Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/21 (91268055 (estimated locally),0.08 per call) Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished/20 (91268055 (estimated locally),0.08 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (268435456 (estimated locally),0.25 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/4 (Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy) @06b83ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC) @06b83d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionConfig/13 (read)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (read)Dcm_MainConnectionStatus/0 (addr)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_BufferAllocate/19 (268435456 (estimated locally),0.25 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/15 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2 (Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction) @06b83b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (265751101 (estimated locally),0.99 per call) 
Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (Dcm_Dsl_Supervisor_MainConnectionHandling_Init) @06b839a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)Dcm_MainConnectionStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_MainConnectionStatus/0 (Dcm_MainConnectionStatus) @06c45828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/4 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/7 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/7 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_End/10 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC/12 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3 (addr)Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (read)Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5 (write)Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId/11 (read)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_Init (Dcm_Dsl_Supervisor_MainConnectionHandling_Init, funcdef_no=0, decl_uid=6559, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_Init/1
Dcm_Dsl_Supervisor_MainConnectionHandling_Init ()
{
  uint8_least MainConnectionIndex;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG MainConnectionIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[MainConnectionIndex_1].State = 1;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[MainConnectionIndex_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[MainConnectionIndex_1].RespondWithNRC = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[MainConnectionIndex_1].ServiceId = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[MainConnectionIndex_1].NRCTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[MainConnectionIndex_1].NRCBuffer.BufferId = 18;
  # DEBUG BEGIN_STMT
  MainConnectionIndex_10 = MainConnectionIndex_1 + 1;
  # DEBUG MainConnectionIndex => MainConnectionIndex_10

  <bb 4> [local count: 1073741824]:
  # MainConnectionIndex_1 = PHI <0(2), MainConnectionIndex_10(3)>
  # DEBUG MainConnectionIndex => MainConnectionIndex_1
  # DEBUG BEGIN_STMT
  if (MainConnectionIndex_1 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 5>; [25.00%]

  <bb 5> [local count: 268435456]:
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction (Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction, funcdef_no=1, decl_uid=6561, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction/2
Dcm_Dsl_Supervisor_MainConnectionHandling_MainFunction ()
{
  uint8_least MainConnectionIndex;
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG MainConnectionIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_MainConnectionStatus[MainConnectionIndex_3].State;
  switch (_1) <default: <L7> [67.00%], case 4: <L1> [33.00%], case 6: <L1> [33.00%]>

  <bb 4> [local count: 265751101]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) MainConnectionIndex_3;
  Dcm_Dsl_Supervisor_MainConnectionHandling_SendQueuedNRC (_2);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 805306368]:
<L7>:
  # DEBUG BEGIN_STMT
  MainConnectionIndex_8 = MainConnectionIndex_3 + 1;
  # DEBUG MainConnectionIndex => MainConnectionIndex_8

  <bb 6> [local count: 1073741824]:
  # MainConnectionIndex_3 = PHI <0(2), MainConnectionIndex_8(5)>
  # DEBUG MainConnectionIndex => MainConnectionIndex_3
  # DEBUG BEGIN_STMT
  if (MainConnectionIndex_3 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 7>; [25.00%]

  <bb 7> [local count: 268435456]:
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC, funcdef_no=2, decl_uid=6566, cgraph_uid=3, symbol_order=3)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC/3
Dcm_Dsl_Supervisor_MainConnectionHandling_InitiateNRC (Dcm_BufferUserType RxConnectionId, struct Dcm_BufferType RequestBuffer, Dcm_NegativeResponseCodeType NRC, Dcm_TimerValueType NRCTimeout)
{
  PduIdType ConfirmationTxPduId;
  Dcm_BufferUserType TxConnectionId;
  Dcm_MainConnectionIndexType MainConnectionIndex;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  int _1;
  Dcm_MsgItemType * _2;
  unsigned char _3;
  unsigned char _4;
  struct Dcm_BufferType * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxConnectionId_8(D), &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  MainConnectionIndex_10 = RxPduIdInfo.MainConnectionIndex;
  # DEBUG MainConnectionIndex => MainConnectionIndex_10
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_10;
  ConfirmationTxPduId_11 = Dcm_MainConnectionConfig[_1].ConfirmationTxPduId;
  # DEBUG ConfirmationTxPduId => ConfirmationTxPduId_11
  # DEBUG BEGIN_STMT
  TxConnectionId_12 = ConfirmationTxPduId_11 + 6;
  # DEBUG TxConnectionId => TxConnectionId_12
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].RxConnectionId = RxConnectionId_8(D);
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].RespondWithNRC = NRC_14(D);
  # DEBUG BEGIN_STMT
  _2 = RequestBuffer.BufferPtr;
  _3 = *_2;
  Dcm_MainConnectionStatus[_1].ServiceId = _3;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCTimeout = NRCTimeout_17(D);
  # DEBUG BEGIN_STMT
  _4 = Dcm_MainConnectionStatus[_1].State;
  switch (_4) <default: <L9> [25.00%], case 1 ... 2: <L0> [25.00%], case 6: <L6> [25.00%], case 7: <L5> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  _5 = &Dcm_MainConnectionStatus[_1].NRCBuffer;
  Dcm_Dsl_BufferAllocate (TxConnectionId_12, 7, 3, _5);
  # DEBUG BEGIN_STMT
  if (NRC_14(D) == 120)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 6;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCTimeout = 0;
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 4;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 268435456]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 8;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 268435456]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 4;
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
<L9>:
  RxPduIdInfo ={v} {CLOBBER};
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy (Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy, funcdef_no=3, decl_uid=6575, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy/4
Dcm_Dsl_Supervisor_MainConnectionHandling_MainConnectionBusy (Dcm_MainConnectionIndexType MainConnectionIndex)
{
  boolean MainConnectionBusy;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG MainConnectionBusy => 1
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_4(D);
  _2 = Dcm_MainConnectionStatus[_1].State;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG MainConnectionBusy => 0

  <bb 4> [local count: 1073741824]:
  # MainConnectionBusy_3 = PHI <1(2), 0(3)>
  # DEBUG MainConnectionBusy => MainConnectionBusy_3
  # DEBUG BEGIN_STMT
  return MainConnectionBusy_3;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection (Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection, funcdef_no=5, decl_uid=6570, cgraph_uid=6, symbol_order=6)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection/6
Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection (Dcm_MainConnectionIndexType MainConnectionIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_2(D);
  Dcm_MainConnectionStatus[_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].RespondWithNRC = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].ServiceId = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 1;
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest (Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest, funcdef_no=6, decl_uid=6573, cgraph_uid=7, symbol_order=7)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest/7
Dcm_Dsl_Supervisor_MainConnectionHandling_BusyWithRequest (Dcm_MainConnectionIndexType MainConnectionIndex, Dcm_BufferUserType RxConnectionId)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_2(D);
  Dcm_MainConnectionStatus[_1].State = 2;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].RxConnectionId = RxConnectionId_5(D);
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol (Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol, funcdef_no=7, decl_uid=6568, cgraph_uid=8, symbol_order=8)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol/8
Dcm_Dsl_Supervisor_MainConnectionHandling_RequestDispatchedToProtocol (Dcm_MainConnectionIndexType MainConnectionIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_2(D);
  Dcm_MainConnectionStatus[_1].State = 3;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].RespondWithNRC = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].ServiceId = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCBuffer.BufferId = 18;
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout (Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout, funcdef_no=8, decl_uid=6580, cgraph_uid=9, symbol_order=9)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout/9
Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_TimerValueType ServerAdjust;
  Dcm_TimerValueType P2StarMaxTime;
  Dcm_TimerValueType NRCTimeout;
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG NRCTimeout => 0
  # DEBUG BEGIN_STMT
  P2StarMaxTime_7 = Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime (ProtocolIndex_5(D));
  # DEBUG P2StarMaxTime => P2StarMaxTime_7
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_5(D);
  _2 = Dcm_ProtocolConfig[_1].P2StarServerAdjustTime;
  ServerAdjust_8 = (Dcm_TimerValueType) _2;
  # DEBUG ServerAdjust => ServerAdjust_8
  # DEBUG BEGIN_STMT
  if (P2StarMaxTime_7 > ServerAdjust_8)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  NRCTimeout_9 = P2StarMaxTime_7 - ServerAdjust_8;
  # DEBUG NRCTimeout => NRCTimeout_9

  <bb 4> [local count: 1073741824]:
  # NRCTimeout_3 = PHI <0(2), NRCTimeout_9(3)>
  # DEBUG NRCTimeout => NRCTimeout_3
  # DEBUG BEGIN_STMT
  return NRCTimeout_3;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_End (Dcm_Dsl_Supervisor_MainConnectionHandling_End, funcdef_no=9, decl_uid=6582, cgraph_uid=10, symbol_order=10)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_End/10
Dcm_Dsl_Supervisor_MainConnectionHandling_End (Dcm_MainConnectionIndexType MainConnectionIndex)
{
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_5(D);
  _2 = Dcm_MainConnectionStatus[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_EndOfCommunicationSession (_2);
  # DEBUG BEGIN_STMT
  _3 = Dcm_MainConnectionStatus[_1].RxConnectionId;
  Dcm_Dsl_Supervisor_CommunicationSessionHandling_ProcessingEnd (_3);
  # DEBUG BEGIN_STMT
  _4 = Dcm_MainConnectionStatus[_1].NRCBuffer.BufferId;
  Dcm_Dsl_BufferFree (14, _4);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_ClearMainConnection (MainConnectionIndex_5(D));
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished (Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished, funcdef_no=4, decl_uid=6578, cgraph_uid=5, symbol_order=5)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished/5
Dcm_Dsl_Supervisor_MainConnectionHandling_TransmissionFinished (Dcm_MainConnectionIndexType MainConnectionIndex, Dcm_TxResultType TransmissionResult)
{
  const Dcm_TimerValueType NRCTimeout;
  const Dcm_ProtocolIndexType ProtocolIndex;
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_4(D);
  ProtocolIndex_6 = Dcm_MainConnectionConfig[_1].ProtocolIndex;
  # DEBUG ProtocolIndex => ProtocolIndex_6
  # DEBUG BEGIN_STMT
  NRCTimeout_8 = Dcm_Dsl_Supervisor_MainConnectionHandling_GetNRCTimeout (ProtocolIndex_6);
  # DEBUG NRCTimeout => NRCTimeout_8
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = Dcm_MainConnectionStatus[_1].State;
  switch (_2) <default: <L11> [25.00%], case 5: <L0> [25.00%], case 7: <L1> [25.00%], case 8: <L5> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_End (MainConnectionIndex_4(D));
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  if (TransmissionResult_10(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 2;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_RCRRPTransmissionFinished (ProtocolIndex_6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer (14, ProtocolIndex_6, NRCTimeout_8);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_End (MainConnectionIndex_4(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (14, ProtocolIndex_6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolHandling_ClearPresumptiveProtocol (ProtocolIndex_6, 0);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 268435456]:
<L5>:
  # DEBUG BEGIN_STMT
  if (TransmissionResult_10(D) == 1)
    goto <bb 8>; [51.12%]
  else
    goto <bb 9>; [48.88%]

  <bb 8> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].State = 4;
  # DEBUG BEGIN_STMT
  Dcm_MainConnectionStatus[_1].NRCTimeout = NRCTimeout_8;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 131211251]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_MainConnectionHandling_End (MainConnectionIndex_4(D));

  <bb 10> [local count: 1073741824]:
<L11>:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId (Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId, funcdef_no=10, decl_uid=6584, cgraph_uid=11, symbol_order=11)

Modification phase of node Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId/11
Dcm_Dsl_Supervisor_MainConnectionHandling_GetRxConnectionId (Dcm_MainConnectionIndexType MainConnIdx)
{
  PduIdType RxConnectionId;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnIdx_2(D);
  RxConnectionId_4 = Dcm_MainConnectionStatus[_1].RxConnectionId;
  # DEBUG RxConnectionId => RxConnectionId_4
  # DEBUG BEGIN_STMT
  return RxConnectionId_4;

}


