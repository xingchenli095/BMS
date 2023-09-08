
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  BswM_HandleStaticRequest.part.0/151:
  Jump functions of caller  BswM_HandleRequest/149:
  Jump functions of caller  Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode/148:
  Jump functions of caller  ComM_CommunicationAllowed/147:
  Jump functions of caller  Dem_Shutdown/146:
  Jump functions of caller  Eb_Intgr_BswM_GoOffOneA/145:
  Jump functions of caller  Eb_Intgr_BswM_GoOffOneB/144:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnGoOffOneA/143:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnGoOffOneB/142:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnPostRun/141:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnPrpShutdown/140:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnRunTwo/139:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnStartupTwoA/138:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnStartupTwoB/137:
  Jump functions of caller  Eb_Intgr_BswM_DriverInitThree/136:
  Jump functions of caller  Eb_Intgr_BswM_InitNvMReadAll/135:
  Jump functions of caller  BswM_RequestMode/134:
  Jump functions of caller  Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode/133:
  Jump functions of caller  Rte_Start/132:
  Jump functions of caller  Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131:
  Jump functions of caller  Eb_Intgr_BswM_RunTwo/130:
  Jump functions of caller  EcuM_ASR40_SelectShutdownTarget/129:
  Jump functions of caller  BswM_ExecutePduGroupSwitchAction/128:
  Jump functions of caller  Dem_SetCycleQualified/127:
  Jump functions of caller  Dem_SetOperationCycleState/126:
  Jump functions of caller  SchM_Exit_BswM_SCHM_BSWM_EXCLUSIVE_AREA/125:
  Jump functions of caller  SchM_Enter_BswM_SCHM_BSWM_EXCLUSIVE_AREA/124:
  Jump functions of caller  BswM_HandleStaticRequest/123:
    callsite  BswM_HandleStaticRequest/123 -> BswM_HandleStaticRequest.part.0/151 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  BswM_ExecuteAction/122:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 = _2 ();
  Jump functions of caller  BswM_ExprGetResult/121:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 = _2 ();
  Jump functions of caller  BswM_ExprGetState/120:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 = _2 ();
  Jump functions of caller  BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY/119:
  Jump functions of caller  BswM_Action_BswM_Act_StopDemOpCycleState_POWER/118:
  Jump functions of caller  BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION/117:
  Jump functions of caller  BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY/116:
  Jump functions of caller  BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION/115:
  Jump functions of caller  BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY/114:
  Jump functions of caller  BswM_Action_BswM_Act_StartInternalPDUs/113:
  Jump functions of caller  BswM_Action_BswM_Act_StartDemOpCycleState_POWER/112:
  Jump functions of caller  BswM_Action_BswM_Act_Sleep/111:
  Jump functions of caller  BswM_Action_BswM_Act_RunTwo/110:
  Jump functions of caller  BswM_Action_BswM_Act_RteSwitch_Startup/109:
  Jump functions of caller  BswM_Action_BswM_Act_RteSwitch_Run/108:
  Jump functions of caller  BswM_Action_BswM_Act_RteSwitch_PrpShutdown/107:
  Jump functions of caller  BswM_Action_BswM_Act_RteSwitch_GoOffOneB/106:
  Jump functions of caller  BswM_Action_BswM_Act_RteSwitch_GoOffOneA/105:
  Jump functions of caller  BswM_Action_BswM_Act_RteStart/104:
  Jump functions of caller  BswM_Action_BswM_Act_RteModeReq_AppStartup/103:
  Jump functions of caller  BswM_Action_BswM_Act_RteModeReq_AppInactive/102:
  Jump functions of caller  BswM_Action_BswM_Act_RteModeReq_AppActive/101:
  Jump functions of caller  BswM_Action_BswM_Act_Reset/100:
  Jump functions of caller  BswM_Action_BswM_Act_ReqStartupTwoB/99:
  Jump functions of caller  BswM_Action_BswM_Act_ReqRunTwo/98:
  Jump functions of caller  BswM_Action_BswM_Act_ReqPrpShutDown/97:
  Jump functions of caller  BswM_Action_BswM_Act_ReqPostRun/96:
  Jump functions of caller  BswM_Action_BswM_Act_ReqGoOffOneA/95:
  Jump functions of caller  BswM_Action_BswM_Act_PncCan_Enable/94:
  Jump functions of caller  BswM_Action_BswM_Act_PncCan_Disable/93:
  Jump functions of caller  BswM_Action_BswM_Act_PncCanFD_Enable/92:
  Jump functions of caller  BswM_Action_BswM_Act_PncCanFD_Disable/91:
  Jump functions of caller  BswM_Action_BswM_Act_NvMReadAll/90:
  Jump functions of caller  BswM_Action_BswM_Act_InitDriverInitThree/89:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnStartupTwoB/88:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnStartupTwoA/87:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnRunTwo/86:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnPrpShutdown/85:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnPostRun/84:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnGoOffOneB/83:
  Jump functions of caller  BswM_Action_BswM_Act_HookOnGoOffOneA/82:
  Jump functions of caller  BswM_Action_BswM_Act_GoOffOneB/81:
  Jump functions of caller  BswM_Action_BswM_Act_GoOffOneA/80:
  Jump functions of caller  BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79:
  Jump functions of caller  BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78:
  Jump functions of caller  BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77:
  Jump functions of caller  BswM_Action_BswM_Act_DemDeinit/76:
  Jump functions of caller  BswM_Action_BswM_Act_AllowCom/75:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_StartupTwoB/74:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_StartupTwoA/73:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_RunTwo/71:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PrpShutdown/69:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PostRun/67:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PncCanStop/66:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PncCanStart/65:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PncCanFDStop/64:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_PncCanFDStart/63:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_GoOffOneB/62:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_GoOffOneA/61:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_Dcm_Reset/60:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_ComMSilentCom/59:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_ComMNoCom/58:
  Jump functions of caller  BswM_ExprState_BswM_LogEx_ComMFullCom/57:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_StartupTwoB/56:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_StartupTwoA/55:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_RunTwo/53:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition/52:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PrpShutdown/51:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PostRun/49:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PncCanStop/48:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PncCanStart/47:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PncCanFDStop/46:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_PncCanFDStart/45:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_GoOffOneB/44:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_GoOffOneA/43:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_Dcm_Reset/42:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_ComMSilentCom/41:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_ComMNoCom/40:
  Jump functions of caller  BswM_ExprResult_BswM_LogEx_ComMFullCom/39:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14:
  Jump functions of caller  BswM_LT_Init/13:
    callsite  BswM_LT_Init/13 -> BswM_InitRteModeRequestPorts/12 : 
  Jump functions of caller  BswM_InitRteModeRequestPorts/12:
  Jump functions of caller  BswM_MRPFunc_BswM_ModeReqPort_AppState/11:

 Propagating constants:

Not considering BswM_HandleStaticRequest for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExecuteAction for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprGetResult for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprGetState for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StopDemOpCycleState_POWER for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StartInternalPDUs for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_StartDemOpCycleState_POWER for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_Sleep for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RunTwo for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteSwitch_Startup for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteSwitch_Run for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteSwitch_PrpShutdown for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteSwitch_GoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteSwitch_GoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteStart for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteModeReq_AppStartup for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteModeReq_AppInactive for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_RteModeReq_AppActive for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_Reset for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_ReqStartupTwoB for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_ReqRunTwo for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_ReqPrpShutDown for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_ReqPostRun for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_ReqGoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_PncCan_Enable for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_PncCan_Disable for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_PncCanFD_Enable for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_PncCanFD_Disable for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_NvMReadAll for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_InitDriverInitThree for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnStartupTwoB for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnStartupTwoA for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnRunTwo for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnPrpShutdown for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnPostRun for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnGoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_HookOnGoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_GoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_GoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_DemDeinit for cloning; -fipa-cp-clone disabled.
Not considering BswM_Action_BswM_Act_AllowCom for cloning; -fipa-cp-clone disabled.
Function BswM_ExprState_BswM_LogEx_StartupTwoB/74 is not versionable, reason: not a tree_versionable_function.
Function BswM_ExprState_BswM_LogEx_StartupTwoA/73 is not versionable, reason: not a tree_versionable_function.
Function BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprState_BswM_LogEx_RunTwo for cloning; -fipa-cp-clone disabled.
Function BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprState_BswM_LogEx_PrpShutdown for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprState_BswM_LogEx_PostRunToRunTwo for cloning; -fipa-cp-clone disabled.
Function BswM_ExprState_BswM_LogEx_PostRun/67 is not versionable, reason: not a tree_versionable_function.
Function BswM_ExprState_BswM_LogEx_PncCanStop/66 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprState_BswM_LogEx_PncCanStart for cloning; -fipa-cp-clone disabled.
Function BswM_ExprState_BswM_LogEx_PncCanFDStop/64 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprState_BswM_LogEx_PncCanFDStart for cloning; -fipa-cp-clone disabled.
Function BswM_ExprState_BswM_LogEx_GoOffOneB/62 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprState_BswM_LogEx_GoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprState_BswM_LogEx_Dcm_Reset for cloning; -fipa-cp-clone disabled.
Function BswM_ExprState_BswM_LogEx_ComMSilentCom/59 is not versionable, reason: not a tree_versionable_function.
Function BswM_ExprState_BswM_LogEx_ComMNoCom/58 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprState_BswM_LogEx_ComMFullCom for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_StartupTwoB for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_StartupTwoA for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_RunTwoToPostRun for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_RunTwo for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PrpShutdown for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PostRunToRunTwo for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PostRun for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PncCanStop for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PncCanStart for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PncCanFDStop for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_PncCanFDStart for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_GoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_GoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_Dcm_Reset for cloning; -fipa-cp-clone disabled.
Function BswM_ExprResult_BswM_LogEx_ComMSilentCom/41 is not versionable, reason: not a tree_versionable_function.
Not considering BswM_ExprResult_BswM_LogEx_ComMNoCom for cloning; -fipa-cp-clone disabled.
Not considering BswM_ExprResult_BswM_LogEx_ComMFullCom for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM for cloning; -fipa-cp-clone disabled.
Not considering BswM_LT_Init for cloning; -fipa-cp-clone disabled.
Not considering BswM_MRPFunc_BswM_ModeReqPort_AppState for cloning; -fipa-cp-clone disabled.

