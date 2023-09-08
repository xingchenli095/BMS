
IPA constant propagation start:
Determining dynamic type for call: Dcm_DspInternal_SetupPageBuffering (pMsgContext_20(D), _6);
  Starting walk at: Dcm_DspInternal_SetupPageBuffering (pMsgContext_20(D), _6);
  instance pointer: pMsgContext_20(D)  Outer instance pointer: pMsgContext_20(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_DspInternal_EnableProcessPage (pMsgContext_4(D), 1);
  Starting walk at: Dcm_DspInternal_EnableProcessPage (pMsgContext_4(D), 1);
  instance pointer: pMsgContext_4(D)  Outer instance pointer: pMsgContext_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_DspInternal_EnableProcessPage (pMsgContext_4(D), 0);
  Starting walk at: Dcm_DspInternal_EnableProcessPage (pMsgContext_4(D), 0);
  instance pointer: pMsgContext_4(D)  Outer instance pointer: pMsgContext_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  Starting walk at: ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  instance pointer: pMsgContext_25(D)  Outer instance pointer: pMsgContext_25(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  Starting walk at: ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  instance pointer: DiagnosticDataContext_30(D)  Outer instance pointer: DiagnosticDataContext_30(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  Starting walk at: ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  instance pointer: ReadEventDataSubServiceContext_29(D)  Outer instance pointer: ReadEventDataSubServiceContext_29(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ResultFromGetExtendedDataRecord_31 = Dcm_DemFacade_ProcessDEMResponseFromGetData (DiagnosticDataContext_28(D), ResultCodeFromDEM_36);
  Starting walk at: ResultFromGetExtendedDataRecord_31 = Dcm_DemFacade_ProcessDEMResponseFromGetData (DiagnosticDataContext_28(D), ResultCodeFromDEM_36);
  instance pointer: DiagnosticDataContext_28(D)  Outer instance pointer: DiagnosticDataContext_28(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
Determining dynamic type for call: ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
  Starting walk at: ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
Determining dynamic type for call: ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
  Starting walk at: ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
  instance pointer: &AvailableBufferSize  Outer instance pointer: AvailableBufferSize offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
Determining dynamic type for call: ResultCodeFromDEM_20 = _1 (ClientId_18(D), &SizeOfEventData);
  Starting walk at: ResultCodeFromDEM_20 = _1 (ClientId_18(D), &SizeOfEventData);
  instance pointer: &SizeOfEventData  Outer instance pointer: SizeOfEventData offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ResultFromSelectData_13 = Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0 (_18, ResultCodeFromDEM_10);
  Starting walk at: ResultFromSelectData_13 = Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0 (_18, ResultCodeFromDEM_10);
  instance pointer: _18  Outer instance pointer: DiagnosticDataContext_6(D) offset: 400 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromDEM_10 = _1 (ClientId_8(D), RequestedDataRecord_7);
Determining dynamic type for call: ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
  Starting walk at: ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
  instance pointer: _2  Outer instance pointer: _1 offset: 688 (bits) vtbl reference: 
Determining dynamic type for call: SelectEventDataResult_28 = Dcm_DemFacade_SelectEventData (ClientId_23(D), DiagnosticDataContext_24);
  Starting walk at: SelectEventDataResult_28 = Dcm_DemFacade_SelectEventData (ClientId_23(D), DiagnosticDataContext_24);
  instance pointer: DiagnosticDataContext_24  Outer instance pointer: _1 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
Determining dynamic type for call: ResultCodeFromGetSizeOfEventData_30 = Dcm_DemFacade_GetSizeOfEventData (ClientId_23(D), DiagnosticDataContext_24);
  Starting walk at: ResultCodeFromGetSizeOfEventData_30 = Dcm_DemFacade_GetSizeOfEventData (ClientId_23(D), DiagnosticDataContext_24);
  instance pointer: DiagnosticDataContext_24  Outer instance pointer: _1 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
  Function call may change dynamic type:SelectEventDataResult_28 = Dcm_DemFacade_SelectEventData (ClientId_23(D), DiagnosticDataContext_24);
Determining dynamic type for call: ResultCodeFromGetEventData_33 = Dcm_DemFacade_GetEventData (ClientId_23(D), DiagnosticDataContext_24);
  Starting walk at: ResultCodeFromGetEventData_33 = Dcm_DemFacade_GetEventData (ClientId_23(D), DiagnosticDataContext_24);
  instance pointer: DiagnosticDataContext_24  Outer instance pointer: _1 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
  Function call may change dynamic type:SelectEventDataResult_28 = Dcm_DemFacade_SelectEventData (ClientId_23(D), DiagnosticDataContext_24);
  Function call may change dynamic type:ResultCodeFromGetSizeOfEventData_30 = Dcm_DemFacade_GetSizeOfEventData (ClientId_23(D), DiagnosticDataContext_24);
Determining dynamic type for call: ResultCodeFromRecordUpdate_35 = Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_23(D), _2);
  Starting walk at: ResultCodeFromRecordUpdate_35 = Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_23(D), _2);
  instance pointer: _2  Outer instance pointer: _1 offset: 688 (bits) vtbl reference: 
  Function call may change dynamic type:ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
  Function call may change dynamic type:SelectEventDataResult_28 = Dcm_DemFacade_SelectEventData (ClientId_23(D), DiagnosticDataContext_24);
  Function call may change dynamic type:ResultCodeFromGetSizeOfEventData_30 = Dcm_DemFacade_GetSizeOfEventData (ClientId_23(D), DiagnosticDataContext_24);
  Function call may change dynamic type:ResultCodeFromGetEventData_33 = Dcm_DemFacade_GetEventData (ClientId_23(D), DiagnosticDataContext_24);
Determining dynamic type for call: FacadeReturnCode_85 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _54);
  Starting walk at: FacadeReturnCode_85 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _54);
  instance pointer: _54  Outer instance pointer: ClientContextPtr_78 offset: 256 (bits) vtbl reference: 
Determining dynamic type for call: FacadeReturnCode_87 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _53);
  Starting walk at: FacadeReturnCode_87 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _53);
  instance pointer: _53  Outer instance pointer: ClientContextPtr_78 offset: 256 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Starting walk at: Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  instance pointer: ClientContextPtr_78  Outer instance pointer: ClientContextPtr_78 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Starting walk at: Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Starting walk at: FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  instance pointer: _24  Outer instance pointer: _24 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
Determining dynamic type for call: FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Starting walk at: FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  instance pointer: &DataSize  Outer instance pointer: DataSize offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
Determining dynamic type for call: FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
  Starting walk at: FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
  instance pointer: _34  Outer instance pointer: ClientContextPtr_78 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Function call may change dynamic type:FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
Determining dynamic type for call: FacadeReturnCode_111 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _44);
  Starting walk at: FacadeReturnCode_111 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _44);
  instance pointer: _44  Outer instance pointer: ClientContextPtr_78 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Function call may change dynamic type:FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Function call may change dynamic type:FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
Determining dynamic type for call: FacadeReturnCode_113 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _43);
  Starting walk at: FacadeReturnCode_113 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _43);
  instance pointer: _43  Outer instance pointer: ClientContextPtr_78 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Function call may change dynamic type:FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Function call may change dynamic type:FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
Determining dynamic type for call: ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  Starting walk at: ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  instance pointer: pMsgContext_80(D)  Outer instance pointer: pMsgContext_80(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Function call may change dynamic type:FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Function call may change dynamic type:FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
  Function call may change dynamic type:FacadeReturnCode_85 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _54);
  Function call may change dynamic type:FacadeReturnCode_113 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _43);
  Function call may change dynamic type:FacadeReturnCode_111 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _44);
  Function call may change dynamic type:FacadeReturnCode_87 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _53);
Determining dynamic type for call: ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  Starting walk at: ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  instance pointer: _55  Outer instance pointer: ClientContextPtr_78 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Function call may change dynamic type:FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Function call may change dynamic type:FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
  Function call may change dynamic type:FacadeReturnCode_85 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _54);
  Function call may change dynamic type:FacadeReturnCode_113 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _43);
  Function call may change dynamic type:FacadeReturnCode_111 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _44);
  Function call may change dynamic type:FacadeReturnCode_87 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _53);
Determining dynamic type for call: ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  Starting walk at: ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  instance pointer: ClientContextPtr_78  Outer instance pointer: ClientContextPtr_78 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);
  Function call may change dynamic type:FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  Function call may change dynamic type:FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
  Function call may change dynamic type:FacadeReturnCode_85 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _54);
  Function call may change dynamic type:FacadeReturnCode_113 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _43);
  Function call may change dynamic type:FacadeReturnCode_111 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _44);
  Function call may change dynamic type:FacadeReturnCode_87 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _53);
Determining dynamic type for call: Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
  Starting walk at: Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
  instance pointer: _18  Outer instance pointer: ClientContextPtr_39 offset: 688 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Starting walk at: Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  instance pointer: _7  Outer instance pointer: ClientContextPtr_39 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
Determining dynamic type for call: Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Starting walk at: Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
Determining dynamic type for call: FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Starting walk at: FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  instance pointer: &Dcm_GetDTCStatusContext  Outer instance pointer: Dcm_GetDTCStatusContext offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
Determining dynamic type for call: ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  Starting walk at: ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  instance pointer: pMsgContext_41(D)  Outer instance pointer: pMsgContext_41(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 161, 2);
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
Determining dynamic type for call: ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  Starting walk at: ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  instance pointer: _26  Outer instance pointer: ClientContextPtr_39 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 161, 2);
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
Determining dynamic type for call: ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  Starting walk at: ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  instance pointer: ClientContextPtr_39  Outer instance pointer: ClientContextPtr_39 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 161, 2);
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
Determining dynamic type for call: ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  Starting walk at: ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  instance pointer: pMsgContext_41(D)  Outer instance pointer: pMsgContext_41(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 161, 2);
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
Determining dynamic type for call: ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  Starting walk at: ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  instance pointer: _20  Outer instance pointer: ClientContextPtr_39 offset: 256 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 161, 2);
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);
Determining dynamic type for call: ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  Starting walk at: ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  instance pointer: ClientContextPtr_39  Outer instance pointer: ClientContextPtr_39 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 161, 2);
  Function call may change dynamic type:Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  Function call may change dynamic type:Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  Function call may change dynamic type:FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  Function call may change dynamic type:Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_DemFacade_EnableDTCRecordUpdate.part.0/72:
  Jump functions of caller  Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71:
  Jump functions of caller  Dem_ClearDTC/70:
  Jump functions of caller  Dem_GetDTCSelectionResultForClearDTC/69:
  Jump functions of caller  Dem_DisableDTCSetting/68:
  Jump functions of caller  Dem_EnableDTCSetting/67:
  Jump functions of caller  Dem_DcmGetDTCOfOBDFreezeFrame/66:
  Jump functions of caller  Dem_DcmReadDataOfOBDFreezeFrame/65:
  Jump functions of caller  Dcm_Internal_ReleaseLock/63:
  Jump functions of caller  Dcm_Internal_GetLock/62:
  Jump functions of caller  Dem_GetNextFilteredDTCAndFDC/58:
  Jump functions of caller  Dem_GetNextFilteredDTC/57:
  Jump functions of caller  Dem_GetNextFilteredDTCAndSeverity/56:
  Jump functions of caller  Dem_GetNumberOfFilteredDTC/55:
  Jump functions of caller  Dem_SetDTCFilter/54:
  Jump functions of caller  Dem_GetTranslationType/53:
  Jump functions of caller  Dem_GetDTCStatusAvailabilityMask/52:
  Jump functions of caller  Dcm_DsdInternal_StartPagedProcessing/51:
  Jump functions of caller  Dcm_DsdInternal_ProcessPage/50:
  Jump functions of caller  Dem_EnableDTCRecordUpdate/49:
  Jump functions of caller  Dem_DisableDTCRecordUpdate/48:
  Jump functions of caller  Dem_GetStatusOfDTC/47:
  Jump functions of caller  Dem_GetNextFreezeFrameData/46:
  Jump functions of caller  Dem_GetSizeOfFreezeFrameSelection/45:
  Jump functions of caller  Dem_SelectFreezeFrameData/44:
  Jump functions of caller  Dem_GetNextExtendedDataRecord/43:
  Jump functions of caller  Dem_GetSizeOfExtendedDataRecordSelection/42:
  Jump functions of caller  Dem_SelectExtendedDataRecord/41:
  Jump functions of caller  Det_ASR40_ReportError/40:
  Jump functions of caller  Dcm_ExternalSetNegResponse/39:
  Jump functions of caller  Dem_SelectDTC/38:
  Jump functions of caller  Dcm_DemFacade_ProcessServiceIDBufferfull/37:
    callsite  Dcm_DemFacade_ProcessServiceIDBufferfull/37 -> Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_DemFacade_ProcessServiceIDBufferfull/37 -> Dcm_DspInternal_SetupPageBuffering/36 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DspInternal_SetupPageBuffering/36:
    callsite  Dcm_DspInternal_SetupPageBuffering/36 -> Dcm_DspInternal_EnableProcessPage/6 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_DspInternal_SetupPageBuffering/36 -> Dcm_DspInternal_EnableProcessPage/6 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_DspInternal_ProcessEventDataResult/35:
    callsite  Dcm_DspInternal_ProcessEventDataResult/35 -> Dcm_DemFacade_ProcessServiceIDBufferfull/37 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_DspInternal_ProcessEventDataResult/35 -> Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_DspInternal_ProcessEventDataResult/35 -> Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34:
  Jump functions of caller  Dcm_DemFacade_GetFilteredDTC_Execute/33:
    callsite  Dcm_DemFacade_GetFilteredDTC_Execute/33 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DemFacade_ExpectedAmountOfData/32:
  Jump functions of caller  Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31:
    callsite  Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 -> Dcm_DemFacade_ExpectedAmountOfData/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DemFacade_NumberOfFilteredDTC_Setup/30:
  Jump functions of caller  Dcm_DemFacade_DTCStatusAvailabilityMask/29:
    callsite  Dcm_DemFacade_DTCStatusAvailabilityMask/29 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DemFacade_ProcessDEMResponseFromGetSize/28:
  Jump functions of caller  Dcm_DemFacade_ProcessDEMResponseFromGetData/27:
  Jump functions of caller  Dcm_DemFacade_EnableDTCRecordUpdate/25:
    callsite  Dcm_DemFacade_EnableDTCRecordUpdate/25 -> Dcm_DemFacade_EnableDTCRecordUpdate.part.0/72 : 
  Jump functions of caller  Dcm_DemFacade_GetEventData/24:
    callsite  Dcm_DemFacade_GetEventData/24 -> Dcm_DemFacade_ProcessDEMResponseFromGetData/27 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [1, -1]
    indirect aggregate callsite, calling param 1, offset 288, by reference, for stmt ResultCodeFromDEM_39 = _5 (ClientId_37(D), _8, &AvailableBufferSize);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DemFacade_GetSizeOfEventData/23:
    callsite  Dcm_DemFacade_GetSizeOfEventData/23 -> Dcm_DemFacade_ProcessDEMResponseFromGetSize/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect aggregate callsite, calling param 1, offset 256, by reference, for stmt ResultCodeFromDEM_20 = _1 (ClientId_18(D), &SizeOfEventData);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DemFacade_SelectEventData/22:
    callsite  Dcm_DemFacade_SelectEventData/22 -> Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect aggregate callsite, calling param 1, offset 224, by reference, for stmt ResultCodeFromDEM_10 = _1 (ClientId_8(D), RequestedDataRecord_7);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DemFacade_DisableDTCRecordUpdate/21:
  Jump functions of caller  Dcm_DemFacade_ReadEventDataRecord_Execute/20:
    callsite  Dcm_DemFacade_ReadEventDataRecord_Execute/20 -> Dcm_DemFacade_EnableDTCRecordUpdate/25 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DemFacade_ReadEventDataRecord_Execute/20 -> Dcm_DemFacade_GetEventData/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DemFacade_ReadEventDataRecord_Execute/20 -> Dcm_DemFacade_GetSizeOfEventData/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DemFacade_ReadEventDataRecord_Execute/20 -> Dcm_DemFacade_SelectEventData/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DemFacade_ReadEventDataRecord_Execute/20 -> Dcm_DemFacade_DisableDTCRecordUpdate/21 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DemFacade_ReadEventDataRecord_Execute/20 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DemFacade_ReadEventDataRecord_Setup/19:
  Jump functions of caller  Dcm_DemFacade_GetDTCStatus_Execute/18:
  Jump functions of caller  Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel/16:
  Jump functions of caller  Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15:
    callsite  Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14:
    callsite  Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/13:
  Jump functions of caller  Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/12:
  Jump functions of caller  Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame/11:
  Jump functions of caller  Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame/10:
  Jump functions of caller  Dcm_Dsp_DemFacade_GetClient/9:
  Jump functions of caller  Dcm_Dsp_DemFacade_UnlockClient/8:
    callsite  Dcm_Dsp_DemFacade_UnlockClient/8 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DemFacade_LockClient/7:
    callsite  Dcm_Dsp_DemFacade_LockClient/7 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_DspInternal_EnableProcessPage/6:
  Jump functions of caller  Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5:
  Jump functions of caller  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4:
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DspInternal_ProcessEventDataResult/35 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 4: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_GetFilteredDTC_Execute/33 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_GetFilteredDTC_Execute/33 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_DTCStatusAvailabilityMask/29 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_DemFacade_NumberOfFilteredDTC_Setup/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3:
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DspInternal_ProcessEventDataResult/35 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 4: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DspInternal_ProcessEventDataResult/35 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 4: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DemFacade_EnableDTCRecordUpdate/25 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DemFacade_ReadEventDataRecord_Execute/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DemFacade_ReadEventDataRecord_Execute/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DemFacade_GetDTCStatus_Execute/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: &Dcm_GetDTCStatusContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_DemFacade_ReadEventDataRecord_Setup/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 5: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 6: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 7: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 -> Dcm_Dsp_DemFacade_GetClient/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DemFacade_Init/2:

 Propagating constants:

