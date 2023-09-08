
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_TxConnectionProcessNextTxBuffer/90:
  Jump functions of caller  Dcm_DspInternal_UpdatePage/89:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/88:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/87:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/86:
  Jump functions of caller  Dcm_Dsl_TxConnectionTransmit/85:
  Jump functions of caller  Dcm_Dsl_BufferGive/84:
  Jump functions of caller  Dcm_Dsl_TxConnectionCancelTransmit/83:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/82:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StopTimer/81:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/80:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/78:
  Jump functions of caller  Dcm_Dsp_ProtocolCancelProcessing/77:
  Jump functions of caller  Dcm_Dsp_ProtocolSetUpCancellation/76:
  Jump functions of caller  Dcm_DsdInternal_DispatchSvcReq/75:
  Jump functions of caller  Dcm_Dsl_BufferFreeRxTxNRC/74:
  Jump functions of caller  Dcm_HsmEmitInst/73:
  Jump functions of caller  Dcm_DspInternal_DcmConfirmation/72:
  Jump functions of caller  Dcm_DspInternal_SvcFunc/71:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProcessingEnd/70:
  Jump functions of caller  Det_ASR40_ReportError/69:
  Jump functions of caller  Dcm_Dsl_RoeServices_GetRxPduId/68:
  Jump functions of caller  Dcm_Dsl_BufferFree/67:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProtocolFree/66:
  Jump functions of caller  Dcm_Dsl_BufferAllocate/65:
  Jump functions of caller  Dcm_HsmEmitToSelfInst/62:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetTxState/60:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetRxState/59:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/58:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/57:
  Jump functions of caller  Dcm_Roe_CheckForTxEnable/55:
  Jump functions of caller  Dcm_CheckForGeneralRejectConditions/53:
  Jump functions of caller  RespPendInFirstCycle/52:
  Jump functions of caller  Dcm_SuppressResponse/51:
  Jump functions of caller  Dcm_HsmDcmSfPgBufDataRequestedAction1/50:
  Jump functions of caller  Dcm_HsmDcmSfPgBufDataAvailableAction1/49:
  Jump functions of caller  Dcm_HsmDcmSfPgBufSendingCancellingEntry/48:
  Jump functions of caller  Dcm_HsmDcmSfNormalSendingCancellingEntry/47:
  Jump functions of caller  Dcm_HsmDcmSfSendingEntry/46:
    callsite  Dcm_HsmDcmSfSendingEntry/46 -> Dcm_SuppressResponse/51 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_HsmDcmSfWaitForApplGuard5/45:
  Jump functions of caller  Dcm_HsmDcmSfWaitForApplGuard4/44:
  Jump functions of caller  Dcm_HsmDcmSfWaitForApplGuard3/43:
    callsite  Dcm_HsmDcmSfWaitForApplGuard3/43 -> Dcm_CheckForGeneralRejectConditions/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_HsmDcmSfWaitForApplGuard2/42:
    callsite  Dcm_HsmDcmSfWaitForApplGuard2/42 -> Dcm_CheckForGeneralRejectConditions/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_HsmDcmSfSendRpForcedAction1/41:
  Jump functions of caller  Dcm_HsmDcmSfSendRpExit/40:
  Jump functions of caller  Dcm_HsmDcmSfSendRpEntry/39:
  Jump functions of caller  Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38:
  Jump functions of caller  Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37:
  Jump functions of caller  Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36:
  Jump functions of caller  Dcm_HsmDcmSfWaitForProtocolEntry/35:
  Jump functions of caller  Dcm_HsmDcmSfRequestCancellingEntry/34:
  Jump functions of caller  Dcm_HsmDcmSfRequestProcessingAction3/33:
  Jump functions of caller  Dcm_HsmDcmSfRequestProcessingEntry/32:
    callsite  Dcm_HsmDcmSfRequestProcessingEntry/32 -> RespPendInFirstCycle/52 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31:
  Jump functions of caller  Dcm_HsmDcmSfROEResponseProcessingEntry/30:
  Jump functions of caller  Dcm_HsmDcmSfROEProcessingAction3/29:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2/28:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1/27:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicSendingUUDTAction1/26:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicSendingUUDTEntry/25:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1/24:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicResponseProcessingEntry/23:
  Jump functions of caller  Dcm_HsmDcmSfPeriodicProcessingAction1/22:
  Jump functions of caller  Dcm_HsmDcmSfConfirmingOkEntry/21:
  Jump functions of caller  Dcm_HsmDcmSfConfirmingNOkEntry/20:
  Jump functions of caller  Dcm_HsmDcmSfInServiceAction1/19:
  Jump functions of caller  Dcm_HsmDcmSfInServiceEntry/18:
  Jump functions of caller  Dcm_HsmDcmSfOosNotifiedEntry/17:
  Jump functions of caller  Dcm_HsmDcmSfOosInitAction1/16:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceAction8/15:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceGuard8/14:
    callsite  Dcm_HsmDcmSfOutOfServiceGuard8/14 -> Dcm_Roe_CheckForTxEnable/55 : 
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceAction7/13:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceGuard7/12:
    callsite  Dcm_HsmDcmSfOutOfServiceGuard7/12 -> Dcm_Roe_CheckForTxEnable/55 : 
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceAction4/11:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceGuard4/10:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceGuard3/9:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceAction2/8:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceGuard2/7:
  Jump functions of caller  Dcm_HsmDcmSfOutOfServiceGuard1/6:
  Jump functions of caller  Dcm_HsmDcmSfWaitForFullComAction3/5:
  Jump functions of caller  Dcm_HsmDcmSfWaitForFullComGuard3/4:
  Jump functions of caller  Dcm_HsmDcmSfWaitForFullComAction2/3:
  Jump functions of caller  Dcm_HsmDcmSfWaitForFullComGuard2/2:
  Jump functions of caller  Dcm_HsmDcmSfWaitForFullComAction1/1:
  Jump functions of caller  Dcm_HsmDcmSfTopEntry/0:

 Propagating constants:

Not considering Dcm_HsmDcmSfPgBufDataRequestedAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfPgBufDataAvailableAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfPgBufSendingCancellingEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfNormalSendingCancellingEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfSendingEntry for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfWaitForApplGuard5/45 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfWaitForApplGuard4/44 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfWaitForApplGuard3 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForApplGuard2 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfSendRpForcedAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfSendRpExit for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfSendRpEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfCancelWithGeneralRejectAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfCancelWithGeneralRejectEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForTxAndProtocolEntry for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfWaitForProtocolEntry/35 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfRequestCancellingEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfRequestProcessingAction3 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfRequestProcessingEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfROEResponseProcessingEntry for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfROEProcessingAction3/29 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2/28 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1/27 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfPeriodicSendingUUDTAction1/26 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfPeriodicSendingUUDTEntry/25 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfPeriodicResponseProcessingEntry/23 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfPeriodicProcessingAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfConfirmingOkEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfConfirmingNOkEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfInServiceAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfInServiceEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfOosNotifiedEntry for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfOosInitAction1 for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfOutOfServiceAction8/15 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfOutOfServiceGuard8 for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfOutOfServiceAction7/13 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfOutOfServiceGuard7 for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfOutOfServiceAction4/11 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfOutOfServiceGuard4/10 is not versionable, reason: not a tree_versionable_function.
Function Dcm_HsmDcmSfOutOfServiceGuard3/9 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfOutOfServiceAction2 for cloning; -fipa-cp-clone disabled.
Function Dcm_HsmDcmSfOutOfServiceGuard2/7 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_HsmDcmSfOutOfServiceGuard1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForFullComAction3 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForFullComGuard3 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForFullComAction2 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForFullComGuard2 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfWaitForFullComAction1 for cloning; -fipa-cp-clone disabled.
Not considering Dcm_HsmDcmSfTopEntry for cloning; -fipa-cp-clone disabled.

overall_size: 800, max_new_size: 11001
 - context independent values, size: 6, time_benefit: 1.000000
 - context independent values, size: -3, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 0, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Roe_CheckForTxEnable/55:
  Node: Dcm_CheckForGeneralRejectConditions/53:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: RespPendInFirstCycle/52:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_SuppressResponse/51:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_HsmDcmSfPgBufDataRequestedAction1/50:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPgBufDataAvailableAction1/49:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPgBufSendingCancellingEntry/48:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfNormalSendingCancellingEntry/47:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfSendingEntry/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForApplGuard5/45:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForApplGuard4/44:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForApplGuard3/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForApplGuard2/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfSendRpForcedAction1/41:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfSendRpExit/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfSendRpEntry/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForProtocolEntry/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfRequestCancellingEntry/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfRequestProcessingAction3/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfRequestProcessingEntry/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfROEResponseProcessingEntry/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfROEProcessingAction3/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicSendingUUDTAction1/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicSendingUUDTEntry/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicResponseProcessingEntry/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfPeriodicProcessingAction1/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfConfirmingOkEntry/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfConfirmingNOkEntry/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfInServiceAction1/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfInServiceEntry/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOosNotifiedEntry/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOosInitAction1/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceAction8/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceGuard8/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceAction7/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceGuard7/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceAction4/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceGuard4/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceGuard3/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceAction2/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceGuard2/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfOutOfServiceGuard1/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForFullComAction3/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForFullComGuard3/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForFullComAction2/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForFullComGuard2/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfWaitForFullComAction1/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_HsmDcmSfTopEntry/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of Dcm_HsmDcmSfPeriodicProcessingUUDTAction1/24 for all known contexts.
 - Creating a specialized node of Dcm_HsmDcmSfOutOfServiceGuard1/6 for all known contexts.

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_HsmDcmSfOutOfServiceGuard1.constprop.0/93 (Dcm_HsmDcmSfOutOfServiceGuard1.constprop) @06fc7ee0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_HsmDcmSfOutOfServiceGuard1/6
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Dcm_HsmDcmSfOutOfServiceGuard2/7 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceGuard3/9 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceGuard4/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop.0/92 (Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop) @06f19b60
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_HsmDcmSfPeriodicProcessingUUDTAction1/24
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Dcm_HsmDcmSfPeriodicSendingUUDTEntry/25 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfPeriodicSendingUUDTAction1/26 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1/27 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2/28 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfPeriodicResponseProcessingEntry/23 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceAction7/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_TxConnectionProcessNextTxBuffer/90 (Dcm_Dsl_TxConnectionProcessNextTxBuffer) @06f93e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_DspInternal_UpdatePage/89 (Dcm_DspInternal_UpdatePage) @06f93c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfPgBufDataAvailableAction1/49 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/88 (Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue) @06f93620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendingEntry/46 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/87 (Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp) @06f931c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CheckForGeneralRejectConditions/53 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/86 (Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime) @06f86e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendRpExit/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_TxConnectionTransmit/85 (Dcm_Dsl_TxConnectionTransmit) @06f86a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendingEntry/46 (536870913 (estimated locally),0.50 per call) Dcm_HsmDcmSfSendingEntry/46 (536870913 (estimated locally),0.50 per call) Dcm_HsmDcmSfSendRpEntry/39 (362271901 (estimated locally),0.34 per call) Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferGive/84 (Dcm_Dsl_BufferGive) @06f869a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfSendingEntry/46 (536870913 (estimated locally),0.50 per call) Dcm_HsmDcmSfSendingEntry/46 (536870913 (estimated locally),0.50 per call) Dcm_HsmDcmSfSendRpEntry/39 (362271901 (estimated locally),0.34 per call) Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_TxConnectionCancelTransmit/83 (Dcm_Dsl_TxConnectionCancelTransmit) @06f867e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfPgBufSendingCancellingEntry/48 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfNormalSendingCancellingEntry/47 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38 (354334802 (estimated locally),0.33 per call) Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/82 (Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer) @06f86460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendingEntry/46 (273804165 (estimated locally),0.25 per call) Dcm_HsmDcmSfRequestCancellingEntry/34 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfRequestProcessingAction3/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StopTimer/81 (Dcm_Dsl_DiagnosticSessionHandler_StopTimer) @06f86380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendingEntry/46 (273804165 (estimated locally),0.25 per call) Dcm_HsmDcmSfSendRpEntry/39 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfRequestCancellingEntry/34 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfRequestProcessingAction3/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/80 (Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer) @06f861c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendRpExit/40 (536870913 (estimated locally),0.50 per call) Dcm_HsmDcmSfSendRpExit/40 (536870913 (estimated locally),0.50 per call) RespPendInFirstCycle/52 (73890617 (estimated locally),0.07 per call) 
  Calls: 