overall_size: 999, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: BswM_HandleStaticRequest.part.0/151:
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
  Node: BswM_HandleStaticRequest/123:
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
  Node: BswM_ExecuteAction/122:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: BswM_ExprGetResult/121:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: BswM_ExprGetState/120:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY/119:
  Node: BswM_Action_BswM_Act_StopDemOpCycleState_POWER/118:
  Node: BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION/117:
  Node: BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY/116:
  Node: BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION/115:
  Node: BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY/114:
  Node: BswM_Action_BswM_Act_StartInternalPDUs/113:
  Node: BswM_Action_BswM_Act_StartDemOpCycleState_POWER/112:
  Node: BswM_Action_BswM_Act_Sleep/111:
  Node: BswM_Action_BswM_Act_RunTwo/110:
  Node: BswM_Action_BswM_Act_RteSwitch_Startup/109:
  Node: BswM_Action_BswM_Act_RteSwitch_Run/108:
  Node: BswM_Action_BswM_Act_RteSwitch_PrpShutdown/107:
  Node: BswM_Action_BswM_Act_RteSwitch_GoOffOneB/106:
  Node: BswM_Action_BswM_Act_RteSwitch_GoOffOneA/105:
  Node: BswM_Action_BswM_Act_RteStart/104:
  Node: BswM_Action_BswM_Act_RteModeReq_AppStartup/103:
  Node: BswM_Action_BswM_Act_RteModeReq_AppInactive/102:
  Node: BswM_Action_BswM_Act_RteModeReq_AppActive/101:
  Node: BswM_Action_BswM_Act_Reset/100:
  Node: BswM_Action_BswM_Act_ReqStartupTwoB/99:
  Node: BswM_Action_BswM_Act_ReqRunTwo/98:
  Node: BswM_Action_BswM_Act_ReqPrpShutDown/97:
  Node: BswM_Action_BswM_Act_ReqPostRun/96:
  Node: BswM_Action_BswM_Act_ReqGoOffOneA/95:
  Node: BswM_Action_BswM_Act_PncCan_Enable/94:
  Node: BswM_Action_BswM_Act_PncCan_Disable/93:
  Node: BswM_Action_BswM_Act_PncCanFD_Enable/92:
  Node: BswM_Action_BswM_Act_PncCanFD_Disable/91:
  Node: BswM_Action_BswM_Act_NvMReadAll/90:
  Node: BswM_Action_BswM_Act_InitDriverInitThree/89:
  Node: BswM_Action_BswM_Act_HookOnStartupTwoB/88:
  Node: BswM_Action_BswM_Act_HookOnStartupTwoA/87:
  Node: BswM_Action_BswM_Act_HookOnRunTwo/86:
  Node: BswM_Action_BswM_Act_HookOnPrpShutdown/85:
  Node: BswM_Action_BswM_Act_HookOnPostRun/84:
  Node: BswM_Action_BswM_Act_HookOnGoOffOneB/83:
  Node: BswM_Action_BswM_Act_HookOnGoOffOneA/82:
  Node: BswM_Action_BswM_Act_GoOffOneB/81:
  Node: BswM_Action_BswM_Act_GoOffOneA/80:
  Node: BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79:
  Node: BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78:
  Node: BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77:
  Node: BswM_Action_BswM_Act_DemDeinit/76:
  Node: BswM_Action_BswM_Act_AllowCom/75:
  Node: BswM_ExprState_BswM_LogEx_StartupTwoB/74:
  Node: BswM_ExprState_BswM_LogEx_StartupTwoA/73:
  Node: BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72:
  Node: BswM_ExprState_BswM_LogEx_RunTwo/71:
  Node: BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70:
  Node: BswM_ExprState_BswM_LogEx_PrpShutdown/69:
  Node: BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68:
  Node: BswM_ExprState_BswM_LogEx_PostRun/67:
  Node: BswM_ExprState_BswM_LogEx_PncCanStop/66:
  Node: BswM_ExprState_BswM_LogEx_PncCanStart/65:
  Node: BswM_ExprState_BswM_LogEx_PncCanFDStop/64:
  Node: BswM_ExprState_BswM_LogEx_PncCanFDStart/63:
  Node: BswM_ExprState_BswM_LogEx_GoOffOneB/62:
  Node: BswM_ExprState_BswM_LogEx_GoOffOneA/61:
  Node: BswM_ExprState_BswM_LogEx_Dcm_Reset/60:
  Node: BswM_ExprState_BswM_LogEx_ComMSilentCom/59:
  Node: BswM_ExprState_BswM_LogEx_ComMNoCom/58:
  Node: BswM_ExprState_BswM_LogEx_ComMFullCom/57:
  Node: BswM_ExprResult_BswM_LogEx_StartupTwoB/56:
  Node: BswM_ExprResult_BswM_LogEx_StartupTwoA/55:
  Node: BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54:
  Node: BswM_ExprResult_BswM_LogEx_RunTwo/53:
  Node: BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition/52:
  Node: BswM_ExprResult_BswM_LogEx_PrpShutdown/51:
  Node: BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50:
  Node: BswM_ExprResult_BswM_LogEx_PostRun/49:
  Node: BswM_ExprResult_BswM_LogEx_PncCanStop/48:
  Node: BswM_ExprResult_BswM_LogEx_PncCanStart/47:
  Node: BswM_ExprResult_BswM_LogEx_PncCanFDStop/46:
  Node: BswM_ExprResult_BswM_LogEx_PncCanFDStart/45:
  Node: BswM_ExprResult_BswM_LogEx_GoOffOneB/44:
  Node: BswM_ExprResult_BswM_LogEx_GoOffOneA/43:
  Node: BswM_ExprResult_BswM_LogEx_Dcm_Reset/42:
  Node: BswM_ExprResult_BswM_LogEx_ComMSilentCom/41:
  Node: BswM_ExprResult_BswM_LogEx_ComMNoCom/40:
  Node: BswM_ExprResult_BswM_LogEx_ComMFullCom/39:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33:
  Node: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15:
  Node: BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14:
  Node: BswM_LT_Init/13:
  Node: BswM_InitRteModeRequestPorts/12:
  Node: BswM_MRPFunc_BswM_ModeReqPort_AppState/11:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

BswM_HandleStaticRequest.part.0/151 (BswM_HandleStaticRequest.part.0) @071919a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: BswM_PtrModeRequestPortsTable/8 (read)BswM_Context/10 (addr)BswM_NumModeRequestPortsTable/1 (read)
  Referring: 
  Availability: local
  Function flags: count:118111602 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: BswM_HandleStaticRequest/123 (118111603 (estimated locally),0.34 per call) 
  Calls: BswM_HandleRequest/149 (193419557 (estimated locally),1.64 per call) 
BswM_PostBuildConfig/150 (BswM_PostBuildConfig) @07113360
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: BswM_InitRteModeRequestPorts/12 (read)BswM_LT_Init/13 (read)BswM_LT_Init/13 (read)BswM_LT_Init/13 (read)
  Availability: not_available
  Varpool flags:
BswM_HandleRequest/149 (BswM_HandleRequest) @07103e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14 (217325345 (estimated locally),0.20 per call) BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (217325345 (estimated locally),0.20 per call) BswM_HandleStaticRequest.part.0/151 (193419557 (estimated locally),1.64 per call) 
  Calls: 
Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode/148 (Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode) @07103d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (217325345 (estimated locally),0.20 per call) 
  Calls: 
ComM_CommunicationAllowed/147 (ComM_CommunicationAllowed) @070e69a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_AllowCom/75 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_Shutdown/146 (Dem_Shutdown) @070e67e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_DemDeinit/76 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_GoOffOneA/145 (Eb_Intgr_BswM_GoOffOneA) @070e6380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_GoOffOneA/80 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_GoOffOneB/144 (Eb_Intgr_BswM_GoOffOneB) @070e61c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_GoOffOneB/81 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnGoOffOneA/143 (Eb_Intgr_BswM_Hook_OnGoOffOneA) @070e6000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnGoOffOneA/82 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnGoOffOneB/142 (Eb_Intgr_BswM_Hook_OnGoOffOneB) @070dee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnGoOffOneB/83 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnPostRun/141 (Eb_Intgr_BswM_Hook_OnPostRun) @070dec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnPostRun/84 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnPrpShutdown/140 (Eb_Intgr_BswM_Hook_OnPrpShutdown) @070dea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnPrpShutdown/85 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnRunTwo/139 (Eb_Intgr_BswM_Hook_OnRunTwo) @070de8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnRunTwo/86 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnStartupTwoA/138 (Eb_Intgr_BswM_Hook_OnStartupTwoA) @070de700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnStartupTwoA/87 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnStartupTwoB/137 (Eb_Intgr_BswM_Hook_OnStartupTwoB) @070de540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_HookOnStartupTwoB/88 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_DriverInitThree/136 (Eb_Intgr_BswM_DriverInitThree) @070de380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_InitDriverInitThree/89 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_InitNvMReadAll/135 (Eb_Intgr_BswM_InitNvMReadAll) @070de1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_NvMReadAll/90 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_RequestMode/134 (BswM_RequestMode) @070d68c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_ReqGoOffOneA/95 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_ReqPostRun/96 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_ReqPrpShutDown/97 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_ReqRunTwo/98 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_ReqStartupTwoB/99 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode/133 (Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode) @070d6460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_RteModeReq_AppActive/101 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_RteModeReq_AppInactive/102 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_RteModeReq_AppStartup/103 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Start/132 (Rte_Start) @070d62a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_RteStart/104 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131 (Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode) @070cbd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_RteSwitch_GoOffOneA/105 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_RteSwitch_GoOffOneB/106 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_RteSwitch_PrpShutdown/107 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_RteSwitch_Run/108 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_RteSwitch_Startup/109 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_RunTwo/130 (Eb_Intgr_BswM_RunTwo) @070cbb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_RunTwo/110 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ASR40_SelectShutdownTarget/129 (EcuM_ASR40_SelectShutdownTarget) @070cb9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_Reset/100 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_Sleep/111 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExecutePduGroupSwitchAction/128 (BswM_ExecutePduGroupSwitchAction) @070cb700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_PncCanFD_Disable/91 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_PncCanFD_Enable/92 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_PncCan_Disable/93 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_PncCan_Enable/94 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_StartInternalPDUs/113 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_SetCycleQualified/127 (Dem_SetCycleQualified) @070cb540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY/114 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_SetOperationCycleState/126 (Dem_SetOperationCycleState) @070cb000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Action_BswM_Act_StartDemOpCycleState_POWER/112 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION/115 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY/116 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION/117 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_StopDemOpCycleState_POWER/118 (1073741824 (estimated locally),1.00 per call) BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY/119 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_BswM_SCHM_BSWM_EXCLUSIVE_AREA/125 (SchM_Exit_BswM_SCHM_BSWM_EXCLUSIVE_AREA) @070c6c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: BswM_Context/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
SchM_Enter_BswM_SCHM_BSWM_EXCLUSIVE_AREA/124 (SchM_Enter_BswM_SCHM_BSWM_EXCLUSIVE_AREA) @070c6b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: BswM_Context/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
BswM_HandleStaticRequest/123 (BswM_HandleStaticRequest) @070c6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: BswM_Context/10 (read)
  Referring: BswM_LinkTimeContext/9 (addr)
  Availability: available
  Function flags: count:347387065 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleStaticRequest.part.0/151 (118111603 (estimated locally),0.34 per call) 
BswM_ExecuteAction/122 (BswM_ExecuteAction) @070c68c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_ActionTable/3 (read)
  Referring: BswM_LinkTimeContext/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
BswM_ExprGetResult/121 (BswM_ExprGetResult) @070c6700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_LogicalExprTable/2 (read)
  Referring: BswM_LinkTimeContext/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