Not considering Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_ClearDTCInfo_Process for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_ClearDTCInfo_Setup for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_ControlDTCSetting_Disable for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_ControlDTCSetting_Enable for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_GetClient for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_UnlockClient for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_LockClient for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DspInternal_EnableProcessPage for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DemFacade_Init for cloning; -fipa-cp-clone disabled.

overall_size: 1440, max_new_size: 11001
 - context independent values, size: 18, time_benefit: 5.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 27, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_DemFacade_EnableDTCRecordUpdate.part.0/72:
  Node: Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DemFacade_ProcessServiceIDBufferfull/37:
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
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DspInternal_SetupPageBuffering/36:
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
  Node: Dcm_DspInternal_ProcessEventDataResult/35:
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
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_GetFilteredDTC_Execute/33:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_ExpectedAmountOfData/32:
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
  Node: Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_NumberOfFilteredDTC_Setup/30:
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
  Node: Dcm_DemFacade_DTCStatusAvailabilityMask/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 2 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x2, mask = 0x0
         Dcm_DataSupplierOperationType [2, 2]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         Dcm_MsgLenType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_ProcessDEMResponseFromGetSize/28:
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
  Node: Dcm_DemFacade_ProcessDEMResponseFromGetData/27:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 [1, +INF]
        AGGS VARIABLE
  Node: Dcm_DemFacade_EnableDTCRecordUpdate/25:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_GetEventData/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_GetSizeOfEventData/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_SelectEventData/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_DisableDTCRecordUpdate/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DemFacade_ReadEventDataRecord_Execute/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DemFacade_ReadEventDataRecord_Setup/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DiagnosticDataContextType * ~[0B, 0B]
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
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [5]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [6]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [7]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DemFacade_GetDTCStatus_Execute/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: &Dcm_GetDTCStatusContext [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dcm_GetDTCStatusContextType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15:
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
  Node: Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14:
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
  Node: Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame/10:
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
  Node: Dcm_Dsp_DemFacade_GetClient/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DemFacade_UnlockClient/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DemFacade_LockClient/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_DspInternal_EnableProcessPage/6:
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
  Node: Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5:
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
  Node: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4:
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
  Node: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3:
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
  Node: Dcm_Dsp_DemFacade_Init/2:

IPA decision stage:

 - Creating a specialized node of Dcm_DemFacade_DTCStatusAvailabilityMask/29 for all known contexts.
    replacing param #1 Operation with const 2
 - Creating a specialized node of Dcm_DemFacade_GetDTCStatus_Execute/18 for all known contexts.
    replacing param #1 GetDTCStatusContext with const &Dcm_GetDTCStatusContext
Propagated bits info for function Dcm_DemFacade_GetDTCStatus_Execute.constprop/77:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_DemFacade_DTCStatusAvailabilityMask.constprop/76:
 param 1: value = 0x2, mask = 0x0
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_DemFacade_DTCStatusAvailabilityMask/29:
 param 1: value = 0x2, mask = 0x0
 param 3: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_DemFacade_GetDTCStatus_Execute/18:
 param 1: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: Dcm_DemFacade_DTCStatusAvailabilityMask/29 Dcm_DemFacade_GetDTCStatus_Execute/18
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_DemFacade_GetDTCStatus_Execute.constprop.0/77 (Dcm_DemFacade_GetDTCStatus_Execute.constprop) @070542a0
  Type: function definition analyzed
  Visibility:
  References: Dcm_GetDTCStatusContext/1 (addr)
  Referring: 
  Clone of Dcm_DemFacade_GetDTCStatus_Execute/18
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (285615325 (estimated locally),0.27 per call) 
  Calls: Dem_GetStatusOfDTC/47 (354334802 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (28922198 (estimated locally),0.03 per call) 
Dcm_DemFacade_DTCStatusAvailabilityMask.constprop.0/76 (Dcm_DemFacade_DTCStatusAvailabilityMask.constprop) @06dbc460
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_DemFacade_DTCStatusAvailabilityMask/29
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (86930138 (estimated locally),0.08 per call) 
  Calls: Dcm_Dsp_DemFacade_GetClient/9 (1073741823 (estimated locally),1.00 per call) Dem_GetDTCStatusAvailabilityMask/52 (268435456 (estimated locally),0.25 per call) 
Dcm_DemFacade_EnableDTCRecordUpdate.part.0/72 (Dcm_DemFacade_EnableDTCRecordUpdate.part.0) @06e85c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_DemFacade_EnableDTCRecordUpdate/25 (107509389 (estimated locally),0.10 per call) 
  Calls: Det_ASR40_ReportError/40 (1073741824 (estimated locally),1.00 per call) 
Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71 (Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0) @06889d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_SelectEventData/22 (173198851 (estimated locally),0.16 per call) 
  Calls: Det_ASR40_ReportError/40 (418115066 (estimated locally),0.39 per call) Det_ASR40_ReportError/40 (215392610 (estimated locally),0.20 per call) 
Dem_ClearDTC/70 (Dem_ClearDTC) @06e5a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (536817225 (estimated locally),0.50 per call) 
  Calls: 
Dem_GetDTCSelectionResultForClearDTC/69 (Dem_GetDTCSelectionResultForClearDTC) @06e5a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Dem_DisableDTCSetting/68 (Dem_DisableDTCSetting) @06e5a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_EnableDTCSetting/67 (Dem_EnableDTCSetting) @06e52e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_DcmGetDTCOfOBDFreezeFrame/66 (Dem_DcmGetDTCOfOBDFreezeFrame) @06e52c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_DcmReadDataOfOBDFreezeFrame/65 (Dem_DcmReadDataOfOBDFreezeFrame) @06e52a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_DemClientIds/64 (Dcm_DemClientIds) @06e51c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DemFacade_GetClient/9 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Internal_ReleaseLock/63 (Dcm_Internal_ReleaseLock) @06e527e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_UnlockClient/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Internal_GetLock/62 (Dcm_Internal_GetLock) @06e52620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_LockClient/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmInfo/61 (Dcm_HsmInfo) @06e515a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (write)Dcm_DspInternal_EnableProcessPage/6 (write)
  Availability: not_available
  Varpool flags:
Dcm_MainConnectionConfig/60 (Dcm_MainConnectionConfig) @06e51558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (read)Dcm_DspInternal_EnableProcessPage/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_RxPduIdConfig/59 (Dcm_RxPduIdConfig) @06e51510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (read)Dcm_DspInternal_EnableProcessPage/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GetNextFilteredDTCAndFDC/58 (Dem_GetNextFilteredDTCAndFDC) @06e522a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_GetFilteredDTC_Execute/33 (489172404 (estimated locally),5.13 per call) 
  Calls: 
Dem_GetNextFilteredDTC/57 (Dem_GetNextFilteredDTC) @06e521c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_GetFilteredDTC_Execute/33 (489172404 (estimated locally),5.13 per call) 
  Calls: 
Dem_GetNextFilteredDTCAndSeverity/56 (Dem_GetNextFilteredDTCAndSeverity) @06889ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 (1015719690 (estimated locally),12.64 per call) 
  Calls: 
Dem_GetNumberOfFilteredDTC/55 (Dem_GetNumberOfFilteredDTC) @06889b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (31589317 (estimated locally),0.03 per call) 
  Calls: 
Dem_SetDTCFilter/54 (Dem_SetDTCFilter) @06889a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (92909757 (estimated locally),0.09 per call) 
  Calls: 
Dem_GetTranslationType/53 (Dem_GetTranslationType) @068899a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dem_GetDTCStatusAvailabilityMask/52 (Dem_GetDTCStatusAvailabilityMask) @06889620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_DTCStatusAvailabilityMask.constprop/76 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Dcm_DsdInternal_StartPagedProcessing/51 (Dcm_DsdInternal_StartPagedProcessing) @06889000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_ProcessServiceIDBufferfull/37 (342510560 (estimated locally),0.32 per call) 
  Calls: 
Dcm_DsdInternal_ProcessPage/50 (Dcm_DsdInternal_ProcessPage) @0686de00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DspInternal_ProcessEventDataResult/35 (31046771 (estimated locally),0.03 per call) Dcm_DemFacade_ProcessServiceIDBufferfull/37 (60929919 (estimated locally),0.06 per call) 
  Calls: 
Dem_EnableDTCRecordUpdate/49 (Dem_EnableDTCRecordUpdate) @0686db60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_EnableDTCRecordUpdate/25 (512926469 (estimated locally),0.48 per call) 
  Calls: 
Dem_DisableDTCRecordUpdate/48 (Dem_DisableDTCRecordUpdate) @0686d2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_DisableDTCRecordUpdate/21 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_GetStatusOfDTC/47 (Dem_GetStatusOfDTC) @06dd5ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_GetDTCStatus_Execute.constprop/77 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dem_GetNextFreezeFrameData/46 (Dem_GetNextFreezeFrameData) @06dd5c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DemFacade_ReadEventDataRecord_Setup/19 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_GetSizeOfFreezeFrameSelection/45 (Dem_GetSizeOfFreezeFrameSelection) @06dd5b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DemFacade_ReadEventDataRecord_Setup/19 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_SelectFreezeFrameData/44 (Dem_SelectFreezeFrameData) @06dd5a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DemFacade_ReadEventDataRecord_Setup/19 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_GetNextExtendedDataRecord/43 (Dem_GetNextExtendedDataRecord) @06dd59a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DemFacade_ReadEventDataRecord_Setup/19 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_GetSizeOfExtendedDataRecordSelection/42 (Dem_GetSizeOfExtendedDataRecordSelection) @06dd58c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DemFacade_ReadEventDataRecord_Setup/19 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dem_SelectExtendedDataRecord/41 (Dem_SelectExtendedDataRecord) @06dd57e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DemFacade_ReadEventDataRecord_Setup/19 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Det_ASR40_ReportError/40 (Det_ASR40_ReportError) @06dd5540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DemFacade_GetDTCStatus_Execute.constprop/77 (28922198 (estimated locally),0.03 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (89469538 (estimated locally),0.08 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (43732710 (estimated locally),0.04 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (43732710 (estimated locally),0.04 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (89469538 (estimated locally),0.08 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (447347688 (estimated locally),0.42 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/13 (182482423 (estimated locally),0.17 per call) Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/12 (182482423 (estimated locally),0.17 per call) Dcm_DemFacade_GetFilteredDTC_Execute/33 (19675634 (estimated locally),0.21 per call) Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (90828578 (estimated locally),0.08 per call) Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (7720429 (estimated locally),0.01 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (94961727 (estimated locally),0.09 per call) Dcm_DspInternal_ProcessEventDataResult/35 (153393135 (estimated locally),0.14 per call) Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 (16575893 (estimated locally),0.21 per call) Dcm_DemFacade_EnableDTCRecordUpdate.part.0/72 (1073741824 (estimated locally),1.00 per call) Dcm_DemFacade_DisableDTCRecordUpdate/21 (88583700 (estimated locally),0.08 per call) Dcm_DemFacade_ProcessDEMResponseFromGetData/27 (141733921 (estimated locally),0.13 per call) Dcm_DemFacade_ProcessDEMResponseFromGetData/27 (73014444 (estimated locally),0.07 per call) Dcm_DemFacade_GetSizeOfEventData/23 (120473832 (estimated locally),0.11 per call) Dcm_DemFacade_GetSizeOfEventData/23 (62062277 (estimated locally),0.06 per call) Dcm_DemFacade_ProcessDEMResponseFromGetSize/28 (354334802 (estimated locally),0.33 per call) Dcm_DemFacade_ProcessDEMResponseFromGetSize/28 (182536110 (estimated locally),0.17 per call) Dcm_DemFacade_SelectEventData/22 (119549728 (estimated locally),0.11 per call) Dcm_DemFacade_SelectEventData/22 (61586223 (estimated locally),0.06 per call) Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71 (418115066 (estimated locally),0.39 per call) Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71 (215392610 (estimated locally),0.20 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/39 (Dcm_ExternalSetNegResponse) @06dd5460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (94961727 (estimated locally),0.09 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (48919677 (estimated locally),0.05 per call) Dcm_DspInternal_ProcessEventDataResult/35 (153393135 (estimated locally),0.14 per call) Dcm_DspInternal_ProcessEventDataResult/35 (33743115 (estimated locally),0.03 per call) Dcm_DspInternal_ProcessEventDataResult/35 (153393135 (estimated locally),0.14 per call) 
  Calls: 
Dem_SelectDTC/38 (Dem_SelectDTC) @06dd5380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel/16 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (214748364 (estimated locally),0.20 per call) 
  Calls: 
Dcm_DemFacade_ProcessServiceIDBufferfull/37 (Dcm_DemFacade_ProcessServiceIDBufferfull) @06dc3ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DspInternal_ProcessEventDataResult/35 (153393135 (estimated locally),0.14 per call) 
  Calls: Dcm_DsdInternal_ProcessPage/50 (60929919 (estimated locally),0.06 per call) Dcm_DsdInternal_StartPagedProcessing/51 (342510560 (estimated locally),0.32 per call) Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (342510560 (estimated locally),0.32 per call) Dcm_DspInternal_SetupPageBuffering/36 (342510560 (estimated locally),0.32 per call) 
Dcm_DspInternal_SetupPageBuffering/36 (Dcm_DspInternal_SetupPageBuffering) @06dc3d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_ProcessServiceIDBufferfull/37 (342510560 (estimated locally),0.32 per call) 
  Calls: Dcm_DspInternal_EnableProcessPage/6 (357878150 (estimated locally),0.33 per call) Dcm_DspInternal_EnableProcessPage/6 (357878150 (estimated locally),0.33 per call) 
Dcm_DspInternal_ProcessEventDataResult/35 (Dcm_DspInternal_ProcessEventDataResult) @06dc3b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073429920 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (524845004 (estimated locally),0.49 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (474808634 (estimated locally),0.44 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (233860969 (estimated locally),0.22 per call) 
  Calls: Det_ASR40_ReportError/40 (153393135 (estimated locally),0.14 per call) Dcm_ExternalSetNegResponse/39 (153393135 (estimated locally),0.14 per call) Dcm_ExternalSetNegResponse/39 (33743115 (estimated locally),0.03 per call) Dcm_ExternalSetNegResponse/39 (153393135 (estimated locally),0.14 per call) Dcm_DemFacade_ProcessServiceIDBufferfull/37 (153393135 (estimated locally),0.14 per call) Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (153393135 (estimated locally),0.14 per call) Dcm_DsdInternal_ProcessPage/50 (31046771 (estimated locally),0.03 per call) Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (39115249 (estimated locally),0.04 per call) 
Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 (Dcm_DemFacade_GetSeverityFilteredDTC_Execute) @06dc39a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:80367969 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (73014444 (estimated locally),0.07 per call) Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (16880939 (estimated locally),0.02 per call) 
  Calls: Det_ASR40_ReportError/40 (16575893 (estimated locally),0.21 per call) Dem_GetNextFilteredDTCAndSeverity/56 (1015719690 (estimated locally),12.64 per call) 
Dcm_DemFacade_GetFilteredDTC_Execute/33 (Dcm_DemFacade_GetFilteredDTC_Execute) @06dc3700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:95397014 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (141733921 (estimated locally),0.13 per call) Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (32768882 (estimated locally),0.03 per call) 
  Calls: Det_ASR40_ReportError/40 (19675634 (estimated locally),0.21 per call) Dem_GetNextFilteredDTCAndFDC/58 (489172404 (estimated locally),5.13 per call) Dem_GetNextFilteredDTC/57 (489172404 (estimated locally),5.13 per call) Dcm_Dsp_DemFacade_GetClient/9 (95397014 (estimated locally),1.00 per call) 
Dcm_DemFacade_ExpectedAmountOfData/32 (Dcm_DemFacade_ExpectedAmountOfData) @06dc3460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (15794659 (estimated locally),0.01 per call) 
  Calls: 
Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute) @06dc32a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (184981317 (estimated locally),0.17 per call) 
  Calls: Det_ASR40_ReportError/40 (90828578 (estimated locally),0.08 per call) Det_ASR40_ReportError/40 (7720429 (estimated locally),0.01 per call) Dcm_DemFacade_ExpectedAmountOfData/32 (15794659 (estimated locally),0.01 per call) Dem_GetNumberOfFilteredDTC/55 (31589317 (estimated locally),0.03 per call) Dem_SetDTCFilter/54 (92909757 (estimated locally),0.09 per call) Dem_GetTranslationType/53 (217325345 (estimated locally),0.20 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_DemFacade_NumberOfFilteredDTC_Setup/30 (Dcm_DemFacade_NumberOfFilteredDTC_Setup) @06dbcee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (214748365 (estimated locally),0.20 per call) 
  Calls: 
Dcm_DemFacade_DTCStatusAvailabilityMask/29 (Dcm_DemFacade_DTCStatusAvailabilityMask) @06dbcd20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_DemFacade_ProcessDEMResponseFromGetSize/28 (Dcm_DemFacade_ProcessDEMResponseFromGetSize) @06dbcb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_GetSizeOfEventData/23 (173198851 (estimated locally),0.16 per call) 
  Calls: Det_ASR40_ReportError/40 (354334802 (estimated locally),0.33 per call) Det_ASR40_ReportError/40 (182536110 (estimated locally),0.17 per call) 
Dcm_DemFacade_ProcessDEMResponseFromGetData/27 (Dcm_DemFacade_ProcessDEMResponseFromGetData) @06dbc7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_GetEventData/24 (28866475 (estimated locally),0.49 per call) 
  Calls: Det_ASR40_ReportError/40 (141733921 (estimated locally),0.13 per call) Det_ASR40_ReportError/40 (73014444 (estimated locally),0.07 per call) 
Dcm_DemFacade_EnableDTCRecordUpdate/25 (Dcm_DemFacade_EnableDTCRecordUpdate) @06dbc0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (43465069 (estimated locally),0.04 per call) Dcm_DemFacade_ReadEventDataRecord_Execute/20 (365072221 (estimated locally),0.34 per call) 
  Calls: Dcm_DemFacade_EnableDTCRecordUpdate.part.0/72 (107509389 (estimated locally),0.10 per call) Dem_EnableDTCRecordUpdate/49 (512926469 (estimated locally),0.48 per call) 
Dcm_DemFacade_GetEventData/24 (Dcm_DemFacade_GetEventData) @06dade00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:59055801 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_ReadEventDataRecord_Execute/20 (20480552 (estimated locally),0.02 per call) 
  Calls: Dcm_DemFacade_ProcessDEMResponseFromGetData/27 (28866475 (estimated locally),0.49 per call) 
   Indirect call(55807731 (estimated locally),0.94 per call)  of param:1 loaded from aggregate passed by reference at offset 288 (vptr maybe changed)
Dcm_DemFacade_GetSizeOfEventData/23 (Dcm_DemFacade_GetSizeOfEventData) @06dadc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_ReadEventDataRecord_Execute/20 (20480552 (estimated locally),0.02 per call) 
  Calls: Dcm_DemFacade_ProcessDEMResponseFromGetSize/28 (173198851 (estimated locally),0.16 per call) Det_ASR40_ReportError/40 (120473832 (estimated locally),0.11 per call) Det_ASR40_ReportError/40 (62062277 (estimated locally),0.06 per call) 
   Indirect call(1073741823 (estimated locally),1.00 per call)  of param:1 loaded from aggregate passed by reference at offset 256 (vptr maybe changed)
Dcm_DemFacade_SelectEventData/22 (Dcm_DemFacade_SelectEventData) @06dad8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_ReadEventDataRecord_Execute/20 (60236916 (estimated locally),0.06 per call) 
  Calls: Dcm_DemFacade_ProcessDEMResponseFromSelectData.isra.0/71 (173198851 (estimated locally),0.16 per call) Det_ASR40_ReportError/40 (119549728 (estimated locally),0.11 per call) Det_ASR40_ReportError/40 (61586223 (estimated locally),0.06 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call)  of param:1 loaded from aggregate passed by reference at offset 224 (vptr maybe changed)
Dcm_DemFacade_DisableDTCRecordUpdate/21 (Dcm_DemFacade_DisableDTCRecordUpdate) @06dad540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_DemFacade_ReadEventDataRecord_Execute/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: Det_ASR40_ReportError/40 (88583700 (estimated locally),0.08 per call) Dem_DisableDTCRecordUpdate/48 (354334802 (estimated locally),0.33 per call) 
Dcm_DemFacade_ReadEventDataRecord_Execute/20 (Dcm_DemFacade_ReadEventDataRecord_Execute) @06dad2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (94253057 (estimated locally),0.09 per call) 
  Calls: Dcm_DemFacade_EnableDTCRecordUpdate/25 (365072221 (estimated locally),0.34 per call) Dcm_DemFacade_GetEventData/24 (20480552 (estimated locally),0.02 per call) Dcm_DemFacade_GetSizeOfEventData/23 (20480552 (estimated locally),0.02 per call) Dcm_DemFacade_SelectEventData/22 (60236916 (estimated locally),0.06 per call) Dcm_DemFacade_DisableDTCRecordUpdate/21 (1073741823 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741823 (estimated locally),1.00 per call) 
Dcm_DemFacade_ReadEventDataRecord_Setup/19 (Dcm_DemFacade_ReadEventDataRecord_Setup) @06dad0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_SelectExtendedDataRecord/41 (addr)Dem_GetSizeOfExtendedDataRecordSelection/42 (addr)Dem_GetNextExtendedDataRecord/43 (addr)Dem_SelectFreezeFrameData/44 (addr)Dem_GetSizeOfFreezeFrameSelection/45 (addr)Dem_GetNextFreezeFrameData/46 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (70866960 (estimated locally),0.07 per call) 
  Calls: 
Dcm_DemFacade_GetDTCStatus_Execute/18 (Dcm_DemFacade_GetDTCStatus_Execute) @06da6ee0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel/16 (Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel) @06da6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_SelectDTC/38 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (Dcm_Dsp_DemFacade_ClearDTCInfo_Process) @06da68c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (89469538 (estimated locally),0.08 per call) Det_ASR40_ReportError/40 (43732710 (estimated locally),0.04 per call) Det_ASR40_ReportError/40 (43732710 (estimated locally),0.04 per call) Det_ASR40_ReportError/40 (89469538 (estimated locally),0.08 per call) Det_ASR40_ReportError/40 (447347688 (estimated locally),0.42 per call) Dem_ClearDTC/70 (536817225 (estimated locally),0.50 per call) Dem_GetDTCSelectionResultForClearDTC/69 (357878150 (estimated locally),0.33 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14 (Dcm_Dsp_DemFacade_ClearDTCInfo_Setup) @06da62a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (357878150 (estimated locally),0.33 per call) Dem_SelectDTC/38 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/13 (Dcm_Dsp_DemFacade_ControlDTCSetting_Disable) @06da6000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (182482423 (estimated locally),0.17 per call) Dem_DisableDTCSetting/68 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/12 (Dcm_Dsp_DemFacade_ControlDTCSetting_Enable) @06d9fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/40 (182482423 (estimated locally),0.17 per call) Dem_EnableDTCSetting/67 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame/11 (Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame) @06d9fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_DcmGetDTCOfOBDFreezeFrame/66 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame/10 (Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame) @06d9f8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_DcmReadDataOfOBDFreezeFrame/65 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_GetClient/9 (Dcm_Dsp_DemFacade_GetClient) @06d9f700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DemClientIds/64 (read)Dcm_DemClientContext/0 (addr)Dcm_DemClientContext/0 (addr)
  Referring: 
  Availability: available
  Function flags: count:397250652 (estimated locally) body optimize_size
  Called by: Dcm_DemFacade_DTCStatusAvailabilityMask.constprop/76 (1073741823 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_UnlockClient/8 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_LockClient/7 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (1073741824 (estimated locally),1.00 per call) Dcm_DemFacade_GetFilteredDTC_Execute/33 (95397014 (estimated locally),1.00 per call) Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (1073741821 (estimated locally),1.00 per call) Dcm_DemFacade_ReadEventDataRecord_Execute/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DemFacade_UnlockClient/8 (Dcm_Dsp_DemFacade_UnlockClient) @06d9f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Internal_ReleaseLock/63 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_LockClient/7 (Dcm_Dsp_DemFacade_LockClient) @06d9f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Internal_GetLock/62 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_DspInternal_EnableProcessPage/6 (Dcm_DspInternal_EnableProcessPage) @06d9f1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/59 (read)Dcm_MainConnectionConfig/60 (read)Dcm_HsmInfo/61 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_DspInternal_SetupPageBuffering/36 (357878150 (estimated locally),0.33 per call) Dcm_DspInternal_SetupPageBuffering/36 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5 (Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer) @06cfe460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/59 (read)Dcm_MainConnectionConfig/60 (read)Dcm_HsmInfo/61 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_DspInternal_ProcessEventDataResult/35 (153393135 (estimated locally),0.14 per call) Dcm_DspInternal_ProcessEventDataResult/35 (39115249 (estimated locally),0.04 per call) Dcm_DemFacade_ProcessServiceIDBufferfull/37 (342510560 (estimated locally),0.32 per call) 
  Calls: 
Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4 (Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process) @06cfe2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DspInternal_ProcessEventDataResult/35 (524845004 (estimated locally),0.49 per call) Dcm_DemFacade_GetFilteredDTC_Execute/33 (141733921 (estimated locally),0.13 per call) Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 (73014444 (estimated locally),0.07 per call) Dcm_DemFacade_GetFilteredDTC_Execute/33 (32768882 (estimated locally),0.03 per call) Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34 (16880939 (estimated locally),0.02 per call) Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute/31 (184981317 (estimated locally),0.17 per call) Dcm_DemFacade_DTCStatusAvailabilityMask.constprop/76 (86930138 (estimated locally),0.08 per call) Dcm_DemFacade_NumberOfFilteredDTC_Setup/30 (214748365 (estimated locally),0.20 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process) @06cfee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_GetDTCStatusContext/1 (write)Dcm_GetDTCStatusContext/1 (write)Dcm_GetDTCStatusContext/1 (write)Dcm_GetDTCStatusContext/1 (addr)Dcm_GetDTCStatusContext/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741821 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_DspInternal_ProcessEventDataResult/35 (474808634 (estimated locally),0.44 per call) Dcm_DspInternal_ProcessEventDataResult/35 (233860969 (estimated locally),0.22 per call) Dcm_DemFacade_EnableDTCRecordUpdate/25 (43465069 (estimated locally),0.04 per call) Dcm_DemFacade_ReadEventDataRecord_Execute/20 (214748364 (estimated locally),0.20 per call) Dcm_DemFacade_ReadEventDataRecord_Execute/20 (94253057 (estimated locally),0.09 per call) Dcm_DemFacade_GetDTCStatus_Execute.constprop/77 (285615325 (estimated locally),0.27 per call) Det_ASR40_ReportError/40 (94961727 (estimated locally),0.09 per call) Dcm_ExternalSetNegResponse/39 (94961727 (estimated locally),0.09 per call) Dcm_ExternalSetNegResponse/39 (48919677 (estimated locally),0.05 per call) Dcm_DemFacade_ReadEventDataRecord_Setup/19 (70866960 (estimated locally),0.07 per call) Dem_SelectDTC/38 (214748364 (estimated locally),0.20 per call) Dcm_Dsp_DemFacade_GetClient/9 (1073741821 (estimated locally),1.00 per call) 
Dcm_Dsp_DemFacade_Init/2 (Dcm_Dsp_DemFacade_Init) @06cfeb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DemClientContext/0 (write)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_GetDTCStatusContext/1 (Dcm_GetDTCStatusContext) @06d248b8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (write)Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (write)Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (write)Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (addr)Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3 (read)Dcm_DemFacade_GetDTCStatus_Execute.constprop.0/77 (addr)
  Availability: available
  Varpool flags:
Dcm_DemClientContext/0 (Dcm_DemClientContext) @06d24870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_DemFacade_Init/2 (write)Dcm_Dsp_DemFacade_GetClient/9 (addr)Dcm_Dsp_DemFacade_GetClient/9 (addr)
  Availability: available
  Varpool flags:

;; Function Dcm_DemFacade_GetSeverityFilteredDTC_Execute (Dcm_DemFacade_GetSeverityFilteredDTC_Execute, funcdef_no=32, decl_uid=7088, cgraph_uid=33, symbol_order=34)

Modification phase of node Dcm_DemFacade_GetSeverityFilteredDTC_Execute/34
Setting nonnull for 1
Dcm_DemFacade_GetSeverityFilteredDTC_Execute (const Dcm_DemClientIdType ClientId, struct Dcm_DiagnosticDataContextType * GetDataOfFilteredDTCContext)
{
  Dcm_MsgLenType CurrentWritePosition;
  uint8 DTCFunctionalUnit;
  uint8 DTCSeverity;
  uint32 RequestedDtc;
  uint8 DtcStatusMask;
  uint16 ExpectedAmountOfFilteredDTCs;
  Std_ReturnType ResultDemInterface;
  Std_ReturnType ResultCodeFromExecute;
  short unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint8 * _4;
  uint8 * _5;
  unsigned char DTCSeverity.20_6;
  uint8 * _7;
  uint8 * _8;
  unsigned char DTCFunctionalUnit.21_9;
  long unsigned int RequestedDtc.22_10;
  long unsigned int _11;
  uint8 * _12;
  uint8 * _13;
  unsigned char _14;
  long unsigned int RequestedDtc.23_15;
  long unsigned int _16;
  uint8 * _17;
  uint8 * _18;
  unsigned char _19;
  long unsigned int RequestedDtc.24_20;
  uint8 * _21;
  uint8 * _22;
  unsigned char _23;
  uint8 * _24;
  uint8 * _25;
  unsigned char DtcStatusMask.25_26;
  long unsigned int _27;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _32;
  short unsigned int _34;
  short unsigned int _35;
  long unsigned int _36;
  long unsigned int _38;

  <bb 2> [local count: 80367969]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultDemInterface => 0
  # DEBUG BEGIN_STMT
  ExpectedAmountOfFilteredDTCs_51 = GetDataOfFilteredDTCContext_50(D)->NumberOfFilteredDTCs;
  # DEBUG ExpectedAmountOfFilteredDTCs => ExpectedAmountOfFilteredDTCs_51
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RequestedDtc = 0;
  # DEBUG BEGIN_STMT
  DTCSeverity = 0;
  # DEBUG BEGIN_STMT
  DTCFunctionalUnit = 0;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_55 = GetDataOfFilteredDTCContext_50(D)->NextPossitionToFillOnResponseBuffer;
  # DEBUG CurrentWritePosition => CurrentWritePosition_55
  # DEBUG BEGIN_STMT
  # DEBUG RequestedDtcSize => 6
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 1015719690]:
  # DEBUG BEGIN_STMT
  ResultDemInterface_59 = Dem_GetNextFilteredDTCAndSeverity (ClientId_57(D), &RequestedDtc, &DtcStatusMask, &DTCSeverity, &DTCFunctionalUnit);
  # DEBUG ResultDemInterface => ResultDemInterface_59
  # DEBUG BEGIN_STMT
  if (ResultDemInterface_59 == 48)
    goto <bb 4>; [2.20%]
  else
    goto <bb 5>; [97.80%]

  <bb 4> [local count: 22345833]:
  # ExpectedAmountOfFilteredDTCs_56 = PHI <ExpectedAmountOfFilteredDTCs_42(3)>
  # CurrentWritePosition_28 = PHI <CurrentWritePosition_43(3)>
  # DEBUG BEGIN_STMT
  RequestedDtc = 0;
  # DEBUG BEGIN_STMT
  DtcStatusMask = 0;
  # DEBUG BEGIN_STMT
  DTCSeverity = 0;
  # DEBUG BEGIN_STMT
  DTCFunctionalUnit = 0;
  # DEBUG BEGIN_STMT
  _1 = GetDataOfFilteredDTCContext_50(D)->StoredDTCs;
  _2 = (long unsigned int) _1;
  _3 = _2 * 6;
  GetDataOfFilteredDTCContext_50(D)->AmountOfDataToWriteOnResponse = _3;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 993373857]:
  # DEBUG BEGIN_STMT
  if (ResultDemInterface_59 == 0)
    goto <bb 6>; [2.20%]
  else
    goto <bb 21>; [97.80%]

  <bb 21> [local count: 971519631]:
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 21854225]:
  # DEBUG BEGIN_STMT
  _4 = GetDataOfFilteredDTCContext_50(D)->ResponseBuffer;
  _5 = _4 + CurrentWritePosition_43;
  DTCSeverity.20_6 = DTCSeverity;
  *_5 = DTCSeverity.20_6;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_61 = CurrentWritePosition_43 + 1;
  # DEBUG CurrentWritePosition => CurrentWritePosition_61
  # DEBUG BEGIN_STMT
  _7 = GetDataOfFilteredDTCContext_50(D)->ResponseBuffer;
  _8 = _7 + CurrentWritePosition_61;
  DTCFunctionalUnit.21_9 = DTCFunctionalUnit;
  *_8 = DTCFunctionalUnit.21_9;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_63 = CurrentWritePosition_43 + 2;
  # DEBUG CurrentWritePosition => CurrentWritePosition_63
  # DEBUG BEGIN_STMT
  RequestedDtc.22_10 = RequestedDtc;
  _11 = RequestedDtc.22_10 >> 16;
  _12 = GetDataOfFilteredDTCContext_50(D)->ResponseBuffer;
  _13 = _12 + CurrentWritePosition_63;
  _14 = (unsigned char) _11;
  *_13 = _14;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_65 = CurrentWritePosition_43 + 3;
  # DEBUG CurrentWritePosition => CurrentWritePosition_65
  # DEBUG BEGIN_STMT
  RequestedDtc.23_15 = RequestedDtc;
  _16 = RequestedDtc.23_15 >> 8;
  _17 = GetDataOfFilteredDTCContext_50(D)->ResponseBuffer;
  _18 = _17 + CurrentWritePosition_65;
  _19 = (unsigned char) _16;
  *_18 = _19;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_67 = CurrentWritePosition_43 + 4;
  # DEBUG CurrentWritePosition => CurrentWritePosition_67
  # DEBUG BEGIN_STMT
  RequestedDtc.24_20 = RequestedDtc;
  _21 = GetDataOfFilteredDTCContext_50(D)->ResponseBuffer;
  _22 = _21 + CurrentWritePosition_67;
  _23 = (unsigned char) RequestedDtc.24_20;
  *_22 = _23;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_69 = CurrentWritePosition_43 + 5;
  # DEBUG CurrentWritePosition => CurrentWritePosition_69
  # DEBUG BEGIN_STMT
  _24 = GetDataOfFilteredDTCContext_50(D)->ResponseBuffer;
  _25 = _24 + CurrentWritePosition_69;
  DtcStatusMask.25_26 = DtcStatusMask;
  *_25 = DtcStatusMask.25_26;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_71 = CurrentWritePosition_43 + 6;
  # DEBUG CurrentWritePosition => CurrentWritePosition_71
  # DEBUG BEGIN_STMT
  _27 = GetDataOfFilteredDTCContext_50(D)->BufferSize;
  _29 = _27 + 4294967290;
  GetDataOfFilteredDTCContext_50(D)->BufferSize = _29;
  # DEBUG BEGIN_STMT
  _30 = GetDataOfFilteredDTCContext_50(D)->AmountOfDataStoredOnResponseOnCurrentRun;
  _32 = _30 + 6;
  GetDataOfFilteredDTCContext_50(D)->AmountOfDataStoredOnResponseOnCurrentRun = _32;
  # DEBUG BEGIN_STMT
  ExpectedAmountOfFilteredDTCs_74 = ExpectedAmountOfFilteredDTCs_42 + 65535;
  # DEBUG ExpectedAmountOfFilteredDTCs => ExpectedAmountOfFilteredDTCs_74
  # DEBUG BEGIN_STMT
  _34 = GetDataOfFilteredDTCContext_50(D)->StoredDTCs;
  _35 = _34 + 1;
  GetDataOfFilteredDTCContext_50(D)->StoredDTCs = _35;

  <bb 7> [local count: 102222194]:
  # ResultDemInterface_48 = PHI <0(6), 0(2)>
  # ExpectedAmountOfFilteredDTCs_47 = PHI <ExpectedAmountOfFilteredDTCs_74(6), ExpectedAmountOfFilteredDTCs_51(2)>
  # CurrentWritePosition_88 = PHI <CurrentWritePosition_71(6), CurrentWritePosition_55(2)>

  <bb 8> [local count: 1073741824]:
  # ResultDemInterface_40 = PHI <ResultDemInterface_48(7), ResultDemInterface_59(21)>
  # ExpectedAmountOfFilteredDTCs_42 = PHI <ExpectedAmountOfFilteredDTCs_47(7), ExpectedAmountOfFilteredDTCs_42(21)>
  # CurrentWritePosition_43 = PHI <CurrentWritePosition_88(7), CurrentWritePosition_43(21)>
  # DEBUG CurrentWritePosition => CurrentWritePosition_43
  # DEBUG ExpectedAmountOfFilteredDTCs => ExpectedAmountOfFilteredDTCs_42
  # DEBUG ResultDemInterface => ResultDemInterface_40
  # DEBUG BEGIN_STMT
  if (ExpectedAmountOfFilteredDTCs_42 != 0)
    goto <bb 9>; [97.80%]
  else
    goto <bb 12>; [2.20%]

  <bb 9> [local count: 1050119505]:
  if (ResultDemInterface_40 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 525059752]:
  if (ResultDemInterface_40 == 48)
    goto <bb 11>; [97.80%]
  else
    goto <bb 12>; [2.20%]

  <bb 11> [local count: 1038568191]:
  _36 = GetDataOfFilteredDTCContext_50(D)->BufferSize;
  if (_36 > 5)
    goto <bb 3>; [97.80%]
  else
    goto <bb 12>; [2.20%]

  <bb 12> [local count: 80367968]:
  # ResultDemInterface_41 = PHI <48(4), ResultDemInterface_40(8), ResultDemInterface_40(10), ResultDemInterface_40(11)>
  # ExpectedAmountOfFilteredDTCs_37 = PHI <ExpectedAmountOfFilteredDTCs_56(4), ExpectedAmountOfFilteredDTCs_42(8), ExpectedAmountOfFilteredDTCs_42(10), ExpectedAmountOfFilteredDTCs_42(11)>
  # CurrentWritePosition_31 = PHI <CurrentWritePosition_28(4), CurrentWritePosition_43(8), CurrentWritePosition_43(10), CurrentWritePosition_43(11)>
  # DEBUG ResultDemInterface => ResultDemInterface_41
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_50(D)->NumberOfFilteredDTCs = ExpectedAmountOfFilteredDTCs_37;
  # DEBUG BEGIN_STMT
  _38 = GetDataOfFilteredDTCContext_50(D)->BufferSize;
  if (_38 <= 5)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 40183984]:
  if (ExpectedAmountOfFilteredDTCs_37 != 0)
    goto <bb 14>; [35.00%]
  else
    goto <bb 15>; [65.00%]

  <bb 14> [local count: 14064394]:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_50(D)->NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 2
  goto <bb 20>; [100.00%]

  <bb 15> [local count: 66303574]:
  # DEBUG BEGIN_STMT
  switch (ResultDemInterface_41) <default: <L16> [25.00%], case 0: <L13> [25.00%], case 4: <L14> [25.00%], case 48: <L15> [25.00%]>

  <bb 16> [local count: 16575893]:
<L13>:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_50(D)->NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 16575893]:
<L14>:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_50(D)->NextPossitionToFillOnResponseBuffer = CurrentWritePosition_31;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 1
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 18> [local count: 16575893]:
<L15>:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_50(D)->NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_50(D)->NumberOfFilteredDTCs = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 16575893]:
<L16>:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 152, 2);
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 80367968]:
  # ResultCodeFromExecute_39 = PHI <2(14), 0(16), 1(17), 0(18), 4(19)>
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_39
  # DEBUG BEGIN_STMT
  DtcStatusMask ={v} {CLOBBER};
  RequestedDtc ={v} {CLOBBER};
  DTCSeverity ={v} {CLOBBER};
  DTCFunctionalUnit ={v} {CLOBBER};
  return ResultCodeFromExecute_39;

}



;; Function Dcm_DemFacade_EnableDTCRecordUpdate (Dcm_DemFacade_EnableDTCRecordUpdate, funcdef_no=23, decl_uid=7056, cgraph_uid=24, symbol_order=25)

Modification phase of node Dcm_DemFacade_EnableDTCRecordUpdate/25
Setting nonnull for 1
Dcm_DemFacade_EnableDTCRecordUpdate (const Dcm_DemClientIdType ClientId, boolean * ControlRecordUpdate)
{
  Std_ReturnType ResultCodeFromDEM;
  Std_ReturnType ResultFromEnableRecordUpdate;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultFromEnableRecordUpdate => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromDEM => 1
  # DEBUG BEGIN_STMT
  _1 = *ControlRecordUpdate_6(D);
  if (_1 == 0)
    goto <bb 3>; [47.77%]
  else
    goto <bb 6>; [52.23%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  ResultCodeFromDEM_9 = Dem_EnableDTCRecordUpdate (ClientId_7(D));
  # DEBUG ResultCodeFromDEM => ResultCodeFromDEM_9
  # DEBUG BEGIN_STMT
  if (ResultCodeFromDEM_9 == 0)
    goto <bb 4>; [79.04%]
  else
    goto <bb 5>; [20.96%]

  <bb 4> [local count: 405417081]:
  # DEBUG BEGIN_STMT
  *ControlRecordUpdate_6(D) = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultFromEnableRecordUpdate => 0
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 107509389]:
  # DEBUG D#2 => ClientId_7(D)
  # DEBUG D#3 => ControlRecordUpdate_6(D)
  ResultFromEnableRecordUpdate_11 = Dcm_DemFacade_EnableDTCRecordUpdate.part.0 ();

  <bb 6> [local count: 1073741824]:
  # ResultFromEnableRecordUpdate_2 = PHI <4(2), 0(4), ResultFromEnableRecordUpdate_11(5)>
  # DEBUG ResultFromEnableRecordUpdate => ResultFromEnableRecordUpdate_2
  # DEBUG BEGIN_STMT
  return ResultFromEnableRecordUpdate_2;

}



;; Function Dcm_Dsp_DemFacade_Init (Dcm_Dsp_DemFacade_Init, funcdef_no=0, decl_uid=6733, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_Dsp_DemFacade_Init/2
Dcm_Dsp_DemFacade_Init ()
{
  uint16_least ClientIndex;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ClientIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  Dcm_DemClientContext[ClientIndex_1].Mutex = 0;
  # DEBUG BEGIN_STMT
  ClientIndex_5 = ClientIndex_1 + 1;
  # DEBUG ClientIndex => ClientIndex_5

  <bb 4> [local count: 1073741824]:
  # ClientIndex_1 = PHI <0(2), ClientIndex_5(3)>
  # DEBUG ClientIndex => ClientIndex_1
  # DEBUG BEGIN_STMT
  if (ClientIndex_1 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 5>; [33.33%]

  <bb 5> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer (Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer, funcdef_no=3, decl_uid=6744, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer/5
Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer (PduIdType DcmRxPduId, Dcm_MsgLenType AmountOfFilledData)
{
  uint8 instIdx;
  int _1;
  unsigned char _2;
  int _3;
  int _4;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) DcmRxPduId_5(D);
  _2 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  _3 = (int) _2;
  instIdx_7 = Dcm_MainConnectionConfig[_3].ProtocolIndex;
  # DEBUG instIdx => instIdx_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = (int) instIdx_7;
  _10 = AmountOfFilledData_8(D) & 65535;
  Dcm_HsmInfo[_4].TxBuffer.FilledLength = _10;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_DspInternal_EnableProcessPage (Dcm_DspInternal_EnableProcessPage, funcdef_no=4, decl_uid=6747, cgraph_uid=5, symbol_order=6)

Modification phase of node Dcm_DspInternal_EnableProcessPage/6
Dcm_DspInternal_EnableProcessPage (const struct Dcm_MsgContextType * pMsgContext, uint8 ProcessPageFuncId)
{
  short unsigned int _1;
  int _2;
  unsigned char _3;
  int _4;
  unsigned char _5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_8(D)->dcmRxPduId;
  _2 = (int) _1;
  _3 = Dcm_RxPduIdConfig[_2].MainConnectionIndex;
  _4 = (int) _3;
  _5 = Dcm_MainConnectionConfig[_4].ProtocolIndex;
  _6 = (int) _5;
  Dcm_HsmInfo[_6].processPageFuncId = ProcessPageFuncId_9(D);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_DspInternal_ProcessEventDataResult (Dcm_DspInternal_ProcessEventDataResult, funcdef_no=33, decl_uid=7094, cgraph_uid=34, symbol_order=35)

Modification phase of node Dcm_DspInternal_ProcessEventDataResult/35
Setting nonnull for 3
Dcm_DspInternal_ProcessEventDataResult (Dcm_OpStatusType OpStatus, Std_ReturnType FacadeReturnCodeGetEventData, struct Dcm_MsgContextType * pMsgContext, struct Dcm_DiagnosticDataContextType * DiagnosticDataContext, struct Dcm_DemClientContextType * ReadEventDataSubServiceContext)
{
  Dcm_NegativeResponseCodeType SetErrorCode;
  Std_ReturnType ServiceProcessStatus;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  short unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  short unsigned int _12;
  unsigned char _13;
  unsigned char _14;
  long unsigned int _22;

  <bb 2> [local count: 1073429920]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (FacadeReturnCodeGetEventData_23(D)) <default: <L25> [14.29%], case 0: <L0> [14.29%], case 1: <L5> [14.29%], case 2: <L6> [14.29%], case 3 ... 4: <L8> [14.29%], case 6: <L7> [14.29%], case 8: <L20> [14.29%]>

  <bb 3> [local count: 153393135]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 = ReadEventDataSubServiceContext_29(D)->AmountOfDataWrittenOnCurrentPage;
  _2 = DiagnosticDataContext_30(D)->AmountOfDataStoredOnResponseOnCurrentRun;
  _3 = _1 + _2;
  ReadEventDataSubServiceContext_29(D)->AmountOfDataWrittenOnCurrentPage = _3;
  # DEBUG BEGIN_STMT
  if (OpStatus_33(D) <= 1)
    goto <bb 4>; [25.50%]
  else
    goto <bb 5>; [74.50%]

  <bb 4> [local count: 39115249]:
  # DEBUG BEGIN_STMT
  _4 = pMsgContext_25(D)->resDataLen;
  _5 = DiagnosticDataContext_30(D)->AmountOfDataToWriteOnResponse;
  _22 = _5 & 65535;
  _6 = _4 + _22;
  pMsgContext_25(D)->resDataLen = _6;
  # DEBUG BEGIN_STMT
  _7 = pMsgContext_25(D)->dcmRxPduId;
  Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer (_7, _3);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26

  <bb 5> [local count: 153393135]:
  # ServiceProcessStatus_15 = PHI <30(3), 26(4)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_15
  # DEBUG BEGIN_STMT
  if (OpStatus_33(D) == 4)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 31046771]:
  # DEBUG BEGIN_STMT
  _8 = DiagnosticDataContext_30(D)->AmountOfDataStoredOnResponseOnCurrentRun;
  Dcm_DsdInternal_ProcessPage (_8);
  # DEBUG BEGIN_STMT
  ReadEventDataSubServiceContext_29(D)->PageBufferingFlag = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 29
  # DEBUG BEGIN_STMT
  ReadEventDataSubServiceContext_29(D)->FirstPageSent = 0;

  <bb 7> [local count: 153393136]:
  # ServiceProcessStatus_16 = PHI <ServiceProcessStatus_15(5), 29(6)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_16
  # DEBUG BEGIN_STMT
  ReadEventDataSubServiceContext_29(D)->AmountOfDataWrittenOnCurrentPage = 0;
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 8> [local count: 153393135]:
<L5>:
  # DEBUG BEGIN_STMT
  _9 = ReadEventDataSubServiceContext_29(D)->AmountOfDataWrittenOnCurrentPage;
  _10 = DiagnosticDataContext_30(D)->AmountOfDataStoredOnResponseOnCurrentRun;
  _11 = _9 + _10;
  ReadEventDataSubServiceContext_29(D)->AmountOfDataWrittenOnCurrentPage = _11;
  # DEBUG BEGIN_STMT
  _12 = pMsgContext_25(D)->dcmRxPduId;
  Dcm_DspInternal_UpdateAmountOfFilledDataOnResponseBuffer (_12, _11);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 10
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 9> [local count: 153393135]:
<L6>:
  # DEBUG BEGIN_STMT
  ServiceProcessStatus_35 = Dcm_DemFacade_ProcessServiceIDBufferfull (OpStatus_33(D), pMsgContext_25(D), DiagnosticDataContext_30(D), ReadEventDataSubServiceContext_29(D));
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_35
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 10> [local count: 153393135]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_25(D), 34);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 11> [local count: 153393135]:
<L8>:
  # DEBUG BEGIN_STMT
  if (FacadeReturnCodeGetEventData_23(D) == 4)
    goto <bb 13>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 101239469]:
  # DEBUG BEGIN_STMT
  # DEBUG SetErrorCode => 49

  <bb 13> [local count: 153393135]:
  # SetErrorCode_18 = PHI <16(11), 49(12)>
  # DEBUG SetErrorCode => SetErrorCode_18
  # DEBUG BEGIN_STMT
  _13 = ReadEventDataSubServiceContext_29(D)->FirstPageSent;
  if (_13 == 1)
    goto <bb 14>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 14> [local count: 52153666]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 1
  # DEBUG BEGIN_STMT
  ReadEventDataSubServiceContext_29(D)->FirstPageSent = 0;
  goto <bb 19>; [100.00%]

  <bb 15> [local count: 101239469]:
  # DEBUG BEGIN_STMT
  _14 = DiagnosticDataContext_30(D)->DTCFormat;
  switch (_14) <default: <L25> [33.33%], case 0: <L16> [33.33%], case 1: <L15> [33.33%]>

  <bb 16> [local count: 33743115]:
<L15>:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_25(D), SetErrorCode_18);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 17> [local count: 33743115]:
<L16>:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 170
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 153393135]:
<L20>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SetErrorCode => 16
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_25(D), 16);
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 255, 2);
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 1073741824]:
  # ServiceProcessStatus_17 = PHI <ServiceProcessStatus_16(7), 10(8), ServiceProcessStatus_35(9), 26(10), 26(16), 26(18), 30(2), 1(14), 30(15), 170(17)>
<L25>:
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_17
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_17;

}



;; Function Dcm_Dsp_DemFacade_GetClient (Dcm_Dsp_DemFacade_GetClient, funcdef_no=7, decl_uid=6753, cgraph_uid=8, symbol_order=9)

Modification phase of node Dcm_Dsp_DemFacade_GetClient/9
Dcm_Dsp_DemFacade_GetClient (Dcm_DemClientIdType ClientId)
{
  uint16_least ClientIndex;
  struct Dcm_DemClientContextType * ClientContextPtr;
  unsigned char _1;

  <bb 2> [local count: 397250652]:
  # DEBUG BEGIN_STMT
  # DEBUG ClientContextPtr => &Dcm_DemClientContext
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ClientIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_DemClientIds[ClientIndex_3];
  if (_1 == ClientId_5(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 39372502]:
  # ClientIndex_8 = PHI <ClientIndex_3(3)>
  # DEBUG BEGIN_STMT
  ClientContextPtr_7 = &Dcm_DemClientContext[ClientIndex_8];
  # DEBUG ClientContextPtr => ClientContextPtr_7
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 676491173]:
  # DEBUG BEGIN_STMT
  ClientIndex_6 = ClientIndex_3 + 1;
  # DEBUG ClientIndex => ClientIndex_6

  <bb 6> [local count: 1073741824]:
  # ClientIndex_3 = PHI <0(2), ClientIndex_6(5)>
  # DEBUG ClientIndex => ClientIndex_3
  # DEBUG BEGIN_STMT
  if (ClientIndex_3 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 7>; [33.33%]

  <bb 7> [local count: 397250652]:
  # ClientContextPtr_2 = PHI <ClientContextPtr_7(4), &Dcm_DemClientContext(6)>
  # DEBUG ClientContextPtr => ClientContextPtr_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ClientContextPtr_2;

}



;; Function Dcm_DemFacade_ReadEventDataRecord_Execute (Dcm_DemFacade_ReadEventDataRecord_Execute, funcdef_no=18, decl_uid=7041, cgraph_uid=19, symbol_order=20)

Modification phase of node Dcm_DemFacade_ReadEventDataRecord_Execute/20
Dcm_DemFacade_ReadEventDataRecord_Execute (const Dcm_DemClientIdType ClientId)
{
  struct Dcm_DiagnosticDataContextType * DiagnosticDataContext;
  boolean ReportErrorFromDEM;
  Std_ReturnType ResultCodeFromGetEventData;
  Std_ReturnType ResultCodeFromGetSizeOfEventData;
  Std_ReturnType SelectEventDataResult;
  Std_ReturnType ResultCodeFromRecordUpdate;
  Std_ReturnType ResultCodeFromExecute;
  struct Dcm_DemClientContextType * _1;
  uint8 * _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromRecordUpdate => 4
  # DEBUG BEGIN_STMT
  # DEBUG SelectEventDataResult => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromGetSizeOfEventData => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromGetEventData => 4
  # DEBUG BEGIN_STMT
  # DEBUG ReportErrorFromDEM => 0
  # DEBUG BEGIN_STMT
  _1 = Dcm_Dsp_DemFacade_GetClient (ClientId_23(D));
  DiagnosticDataContext_24 = &_1->DiagnosticDataContext;
  # DEBUG DiagnosticDataContext => DiagnosticDataContext_24
  # DEBUG BEGIN_STMT
  _2 = &MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ControlRecordUpdate;
  ResultCodeFromRecordUpdate_26 = Dcm_DemFacade_DisableDTCRecordUpdate (ClientId_23(D), _2);
  # DEBUG ResultCodeFromRecordUpdate => ResultCodeFromRecordUpdate_26
  # DEBUG BEGIN_STMT
  if (ResultCodeFromRecordUpdate_26 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => ResultCodeFromRecordUpdate_26
  # DEBUG BEGIN_STMT
  # DEBUG ReportErrorFromDEM => 1

  <bb 4> [local count: 1073741823]:
  # ResultCodeFromExecute_9 = PHI <4(2), ResultCodeFromRecordUpdate_26(3)>
  # ReportErrorFromDEM_14 = PHI <0(2), 1(3)>
  # DEBUG ReportErrorFromDEM => ReportErrorFromDEM_14
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_9
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ControlRecordUpdate;
  if (_3 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ReportOnSelectData;
  if (_4 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 182536110]:
  if (ReportErrorFromDEM_14 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 7> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  SelectEventDataResult_28 = Dcm_DemFacade_SelectEventData (ClientId_23(D), DiagnosticDataContext_24);
  # DEBUG SelectEventDataResult => SelectEventDataResult_28
  # DEBUG BEGIN_STMT
  if (SelectEventDataResult_28 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 30118458]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => SelectEventDataResult_28
  # DEBUG BEGIN_STMT
  # DEBUG ReportErrorFromDEM => 1

  <bb 9> [local count: 365072220]:
  # ResultCodeFromExecute_10 = PHI <ResultCodeFromExecute_9(5), ResultCodeFromExecute_9(6), ResultCodeFromExecute_9(7), SelectEventDataResult_28(8)>
  # ReportErrorFromDEM_15 = PHI <ReportErrorFromDEM_14(5), ReportErrorFromDEM_14(6), 0(7), 1(8)>
  # DEBUG ReportErrorFromDEM => ReportErrorFromDEM_15
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_10
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ReportOnSizeOfDataToRead;
  if (_5 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 10> [local count: 182536110]:
  _6 = MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ReportOnSelectData;
  if (_6 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 11> [local count: 62062277]:
  if (ReportErrorFromDEM_15 == 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 12> [local count: 20480552]:
  # DEBUG BEGIN_STMT
  ResultCodeFromGetSizeOfEventData_30 = Dcm_DemFacade_GetSizeOfEventData (ClientId_23(D), DiagnosticDataContext_24);
  # DEBUG ResultCodeFromGetSizeOfEventData => ResultCodeFromGetSizeOfEventData_30
  # DEBUG BEGIN_STMT
  if (ResultCodeFromGetSizeOfEventData_30 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 10240276]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => ResultCodeFromGetSizeOfEventData_30
  # DEBUG BEGIN_STMT
  # DEBUG ReportErrorFromDEM => 1

  <bb 14> [local count: 365072221]:
  # ResultCodeFromExecute_11 = PHI <ResultCodeFromExecute_10(9), ResultCodeFromExecute_10(10), ResultCodeFromExecute_10(11), ResultCodeFromExecute_10(12), ResultCodeFromGetSizeOfEventData_30(13)>
  # ReportErrorFromDEM_16 = PHI <ReportErrorFromDEM_15(9), ReportErrorFromDEM_15(10), ReportErrorFromDEM_15(11), 0(12), 1(13)>
  # DEBUG ReportErrorFromDEM => ReportErrorFromDEM_16
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_11
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ReportOnSizeOfDataToRead;
  if (_7 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 15> [local count: 124124555]:
  if (ReportErrorFromDEM_16 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 16> [local count: 62062277]:
  # DEBUG BEGIN_STMT
  _8 = MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].AmountOfDataToWriteOnResponse;
  if (_8 != 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 17> [local count: 20480552]:
  # DEBUG BEGIN_STMT
  ResultCodeFromGetEventData_33 = Dcm_DemFacade_GetEventData (ClientId_23(D), DiagnosticDataContext_24);
  # DEBUG ResultCodeFromGetEventData => ResultCodeFromGetEventData_33
  # DEBUG BEGIN_STMT
  if (ResultCodeFromGetEventData_33 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 18> [local count: 10240276]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => ResultCodeFromGetEventData_33
  # DEBUG BEGIN_STMT
  # DEBUG ReportErrorFromDEM => 1
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 41581726]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DiagnosticDataContextType *)_1 + 32B].ControlRecordUpdate = 0;

  <bb 20> [local count: 365072221]:
  # ResultCodeFromExecute_12 = PHI <ResultCodeFromExecute_11(14), ResultCodeFromExecute_11(15), ResultCodeFromGetEventData_33(18), ResultCodeFromExecute_11(19), ResultCodeFromExecute_11(17)>
  # ReportErrorFromDEM_17 = PHI <ReportErrorFromDEM_16(14), ReportErrorFromDEM_16(15), 1(18), 0(19), 0(17)>
  # DEBUG ReportErrorFromDEM => ReportErrorFromDEM_17
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_12
  # DEBUG BEGIN_STMT
  ResultCodeFromRecordUpdate_35 = Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_23(D), _2);
  # DEBUG ResultCodeFromRecordUpdate => ResultCodeFromRecordUpdate_35
  # DEBUG BEGIN_STMT
  if (ReportErrorFromDEM_17 == 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 182536111]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => ResultCodeFromRecordUpdate_35

  <bb 22> [local count: 1073741824]:
  # ResultCodeFromExecute_13 = PHI <ResultCodeFromExecute_9(4), ResultCodeFromExecute_12(20), ResultCodeFromRecordUpdate_35(21)>
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_13
  # DEBUG BEGIN_STMT
  return ResultCodeFromExecute_13;

}



;; Function Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process (Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process, funcdef_no=1, decl_uid=6741, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process/3
Dcm_Dsp_DemFacade_GetDTCInfoBySelect_Process (Dcm_DemClientIdType ClientId, Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Dcm_MsgLenType AmountOfDataAvailableOnResponseBuffer;
  Dcm_MsgLenType PossitionOnResponse;
  struct Dcm_DemClientContextType * ClientContextPtr;
  Std_ReturnType FacadeReturnCodeGetEventData;
  Std_ReturnType ReturnCodeFromSelect;
  Std_ReturnType FacadeReturnCodeGetDTC;
  Std_ReturnType ServiceProcessStatus;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  short unsigned int _4;
  Dcm_MsgItemType * _5;
  Dcm_MsgItemType * _6;
  struct Dcm_DiagnosticDataContextType * _7;
  Dcm_MsgItemType * _8;
  long unsigned int _9;
  unsigned char _10;
  long unsigned int _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  long unsigned int _15;
  Dcm_MsgItemType * _16;
  unsigned char _17;
  uint8 * _18;
  unsigned char _19;
  struct Dcm_DiagnosticDataContextType * _20;
  unsigned char _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  struct Dcm_DiagnosticDataContextType * _26;

  <bb 2> [local count: 1073741821]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG FacadeReturnCodeGetDTC => 0
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCodeFromSelect => 1
  # DEBUG BEGIN_STMT
  # DEBUG FacadeReturnCodeGetEventData => 4
  # DEBUG BEGIN_STMT
  ClientContextPtr_39 = Dcm_Dsp_DemFacade_GetClient (ClientId_37(D));
  # DEBUG ClientContextPtr => ClientContextPtr_39
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_40(D)) <default: <L27> [20.00%], case 0: <L0> [20.00%], case 1: <L8> [20.00%], case 2: <L12> [20.00%], case 4: <L11> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  PossitionOnResponse_50 = pMsgContext_41(D)->resDataLen;
  # DEBUG PossitionOnResponse => PossitionOnResponse_50
  # DEBUG BEGIN_STMT
  # DEBUG AmountOfDataAvailableOnResponseBuffer => 0
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_41(D)->resMaxDataLen;
  if (_1 > PossitionOnResponse_50)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 107374182]:
  # DEBUG BEGIN_STMT
  AmountOfDataAvailableOnResponseBuffer_51 = _1 - PossitionOnResponse_50;
  # DEBUG AmountOfDataAvailableOnResponseBuffer => AmountOfDataAvailableOnResponseBuffer_51

  <bb 5> [local count: 214748364]:
  # AmountOfDataAvailableOnResponseBuffer_31 = PHI <0(3), AmountOfDataAvailableOnResponseBuffer_51(4)>
  # DEBUG AmountOfDataAvailableOnResponseBuffer => AmountOfDataAvailableOnResponseBuffer_31
  # DEBUG BEGIN_STMT
  _2 = ClientContextPtr_39->DTCMask;
  _3 = ClientContextPtr_39->DTCFormat;
  _4 = ClientContextPtr_39->MemoryOrigin;
  ReturnCodeFromSelect_53 = Dem_SelectDTC (ClientId_37(D), _2, _3, _4);
  # DEBUG ReturnCodeFromSelect => ReturnCodeFromSelect_53
  # DEBUG BEGIN_STMT
  if (ReturnCodeFromSelect_53 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  _5 = pMsgContext_41(D)->resData;
  _6 = _5 + PossitionOnResponse_50;
  # DEBUG GetDTCStatusContext => &Dcm_GetDTCStatusContext
  # DEBUG GetDTCStatusContextResponseBuffer => _6
  # DEBUG AvailableBufferSize => AmountOfDataAvailableOnResponseBuffer_31
  # DEBUG INLINE_ENTRY Dcm_DemFacade_GetDTCStatus_Setup
  # DEBUG BEGIN_STMT
  Dcm_GetDTCStatusContext.ResponseBuffer = _6;
  # DEBUG BEGIN_STMT
  Dcm_GetDTCStatusContext.BufferSize = AmountOfDataAvailableOnResponseBuffer_31;
  # DEBUG BEGIN_STMT
  Dcm_GetDTCStatusContext.StatusOfDTC = 0;
  # DEBUG BEGIN_STMT
  # DEBUG GetDTCStatusContext => NULL
  # DEBUG GetDTCStatusContextResponseBuffer => NULL
  # DEBUG AvailableBufferSize => NULL
  # DEBUG BEGIN_STMT
  PossitionOnResponse_57 = PossitionOnResponse_50 + 1;
  # DEBUG PossitionOnResponse => PossitionOnResponse_57
  # DEBUG BEGIN_STMT
  AmountOfDataAvailableOnResponseBuffer_58 = AmountOfDataAvailableOnResponseBuffer_31 + 4294967295;
  # DEBUG AmountOfDataAvailableOnResponseBuffer => AmountOfDataAvailableOnResponseBuffer_58
  # DEBUG BEGIN_STMT
  _7 = &ClientContextPtr_39->DiagnosticDataContext;
  _8 = _5 + PossitionOnResponse_57;
  _9 = ClientContextPtr_39->DTCMask;
  _10 = ClientContextPtr_39->DataRecordNumber;
  _11 = ClientContextPtr_39->SizeOfOnePage;
  _12 = ClientContextPtr_39->DataKind;
  _13 = ClientContextPtr_39->DTCFormat;
  Dcm_DemFacade_ReadEventDataRecord_Setup (_7, _8, AmountOfDataAvailableOnResponseBuffer_58, _9, _10, _11, _12, _13);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 143881404]:
  # DEBUG BEGIN_STMT
  if (ReturnCodeFromSelect_53 == 22)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 48919677]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 94961727]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_41(D), 16);
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 161, 2);
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 285615325]:
<L8>:
  # DEBUG BEGIN_STMT
  _14 = ClientContextPtr_39->SubServiceID;
  FacadeReturnCodeGetDTC_61 = Dcm_DemFacade_GetDTCStatus_Execute (ClientId_37(D), &Dcm_GetDTCStatusContext, _14);
  # DEBUG FacadeReturnCodeGetDTC => FacadeReturnCodeGetDTC_61
  # DEBUG BEGIN_STMT
  if (FacadeReturnCodeGetDTC_61 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 11> [local count: 94253057]:
  # DEBUG BEGIN_STMT
  FacadeReturnCodeGetEventData_63 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  # DEBUG FacadeReturnCodeGetEventData => FacadeReturnCodeGetEventData_63
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 214748364]:
<L11>:
  # DEBUG BEGIN_STMT
  _15 = pMsgContext_41(D)->resMaxDataLen;
  ClientContextPtr_39->DiagnosticDataContext.BufferSize = _15;
  # DEBUG BEGIN_STMT
  _16 = pMsgContext_41(D)->resData;
  ClientContextPtr_39->DiagnosticDataContext.ResponseBuffer = _16;
  # DEBUG BEGIN_STMT
  ClientContextPtr_39->DiagnosticDataContext.NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  ClientContextPtr_39->DiagnosticDataContext.AmountOfDataStoredOnResponseOnCurrentRun = 0;
  # DEBUG BEGIN_STMT
  FacadeReturnCodeGetEventData_47 = Dcm_DemFacade_ReadEventDataRecord_Execute (ClientId_37(D));
  # DEBUG FacadeReturnCodeGetEventData => FacadeReturnCodeGetEventData_47
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 214748364]:
<L12>:
  # DEBUG BEGIN_STMT
  _17 = ClientContextPtr_39->DiagnosticDataContext.ControlRecordUpdate;
  if (_17 == 1)
    goto <bb 14>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 14> [local count: 43465069]:
  # DEBUG BEGIN_STMT
  ClientContextPtr_39->DiagnosticDataContext.ControlRecordUpdate = 0;
  # DEBUG BEGIN_STMT
  _18 = &ClientContextPtr_39->DiagnosticDataContext.ControlRecordUpdate;
  Dcm_DemFacade_EnableDTCRecordUpdate (ClientId_37(D), _18);

  <bb 15> [local count: 1073741823]:
  # ServiceProcessStatus_27 = PHI <30(8), 30(9), 30(11), 30(12), 26(14), 30(2), 30(10), 26(13)>
  # FacadeReturnCodeGetDTC_29 = PHI <0(8), 0(9), 0(11), 0(12), 0(14), 0(2), FacadeReturnCodeGetDTC_61(10), 0(13)>
  # FacadeReturnCodeGetEventData_30 = PHI <4(8), 4(9), FacadeReturnCodeGetEventData_63(11), FacadeReturnCodeGetEventData_47(12), 4(14), 4(2), 4(10), 4(13)>
<L27>:
  # DEBUG FacadeReturnCodeGetEventData => FacadeReturnCodeGetEventData_30
  # DEBUG FacadeReturnCodeGetDTC => FacadeReturnCodeGetDTC_29
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_27
  # DEBUG BEGIN_STMT
  if (OpStatus_40(D) != 2)
    goto <bb 16>; [66.00%]
  else
    goto <bb 22>; [34.00%]

  <bb 16> [local count: 708669603]:
  # DEBUG BEGIN_STMT
  _19 = Dcm_GetDTCStatusContext.StatusOfDTC;
  if (_19 == 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 17> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  _20 = &ClientContextPtr_39->DiagnosticDataContext;
  ServiceProcessStatus_70 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetDTC_29, pMsgContext_41(D), _20, ClientContextPtr_39);
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_70
  goto <bb 22>; [100.00%]

  <bb 18> [local count: 474808634]:
  # DEBUG BEGIN_STMT
  _21 = ClientContextPtr_39->DTCStatusWrittenInResponseBuffer;
  if (_21 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 19> [local count: 237404317]:
  if (FacadeReturnCodeGetEventData_30 != 1)
    goto <bb 20>; [66.00%]
  else
    goto <bb 21>; [34.00%]

  <bb 20> [local count: 156686849]:
  # DEBUG BEGIN_STMT
  _22 = pMsgContext_41(D)->resDataLen;
  _23 = _22 + 1;
  pMsgContext_41(D)->resDataLen = _23;
  # DEBUG BEGIN_STMT
  _24 = ClientContextPtr_39->AmountOfDataWrittenOnCurrentPage;
  _25 = _24 + 1;
  ClientContextPtr_39->AmountOfDataWrittenOnCurrentPage = _25;
  # DEBUG BEGIN_STMT
  ClientContextPtr_39->DTCStatusWrittenInResponseBuffer = 1;

  <bb 21> [local count: 474808634]:
  # DEBUG BEGIN_STMT
  _26 = &ClientContextPtr_39->DiagnosticDataContext;
  ServiceProcessStatus_68 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_40(D), FacadeReturnCodeGetEventData_30, pMsgContext_41(D), _26, ClientContextPtr_39);
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_68

  <bb 22> [local count: 1073741824]:
  # ServiceProcessStatus_28 = PHI <ServiceProcessStatus_27(15), ServiceProcessStatus_70(17), ServiceProcessStatus_68(21)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_28;

}



;; Function Dcm_DemFacade_GetFilteredDTC_Execute (Dcm_DemFacade_GetFilteredDTC_Execute, funcdef_no=31, decl_uid=7085, cgraph_uid=32, symbol_order=33)

Modification phase of node Dcm_DemFacade_GetFilteredDTC_Execute/33
Setting nonnull for 1
Dcm_DemFacade_GetFilteredDTC_Execute (const Dcm_DemClientIdType ClientId, struct Dcm_DiagnosticDataContextType * GetDataOfFilteredDTCContext)
{
  uint8 RequestedDtcSize;
  const struct Dcm_DemClientContextType * SubServiceContext;
  Dcm_MsgLenType CurrentWritePosition;
  uint32 RequestedDtc;
  uint8 DtcReportedData;
  sint8 DtcFaultDetectionCounter;
  uint8 DtcStatusMask;
  uint16 ExpectedAmountOfFilteredDTCs;
  Std_ReturnType ResultDemInterface;
  Std_ReturnType ResultCodeFromExecute;
  unsigned char _1;
  unsigned char _2;
  signed char DtcFaultDetectionCounter.27_3;
  long unsigned int RequestedDtc.28_4;
  long unsigned int _5;
  uint8 * _6;
  uint8 * _7;
  unsigned char _8;
  long unsigned int RequestedDtc.29_9;
  long unsigned int _10;
  uint8 * _11;
  uint8 * _12;
  unsigned char _13;
  unsigned char _14;
  long unsigned int RequestedDtc.30_15;
  uint8 * _16;
  uint8 * _17;
  unsigned char _18;
  uint8 * _19;
  uint8 * _20;
  long unsigned int _21;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _26;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;

  <bb 2> [local count: 95397014]:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultDemInterface => 0
  # DEBUG BEGIN_STMT
  ExpectedAmountOfFilteredDTCs_50 = GetDataOfFilteredDTCContext_49(D)->NumberOfFilteredDTCs;
  # DEBUG ExpectedAmountOfFilteredDTCs => ExpectedAmountOfFilteredDTCs_50
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DtcReportedData => 0
  # DEBUG BEGIN_STMT
  RequestedDtc = 0;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_52 = GetDataOfFilteredDTCContext_49(D)->NextPossitionToFillOnResponseBuffer;
  # DEBUG CurrentWritePosition => CurrentWritePosition_52
  # DEBUG BEGIN_STMT
  SubServiceContext_54 = Dcm_Dsp_DemFacade_GetClient (ClientId_53(D));
  # DEBUG SubServiceContext => SubServiceContext_54
  # DEBUG BEGIN_STMT
  # DEBUG RequestedDtcSize => 4
  # DEBUG BEGIN_STMT
  _1 = GetDataOfFilteredDTCContext_49(D)->DTCFormat;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 3> [local count: 47698507]:
  # DEBUG BEGIN_STMT
  # DEBUG RequestedDtcSize => 2
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 978344808]:
  # DEBUG BEGIN_STMT
  _2 = SubServiceContext_54->FilterForFaultDetectionCounter;
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 489172404]:
  # DEBUG BEGIN_STMT
  ResultDemInterface_59 = Dem_GetNextFilteredDTC (ClientId_53(D), &RequestedDtc, &DtcStatusMask);
  # DEBUG ResultDemInterface => ResultDemInterface_59
  # DEBUG BEGIN_STMT
  DtcReportedData_60 = DtcStatusMask;
  # DEBUG DtcReportedData => DtcReportedData_60
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 489172404]:
  # DEBUG BEGIN_STMT
  ResultDemInterface_56 = Dem_GetNextFilteredDTCAndFDC (ClientId_53(D), &RequestedDtc, &DtcFaultDetectionCounter);
  # DEBUG ResultDemInterface => ResultDemInterface_56
  # DEBUG BEGIN_STMT
  DtcFaultDetectionCounter.27_3 = DtcFaultDetectionCounter;
  DtcReportedData_57 = (uint8) DtcFaultDetectionCounter.27_3;
  # DEBUG DtcReportedData => DtcReportedData_57

  <bb 7> [local count: 978344808]:
  # ResultDemInterface_33 = PHI <ResultDemInterface_59(5), ResultDemInterface_56(6)>
  # DtcReportedData_36 = PHI <DtcReportedData_60(5), DtcReportedData_57(6)>
  # DEBUG DtcReportedData => DtcReportedData_36
  # DEBUG ResultDemInterface => ResultDemInterface_33
  # DEBUG BEGIN_STMT
  if (ResultDemInterface_33 == 48)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 332637235]:
  # DEBUG BEGIN_STMT
  RequestedDtc = 0;
  # DEBUG BEGIN_STMT
  # DEBUG DtcReportedData => 0

  <bb 9> [local count: 978344808]:
  # DtcReportedData_37 = PHI <DtcReportedData_36(7), 0(8)>
  # DEBUG DtcReportedData => DtcReportedData_37
  # DEBUG BEGIN_STMT
  if (ResultDemInterface_33 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 489172404]:
  if (ResultDemInterface_33 == 48)
    goto <bb 11>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 11> [local count: 655491021]:
  # DEBUG BEGIN_STMT
  RequestedDtc.28_4 = RequestedDtc;
  _5 = RequestedDtc.28_4 >> 16;
  _6 = GetDataOfFilteredDTCContext_49(D)->ResponseBuffer;
  _7 = _6 + CurrentWritePosition_39;
  _8 = (unsigned char) _5;
  *_7 = _8;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_63 = CurrentWritePosition_39 + 1;
  # DEBUG CurrentWritePosition => CurrentWritePosition_63
  # DEBUG BEGIN_STMT
  RequestedDtc.29_9 = RequestedDtc;
  _10 = RequestedDtc.29_9 >> 8;
  _11 = GetDataOfFilteredDTCContext_49(D)->ResponseBuffer;
  _12 = _11 + CurrentWritePosition_63;
  _13 = (unsigned char) _10;
  *_12 = _13;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_65 = CurrentWritePosition_39 + 2;
  # DEBUG CurrentWritePosition => CurrentWritePosition_65
  # DEBUG BEGIN_STMT
  _14 = GetDataOfFilteredDTCContext_49(D)->DTCFormat;
  if (_14 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 222866947]:
  # DEBUG BEGIN_STMT
  RequestedDtc.30_15 = RequestedDtc;
  _16 = GetDataOfFilteredDTCContext_49(D)->ResponseBuffer;
  _17 = _16 + CurrentWritePosition_65;
  _18 = (unsigned char) RequestedDtc.30_15;
  *_17 = _18;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_67 = CurrentWritePosition_39 + 3;
  # DEBUG CurrentWritePosition => CurrentWritePosition_67
  # DEBUG BEGIN_STMT
  _19 = GetDataOfFilteredDTCContext_49(D)->ResponseBuffer;
  _20 = _19 + CurrentWritePosition_67;
  *_20 = DtcReportedData_37;
  # DEBUG BEGIN_STMT
  CurrentWritePosition_69 = CurrentWritePosition_39 + 4;
  # DEBUG CurrentWritePosition => CurrentWritePosition_69

  <bb 13> [local count: 655491021]:
  # CurrentWritePosition_38 = PHI <CurrentWritePosition_65(11), CurrentWritePosition_69(12)>
  # DEBUG CurrentWritePosition => CurrentWritePosition_38
  # DEBUG BEGIN_STMT
  _21 = GetDataOfFilteredDTCContext_49(D)->BufferSize;
  _23 = _21 - _29;
  GetDataOfFilteredDTCContext_49(D)->BufferSize = _23;
  # DEBUG BEGIN_STMT
  _24 = GetDataOfFilteredDTCContext_49(D)->AmountOfDataStoredOnResponseOnCurrentRun;
  _26 = _24 + _29;
  GetDataOfFilteredDTCContext_49(D)->AmountOfDataStoredOnResponseOnCurrentRun = _26;
  # DEBUG BEGIN_STMT
  ExpectedAmountOfFilteredDTCs_72 = ExpectedAmountOfFilteredDTCs_35 + 65535;
  # DEBUG ExpectedAmountOfFilteredDTCs => ExpectedAmountOfFilteredDTCs_72
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 95397014]:
  # RequestedDtcSize_84 = PHI <2(3), 4(2)>
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 978344806]:
  # ResultDemInterface_27 = PHI <ResultDemInterface_33(10), ResultDemInterface_33(13)>
  # ExpectedAmountOfFilteredDTCs_25 = PHI <ExpectedAmountOfFilteredDTCs_35(10), ExpectedAmountOfFilteredDTCs_72(13)>
  # CurrentWritePosition_22 = PHI <CurrentWritePosition_39(10), CurrentWritePosition_38(13)>

  <bb 16> [local count: 1073741824]:
  # ResultDemInterface_34 = PHI <ResultDemInterface_27(15), 0(14)>
  # ExpectedAmountOfFilteredDTCs_35 = PHI <ExpectedAmountOfFilteredDTCs_25(15), ExpectedAmountOfFilteredDTCs_50(14)>
  # CurrentWritePosition_39 = PHI <CurrentWritePosition_22(15), CurrentWritePosition_52(14)>
  # DEBUG RequestedDtcSize => RequestedDtcSize_84
  # DEBUG CurrentWritePosition => CurrentWritePosition_39
  # DEBUG ExpectedAmountOfFilteredDTCs => ExpectedAmountOfFilteredDTCs_35
  # DEBUG ResultDemInterface => ResultDemInterface_34
  # DEBUG BEGIN_STMT
  if (ExpectedAmountOfFilteredDTCs_35 != 0)
    goto <bb 17>; [96.34%]
  else
    goto <bb 20>; [3.66%]

  <bb 17> [local count: 1034442873]:
  if (ResultDemInterface_34 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 18> [local count: 517221436]:
  if (ResultDemInterface_34 == 48)
    goto <bb 19>; [96.34%]
  else
    goto <bb 20>; [3.66%]

  <bb 19> [local count: 1015512568]:
  _28 = GetDataOfFilteredDTCContext_49(D)->BufferSize;
  _29 = (long unsigned int) RequestedDtcSize_84;
  if (_28 >= _29)
    goto <bb 4>; [96.34%]
  else
    goto <bb 20>; [3.66%]

  <bb 20> [local count: 95397015]:
  # ResultDemInterface_80 = PHI <ResultDemInterface_34(16), ResultDemInterface_34(18), ResultDemInterface_34(19)>
  # ExpectedAmountOfFilteredDTCs_46 = PHI <ExpectedAmountOfFilteredDTCs_35(16), ExpectedAmountOfFilteredDTCs_35(18), ExpectedAmountOfFilteredDTCs_35(19)>
  # CurrentWritePosition_47 = PHI <CurrentWritePosition_39(16), CurrentWritePosition_39(18), CurrentWritePosition_39(19)>
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_49(D)->NumberOfFilteredDTCs = ExpectedAmountOfFilteredDTCs_46;
  # DEBUG BEGIN_STMT
  _30 = GetDataOfFilteredDTCContext_49(D)->BufferSize;
  _31 = (long unsigned int) RequestedDtcSize_84;
  if (_30 < _31)
    goto <bb 21>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 21> [local count: 47698508]:
  if (ExpectedAmountOfFilteredDTCs_46 != 0)
    goto <bb 22>; [35.00%]
  else
    goto <bb 23>; [65.00%]

  <bb 22> [local count: 16694478]:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_49(D)->NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 2
  goto <bb 28>; [100.00%]

  <bb 23> [local count: 78702538]:
  # DEBUG BEGIN_STMT
  switch (ResultDemInterface_80) <default: <L24> [25.00%], case 0: <L21> [25.00%], case 4: <L22> [25.00%], case 48: <L23> [25.00%]>

  <bb 24> [local count: 19675634]:
<L21>:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_49(D)->NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  goto <bb 28>; [100.00%]

  <bb 25> [local count: 19675634]:
<L22>:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_49(D)->NextPossitionToFillOnResponseBuffer = CurrentWritePosition_47;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 1
  # DEBUG BEGIN_STMT
  goto <bb 28>; [100.00%]

  <bb 26> [local count: 19675634]:
<L23>:
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_49(D)->NextPossitionToFillOnResponseBuffer = 0;
  # DEBUG BEGIN_STMT
  GetDataOfFilteredDTCContext_49(D)->NumberOfFilteredDTCs = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  goto <bb 28>; [100.00%]

  <bb 27> [local count: 19675634]:
<L24>:
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 152, 2);
  # DEBUG BEGIN_STMT

  <bb 28> [local count: 95397015]:
  # ResultCodeFromExecute_32 = PHI <2(22), 0(24), 1(25), 0(26), 4(27)>
  # DEBUG ResultCodeFromExecute => ResultCodeFromExecute_32
  # DEBUG BEGIN_STMT
  DtcStatusMask ={v} {CLOBBER};
  DtcFaultDetectionCounter ={v} {CLOBBER};
  RequestedDtc ={v} {CLOBBER};
  return ResultCodeFromExecute_32;

}



