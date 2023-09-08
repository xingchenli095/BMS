
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/54:
  Jump functions of caller  Dcm_Dsl_Supervisor_P2TimerTimeout/52:
  Jump functions of caller  Dcm_Dsp_Protocol_P2TimerTimeout/51:
  Jump functions of caller  Dcm_HsmEmitInst/49:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SessionChange/48:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SessionChange/47:
  Jump functions of caller  Dcm_Dsl_RoeServices_SessionChange/46:
  Jump functions of caller  Dcm_Dsp_SecurityAccess_SessionChange/45:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_SessionChange/44:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/43:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/42:
  Jump functions of caller  Dcm_Dsl_Supervisor_DefaultSessionEntered/41:
  Jump functions of caller  SchM_Switch_Dcm_DcmDiagnosticSessionControl/40:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/36:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32:
    callsite  Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 -> Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/31:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/25:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/24:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/23:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19:
    callsite  Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19 -> Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_SetSession/18:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/16:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/15:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/14:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/13:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11:
    callsite  Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 -> Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_Init/10:

 Propagating constants:

Not considering Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_StopTimer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_SetSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_DiagnosticSessionHandler_Init for cloning; -fipa-cp-clone disabled.

overall_size: 381, max_new_size: 11001
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 15, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               1 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32:
    param [0]: VARIABLE
               1 [loc_time: 6, loc_size: 31, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/31:
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/25:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/24:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/23:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_SetSession/18:
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
  Node: Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/16:
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/15:
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/14:
  Node: Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12:
  Node: Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11:
  Node: Dcm_Dsl_DiagnosticSessionHandler_Init/10:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/54 (Dcm_Dsl_Supervisor_IsSessionClearedToSwitch) @06ee4540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_MainConnectionConfig/53 (Dcm_MainConnectionConfig) @06ee2bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_Supervisor_P2TimerTimeout/52 (Dcm_Dsl_Supervisor_P2TimerTimeout) @06edee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (108662672 (estimated locally),0.10 per call) Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (36222702 (estimated locally),0.10 per call) 
  Calls: 
Dcm_Dsp_Protocol_P2TimerTimeout/51 (Dcm_Dsp_Protocol_P2TimerTimeout) @06eded20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (110183179 (estimated locally),0.10 per call) Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (13439815 (estimated locally),0.04 per call) 
  Calls: 
Dcm_HsmScDcm/50 (Dcm_HsmScDcm) @06edddc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (addr)Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmEmitInst/49 (Dcm_HsmEmitInst) @06edec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (318025060 (estimated locally),0.30 per call) Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (129303402 (estimated locally),0.36 per call) 
  Calls: 
Dcm_Dsp_CommunicationControl_SessionChange/48 (Dcm_Dsp_CommunicationControl_SessionChange) @06ede9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ControlDTCSetting_SessionChange/47 (Dcm_Dsp_ControlDTCSetting_SessionChange) @06ede8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RoeServices_SessionChange/46 (Dcm_Dsl_RoeServices_SessionChange) @06ede7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_SecurityAccess_SessionChange/45 (Dcm_Dsp_SecurityAccess_SessionChange) @06ede700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_SessionChange/44 (Dcm_Dsl_SecurityLevelHandler_SessionChange) @06ede620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/43 (Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic) @06ede460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (52731949 (estimated locally),0.22 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/42 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06ede380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (52731949 (estimated locally),0.22 per call) 
  Calls: 
Dcm_Dsl_Supervisor_DefaultSessionEntered/41 (Dcm_Dsl_Supervisor_DefaultSessionEntered) @06ede2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (27164943 (estimated locally),0.12 per call) 
  Calls: 
SchM_Switch_Dcm_DcmDiagnosticSessionControl/40 (SchM_Switch_Dcm_DcmDiagnosticSessionControl) @06ede1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (37904965 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (79896892 (estimated locally),0.34 per call) 
  Calls: 
Dcm_RxPduIdConfig/39 (Dcm_RxPduIdConfig) @06edd2d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmInfo/38 (Dcm_HsmInfo) @06edd288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (read)
  Availability: not_available
  Varpool flags:
Dcm_SesTabConfig/37 (Dcm_SesTabConfig) @06edd1f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (read)Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (read)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (read)Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (read)Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (read)Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (read)Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (read)Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/36 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol) @06ede000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (233860969 (estimated locally),0.22 per call) Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (114863532 (estimated locally),0.49 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ed1e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (37904965 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (357878150 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (10672946 (estimated locally),0.05 per call) Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (37904965 (estimated locally),0.16 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ed1c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (37904965 (estimated locally),0.33 per call) Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (357878148 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (10672946 (estimated locally),0.05 per call) Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (37904965 (estimated locally),0.16 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify) @06ed18c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (79896892 (estimated locally),0.34 per call) 
  Calls: Dcm_Dsp_CommunicationControl_SessionChange/48 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ControlDTCSetting_SessionChange/47 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RoeServices_SessionChange/46 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_SecurityAccess_SessionChange/45 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_SecurityLevelHandler_SessionChange/44 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (Dcm_Dsl_DiagnosticSessionHandler_DoSwitch) @06ed1700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DiagnosticSessionLevel/4 (read)Dcm_SesTabConfig/37 (read)Dcm_SesTabConfig/37 (read)Dcm_DiagnosticSessionProtocolIndex/1 (write)Dcm_DiagnosticSessionTableIndex/2 (write)Dcm_HsmInfo/38 (read)Dcm_RxPduIdConfig/39 (read)Dcm_DiagnosticSessionMainConnectionIndex/3 (write)Dcm_DiagnosticSessionLevel/4 (write)Dcm_SesTabConfig/37 (read)Dcm_SesTabConfig/37 (read)Dcm_SesTabConfig/37 (read)Dcm_S3TimerValue/8 (write)Dcm_DiagnosticSessionProtocolIndex/1 (write)Dcm_DiagnosticSessionTableIndex/2 (write)Dcm_DiagnosticSessionMainConnectionIndex/3 (write)Dcm_DiagnosticSessionLevel/4 (write)Dcm_HsmInfo/38 (read)Dcm_DiagnosticSessionResetFlag/0 (write)Dcm_ResetToDefaultSessionOccured/5 (write)
  Referring: 
  Availability: local
  Function flags: count:234990859 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19 (120473832 (estimated locally),0.11 per call) Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (217325345 (estimated locally),0.20 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify/33 (79896892 (estimated locally),0.34 per call) Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic/43 (52731949 (estimated locally),0.22 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/42 (52731949 (estimated locally),0.22 per call) Dcm_Dsl_Supervisor_DefaultSessionEntered/41 (27164943 (estimated locally),0.12 per call) SchM_Switch_Dcm_DcmDiagnosticSessionControl/40 (79896892 (estimated locally),0.34 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (10672946 (estimated locally),0.05 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (10672946 (estimated locally),0.05 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (37904965 (estimated locally),0.16 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (37904965 (estimated locally),0.16 per call) Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/36 (114863532 (estimated locally),0.49 per call) 
Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/31 (Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured) @06ed1380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetToDefaultSessionRequester/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30 (Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured) @06ed11c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetToDefaultSessionOccured/5 (read)Dcm_ResetToDefaultSessionOccured/5 (read)Dcm_ResetToDefaultSessionOccured/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29 (Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured) @06ed1000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetToDefaultSessionOccured/5 (write)Dcm_ResetToDefaultSessionOccured/5 (write)Dcm_ResetToDefaultSessionOccured/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime) @06ecce00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DiagnosticSessionProtocolIndex/1 (read)Dcm_SesTabConfig/37 (read)Dcm_DiagnosticSessionTableIndex/2 (read)Dcm_SesTabConfig/37 (read)Dcm_SesTabConfig/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime) @06eccc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DiagnosticSessionProtocolIndex/1 (read)Dcm_SesTabConfig/37 (read)Dcm_DiagnosticSessionTableIndex/2 (read)Dcm_SesTabConfig/37 (read)Dcm_SesTabConfig/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26 (Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue) @06ecca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerValue/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/25 (Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer) @06ecc8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerOwner/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/24 (Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer) @06ecc700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerOwner/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/23 (Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer) @06ecc380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerOwner/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (Dcm_Dsl_DiagnosticSessionHandler_StopTimer) @06ecc1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerValue/9 (write)Dcm_S3TimerValue/8 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (357878150 (estimated locally),0.33 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (357878150 (estimated locally),0.33 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (357878150 (estimated locally),0.33 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (357878150 (estimated locally),0.33 per call) 
Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21 (Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer) @06ecc000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_S3TimerValue/8 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer) @06e71e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerOwner/7 (write)Dcm_P2TimerValue/9 (write)Dcm_P2TimerValue/9 (read)Dcm_P2TimerOwner/7 (read)Dcm_HsmInfo/38 (read)Dcm_HsmScDcm/50 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_P2TimerTimeout/52 (108662672 (estimated locally),0.10 per call) Dcm_Dsp_Protocol_P2TimerTimeout/51 (110183179 (estimated locally),0.10 per call) Dcm_HsmEmitInst/49 (318025060 (estimated locally),0.30 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741823 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19 (Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession) @06e71a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetToDefaultSessionOccured/5 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (120473832 (estimated locally),0.11 per call) Dcm_Dsl_Supervisor_IsSessionClearedToSwitch/54 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (Dcm_Dsl_DiagnosticSessionHandler_SetSession) @06e718c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_MainConnectionConfig/53 (read)Dcm_SesTabConfig/37 (read)Dcm_SesTabConfig/37 (read)Dcm_DiagnosticSessionProtocolIndex/1 (write)Dcm_DiagnosticSessionTableIndex/2 (write)Dcm_DiagnosticSessionMainConnectionIndex/3 (write)Dcm_DiagnosticSessionMainConnectionIndex/3 (write)Dcm_DiagnosticSessionLevel/4 (write)Dcm_SesTabConfig/37 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Switch_Dcm_DcmDiagnosticSessionControl/40 (37904965 (estimated locally),0.33 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (37904965 (estimated locally),0.33 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (37904965 (estimated locally),0.33 per call) 
Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession) @06e71700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ResetToDefaultSessionRequester/6 (write)Dcm_DiagnosticSessionResetFlag/0 (write)Dcm_DiagnosticSessionResetFlag/0 (read)Dcm_DiagnosticSessionResetFlag/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/36 (233860969 (estimated locally),0.22 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/16 (Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection) @06e71460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DiagnosticSessionMainConnectionIndex/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/15 (Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex) @06e712a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DiagnosticSessionProtocolIndex/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/14 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @06e710e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DiagnosticSessionLevel/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/13 (Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp) @06e69ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction) @06e69d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_P2TimerValue/9 (read)Dcm_P2TimerValue/9 (write)Dcm_P2TimerOwner/7 (read)Dcm_HsmInfo/38 (read)Dcm_HsmScDcm/50 (addr)
  Referring: 
  Availability: available
  Function flags: count:357878148 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (357878150 (estimated locally),1.00 per call) Dcm_Dsl_Supervisor_P2TimerTimeout/52 (36222702 (estimated locally),0.10 per call) Dcm_Dsp_Protocol_P2TimerTimeout/51 (13439815 (estimated locally),0.04 per call) Dcm_HsmEmitInst/49 (129303402 (estimated locally),0.36 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (357878148 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction) @06e699a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_S3TimerValue/8 (read)Dcm_DiagnosticSessionResetFlag/0 (read)Dcm_DiagnosticSessionResetFlag/0 (write)Dcm_S3TimerValue/8 (write)Dcm_DiagnosticSessionResetFlag/0 (read)Dcm_ResetToDefaultSessionRequester/6 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (217325345 (estimated locally),0.20 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/35 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/34 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_DiagnosticSessionHandler_Init/10 (Dcm_Dsl_DiagnosticSessionHandler_Init) @06e697e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DiagnosticSessionResetFlag/0 (write)Dcm_DiagnosticSessionProtocolIndex/1 (write)Dcm_DiagnosticSessionTableIndex/2 (write)Dcm_DiagnosticSessionMainConnectionIndex/3 (write)Dcm_DiagnosticSessionLevel/4 (write)Dcm_S3TimerValue/8 (write)Dcm_P2TimerValue/9 (write)Dcm_P2TimerOwner/7 (write)Dcm_ResetToDefaultSessionRequester/6 (write)Dcm_ResetToDefaultSessionOccured/5 (write)
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_P2TimerValue/9 (Dcm_P2TimerValue) @06dd99d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (read)Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (read)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (write)Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (write)Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (write)Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26 (read)
  Availability: available
  Varpool flags:
Dcm_S3TimerValue/8 (Dcm_S3TimerValue) @06dd9990
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (write)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (read)Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22 (write)
  Availability: available
  Varpool flags:
Dcm_P2TimerOwner/7 (Dcm_P2TimerOwner) @06dd9948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/23 (write)Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/24 (write)Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (read)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12 (read)Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20 (write)Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/25 (write)
  Availability: available
  Varpool flags:
Dcm_ResetToDefaultSessionRequester/6 (Dcm_ResetToDefaultSessionRequester) @06dd9900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (write)Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (write)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/31 (read)
  Availability: available
  Varpool flags:
Dcm_ResetToDefaultSessionOccured/5 (Dcm_ResetToDefaultSessionOccured) @06dd98b8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29 (write)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29 (write)Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30 (read)Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30 (read)Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30 (read)Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19 (read)
  Availability: available
  Varpool flags:
Dcm_DiagnosticSessionLevel/4 (Dcm_DiagnosticSessionLevel) @06dd9870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/14 (read)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (write)
  Availability: available
  Varpool flags:
Dcm_DiagnosticSessionMainConnectionIndex/3 (Dcm_DiagnosticSessionMainConnectionIndex) @06dd9828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/16 (read)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (write)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (write)
  Availability: available
  Varpool flags:
Dcm_DiagnosticSessionTableIndex/2 (Dcm_DiagnosticSessionTableIndex) @06dd97e0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (read)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (read)
  Availability: available
  Varpool flags:
Dcm_DiagnosticSessionProtocolIndex/1 (Dcm_DiagnosticSessionProtocolIndex) @06dd9798
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27 (read)Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/15 (read)Dcm_Dsl_DiagnosticSessionHandler_SetSession/18 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28 (read)
  Availability: available
  Varpool flags:
Dcm_DiagnosticSessionResetFlag/0 (Dcm_DiagnosticSessionResetFlag) @06dd9750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (read)Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (read)Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11 (write)Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32 (write)Dcm_Dsl_DiagnosticSessionHandler_Init/10 (write)Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (write)Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (read)Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17 (write)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_DiagnosticSessionHandler_DoSwitch (Dcm_Dsl_DiagnosticSessionHandler_DoSwitch, funcdef_no=22, decl_uid=7649, cgraph_uid=23, symbol_order=32)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_DoSwitch/32
Dcm_Dsl_DiagnosticSessionHandler_DoSwitch (Dcm_SesCtrlType NewSession)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  NetworkHandleType NetworkId;
  uint8 RteSesMode;
  boolean NewSessionIsValid;
  Dcm_SesCtrlType OldSession;
  uint8 FlagIdx;
  uint8 SessionIdx;
  Dcm_ProtocolIndexType ProtocolIdx;
  short unsigned int _1;
  unsigned char _2;
  int _3;
  const struct Dcm_SesTabEntryConfigType * _4;
  unsigned int _5;
  unsigned int _6;
  const struct Dcm_SesTabEntryConfigType * _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  short unsigned int _12;
  int _13;
  unsigned char _14;
  const struct Dcm_SesTabEntryConfigType * _15;
  unsigned int _16;
  unsigned int _17;
  const struct Dcm_SesTabEntryConfigType * _18;
  const struct Dcm_SesTabEntryConfigType * _19;
  unsigned char _20;
  unsigned int _21;
  unsigned int _22;
  const struct Dcm_SesTabEntryConfigType * _23;
  int _24;
  short unsigned int _25;
  int _26;

  <bb 2> [local count: 234990859]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIdx => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NewSessionIsValid => 0
  # DEBUG BEGIN_STMT
  # DEBUG RteSesMode => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OldSession_39 = Dcm_DiagnosticSessionLevel;
  # DEBUG OldSession => OldSession_39
  # DEBUG BEGIN_STMT
  if (NewSession_40(D) != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol ();
  _2 = (unsigned char) _1;
  ProtocolIdx_43 = _2 + 244;
  # DEBUG ProtocolIdx => ProtocolIdx_43
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (int) ProtocolIdx_43;
  # DEBUG D#1 => &Dcm_SesTabConfig[_3]
  # DEBUG SesTabConfig => D#1
  # DEBUG BEGIN_STMT
  # DEBUG SessionIdx => 0
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_3].SessionEntries;
  _5 = (unsigned int) SessionIdx_28;
  _6 = _5 * 12;
  _7 = _4 + _6;
  _8 = _7->SesCtrl;
  if (_8 == NewSession_40(D))
    goto <bb 7>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 5> [local count: 958878294]:
  # DEBUG BEGIN_STMT
  SessionIdx_44 = SessionIdx_28 + 1;
  # DEBUG SessionIdx => SessionIdx_44

  <bb 6> [local count: 1073741824]:
  # SessionIdx_28 = PHI <0(3), SessionIdx_44(5)>
  # DEBUG SessionIdx => SessionIdx_28
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_3].NumEntries;
  if (_10 > SessionIdx_28)
    goto <bb 4>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 114863532]:
  # _9 = PHI <_10(4), _10(6)>
  # SessionIdx_11 = PHI <SessionIdx_28(4), SessionIdx_28(6)>
  # DEBUG BEGIN_STMT
  if (_9 > SessionIdx_11)
    goto <bb 8>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 8> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionProtocolIndex = ProtocolIdx_43;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionTableIndex = SessionIdx_11;
  # DEBUG BEGIN_STMT
  _12 = Dcm_HsmInfo[_3].RxConnectionId;
  _13 = (int) _12;
  _14 = Dcm_RxPduIdConfig[_13].MainConnectionIndex;
  Dcm_DiagnosticSessionMainConnectionIndex = _14;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionLevel = NewSession_40(D);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _15 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_3].SessionEntries;
  _16 = (unsigned int) SessionIdx_11;
  _17 = _16 * 12;
  _18 = _15 + _17;
  RteSesMode_51 = _18->RteSesMode;
  # DEBUG RteSesMode => RteSesMode_51
  # DEBUG BEGIN_STMT
  # DEBUG NewSessionIsValid => 1
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 120127327]:
  # DEBUG BEGIN_STMT
  # DEBUG SesTabConfig => &Dcm_SesTabConfig[0]
  # DEBUG BEGIN_STMT
  _19 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig].SessionEntries;
  _20 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig].DefSessionIndex;
  _21 = (unsigned int) _20;
  _22 = _21 * 12;
  _23 = _19 + _22;
  RteSesMode_41 = _23->RteSesMode;
  # DEBUG RteSesMode => RteSesMode_41
  # DEBUG BEGIN_STMT
  # DEBUG NewSessionIsValid => 1

  <bb 10> [local count: 234990859]:
  # ProtocolIdx_27 = PHI <ProtocolIdx_43(8), 2(9), ProtocolIdx_43(7)>
  # NewSessionIsValid_30 = PHI <1(8), 1(9), 0(7)>
  # RteSesMode_31 = PHI <RteSesMode_51(8), RteSesMode_41(9), 1(7)>
  # DEBUG RteSesMode => RteSesMode_31
  # DEBUG NewSessionIsValid => NewSessionIsValid_30
  # DEBUG ProtocolIdx => ProtocolIdx_27
  # DEBUG BEGIN_STMT
  if (NewSessionIsValid_30 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 11> [local count: 79896892]:
  # DEBUG BEGIN_STMT
  if (OldSession_39 != 1)
    goto <bb 12>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 12> [local count: 52731949]:
  if (NewSession_40(D) == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 10672946]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_S3TimerValue = 0;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionProtocolIndex = 2;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionTableIndex = 0;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionMainConnectionIndex = 3;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionLevel = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 14> [local count: 79896892]:
  # DEBUG BEGIN_STMT
  SchM_Switch_Dcm_DcmDiagnosticSessionControl (RteSesMode_31);
  # DEBUG BEGIN_STMT
  if (NewSession_40(D) == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 27164943]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_DefaultSessionEntered ();
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 52731949]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _24 = (int) ProtocolIdx_27;
  _25 = Dcm_HsmInfo[_24].RxConnectionId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_25, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  NetworkId_61 = RxPduIdInfo.ComMChannelId;
  # DEBUG NetworkId => NetworkId_61
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ComMChannelStateManager_RequestActiveDiagnostic (NetworkId_61);
  RxPduIdInfo ={v} {CLOBBER};

  <bb 17> [local count: 79896892]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_UponSessionChangeNotify (OldSession_39, NewSession_40(D));

  <bb 18> [local count: 234990859]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NewSession_40(D) == 1)
    goto <bb 19>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 19> [local count: 79896892]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag = 0;
  # DEBUG BEGIN_STMT
  # DEBUG FlagIdx => 0
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 239690676]:
  # DEBUG BEGIN_STMT
  _26 = (int) FlagIdx_29;
  Dcm_ResetToDefaultSessionOccured[_26] = 1;
  # DEBUG BEGIN_STMT
  FlagIdx_68 = FlagIdx_29 + 1;
  # DEBUG FlagIdx => FlagIdx_68

  <bb 21> [local count: 319587568]:
  # FlagIdx_29 = PHI <0(19), FlagIdx_68(20)>
  # DEBUG FlagIdx => FlagIdx_29
  # DEBUG BEGIN_STMT
  if (FlagIdx_29 != 3)
    goto <bb 20>; [75.00%]
  else
    goto <bb 22>; [25.00%]

  <bb 22> [local count: 234990859]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_Init (Dcm_Dsl_DiagnosticSessionHandler_Init, funcdef_no=0, decl_uid=6100, cgraph_uid=1, symbol_order=10)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_Init/10
Dcm_Dsl_DiagnosticSessionHandler_Init ()
{
  uint8 FlagIdx;
  Dcm_ProtocolIndexType ProtocolIdx;
  int _1;
  int _2;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag = 0;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionProtocolIndex = 2;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionTableIndex = 0;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionMainConnectionIndex = 3;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionLevel = 1;
  # DEBUG BEGIN_STMT
  Dcm_S3TimerValue = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536951452]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIdx_3;
  Dcm_P2TimerValue[_1] = 0;
  # DEBUG BEGIN_STMT
  Dcm_P2TimerOwner[_1] = 16;
  # DEBUG BEGIN_STMT
  ProtocolIdx_19 = ProtocolIdx_3 + 1;
  # DEBUG ProtocolIdx => ProtocolIdx_19

  <bb 4> [local count: 805386908]:
  # ProtocolIdx_3 = PHI <0(2), ProtocolIdx_19(3)>
  # DEBUG ProtocolIdx => ProtocolIdx_3
  # DEBUG BEGIN_STMT
  if (ProtocolIdx_3 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 5>; [33.33%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionRequester = 0;
  # DEBUG BEGIN_STMT
  # DEBUG FlagIdx => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _2 = (int) FlagIdx_4;
  Dcm_ResetToDefaultSessionOccured[_2] = 0;
  # DEBUG BEGIN_STMT
  FlagIdx_16 = FlagIdx_4 + 1;
  # DEBUG FlagIdx => FlagIdx_16

  <bb 7> [local count: 1073741824]:
  # FlagIdx_4 = PHI <0(5), FlagIdx_16(6)>
  # DEBUG FlagIdx => FlagIdx_4
  # DEBUG BEGIN_STMT
  if (FlagIdx_4 != 3)
    goto <bb 6>; [75.00%]
  else
    goto <bb 8>; [25.00%]

  <bb 8> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction (Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction, funcdef_no=1, decl_uid=6104, cgraph_uid=2, symbol_order=11)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction/11
Dcm_Dsl_DiagnosticSessionHandler_S3TimerHandlingMainFunction ()
{
  short unsigned int Dcm_S3TimerValue.2_1;
  unsigned char Dcm_DiagnosticSessionResetFlag.4_2;
  short unsigned int _3;
  unsigned char Dcm_DiagnosticSessionResetFlag.6_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_S3TimerValue.2_1 = Dcm_S3TimerValue;
  if (Dcm_S3TimerValue.2_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (Dcm_S3TimerValue.2_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag.4_2 = Dcm_DiagnosticSessionResetFlag;
  if (Dcm_DiagnosticSessionResetFlag.4_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag = 1;

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_S3TimerValue.2_1 + 65535;
  Dcm_S3TimerValue = _3;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag.6_4 = Dcm_DiagnosticSessionResetFlag;
  if (Dcm_DiagnosticSessionResetFlag.6_4 == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_DoSwitch (1);

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionRequester = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction (Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction, funcdef_no=2, decl_uid=6102, cgraph_uid=3, symbol_order=12)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction/12
Dcm_Dsl_DiagnosticSessionHandler_P2TimerHandlingMainFunction ()
{
  uint8 serviceId;
  Dcm_ProtocolIndexType ProtocolIdx;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  short unsigned int _4;
  unsigned char _5;

  <bb 2> [local count: 357878148]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolIdx => 0
  goto <bb 15>; [100.00%]

  <bb 3> [local count: 715863674]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIdx_6;
  _2 = Dcm_P2TimerValue[_1];
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 4> [local count: 357931837]:
  # DEBUG BEGIN_STMT
  _3 = _2 + 4294967295;
  Dcm_P2TimerValue[_1] = _3;
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 5> [local count: 178965918]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_P2TimerOwner[_1];
  if (_4 != 14)
    goto <bb 6>; [79.76%]
  else
    goto <bb 13>; [20.24%]

  <bb 6> [local count: 142743217]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#2
  # DEBUG BEGIN_STMT
  serviceId_14 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  # DEBUG serviceId => serviceId_14
  # DEBUG BEGIN_STMT
  _5 = serviceId_14 + 255;
  if (_5 <= 2)
    goto <bb 11>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 95637955]:
  if (serviceId_14 == 6)
    goto <bb 11>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 63121050]:
  if (serviceId_14 == 7)
    goto <bb 11>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 41659893]:
  if (serviceId_14 == 8)
    goto <bb 11>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 27495530]:
  if (serviceId_14 == 10)
    goto <bb 11>; [51.12%]
  else
    goto <bb 12>; [48.88%]

  <bb 11> [local count: 129303402]:
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitInst (&Dcm_HsmScDcm, ProtocolIdx_6, 8);
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 13439815]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_Protocol_P2TimerTimeout (ProtocolIdx_6);
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 36222702]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_P2TimerTimeout (ProtocolIdx_6);

  <bb 14> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  ProtocolIdx_17 = ProtocolIdx_6 + 1;
  # DEBUG ProtocolIdx => ProtocolIdx_17

  <bb 15> [local count: 1073741824]:
  # ProtocolIdx_6 = PHI <0(2), ProtocolIdx_17(14)>
  # DEBUG ProtocolIdx => ProtocolIdx_6
  # DEBUG BEGIN_STMT
  if (ProtocolIdx_6 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 16>; [33.33%]

  <bb 16> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp (Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp, funcdef_no=3, decl_uid=6106, cgraph_uid=4, symbol_order=13)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/13
Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp (Dcm_ProtocolIndexType ProtocolIndex)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ReturnMaxRcrrp => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 2;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession, funcdef_no=4, decl_uid=6112, cgraph_uid=5, symbol_order=14)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/14
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ()
{
  Dcm_SesCtrlType SessionLevel;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SessionLevel_2 = Dcm_DiagnosticSessionLevel;
  # DEBUG SessionLevel => SessionLevel_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return SessionLevel_2;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex (Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex, funcdef_no=5, decl_uid=6114, cgraph_uid=6, symbol_order=15)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex/15
Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionProtocolIndex ()
{
  Dcm_ProtocolIndexType ProtocolIndex;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ProtocolIndex_2 = Dcm_DiagnosticSessionProtocolIndex;
  # DEBUG ProtocolIndex => ProtocolIndex_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ProtocolIndex_2;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection (Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection, funcdef_no=6, decl_uid=6116, cgraph_uid=7, symbol_order=16)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection/16
Dcm_Dsl_DiagnosticSessionHandler_GetNonDefaultSessionMainConnection ()
{
  Dcm_MainConnectionIndexType MainConnectionIndex;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MainConnectionIndex_2 = Dcm_DiagnosticSessionMainConnectionIndex;
  # DEBUG MainConnectionIndex => MainConnectionIndex_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return MainConnectionIndex_2;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession (Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession, funcdef_no=7, decl_uid=6118, cgraph_uid=8, symbol_order=17)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession/17
Dcm_Dsl_DiagnosticSessionHandler_ResetToDefaultSession (Dcm_RequesterIdType RequesterId)
{
  unsigned char Dcm_DiagnosticSessionResetFlag.10_1;
  short unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (RequesterId_7(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionRequester = 1;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag = 1;
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag.10_1 = Dcm_DiagnosticSessionResetFlag;
  if (Dcm_DiagnosticSessionResetFlag.10_1 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol ();
  _3 = (unsigned char) _2;
  # DEBUG ProtocolIdx => _3 + 244
  # DEBUG BEGIN_STMT
  if (_3 == 14)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 154348240]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionResetFlag = 1;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_SetSession (Dcm_Dsl_DiagnosticSessionHandler_SetSession, funcdef_no=8, decl_uid=6121, cgraph_uid=9, symbol_order=18)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_SetSession/18
Dcm_Dsl_DiagnosticSessionHandler_SetSession (Dcm_MainConnectionIndexType MainConnectionIndex, Dcm_SesCtrlType NewSession)
{
  uint8 RteSesMode;
  uint8 SessionIdx;
  Dcm_ProtocolIndexType ProtocolIndex;
  int _1;
  int _2;
  const struct Dcm_SesTabEntryConfigType * _3;
  unsigned int _4;
  unsigned int _5;
  const struct Dcm_SesTabEntryConfigType * _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  const struct Dcm_SesTabEntryConfigType * _11;
  unsigned int _12;
  unsigned int _13;
  const struct Dcm_SesTabEntryConfigType * _14;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _1 = (int) MainConnectionIndex_18(D);
  ProtocolIndex_20 = Dcm_MainConnectionConfig[_1].ProtocolIndex;
  # DEBUG ProtocolIndex => ProtocolIndex_20
  # DEBUG BEGIN_STMT
  _2 = (int) ProtocolIndex_20;
  # DEBUG D#3 => &Dcm_SesTabConfig[_2]
  # DEBUG SesTabConfig => D#3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RteSesMode => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SessionIdx => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_2].SessionEntries;
  _4 = (unsigned int) SessionIdx_15;
  _5 = _4 * 12;
  _6 = _3 + _5;
  _7 = _6->SesCtrl;
  if (_7 == NewSession_21(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  SessionIdx_22 = SessionIdx_15 + 1;
  # DEBUG SessionIdx => SessionIdx_22

  <bb 5> [local count: 1073741824]:
  # SessionIdx_15 = PHI <0(2), SessionIdx_22(4)>
  # DEBUG SessionIdx => SessionIdx_15
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_2].NumEntries;
  if (_9 > SessionIdx_15)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # _8 = PHI <_9(3), _9(5)>
  # SessionIdx_10 = PHI <SessionIdx_15(3), SessionIdx_15(5)>
  # DEBUG BEGIN_STMT
  if (_8 > SessionIdx_10)
    goto <bb 7>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionProtocolIndex = ProtocolIndex_20;
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionTableIndex = SessionIdx_10;
  # DEBUG BEGIN_STMT
  if (NewSession_21(D) == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 12887688]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionMainConnectionIndex = 3;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 25017277]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionMainConnectionIndex = MainConnectionIndex_18(D);

  <bb 10> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionLevel = NewSession_21(D);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _11 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_2].SessionEntries;
  _12 = (unsigned int) SessionIdx_10;
  _13 = _12 * 12;
  _14 = _11 + _13;
  RteSesMode_30 = _14->RteSesMode;
  # DEBUG RteSesMode => RteSesMode_30
  # DEBUG BEGIN_STMT
  SchM_Switch_Dcm_DcmDiagnosticSessionControl (RteSesMode_30);

  <bb 11> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession (Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession, funcdef_no=9, decl_uid=6123, cgraph_uid=10, symbol_order=19)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession/19
Dcm_Dsl_DiagnosticSessionHandler_SwitchCurrentSession (Dcm_SesCtrlType NewSession)
{
  boolean GetValue;
  boolean IsSessionClearedToSwitch;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  IsSessionClearedToSwitch_5 = Dcm_Dsl_Supervisor_IsSessionClearedToSwitch (NewSession_3(D));
  # DEBUG IsSessionClearedToSwitch => IsSessionClearedToSwitch_5
  # DEBUG BEGIN_STMT
  # DEBUG ServiceID => 16
  # DEBUG INLINE_ENTRY Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured
  # DEBUG BEGIN_STMT
  # DEBUG GetValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  GetValue_6 = Dcm_ResetToDefaultSessionOccured[0];
  # DEBUG GetValue => GetValue_6
  # DEBUG BEGIN_STMT
  # DEBUG GetValue => GetValue_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ServiceID => NULL
  # DEBUG GetValue => NULL
  # DEBUG ResetToDefaultSessionOccured => GetValue_6
  # DEBUG BEGIN_STMT
  if (IsSessionClearedToSwitch_5 == 3)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (GetValue_6 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_DoSwitch (NewSession_3(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer (Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer, funcdef_no=10, decl_uid=6127, cgraph_uid=11, symbol_order=20)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/20
Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer (Dcm_BufferUserType UserId, Dcm_ProtocolIndexType ProtocolIndex, Dcm_TimerValueType Timeout)
{
  int _1;
  long unsigned int _2;
  short unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_6(D);
  Dcm_P2TimerOwner[_1] = UserId_8(D);
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_P2TimerValue[_1] = Timeout_11(D);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = Dcm_P2TimerValue[_1];
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_P2TimerOwner[_1];
  if (_3 != 14)
    goto <bb 4>; [79.76%]
  else
    goto <bb 9>; [20.24%]

  <bb 4> [local count: 428208239]:
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#4
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  if (_4 == 3)
    goto <bb 7>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 5> [local count: 341538891]:
  if (_4 == 7)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 225415668]:
  if (_4 == 10)
    goto <bb 7>; [51.12%]
  else
    goto <bb 8>; [48.88%]

  <bb 7> [local count: 318025060]:
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitInst (&Dcm_HsmScDcm, ProtocolIndex_6(D), 8);
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 110183179]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_Protocol_P2TimerTimeout (ProtocolIndex_6(D));
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_P2TimerTimeout (ProtocolIndex_6(D));

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer (Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer, funcdef_no=11, decl_uid=6129, cgraph_uid=12, symbol_order=21)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer/21
Dcm_Dsl_DiagnosticSessionHandler_StartS3Timer (Dcm_TimerValueType Timeout)
{
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) Timeout_4(D);
  Dcm_S3TimerValue = _1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_StopTimer (Dcm_Dsl_DiagnosticSessionHandler_StopTimer, funcdef_no=12, decl_uid=6133, cgraph_uid=13, symbol_order=22)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_StopTimer/22
Dcm_Dsl_DiagnosticSessionHandler_StopTimer (Dcm_BufferUserType UserId, Dcm_ProtocolIndexType ProtocolIndex, Dcm_TimerIdType TimerId)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (TimerId_3(D)) <default: <L4> [33.33%], case 2: <L0> [33.33%], case 3: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_9(D);
  Dcm_P2TimerValue[_1] = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_S3TimerValue = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L4>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer (Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer, funcdef_no=13, decl_uid=6140, cgraph_uid=14, symbol_order=23)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer/23
Dcm_Dsl_DiagnosticSessionHandler_AllocateP2Timer (Dcm_BufferUserType RequesterId, Dcm_ProtocolIndexType ProtocolIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_2(D);
  Dcm_P2TimerOwner[_1] = RequesterId_4(D);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer, funcdef_no=14, decl_uid=6143, cgraph_uid=15, symbol_order=24)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/24
Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (Dcm_BufferUserType ReleaserId, Dcm_ProtocolIndexType ProtocolIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_2(D);
  Dcm_P2TimerOwner[_1] = 16;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer (Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer, funcdef_no=15, decl_uid=6137, cgraph_uid=16, symbol_order=25)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer/25
Dcm_Dsl_DiagnosticSessionHandler_GiveP2Timer (Dcm_BufferUserType ProviderId, Dcm_BufferUserType ReceiverId, Dcm_ProtocolIndexType ProtocolIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_2(D);
  Dcm_P2TimerOwner[_1] = ReceiverId_4(D);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue (Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue, funcdef_no=16, decl_uid=6146, cgraph_uid=17, symbol_order=26)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/26
Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue (Dcm_ProtocolIndexType ProtocolIndex, Dcm_TimerIdType TimerId)
{
  Dcm_TimerValueType TimerValue;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_4(D);
  TimerValue_5 = Dcm_P2TimerValue[_1];
  # DEBUG TimerValue => TimerValue_5
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return TimerValue_5;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime (Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime, funcdef_no=17, decl_uid=6108, cgraph_uid=18, symbol_order=27)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/27
Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_TimerValueType P2StarMaxTime;
  const struct Dcm_SesTabEntryConfigType * SessionEntry;
  int _1;
  unsigned char Dcm_DiagnosticSessionProtocolIndex.12_2;
  const struct Dcm_SesTabEntryConfigType * _3;
  unsigned char Dcm_DiagnosticSessionTableIndex.13_4;
  unsigned int _5;
  unsigned int _6;
  const struct Dcm_SesTabEntryConfigType * _7;
  unsigned char _8;
  unsigned int _9;
  unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_12(D);
  # DEBUG D#5 => &Dcm_SesTabConfig[_1]
  # DEBUG SesTabConfig => D#5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionProtocolIndex.12_2 = Dcm_DiagnosticSessionProtocolIndex;
  if (Dcm_DiagnosticSessionProtocolIndex.12_2 == ProtocolIndex_12(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  Dcm_DiagnosticSessionTableIndex.13_4 = Dcm_DiagnosticSessionTableIndex;
  _5 = (unsigned int) Dcm_DiagnosticSessionTableIndex.13_4;
  _6 = _5 * 12;
  SessionEntry_16 = _3 + _6;
  # DEBUG SessionEntry => SessionEntry_16
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _7 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  _8 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].DefSessionIndex;
  _9 = (unsigned int) _8;
  _10 = _9 * 12;
  SessionEntry_15 = _7 + _10;
  # DEBUG SessionEntry => SessionEntry_15

  <bb 5> [local count: 1073741824]:
  # SessionEntry_11 = PHI <SessionEntry_16(3), SessionEntry_15(4)>
  # DEBUG SessionEntry => SessionEntry_11
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  P2StarMaxTime_18 = SessionEntry_11->P2StarMaxTime;
  # DEBUG P2StarMaxTime => P2StarMaxTime_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return P2StarMaxTime_18;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime (Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime, funcdef_no=18, decl_uid=6110, cgraph_uid=19, symbol_order=28)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/28
Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_TimerValueType P2MaxTime;
  const struct Dcm_SesTabEntryConfigType * SessionEntry;
  int _1;
  unsigned char Dcm_DiagnosticSessionProtocolIndex.14_2;
  const struct Dcm_SesTabEntryConfigType * _3;
  unsigned char Dcm_DiagnosticSessionTableIndex.15_4;
  unsigned int _5;
  unsigned int _6;
  const struct Dcm_SesTabEntryConfigType * _7;
  unsigned char _8;
  unsigned int _9;
  unsigned int _10;
  short unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_13(D);
  # DEBUG D#6 => &Dcm_SesTabConfig[_1]
  # DEBUG SesTabConfig => D#6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_DiagnosticSessionProtocolIndex.14_2 = Dcm_DiagnosticSessionProtocolIndex;
  if (Dcm_DiagnosticSessionProtocolIndex.14_2 == ProtocolIndex_13(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  Dcm_DiagnosticSessionTableIndex.15_4 = Dcm_DiagnosticSessionTableIndex;
  _5 = (unsigned int) Dcm_DiagnosticSessionTableIndex.15_4;
  _6 = _5 * 12;
  SessionEntry_17 = _3 + _6;
  # DEBUG SessionEntry => SessionEntry_17
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _7 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  _8 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].DefSessionIndex;
  _9 = (unsigned int) _8;
  _10 = _9 * 12;
  SessionEntry_16 = _7 + _10;
  # DEBUG SessionEntry => SessionEntry_16

  <bb 5> [local count: 1073741824]:
  # SessionEntry_12 = PHI <SessionEntry_17(3), SessionEntry_16(4)>
  # DEBUG SessionEntry => SessionEntry_12
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _11 = SessionEntry_12->P2MaxTime;
  P2MaxTime_19 = (Dcm_TimerValueType) _11;
  # DEBUG P2MaxTime => P2MaxTime_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return P2MaxTime_19;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured (Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured, funcdef_no=19, decl_uid=6148, cgraph_uid=20, symbol_order=29)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/29
Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured (uint8 ServiceID)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (ServiceID_2(D)) <default: <L5> [25.00%], case 16: <L0> [25.00%], case 39: <L2> [25.00%], case 40: <L1> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionOccured[0] = 0;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionOccured[1] = 0;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionOccured[2] = 0;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
<L5>:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured (Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured, funcdef_no=20, decl_uid=6150, cgraph_uid=21, symbol_order=30)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured/30
Dcm_Dsl_DiagnosticSessionHandler_GetResetToDefaultSessionOccured (uint8 ServiceID)
{
  boolean GetValue;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG GetValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (ServiceID_2(D)) <default: <L6> [25.00%], case 16: <L0> [25.00%], case 39: <L2> [25.00%], case 40: <L1> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  GetValue_6 = Dcm_ResetToDefaultSessionOccured[0];
  # DEBUG GetValue => GetValue_6
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  GetValue_4 = Dcm_ResetToDefaultSessionOccured[1];
  # DEBUG GetValue => GetValue_4
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  GetValue_5 = Dcm_ResetToDefaultSessionOccured[2];
  # DEBUG GetValue => GetValue_5
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  # GetValue_1 = PHI <GetValue_6(3), GetValue_4(4), GetValue_5(5), 0(2)>
<L6>:
  # DEBUG GetValue => GetValue_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return GetValue_1;

}



;; Function Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured (Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured, funcdef_no=21, decl_uid=6152, cgraph_uid=22, symbol_order=31)

Modification phase of node Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/31
Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured ()
{
  boolean GetValue;
  unsigned char Dcm_ResetToDefaultSessionRequester.16_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG GetValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_ResetToDefaultSessionRequester.16_1 = Dcm_ResetToDefaultSessionRequester;
  if (Dcm_ResetToDefaultSessionRequester.16_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG GetValue => 1

  <bb 4> [local count: 1073741824]:
  # GetValue_2 = PHI <0(2), 1(3)>
  # DEBUG GetValue => GetValue_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return GetValue_2;

}


