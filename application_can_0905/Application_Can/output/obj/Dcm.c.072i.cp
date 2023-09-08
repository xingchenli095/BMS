
IPA constant propagation start:
Determining dynamic type for call: retVal_4 = Dcm_GetSesCtrlTypeExt (SesCtrlType_2(D));
  Starting walk at: retVal_4 = Dcm_GetSesCtrlTypeExt (SesCtrlType_2(D));
  instance pointer: SesCtrlType_2(D)  Outer instance pointer: SesCtrlType_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_GetSesCtrlTypeExt.part.0/60:
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_Init/59:
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_Init/58:
  Jump functions of caller  Dcm_Dsp_DidSignals_SignalBufferContextNvM_Init/57:
  Jump functions of caller  Dcm_Dsp_ControlDTCSettingState_Init/56:
  Jump functions of caller  Dcm_Dsp_DemFacade_Init/55:
  Jump functions of caller  Dcm_Dsp_RoutineControl_Init/54:
  Jump functions of caller  Dcm_Dsp_SecurityAccess_Init/53:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_Init/52:
  Jump functions of caller  Dcm_Dsp_ServiceProcessorInit/51:
  Jump functions of caller  Dcm_HsmInit/50:
  Jump functions of caller  Dcm_Dsp_DidServices_Init/49:
  Jump functions of caller  Dcm_Dsl_PostBootOperationsHandler_Init/48:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_Init/47:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_Init/46:
  Jump functions of caller  Dcm_Dsl_Init/45:
  Jump functions of caller  Dcm_Dsl_RoeServices_Init/44:
  Jump functions of caller  Dcm_Dsl_Supervisor_Init/43:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_Init/42:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/41:
  Jump functions of caller  Dcm_Dsl_RoeServices_TriggerOnDTCStatus/40:
  Jump functions of caller  Dcm_HsmEmitInst/39:
  Jump functions of caller  Dcm_Dsl_Supervisor_PostProcessingMainFunction/38:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/37:
  Jump functions of caller  Dcm_HsmMain/35:
  Jump functions of caller  Dcm_Dsl_TxConnectionProcessTxConnections/34:
  Jump functions of caller  Dcm_Dsp_SecurityAccess_MainFunction/33:
  Jump functions of caller  Dcm_Dsp_DidSignals_SignalBufferOperationsPoll/32:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/31:
  Jump functions of caller  Dcm_Dsl_Supervisor_PreProcessingMainFunction/30:
  Jump functions of caller  Dcm_Dsl_PostBootOperationsHandler_MainFunction/29:
  Jump functions of caller  Dcm_Dsl_RoeServices_MainFunction/28:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_MainFunction/27:
  Jump functions of caller  Dcm_Dsl_RoeServices_TriggerOnEvent/26:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/25:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/23:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/21:
  Jump functions of caller  Det_ASR40_ReportError/20:
  Jump functions of caller  Dcm_MainFunction_Part2/19:
    callsite  Dcm_MainFunction_Part2/19 -> Dcm_Internal_ProcessRetryTimer/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  Dcm_MainFunction_Part1/18:
  Jump functions of caller  Dcm_Dsp_Init/17:
    callsite  Dcm_Dsp_Init/17 -> Dcm_DIDInit/14 : 
  Jump functions of caller  Dcm_Internal_ProcessRetryTimer/16:
  Jump functions of caller  Dcm_Init/15:
    callsite  Dcm_Init/15 -> Dcm_Dsp_Init/17 : 
  Jump functions of caller  Dcm_DIDInit/14:
  Jump functions of caller  Dcm_GetSesCtrlTypeExt/13:
    callsite  Dcm_GetSesCtrlTypeExt/13 -> Dcm_GetSesCtrlTypeExt.part.0/60 : 
  Jump functions of caller  Dcm_DemTriggerOnDTCStatus/12:
  Jump functions of caller  Dcm_MainFunction/11:
    callsite  Dcm_MainFunction/11 -> Dcm_MainFunction_Part2/19 : 
    callsite  Dcm_MainFunction/11 -> Dcm_MainFunction_Part1/18 : 
  Jump functions of caller  Dcm_Internal_ReleaseLock/10:
  Jump functions of caller  Dcm_Internal_GetLock/9:
  Jump functions of caller  Dcm_TriggerOnEvent/8:
  Jump functions of caller  Dcm_ResetToDefaultSession/7:
  Jump functions of caller  Dcm_GetActiveProtocol/6:
  Jump functions of caller  Dcm_GetSesCtrlType/5:
    callsite  Dcm_GetSesCtrlType/5 -> Dcm_GetSesCtrlTypeExt/13 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_GetSecurityLevel/4:

 Propagating constants:

Not considering Dcm_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_GetSesCtrlTypeExt for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DemTriggerOnDTCStatus for cloning; -fipa-cp-clone disabled.
Not considering Dcm_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Internal_ReleaseLock for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Internal_GetLock for cloning; -fipa-cp-clone disabled.
Not considering Dcm_TriggerOnEvent for cloning; -fipa-cp-clone disabled.
Not considering Dcm_ResetToDefaultSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_GetActiveProtocol for cloning; -fipa-cp-clone disabled.
Not considering Dcm_GetSesCtrlType for cloning; -fipa-cp-clone disabled.
Not considering Dcm_GetSecurityLevel for cloning; -fipa-cp-clone disabled.

overall_size: 239, max_new_size: 11001
 - context independent values, size: 20, time_benefit: 1.000000
 - context independent values, size: 14, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_GetSesCtrlTypeExt.part.0/60:
  Node: Dcm_MainFunction_Part2/19:
  Node: Dcm_MainFunction_Part1/18:
  Node: Dcm_Dsp_Init/17:
  Node: Dcm_Internal_ProcessRetryTimer/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         const uint8 [0, 1]
        AGGS VARIABLE
  Node: Dcm_Init/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_DIDInit/14:
  Node: Dcm_GetSesCtrlTypeExt/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_DemTriggerOnDTCStatus/12:
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
  Node: Dcm_MainFunction/11:
  Node: Dcm_Internal_ReleaseLock/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Internal_GetLock/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_TriggerOnEvent/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_ResetToDefaultSession/7:
  Node: Dcm_GetActiveProtocol/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_GetSesCtrlType/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_GetSecurityLevel/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

Propagated bits info for function Dcm_Internal_ProcessRetryTimer/16:
 param 0: value = 0x0, mask = 0x1

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_GetSesCtrlTypeExt.part.0/60 (Dcm_GetSesCtrlTypeExt.part.0) @070859a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_GetSesCtrlTypeExt/13 (164669045 (estimated locally),0.15 per call) 
  Calls: Det_ASR40_ReportError/20 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_WriteDataByIdentifier_Init/59 (Dcm_Dsp_WriteDataByIdentifier_Init) @07075d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIDInit/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ReadDataByIdentifier_Init/58 (Dcm_Dsp_ReadDataByIdentifier_Init) @07075c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIDInit/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidSignals_SignalBufferContextNvM_Init/57 (Dcm_Dsp_DidSignals_SignalBufferContextNvM_Init) @07075b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DIDInit/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ControlDTCSettingState_Init/56 (Dcm_Dsp_ControlDTCSettingState_Init) @070759a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DemFacade_Init/55 (Dcm_Dsp_DemFacade_Init) @070758c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_RoutineControl_Init/54 (Dcm_Dsp_RoutineControl_Init) @070757e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_SecurityAccess_Init/53 (Dcm_Dsp_SecurityAccess_Init) @07075700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_CommunicationControl_Init/52 (Dcm_Dsp_CommunicationControl_Init) @07075620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ServiceProcessorInit/51 (Dcm_Dsp_ServiceProcessorInit) @07075540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmInit/50 (Dcm_HsmInit) @07075460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidServices_Init/49 (Dcm_Dsp_DidServices_Init) @07075380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_PostBootOperationsHandler_Init/48 (Dcm_Dsl_PostBootOperationsHandler_Init) @070751c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_Init/47 (Dcm_Dsl_SecurityLevelHandler_Init) @070750e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_Init/46 (Dcm_Dsl_ComMChannelStateManager_Init) @07075000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_Init/45 (Dcm_Dsl_Init) @0706cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_RoeServices_Init/44 (Dcm_Dsl_RoeServices_Init) @0706ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_Supervisor_Init/43 (Dcm_Dsl_Supervisor_Init) @0706cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_Init/42 (Dcm_Dsl_DiagnosticSessionHandler_Init) @0706cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/41 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @0706ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_GetSesCtrlTypeExt/13 (384227774 (estimated locally),0.36 per call) 
  Calls: 