;; Function Dcm_Dsp_DemFacade_LockClient (Dcm_Dsp_DemFacade_LockClient, funcdef_no=5, decl_uid=6749, cgraph_uid=6, symbol_order=7)

Modification phase of node Dcm_Dsp_DemFacade_LockClient/7
Dcm_Dsp_DemFacade_LockClient (Dcm_DemClientIdType ClientId)
{
  struct Dcm_DemClientContextType * ClientContextPtr;
  Std_ReturnType LockStatus;
  Dcm_MutexType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG LockStatus => 31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ClientContextPtr_4 = Dcm_Dsp_DemFacade_GetClient (ClientId_3(D));
  # DEBUG ClientContextPtr => ClientContextPtr_4
  # DEBUG BEGIN_STMT
  _1 = &ClientContextPtr_4->Mutex;
  LockStatus_6 = Dcm_Internal_GetLock (_1);
  # DEBUG LockStatus => LockStatus_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return LockStatus_6;

}



;; Function Dcm_Dsp_DemFacade_UnlockClient (Dcm_Dsp_DemFacade_UnlockClient, funcdef_no=6, decl_uid=6751, cgraph_uid=7, symbol_order=8)

Modification phase of node Dcm_Dsp_DemFacade_UnlockClient/8
Dcm_Dsp_DemFacade_UnlockClient (Dcm_DemClientIdType ClientId)
{
  struct Dcm_DemClientContextType * ClientContextPtr;
  Dcm_MutexType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ClientContextPtr_4 = Dcm_Dsp_DemFacade_GetClient (ClientId_3(D));
  # DEBUG ClientContextPtr => ClientContextPtr_4
  # DEBUG BEGIN_STMT
  _1 = &ClientContextPtr_4->Mutex;
  Dcm_Internal_ReleaseLock (_1);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process (Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process, funcdef_no=2, decl_uid=6737, cgraph_uid=3, symbol_order=4)

Modification phase of node Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process/4
Dcm_Dsp_DemFacade_GetDTCInfoByFilter_Process (Dcm_DemClientIdType ClientId, Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Dcm_MsgLenType DataSize;
  Dcm_MsgLenType AvailableBufferSize;
  Dcm_MsgLenType PossitionOnResponse;
  struct Dcm_DemClientContextType * ClientContextPtr;
  Std_ReturnType FacadeReturnCode;
  Std_ReturnType ServiceProcessStatus;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;
  unsigned char _8;
  short unsigned int _9;
  Dcm_MsgItemType * _10;
  long unsigned int _11;
  Dcm_MsgItemType * _12;
  unsigned char _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  unsigned char _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  Dcm_MsgItemType * _22;
  long unsigned int _23;
  Dcm_MsgItemType * _24;
  long unsigned int _25;
  long unsigned int DataSize.14_26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  unsigned char _30;
  unsigned char _31;
  unsigned char _32;
  unsigned char _33;
  struct Dcm_DiagnosticDataContextType * _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  unsigned char _40;
  unsigned char _41;
  unsigned char _42;
  struct Dcm_DiagnosticDataContextType * _43;
  struct Dcm_DiagnosticDataContextType * _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  long unsigned int _50;
  Dcm_MsgItemType * _51;
  unsigned char _52;
  struct Dcm_DiagnosticDataContextType * _53;
  struct Dcm_DiagnosticDataContextType * _54;
  struct Dcm_DiagnosticDataContextType * _55;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG FacadeReturnCode => 4
  # DEBUG BEGIN_STMT
  ClientContextPtr_78 = Dcm_Dsp_DemFacade_GetClient (ClientId_77(D));
  # DEBUG ClientContextPtr => ClientContextPtr_78
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (OpStatus_79(D)) <default: <L40> [20.00%], case 0: <L0> [20.00%], case 1: <L7> [20.00%], case 2: <L34> [20.00%], case 4: <L30> [20.00%]>

  <bb 3> [local count: 214748365]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG PossitionOnResponse => 0
  # DEBUG BEGIN_STMT
  _1 = ClientContextPtr_78->SizeOfOnePage;
  _2 = ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage;
  AvailableBufferSize_88 = _1 - _2;
  # DEBUG AvailableBufferSize => AvailableBufferSize_88
  # DEBUG BEGIN_STMT
  _3 = ClientContextPtr_78->SubServiceID;
  if (_3 != 255)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 141733921]:
  # DEBUG BEGIN_STMT
  # DEBUG PossitionOnResponse => 1

  <bb 5> [local count: 214748365]:
  # PossitionOnResponse_63 = PHI <0(3), 1(4)>
  # DEBUG PossitionOnResponse => PossitionOnResponse_63
  # DEBUG BEGIN_STMT
  _4 = ClientContextPtr_78->MemoryOriginState;
  if (_4 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  PossitionOnResponse_89 = PossitionOnResponse_63 + 1;
  # DEBUG PossitionOnResponse => PossitionOnResponse_89
  # DEBUG BEGIN_STMT
  AvailableBufferSize_90 = AvailableBufferSize_88 + 4294967295;
  # DEBUG AvailableBufferSize => AvailableBufferSize_90

  <bb 7> [local count: 214748365]:
  # PossitionOnResponse_64 = PHI <PossitionOnResponse_63(5), PossitionOnResponse_89(6)>
  # AvailableBufferSize_66 = PHI <AvailableBufferSize_88(5), AvailableBufferSize_90(6)>
  # DEBUG AvailableBufferSize => AvailableBufferSize_66
  # DEBUG PossitionOnResponse => PossitionOnResponse_64
  # DEBUG BEGIN_STMT
  _5 = ClientContextPtr_78->AvailabilityMaskState;
  if (_5 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  # DEBUG DataSize => 0
  # DEBUG BEGIN_STMT
  # DEBUG ClientId => ClientId_77(D)
  # DEBUG Operation => 0
  # DEBUG DataBuffer => 0B
  # DEBUG Size => 0B
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromDem => 4
  # DEBUG BEGIN_STMT
  # DEBUG ServiceContext => ClientContextPtr_78
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  # DEBUG ClientId => NULL
  # DEBUG Operation => NULL
  # DEBUG DataBuffer => NULL
  # DEBUG Size => NULL
  # DEBUG ServiceContext => NULL
  # DEBUG ResultCodeFromDem => NULL
  # DEBUG ResultCodeFromExecute => NULL
  # DEBUG BEGIN_STMT
  # DEBUG ClientId => ClientId_77(D)
  # DEBUG Operation => 1
  # DEBUG DataBuffer => 0B
  # DEBUG Size => &DataSize
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 4
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromDem => 4
  # DEBUG BEGIN_STMT
  # DEBUG ServiceContext => ClientContextPtr_78
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DataSize => 1
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  # DEBUG ResultCodeFromExecute => 0
  # DEBUG BEGIN_STMT
  # DEBUG ClientId => NULL
  # DEBUG Operation => NULL
  # DEBUG DataBuffer => NULL
  # DEBUG Size => NULL
  # DEBUG ServiceContext => NULL
  # DEBUG ResultCodeFromDem => NULL
  # DEBUG ResultCodeFromExecute => NULL
  # DEBUG BEGIN_STMT
  PossitionOnResponse_91 = PossitionOnResponse_64 + 1;
  # DEBUG PossitionOnResponse => PossitionOnResponse_91
  # DEBUG BEGIN_STMT
  AvailableBufferSize_92 = AvailableBufferSize_66 + 4294967295;
  # DEBUG AvailableBufferSize => AvailableBufferSize_92
  # DEBUG D#6 => {CLOBBER}
  # DEBUG DataSize => D#6

  <bb 9> [local count: 214748365]:
  # PossitionOnResponse_65 = PHI <PossitionOnResponse_64(7), PossitionOnResponse_91(8)>
  # AvailableBufferSize_67 = PHI <AvailableBufferSize_66(7), AvailableBufferSize_92(8)>
  # DEBUG AvailableBufferSize => AvailableBufferSize_67
  # DEBUG PossitionOnResponse => PossitionOnResponse_65
  # DEBUG BEGIN_STMT
  _6 = pMsgContext_80(D)->resData;
  _7 = _6 + PossitionOnResponse_65;
  Dcm_DemFacade_NumberOfFilteredDTC_Setup (ClientContextPtr_78, _7, AvailableBufferSize_67);

  <bb 10> [local count: 429496730]:
<L7>:
  # DEBUG BEGIN_STMT
  _8 = ClientContextPtr_78->MemoryOriginState;
  if (_8 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 146028888]:
  # DEBUG BEGIN_STMT
  _9 = ClientContextPtr_78->MemoryOrigin;
  _10 = pMsgContext_80(D)->resData;
  _11 = pMsgContext_80(D)->resDataLen;
  _12 = _10 + _11;
  _13 = (unsigned char) _9;
  *_12 = _13;
  # DEBUG BEGIN_STMT
  _14 = pMsgContext_80(D)->resDataLen;
  _15 = _14 + 1;
  pMsgContext_80(D)->resDataLen = _15;
  # DEBUG BEGIN_STMT
  _16 = ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage;
  _17 = _16 + 1;
  ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage = _17;
  # DEBUG BEGIN_STMT
  ClientContextPtr_78->MemoryOriginState = 3;

  <bb 12> [local count: 429496730]:
  # DEBUG BEGIN_STMT
  _18 = ClientContextPtr_78->AvailabilityMaskState;
  if (_18 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 17>; [79.76%]

  <bb 13> [local count: 86930138]:
  # DEBUG BEGIN_STMT
  _19 = ClientContextPtr_78->SizeOfOnePage;
  _20 = ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage;
  _21 = _19 - _20;
  DataSize = _21;
  # DEBUG BEGIN_STMT
  _22 = pMsgContext_80(D)->resData;
  _23 = pMsgContext_80(D)->resDataLen;
  _24 = _22 + _23;
  FacadeReturnCode_100 = Dcm_DemFacade_DTCStatusAvailabilityMask (ClientId_77(D), 2, _24, &DataSize);
  # DEBUG FacadeReturnCode => FacadeReturnCode_100
  # DEBUG BEGIN_STMT
  if (FacadeReturnCode_100 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 43465069]:
  # DEBUG BEGIN_STMT
  ClientContextPtr_78->AvailabilityMaskState = 3;
  # DEBUG BEGIN_STMT
  _25 = pMsgContext_80(D)->resDataLen;
  DataSize.14_26 = DataSize;
  _27 = _25 + DataSize.14_26;
  pMsgContext_80(D)->resDataLen = _27;
  # DEBUG BEGIN_STMT
  _28 = ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage;
  _29 = DataSize.14_26 + _28;
  ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage = _29;
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 43465069]:
  # DEBUG BEGIN_STMT
  ClientContextPtr_78->AvailabilityMaskState = 4;

  <bb 16> [local count: 86930138]:
  DataSize ={v} {CLOBBER};

  <bb 17> [local count: 429496729]:
  # FacadeReturnCode_59 = PHI <4(12), FacadeReturnCode_100(16)>
  # DEBUG FacadeReturnCode => FacadeReturnCode_59
  # DEBUG BEGIN_STMT
  _30 = ClientContextPtr_78->AvailabilityMaskState;
  if (_30 != 4)
    goto <bb 18>; [66.00%]
  else
    goto <bb 23>; [34.00%]

  <bb 18> [local count: 283467841]:
  _31 = ClientContextPtr_78->FilteredDtcsState;
  if (_31 == 1)
    goto <bb 21>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 19> [local count: 226093950]:
  _32 = ClientContextPtr_78->FilteredDtcsCountState;
  if (_32 == 1)
    goto <bb 21>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 20> [local count: 149222007]:
  _33 = ClientContextPtr_78->DtcFormatIdState;
  if (_33 == 1)
    goto <bb 21>; [34.00%]
  else
    goto <bb 23>; [66.00%]

  <bb 21> [local count: 184981317]:
  # DEBUG BEGIN_STMT
  _34 = &ClientContextPtr_78->DiagnosticDataContext;
  FacadeReturnCode_107 = Dcm_DemFacade_SetFilterObtainNumberOfFilteredDTC_Execute (ClientId_77(D), _34);
  # DEBUG FacadeReturnCode => FacadeReturnCode_107
  # DEBUG BEGIN_STMT
  if (FacadeReturnCode_107 == 0)
    goto <bb 22>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 22> [local count: 92490658]:
  # DEBUG BEGIN_STMT
  _35 = pMsgContext_80(D)->resDataLen;
  _36 = ClientContextPtr_78->DiagnosticDataContext.AmountOfDataStoredOnResponseOnCurrentRun;
  _37 = _35 + _36;
  pMsgContext_80(D)->resDataLen = _37;
  # DEBUG BEGIN_STMT
  _38 = ClientContextPtr_78->DiagnosticDataContext.NextPossitionToFillOnResponseBuffer;
  _39 = _36 + _38;
  ClientContextPtr_78->DiagnosticDataContext.NextPossitionToFillOnResponseBuffer = _39;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26

  <bb 23> [local count: 429496729]:
  # ServiceProcessStatus_56 = PHI <30(17), 30(20), 30(21), 26(22)>
  # FacadeReturnCode_60 = PHI <FacadeReturnCode_59(17), FacadeReturnCode_59(20), FacadeReturnCode_107(21), 0(22)>
  # DEBUG FacadeReturnCode => FacadeReturnCode_60
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_56
  # DEBUG BEGIN_STMT
  _40 = ClientContextPtr_78->DiagnosticDataContext.ReportOnGetNumberOfFilters;
  if (_40 == 1)
    goto <bb 24>; [34.00%]
  else
    goto <bb 33>; [66.00%]

  <bb 24> [local count: 146028888]:
  _41 = ClientContextPtr_78->FilteredDtcsState;
  if (_41 == 1)
    goto <bb 25>; [34.00%]
  else
    goto <bb 33>; [66.00%]

  <bb 25> [local count: 49649822]:
  # DEBUG BEGIN_STMT
  _42 = ClientContextPtr_78->DiagnosticDataContext.FilterWithSeverity;
  if (_42 == 1)
    goto <bb 26>; [34.00%]
  else
    goto <bb 27>; [66.00%]

  <bb 26> [local count: 16880939]:
  # DEBUG BEGIN_STMT
  _43 = &ClientContextPtr_78->DiagnosticDataContext;
  FacadeReturnCode_113 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _43);
  # DEBUG FacadeReturnCode => FacadeReturnCode_113
  goto <bb 28>; [100.00%]

  <bb 27> [local count: 32768882]:
  # DEBUG BEGIN_STMT
  _44 = &ClientContextPtr_78->DiagnosticDataContext;
  FacadeReturnCode_111 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _44);
  # DEBUG FacadeReturnCode => FacadeReturnCode_111

  <bb 28> [local count: 49649822]:
  # FacadeReturnCode_61 = PHI <FacadeReturnCode_113(26), FacadeReturnCode_111(27)>
  # DEBUG FacadeReturnCode => FacadeReturnCode_61
  # DEBUG BEGIN_STMT
  _45 = ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage;
  _46 = ClientContextPtr_78->DiagnosticDataContext.AmountOfDataStoredOnResponseOnCurrentRun;
  _47 = _45 + _46;
  ClientContextPtr_78->AmountOfDataWrittenOnCurrentPage = _47;
  # DEBUG BEGIN_STMT
  ClientContextPtr_78->DiagnosticDataContext.AmountOfDataStoredOnResponseOnCurrentRun = 0;
  goto <bb 33>; [100.00%]

  <bb 29> [local count: 214748365]:
<L30>:
  # DEBUG BEGIN_STMT
  _48 = pMsgContext_80(D)->resMaxDataLen;
  _49 = ClientContextPtr_78->DiagnosticDataContext.NextPossitionToFillOnResponseBuffer;
  _50 = _48 - _49;
  ClientContextPtr_78->DiagnosticDataContext.BufferSize = _50;
  # DEBUG BEGIN_STMT
  _51 = pMsgContext_80(D)->resData;
  ClientContextPtr_78->DiagnosticDataContext.ResponseBuffer = _51;
  # DEBUG BEGIN_STMT
  ClientContextPtr_78->DiagnosticDataContext.AmountOfDataStoredOnResponseOnCurrentRun = 0;
  # DEBUG BEGIN_STMT
  _52 = ClientContextPtr_78->DiagnosticDataContext.FilterWithSeverity;
  if (_52 == 1)
    goto <bb 30>; [34.00%]
  else
    goto <bb 31>; [66.00%]

  <bb 30> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  _53 = &ClientContextPtr_78->DiagnosticDataContext;
  FacadeReturnCode_87 = Dcm_DemFacade_GetSeverityFilteredDTC_Execute (ClientId_77(D), _53);
  # DEBUG FacadeReturnCode => FacadeReturnCode_87
  goto <bb 33>; [100.00%]

  <bb 31> [local count: 141733921]:
  # DEBUG BEGIN_STMT
  _54 = &ClientContextPtr_78->DiagnosticDataContext;
  FacadeReturnCode_85 = Dcm_DemFacade_GetFilteredDTC_Execute (ClientId_77(D), _54);
  # DEBUG FacadeReturnCode => FacadeReturnCode_85
  goto <bb 33>; [100.00%]

  <bb 32> [local count: 214748365]:
<L34>:
  # DEBUG BEGIN_STMT
  # DEBUG ServiceProcessStatus => 26
  # DEBUG BEGIN_STMT

  <bb 33> [local count: 1073741824]:
  # ServiceProcessStatus_57 = PHI <ServiceProcessStatus_56(24), 30(31), 26(32), 30(2), ServiceProcessStatus_56(23), ServiceProcessStatus_56(28), 30(30)>
  # FacadeReturnCode_62 = PHI <FacadeReturnCode_60(24), FacadeReturnCode_85(31), 4(32), 4(2), FacadeReturnCode_60(23), FacadeReturnCode_61(28), FacadeReturnCode_87(30)>
<L40>:
  # DEBUG FacadeReturnCode => FacadeReturnCode_62
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_57
  # DEBUG BEGIN_STMT
  if (OpStatus_79(D) != 2)
    goto <bb 34>; [48.88%]
  else
    goto <bb 35>; [51.12%]

  <bb 34> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  _55 = &ClientContextPtr_78->DiagnosticDataContext;
  ServiceProcessStatus_117 = Dcm_DspInternal_ProcessEventDataResult (OpStatus_79(D), FacadeReturnCode_62, pMsgContext_80(D), _55, ClientContextPtr_78);
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_117

  <bb 35> [local count: 1073741824]:
  # ServiceProcessStatus_58 = PHI <ServiceProcessStatus_57(33), ServiceProcessStatus_117(34)>
  # DEBUG ServiceProcessStatus => ServiceProcessStatus_58
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ServiceProcessStatus_58;

}