BswM_ExprGetState/120 (BswM_ExprGetState) @070c6540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_LogicalExprTable/2 (read)
  Referring: BswM_LinkTimeContext/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY/119 (BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY) @070c6380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetOperationCycleState/126 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StopDemOpCycleState_POWER/118 (BswM_Action_BswM_Act_StopDemOpCycleState_POWER) @070c61c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetOperationCycleState/126 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION/117 (BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION) @070c6000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetOperationCycleState/126 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY/116 (BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY) @070c1e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetOperationCycleState/126 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION/115 (BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION) @070c1c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetOperationCycleState/126 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY/114 (BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY) @070c1a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetCycleQualified/127 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StartInternalPDUs/113 (BswM_Action_BswM_Act_StartInternalPDUs) @070c18c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_StartDemOpCycleState_POWER/112 (BswM_Action_BswM_Act_StartDemOpCycleState_POWER) @070c1700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SetOperationCycleState/126 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_Sleep/111 (BswM_Action_BswM_Act_Sleep) @070c1540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ASR40_SelectShutdownTarget/129 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RunTwo/110 (BswM_Action_BswM_Act_RunTwo) @070c1380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_RunTwo/130 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteSwitch_Startup/109 (BswM_Action_BswM_Act_RteSwitch_Startup) @070c11c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteSwitch_Run/108 (BswM_Action_BswM_Act_RteSwitch_Run) @070c1000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteSwitch_PrpShutdown/107 (BswM_Action_BswM_Act_RteSwitch_PrpShutdown) @070bee00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteSwitch_GoOffOneB/106 (BswM_Action_BswM_Act_RteSwitch_GoOffOneB) @070bec40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteSwitch_GoOffOneA/105 (BswM_Action_BswM_Act_RteSwitch_GoOffOneA) @070bea80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode/131 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteStart/104 (BswM_Action_BswM_Act_RteStart) @070be8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Start/132 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteModeReq_AppStartup/103 (BswM_Action_BswM_Act_RteModeReq_AppStartup) @070be700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode/133 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteModeReq_AppInactive/102 (BswM_Action_BswM_Act_RteModeReq_AppInactive) @070be540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode/133 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_RteModeReq_AppActive/101 (BswM_Action_BswM_Act_RteModeReq_AppActive) @070be380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode/133 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_Reset/100 (BswM_Action_BswM_Act_Reset) @070be1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ASR40_SelectShutdownTarget/129 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_ReqStartupTwoB/99 (BswM_Action_BswM_Act_ReqStartupTwoB) @070be000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_RequestMode/134 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_ReqRunTwo/98 (BswM_Action_BswM_Act_ReqRunTwo) @070bae00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_RequestMode/134 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_ReqPrpShutDown/97 (BswM_Action_BswM_Act_ReqPrpShutDown) @070bac40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_RequestMode/134 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_ReqPostRun/96 (BswM_Action_BswM_Act_ReqPostRun) @070baa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_RequestMode/134 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_ReqGoOffOneA/95 (BswM_Action_BswM_Act_ReqGoOffOneA) @070ba8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_RequestMode/134 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_PncCan_Enable/94 (BswM_Action_BswM_Act_PncCan_Enable) @070ba700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_PncCan_Disable/93 (BswM_Action_BswM_Act_PncCan_Disable) @070ba540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_PncCanFD_Enable/92 (BswM_Action_BswM_Act_PncCanFD_Enable) @070ba380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_PncCanFD_Disable/91 (BswM_Action_BswM_Act_PncCanFD_Disable) @070ba1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_NvMReadAll/90 (BswM_Action_BswM_Act_NvMReadAll) @070ba000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_InitNvMReadAll/135 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_InitDriverInitThree/89 (BswM_Action_BswM_Act_InitDriverInitThree) @070b6e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_DriverInitThree/136 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnStartupTwoB/88 (BswM_Action_BswM_Act_HookOnStartupTwoB) @070b6c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnStartupTwoB/137 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnStartupTwoA/87 (BswM_Action_BswM_Act_HookOnStartupTwoA) @070b6a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnStartupTwoA/138 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnRunTwo/86 (BswM_Action_BswM_Act_HookOnRunTwo) @070b68c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnRunTwo/139 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnPrpShutdown/85 (BswM_Action_BswM_Act_HookOnPrpShutdown) @070b6700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnPrpShutdown/140 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnPostRun/84 (BswM_Action_BswM_Act_HookOnPostRun) @070b6540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnPostRun/141 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnGoOffOneB/83 (BswM_Action_BswM_Act_HookOnGoOffOneB) @070b6380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnGoOffOneB/142 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_HookOnGoOffOneA/82 (BswM_Action_BswM_Act_HookOnGoOffOneA) @070b61c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_Hook_OnGoOffOneA/143 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_GoOffOneB/81 (BswM_Action_BswM_Act_GoOffOneB) @070b6000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_GoOffOneB/144 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_GoOffOneA/80 (BswM_Action_BswM_Act_GoOffOneA) @070b2e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Eb_Intgr_BswM_GoOffOneA/145 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79 (BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can) @070b2c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78 (BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can) @070b2a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77 (BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can) @070b28c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_Context/10 (addr)
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecutePduGroupSwitchAction/128 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_DemDeinit/76 (BswM_Action_BswM_Act_DemDeinit) @070b2700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_Shutdown/146 (1073741824 (estimated locally),1.00 per call) 
BswM_Action_BswM_Act_AllowCom/75 (BswM_Action_BswM_Act_AllowCom) @070b2540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_ActionTable/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_CommunicationAllowed/147 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_StartupTwoB/74 (BswM_ExprState_BswM_LogEx_StartupTwoB) @070b2380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_RunTwo/71 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_StartupTwoA/73 (BswM_ExprState_BswM_LogEx_StartupTwoA) @070b21c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_GoOffOneA/61 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72 (BswM_ExprState_BswM_LogEx_RunTwoToPostRun) @070b2000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_RunTwo/71 (BswM_ExprState_BswM_LogEx_RunTwo) @070afe00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)BswM_UInt8RteRequestPortTable/4 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprState_BswM_LogEx_StartupTwoB/74 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70 (BswM_ExprState_BswM_LogEx_PrpShutdown_Transition) @070afc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_GoOffOneA/61 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_PrpShutdown/69 (BswM_ExprState_BswM_LogEx_PrpShutdown) @070afa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_UInt8RteRequestPortTable/4 (read)BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68 (BswM_ExprState_BswM_LogEx_PostRunToRunTwo) @070af8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMIndicationPortTable/5 (read)BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprState_BswM_LogEx_PostRun/67 (BswM_ExprState_BswM_LogEx_PostRun) @070af700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_GoOffOneA/61 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_PncCanStop/66 (BswM_ExprState_BswM_LogEx_PncCanStop) @070af540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_PncCanStart/65 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_PncCanStart/65 (BswM_ExprState_BswM_LogEx_PncCanStart) @070af380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMPncRequestPortTable/6 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprState_BswM_LogEx_PncCanStop/66 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprState_BswM_LogEx_PncCanFDStop/64 (BswM_ExprState_BswM_LogEx_PncCanFDStop) @070af1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_PncCanFDStart/63 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_PncCanFDStart/63 (BswM_ExprState_BswM_LogEx_PncCanFDStart) @070af000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMPncRequestPortTable/6 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprState_BswM_LogEx_PncCanFDStop/64 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprState_BswM_LogEx_GoOffOneB/62 (BswM_ExprState_BswM_LogEx_GoOffOneB) @070aae00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_GoOffOneA/61 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_GoOffOneA/61 (BswM_ExprState_BswM_LogEx_GoOffOneA) @070aac40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprState_BswM_LogEx_StartupTwoA/73 (1073741824 (estimated locally),1.00 per call) BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70 (1073741824 (estimated locally),1.00 per call) BswM_ExprState_BswM_LogEx_PostRun/67 (1073741824 (estimated locally),1.00 per call) BswM_ExprState_BswM_LogEx_GoOffOneB/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprState_BswM_LogEx_Dcm_Reset/60 (BswM_ExprState_BswM_LogEx_Dcm_Reset) @070aaa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_UInt8RteRequestPortTable/4 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprState_BswM_LogEx_ComMSilentCom/59 (BswM_ExprState_BswM_LogEx_ComMSilentCom) @070aa8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_ComMFullCom/57 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_ComMNoCom/58 (BswM_ExprState_BswM_LogEx_ComMNoCom) @070aa700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprState_BswM_LogEx_ComMFullCom/57 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprState_BswM_LogEx_ComMFullCom/57 (BswM_ExprState_BswM_LogEx_ComMFullCom) @070aa540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMIndicationPortTable/5 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprState_BswM_LogEx_ComMSilentCom/59 (1073741824 (estimated locally),1.00 per call) BswM_ExprState_BswM_LogEx_ComMNoCom/58 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprResult_BswM_LogEx_StartupTwoB/56 (BswM_ExprResult_BswM_LogEx_StartupTwoB) @070aa380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)BswM_UInt8RteRequestPortTable/4 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_StartupTwoA/55 (BswM_ExprResult_BswM_LogEx_StartupTwoA) @070aa1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54 (BswM_ExprResult_BswM_LogEx_RunTwoToPostRun) @070aa000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMIndicationPortTable/5 (read)BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_RunTwo/53 (BswM_ExprResult_BswM_LogEx_RunTwo) @070a4e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)BswM_UInt8RteRequestPortTable/4 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition/52 (BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition) @070a4c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PrpShutdown/51 (BswM_ExprResult_BswM_LogEx_PrpShutdown) @070a4a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_UInt8RteRequestPortTable/4 (read)BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50 (BswM_ExprResult_BswM_LogEx_PostRunToRunTwo) @070a48c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMIndicationPortTable/5 (read)BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PostRun/49 (BswM_ExprResult_BswM_LogEx_PostRun) @070a4700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PncCanStop/48 (BswM_ExprResult_BswM_LogEx_PncCanStop) @070a4540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMPncRequestPortTable/6 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PncCanStart/47 (BswM_ExprResult_BswM_LogEx_PncCanStart) @070a4380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMPncRequestPortTable/6 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PncCanFDStop/46 (BswM_ExprResult_BswM_LogEx_PncCanFDStop) @070a41c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMPncRequestPortTable/6 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_PncCanFDStart/45 (BswM_ExprResult_BswM_LogEx_PncCanFDStart) @070a4000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMPncRequestPortTable/6 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_GoOffOneB/44 (BswM_ExprResult_BswM_LogEx_GoOffOneB) @070a2e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_GoOffOneA/43 (BswM_ExprResult_BswM_LogEx_GoOffOneA) @070a2c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMGenericRequestPortTable/7 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_Dcm_Reset/42 (BswM_ExprResult_BswM_LogEx_Dcm_Reset) @070a2a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswM_UInt8RteRequestPortTable/4 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_ExprResult_BswM_LogEx_ComMSilentCom/41 (BswM_ExprResult_BswM_LogEx_ComMSilentCom) @070a28c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: BswM_ExprResult_BswM_LogEx_ComMNoCom/40 (1073741824 (estimated locally),1.00 per call) 
BswM_ExprResult_BswM_LogEx_ComMNoCom/40 (BswM_ExprResult_BswM_LogEx_ComMNoCom) @070a2700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMIndicationPortTable/5 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: BswM_ExprResult_BswM_LogEx_ComMSilentCom/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_ExprResult_BswM_LogEx_ComMFullCom/39 (BswM_ExprResult_BswM_LogEx_ComMFullCom) @070a2540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: BswMComMIndicationPortTable/5 (read)
  Referring: BswM_LogicalExprTable/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE) @070a2380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER) @070a21c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER) @070a2000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT) @0709ee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF) @0709ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD) @0709ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32 (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE) @0709e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31 (BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED) @0709e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30 (BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED) @0709e540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29 (BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED) @0709e380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28 (BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended) @0709e1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27 (BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming) @0709e000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26 (BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default) @0709ae00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM) @0709ac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM) @0709aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM) @0709a8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM) @0709a700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM) @0709a540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM) @0709a380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM) @0709a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM) @0709a000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM) @0707fe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM) @0707fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM) @0707fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14 (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM) @0707f8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) 
BswM_LT_Init/13 (BswM_LT_Init) @0707f700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_PtrModeRequestPortsTable/8 (read)BswM_InitialValueMappings/0 (read)BswM_PostBuildConfig/150 (read)BswM_Context/10 (read)BswM_NumModeRequestPortsTable/1 (read)BswMGenericRequestPortTable/7 (read)BswM_InitialValueMappings/0 (read)BswM_PostBuildConfig/150 (read)BswM_Context/10 (read)BswMGenericRequestPortTable/7 (write)BswMGenericRequestPortTable/7 (write)BswMGenericRequestPortTable/7 (write)BswMComMPncRequestPortTable/6 (read)BswM_InitialValueMappings/0 (read)BswM_PostBuildConfig/150 (read)BswM_Context/10 (read)BswMComMPncRequestPortTable/6 (write)BswMComMPncRequestPortTable/6 (write)BswMComMPncRequestPortTable/6 (write)
  Referring: 
  Availability: available
  Function flags: count:16999369 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_InitRteModeRequestPorts/12 (16999369 (estimated locally),1.00 per call) 
BswM_InitRteModeRequestPorts/12 (BswM_InitRteModeRequestPorts) @0707f2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: BswM_UInt8RteRequestPortTable/4 (read)BswM_InitialValueMappings/0 (read)BswM_PostBuildConfig/150 (read)BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (write)BswM_UInt8RteRequestPortTable/4 (write)BswM_UInt8RteRequestPortTable/4 (write)
  Referring: 
  Availability: local
  Function flags: count:178992762 (estimated locally) body local optimize_size
  Called by: BswM_LT_Init/13 (16999369 (estimated locally),1.00 per call) 
  Calls: 
BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (BswM_MRPFunc_BswM_ModeReqPort_AppState) @0707f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/10 (read)BswM_UInt8RteRequestPortTable/4 (read)BswM_Context/10 (addr)BswM_UInt8RteRequestPortTable/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_HandleRequest/149 (217325345 (estimated locally),0.20 per call) Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode/148 (217325345 (estimated locally),0.20 per call) 
BswM_Context/10 (BswM_Context) @0707d2d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: SchM_Enter_BswM_SCHM_BSWM_EXCLUSIVE_AREA/124 (addr)SchM_Exit_BswM_SCHM_BSWM_EXCLUSIVE_AREA/125 (addr)BswM_LinkTimeContext/9 (addr)
  Referring: BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37 (addr)BswM_InitRteModeRequestPorts/12 (read)BswM_Action_BswM_Act_StartInternalPDUs/113 (addr)BswM_Action_BswM_Act_PncCan_Enable/94 (addr)BswM_Action_BswM_Act_PncCan_Disable/93 (addr)BswM_Action_BswM_Act_PncCanFD_Enable/92 (addr)BswM_Action_BswM_Act_PncCanFD_Disable/91 (addr)BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37 (read)BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36 (addr)BswM_HandleStaticRequest.part.0/151 (addr)BswM_HandleStaticRequest/123 (read)BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78 (addr)BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (read)BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (addr)BswM_LT_Init/13 (read)BswM_LT_Init/13 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36 (read)BswM_LT_Init/13 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38 (addr)
  Availability: available
  Varpool flags: initialized
BswM_LinkTimeContext/9 (BswM_LinkTimeContext) @07079510
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: BswM_ExprGetState/120 (addr)BswM_ExprGetResult/121 (addr)BswM_ExecuteAction/122 (addr)BswM_HandleStaticRequest/123 (addr)BswMGenericRequestPortTable/7 (addr)BswMComMPncRequestPortTable/6 (addr)
  Referring: BswM_Context/10 (addr)
  Availability: available
  Varpool flags: initialized