Dcm_ProtocolConfig/79 (Dcm_ProtocolConfig) @06f80d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: RespPendInFirstCycle/52 (read)Dcm_HsmDcmSfSendRpExit/40 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/78 (Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime) @06f860e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: RespPendInFirstCycle/52 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ProtocolCancelProcessing/77 (Dcm_Dsp_ProtocolCancelProcessing) @06f7ee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfPgBufSendingCancellingEntry/48 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ProtocolSetUpCancellation/76 (Dcm_Dsp_ProtocolSetUpCancellation) @06f7ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfPgBufSendingCancellingEntry/48 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfNormalSendingCancellingEntry/47 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_DsdInternal_DispatchSvcReq/75 (Dcm_DsdInternal_DispatchSvcReq) @06f7eb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfRequestProcessingEntry/32 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfROEResponseProcessingEntry/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferFreeRxTxNRC/74 (Dcm_Dsl_BufferFreeRxTxNRC) @06f7e380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfRequestProcessingAction3/33 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfPeriodicProcessingAction1/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmEmitInst/73 (Dcm_HsmEmitInst) @06f7e0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfConfirmingOkEntry/21 (365072220 (estimated locally),0.34 per call) Dcm_HsmDcmSfConfirmingNOkEntry/20 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_DspInternal_DcmConfirmation/72 (Dcm_DspInternal_DcmConfirmation) @06f7e000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfConfirmingOkEntry/21 (708669605 (estimated locally),0.66 per call) Dcm_HsmDcmSfConfirmingNOkEntry/20 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_DspInternal_SvcFunc/71 (Dcm_DspInternal_SvcFunc) @06874ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendRpForcedAction1/41 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfInServiceAction1/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProcessingEnd/70 (Dcm_Dsl_Supervisor_ProcessingEnd) @06874a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfOosNotifiedEntry/17 (389957738 (estimated locally),0.36 per call) 
  Calls: 
Det_ASR40_ReportError/69 (Det_ASR40_ReportError) @068747e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfOosInitAction1/16 (45812982 (estimated locally),0.14 per call) 
  Calls: 
Dcm_Dsl_RoeServices_GetRxPduId/68 (Dcm_Dsl_RoeServices_GetRxPduId) @06874380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Roe_CheckForTxEnable/55 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferFree/67 (Dcm_Dsl_BufferFree) @06869ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfOutOfServiceAction2/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProtocolFree/66 (Dcm_Dsl_Supervisor_ProtocolFree) @06869b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfRequestProcessingAction3/33 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfPeriodicProcessingAction1/22 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceAction2/8 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForFullComAction3/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferAllocate/65 (Dcm_Dsl_BufferAllocate) @068698c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfWaitForFullComAction2/3 (347387064 (estimated locally),1.00 per call) 
  Calls: 
Dcm_SesTabConfig/64 (Dcm_SesTabConfig) @0686b6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfOosInitAction1/16 (read)Dcm_HsmDcmSfOosInitAction1/16 (read)Dcm_HsmDcmSfOosInitAction1/16 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmScDcm/63 (Dcm_HsmScDcm) @0686b000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_HsmDcmSfWaitForFullComAction1/1 (addr)Dcm_HsmDcmSfConfirmingNOkEntry/20 (addr)Dcm_HsmDcmSfConfirmingOkEntry/21 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmEmitToSelfInst/62 (Dcm_HsmEmitToSelfInst) @06869540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfWaitForFullComAction1/1 (73890617 (estimated locally),0.07 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06869460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendRpEntry/39 (186624919 (estimated locally),0.17 per call) Dcm_HsmDcmSfSendRpEntry/39 (362271901 (estimated locally),0.34 per call) Dcm_HsmDcmSfSendRpEntry/39 (524845004 (estimated locally),0.49 per call) Dcm_HsmDcmSfInServiceEntry/18 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceAction2/8 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForFullComAction1/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_GetTxState/60 (Dcm_Dsl_ComMChannelStateManager_GetTxState) @06869380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfWaitForFullComAction1/1 (1073741824 (estimated locally),1.00 per call) Dcm_Roe_CheckForTxEnable/55 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_GetRxState/59 (Dcm_Dsl_ComMChannelStateManager_GetRxState) @068692a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfWaitForFullComAction1/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/58 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @068691c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfSendRpEntry/39 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfInServiceEntry/18 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceAction2/8 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForFullComAction1/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/57 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @068690e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_HsmDcmSfOosInitAction1/16 (292020936 (estimated locally),0.86 per call) Dcm_HsmDcmSfWaitForFullComAction1/1 (1073741824 (estimated locally),1.00 per call) Dcm_Roe_CheckForTxEnable/55 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_HsmInfo/56 (Dcm_HsmInfo) @06f01b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfPgBufDataAvailableAction1/49 (read)Dcm_HsmDcmSfPgBufDataAvailableAction1/49 (write)Dcm_HsmDcmSfPgBufDataAvailableAction1/49 (read)RespPendInFirstCycle/52 (read)Dcm_SuppressResponse/51 (read)Dcm_SuppressResponse/51 (read)Dcm_CheckForGeneralRejectConditions/53 (read)Dcm_HsmDcmSfPgBufDataAvailableAction1/49 (read)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_SuppressResponse/51 (read)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfWaitForFullComGuard2/2 (read)Dcm_HsmDcmSfWaitForFullComGuard3/4 (read)Dcm_HsmDcmSfWaitForFullComAction3/5 (write)Dcm_HsmDcmSfOutOfServiceAction2/8 (read)Dcm_SuppressResponse/51 (read)Dcm_SuppressResponse/51 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (write)Dcm_HsmDcmSfWaitForFullComAction2/3 (write)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (write)Dcm_HsmDcmSfWaitForFullComAction2/3 (write)Dcm_HsmDcmSfWaitForFullComAction3/5 (read)Dcm_HsmDcmSfWaitForFullComAction3/5 (write)Dcm_HsmDcmSfWaitForFullComAction3/5 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfRequestProcessingAction3/33 (read)Dcm_HsmDcmSfRequestCancellingEntry/34 (write)Dcm_HsmDcmSfRequestProcessingEntry/32 (read)Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (write)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfRequestProcessingEntry/32 (write)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfNormalSendingCancellingEntry/47 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfPgBufSendingCancellingEntry/48 (read)Dcm_HsmDcmSfSendRpExit/40 (write)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_SuppressResponse/51 (read)Dcm_SuppressResponse/51 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfOosInitAction1/16 (read)Dcm_HsmDcmSfOosInitAction1/16 (write)Dcm_HsmDcmSfOosInitAction1/16 (write)Dcm_HsmDcmSfOosInitAction1/16 (read)Dcm_HsmDcmSfOosInitAction1/16 (write)Dcm_HsmDcmSfOosNotifiedEntry/17 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfOosNotifiedEntry/17 (read)Dcm_HsmDcmSfOosNotifiedEntry/17 (read)Dcm_HsmDcmSfConfirmingNOkEntry/20 (read)Dcm_HsmDcmSfConfirmingNOkEntry/20 (read)Dcm_HsmDcmSfConfirmingOkEntry/21 (read)Dcm_HsmDcmSfConfirmingOkEntry/21 (read)Dcm_HsmDcmSfPeriodicProcessingAction1/22 (read)Dcm_HsmDcmSfPeriodicProcessingAction1/22 (read)Dcm_HsmDcmSfPeriodicProcessingAction1/22 (read)Dcm_SuppressResponse/51 (read)Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (read)Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (read)Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (read)Dcm_HsmDcmSfRequestProcessingEntry/32 (read)Dcm_HsmDcmSfWaitForFullComAction1/1 (read)Dcm_HsmDcmSfWaitForFullComAction1/1 (write)Dcm_HsmDcmSfWaitForFullComAction1/1 (write)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (addr)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfWaitForFullComAction2/3 (read)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfTopEntry/0 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (read)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfInServiceEntry/18 (write)Dcm_HsmDcmSfRequestProcessingAction3/33 (read)Dcm_HsmDcmSfRequestProcessingAction3/33 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (addr)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (write)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (write)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (write)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (read)Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38 (read)Dcm_HsmDcmSfSendRpEntry/39 (addr)Dcm_HsmDcmSfSendRpEntry/39 (write)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (write)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (write)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (write)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendRpEntry/39 (read)Dcm_HsmDcmSfSendingEntry/46 (addr)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (write)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)Dcm_HsmDcmSfSendingEntry/46 (read)
  Availability: not_available
  Varpool flags:
Dcm_Roe_CheckForTxEnable/55 (Dcm_Roe_CheckForTxEnable) @06f19d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_HsmDcmSfOutOfServiceGuard8/14 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceGuard7/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_ComMChannelStateManager_GetTxState/60 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/57 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_RoeServices_GetRxPduId/68 (1073741824 (estimated locally),1.00 per call) 
Dcm_CheckForGeneralRejectConditions/53 (Dcm_CheckForGeneralRejectConditions) @06f199a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_HsmDcmSfWaitForApplGuard3/43 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfWaitForApplGuard2/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp/87 (1073741824 (estimated locally),1.00 per call) 
RespPendInFirstCycle/52 (RespPendInFirstCycle) @06f197e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/79 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_HsmDcmSfRequestProcessingEntry/32 (177167401 (estimated locally),0.17 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/80 (73890617 (estimated locally),0.07 per call) Dcm_Dsl_DiagnosticSessionHandler_GetP2MaxTime/78 (1073741824 (estimated locally),1.00 per call) 
Dcm_SuppressResponse/51 (Dcm_SuppressResponse) @06f19460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_HsmDcmSfSendingEntry/46 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmDcmSfPgBufDataRequestedAction1/50 (Dcm_HsmDcmSfPgBufDataRequestedAction1) @06f190e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionProcessNextTxBuffer/90 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferGive/84 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPgBufDataAvailableAction1/49 (Dcm_HsmDcmSfPgBufDataAvailableAction1) @06f16d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DspInternal_UpdatePage/89 (354334802 (estimated locally),0.33 per call) 
Dcm_HsmDcmSfPgBufSendingCancellingEntry/48 (Dcm_HsmDcmSfPgBufSendingCancellingEntry) @06f16b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionCancelTransmit/83 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolCancelProcessing/77 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolSetUpCancellation/76 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfNormalSendingCancellingEntry/47 (Dcm_HsmDcmSfNormalSendingCancellingEntry) @06f169a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionCancelTransmit/83 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolSetUpCancellation/76 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfSendingEntry/46 (Dcm_HsmDcmSfSendingEntry) @06f167e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (addr)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/82 (273804165 (estimated locally),0.25 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/81 (273804165 (estimated locally),0.25 per call) Dcm_Dsl_TxConnectionTransmit/85 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_BufferGive/84 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_TxConnectionTransmit/85 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_BufferGive/84 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue/88 (1073741824 (estimated locally),1.00 per call) Dcm_SuppressResponse/51 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForApplGuard5/45 (Dcm_HsmDcmSfWaitForApplGuard5) @06f13b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfWaitForApplGuard3/43 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForApplGuard4/44 (Dcm_HsmDcmSfWaitForApplGuard4) @06f139a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfWaitForApplGuard2/42 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForApplGuard3/43 (Dcm_HsmDcmSfWaitForApplGuard3) @06f137e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dcm_HsmDcmSfWaitForApplGuard5/45 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_CheckForGeneralRejectConditions/53 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForApplGuard2/42 (Dcm_HsmDcmSfWaitForApplGuard2) @06f13620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dcm_HsmDcmSfWaitForApplGuard4/44 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_CheckForGeneralRejectConditions/53 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfSendRpForcedAction1/41 (Dcm_HsmDcmSfSendRpForcedAction1) @06f13460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DspInternal_SvcFunc/71 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfSendRpExit/40 (Dcm_HsmDcmSfSendRpExit) @06f132a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/79 (read)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/80 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer/80 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime/86 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfSendRpEntry/39 (Dcm_HsmDcmSfSendRpEntry) @06f09d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (addr)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_StopTimer/81 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (186624919 (estimated locally),0.17 per call) Dcm_Dsl_TxConnectionTransmit/85 (362271901 (estimated locally),0.34 per call) Dcm_Dsl_BufferGive/84 (362271901 (estimated locally),0.34 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (362271901 (estimated locally),0.34 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (524845004 (estimated locally),0.49 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38 (Dcm_HsmDcmSfCancelWithGeneralRejectAction1) @06f09620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionCancelTransmit/83 (354334802 (estimated locally),0.33 per call) 
Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37 (Dcm_HsmDcmSfCancelWithGeneralRejectEntry) @06f09460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (addr)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ProtocolCancelProcessing/77 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_TxConnectionTransmit/85 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferGive/84 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolSetUpCancellation/76 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36 (Dcm_HsmDcmSfWaitForTxAndProtocolEntry) @06f06ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionCancelTransmit/83 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolCancelProcessing/77 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolSetUpCancellation/76 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForProtocolEntry/35 (Dcm_HsmDcmSfWaitForProtocolEntry) @06f06d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfRequestCancellingEntry/34 (Dcm_HsmDcmSfRequestCancellingEntry) @06f06b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/82 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/81 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfRequestProcessingAction3/33 (Dcm_HsmDcmSfRequestProcessingAction3) @06f06620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolFree/66 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer/82 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_DiagnosticSessionHandler_StopTimer/81 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFreeRxTxNRC/74 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfRequestProcessingEntry/32 (Dcm_HsmDcmSfRequestProcessingEntry) @06f04d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: RespPendInFirstCycle/52 (177167401 (estimated locally),0.17 per call) Dcm_DsdInternal_DispatchSvcReq/75 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31 (Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry) @06f04b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dcm_HsmDcmSfWaitForProtocolEntry/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_ProtocolCancelProcessing/77 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_ProtocolSetUpCancellation/76 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfROEResponseProcessingEntry/30 (Dcm_HsmDcmSfROEResponseProcessingEntry) @06f049a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DsdInternal_DispatchSvcReq/75 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfROEProcessingAction3/29 (Dcm_HsmDcmSfROEProcessingAction3) @06f047e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingAction1/22 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2/28 (Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2) @06f042a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop/92 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1/27 (Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1) @06f040e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop/92 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPeriodicSendingUUDTAction1/26 (Dcm_HsmDcmSfPeriodicSendingUUDTAction1) @06ef0ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop/92 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPeriodicSendingUUDTEntry/25 (Dcm_HsmDcmSfPeriodicSendingUUDTEntry) @06ef0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop/92 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPeriodicProcessingUUDTAction1/24 (Dcm_HsmDcmSfPeriodicProcessingUUDTAction1) @06ef0b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
Dcm_HsmDcmSfPeriodicResponseProcessingEntry/23 (Dcm_HsmDcmSfPeriodicResponseProcessingEntry) @06ef09a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop/92 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfPeriodicProcessingAction1/22 (Dcm_HsmDcmSfPeriodicProcessingAction1) @06ef07e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dcm_HsmDcmSfROEProcessingAction3/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolFree/66 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFreeRxTxNRC/74 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfConfirmingOkEntry/21 (Dcm_HsmDcmSfConfirmingOkEntry) @06ef02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmScDcm/63 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_HsmEmitInst/73 (365072220 (estimated locally),0.34 per call) Dcm_DspInternal_DcmConfirmation/72 (708669605 (estimated locally),0.66 per call) 
Dcm_HsmDcmSfConfirmingNOkEntry/20 (Dcm_HsmDcmSfConfirmingNOkEntry) @06ef0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmScDcm/63 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_HsmEmitInst/73 (365072220 (estimated locally),0.34 per call) Dcm_DspInternal_DcmConfirmation/72 (708669605 (estimated locally),0.66 per call) 
Dcm_HsmDcmSfInServiceAction1/19 (Dcm_HsmDcmSfInServiceAction1) @06ee4d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DspInternal_SvcFunc/71 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfInServiceEntry/18 (Dcm_HsmDcmSfInServiceEntry) @06ee4b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOosNotifiedEntry/17 (Dcm_HsmDcmSfOosNotifiedEntry) @06ee49a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProcessingEnd/70 (389957738 (estimated locally),0.36 per call) 
Dcm_HsmDcmSfOosInitAction1/16 (Dcm_HsmDcmSfOosInitAction1) @06ee4620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_SesTabConfig/64 (read)Dcm_SesTabConfig/64 (read)Dcm_SesTabConfig/64 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:337833918 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RxConnectionGetRxPduIdInformation/57 (292020936 (estimated locally),0.86 per call) Det_ASR40_ReportError/69 (45812982 (estimated locally),0.14 per call) 
Dcm_HsmDcmSfOutOfServiceAction8/15 (Dcm_HsmDcmSfOutOfServiceAction8) @06ee4380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfOutOfServiceAction2/8 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceGuard8/14 (Dcm_HsmDcmSfOutOfServiceGuard8) @06ebce00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Roe_CheckForTxEnable/55 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceAction7/13 (Dcm_HsmDcmSfOutOfServiceAction7) @06ebcc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfPeriodicProcessingUUDTAction1.constprop/92 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceGuard7/12 (Dcm_HsmDcmSfOutOfServiceGuard7) @06ebca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Roe_CheckForTxEnable/55 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceAction4/11 (Dcm_HsmDcmSfOutOfServiceAction4) @06ebc8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfOutOfServiceAction2/8 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceGuard4/10 (Dcm_HsmDcmSfOutOfServiceGuard4) @06ebc380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfOutOfServiceGuard1.constprop/93 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceGuard3/9 (Dcm_HsmDcmSfOutOfServiceGuard3) @06ebc1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfOutOfServiceGuard1.constprop/93 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceAction2/8 (Dcm_HsmDcmSfOutOfServiceAction2) @06ebc000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dcm_HsmDcmSfOutOfServiceAction8/15 (1073741824 (estimated locally),1.00 per call) Dcm_HsmDcmSfOutOfServiceAction4/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_ProtocolFree/66 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFree/67 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceGuard2/7 (Dcm_HsmDcmSfOutOfServiceGuard2) @06eb7a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_HsmDcmSfOutOfServiceGuard1.constprop/93 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfOutOfServiceGuard1/6 (Dcm_HsmDcmSfOutOfServiceGuard1) @06eb78c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
Dcm_HsmDcmSfWaitForFullComAction3/5 (Dcm_HsmDcmSfWaitForFullComAction3) @06eb7700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_ProtocolFree/66 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForFullComGuard3/4 (Dcm_HsmDcmSfWaitForFullComGuard3) @06eb7380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_HsmDcmSfWaitForFullComAction2/3 (Dcm_HsmDcmSfWaitForFullComAction2) @06eb71c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_SesTabConfig/64 (read)Dcm_HsmInfo/56 (addr)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_SesTabConfig/64 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:347387065 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_BufferAllocate/65 (347387064 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfWaitForFullComGuard2/2 (Dcm_HsmDcmSfWaitForFullComGuard2) @06eab620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_HsmDcmSfWaitForFullComAction1/1 (Dcm_HsmDcmSfWaitForFullComAction1) @06eabee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (read)Dcm_HsmInfo/56 (write)Dcm_HsmScDcm/63 (addr)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_HsmEmitToSelfInst/62 (73890617 (estimated locally),0.07 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/61 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_ComMChannelStateManager_GetTxState/60 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_ComMChannelStateManager_GetRxState/59 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/57 (1073741824 (estimated locally),1.00 per call) 
Dcm_HsmDcmSfTopEntry/0 (Dcm_HsmDcmSfTopEntry) @06eabd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)Dcm_HsmInfo/56 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Dcm_Roe_CheckForTxEnable (Dcm_Roe_CheckForTxEnable, funcdef_no=55, decl_uid=8077, cgraph_uid=56, symbol_order=55)

Modification phase of node Dcm_Roe_CheckForTxEnable/55
Dcm_Roe_CheckForTxEnable ()
{
  Dcm_ComMChannelOperationStateType ComMChnTxState;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  boolean retValTxEnabled;
  Std_ReturnType GetRxPduIdResult;
  PduIdType RxPduId;
  short unsigned int RxPduId.0_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  RxPduId = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG retValTxEnabled => 0
  # DEBUG BEGIN_STMT
  GetRxPduIdResult_9 = Dcm_Dsl_RoeServices_GetRxPduId (&RxPduId);
  # DEBUG GetRxPduIdResult => GetRxPduIdResult_9
  # DEBUG BEGIN_STMT
  if (GetRxPduIdResult_9 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ComMChnTxState => 0
  # DEBUG BEGIN_STMT
  RxPduId.0_1 = RxPduId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxPduId.0_1, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  _2 = RxPduIdInfo.ComMChannelId;
  ComMChnTxState_12 = Dcm_Dsl_ComMChannelStateManager_GetTxState (_2);
  # DEBUG ComMChnTxState => ComMChnTxState_12
  # DEBUG BEGIN_STMT
  if (ComMChnTxState_12 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  # DEBUG retValTxEnabled => 0

  <bb 5> [local count: 354334802]:
  # retValTxEnabled_3 = PHI <1(3), 0(4)>
  # DEBUG retValTxEnabled => retValTxEnabled_3
  RxPduIdInfo ={v} {CLOBBER};

  <bb 6> [local count: 1073741824]:
  # retValTxEnabled_4 = PHI <retValTxEnabled_3(5), 0(2)>
  # DEBUG retValTxEnabled => retValTxEnabled_4
  # DEBUG BEGIN_STMT
  RxPduId ={v} {CLOBBER};
  return retValTxEnabled_4;

}



;; Function Dcm_CheckForGeneralRejectConditions (Dcm_CheckForGeneralRejectConditions, funcdef_no=53, decl_uid=8073, cgraph_uid=54, symbol_order=53)

Modification phase of node Dcm_CheckForGeneralRejectConditions/53
Dcm_CheckForGeneralRejectConditions (const uint8 instIdx)
{
  uint16 MaxNumRP;
  boolean GeneralRejectConditionFulfill;
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG GeneralRejectConditionFulfill => 0
  # DEBUG BEGIN_STMT
  MaxNumRP_7 = Dcm_Dsl_DiagnosticSessionHandler_GetSessionMaxRcrrp (instIdx_5(D));
  # DEBUG MaxNumRP => MaxNumRP_7
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_5(D);
  _2 = Dcm_HsmInfo[_1].rpCntr;
  if (_2 == MaxNumRP_7)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (MaxNumRP_7 != 255)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  # DEBUG GeneralRejectConditionFulfill => 1

  <bb 5> [local count: 1073741824]:
  # GeneralRejectConditionFulfill_3 = PHI <0(2), 0(3), 1(4)>
  # DEBUG GeneralRejectConditionFulfill => GeneralRejectConditionFulfill_3
  # DEBUG BEGIN_STMT
  return GeneralRejectConditionFulfill_3;

}



;; Function Dcm_HsmDcmSfTopEntry (Dcm_HsmDcmSfTopEntry, funcdef_no=0, decl_uid=5769, cgraph_uid=1, symbol_order=0)

Modification phase of node Dcm_HsmDcmSfTopEntry/0
Dcm_HsmDcmSfTopEntry (const uint8 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  Dcm_HsmInfo[_1].CancellationConditions.ServiceProcessingDone = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].retryTimer = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].jumpToBLSupport = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].jumpToBLExecution = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].msgContext.msgAddInfo.requestOrigin = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].responsePendingTxStatus = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].requestValidationStatus = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].RxConnectionId = 15;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfWaitForFullComAction1 (Dcm_HsmDcmSfWaitForFullComAction1, funcdef_no=1, decl_uid=5861, cgraph_uid=2, symbol_order=1)

Modification phase of node Dcm_HsmDcmSfWaitForFullComAction1/1
Dcm_HsmDcmSfWaitForFullComAction1 (const uint8 instIdx)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  Dcm_ComMChannelOperationStateType ComMChnTxState;
  Dcm_ComMChannelOperationStateType ComMChnRxState;
  int _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ComMChnRxState => 0
  # DEBUG BEGIN_STMT
  # DEBUG ComMChnTxState => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_6(D);
  _2 = Dcm_HsmInfo[_1].NextJob.JobRxConnectionId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_2, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = RxPduIdInfo.ComMChannelId;
  ComMChnRxState_11 = Dcm_Dsl_ComMChannelStateManager_GetRxState (_3);
  # DEBUG ComMChnRxState => ComMChnRxState_11
  # DEBUG BEGIN_STMT
  _4 = RxPduIdInfo.ComMChannelId;
  ComMChnTxState_13 = Dcm_Dsl_ComMChannelStateManager_GetTxState (_4);
  # DEBUG ComMChnTxState => ComMChnTxState_13
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (ComMChnRxState_11 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (ComMChnTxState_13 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].retryTimer = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitToSelfInst (&Dcm_HsmScDcm, instIdx_6(D), 20);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 999851208]:
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].retryTimer = 1;

  <bb 6> [local count: 1073741824]:
  RxPduIdInfo ={v} {CLOBBER};
  return;

}