;; Function Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame (Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame, funcdef_no=8, decl_uid=6758, cgraph_uid=9, symbol_order=10)

Modification phase of node Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame/10
Dcm_Dsp_DemFacade_ReadDataOfOBDFreezeFrame (uint8 PID, uint8 DataElementIndexOfPID, uint8 * DestBuffer, uint16 * BufSize)
{
  Std_ReturnType ReadDataResult;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadDataResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReadDataResult_7 = Dem_DcmReadDataOfOBDFreezeFrame (PID_2(D), DataElementIndexOfPID_3(D), DestBuffer_4(D), BufSize_5(D));
  # DEBUG ReadDataResult => ReadDataResult_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ReadDataResult_7;

}



;; Function Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame (Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame, funcdef_no=9, decl_uid=6760, cgraph_uid=10, symbol_order=11)

Modification phase of node Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame/11
Dcm_Dsp_DemFacade_GetDTCOfOBDFreezeFrame (uint32 * DTC)
{
  Std_ReturnType GetFFResult;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG GetFFResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  GetFFResult_4 = Dem_DcmGetDTCOfOBDFreezeFrame (0, DTC_2(D), 0);
  # DEBUG GetFFResult => GetFFResult_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return GetFFResult_4;

}



;; Function Dcm_Dsp_DemFacade_ControlDTCSetting_Enable (Dcm_Dsp_DemFacade_ControlDTCSetting_Enable, funcdef_no=10, decl_uid=6762, cgraph_uid=11, symbol_order=12)