BswM_PtrModeRequestPortsTable/8 (BswM_PtrModeRequestPortsTable) @070793a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: BswMComMIndicationPortTable/5 (addr)
  Referring: BswM_HandleStaticRequest.part.0/151 (read)BswM_LT_Init/13 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
BswMGenericRequestPortTable/7 (BswMGenericRequestPortTable) @07079318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: BswM_LinkTimeContext/9 (addr)BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54 (read)BswM_ExprResult_BswM_LogEx_StartupTwoA/55 (read)BswM_ExprResult_BswM_LogEx_RunTwo/53 (read)BswM_ExprState_BswM_LogEx_RunTwo/71 (read)BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition/52 (read)BswM_LT_Init/13 (write)BswM_ExprResult_BswM_LogEx_PrpShutdown/51 (read)BswM_ExprState_BswM_LogEx_PrpShutdown/69 (read)BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50 (read)BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68 (read)BswM_ExprResult_BswM_LogEx_PostRun/49 (read)BswM_LT_Init/13 (write)BswM_ExprResult_BswM_LogEx_GoOffOneB/44 (read)BswM_LT_Init/13 (write)BswM_ExprResult_BswM_LogEx_GoOffOneA/43 (read)BswM_ExprState_BswM_LogEx_GoOffOneA/61 (read)BswM_LT_Init/13 (read)BswM_ExprResult_BswM_LogEx_StartupTwoB/56 (read)
  Availability: available
  Varpool flags: initialized
BswMComMPncRequestPortTable/6 (BswMComMPncRequestPortTable) @07079168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: BswM_LinkTimeContext/9 (addr)BswM_ExprResult_BswM_LogEx_PncCanFDStop/46 (read)BswM_LT_Init/13 (write)BswM_ExprState_BswM_LogEx_PncCanStart/65 (read)BswM_ExprResult_BswM_LogEx_PncCanFDStart/45 (read)BswM_ExprState_BswM_LogEx_PncCanFDStart/63 (read)BswM_LT_Init/13 (write)BswM_ExprResult_BswM_LogEx_PncCanStop/48 (read)BswM_ExprResult_BswM_LogEx_PncCanStart/47 (read)BswM_LT_Init/13 (read)BswM_LT_Init/13 (write)
  Availability: available
  Varpool flags: initialized
BswMComMIndicationPortTable/5 (BswMComMIndicationPortTable) @0702af30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54 (read)BswM_PtrModeRequestPortsTable/8 (addr)BswM_ExprResult_BswM_LogEx_ComMNoCom/40 (read)BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50 (read)BswM_ExprResult_BswM_LogEx_ComMFullCom/39 (read)BswM_ExprState_BswM_LogEx_ComMFullCom/57 (read)BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68 (read)
  Availability: available
  Varpool flags: initialized
BswM_UInt8RteRequestPortTable/4 (BswM_UInt8RteRequestPortTable) @0702adc8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: BswM_ExprResult_BswM_LogEx_PrpShutdown/51 (read)BswM_ExprState_BswM_LogEx_PrpShutdown/69 (read)BswM_ExprResult_BswM_LogEx_Dcm_Reset/42 (read)BswM_ExprState_BswM_LogEx_Dcm_Reset/60 (read)BswM_InitRteModeRequestPorts/12 (write)BswM_ExprResult_BswM_LogEx_StartupTwoB/56 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37 (addr)BswM_ExprResult_BswM_LogEx_RunTwo/53 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37 (read)BswM_ExprState_BswM_LogEx_RunTwo/71 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36 (addr)BswM_InitRteModeRequestPorts/12 (write)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38 (addr)BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (read)BswM_MRPFunc_BswM_ModeReqPort_AppState/11 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30 (addr)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31 (read)BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33 (addr)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34 (read)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34 (addr)BswM_InitRteModeRequestPorts/12 (read)BswM_InitRteModeRequestPorts/12 (write)BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38 (read)
  Availability: available
  Varpool flags: initialized
BswM_ActionTable/3 (BswM_ActionTable) @0702a7e0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: BswM_Action_BswM_Act_AllowCom/75 (addr)BswM_Action_BswM_Act_DemDeinit/76 (addr)BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77 (addr)BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78 (addr)BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79 (addr)BswM_Action_BswM_Act_GoOffOneA/80 (addr)BswM_Action_BswM_Act_GoOffOneB/81 (addr)BswM_Action_BswM_Act_HookOnGoOffOneA/82 (addr)BswM_Action_BswM_Act_HookOnGoOffOneB/83 (addr)BswM_Action_BswM_Act_HookOnPostRun/84 (addr)BswM_Action_BswM_Act_HookOnPrpShutdown/85 (addr)BswM_Action_BswM_Act_HookOnRunTwo/86 (addr)BswM_Action_BswM_Act_HookOnStartupTwoA/87 (addr)BswM_Action_BswM_Act_HookOnStartupTwoB/88 (addr)BswM_Action_BswM_Act_InitDriverInitThree/89 (addr)BswM_Action_BswM_Act_NvMReadAll/90 (addr)BswM_Action_BswM_Act_PncCanFD_Disable/91 (addr)BswM_Action_BswM_Act_PncCanFD_Enable/92 (addr)BswM_Action_BswM_Act_PncCan_Disable/93 (addr)BswM_Action_BswM_Act_PncCan_Enable/94 (addr)BswM_Action_BswM_Act_ReqGoOffOneA/95 (addr)BswM_Action_BswM_Act_ReqPostRun/96 (addr)BswM_Action_BswM_Act_ReqPrpShutDown/97 (addr)BswM_Action_BswM_Act_ReqRunTwo/98 (addr)BswM_Action_BswM_Act_ReqStartupTwoB/99 (addr)BswM_Action_BswM_Act_Reset/100 (addr)BswM_Action_BswM_Act_RteModeReq_AppActive/101 (addr)BswM_Action_BswM_Act_RteModeReq_AppInactive/102 (addr)BswM_Action_BswM_Act_RteModeReq_AppStartup/103 (addr)BswM_Action_BswM_Act_RteStart/104 (addr)BswM_Action_BswM_Act_RteSwitch_GoOffOneA/105 (addr)BswM_Action_BswM_Act_RteSwitch_GoOffOneB/106 (addr)BswM_Action_BswM_Act_RteSwitch_PrpShutdown/107 (addr)BswM_Action_BswM_Act_RteSwitch_Run/108 (addr)BswM_Action_BswM_Act_RteSwitch_Startup/109 (addr)BswM_Action_BswM_Act_RunTwo/110 (addr)BswM_Action_BswM_Act_Sleep/111 (addr)BswM_Action_BswM_Act_StartDemOpCycleState_POWER/112 (addr)BswM_Action_BswM_Act_StartInternalPDUs/113 (addr)BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY/114 (addr)BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION/115 (addr)BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY/116 (addr)BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION/117 (addr)BswM_Action_BswM_Act_StopDemOpCycleState_POWER/118 (addr)BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY/119 (addr)
  Referring: BswM_ExecuteAction/122 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
BswM_LogicalExprTable/2 (BswM_LogicalExprTable) @0702a750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: BswM_ExprState_BswM_LogEx_ComMFullCom/57 (addr)BswM_ExprResult_BswM_LogEx_ComMFullCom/39 (addr)BswM_ExprState_BswM_LogEx_ComMNoCom/58 (addr)BswM_ExprResult_BswM_LogEx_ComMNoCom/40 (addr)BswM_ExprState_BswM_LogEx_ComMSilentCom/59 (addr)BswM_ExprResult_BswM_LogEx_ComMSilentCom/41 (addr)BswM_ExprState_BswM_LogEx_Dcm_Reset/60 (addr)BswM_ExprResult_BswM_LogEx_Dcm_Reset/42 (addr)BswM_ExprState_BswM_LogEx_GoOffOneA/61 (addr)BswM_ExprResult_BswM_LogEx_GoOffOneA/43 (addr)BswM_ExprState_BswM_LogEx_GoOffOneB/62 (addr)BswM_ExprResult_BswM_LogEx_GoOffOneB/44 (addr)BswM_ExprState_BswM_LogEx_PncCanFDStart/63 (addr)BswM_ExprResult_BswM_LogEx_PncCanFDStart/45 (addr)BswM_ExprState_BswM_LogEx_PncCanFDStop/64 (addr)BswM_ExprResult_BswM_LogEx_PncCanFDStop/46 (addr)BswM_ExprState_BswM_LogEx_PncCanStart/65 (addr)BswM_ExprResult_BswM_LogEx_PncCanStart/47 (addr)BswM_ExprState_BswM_LogEx_PncCanStop/66 (addr)BswM_ExprResult_BswM_LogEx_PncCanStop/48 (addr)BswM_ExprState_BswM_LogEx_PostRun/67 (addr)BswM_ExprResult_BswM_LogEx_PostRun/49 (addr)BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68 (addr)BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50 (addr)BswM_ExprState_BswM_LogEx_PrpShutdown/69 (addr)BswM_ExprResult_BswM_LogEx_PrpShutdown/51 (addr)BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70 (addr)BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition/52 (addr)BswM_ExprState_BswM_LogEx_RunTwo/71 (addr)BswM_ExprResult_BswM_LogEx_RunTwo/53 (addr)BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72 (addr)BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54 (addr)BswM_ExprState_BswM_LogEx_StartupTwoA/73 (addr)BswM_ExprResult_BswM_LogEx_StartupTwoA/55 (addr)BswM_ExprState_BswM_LogEx_StartupTwoB/74 (addr)BswM_ExprResult_BswM_LogEx_StartupTwoB/56 (addr)
  Referring: BswM_ExprGetState/120 (read)BswM_ExprGetResult/121 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
BswM_NumModeRequestPortsTable/1 (BswM_NumModeRequestPortsTable) @0702a6c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: BswM_HandleStaticRequest.part.0/151 (read)BswM_LT_Init/13 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
BswM_InitialValueMappings/0 (BswM_InitialValueMappings) @0702a1f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: BswM_InitRteModeRequestPorts/12 (read)BswM_LT_Init/13 (read)BswM_LT_Init/13 (read)BswM_LT_Init/13 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function BswM_ExprResult_BswM_LogEx_ComMFullCom (BswM_ExprResult_BswM_LogEx_ComMFullCom, funcdef_no=28, decl_uid=10017, cgraph_uid=29, symbol_order=39)