;; Function Dcm_HsmDcmSfWaitForFullComGuard2 (Dcm_HsmDcmSfWaitForFullComGuard2, funcdef_no=2, decl_uid=5863, cgraph_uid=3, symbol_order=2)

Modification phase of node Dcm_HsmDcmSfWaitForFullComGuard2/2
Dcm_HsmDcmSfWaitForFullComGuard2 (const uint8 instIdx)
{
  boolean ConditionResult;
  int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => instIdx_2(D)
  # DEBUG INLINE_ENTRY Dcm_BootloaderResponseRequired
  # DEBUG BEGIN_STMT
  # DEBUG ConditionResult => 1
  # DEBUG BEGIN_STMT
  _3 = (int) instIdx_2(D);
  _4 = Dcm_HsmInfo[_3].NextJob.JobRequestType;
  if (_4 == 9)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG ConditionResult => 0

  <bb 4> [local count: 1073741824]:
  # ConditionResult_5 = PHI <1(2), 0(3)>
  # DEBUG ConditionResult => ConditionResult_5
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => NULL
  # DEBUG ConditionResult => NULL
  # DEBUG ResponseRequired => ConditionResult_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ConditionResult_5;

}



;; Function Dcm_HsmDcmSfWaitForFullComAction2 (Dcm_HsmDcmSfWaitForFullComAction2, funcdef_no=3, decl_uid=5865, cgraph_uid=4, symbol_order=3)