Modification phase of node Dcm_Dsp_DemFacade_ControlDTCSetting_Enable/12
Dcm_Dsp_DemFacade_ControlDTCSetting_Enable (const Dcm_DemClientIdType DemClientId)
{
  Dcm_ReturnControlDTCSettingType DcmDTCSettingStatus;
  Std_ReturnType DemDTCSettingStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DemDTCSettingStatus => 1
  # DEBUG BEGIN_STMT
  # DEBUG DcmDTCSettingStatus => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DemDTCSettingStatus_6 = Dem_EnableDTCSetting (DemClientId_4(D));
  # DEBUG DemDTCSettingStatus => DemDTCSettingStatus_6
  # DEBUG BEGIN_STMT
  if (DemDTCSettingStatus_6 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (DemDTCSettingStatus_6 == 4)
    goto <bb 5>; [66.01%]
  else
    goto <bb 4>; [33.99%]

  <bb 4> [local count: 182482423]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 77, 2);

  <bb 5> [local count: 1073741824]:
  # DcmDTCSettingStatus_1 = PHI <0(2), 1(3), 2(4)>
  # DEBUG DcmDTCSettingStatus => DcmDTCSettingStatus_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DcmDTCSettingStatus_1;

}



;; Function Dcm_Dsp_DemFacade_ControlDTCSetting_Disable (Dcm_Dsp_DemFacade_ControlDTCSetting_Disable, funcdef_no=11, decl_uid=6764, cgraph_uid=12, symbol_order=13)