Modification phase of node BswM_ExprResult_BswM_LogEx_ComMFullCom/39
BswM_ExprResult_BswM_LogEx_ComMFullCom ()
{
  unsigned char _1;
  BswMResultType iftmp.34_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMIndicationPortTable[0].mode;
  if (_1 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.34_2 = PHI <1(2), 0(3)>
  return iftmp.34_2;

}



;; Function BswM_ExprResult_BswM_LogEx_ComMNoCom (BswM_ExprResult_BswM_LogEx_ComMNoCom, funcdef_no=29, decl_uid=10019, cgraph_uid=30, symbol_order=40)

Modification phase of node BswM_ExprResult_BswM_LogEx_ComMNoCom/40
BswM_ExprResult_BswM_LogEx_ComMNoCom ()
{
  unsigned char _1;
  BswMResultType iftmp.32_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMIndicationPortTable[0].mode;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.32_2 = PHI <1(2), 0(3)>
  return iftmp.32_2;

}



;; Function BswM_ExprResult_BswM_LogEx_ComMSilentCom (BswM_ExprResult_BswM_LogEx_ComMSilentCom, funcdef_no=115, decl_uid=10021, cgraph_uid=31, symbol_order=41)

Modification phase of node BswM_ExprResult_BswM_LogEx_ComMSilentCom/41
BswM_ExprResult_BswM_LogEx_ComMSilentCom ()
{
  BswMResultType retval.164;

  <bb 2> [local count: 1073741824]:
  retval.164_2 = BswM_ExprResult_BswM_LogEx_ComMNoCom (); [tail call]
  return retval.164_2;

}



;; Function BswM_ExprResult_BswM_LogEx_Dcm_Reset (BswM_ExprResult_BswM_LogEx_Dcm_Reset, funcdef_no=31, decl_uid=10023, cgraph_uid=32, symbol_order=42)

Modification phase of node BswM_ExprResult_BswM_LogEx_Dcm_Reset/42
BswM_ExprResult_BswM_LogEx_Dcm_Reset ()
{
  unsigned char _1;
  BswMResultType iftmp.28_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_UInt8RteRequestPortTable[4].mode;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.28_2 = PHI <1(2), 0(3)>
  return iftmp.28_2;

}



;; Function BswM_ExprResult_BswM_LogEx_GoOffOneA (BswM_ExprResult_BswM_LogEx_GoOffOneA, funcdef_no=32, decl_uid=10025, cgraph_uid=33, symbol_order=43)

Modification phase of node BswM_ExprResult_BswM_LogEx_GoOffOneA/43
BswM_ExprResult_BswM_LogEx_GoOffOneA ()
{
  short unsigned int _1;
  BswMResultType iftmp.26_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.26_2 = PHI <1(2), 0(3)>
  return iftmp.26_2;

}



;; Function BswM_ExprResult_BswM_LogEx_GoOffOneB (BswM_ExprResult_BswM_LogEx_GoOffOneB, funcdef_no=33, decl_uid=10027, cgraph_uid=34, symbol_order=44)

Modification phase of node BswM_ExprResult_BswM_LogEx_GoOffOneB/44
BswM_ExprResult_BswM_LogEx_GoOffOneB ()
{
  short unsigned int _1;
  BswMResultType iftmp.24_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  if (_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.24_2 = PHI <1(2), 0(3)>
  return iftmp.24_2;

}



;; Function BswM_ExprResult_BswM_LogEx_PncCanFDStart (BswM_ExprResult_BswM_LogEx_PncCanFDStart, funcdef_no=34, decl_uid=10029, cgraph_uid=35, symbol_order=45)

Modification phase of node BswM_ExprResult_BswM_LogEx_PncCanFDStart/45
BswM_ExprResult_BswM_LogEx_PncCanFDStart ()
{
  unsigned char _1;
  BswMResultType iftmp.22_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMPncRequestPortTable[1].mode;
  if (_1 == 4)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  if (_1 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 467721939]:

  <bb 5> [local count: 1073741824]:
  # iftmp.22_2 = PHI <1(3), 0(4), 1(2)>
  return iftmp.22_2;

}



;; Function BswM_ExprResult_BswM_LogEx_PncCanFDStop (BswM_ExprResult_BswM_LogEx_PncCanFDStop, funcdef_no=35, decl_uid=10031, cgraph_uid=36, symbol_order=46)

Modification phase of node BswM_ExprResult_BswM_LogEx_PncCanFDStop/46
BswM_ExprResult_BswM_LogEx_PncCanFDStop ()
{
  unsigned char _1;
  BswMResultType iftmp.20_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMPncRequestPortTable[1].mode;
  if (_1 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.20_2 = PHI <1(2), 0(3)>
  return iftmp.20_2;

}



;; Function BswM_ExprResult_BswM_LogEx_PncCanStart (BswM_ExprResult_BswM_LogEx_PncCanStart, funcdef_no=36, decl_uid=10033, cgraph_uid=37, symbol_order=47)

Modification phase of node BswM_ExprResult_BswM_LogEx_PncCanStart/47
BswM_ExprResult_BswM_LogEx_PncCanStart ()
{
  unsigned char _1;
  BswMResultType iftmp.18_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMPncRequestPortTable[0].mode;
  if (_1 == 4)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  if (_1 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 467721939]:

  <bb 5> [local count: 1073741824]:
  # iftmp.18_2 = PHI <1(3), 0(4), 1(2)>
  return iftmp.18_2;

}



;; Function BswM_ExprResult_BswM_LogEx_PncCanStop (BswM_ExprResult_BswM_LogEx_PncCanStop, funcdef_no=37, decl_uid=10035, cgraph_uid=38, symbol_order=48)

Modification phase of node BswM_ExprResult_BswM_LogEx_PncCanStop/48
BswM_ExprResult_BswM_LogEx_PncCanStop ()
{
  unsigned char _1;
  BswMResultType iftmp.16_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMPncRequestPortTable[0].mode;
  if (_1 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.16_2 = PHI <1(2), 0(3)>
  return iftmp.16_2;

}



;; Function BswM_ExprResult_BswM_LogEx_PostRun (BswM_ExprResult_BswM_LogEx_PostRun, funcdef_no=38, decl_uid=10037, cgraph_uid=39, symbol_order=49)

Modification phase of node BswM_ExprResult_BswM_LogEx_PostRun/49
BswM_ExprResult_BswM_LogEx_PostRun ()
{
  short unsigned int _1;
  BswMResultType iftmp.14_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  if (_1 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.14_2 = PHI <1(2), 0(3)>
  return iftmp.14_2;

}



;; Function BswM_ExprResult_BswM_LogEx_PostRunToRunTwo (BswM_ExprResult_BswM_LogEx_PostRunToRunTwo, funcdef_no=39, decl_uid=10039, cgraph_uid=40, symbol_order=50)

Modification phase of node BswM_ExprResult_BswM_LogEx_PostRunToRunTwo/50
BswM_ExprResult_BswM_LogEx_PostRunToRunTwo ()
{
  unsigned char _1;
  short unsigned int _2;
  BswMResultType iftmp.12_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMIndicationPortTable[0].mode;
  if (_1 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswMGenericRequestPortTable[0].mode;
  if (_2 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 949617270]:

  <bb 5> [local count: 1073741824]:
  # iftmp.12_3 = PHI <1(3), 0(4)>
  return iftmp.12_3;

}



;; Function BswM_ExprResult_BswM_LogEx_PrpShutdown (BswM_ExprResult_BswM_LogEx_PrpShutdown, funcdef_no=40, decl_uid=10041, cgraph_uid=41, symbol_order=51)

Modification phase of node BswM_ExprResult_BswM_LogEx_PrpShutdown/51
BswM_ExprResult_BswM_LogEx_PrpShutdown ()
{
  unsigned char _1;
  short unsigned int _2;
  short unsigned int _3;
  BswMResultType iftmp.10_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_UInt8RteRequestPortTable[0].mode;
  if (_1 == 3)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswMGenericRequestPortTable[0].mode;
  _3 = _2 + 65534;
  if (_3 <= 1)
    goto <bb 5>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 4> [local count: 924062215]:

  <bb 5> [local count: 1073741824]:
  # iftmp.10_4 = PHI <1(3), 0(4)>
  return iftmp.10_4;

}



;; Function BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition (BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition, funcdef_no=41, decl_uid=10043, cgraph_uid=42, symbol_order=52)

Modification phase of node BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition/52
BswM_ExprResult_BswM_LogEx_PrpShutdown_Transition ()
{
  short unsigned int _1;
  short unsigned int _2;
  BswMResultType iftmp.8_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  _2 = _1 + 65534;
  if (_2 <= 1)
    goto <bb 4>; [41.00%]
  else
    goto <bb 3>; [59.00%]

  <bb 3> [local count: 633507677]:

  <bb 4> [local count: 1073741824]:
  # iftmp.8_3 = PHI <1(2), 0(3)>
  return iftmp.8_3;

}



;; Function BswM_ExprResult_BswM_LogEx_RunTwo (BswM_ExprResult_BswM_LogEx_RunTwo, funcdef_no=42, decl_uid=10045, cgraph_uid=43, symbol_order=53)

Modification phase of node BswM_ExprResult_BswM_LogEx_RunTwo/53
BswM_ExprResult_BswM_LogEx_RunTwo ()
{
  short unsigned int _1;
  unsigned char _2;
  BswMResultType iftmp.6_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  if (_1 == 4)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswM_UInt8RteRequestPortTable[0].mode;
  if (_2 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 949617270]:

  <bb 5> [local count: 1073741824]:
  # iftmp.6_3 = PHI <1(3), 0(4)>
  return iftmp.6_3;

}



;; Function BswM_ExprResult_BswM_LogEx_RunTwoToPostRun (BswM_ExprResult_BswM_LogEx_RunTwoToPostRun, funcdef_no=43, decl_uid=10047, cgraph_uid=44, symbol_order=54)

Modification phase of node BswM_ExprResult_BswM_LogEx_RunTwoToPostRun/54
BswM_ExprResult_BswM_LogEx_RunTwoToPostRun ()
{
  unsigned char _1;
  short unsigned int _2;
  BswMResultType iftmp.4_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMIndicationPortTable[0].mode;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = BswMGenericRequestPortTable[0].mode;
  if (_2 == 4)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 891205715]:

  <bb 5> [local count: 1073741824]:
  # iftmp.4_3 = PHI <1(3), 0(4)>
  return iftmp.4_3;

}



;; Function BswM_ExprResult_BswM_LogEx_StartupTwoA (BswM_ExprResult_BswM_LogEx_StartupTwoA, funcdef_no=44, decl_uid=10049, cgraph_uid=45, symbol_order=55)

Modification phase of node BswM_ExprResult_BswM_LogEx_StartupTwoA/55
BswM_ExprResult_BswM_LogEx_StartupTwoA ()
{
  short unsigned int _1;
  BswMResultType iftmp.2_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  if (_1 == 6)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.2_2 = PHI <1(2), 0(3)>
  return iftmp.2_2;

}



;; Function BswM_ExprResult_BswM_LogEx_StartupTwoB (BswM_ExprResult_BswM_LogEx_StartupTwoB, funcdef_no=45, decl_uid=10051, cgraph_uid=46, symbol_order=56)

Modification phase of node BswM_ExprResult_BswM_LogEx_StartupTwoB/56
BswM_ExprResult_BswM_LogEx_StartupTwoB ()
{
  short unsigned int _1;
  unsigned char _2;
  BswMResultType iftmp.0_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].mode;
  if (_1 == 7)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswM_UInt8RteRequestPortTable[0].mode;
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 949617270]:

  <bb 5> [local count: 1073741824]:
  # iftmp.0_3 = PHI <1(3), 0(4)>
  return iftmp.0_3;

}



;; Function BswM_ExprState_BswM_LogEx_ComMFullCom (BswM_ExprState_BswM_LogEx_ComMFullCom, funcdef_no=46, decl_uid=10053, cgraph_uid=47, symbol_order=57)

Modification phase of node BswM_ExprState_BswM_LogEx_ComMFullCom/57
BswM_ExprState_BswM_LogEx_ComMFullCom ()
{
  unsigned char _1;
  boolean iftmp.35_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMIndicationPortTable[0].base.isDefined;
  if (_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.35_2 = PHI <1(2), 0(3)>
  return iftmp.35_2;

}



;; Function BswM_ExprState_BswM_LogEx_ComMNoCom (BswM_ExprState_BswM_LogEx_ComMNoCom, funcdef_no=117, decl_uid=10055, cgraph_uid=48, symbol_order=58)

Modification phase of node BswM_ExprState_BswM_LogEx_ComMNoCom/58
BswM_ExprState_BswM_LogEx_ComMNoCom ()
{
  boolean retval.165;

  <bb 2> [local count: 1073741824]:
  retval.165_2 = BswM_ExprState_BswM_LogEx_ComMFullCom (); [tail call]
  return retval.165_2;

}



;; Function BswM_ExprState_BswM_LogEx_ComMSilentCom (BswM_ExprState_BswM_LogEx_ComMSilentCom, funcdef_no=119, decl_uid=10057, cgraph_uid=49, symbol_order=59)

Modification phase of node BswM_ExprState_BswM_LogEx_ComMSilentCom/59
BswM_ExprState_BswM_LogEx_ComMSilentCom ()
{
  boolean retval.166;

  <bb 2> [local count: 1073741824]:
  retval.166_2 = BswM_ExprState_BswM_LogEx_ComMFullCom (); [tail call]
  return retval.166_2;

}



;; Function BswM_ExprState_BswM_LogEx_Dcm_Reset (BswM_ExprState_BswM_LogEx_Dcm_Reset, funcdef_no=49, decl_uid=10059, cgraph_uid=50, symbol_order=60)

Modification phase of node BswM_ExprState_BswM_LogEx_Dcm_Reset/60
BswM_ExprState_BswM_LogEx_Dcm_Reset ()
{
  unsigned char _1;
  boolean iftmp.29_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_UInt8RteRequestPortTable[4].base.isDefined;
  if (_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.29_2 = PHI <1(2), 0(3)>
  return iftmp.29_2;

}



;; Function BswM_ExprState_BswM_LogEx_GoOffOneA (BswM_ExprState_BswM_LogEx_GoOffOneA, funcdef_no=50, decl_uid=10061, cgraph_uid=51, symbol_order=61)

Modification phase of node BswM_ExprState_BswM_LogEx_GoOffOneA/61
BswM_ExprState_BswM_LogEx_GoOffOneA ()
{
  unsigned char _1;
  boolean iftmp.27_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].base.isDefined;
  if (_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.27_2 = PHI <1(2), 0(3)>
  return iftmp.27_2;

}



;; Function BswM_ExprState_BswM_LogEx_GoOffOneB (BswM_ExprState_BswM_LogEx_GoOffOneB, funcdef_no=121, decl_uid=10063, cgraph_uid=52, symbol_order=62)

Modification phase of node BswM_ExprState_BswM_LogEx_GoOffOneB/62
BswM_ExprState_BswM_LogEx_GoOffOneB ()
{
  boolean retval.167;

  <bb 2> [local count: 1073741824]:
  retval.167_2 = BswM_ExprState_BswM_LogEx_GoOffOneA (); [tail call]
  return retval.167_2;

}



;; Function BswM_ExprState_BswM_LogEx_PncCanFDStart (BswM_ExprState_BswM_LogEx_PncCanFDStart, funcdef_no=52, decl_uid=10065, cgraph_uid=53, symbol_order=63)

Modification phase of node BswM_ExprState_BswM_LogEx_PncCanFDStart/63
BswM_ExprState_BswM_LogEx_PncCanFDStart ()
{
  unsigned char _1;
  boolean iftmp.23_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMPncRequestPortTable[1].base.isDefined;
  if (_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.23_2 = PHI <1(2), 0(3)>
  return iftmp.23_2;

}



;; Function BswM_ExprState_BswM_LogEx_PncCanFDStop (BswM_ExprState_BswM_LogEx_PncCanFDStop, funcdef_no=129, decl_uid=10067, cgraph_uid=54, symbol_order=64)

Modification phase of node BswM_ExprState_BswM_LogEx_PncCanFDStop/64
BswM_ExprState_BswM_LogEx_PncCanFDStop ()
{
  boolean retval.171;

  <bb 2> [local count: 1073741824]:
  retval.171_2 = BswM_ExprState_BswM_LogEx_PncCanFDStart (); [tail call]
  return retval.171_2;

}



;; Function BswM_ExprState_BswM_LogEx_PncCanStart (BswM_ExprState_BswM_LogEx_PncCanStart, funcdef_no=54, decl_uid=10069, cgraph_uid=55, symbol_order=65)

Modification phase of node BswM_ExprState_BswM_LogEx_PncCanStart/65
BswM_ExprState_BswM_LogEx_PncCanStart ()
{
  unsigned char _1;
  boolean iftmp.19_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMPncRequestPortTable[0].base.isDefined;
  if (_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.19_2 = PHI <1(2), 0(3)>
  return iftmp.19_2;

}



;; Function BswM_ExprState_BswM_LogEx_PncCanStop (BswM_ExprState_BswM_LogEx_PncCanStop, funcdef_no=131, decl_uid=10071, cgraph_uid=56, symbol_order=66)

Modification phase of node BswM_ExprState_BswM_LogEx_PncCanStop/66
BswM_ExprState_BswM_LogEx_PncCanStop ()
{
  boolean retval.172;

  <bb 2> [local count: 1073741824]:
  retval.172_2 = BswM_ExprState_BswM_LogEx_PncCanStart (); [tail call]
  return retval.172_2;

}



;; Function BswM_ExprState_BswM_LogEx_PostRun (BswM_ExprState_BswM_LogEx_PostRun, funcdef_no=123, decl_uid=10073, cgraph_uid=57, symbol_order=67)

Modification phase of node BswM_ExprState_BswM_LogEx_PostRun/67
BswM_ExprState_BswM_LogEx_PostRun ()
{
  boolean retval.168;

  <bb 2> [local count: 1073741824]:
  retval.168_2 = BswM_ExprState_BswM_LogEx_GoOffOneA (); [tail call]
  return retval.168_2;

}



;; Function BswM_ExprState_BswM_LogEx_PostRunToRunTwo (BswM_ExprState_BswM_LogEx_PostRunToRunTwo, funcdef_no=57, decl_uid=10075, cgraph_uid=58, symbol_order=68)

Modification phase of node BswM_ExprState_BswM_LogEx_PostRunToRunTwo/68
BswM_ExprState_BswM_LogEx_PostRunToRunTwo ()
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.13_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMComMIndicationPortTable[0].base.isDefined;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswMGenericRequestPortTable[0].base.isDefined;
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 949617270]:

  <bb 5> [local count: 1073741824]:
  # iftmp.13_3 = PHI <1(3), 0(4)>
  return iftmp.13_3;

}



;; Function BswM_ExprState_BswM_LogEx_PrpShutdown (BswM_ExprState_BswM_LogEx_PrpShutdown, funcdef_no=58, decl_uid=10077, cgraph_uid=59, symbol_order=69)

Modification phase of node BswM_ExprState_BswM_LogEx_PrpShutdown/69
BswM_ExprState_BswM_LogEx_PrpShutdown ()
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.11_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_UInt8RteRequestPortTable[0].base.isDefined;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswMGenericRequestPortTable[0].base.isDefined;
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 949617270]:

  <bb 5> [local count: 1073741824]:
  # iftmp.11_3 = PHI <1(3), 0(4)>
  return iftmp.11_3;

}



;; Function BswM_ExprState_BswM_LogEx_PrpShutdown_Transition (BswM_ExprState_BswM_LogEx_PrpShutdown_Transition, funcdef_no=125, decl_uid=10079, cgraph_uid=60, symbol_order=70)

Modification phase of node BswM_ExprState_BswM_LogEx_PrpShutdown_Transition/70
BswM_ExprState_BswM_LogEx_PrpShutdown_Transition ()
{
  boolean retval.169;

  <bb 2> [local count: 1073741824]:
  retval.169_2 = BswM_ExprState_BswM_LogEx_GoOffOneA (); [tail call]
  return retval.169_2;

}



;; Function BswM_ExprState_BswM_LogEx_RunTwo (BswM_ExprState_BswM_LogEx_RunTwo, funcdef_no=60, decl_uid=10081, cgraph_uid=61, symbol_order=71)

Modification phase of node BswM_ExprState_BswM_LogEx_RunTwo/71
BswM_ExprState_BswM_LogEx_RunTwo ()
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.7_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswMGenericRequestPortTable[0].base.isDefined;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = BswM_UInt8RteRequestPortTable[0].base.isDefined;
  if (_2 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 949617270]:

  <bb 5> [local count: 1073741824]:
  # iftmp.7_3 = PHI <1(3), 0(4)>
  return iftmp.7_3;

}



;; Function BswM_ExprState_BswM_LogEx_RunTwoToPostRun (BswM_ExprState_BswM_LogEx_RunTwoToPostRun, funcdef_no=133, decl_uid=10083, cgraph_uid=62, symbol_order=72)

Modification phase of node BswM_ExprState_BswM_LogEx_RunTwoToPostRun/72
BswM_ExprState_BswM_LogEx_RunTwoToPostRun ()
{
  boolean retval.173;

  <bb 2> [local count: 1073741824]:
  retval.173_2 = BswM_ExprState_BswM_LogEx_PostRunToRunTwo (); [tail call]
  return retval.173_2;

}



;; Function BswM_ExprState_BswM_LogEx_StartupTwoA (BswM_ExprState_BswM_LogEx_StartupTwoA, funcdef_no=127, decl_uid=10085, cgraph_uid=63, symbol_order=73)

Modification phase of node BswM_ExprState_BswM_LogEx_StartupTwoA/73
BswM_ExprState_BswM_LogEx_StartupTwoA ()
{
  boolean retval.170;

  <bb 2> [local count: 1073741824]:
  retval.170_2 = BswM_ExprState_BswM_LogEx_GoOffOneA (); [tail call]
  return retval.170_2;

}



;; Function BswM_ExprState_BswM_LogEx_StartupTwoB (BswM_ExprState_BswM_LogEx_StartupTwoB, funcdef_no=135, decl_uid=10087, cgraph_uid=64, symbol_order=74)

Modification phase of node BswM_ExprState_BswM_LogEx_StartupTwoB/74
BswM_ExprState_BswM_LogEx_StartupTwoB ()
{
  boolean retval.174;

  <bb 2> [local count: 1073741824]:
  retval.174_2 = BswM_ExprState_BswM_LogEx_RunTwo (); [tail call]
  return retval.174_2;

}



;; Function BswM_ExprGetState (BswM_ExprGetState, funcdef_no=109, decl_uid=10179, cgraph_uid=110, symbol_order=120)

Modification phase of node BswM_ExprGetState/120
BswM_ExprGetState (uint16 exprIndex)
{
  int _1;
  boolean (*<Tc38>) (void) _2;
  BswMResultType _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) exprIndex_3(D);
  _2 = BswM_LogicalExprTable[_1].GetState;
  _6 = _2 ();
  return _6;

}



;; Function BswM_ExprGetResult (BswM_ExprGetResult, funcdef_no=110, decl_uid=10181, cgraph_uid=111, symbol_order=121)

Modification phase of node BswM_ExprGetResult/121
BswM_ExprGetResult (uint16 exprIndex)
{
  int _1;
  BswMResultType (*<Tc35>) (void) _2;
  BswMResultType _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) exprIndex_3(D);
  _2 = BswM_LogicalExprTable[_1].GetResult;
  _6 = _2 ();
  return _6;

}