Modification phase of node Dcm_HsmDcmSfWaitForFullComAction2/3
Dcm_HsmDcmSfWaitForFullComAction2 (const uint8 instIdx)
{
  const uint8 currentServiceID;
  uint8 sesTabIdxNew;
  uint8_least SessionIndex;
  boolean SessionIndexFound;
  uint16 P2StarTime;
  int _1;
  Dcm_MsgItemType * _3;
  const struct Dcm_SesTabEntryConfigType * _4;
  long unsigned int _5;
  const struct Dcm_SesTabEntryConfigType * _6;
  unsigned char _7;
  unsigned char _9;
  short unsigned int _10;
  short unsigned int _11;
  struct Dcm_BufferType * _12;
  Dcm_MsgItemType * _13;
  unsigned char _14;
  Dcm_MsgItemType * _15;
  unsigned char _16;
  Dcm_MsgItemType * _17;
  Dcm_MsgItemType * _18;
  unsigned char _19;
  const struct Dcm_SesTabEntryConfigType * _20;
  unsigned int _21;
  unsigned int _22;
  const struct Dcm_SesTabEntryConfigType * _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  short unsigned int _28;
  unsigned int _29;
  unsigned int _30;
  unsigned int _31;
  Dcm_MsgItemType * _32;
  unsigned char _33;
  short unsigned int _34;
  unsigned char _35;
  Dcm_MsgItemType * _36;
  unsigned char _37;
  short unsigned int _38;
  Dcm_MsgItemType * _39;
  unsigned char _40;
  Dcm_MsgItemType * _41;
  unsigned char _42;
  Dcm_MsgItemType * _43;
  unsigned char _44;

  <bb 2> [local count: 347387065]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SessionIndexFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG SessionIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG sesTabIdxNew => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_50(D);
  # DEBUG D#1 => &Dcm_SesTabConfig[_1]
  # DEBUG sesTabConfig => D#1
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#2
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NextJob.JobRxBuffer.BufferPtr;
  currentServiceID_52 = *_3;
  # DEBUG currentServiceID => currentServiceID_52
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (currentServiceID_52 == 16)
    goto <bb 12>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 12> [local count: 118111602]:
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  _5 = SessionIndex_46 * 12;
  _6 = _4 + _5;
  _7 = _6->SesCtrl;
  _9 = MEM[(Dcm_MsgItemType *)_3 + 1B];
  if (_7 == _9)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  # DEBUG SessionIndexFound => 1
  # DEBUG BEGIN_STMT
  sesTabIdxNew_54 = (uint8) SessionIndex_46;
  # DEBUG sesTabIdxNew => sesTabIdxNew_54
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 630715949]:
  # DEBUG BEGIN_STMT
  SessionIndex_53 = SessionIndex_46 + 1;
  # DEBUG SessionIndex => SessionIndex_53

  <bb 6> [local count: 955630224]:
  # SessionIndexFound_27 = PHI <1(4), 0(5)>
  # SessionIndex_8 = PHI <SessionIndex_46(4), SessionIndex_53(5)>
  # sesTabIdxNew_2 = PHI <sesTabIdxNew_54(4), sesTabIdxNew_47(5)>

  <bb 7> [local count: 1073741824]:
  # SessionIndexFound_45 = PHI <SessionIndexFound_27(6), 0(12)>
  # SessionIndex_46 = PHI <SessionIndex_8(6), 0(12)>
  # sesTabIdxNew_47 = PHI <sesTabIdxNew_2(6), 0(12)>
  # DEBUG sesTabIdxNew => sesTabIdxNew_47
  # DEBUG SessionIndex => SessionIndex_46
  # DEBUG SessionIndexFound => SessionIndexFound_45
  # DEBUG BEGIN_STMT
  if (SessionIndexFound_45 == 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 347387064]:
  # sesTabIdxNew_48 = PHI <0(2), sesTabIdxNew_47(7)>
  # DEBUG sesTabIdxNew => sesTabIdxNew_48
  # DEBUG BEGIN_STMT
  _10 = (short unsigned int) instIdx_50(D);
  _11 = _10 + 12;
  _12 = &MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer;
  Dcm_Dsl_BufferAllocate (_11, 4, 0, _12);
  # DEBUG BEGIN_STMT
  _13 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NextJob.JobRxBuffer.BufferPtr;
  _14 = *_13;
  _15 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferPtr;
  _16 = _14 | 64;
  *_15 = _16;
  # DEBUG BEGIN_STMT
  _17 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NextJob.JobRxBuffer.BufferPtr;
  _18 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferPtr;
  _19 = MEM[(Dcm_MsgItemType *)_17 + 1B];
  MEM[(Dcm_MsgItemType *)_18 + 1B] = _19;
  # DEBUG BEGIN_STMT
  if (currentServiceID_52 == 16)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  _20 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  _21 = (unsigned int) sesTabIdxNew_48;
  _22 = _21 * 12;
  _23 = _20 + _22;
  _24 = _23->P2StarMaxTime;
  _25 = _24 * 5;
  _26 = _25 / 10;
  P2StarTime_60 = (uint16) _26;
  # DEBUG P2StarTime => P2StarTime_60
  # DEBUG BEGIN_STMT
  _28 = _23->P2MaxTime;
  _29 = (unsigned int) _28;
  _30 = _29 * 5;
  _31 = _30 >> 8;
  _32 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferPtr;
  _33 = (unsigned char) _31;
  MEM[(Dcm_MsgItemType *)_32 + 2B] = _33;
  # DEBUG BEGIN_STMT
  _34 = _23->P2MaxTime;
  _35 = (unsigned char) _34;
  _36 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferPtr;
  _37 = _35 * 5;
  MEM[(Dcm_MsgItemType *)_36 + 3B] = _37;
  # DEBUG BEGIN_STMT
  _38 = P2StarTime_60 >> 8;
  _39 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferPtr;
  _40 = (unsigned char) _38;
  MEM[(Dcm_MsgItemType *)_39 + 4B] = _40;
  # DEBUG BEGIN_STMT
  _41 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferPtr;
  _42 = (unsigned char) _26;
  MEM[(Dcm_MsgItemType *)_41 + 5B] = _42;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.resDataLen = 5;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.FilledLength = 6;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 229275462]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.resDataLen = 1;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.FilledLength = 2;

  <bb 11> [local count: 347387064]:
  # DEBUG BEGIN_STMT
  _43 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NextJob.JobRxBuffer.BufferPtr;
  _44 = *_43;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.idContext = _44;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfWaitForFullComGuard3 (Dcm_HsmDcmSfWaitForFullComGuard3, funcdef_no=4, decl_uid=5867, cgraph_uid=5, symbol_order=4)

Modification phase of node Dcm_HsmDcmSfWaitForFullComGuard3/4
Dcm_HsmDcmSfWaitForFullComGuard3 (const uint8 instIdx)
{
  boolean ConditionResult;
  boolean ResponseNotRequired;
  int _3;
  unsigned char _5;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => instIdx_2(D)
  # DEBUG INLINE_ENTRY Dcm_BootloaderResponseRequired
  # DEBUG BEGIN_STMT
  # DEBUG ConditionResult => 1
  # DEBUG BEGIN_STMT
  _3 = (int) instIdx_2(D);
  _5 = Dcm_HsmInfo[_3].NextJob.JobRequestType;
  if (_5 == 9)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG ConditionResult => 0

  <bb 4> [local count: 1073741824]:
  # ConditionResult_6 = PHI <1(2), 0(3)>
  # DEBUG ConditionResult => ConditionResult_6
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => NULL
  # DEBUG ConditionResult => NULL
  _7 = ConditionResult_6 ^ 1;
  ResponseNotRequired_4 = _7;
  # DEBUG ResponseNotRequired => ResponseNotRequired_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ResponseNotRequired_4;

}



;; Function Dcm_HsmDcmSfWaitForFullComAction3 (Dcm_HsmDcmSfWaitForFullComAction3, funcdef_no=5, decl_uid=5869, cgraph_uid=6, symbol_order=5)

Modification phase of node Dcm_HsmDcmSfWaitForFullComAction3/5
Dcm_HsmDcmSfWaitForFullComAction3 (const uint8 instIdx)
{
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_6(D);
  _2 = Dcm_HsmInfo[_1].NextJob.JobTxConnectionId;
  Dcm_HsmInfo[_1].TxConnectionId = _2;
  # DEBUG BEGIN_STMT
  _3 = Dcm_HsmInfo[_1].NextJob.JobRxConnectionId;
  Dcm_HsmInfo[_1].RxConnectionId = _3;
  # DEBUG BEGIN_STMT
  _4 = (short unsigned int) instIdx_6(D);
  _5 = _4 + 12;
  Dcm_Dsl_Supervisor_ProtocolFree (_5);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfOutOfServiceGuard1 (Dcm_HsmDcmSfOutOfServiceGuard1, funcdef_no=6, decl_uid=5837, cgraph_uid=7, symbol_order=6)

Modification phase of node Dcm_HsmDcmSfOutOfServiceGuard1/6
Dcm_HsmDcmSfOutOfServiceGuard1 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG guardResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dcm_HsmDcmSfOutOfServiceGuard2 (Dcm_HsmDcmSfOutOfServiceGuard2, funcdef_no=77, decl_uid=5839, cgraph_uid=8, symbol_order=7)

Modification phase of node Dcm_HsmDcmSfOutOfServiceGuard2/7
Dcm_HsmDcmSfOutOfServiceGuard2 (const uint8 instIdx)
{
  boolean retval.59;

  <bb 2> [local count: 1073741824]:
  retval.59_2 = Dcm_HsmDcmSfOutOfServiceGuard1 (instIdx_1(D)); [tail call]
  return retval.59_2;

}



;; Function Dcm_HsmDcmSfOutOfServiceAction2 (Dcm_HsmDcmSfOutOfServiceAction2, funcdef_no=8, decl_uid=5841, cgraph_uid=9, symbol_order=8)

Modification phase of node Dcm_HsmDcmSfOutOfServiceAction2/8
Dcm_HsmDcmSfOutOfServiceAction2 (const uint8 instIdx)
{
  short unsigned int _1;
  short unsigned int _2;
  int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) instIdx_7(D);
  _2 = _1 + 12;
  _3 = (int) instIdx_7(D);
  _4 = Dcm_HsmInfo[_3].NextJob.JobRxBuffer.BufferId;
  Dcm_Dsl_BufferFree (_2, _4);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolFree (_2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfOutOfServiceGuard3 (Dcm_HsmDcmSfOutOfServiceGuard3, funcdef_no=79, decl_uid=5843, cgraph_uid=10, symbol_order=9)

Modification phase of node Dcm_HsmDcmSfOutOfServiceGuard3/9
Dcm_HsmDcmSfOutOfServiceGuard3 (const uint8 instIdx)
{
  boolean retval.60;

  <bb 2> [local count: 1073741824]:
  retval.60_2 = Dcm_HsmDcmSfOutOfServiceGuard1 (instIdx_1(D)); [tail call]
  return retval.60_2;

}



;; Function Dcm_HsmDcmSfOutOfServiceGuard4 (Dcm_HsmDcmSfOutOfServiceGuard4, funcdef_no=81, decl_uid=5845, cgraph_uid=11, symbol_order=10)

Modification phase of node Dcm_HsmDcmSfOutOfServiceGuard4/10
Dcm_HsmDcmSfOutOfServiceGuard4 (const uint8 instIdx)
{
  boolean retval.61;

  <bb 2> [local count: 1073741824]:
  retval.61_2 = Dcm_HsmDcmSfOutOfServiceGuard1 (instIdx_1(D)); [tail call]
  return retval.61_2;

}



;; Function Dcm_HsmDcmSfOutOfServiceAction4 (Dcm_HsmDcmSfOutOfServiceAction4, funcdef_no=83, decl_uid=5847, cgraph_uid=12, symbol_order=11)

Modification phase of node Dcm_HsmDcmSfOutOfServiceAction4/11
Dcm_HsmDcmSfOutOfServiceAction4 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfOutOfServiceAction2 (instIdx_2(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfOutOfServiceGuard7 (Dcm_HsmDcmSfOutOfServiceGuard7, funcdef_no=12, decl_uid=5849, cgraph_uid=13, symbol_order=12)

Modification phase of node Dcm_HsmDcmSfOutOfServiceGuard7/12
Dcm_HsmDcmSfOutOfServiceGuard7 (const uint8 instIdx)
{
  boolean retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_3 = Dcm_Roe_CheckForTxEnable ();
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_3;

}



;; Function Dcm_HsmDcmSfOutOfServiceAction7 (Dcm_HsmDcmSfOutOfServiceAction7, funcdef_no=67, decl_uid=5851, cgraph_uid=14, symbol_order=13)

Modification phase of node Dcm_HsmDcmSfOutOfServiceAction7/13
Dcm_HsmDcmSfOutOfServiceAction7 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (instIdx_1(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfOutOfServiceGuard8 (Dcm_HsmDcmSfOutOfServiceGuard8, funcdef_no=14, decl_uid=5853, cgraph_uid=15, symbol_order=14)

Modification phase of node Dcm_HsmDcmSfOutOfServiceGuard8/14
Dcm_HsmDcmSfOutOfServiceGuard8 (const uint8 instIdx)
{
  boolean retVal;
  unsigned char _1;
  _Bool _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dcm_Roe_CheckForTxEnable ();
  _2 = _1 == 0;
  retVal_5 = (boolean) _2;
  # DEBUG retVal => retVal_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_5;

}



;; Function Dcm_HsmDcmSfOutOfServiceAction8 (Dcm_HsmDcmSfOutOfServiceAction8, funcdef_no=85, decl_uid=5855, cgraph_uid=16, symbol_order=15)

Modification phase of node Dcm_HsmDcmSfOutOfServiceAction8/15
Dcm_HsmDcmSfOutOfServiceAction8 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfOutOfServiceAction2 (instIdx_2(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfOosInitAction1 (Dcm_HsmDcmSfOosInitAction1, funcdef_no=16, decl_uid=5857, cgraph_uid=17, symbol_order=16)

Modification phase of node Dcm_HsmDcmSfOosInitAction1/16
Dcm_HsmDcmSfOosInitAction1 (const uint8 instIdx)
{
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  const uint8 currentServiceID;
  uint8_least j;
  int _1;
  Dcm_MsgItemType * _2;
  const struct Dcm_SesTabEntryConfigType * _3;
  long unsigned int _4;
  const struct Dcm_SesTabEntryConfigType * _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  long unsigned int _9;
  unsigned char _10;
  long unsigned int _11;
  short unsigned int _12;

  <bb 2> [local count: 337833918]:
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_16(D);
  _2 = Dcm_HsmInfo[_1].NextJob.JobRxBuffer.BufferPtr;
  currentServiceID_18 = *_2;
  # DEBUG currentServiceID => currentServiceID_18
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => &Dcm_SesTabConfig[_1]
  # DEBUG sesTabConfig => D#3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (currentServiceID_18 == 16)
    goto <bb 11>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 11> [local count: 114863532]:
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].SessionEntries;
  _4 = j_13 * 12;
  _5 = _3 + _4;
  _6 = _5->SesCtrl;
  _7 = MEM[(Dcm_MsgItemType *)_2 + 1B];
  if (_6 == _7)
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878294]:
  # DEBUG BEGIN_STMT
  j_19 = j_13 + 1;
  # DEBUG j => j_19

  <bb 5> [local count: 1073741824]:
  # j_13 = PHI <j_19(4), 0(11)>
  # DEBUG j => j_13
  # DEBUG BEGIN_STMT
  _8 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].NumEntries;
  _9 = (long unsigned int) _8;
  if (_9 > j_13)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 337833918]:
  # j_14 = PHI <0(2), j_13(3), j_13(5)>
  # DEBUG j => j_14
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct Dcm_SesTabConfigType *)&Dcm_SesTabConfig][_1].NumEntries;
  _11 = (long unsigned int) _10;
  if (_11 <= j_14)
    goto <bb 7>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 7> [local count: 226348725]:
  if (currentServiceID_18 == 16)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 45812982]:
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].NextJob.JobRequestType = 9;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].retryTimer = 1;
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 75, 6);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 292020936]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = Dcm_HsmInfo[_1].NextJob.JobRxConnectionId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_12, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].retryTimer = 1;
  RxPduIdInfo ={v} {CLOBBER};

  <bb 10> [local count: 337833918]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfOosNotifiedEntry (Dcm_HsmDcmSfOosNotifiedEntry, funcdef_no=17, decl_uid=5859, cgraph_uid=18, symbol_order=17)