Modification phase of node Dcm_Dsp_DemFacade_ControlDTCSetting_Disable/13
Dcm_Dsp_DemFacade_ControlDTCSetting_Disable (const Dcm_DemClientIdType DemClientId)
{
  Dcm_ReturnControlDTCSettingType DcmDTCSettingStatus;
  Std_ReturnType DemDTCSettingStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DemDTCSettingStatus => 1
  # DEBUG BEGIN_STMT
  # DEBUG DcmDTCSettingStatus => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DemDTCSettingStatus_6 = Dem_DisableDTCSetting (DemClientId_4(D));
  # DEBUG DemDTCSettingStatus => DemDTCSettingStatus_6
  # DEBUG BEGIN_STMT
  if (DemDTCSettingStatus_6 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (DemDTCSettingStatus_6 == 4)
    goto <bb 5>; [66.01%]
  else
    goto <bb 4>; [33.99%]

  <bb 4> [local count: 182482423]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 77, 2);

  <bb 5> [local count: 1073741824]:
  # DcmDTCSettingStatus_1 = PHI <0(2), 1(3), 2(4)>
  # DEBUG DcmDTCSettingStatus => DcmDTCSettingStatus_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DcmDTCSettingStatus_1;

}



;; Function Dcm_Dsp_DemFacade_ClearDTCInfo_Setup (Dcm_Dsp_DemFacade_ClearDTCInfo_Setup, funcdef_no=12, decl_uid=6770, cgraph_uid=13, symbol_order=14)