;; Function BswM_ExecuteAction (BswM_ExecuteAction, funcdef_no=111, decl_uid=10183, cgraph_uid=112, symbol_order=122)

Modification phase of node BswM_ExecuteAction/122
BswM_ExecuteAction (uint16 actionIndex)
{
  int _1;
  Std_ReturnType (*<Tb32>) (void) _2;
  Std_ReturnType _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) actionIndex_3(D);
  _2 = BswM_ActionTable[_1];
  _6 = _2 ();
  return _6;

}



;; Function BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY (BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY, funcdef_no=108, decl_uid=10177, cgraph_uid=109, symbol_order=119)

Modification phase of node BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY/119
BswM_Action_BswM_Act_StopDemOpCycleState_OBD_DCY ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetOperationCycleState (1, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_StopDemOpCycleState_POWER (BswM_Action_BswM_Act_StopDemOpCycleState_POWER, funcdef_no=107, decl_uid=10175, cgraph_uid=108, symbol_order=118)

Modification phase of node BswM_Action_BswM_Act_StopDemOpCycleState_POWER/118
BswM_Action_BswM_Act_StopDemOpCycleState_POWER ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetOperationCycleState (2, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION (BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION, funcdef_no=106, decl_uid=10173, cgraph_uid=107, symbol_order=117)

Modification phase of node BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION/117
BswM_Action_BswM_Act_StopDemOpCycleState_IGNITION ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetOperationCycleState (0, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY (BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY, funcdef_no=105, decl_uid=10171, cgraph_uid=106, symbol_order=116)

Modification phase of node BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY/116
BswM_Action_BswM_Act_StartDemOpCycleState_OBD_DCY ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetOperationCycleState (1, 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION (BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION, funcdef_no=104, decl_uid=10169, cgraph_uid=105, symbol_order=115)

Modification phase of node BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION/115
BswM_Action_BswM_Act_StartDemOpCycleState_IGNITION ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetOperationCycleState (0, 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_StartDemOpCycleState_POWER (BswM_Action_BswM_Act_StartDemOpCycleState_POWER, funcdef_no=101, decl_uid=10163, cgraph_uid=102, symbol_order=112)

Modification phase of node BswM_Action_BswM_Act_StartDemOpCycleState_POWER/112
BswM_Action_BswM_Act_StartDemOpCycleState_POWER ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetOperationCycleState (2, 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY (BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY, funcdef_no=103, decl_uid=10167, cgraph_uid=104, symbol_order=114)

Modification phase of node BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY/114
BswM_Action_BswM_Act_QualifyDemOpCycle_OBD_DCY ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SetCycleQualified (1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_StartInternalPDUs (BswM_Action_BswM_Act_StartInternalPDUs, funcdef_no=102, decl_uid=10165, cgraph_uid=103, symbol_order=113)

Modification phase of node BswM_Action_BswM_Act_StartInternalPDUs/113
BswM_Action_BswM_Act_StartInternalPDUs ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 7);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_PncCan_Enable (BswM_Action_BswM_Act_PncCan_Enable, funcdef_no=83, decl_uid=10127, cgraph_uid=84, symbol_order=94)

Modification phase of node BswM_Action_BswM_Act_PncCan_Enable/94
BswM_Action_BswM_Act_PncCan_Enable ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 6);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_PncCan_Disable (BswM_Action_BswM_Act_PncCan_Disable, funcdef_no=82, decl_uid=10125, cgraph_uid=83, symbol_order=93)

Modification phase of node BswM_Action_BswM_Act_PncCan_Disable/93
BswM_Action_BswM_Act_PncCan_Disable ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 5);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_PncCanFD_Enable (BswM_Action_BswM_Act_PncCanFD_Enable, funcdef_no=81, decl_uid=10123, cgraph_uid=82, symbol_order=92)

Modification phase of node BswM_Action_BswM_Act_PncCanFD_Enable/92
BswM_Action_BswM_Act_PncCanFD_Enable ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 4);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_PncCanFD_Disable (BswM_Action_BswM_Act_PncCanFD_Disable, funcdef_no=80, decl_uid=10121, cgraph_uid=81, symbol_order=91)

Modification phase of node BswM_Action_BswM_Act_PncCanFD_Disable/91
BswM_Action_BswM_Act_PncCanFD_Disable ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 3);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can (BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can, funcdef_no=68, decl_uid=10097, cgraph_uid=69, symbol_order=79)

Modification phase of node BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can/79
BswM_Action_BswM_Act_Enable_Rx_Enable_Tx_Can ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 2);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can (BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can, funcdef_no=67, decl_uid=10095, cgraph_uid=68, symbol_order=78)

Modification phase of node BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can/78
BswM_Action_BswM_Act_Enable_Rx_Disable_Tx_Can ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can (BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can, funcdef_no=66, decl_uid=10093, cgraph_uid=67, symbol_order=77)

Modification phase of node BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can/77
BswM_Action_BswM_Act_Disable_Rx_Disable_Tx_Can ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_ExecutePduGroupSwitchAction (&BswM_Context, 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_Sleep (BswM_Action_BswM_Act_Sleep, funcdef_no=100, decl_uid=10161, cgraph_uid=101, symbol_order=111)

Modification phase of node BswM_Action_BswM_Act_Sleep/111
BswM_Action_BswM_Act_Sleep ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = EcuM_ASR40_SelectShutdownTarget (80, 0);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_Reset (BswM_Action_BswM_Act_Reset, funcdef_no=89, decl_uid=10139, cgraph_uid=90, symbol_order=100)

Modification phase of node BswM_Action_BswM_Act_Reset/100
BswM_Action_BswM_Act_Reset ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = EcuM_ASR40_SelectShutdownTarget (144, 0);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RunTwo (BswM_Action_BswM_Act_RunTwo, funcdef_no=99, decl_uid=10159, cgraph_uid=100, symbol_order=110)

Modification phase of node BswM_Action_BswM_Act_RunTwo/110
BswM_Action_BswM_Act_RunTwo ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_RunTwo ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_RteSwitch_Startup (BswM_Action_BswM_Act_RteSwitch_Startup, funcdef_no=98, decl_uid=10157, cgraph_uid=99, symbol_order=109)

Modification phase of node BswM_Action_BswM_Act_RteSwitch_Startup/109
BswM_Action_BswM_Act_RteSwitch_Startup ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode (7);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteSwitch_Run (BswM_Action_BswM_Act_RteSwitch_Run, funcdef_no=97, decl_uid=10155, cgraph_uid=98, symbol_order=108)

Modification phase of node BswM_Action_BswM_Act_RteSwitch_Run/108
BswM_Action_BswM_Act_RteSwitch_Run ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode (4);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteSwitch_PrpShutdown (BswM_Action_BswM_Act_RteSwitch_PrpShutdown, funcdef_no=96, decl_uid=10153, cgraph_uid=97, symbol_order=107)

Modification phase of node BswM_Action_BswM_Act_RteSwitch_PrpShutdown/107
BswM_Action_BswM_Act_RteSwitch_PrpShutdown ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode (3);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteSwitch_GoOffOneB (BswM_Action_BswM_Act_RteSwitch_GoOffOneB, funcdef_no=95, decl_uid=10151, cgraph_uid=96, symbol_order=106)

Modification phase of node BswM_Action_BswM_Act_RteSwitch_GoOffOneB/106
BswM_Action_BswM_Act_RteSwitch_GoOffOneB ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode (1);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteSwitch_GoOffOneA (BswM_Action_BswM_Act_RteSwitch_GoOffOneA, funcdef_no=94, decl_uid=10149, cgraph_uid=95, symbol_order=105)

Modification phase of node BswM_Action_BswM_Act_RteSwitch_GoOffOneA/105
BswM_Action_BswM_Act_RteSwitch_GoOffOneA ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Switch_BswM_BswM_ModeSwitchPort_BswM_SwitchPort_Rte_CurrentMode (0);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteStart (BswM_Action_BswM_Act_RteStart, funcdef_no=93, decl_uid=10147, cgraph_uid=94, symbol_order=104)

Modification phase of node BswM_Action_BswM_Act_RteStart/104
BswM_Action_BswM_Act_RteStart ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Rte_Start ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_RteModeReq_AppStartup (BswM_Action_BswM_Act_RteModeReq_AppStartup, funcdef_no=92, decl_uid=10145, cgraph_uid=93, symbol_order=103)

Modification phase of node BswM_Action_BswM_Act_RteModeReq_AppStartup/103
BswM_Action_BswM_Act_RteModeReq_AppStartup ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode (1);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteModeReq_AppInactive (BswM_Action_BswM_Act_RteModeReq_AppInactive, funcdef_no=91, decl_uid=10143, cgraph_uid=92, symbol_order=102)

Modification phase of node BswM_Action_BswM_Act_RteModeReq_AppInactive/102
BswM_Action_BswM_Act_RteModeReq_AppInactive ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode (3);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_RteModeReq_AppActive (BswM_Action_BswM_Act_RteModeReq_AppActive, funcdef_no=90, decl_uid=10141, cgraph_uid=91, symbol_order=101)

Modification phase of node BswM_Action_BswM_Act_RteModeReq_AppActive/101
BswM_Action_BswM_Act_RteModeReq_AppActive ()
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_3 = Rte_Write_BswM_BswM_ModeRequestPort_BswMRteModeRequestPort_AppStateMode_If_AppStateRequestMode (2);
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function BswM_Action_BswM_Act_ReqStartupTwoB (BswM_Action_BswM_Act_ReqStartupTwoB, funcdef_no=88, decl_uid=10137, cgraph_uid=89, symbol_order=99)

Modification phase of node BswM_Action_BswM_Act_ReqStartupTwoB/99
BswM_Action_BswM_Act_ReqStartupTwoB ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 7);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_ReqRunTwo (BswM_Action_BswM_Act_ReqRunTwo, funcdef_no=87, decl_uid=10135, cgraph_uid=88, symbol_order=98)

Modification phase of node BswM_Action_BswM_Act_ReqRunTwo/98
BswM_Action_BswM_Act_ReqRunTwo ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 4);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_ReqPrpShutDown (BswM_Action_BswM_Act_ReqPrpShutDown, funcdef_no=86, decl_uid=10133, cgraph_uid=87, symbol_order=97)

