
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_GetSesCtrlTypeExt/88:
  Jump functions of caller  Dem_DcmReadDataOfPID41/87:
  Jump functions of caller  Dem_DcmReadDataOfPID01/86:
  Jump functions of caller  SchM_Switch_Dcm_DcmResponseOnEvent_0/85:
  Jump functions of caller  Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/84:
  Jump functions of caller  Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/83:
  Jump functions of caller  Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/82:
  Jump functions of caller  Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/81:
  Jump functions of caller  Dcm_Internalf191Readout/80:
  Jump functions of caller  Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH/79:
  Jump functions of caller  Dcm_DspInternal_HardReset_SSvcH/78:
  Jump functions of caller  Dcm_DspInternal_ReportUserDefMemoryDtcExtendedDataRecordByDtcNumber_SSvcH/77:
  Jump functions of caller  Dcm_DspInternal_ReportUserDefMemoryDtcSnapshotRecordByDtcNumber_SSvcH/76:
  Jump functions of caller  Dcm_DspInternal_ReportUserDefMemoryDTCByStatusMask_SSvcH/75:
  Jump functions of caller  Dcm_DspInternal_ReportDTCFaultDetectionCounter_SSvcH/74:
  Jump functions of caller  Dcm_DspInternal_ReportSupportedDtcs_SSvcH/73:
  Jump functions of caller  Dcm_DspInternal_ReportDtcExtendedDataRecordByDtcNumber_SSvcH/72:
  Jump functions of caller  Dcm_DspInternal_ReportDtcSnapshotRecordByDtcNumber_SSvcH/71:
  Jump functions of caller  Dcm_DspInternal_ReportDTCByStatusMask_SSvcH/70:
  Jump functions of caller  Dcm_DspInternal_ReportNumberOfDTCByStatusMask_SSvcH/69:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/68:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/67:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/66:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/65:
  Jump functions of caller  Dcm_Dsp_RoutineControl_RequestResults_SSvcH/64:
  Jump functions of caller  Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/63:
  Jump functions of caller  Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/62:
  Jump functions of caller  Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/61:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_Off_SSvcH/60:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_On_SSvcH/59:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/58:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/57:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/56:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_SvcH/55:
  Jump functions of caller  Dcm_Dsp_ControlDTCSetting_SvcH/54:
  Jump functions of caller  Dcm_Dsp_TesterPresent_SvcH/53:
  Jump functions of caller  Dcm_Dsp_RoutineControl_SvcH/52:
  Jump functions of caller  Dcm_Dsp_WriteDataByIdentifier_SvcH/51:
  Jump functions of caller  Dcm_Dsp_CommunicationControl_SvcH/50:
  Jump functions of caller  Dcm_Dsp_SecurityAccess_SvcH/49:
  Jump functions of caller  Dcm_Dsp_ReadDataByIdentifier_SvcH/48:
  Jump functions of caller  Dcm_DspInternal_ReadDTCInformation_SvcH/47:
  Jump functions of caller  Dcm_DspInternal_ClearDiagnosticInformation_SvcH/46:
  Jump functions of caller  Dcm_DspInternal_ECUReset_SvcH/45:
  Jump functions of caller  Dcm_DspInternal_DiagnosticSessionControl_SvcH/44:
  Jump functions of caller  Dcm_DspInternal_RequestPermanentDTC_SvcH/43:
  Jump functions of caller  Dcm_DspInternal_RequestVehicleInformation_SvcH/42:
  Jump functions of caller  Dcm_DspInternal_RequestPendingDTC_SvcH/41:
  Jump functions of caller  Dcm_DspInternal_ClearEmissionDiagInfo_SvcH/40:
  Jump functions of caller  Dcm_DspInternal_RequestConfirmedDTC_SvcH/39:
  Jump functions of caller  Dcm_Dsp_RequestPowertrainFreezeFrameData_SvcH/38:
  Jump functions of caller  Dcm_Dsp_RequestCurrentPowertrainDiagnosticData_SvcH/37:
  Jump functions of caller  Dcm_Internalf186Readout/36:

 Propagating constants:

Not considering Dcm_Internalf186Readout for cloning; -fipa-cp-clone disabled.