Modification phase of node Dcm_Dsp_DemFacade_ClearDTCInfo_Setup/14
Dcm_Dsp_DemFacade_ClearDTCInfo_Setup (Dcm_DemClientIdType DemClientId, uint32 DTC, uint8 DTCFormat, uint16 DTCOrigin, Dcm_NegativeResponseCodeType * NrcPtr)
{
  struct Dcm_DemClientContextType * ClientContextPtr;
  Dcm_NegativeResponseCodeType LocalNrc;
  Std_ReturnType resultSelect;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG resultSelect => 1
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ClientContextPtr_5 = Dcm_Dsp_DemFacade_GetClient (DemClientId_4(D));
  # DEBUG ClientContextPtr => ClientContextPtr_5
  # DEBUG BEGIN_STMT
  ClientContextPtr_5->DTCFormat = DTCFormat_6(D);
  # DEBUG BEGIN_STMT
  resultSelect_11 = Dem_SelectDTC (DemClientId_4(D), DTC_8(D), DTCFormat_6(D), DTCOrigin_9(D));
  # DEBUG resultSelect => resultSelect_11
  # DEBUG BEGIN_STMT
  switch (resultSelect_11) <default: <L5> [33.33%], case 0: <L0> [33.33%], case 22: <L8> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  if (DTCFormat_6(D) == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 121678571]:
  # DEBUG BEGIN_STMT
  ClientContextPtr_5->ClearDTCInfoState = 0;
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 236199579]:
  # DEBUG BEGIN_STMT
  ClientContextPtr_5->ClearDTCInfoState = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 357878150]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 16
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 177, 2);
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073634451]:
  # LocalNrc_1 = PHI <0(5), 16(2), 16(6), 0(4)>