Modification phase of node BswM_Action_BswM_Act_ReqPrpShutDown/97
BswM_Action_BswM_Act_ReqPrpShutDown ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 3);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_ReqPostRun (BswM_Action_BswM_Act_ReqPostRun, funcdef_no=85, decl_uid=10131, cgraph_uid=86, symbol_order=96)

Modification phase of node BswM_Action_BswM_Act_ReqPostRun/96
BswM_Action_BswM_Act_ReqPostRun ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 2);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_ReqGoOffOneA (BswM_Action_BswM_Act_ReqGoOffOneA, funcdef_no=84, decl_uid=10129, cgraph_uid=85, symbol_order=95)

Modification phase of node BswM_Action_BswM_Act_ReqGoOffOneA/95
BswM_Action_BswM_Act_ReqGoOffOneA ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_NvMReadAll (BswM_Action_BswM_Act_NvMReadAll, funcdef_no=79, decl_uid=10119, cgraph_uid=80, symbol_order=90)

Modification phase of node BswM_Action_BswM_Act_NvMReadAll/90
BswM_Action_BswM_Act_NvMReadAll ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_InitNvMReadAll ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_InitDriverInitThree (BswM_Action_BswM_Act_InitDriverInitThree, funcdef_no=78, decl_uid=10117, cgraph_uid=79, symbol_order=89)

Modification phase of node BswM_Action_BswM_Act_InitDriverInitThree/89
BswM_Action_BswM_Act_InitDriverInitThree ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_DriverInitThree ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnStartupTwoB (BswM_Action_BswM_Act_HookOnStartupTwoB, funcdef_no=77, decl_uid=10115, cgraph_uid=78, symbol_order=88)

Modification phase of node BswM_Action_BswM_Act_HookOnStartupTwoB/88
BswM_Action_BswM_Act_HookOnStartupTwoB ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnStartupTwoB ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnStartupTwoA (BswM_Action_BswM_Act_HookOnStartupTwoA, funcdef_no=76, decl_uid=10113, cgraph_uid=77, symbol_order=87)

Modification phase of node BswM_Action_BswM_Act_HookOnStartupTwoA/87
BswM_Action_BswM_Act_HookOnStartupTwoA ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnStartupTwoA ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnRunTwo (BswM_Action_BswM_Act_HookOnRunTwo, funcdef_no=75, decl_uid=10111, cgraph_uid=76, symbol_order=86)

Modification phase of node BswM_Action_BswM_Act_HookOnRunTwo/86
BswM_Action_BswM_Act_HookOnRunTwo ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnRunTwo ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnPrpShutdown (BswM_Action_BswM_Act_HookOnPrpShutdown, funcdef_no=74, decl_uid=10109, cgraph_uid=75, symbol_order=85)

Modification phase of node BswM_Action_BswM_Act_HookOnPrpShutdown/85
BswM_Action_BswM_Act_HookOnPrpShutdown ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnPrpShutdown ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnPostRun (BswM_Action_BswM_Act_HookOnPostRun, funcdef_no=73, decl_uid=10107, cgraph_uid=74, symbol_order=84)

Modification phase of node BswM_Action_BswM_Act_HookOnPostRun/84
BswM_Action_BswM_Act_HookOnPostRun ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnPostRun ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnGoOffOneB (BswM_Action_BswM_Act_HookOnGoOffOneB, funcdef_no=72, decl_uid=10105, cgraph_uid=73, symbol_order=83)

Modification phase of node BswM_Action_BswM_Act_HookOnGoOffOneB/83
BswM_Action_BswM_Act_HookOnGoOffOneB ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnGoOffOneB ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_HookOnGoOffOneA (BswM_Action_BswM_Act_HookOnGoOffOneA, funcdef_no=71, decl_uid=10103, cgraph_uid=72, symbol_order=82)

Modification phase of node BswM_Action_BswM_Act_HookOnGoOffOneA/82
BswM_Action_BswM_Act_HookOnGoOffOneA ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_Hook_OnGoOffOneA ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_GoOffOneB (BswM_Action_BswM_Act_GoOffOneB, funcdef_no=70, decl_uid=10101, cgraph_uid=71, symbol_order=81)

Modification phase of node BswM_Action_BswM_Act_GoOffOneB/81
BswM_Action_BswM_Act_GoOffOneB ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_GoOffOneB ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_GoOffOneA (BswM_Action_BswM_Act_GoOffOneA, funcdef_no=69, decl_uid=10099, cgraph_uid=70, symbol_order=80)

Modification phase of node BswM_Action_BswM_Act_GoOffOneA/80
BswM_Action_BswM_Act_GoOffOneA ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_GoOffOneA ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_DemDeinit (BswM_Action_BswM_Act_DemDeinit, funcdef_no=65, decl_uid=10091, cgraph_uid=66, symbol_order=76)

Modification phase of node BswM_Action_BswM_Act_DemDeinit/76
BswM_Action_BswM_Act_DemDeinit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_Shutdown ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_Action_BswM_Act_AllowCom (BswM_Action_BswM_Act_AllowCom, funcdef_no=64, decl_uid=10089, cgraph_uid=65, symbol_order=75)