overall_size: 6, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Internalf186Readout/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_GetSesCtrlTypeExt/88 (Dcm_GetSesCtrlTypeExt) @06f7ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Internalf186Readout/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_DcmReadDataOfPID41/87 (Dem_DcmReadDataOfPID41) @06f7c8c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspPidDataConfig/31 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_DcmReadDataOfPID01/86 (Dem_DcmReadDataOfPID01) @06f7c7e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspPidDataConfig/31 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
SchM_Switch_Dcm_DcmResponseOnEvent_0/85 (SchM_Switch_Dcm_DcmResponseOnEvent_0) @06f7c700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_RoeSchMSwitchFunctionList/30 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/84 (Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation) @06f7c620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_RteSupplierNotificationTable/27 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/83 (Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication) @06f7c540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_RteSupplierNotificationTable/27 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/82 (Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation) @06f7c460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_RteManufacturerNotificationTable/26 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/81 (Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication) @06f7c380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_RteManufacturerNotificationTable/26 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Internalf191Readout/80 (Dcm_Internalf191Readout) @06f7c2a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DidDataTable/23 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH/79 (Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH) @06f7c1c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16/2 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16/2 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_HardReset_SSvcH/78 (Dcm_DspInternal_HardReset_SSvcH) @06f7c0e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig17/3 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportUserDefMemoryDtcExtendedDataRecordByDtcNumber_SSvcH/77 (Dcm_DspInternal_ReportUserDefMemoryDtcExtendedDataRecordByDtcNumber_SSvcH) @06f7c000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportUserDefMemoryDtcSnapshotRecordByDtcNumber_SSvcH/76 (Dcm_DspInternal_ReportUserDefMemoryDtcSnapshotRecordByDtcNumber_SSvcH) @06f7bb60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportUserDefMemoryDTCByStatusMask_SSvcH/75 (Dcm_DspInternal_ReportUserDefMemoryDTCByStatusMask_SSvcH) @06f7bee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportDTCFaultDetectionCounter_SSvcH/74 (Dcm_DspInternal_ReportDTCFaultDetectionCounter_SSvcH) @06f7be00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportSupportedDtcs_SSvcH/73 (Dcm_DspInternal_ReportSupportedDtcs_SSvcH) @06f7bd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportDtcExtendedDataRecordByDtcNumber_SSvcH/72 (Dcm_DspInternal_ReportDtcExtendedDataRecordByDtcNumber_SSvcH) @06f7bc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportDtcSnapshotRecordByDtcNumber_SSvcH/71 (Dcm_DspInternal_ReportDtcSnapshotRecordByDtcNumber_SSvcH) @06f7ba80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportDTCByStatusMask_SSvcH/70 (Dcm_DspInternal_ReportDTCByStatusMask_SSvcH) @06f7b9a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReportNumberOfDTCByStatusMask_SSvcH/69 (Dcm_DspInternal_ReportNumberOfDTCByStatusMask_SSvcH) @06f7b8c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/68 (Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH) @06f7b7e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/67 (Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH) @06f7b620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/66 (Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH) @06f7b540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/65 (Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH) @06f7b460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_RoutineControl_RequestResults_SSvcH/64 (Dcm_Dsp_RoutineControl_RequestResults_SSvcH) @06f7b380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/63 (Dcm_Dsp_RoutineControl_StopRoutine_SSvcH) @06f7b2a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/62 (Dcm_Dsp_RoutineControl_StartRoutine_SSvcH) @06f7b1c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/61 (Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH) @06f7b0e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62/8 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ControlDTCSetting_Off_SSvcH/60 (Dcm_Dsp_ControlDTCSetting_Off_SSvcH) @06f7b000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133/9 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ControlDTCSetting_On_SSvcH/59 (Dcm_Dsp_ControlDTCSetting_On_SSvcH) @06f79380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133/9 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/58 (Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH) @06f79e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/57 (Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH) @06f79d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/56 (Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH) @06f79c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ResponseOnEvent_SvcH/55 (Dcm_Dsp_ResponseOnEvent_SvcH) @06f79b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ControlDTCSetting_SvcH/54 (Dcm_Dsp_ControlDTCSetting_SvcH) @06f79a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_TesterPresent_SvcH/53 (Dcm_Dsp_TesterPresent_SvcH) @06f799a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_RoutineControl_SvcH/52 (Dcm_Dsp_RoutineControl_SvcH) @06f798c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_WriteDataByIdentifier_SvcH/51 (Dcm_Dsp_WriteDataByIdentifier_SvcH) @06f797e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_CommunicationControl_SvcH/50 (Dcm_Dsp_CommunicationControl_SvcH) @06f79700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_SecurityAccess_SvcH/49 (Dcm_Dsp_SecurityAccess_SvcH) @06f79620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ReadDataByIdentifier_SvcH/48 (Dcm_Dsp_ReadDataByIdentifier_SvcH) @06f79540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ReadDTCInformation_SvcH/47 (Dcm_DspInternal_ReadDTCInformation_SvcH) @06f79460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ClearDiagnosticInformation_SvcH/46 (Dcm_DspInternal_ClearDiagnosticInformation_SvcH) @06f792a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ECUReset_SvcH/45 (Dcm_DspInternal_ECUReset_SvcH) @06f791c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_DiagnosticSessionControl_SvcH/44 (Dcm_DspInternal_DiagnosticSessionControl_SvcH) @06f790e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_RequestPermanentDTC_SvcH/43 (Dcm_DspInternal_RequestPermanentDTC_SvcH) @06f79000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_RequestVehicleInformation_SvcH/42 (Dcm_DspInternal_RequestVehicleInformation_SvcH) @06f77e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_RequestPendingDTC_SvcH/41 (Dcm_DspInternal_RequestPendingDTC_SvcH) @06f77d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_ClearEmissionDiagInfo_SvcH/40 (Dcm_DspInternal_ClearEmissionDiagInfo_SvcH) @06f77c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspInternal_RequestConfirmedDTC_SvcH/39 (Dcm_DspInternal_RequestConfirmedDTC_SvcH) @06f77b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_RequestPowertrainFreezeFrameData_SvcH/38 (Dcm_Dsp_RequestPowertrainFreezeFrameData_SvcH) @06f77a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_RequestCurrentPowertrainDiagnosticData_SvcH/37 (Dcm_Dsp_RequestCurrentPowertrainDiagnosticData_SvcH) @06f779a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_SidTabEntryConfig1/12 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_Internalf186Readout/36 (Dcm_Internalf186Readout) @06f778c0
  Type: function definition analyzed
  Visibility: externally_visible public
  Address is taken.
  References: 
  Referring: Dcm_DidDataTable/23 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_GetSesCtrlTypeExt/88 (1073741824 (estimated locally),1.00 per call) 