<L8>:
  # DEBUG LocalNrc => LocalNrc_1
  # DEBUG BEGIN_STMT
  *NrcPtr_15(D) = LocalNrc_1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 26;

}



;; Function Dcm_Dsp_DemFacade_ClearDTCInfo_Process (Dcm_Dsp_DemFacade_ClearDTCInfo_Process, funcdef_no=13, decl_uid=6773, cgraph_uid=14, symbol_order=15)

Modification phase of node Dcm_Dsp_DemFacade_ClearDTCInfo_Process/15
Dcm_Dsp_DemFacade_ClearDTCInfo_Process (Dcm_DemClientIdType DemClientId, Dcm_NegativeResponseCodeType * NrcPtr)
{
  struct Dcm_DemClientContextType * ClientContextPtr;
  Std_ReturnType serviceProcessStatus;
  Dcm_NegativeResponseCodeType LocalNrc;
  Std_ReturnType resultDTC;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG resultDTC => 1
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 1
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ClientContextPtr_13 = Dcm_Dsp_DemFacade_GetClient (DemClientId_12(D));
  # DEBUG ClientContextPtr => ClientContextPtr_13
  # DEBUG BEGIN_STMT
  _1 = ClientContextPtr_13->ClearDTCInfoState;
  switch (_1) <default: <L6> [33.33%], case 0: <L0> [33.33%], case 1: <L2> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  resultDTC_15 = Dem_GetDTCSelectionResultForClearDTC (DemClientId_12(D));
  # DEBUG resultDTC => resultDTC_15
  # DEBUG BEGIN_STMT
  if (resultDTC_15 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 178939075]:
  # DEBUG BEGIN_STMT
  ClientContextPtr_13->ClearDTCInfoState = 1;

  <bb 5> [local count: 536817225]:
<L2>:
  # DEBUG BEGIN_STMT
  resultDTC_18 = Dem_ClearDTC (DemClientId_12(D));
  # DEBUG resultDTC => resultDTC_18
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 715756301]:
  # resultDTC_5 = PHI <resultDTC_15(3), resultDTC_18(5)>
<L26>:
  # DEBUG resultDTC => resultDTC_5
  # DEBUG BEGIN_STMT
  switch (resultDTC_5) <default: <L23> [12.50%], case 0: <L27> [12.50%], case 1: <L6> [12.50%], case 4: <L7> [12.50%], case 5: <L11> [12.50%], case 6: <L16> [12.50%], case 7: <L11> [12.50%], case 8 ... 9: <L9> [12.50%], case 22: <L8> [12.50%]>

  <bb 7> [local count: 447347688]:
<L6>:
  # DEBUG resultDTC => NULL
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 16
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 178, 2);
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 89469538]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 10
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 9> [local count: 89469538]:
<L8>:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 16
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 178, 2);
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 10> [local count: 89469538]:
<L9>:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 49
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 11> [local count: 89469538]:
<L11>:
  # DEBUG BEGIN_STMT
  _2 = ClientContextPtr_13->ClearDTCInfoState;
  if (_2 == 1)
    goto <bb 18>; [51.12%]
  else
    goto <bb 12>; [48.88%]

  <bb 12> [local count: 43732710]:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 16
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 178, 2);
  goto <bb 18>; [100.00%]

  <bb 13> [local count: 89469538]:
<L16>:
  # DEBUG BEGIN_STMT
  _3 = ClientContextPtr_13->ClearDTCInfoState;
  if (_3 == 1)
    goto <bb 14>; [51.12%]
  else
    goto <bb 16>; [48.88%]

  <bb 14> [local count: 45736828]:
  # DEBUG BEGIN_STMT
  _4 = ClientContextPtr_13->DTCFormat;
  if (_4 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 30186306]:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 34
  goto <bb 18>; [100.00%]

  <bb 16> [local count: 43732710]:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 16
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 178, 2);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 89469538]:
<L23>:
  # DEBUG BEGIN_STMT
  # DEBUG LocalNrc => 16
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 178, 2);
  # DEBUG BEGIN_STMT

  <bb 18> [local count: 1073634453]:
  # LocalNrc_6 = PHI <0(6), 16(7), 1(8), 16(9), 49(10), 16(12), 16(16), 16(17), 34(15), 114(14), 34(11)>
  # serviceProcessStatus_7 = PHI <26(6), 26(7), 10(8), 26(9), 26(10), 26(12), 26(16), 26(17), 26(15), 26(14), 26(11)>
<L27>:
  # DEBUG serviceProcessStatus => serviceProcessStatus_7
  # DEBUG LocalNrc => LocalNrc_6
  # DEBUG BEGIN_STMT
  *NrcPtr_25(D) = LocalNrc_6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_7;

}



;; Function Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel (Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel, funcdef_no=14, decl_uid=6775, cgraph_uid=15, symbol_order=16)

Modification phase of node Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel/16
Dcm_Dsp_DemFacade_ClearDTCInfo_Cancel (Dcm_DemClientIdType DemClientId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_SelectDTC (DemClientId_2(D), 16777215, 1, 1);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 26;

}