Modification phase of node Dcm_HsmDcmSfOosNotifiedEntry/17
Dcm_HsmDcmSfOosNotifiedEntry (const uint8 instIdx)
{
  int _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_6(D);
  _2 = Dcm_HsmInfo[_1].RequestType;
  _3 = _2 + 255;
  if (_3 <= 1)
    goto <bb 5>; [41.00%]
  else
    goto <bb 3>; [59.00%]

  <bb 3> [local count: 633507676]:
  if (_2 == 8)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 418115065]:
  if (_2 == 9)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 797785881]:
  _4 = Dcm_HsmInfo[_1].RxConnectionId;
  if (_4 != 15)
    goto <bb 6>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 6> [local count: 389957738]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProcessingEnd (_4);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].requestValidationStatus = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfInServiceEntry (Dcm_HsmDcmSfInServiceEntry, funcdef_no=18, decl_uid=5771, cgraph_uid=19, symbol_order=18)

Modification phase of node Dcm_HsmDcmSfInServiceEntry/18
Dcm_HsmDcmSfInServiceEntry (const uint8 instIdx)
{
  int _1;
  short unsigned int _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  unsigned char _6;
  short unsigned int _7;
  short unsigned int _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_12(D);
  Dcm_HsmInfo[_1].CancellationConditions.CancellationType = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].CancellationConditions.FinalTransmissionDone = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].negativeResponseCode = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].msgContext.msgAddInfo.suppressPosResponse = 0;
  # DEBUG BEGIN_STMT
  _2 = Dcm_HsmInfo[_1].NextJob.JobRxConnectionId;
  Dcm_HsmInfo[_1].RxConnectionId = _2;
  # DEBUG BEGIN_STMT
  _3 = Dcm_HsmInfo[_1].NextJob.JobComMChannelId;
  Dcm_HsmInfo[_1].ComMChannelId = _3;
  # DEBUG BEGIN_STMT
  _4 = Dcm_HsmInfo[_1].NextJob.JobTxConnectionId;
  Dcm_HsmInfo[_1].TxConnectionId = _4;
  # DEBUG BEGIN_STMT
  _5 = Dcm_HsmInfo[_1].NextJob.JobTesterSourceAddress;
  Dcm_HsmInfo[_1].TesterSourceAddress = _5;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].RxBuffer = Dcm_HsmInfo[_1].NextJob.JobRxBuffer;
  # DEBUG BEGIN_STMT
  _6 = Dcm_HsmInfo[_1].NextJob.JobRequestType;
  Dcm_HsmInfo[_1].RequestType = _6;
  # DEBUG BEGIN_STMT
  _7 = Dcm_HsmInfo[_1].NextJob.JobRpCntr;
  Dcm_HsmInfo[_1].rpCntr = _7;
  # DEBUG BEGIN_STMT
  _8 = Dcm_HsmInfo[_1].NextJob.JobRpCntrConfirmed;
  Dcm_HsmInfo[_1].rpCntrConfirmed = _8;
  # DEBUG BEGIN_STMT
  _9 = Dcm_HsmInfo[_1].NextJob.JobResponsePendingTxStatus;
  Dcm_HsmInfo[_1].responsePendingTxStatus = _9;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].NextJob.JobRxConnectionId = 6;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].NextJob.JobComMChannelId = 1;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].NextJob.JobTxConnectionId = 6;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].NextJob.JobTesterSourceAddress = 0;
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].NextJob.JobRequestType = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfInServiceAction1 (Dcm_HsmDcmSfInServiceAction1, funcdef_no=19, decl_uid=5773, cgraph_uid=20, symbol_order=19)

Modification phase of node Dcm_HsmDcmSfInServiceAction1/19
Dcm_HsmDcmSfInServiceAction1 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_DspInternal_SvcFunc (instIdx_2(D), 1);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfConfirmingNOkEntry (Dcm_HsmDcmSfConfirmingNOkEntry, funcdef_no=20, decl_uid=5825, cgraph_uid=21, symbol_order=20)