Dcm_DspPidConfig/35 (Dcm_DspPidConfig) @06f27900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DspPidUsed/34 (Dcm_DspPidUsed) @06f277e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DsdServiceUsed/33 (Dcm_DsdServiceUsed) @06f276c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DsdSubServiceUsed/32 (Dcm_DsdSubServiceUsed) @06f27750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DspPidDataConfig/31 (Dcm_DspPidDataConfig) @06f27678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dem_DcmReadDataOfPID01/86 (addr)Dem_DcmReadDataOfPID41/87 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_RoeSchMSwitchFunctionList/30 (Dcm_RoeSchMSwitchFunctionList) @06f275e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: SchM_Switch_Dcm_DcmResponseOnEvent_0/85 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_RoeEventWindowTimePreconfList/29 (Dcm_RoeEventWindowTimePreconfList) @06f275a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_RoeEventPreconfList/28 (Dcm_RoeEventPreconfList) @06f27558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_RteSupplierNotificationTable/27 (Dcm_RteSupplierNotificationTable) @06f27510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/83 (addr)Rte_Call_Dcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/84 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_RteManufacturerNotificationTable/26 (Dcm_RteManufacturerNotificationTable) @06f274c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/81 (addr)Rte_Call_Dcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/82 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidDataSizeArray/25 (Dcm_DidDataSizeArray) @06f27480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidDataIndexingArray/24 (Dcm_DidDataIndexingArray) @06f27438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidDataTable/23 (Dcm_DidDataTable) @06f273f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dcm_Internalf186Readout/36 (addr)Dcm_Internalf191Readout/80 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabConfig/22 (Dcm_SidTabConfig) @06f27f78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig1/12 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SesTabConfig/21 (Dcm_SesTabConfig) @06f27f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dcm_SesTabEntryConfig0/20 (addr)Dcm_SesTabEntryConfig0/20 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SesTabEntryConfig0/20 (Dcm_SesTabEntryConfig0) @06f27ee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_SesTabConfig/21 (addr)Dcm_SesTabConfig/21 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
DcmConfigSet/19 (DcmConfigSet) @06f27dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DspModeRuleDTCFunction/18 (Dcm_DspModeRuleDTCFunction) @06f27d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidConfig/17 (Dcm_DidConfig) @06f27d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidInfo/16 (Dcm_DidInfo) @06f27c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidWriteAccessInfo/15 (Dcm_DidWriteAccessInfo) @06f27bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidReadAccessInfo/14 (Dcm_DidReadAccessInfo) @06f27b40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DidSignals/13 (Dcm_DidSignals) @06f27a68
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig1/12 (Dcm_SidTabEntryConfig1) @06f27a20
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_RequestCurrentPowertrainDiagnosticData_SvcH/37 (addr)Dcm_Dsp_RequestPowertrainFreezeFrameData_SvcH/38 (addr)Dcm_DspInternal_RequestConfirmedDTC_SvcH/39 (addr)Dcm_DspInternal_ClearEmissionDiagInfo_SvcH/40 (addr)Dcm_DspInternal_RequestPendingDTC_SvcH/41 (addr)Dcm_DspInternal_RequestVehicleInformation_SvcH/42 (addr)Dcm_DspInternal_RequestPermanentDTC_SvcH/43 (addr)
  Referring: Dcm_SidTabConfig/22 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0/11 (Dcm_SidTabEntryConfig0) @06f27798
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16/2 (addr)Dcm_DspInternal_DiagnosticSessionControl_SvcH/44 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig17/3 (addr)Dcm_DspInternal_ECUReset_SvcH/45 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_DspInternal_ClearDiagnosticInformation_SvcH/46 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)Dcm_DspInternal_ReadDTCInformation_SvcH/47 (addr)Dcm_Dsp_ReadDataByIdentifier_SvcH/48 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39/5 (addr)Dcm_Dsp_SecurityAccess_SvcH/49 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)Dcm_Dsp_CommunicationControl_SvcH/50 (addr)Dcm_Dsp_WriteDataByIdentifier_SvcH/51 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49/7 (addr)Dcm_Dsp_RoutineControl_SvcH/52 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62/8 (addr)Dcm_Dsp_TesterPresent_SvcH/53 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133/9 (addr)Dcm_Dsp_ControlDTCSetting_SvcH/54 (addr)Dcm_SidTabSesLevels/1 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)Dcm_Dsp_ResponseOnEvent_SvcH/55 (addr)
  Referring: Dcm_SidTabConfig/22 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134) @06f273a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/56 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/57 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/58 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133/9 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133) @06f27288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_ControlDTCSetting_On_SSvcH/59 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_ControlDTCSetting_Off_SSvcH/60 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62/8 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62) @06f271b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_TesterPresent_ZeroSubFunction_SSvcH/61 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49/7 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig49) @06f27120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_RoutineControl_StartRoutine_SSvcH/62 (addr)Dcm_Dsp_RoutineControl_StopRoutine_SSvcH/63 (addr)Dcm_Dsp_RoutineControl_RequestResults_SSvcH/64 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40) @06f27000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_CommunicationControl_EnableRxAndTx_SSvcH/65 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_CommunicationControl_EnableRxAndDisableTx_SSvcH/66 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_CommunicationControl_DisableRxAndEnableTx_SSvcH/67 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_Dsp_CommunicationControl_DisableRxAndTx_SSvcH/68 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39/5 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39) @06e5df78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SubSidTabSesLevels/0 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_SubSidTabSesLevels/0 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25) @06e5de10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_SubSidTabSesLevels/0 (addr)Dcm_DspInternal_ReportNumberOfDTCByStatusMask_SSvcH/69 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_DspInternal_ReportDTCByStatusMask_SSvcH/70 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_DspInternal_ReportDtcSnapshotRecordByDtcNumber_SSvcH/71 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_DspInternal_ReportDtcExtendedDataRecordByDtcNumber_SSvcH/72 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_DspInternal_ReportSupportedDtcs_SSvcH/73 (addr)Dcm_SubSidTabSesLevels/0 (addr)Dcm_DspInternal_ReportDTCFaultDetectionCounter_SSvcH/74 (addr)Dcm_DspInternal_ReportUserDefMemoryDTCByStatusMask_SSvcH/75 (addr)Dcm_DspInternal_ReportUserDefMemoryDtcSnapshotRecordByDtcNumber_SSvcH/76 (addr)Dcm_DspInternal_ReportUserDefMemoryDtcExtendedDataRecordByDtcNumber_SSvcH/77 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig17/3 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig17) @06e5daf8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DspInternal_HardReset_SSvcH/78 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16/2 (Dcm_SidTabEntryConfig0_SubSidTabEntryConfig16) @06e5da68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH/79 (addr)Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH/79 (addr)Dcm_DspInternal_DiagnosticSessionControlCommon_SSvcH/79 (addr)
  Referring: Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SidTabSesLevels/1 (Dcm_SidTabSesLevels) @06e5d900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)Dcm_SidTabEntryConfig0/11 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_SubSidTabSesLevels/0 (Dcm_SubSidTabSesLevels) @06e5d870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig134/10 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133/9 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig133/9 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig62/8 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig40/6 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39/5 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39/5 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39/5 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig39/5 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)Dcm_SidTabEntryConfig0_SubSidTabEntryConfig25/4 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Dcm_Internalf186Readout (Dcm_Internalf186Readout, funcdef_no=0, decl_uid=5700, cgraph_uid=1, symbol_order=36)

Modification phase of node Dcm_Internalf186Readout/36
Dcm_Internalf186Readout (uint8 * Data)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  retVal_4 = Dcm_GetSesCtrlTypeExt (Data_2(D));
  # DEBUG retVal => retVal_4
  # DEBUG BEGIN_STMT
  return retVal_4;

}