Dcm_Dsl_RoeServices_TriggerOnDTCStatus/40 (Dcm_Dsl_RoeServices_TriggerOnDTCStatus) @0706c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemTriggerOnDTCStatus/12 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_HsmEmitInst/39 (Dcm_HsmEmitInst) @0706c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Internal_ProcessRetryTimer/16 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_Supervisor_PostProcessingMainFunction/38 (Dcm_Dsl_Supervisor_PostProcessingMainFunction) @0706c540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part2/19 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/37 (Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction) @0706c460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part2/19 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmScDcm/36 (Dcm_HsmScDcm) @0706b558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_MainFunction_Part2/19 (addr)Dcm_Internal_ProcessRetryTimer/16 (addr)Dcm_Dsp_Init/17 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmMain/35 (Dcm_HsmMain) @0706c380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part2/19 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_TxConnectionProcessTxConnections/34 (Dcm_Dsl_TxConnectionProcessTxConnections) @0706c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part2/19 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_SecurityAccess_MainFunction/33 (Dcm_Dsp_SecurityAccess_MainFunction) @0706c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part2/19 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidSignals_SignalBufferOperationsPoll/32 (Dcm_Dsp_DidSignals_SignalBufferOperationsPoll) @0706c0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part2/19 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/31 (Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction) @07031ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part1/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_PreProcessingMainFunction/30 (Dcm_Dsl_Supervisor_PreProcessingMainFunction) @07031e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part1/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_PostBootOperationsHandler_MainFunction/29 (Dcm_Dsl_PostBootOperationsHandler_MainFunction) @07031d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part1/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RoeServices_MainFunction/28 (Dcm_Dsl_RoeServices_MainFunction) @07031c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part1/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ControlDTCSetting_MainFunction/27 (Dcm_Dsp_ControlDTCSetting_MainFunction) @07031b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_MainFunction_Part1/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RoeServices_TriggerOnEvent/26 (Dcm_Dsl_RoeServices_TriggerOnEvent) @07031700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TriggerOnEvent/8 (362271901 (estimated locally),0.34 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/25 (Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession) @07031540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_ResetToDefaultSession/7 (365072220 (estimated locally),0.34 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @07031380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_GetSesCtrlTypeExt/13 (384227774 (estimated locally),0.36 per call) Dcm_Internal_ReleaseLock/10 (1073741824 (estimated locally),1.00 per call) Dcm_Internal_GetLock/9 (1073741824 (estimated locally),1.00 per call) Dcm_GetActiveProtocol/6 (384227774 (estimated locally),0.36 per call) Dcm_Internal_ProcessRetryTimer/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/23 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig) @070312a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_GetActiveProtocol/6 (384227774 (estimated locally),0.36 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @070311c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_GetSesCtrlTypeExt/13 (384227774 (estimated locally),0.36 per call) Dcm_Internal_ReleaseLock/10 (1073741824 (estimated locally),1.00 per call) Dcm_Internal_GetLock/9 (1073741824 (estimated locally),1.00 per call) Dcm_GetActiveProtocol/6 (384227774 (estimated locally),0.36 per call) Dcm_Internal_ProcessRetryTimer/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/21 (Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel) @0702cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_GetSecurityLevel/4 (384227774 (estimated locally),0.36 per call) 
  Calls: 
Det_ASR40_ReportError/20 (Det_ASR40_ReportError) @0702ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Init/15 (365072220 (estimated locally),0.34 per call) Dcm_GetSesCtrlTypeExt/13 (524845004 (estimated locally),0.49 per call) Dcm_GetSesCtrlTypeExt.part.0/60 (1073741824 (estimated locally),1.00 per call) Dcm_DemTriggerOnDTCStatus/12 (708669605 (estimated locally),0.66 per call) Dcm_Internal_ReleaseLock/10 (354334802 (estimated locally),0.33 per call) Dcm_TriggerOnEvent/8 (186624919 (estimated locally),0.17 per call) Dcm_TriggerOnEvent/8 (524845004 (estimated locally),0.49 per call) Dcm_ResetToDefaultSession/7 (708669605 (estimated locally),0.66 per call) Dcm_GetActiveProtocol/6 (164669046 (estimated locally),0.15 per call) Dcm_GetActiveProtocol/6 (524845004 (estimated locally),0.49 per call) Dcm_GetSecurityLevel/4 (164669046 (estimated locally),0.15 per call) Dcm_GetSecurityLevel/4 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_MainFunction_Part2/19 (Dcm_MainFunction_Part2) @0702cc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmScDcm/36 (addr)
  Referring: 
  Availability: local
  Function flags: count:357878150 (estimated locally) body local optimize_size
  Called by: Dcm_MainFunction/11 (217325345 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsl_Supervisor_PostProcessingMainFunction/38 (357878150 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/37 (357878150 (estimated locally),1.00 per call) Dcm_HsmMain/35 (357878150 (estimated locally),1.00 per call) Dcm_Dsl_TxConnectionProcessTxConnections/34 (357878150 (estimated locally),1.00 per call) Dcm_Dsp_SecurityAccess_MainFunction/33 (357878150 (estimated locally),1.00 per call) Dcm_Dsp_DidSignals_SignalBufferOperationsPoll/32 (357878150 (estimated locally),1.00 per call) Dcm_Internal_ProcessRetryTimer/16 (715863676 (estimated locally),2.00 per call) 
Dcm_MainFunction_Part1/18 (Dcm_MainFunction_Part1) @0702ca80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_MainFunction/11 (217325345 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/31 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_PreProcessingMainFunction/30 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_PostBootOperationsHandler_MainFunction/29 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RoeServices_MainFunction/28 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_MainFunction/27 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_Init/17 (Dcm_Dsp_Init) @0702c8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmScDcm/36 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Init/15 (708669605 (estimated locally),0.66 per call) 
  Calls: Dcm_Dsp_ControlDTCSettingState_Init/56 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_Init/55 (1073741824 (estimated locally),1.00 per call) Dcm_DIDInit/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_RoutineControl_Init/54 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_SecurityAccess_Init/53 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_CommunicationControl_Init/52 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ServiceProcessorInit/51 (1073741824 (estimated locally),1.00 per call) Dcm_HsmInit/50 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_Init/49 (1073741824 (estimated locally),1.00 per call) 
Dcm_Internal_ProcessRetryTimer/16 (Dcm_Internal_ProcessRetryTimer) @0702c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmInfo/2 (read)Dcm_HsmScDcm/36 (addr)Dcm_HsmInfo/2 (read)Dcm_HsmInfo/2 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_MainFunction_Part2/19 (715863676 (estimated locally),2.00 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24 (1073741824 (estimated locally),1.00 per call) Dcm_HsmEmitInst/39 (354334802 (estimated locally),0.33 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (1073741824 (estimated locally),1.00 per call) 
Dcm_Init/15 (Dcm_Init) @0702c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)Dcm_Initialized/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_PostBootOperationsHandler_Init/48 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_SecurityLevelHandler_Init/47 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_ComMChannelStateManager_Init/46 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_Init/45 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_RoeServices_Init/44 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_Init/17 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_Supervisor_Init/43 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_DiagnosticSessionHandler_Init/42 (708669605 (estimated locally),0.66 per call) Det_ASR40_ReportError/20 (365072220 (estimated locally),0.34 per call) 
Dcm_DIDInit/14 (Dcm_DIDInit) @0702c2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_Init/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_WriteDataByIdentifier_Init/59 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ReadDataByIdentifier_Init/58 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidSignals_SignalBufferContextNvM_Init/57 (1073741824 (estimated locally),1.00 per call) 
Dcm_GetSesCtrlTypeExt/13 (Dcm_GetSesCtrlTypeExt) @0702c0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_GetSesCtrlType/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24 (384227774 (estimated locally),0.36 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/41 (384227774 (estimated locally),0.36 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (384227774 (estimated locally),0.36 per call) Dcm_GetSesCtrlTypeExt.part.0/60 (164669045 (estimated locally),0.15 per call) Det_ASR40_ReportError/20 (524845004 (estimated locally),0.49 per call) 
Dcm_DemTriggerOnDTCStatus/12 (Dcm_DemTriggerOnDTCStatus) @07025d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RoeServices_TriggerOnDTCStatus/40 (365072220 (estimated locally),0.34 per call) Det_ASR40_ReportError/20 (708669605 (estimated locally),0.66 per call) 
Dcm_MainFunction/11 (Dcm_MainFunction) @07025a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_MainFunction_Part2/19 (217325345 (estimated locally),0.20 per call) Dcm_MainFunction_Part1/18 (217325345 (estimated locally),0.20 per call) 
Dcm_Internal_ReleaseLock/10 (Dcm_Internal_ReleaseLock) @070258c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/20 (354334802 (estimated locally),0.33 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (1073741824 (estimated locally),1.00 per call) 
Dcm_Internal_GetLock/9 (Dcm_Internal_GetLock) @07025700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (1073741824 (estimated locally),1.00 per call) 
Dcm_TriggerOnEvent/8 (Dcm_TriggerOnEvent) @07025540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RoeServices_TriggerOnEvent/26 (362271901 (estimated locally),0.34 per call) Det_ASR40_ReportError/20 (186624919 (estimated locally),0.17 per call) Det_ASR40_ReportError/20 (524845004 (estimated locally),0.49 per call) 
Dcm_ResetToDefaultSession/7 (Dcm_ResetToDefaultSession) @070251c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/25 (365072220 (estimated locally),0.34 per call) Det_ASR40_ReportError/20 (708669605 (estimated locally),0.66 per call) 
Dcm_GetActiveProtocol/6 (Dcm_GetActiveProtocol) @07008ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/24 (384227774 (estimated locally),0.36 per call) Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig/23 (384227774 (estimated locally),0.36 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (384227774 (estimated locally),0.36 per call) Det_ASR40_ReportError/20 (164669046 (estimated locally),0.15 per call) Det_ASR40_ReportError/20 (524845004 (estimated locally),0.49 per call) 
Dcm_GetSesCtrlType/5 (Dcm_GetSesCtrlType) @07008b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_GetSesCtrlTypeExt/13 (1073741824 (estimated locally),1.00 per call) 
Dcm_GetSecurityLevel/4 (Dcm_GetSecurityLevel) @070089a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/21 (384227774 (estimated locally),0.36 per call) Det_ASR40_ReportError/20 (164669046 (estimated locally),0.15 per call) Det_ASR40_ReportError/20 (524845004 (estimated locally),0.49 per call) 
Dcm_ProgConditions/3 (Dcm_ProgConditions) @06fe7d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
Dcm_HsmInfo/2 (Dcm_HsmInfo) @06fe7d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Internal_ProcessRetryTimer/16 (read)Dcm_Internal_ProcessRetryTimer/16 (read)Dcm_Internal_ProcessRetryTimer/16 (write)
  Availability: available
  Varpool flags:
Dcm_RxPduIdBL/1 (Dcm_RxPduIdBL) @06fe7cf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
Dcm_Initialized/0 (Dcm_Initialized) @06fe7ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_DemTriggerOnDTCStatus/12 (read)Dcm_GetSesCtrlTypeExt/13 (read)Dcm_GetSecurityLevel/4 (read)Dcm_GetActiveProtocol/6 (read)Dcm_ResetToDefaultSession/7 (read)Dcm_TriggerOnEvent/8 (read)Dcm_MainFunction/11 (read)Dcm_Init/15 (read)Dcm_Init/15 (write)
  Availability: available
  Varpool flags: initialized

;; Function Dcm_GetSecurityLevel (Dcm_GetSecurityLevel, funcdef_no=0, decl_uid=5843, cgraph_uid=1, symbol_order=4)

Modification phase of node Dcm_GetSecurityLevel/4
Dcm_GetSecurityLevel (Dcm_SecLevelType * SecLevel)
{
  Std_ReturnType retVal;
  unsigned char Dcm_Initialized.0_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.0_1 = Dcm_Initialized;
  if (Dcm_Initialized.0_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 13, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (SecLevel_6(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 164669046]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 13, 7);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 384227774]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel ();
  *SecLevel_6(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 7> [local count: 1073741824]:
  # retVal_3 = PHI <1(3), 1(5), 0(6)>
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_3;

}



;; Function Dcm_GetActiveProtocol (Dcm_GetActiveProtocol, funcdef_no=2, decl_uid=5847, cgraph_uid=3, symbol_order=6)

Modification phase of node Dcm_GetActiveProtocol/6
Dcm_GetActiveProtocol (Dcm_ProtocolType * ActiveProtocol)
{
  struct Dcm_ProtocolConfigType CurProtocolConfig;
  Std_ReturnType retVal;
  unsigned char Dcm_Initialized.1_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.1_1 = Dcm_Initialized;
  if (Dcm_Initialized.1_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 15, 5);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ActiveProtocol_7(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 164669046]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 15, 7);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 384227774]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_10 = Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocolConfig (&CurProtocolConfig);
  # DEBUG retVal => retVal_10
  # DEBUG BEGIN_STMT
  if (retVal_10 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 192113887]:
  # DEBUG BEGIN_STMT
  _2 = CurProtocolConfig.Type;
  *ActiveProtocol_7(D) = _2;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 192113887]:
  # DEBUG BEGIN_STMT
  *ActiveProtocol_7(D) = 12;

  <bb 9> [local count: 384227774]:
  CurProtocolConfig ={v} {CLOBBER};
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 10> [local count: 1073741824]:
  # retVal_3 = PHI <1(3), 1(5), 0(9)>
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_3;

}



;; Function Dcm_ResetToDefaultSession (Dcm_ResetToDefaultSession, funcdef_no=3, decl_uid=5849, cgraph_uid=4, symbol_order=7)

Modification phase of node Dcm_ResetToDefaultSession/7
Dcm_ResetToDefaultSession ()
{
  Std_ReturnType Retval;
  unsigned char Dcm_Initialized.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Retval => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.2_1 = Dcm_Initialized;
  if (Dcm_Initialized.2_1 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 42, 5);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession (2);
  # DEBUG BEGIN_STMT
  # DEBUG Retval => 0

  <bb 5> [local count: 1073741824]:
  # Retval_2 = PHI <1(3), 0(4)>
  # DEBUG Retval => Retval_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Retval_2;

}



;; Function Dcm_TriggerOnEvent (Dcm_TriggerOnEvent, funcdef_no=4, decl_uid=5851, cgraph_uid=5, symbol_order=8)

Modification phase of node Dcm_TriggerOnEvent/8
Dcm_TriggerOnEvent (uint8 RoeEventId)
{
  Std_ReturnType apiRetVal;
  unsigned char Dcm_Initialized.3_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG apiRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.3_1 = Dcm_Initialized;
  if (Dcm_Initialized.3_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 45, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (RoeEventId_5(D) == 255)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 186624919]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 45, 6);
  # DEBUG BEGIN_STMT
  # DEBUG apiRetVal => 1
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 362271901]:
  # DEBUG BEGIN_STMT
  apiRetVal_7 = Dcm_Dsl_RoeServices_TriggerOnEvent (RoeEventId_5(D));
  # DEBUG apiRetVal => apiRetVal_7

  <bb 7> [local count: 1073741824]:
  # apiRetVal_2 = PHI <1(3), 1(5), apiRetVal_7(6)>
  # DEBUG apiRetVal => apiRetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return apiRetVal_2;

}



;; Function Dcm_Internal_GetLock (Dcm_Internal_GetLock, funcdef_no=5, decl_uid=6660, cgraph_uid=6, symbol_order=9)

Modification phase of node Dcm_Internal_GetLock/9
Dcm_Internal_GetLock (Dcm_MutexType * MutexPtr)
{
  Dcm_MutexType PreviousMutexState;
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 31
  # DEBUG BEGIN_STMT
  # DEBUG PreviousMutexState => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  PreviousMutexState_5 = *MutexPtr_4(D);
  # DEBUG PreviousMutexState => PreviousMutexState_5
  # DEBUG BEGIN_STMT
  *MutexPtr_4(D) = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (PreviousMutexState_5 == 1)
    goto <bb 4>; [21.72%]
  else
    goto <bb 3>; [78.28%]

  <bb 3> [local count: 840525101]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_1 = PHI <31(2), 0(3)>
  # DEBUG RetVal => RetVal_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_1;

}



;; Function Dcm_Internal_ReleaseLock (Dcm_Internal_ReleaseLock, funcdef_no=6, decl_uid=6662, cgraph_uid=7, symbol_order=10)

Modification phase of node Dcm_Internal_ReleaseLock/10
Dcm_Internal_ReleaseLock (Dcm_MutexType * MutexPtr)
{
  Dcm_MutexType PreviousMutexState;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PreviousMutexState => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  PreviousMutexState_5 = *MutexPtr_4(D);
  # DEBUG PreviousMutexState => PreviousMutexState_5
  # DEBUG BEGIN_STMT
  *MutexPtr_4(D) = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (PreviousMutexState_5 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 255, 18);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_MainFunction (Dcm_MainFunction, funcdef_no=7, decl_uid=7406, cgraph_uid=8, symbol_order=11)

Modification phase of node Dcm_MainFunction/11
Dcm_MainFunction ()
{
  unsigned char Dcm_Initialized.4_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.4_1 = Dcm_Initialized;
  if (Dcm_Initialized.4_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Dcm_MainFunction_Part1 ();
  # DEBUG BEGIN_STMT
  Dcm_MainFunction_Part2 ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_DemTriggerOnDTCStatus (Dcm_DemTriggerOnDTCStatus, funcdef_no=8, decl_uid=5714, cgraph_uid=9, symbol_order=12)

Modification phase of node Dcm_DemTriggerOnDTCStatus/12
Dcm_DemTriggerOnDTCStatus (uint32 DTC, uint8 DTCStatusOld, uint8 DTCStatusNew)
{
  Std_ReturnType retVal;
  unsigned char Dcm_Initialized.5_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.5_1 = Dcm_Initialized;
  if (Dcm_Initialized.5_1 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 43, 5);
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_TriggerOnDTCStatus (DTCStatusOld_5(D), DTCStatusNew_6(D));
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 5> [local count: 1073741824]:
  # retVal_2 = PHI <1(3), 0(4)>
  # DEBUG retVal => retVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_2;

}



;; Function Dcm_GetSesCtrlTypeExt (Dcm_GetSesCtrlTypeExt, funcdef_no=9, decl_uid=5742, cgraph_uid=10, symbol_order=13)

Modification phase of node Dcm_GetSesCtrlTypeExt/13
Dcm_GetSesCtrlTypeExt (Dcm_SesCtrlType * SesCtrlType)
{
  Std_ReturnType retVal;
  unsigned char Dcm_Initialized.6_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.6_1 = Dcm_Initialized;
  if (Dcm_Initialized.6_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 6, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (SesCtrlType_6(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 164669045]:
  # DEBUG D#2 => SesCtrlType_6(D)
  retVal_13 = Dcm_GetSesCtrlTypeExt.part.0 ();
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 384227774]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  *SesCtrlType_6(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 7> [local count: 1073741824]:
  # retVal_3 = PHI <1(3), retVal_13(5), 0(6)>
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_3;

}



;; Function Dcm_GetSesCtrlType (Dcm_GetSesCtrlType, funcdef_no=1, decl_uid=5845, cgraph_uid=2, symbol_order=5)

Modification phase of node Dcm_GetSesCtrlType/5
Dcm_GetSesCtrlType (Dcm_SesCtrlType * SesCtrlType)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_4 = Dcm_GetSesCtrlTypeExt (SesCtrlType_2(D));
  # DEBUG retVal => retVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_4;

}



;; Function Dcm_Init (Dcm_Init, funcdef_no=11, decl_uid=5710, cgraph_uid=12, symbol_order=15)

Modification phase of node Dcm_Init/15
Dcm_Init (const Dcm_ConfigType * ConfigPtr)
{
  unsigned char Dcm_Initialized.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.7_1 = Dcm_Initialized;
  if (Dcm_Initialized.7_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 1, 34);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsp_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManager_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_SecurityLevelHandler_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_PostBootOperationsHandler_Init ();
  # DEBUG BEGIN_STMT
  Dcm_Initialized = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