Modification phase of node Dcm_HsmDcmSfConfirmingNOkEntry/20
Dcm_HsmDcmSfConfirmingNOkEntry (const uint8 instIdx)
{
  Dcm_ConfirmationStatusType status;
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_6(D);
  # DEBUG D#4 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG status => 3

  <bb 4> [local count: 1073741824]:
  # status_4 = PHI <1(2), 3(3)>
  # DEBUG status => status_4
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RequestType;
  if (_3 != 14)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Dcm_DspInternal_DcmConfirmation (instIdx_6(D), status_4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitInst (&Dcm_HsmScDcm, instIdx_6(D), 6);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfConfirmingOkEntry (Dcm_HsmDcmSfConfirmingOkEntry, funcdef_no=21, decl_uid=5823, cgraph_uid=22, symbol_order=21)

Modification phase of node Dcm_HsmDcmSfConfirmingOkEntry/21
Dcm_HsmDcmSfConfirmingOkEntry (const uint8 instIdx)
{
  Dcm_ConfirmationStatusType status;
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_6(D);
  # DEBUG D#5 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG status => 2

  <bb 4> [local count: 1073741824]:
  # status_4 = PHI <0(2), 2(3)>
  # DEBUG status => status_4
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RequestType;
  if (_3 != 14)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Dcm_DspInternal_DcmConfirmation (instIdx_6(D), status_4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitInst (&Dcm_HsmScDcm, instIdx_6(D), 6);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfPeriodicProcessingAction1 (Dcm_HsmDcmSfPeriodicProcessingAction1, funcdef_no=22, decl_uid=5785, cgraph_uid=23, symbol_order=22)

Modification phase of node Dcm_HsmDcmSfPeriodicProcessingAction1/22
Dcm_HsmDcmSfPeriodicProcessingAction1 (const uint8 instIdx)
{
  short unsigned int _1;
  short unsigned int _2;
  int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) instIdx_7(D);
  _2 = _1 + 12;
  _3 = (int) instIdx_7(D);
  _4 = Dcm_HsmInfo[_3].RxBuffer.BufferId;
  _5 = Dcm_HsmInfo[_3].TxBuffer.BufferId;
  _6 = Dcm_HsmInfo[_3].NRCBuffer.BufferId;
  Dcm_Dsl_BufferFreeRxTxNRC (_2, _4, _5, _6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolFree (_2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfPeriodicResponseProcessingEntry (Dcm_HsmDcmSfPeriodicResponseProcessingEntry, funcdef_no=65, decl_uid=5787, cgraph_uid=24, symbol_order=23)

Modification phase of node Dcm_HsmDcmSfPeriodicResponseProcessingEntry/23
Dcm_HsmDcmSfPeriodicResponseProcessingEntry (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (instIdx_1(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (Dcm_HsmDcmSfPeriodicProcessingUUDTAction1, funcdef_no=24, decl_uid=5775, cgraph_uid=25, symbol_order=24)

Modification phase of node Dcm_HsmDcmSfPeriodicProcessingUUDTAction1/24
Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfPeriodicSendingUUDTEntry (Dcm_HsmDcmSfPeriodicSendingUUDTEntry, funcdef_no=57, decl_uid=5777, cgraph_uid=26, symbol_order=25)

Modification phase of node Dcm_HsmDcmSfPeriodicSendingUUDTEntry/25
Dcm_HsmDcmSfPeriodicSendingUUDTEntry (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (instIdx_1(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfPeriodicSendingUUDTAction1 (Dcm_HsmDcmSfPeriodicSendingUUDTAction1, funcdef_no=59, decl_uid=5779, cgraph_uid=27, symbol_order=26)

Modification phase of node Dcm_HsmDcmSfPeriodicSendingUUDTAction1/26
Dcm_HsmDcmSfPeriodicSendingUUDTAction1 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (instIdx_1(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1 (Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1, funcdef_no=61, decl_uid=5781, cgraph_uid=28, symbol_order=27)

Modification phase of node Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1/27
Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction1 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (instIdx_1(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2 (Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2, funcdef_no=63, decl_uid=5783, cgraph_uid=29, symbol_order=28)

Modification phase of node Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2/28
Dcm_HsmDcmSfPeriodicSendingUUDTFinishingAction2 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingUUDTAction1 (instIdx_1(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfROEProcessingAction3 (Dcm_HsmDcmSfROEProcessingAction3, funcdef_no=69, decl_uid=5789, cgraph_uid=30, symbol_order=29)

Modification phase of node Dcm_HsmDcmSfROEProcessingAction3/29
Dcm_HsmDcmSfROEProcessingAction3 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfPeriodicProcessingAction1 (instIdx_2(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfROEResponseProcessingEntry (Dcm_HsmDcmSfROEResponseProcessingEntry, funcdef_no=30, decl_uid=5791, cgraph_uid=31, symbol_order=30)

Modification phase of node Dcm_HsmDcmSfROEResponseProcessingEntry/30
Dcm_HsmDcmSfROEResponseProcessingEntry (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_DsdInternal_DispatchSvcReq (instIdx_2(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry (Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry, funcdef_no=31, decl_uid=5793, cgraph_uid=32, symbol_order=31)

Modification phase of node Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry/31
Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolSetUpCancellation (4, instIdx_2(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolCancelProcessing (instIdx_2(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfRequestProcessingEntry (Dcm_HsmDcmSfRequestProcessingEntry, funcdef_no=32, decl_uid=5795, cgraph_uid=33, symbol_order=32)

Modification phase of node Dcm_HsmDcmSfRequestProcessingEntry/32
Dcm_HsmDcmSfRequestProcessingEntry (const uint8 instIdx)
{
  int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_5(D);
  Dcm_HsmInfo[_1].SetProgConditionsFinished = 0;
  # DEBUG BEGIN_STMT
  Dcm_DsdInternal_DispatchSvcReq (instIdx_5(D));
  # DEBUG BEGIN_STMT
  _2 = Dcm_HsmInfo[_1].rpCntr;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _3 = Dcm_HsmInfo[_1].rpCntrConfirmed;
  if (_3 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  RespPendInFirstCycle (instIdx_5(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfRequestProcessingAction3 (Dcm_HsmDcmSfRequestProcessingAction3, funcdef_no=33, decl_uid=5797, cgraph_uid=34, symbol_order=33)

Modification phase of node Dcm_HsmDcmSfRequestProcessingAction3/33
Dcm_HsmDcmSfRequestProcessingAction3 (const uint8 instIdx)
{
  short unsigned int _1;
  short unsigned int _2;
  int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG protocolIndex => instIdx_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) instIdx_7(D);
  _2 = _1 + 12;
  _3 = (int) instIdx_7(D);
  _4 = Dcm_HsmInfo[_3].RxBuffer.BufferId;
  _5 = Dcm_HsmInfo[_3].TxBuffer.BufferId;
  _6 = Dcm_HsmInfo[_3].NRCBuffer.BufferId;
  Dcm_Dsl_BufferFreeRxTxNRC (_2, _4, _5, _6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_StopTimer (_2, instIdx_7(D), 2);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (_2, instIdx_7(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProtocolFree (_2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfRequestCancellingEntry (Dcm_HsmDcmSfRequestCancellingEntry, funcdef_no=34, decl_uid=5813, cgraph_uid=35, symbol_order=34)

Modification phase of node Dcm_HsmDcmSfRequestCancellingEntry/34
Dcm_HsmDcmSfRequestCancellingEntry (const uint8 instIdx)
{
  short unsigned int _1;
  short unsigned int _2;
  int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) instIdx_4(D);
  _2 = _1 + 12;
  Dcm_Dsl_DiagnosticSessionHandler_StopTimer (_2, instIdx_4(D), 2);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (_2, instIdx_4(D));
  # DEBUG BEGIN_STMT
  _3 = (int) instIdx_4(D);
  Dcm_HsmInfo[_3].retryTimer = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfWaitForProtocolEntry (Dcm_HsmDcmSfWaitForProtocolEntry, funcdef_no=71, decl_uid=5815, cgraph_uid=36, symbol_order=35)

Modification phase of node Dcm_HsmDcmSfWaitForProtocolEntry/35
Dcm_HsmDcmSfWaitForProtocolEntry (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  Dcm_HsmDcmSfWaitForRoeProcessingCancellationEntry (instIdx_2(D)); [tail call]
  return;

}



;; Function Dcm_HsmDcmSfWaitForTxAndProtocolEntry (Dcm_HsmDcmSfWaitForTxAndProtocolEntry, funcdef_no=36, decl_uid=5817, cgraph_uid=37, symbol_order=36)

Modification phase of node Dcm_HsmDcmSfWaitForTxAndProtocolEntry/36
Dcm_HsmDcmSfWaitForTxAndProtocolEntry (const uint8 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolSetUpCancellation (5, instIdx_4(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolCancelProcessing (instIdx_4(D));
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_4(D);
  _2 = Dcm_HsmInfo[_1].TxConnectionId;
  Dcm_Dsl_TxConnectionCancelTransmit (_2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfCancelWithGeneralRejectEntry (Dcm_HsmDcmSfCancelWithGeneralRejectEntry, funcdef_no=37, decl_uid=5819, cgraph_uid=38, symbol_order=37)

Modification phase of node Dcm_HsmDcmSfCancelWithGeneralRejectEntry/37
Dcm_HsmDcmSfCancelWithGeneralRejectEntry (const uint8 instIdx)
{
  struct Dcm_HsmInfoType * const curHsmInfo;
  int _1;
  unsigned char _2;
  Dcm_MsgItemType * _3;
  Dcm_MsgItemType * _4;
  unsigned char _5;
  Dcm_MsgItemType * _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;
  unsigned char _13;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_15(D);
  curHsmInfo_16 = &Dcm_HsmInfo[_1];
  # DEBUG curHsmInfo => curHsmInfo_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  if (_2 == 4)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  if (_2 == 9)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 606019886]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode = 34;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 467721938]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode = 16;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolSetUpCancellation (5, instIdx_15(D));
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  *_3 = 127;
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  _5 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  MEM[(Dcm_MsgItemType *)_4 + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  _7 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode;
  MEM[(Dcm_MsgItemType *)_6 + 2B] = _7;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.FilledLength = 3;
  # DEBUG BEGIN_STMT
  _8 = (short unsigned int) instIdx_15(D);
  _9 = _8 + 12;
  _10 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _11 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferId;
  Dcm_Dsl_BufferGive (_9, _10, _11);
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _13 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].ComMChannelId;
  Dcm_Dsl_TxConnectionTransmit (_12, _13, _9, 0, 3, 0, curHsmInfo_16->NRCBuffer);
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolCancelProcessing (instIdx_15(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfCancelWithGeneralRejectAction1 (Dcm_HsmDcmSfCancelWithGeneralRejectAction1, funcdef_no=38, decl_uid=5821, cgraph_uid=39, symbol_order=38)

Modification phase of node Dcm_HsmDcmSfCancelWithGeneralRejectAction1/38
Dcm_HsmDcmSfCancelWithGeneralRejectAction1 (const uint8 instIdx)
{
  int _1;
  unsigned char _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_5(D);
  _2 = Dcm_HsmInfo[_1].CancellationConditions.FinalTransmissionDone;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_HsmInfo[_1].TxConnectionId;
  Dcm_Dsl_TxConnectionCancelTransmit (_3);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfSendRpEntry (Dcm_HsmDcmSfSendRpEntry, funcdef_no=39, decl_uid=5807, cgraph_uid=40, symbol_order=39)

Modification phase of node Dcm_HsmDcmSfSendRpEntry/39
Dcm_HsmDcmSfSendRpEntry (const uint8 instIdx)
{
  struct Dcm_HsmInfoType * const curHsmInfo;
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  unsigned char _4;
  short unsigned int _5;
  short unsigned int _6;
  Dcm_MsgItemType * _7;
  Dcm_MsgItemType * _8;
  unsigned char _10;
  Dcm_MsgItemType * _11;
  short unsigned int _12;
  short unsigned int _13;
  short unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;
  unsigned char _17;
  short unsigned int _18;
  short unsigned int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG SendRCRRP => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_21(D);
  curHsmInfo_22 = &Dcm_HsmInfo[_1];
  # DEBUG curHsmInfo => curHsmInfo_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.msgAddInfo.suppressPosResponse = 0;
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].rpCntr;
  _3 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].rpCntrConfirmed;
  if (_2 == _3)
    goto <bb 4>; [51.12%]
  else
    goto <bb 3>; [48.88%]

  <bb 3> [local count: 524845004]:
  # DEBUG SendRCRRP => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  _4 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].responsePendingTxStatus;
  if (_4 != 2)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 362271901]:
  # DEBUG BEGIN_STMT
  # DEBUG SendRCRRP => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].responsePendingTxStatus = 1;
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].rpCntr;
  _6 = _5 + 1;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].rpCntr = _6;
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  *_7 = 127;
  # DEBUG BEGIN_STMT
  _8 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  _10 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  MEM[(Dcm_MsgItemType *)_8 + 1B] = _10;
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  MEM[(Dcm_MsgItemType *)_11 + 2B] = 120;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.FilledLength = 3;
  # DEBUG BEGIN_STMT
  _12 = (short unsigned int) instIdx_21(D);
  _13 = _12 + 12;
  _14 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _15 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferId;
  Dcm_Dsl_BufferGive (_13, _14, _15);
  # DEBUG BEGIN_STMT
  _16 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _17 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].ComMChannelId;
  Dcm_Dsl_TxConnectionTransmit (_16, _17, _13, 0, 3, 0, curHsmInfo_22->NRCBuffer);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 186624919]:
  # DEBUG SendRCRRP => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _18 = (short unsigned int) instIdx_21(D);
  _19 = _18 + 12;
  Dcm_Dsl_DiagnosticSessionHandler_StopTimer (_19, instIdx_21(D), 2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfSendRpExit (Dcm_HsmDcmSfSendRpExit, funcdef_no=40, decl_uid=5809, cgraph_uid=41, symbol_order=40)

Modification phase of node Dcm_HsmDcmSfSendRpExit/40
Dcm_HsmDcmSfSendRpExit (const uint8 instIdx)
{
  Dcm_TimerValueType P2StarServerAdjustTime;
  Dcm_TimerValueType P2StarMaxTime;
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  long unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_9(D);
  # DEBUG D#6 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  P2StarMaxTime_12 = Dcm_Dsl_DiagnosticSessionHandler_GetP2StarMaxTime (instIdx_9(D));
  # DEBUG P2StarMaxTime => P2StarMaxTime_12
  # DEBUG BEGIN_STMT
  _2 = Dcm_ProtocolConfig[_1].P2StarServerAdjustTime;
  P2StarServerAdjustTime_13 = (Dcm_TimerValueType) _2;
  # DEBUG P2StarServerAdjustTime => P2StarServerAdjustTime_13
  # DEBUG BEGIN_STMT
  if (P2StarMaxTime_12 > P2StarServerAdjustTime_13)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = (short unsigned int) instIdx_9(D);
  _4 = _3 + 12;
  _5 = P2StarMaxTime_12 - P2StarServerAdjustTime_13;
  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer (_4, instIdx_9(D), _5);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) instIdx_9(D);
  _7 = _6 + 12;
  Dcm_Dsl_DiagnosticSessionHandler_StartP2Timer (_7, instIdx_9(D), 0);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].responsePendingTxStatus = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfSendRpForcedAction1 (Dcm_HsmDcmSfSendRpForcedAction1, funcdef_no=41, decl_uid=5811, cgraph_uid=42, symbol_order=41)

Modification phase of node Dcm_HsmDcmSfSendRpForcedAction1/41
Dcm_HsmDcmSfSendRpForcedAction1 (const uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_DspInternal_SvcFunc (instIdx_2(D), 3);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfWaitForApplGuard2 (Dcm_HsmDcmSfWaitForApplGuard2, funcdef_no=42, decl_uid=5799, cgraph_uid=43, symbol_order=42)

Modification phase of node Dcm_HsmDcmSfWaitForApplGuard2/42
Dcm_HsmDcmSfWaitForApplGuard2 (const uint8 instIdx)
{
  boolean SendGeneralReject;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SendGeneralReject_4 = Dcm_CheckForGeneralRejectConditions (instIdx_2(D));
  # DEBUG SendGeneralReject => SendGeneralReject_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return SendGeneralReject_4;

}



;; Function Dcm_HsmDcmSfWaitForApplGuard3 (Dcm_HsmDcmSfWaitForApplGuard3, funcdef_no=43, decl_uid=5801, cgraph_uid=44, symbol_order=43)

Modification phase of node Dcm_HsmDcmSfWaitForApplGuard3/43
Dcm_HsmDcmSfWaitForApplGuard3 (const uint8 instIdx)
{
  boolean SendResponsePending;
  unsigned char _1;
  _Bool _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Dcm_CheckForGeneralRejectConditions (instIdx_4(D));
  _2 = _1 == 0;
  SendResponsePending_6 = (boolean) _2;
  # DEBUG SendResponsePending => SendResponsePending_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return SendResponsePending_6;

}



;; Function Dcm_HsmDcmSfWaitForApplGuard4 (Dcm_HsmDcmSfWaitForApplGuard4, funcdef_no=73, decl_uid=5803, cgraph_uid=45, symbol_order=44)

Modification phase of node Dcm_HsmDcmSfWaitForApplGuard4/44
Dcm_HsmDcmSfWaitForApplGuard4 (const uint8 instIdx)
{
  boolean retval.57;

  <bb 2> [local count: 1073741824]:
  retval.57_4 = Dcm_HsmDcmSfWaitForApplGuard2 (instIdx_2(D)); [tail call]
  return retval.57_4;

}



;; Function Dcm_HsmDcmSfWaitForApplGuard5 (Dcm_HsmDcmSfWaitForApplGuard5, funcdef_no=75, decl_uid=5805, cgraph_uid=46, symbol_order=45)

Modification phase of node Dcm_HsmDcmSfWaitForApplGuard5/45
Dcm_HsmDcmSfWaitForApplGuard5 (const uint8 instIdx)
{
  boolean retval.58;

  <bb 2> [local count: 1073741824]:
  retval.58_4 = Dcm_HsmDcmSfWaitForApplGuard3 (instIdx_2(D)); [tail call]
  return retval.58_4;

}



;; Function Dcm_HsmDcmSfSendingEntry (Dcm_HsmDcmSfSendingEntry, funcdef_no=46, decl_uid=5827, cgraph_uid=47, symbol_order=46)

Modification phase of node Dcm_HsmDcmSfSendingEntry/46
Dcm_HsmDcmSfSendingEntry (const uint8 instIdx)
{
  Dcm_TransmissionTimeoutType TransmissionTimeout;
  boolean SimulateTransmission;
  struct Dcm_HsmInfoType * curHsmInfo;
  int _1;
  unsigned char _2;
  Dcm_MsgItemType * _3;
  Dcm_MsgItemType * _4;
  unsigned char _5;
  Dcm_MsgItemType * _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;
  unsigned char _13;
  short unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  unsigned char _19;
  long unsigned int _20;
  long unsigned int _21;
  unsigned char _22;
  unsigned char _23;
  short unsigned int _24;
  short unsigned int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_28(D);
  curHsmInfo_29 = &Dcm_HsmInfo[_1];
  # DEBUG curHsmInfo => curHsmInfo_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SimulateTransmission_31 = Dcm_SuppressResponse (instIdx_28(D));
  # DEBUG SimulateTransmission => SimulateTransmission_31
  # DEBUG BEGIN_STMT
  TransmissionTimeout_33 = Dcm_Dsl_DiagnosticSessionHandler_GetTimerValue (instIdx_28(D), 2);
  # DEBUG TransmissionTimeout => TransmissionTimeout_33
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  *_3 = 127;
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  _5 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  MEM[(Dcm_MsgItemType *)_4 + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferPtr;
  _7 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode;
  MEM[(Dcm_MsgItemType *)_6 + 2B] = _7;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.FilledLength = 3;
  # DEBUG BEGIN_STMT
  _8 = (short unsigned int) instIdx_28(D);
  _9 = _8 + 12;
  _10 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _11 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer.BufferId;
  Dcm_Dsl_BufferGive (_9, _10, _11);
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _13 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].ComMChannelId;
  Dcm_Dsl_TxConnectionTransmit (_12, _13, _9, SimulateTransmission_31, 3, TransmissionTimeout_33, curHsmInfo_29->NRCBuffer);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _14 = (short unsigned int) instIdx_28(D);
  _15 = _14 + 12;
  _16 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _17 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer.BufferId;
  Dcm_Dsl_BufferGive (_15, _16, _17);
  # DEBUG BEGIN_STMT
  _18 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _19 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].ComMChannelId;
  _20 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.resDataLen;
  _21 = _20 + 1;
  Dcm_Dsl_TxConnectionTransmit (_18, _19, _15, SimulateTransmission_31, _21, TransmissionTimeout_33, curHsmInfo_29->TxBuffer);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _22 = Dcm_HsmInfo[_1].RequestType;
  _23 = _22 + 255;
  if (_23 <= 1)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  _24 = (short unsigned int) instIdx_28(D);
  _25 = _24 + 12;
  Dcm_Dsl_DiagnosticSessionHandler_StopTimer (_25, instIdx_28(D), 2);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_DiagnosticSessionHandler_FreeP2Timer (_25, instIdx_28(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfNormalSendingCancellingEntry (Dcm_HsmDcmSfNormalSendingCancellingEntry, funcdef_no=47, decl_uid=5829, cgraph_uid=48, symbol_order=47)

Modification phase of node Dcm_HsmDcmSfNormalSendingCancellingEntry/47
Dcm_HsmDcmSfNormalSendingCancellingEntry (const uint8 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolSetUpCancellation (1, instIdx_4(D));
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_4(D);
  _2 = Dcm_HsmInfo[_1].TxConnectionId;
  Dcm_Dsl_TxConnectionCancelTransmit (_2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfPgBufSendingCancellingEntry (Dcm_HsmDcmSfPgBufSendingCancellingEntry, funcdef_no=48, decl_uid=5835, cgraph_uid=49, symbol_order=48)

Modification phase of node Dcm_HsmDcmSfPgBufSendingCancellingEntry/48
Dcm_HsmDcmSfPgBufSendingCancellingEntry (const uint8 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolSetUpCancellation (2, instIdx_4(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolCancelProcessing (instIdx_4(D));
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_4(D);
  _2 = Dcm_HsmInfo[_1].TxConnectionId;
  Dcm_Dsl_TxConnectionCancelTransmit (_2);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfPgBufDataAvailableAction1 (Dcm_HsmDcmSfPgBufDataAvailableAction1, funcdef_no=49, decl_uid=5831, cgraph_uid=50, symbol_order=49)

Modification phase of node Dcm_HsmDcmSfPgBufDataAvailableAction1/49
Dcm_HsmDcmSfPgBufDataAvailableAction1 (const uint8 instIdx)
{
  int _1;
  unsigned char _2;
  Dcm_MsgItemType * _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_6(D);
  _2 = Dcm_HsmInfo[_1].dspService;
  if (_2 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_1].TxBuffer.FilledLength = 0;
  # DEBUG BEGIN_STMT
  _3 = Dcm_HsmInfo[_1].TxBuffer.BufferPtr;
  _4 = Dcm_HsmInfo[_1].TxBuffer.Size;
  Dcm_DspInternal_UpdatePage (_3, _4);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_HsmDcmSfPgBufDataRequestedAction1 (Dcm_HsmDcmSfPgBufDataRequestedAction1, funcdef_no=50, decl_uid=5833, cgraph_uid=51, symbol_order=50)

Modification phase of node Dcm_HsmDcmSfPgBufDataRequestedAction1/50
Dcm_HsmDcmSfPgBufDataRequestedAction1 (const uint8 instIdx)
{
  short unsigned int _1;
  short unsigned int _2;
  int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) instIdx_7(D);
  _2 = _1 + 12;
  _3 = (int) instIdx_7(D);
  _4 = Dcm_HsmInfo[_3].TxConnectionId;
  _5 = Dcm_HsmInfo[_3].TxBuffer.BufferId;
  Dcm_Dsl_BufferGive (_2, _4, _5);
  # DEBUG BEGIN_STMT
  _6 = Dcm_HsmInfo[_3].TxConnectionId;
  Dcm_Dsl_TxConnectionProcessNextTxBuffer (_6, Dcm_HsmInfo[_3].TxBuffer);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