Modification phase of node BswM_Action_BswM_Act_AllowCom/75
BswM_Action_BswM_Act_AllowCom ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_CommunicationAllowed (0, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_HandleStaticRequest (BswM_HandleStaticRequest, funcdef_no=112, decl_uid=10009, cgraph_uid=113, symbol_order=123)

Modification phase of node BswM_HandleStaticRequest/123
BswM_HandleStaticRequest (uint32 channel, uint16 mode, uint8 source, uint8 sid)
{
  unsigned char _1;

  <bb 2> [local count: 347387065]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 118111603]:
  BswM_HandleStaticRequest.part.0 (channel_6(D), mode_7(D), source_5(D), sid_8(D));

  <bb 4> [local count: 347387064]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_AppState (BswM_MRPFunc_BswM_ModeReqPort_AppState, funcdef_no=0, decl_uid=9997, cgraph_uid=1, symbol_order=11)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_AppState/11
BswM_MRPFunc_BswM_ModeReqPort_AppState ()
{
  uint8 nextMode;
  uint8 prevMode;
  unsigned char _1;
  unsigned char nextMode.36_2;
  long unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Rte_Mode_BswM_ModeNotificationPort_BswM_ModeReqPort_AppState_AppStateMode (&prevMode, &nextMode);
  # DEBUG BEGIN_STMT
  nextMode.36_2 = nextMode;
  _3 = (long unsigned int) nextMode.36_2;
  _4 = BswM_UInt8RteRequestPortTable[0].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[0], _3, 128, 255, _4);
  prevMode ={v} {CLOBBER};
  nextMode ={v} {CLOBBER};

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_LT_Init (BswM_LT_Init, funcdef_no=2, decl_uid=10015, cgraph_uid=3, symbol_order=13)

Modification phase of node BswM_LT_Init/13
BswM_LT_Init ()
{
  BswM_IndexType i;
  BswM_IndexType i;
  struct BswMModeRequestPortType * arrPtr;
  BswM_IndexType j;
  BswM_IndexType i;
  int _1;
  unsigned int _2;
  unsigned int _3;
  struct BswMModeRequestPortType * _4;
  short unsigned int _5;
  int _6;
  unsigned char _7;
  const struct BswM_ConfigType * BswM_PostBuildConfig.37_8;
  unsigned char _9;
  unsigned int _10;
  unsigned int _11;
  const struct BswM_ConfigType * _12;
  long unsigned int _13;
  sizetype _14;
  sizetype _15;
  const uint8 * _16;
  unsigned char _17;
  short unsigned int _18;
  short unsigned int _20;
  int _21;
  unsigned char _22;
  const struct BswM_ConfigType * BswM_PostBuildConfig.41_23;
  unsigned char _24;
  unsigned int _25;
  unsigned int _26;
  const struct BswM_ConfigType * _27;
  long unsigned int _28;
  unsigned int _29;
  unsigned int _30;
  sizetype _31;
  const uint16 * _32;
  short unsigned int _33;
  int _34;
  short unsigned int _35;
  int _36;
  unsigned char _37;
  const struct BswM_ConfigType * BswM_PostBuildConfig.44_38;
  unsigned char _39;
  unsigned int _40;
  unsigned int _41;
  const struct BswM_ConfigType * _42;
  long unsigned int _43;
  sizetype _44;
  sizetype _45;
  const uint8 * _46;
  unsigned char _47;

  <bb 2> [local count: 16999369]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BswM_InitRteModeRequestPorts ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 10>; [100.00%]

  <bb 3> [local count: 254990505]:
  # DEBUG BEGIN_STMT
  _1 = (int) i_48;
  arrPtr_69 = BswM_PtrModeRequestPortsTable[_1];
  # DEBUG arrPtr => arrPtr_69
  # DEBUG BEGIN_STMT
  if (arrPtr_69 != 0B)
    goto <bb 24>; [46.32%]
  else
    goto <bb 9>; [53.68%]

  <bb 24> [local count: 118111602]:
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _2 = (unsigned int) j_49;
  _3 = _2 * 6;
  _4 = arrPtr_69 + _3;
  _5 = _4->base.id;
  _6 = (int) _5;
  _7 = BswM_InitialValueMappings[_6];
  # DEBUG table_index => (uint16) _7
  # DEBUG BEGIN_STMT
  if (_7 != 255)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 630715947]:
  # DEBUG BEGIN_STMT
  BswM_PostBuildConfig.37_8 = BswM_PostBuildConfig;
  _9 = BswM_Context.ID;
  _10 = (unsigned int) _9;
  _11 = _10 * 60;
  _12 = BswM_PostBuildConfig.37_8 + _11;
  _13 = _12->UInt8InitialValuesTable;
  _14 = (sizetype) _7;
  _15 = _13 + _14;
  _16 = BswM_PostBuildConfig.37_8 + _15;
  _17 = *_16;
  _4->mode = _17;
  # DEBUG BEGIN_STMT
  _4->base.isDefined = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  _4->base.isDefined = 0;

  <bb 7> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  j_73 = j_49 + 1;
  # DEBUG j => j_73

  <bb 8> [local count: 1073741824]:
  # j_49 = PHI <j_73(7), 0(24)>
  # DEBUG j => j_49
  # DEBUG BEGIN_STMT
  _18 = BswM_NumModeRequestPortsTable[_1];
  if (_18 > j_49)
    goto <bb 4>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 254990504]:
  # DEBUG BEGIN_STMT
  i_74 = i_48 + 1;
  # DEBUG i => i_74

  <bb 10> [local count: 271989872]:
  # i_48 = PHI <0(2), i_74(9)>
  # DEBUG i => i_48
  # DEBUG BEGIN_STMT
  if (i_48 != 15)
    goto <bb 3>; [93.75%]
  else
    goto <bb 23>; [6.25%]

  <bb 23> [local count: 16999367]:
  goto <bb 15>; [100.00%]

  <bb 11> [local count: 137540332]:
  # DEBUG BEGIN_STMT
  _20 = BswMGenericRequestPortTable[0].base.id;
  _21 = (int) _20;
  _22 = BswM_InitialValueMappings[_21];
  # DEBUG table_index => (uint16) _22
  # DEBUG BEGIN_STMT
  if (_22 != 255)
    goto <bb 12>; [66.00%]
  else
    goto <bb 13>; [34.00%]

  <bb 12> [local count: 90776619]:
  # DEBUG BEGIN_STMT
  BswM_PostBuildConfig.41_23 = BswM_PostBuildConfig;
  _24 = BswM_Context.ID;
  _25 = (unsigned int) _24;
  _26 = _25 * 60;
  _27 = BswM_PostBuildConfig.41_23 + _26;
  _28 = _27->UInt16InitialValuesTable;
  _29 = (unsigned int) _22;
  _30 = _29 * 2;
  _31 = _28 + _30;
  _32 = BswM_PostBuildConfig.41_23 + _31;
  _33 = *_32;
  BswMGenericRequestPortTable[0].mode = _33;
  # DEBUG BEGIN_STMT
  BswMGenericRequestPortTable[0].base.isDefined = 1;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 46763713]:
  # DEBUG BEGIN_STMT
  BswMGenericRequestPortTable[0].base.isDefined = 0;

  <bb 14> [local count: 137540332]:
  # i_56 = PHI <1(13), 1(12)>

  <bb 15> [local count: 154539698]:
  # i_50 = PHI <i_56(14), 0(23)>
  # DEBUG i => i_50
  # DEBUG BEGIN_STMT
  if (i_50 == 0)
    goto <bb 11>; [89.00%]
  else
    goto <bb 22>; [11.00%]

  <bb 22> [local count: 16999367]:
  goto <bb 20>; [100.00%]

  <bb 16> [local count: 34003834]:
  # DEBUG BEGIN_STMT
  _34 = (int) i_51;
  _35 = BswMComMPncRequestPortTable[_34].base.id;
  _36 = (int) _35;
  _37 = BswM_InitialValueMappings[_36];
  # DEBUG table_index => (uint16) _37
  # DEBUG BEGIN_STMT
  if (_37 != 255)
    goto <bb 17>; [66.00%]
  else
    goto <bb 18>; [34.00%]

  <bb 17> [local count: 22442530]:
  # DEBUG BEGIN_STMT
  BswM_PostBuildConfig.44_38 = BswM_PostBuildConfig;
  _39 = BswM_Context.ID;
  _40 = (unsigned int) _39;
  _41 = _40 * 60;
  _42 = BswM_PostBuildConfig.44_38 + _41;
  _43 = _42->UInt8InitialValuesTable;
  _44 = (sizetype) _37;
  _45 = _43 + _44;
  _46 = BswM_PostBuildConfig.44_38 + _45;
  _47 = *_46;
  BswMComMPncRequestPortTable[_34].mode = _47;
  # DEBUG BEGIN_STMT
  BswMComMPncRequestPortTable[_34].base.isDefined = 1;
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 11561304]:
  # DEBUG BEGIN_STMT
  BswMComMPncRequestPortTable[_34].base.isDefined = 0;

  <bb 19> [local count: 34003834]:
  # DEBUG BEGIN_STMT
  i_65 = i_51 + 1;
  # DEBUG i => i_65

  <bb 20> [local count: 51003201]:
  # i_51 = PHI <i_65(19), 0(22)>
  # DEBUG i => i_51
  # DEBUG BEGIN_STMT
  if (i_51 != 2)
    goto <bb 16>; [66.67%]
  else
    goto <bb 21>; [33.33%]

  <bb 21> [local count: 16999367]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM, funcdef_no=3, decl_uid=9663, cgraph_uid=4, symbol_order=14)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM/14
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 0, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM, funcdef_no=4, decl_uid=9665, cgraph_uid=5, symbol_order=15)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM/15
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 1, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM, funcdef_no=5, decl_uid=9667, cgraph_uid=6, symbol_order=16)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM/16
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 2, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM, funcdef_no=6, decl_uid=9669, cgraph_uid=7, symbol_order=17)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM/17
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 3, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM, funcdef_no=7, decl_uid=9671, cgraph_uid=8, symbol_order=18)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM/18
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 4, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM, funcdef_no=8, decl_uid=9673, cgraph_uid=9, symbol_order=19)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM/19
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 5, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM, funcdef_no=9, decl_uid=9675, cgraph_uid=10, symbol_order=20)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM/20
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 6, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM, funcdef_no=10, decl_uid=9677, cgraph_uid=11, symbol_order=21)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM/21
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 7, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM, funcdef_no=11, decl_uid=9679, cgraph_uid=12, symbol_order=22)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM/22
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_TX_NORM_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 8, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM, funcdef_no=12, decl_uid=9681, cgraph_uid=13, symbol_order=23)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM/23
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_ENABLE_RX_DISABLE_TX_NORM_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 9, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM, funcdef_no=13, decl_uid=9683, cgraph_uid=14, symbol_order=24)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM/24
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_ENABLE_TX_NORM_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 10, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM (BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM, funcdef_no=14, decl_uid=9685, cgraph_uid=15, symbol_order=25)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM/25
BswM_MRPFunc_BswM_ModeReqPort_DcmCommunicationControl_DCM_DISABLE_RX_TX_NORM_NM ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[1].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[1], 11, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default (BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default, funcdef_no=15, decl_uid=9687, cgraph_uid=16, symbol_order=26)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default/26
BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Default ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[2].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[2], 1, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming (BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming, funcdef_no=16, decl_uid=9689, cgraph_uid=17, symbol_order=27)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming/27
BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Programming ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[2].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[2], 2, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended (BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended, funcdef_no=17, decl_uid=9691, cgraph_uid=18, symbol_order=28)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended/28
BswM_MRPFunc_BswM_ModeReqPort_DcmDiagnosticSessionControl_Extended ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[2].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[2], 3, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED (BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED, funcdef_no=18, decl_uid=9693, cgraph_uid=19, symbol_order=29)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED/29
BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STARTED ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[3].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[3], 2, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED (BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED, funcdef_no=19, decl_uid=9695, cgraph_uid=20, symbol_order=30)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED/30
BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_STOPPED ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[3].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[3], 1, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED (BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED, funcdef_no=20, decl_uid=9697, cgraph_uid=21, symbol_order=31)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED/31
BswM_MRPFunc_BswM_ModeReqPort_DcmResponseOnEvent_EVENT_CLEARED ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[3].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[3], 0, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE, funcdef_no=21, decl_uid=9699, cgraph_uid=22, symbol_order=32)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE/32
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_NONE ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 5, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD, funcdef_no=22, decl_uid=9701, cgraph_uid=23, symbol_order=33)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD/33
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_HARD ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 1, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF, funcdef_no=23, decl_uid=9703, cgraph_uid=24, symbol_order=34)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF/34
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_KEYONOFF ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 4, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT, funcdef_no=24, decl_uid=9705, cgraph_uid=25, symbol_order=35)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT/35
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_SOFT ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 6, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER, funcdef_no=25, decl_uid=9707, cgraph_uid=26, symbol_order=36)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER/36
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOBOOTLOADER ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 2, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER, funcdef_no=26, decl_uid=9709, cgraph_uid=27, symbol_order=37)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER/37
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_JUMPTOSYSSUPPLIERBOOTLOADER ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 3, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE (BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE, funcdef_no=27, decl_uid=9711, cgraph_uid=28, symbol_order=38)

Modification phase of node BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE/38
BswM_MRPFunc_BswM_ModeReqPort_Dcm_ResetModeRequest_EXECUTE ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = BswM_Context.RunTimeContext.IsInitialized;
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = BswM_UInt8RteRequestPortTable[4].base.isImmediate;
  BswM_HandleRequest (&BswM_Context, &BswM_UInt8RteRequestPortTable[4], 0, 128, 255, _2);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


