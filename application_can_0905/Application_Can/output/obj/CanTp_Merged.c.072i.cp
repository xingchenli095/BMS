
IPA constant propagation start:
Determining dynamic type for call: CanTp_TxStateHandling (ChannelPtr_1(D), 0);
  Starting walk at: CanTp_TxStateHandling (ChannelPtr_1(D), 0);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_3(D), 1, 10);
  Starting walk at: CanTp_StopChannel (ChannelPtr_3(D), 1, 10);
  instance pointer: ChannelPtr_3(D)  Outer instance pointer: ChannelPtr_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TxStateHandling (ChannelPtr_3(D), 0);
  Starting walk at: CanTp_TxStateHandling (ChannelPtr_3(D), 0);
  instance pointer: ChannelPtr_3(D)  Outer instance pointer: ChannelPtr_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_3(D), 1, 6);
  Starting walk at: CanTp_StopChannel (ChannelPtr_3(D), 1, 6);
  instance pointer: ChannelPtr_3(D)  Outer instance pointer: ChannelPtr_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
  Starting walk at: _4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  Starting walk at: CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
Determining dynamic type for call: CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  Starting walk at: CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
Determining dynamic type for call: CanTp_TransmitFrame (ChannelPtr_1(D), 0B);
  Starting walk at: CanTp_TransmitFrame (ChannelPtr_1(D), 0B);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  Function call may change dynamic type:_4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
Determining dynamic type for call: CanTp_TransmitFrame (ChannelPtr_1(D), 0B);
  Starting walk at: CanTp_TransmitFrame (ChannelPtr_1(D), 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  Function call may change dynamic type:_4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_1(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_1(D), 1, 1);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
Determining dynamic type for call: CanTp_PrepareFC (Rx_ChannelPtr_3, 49);
  Starting walk at: CanTp_PrepareFC (Rx_ChannelPtr_3, 49);
  instance pointer: Rx_ChannelPtr_3  Outer instance pointer: &CanTp_Channel[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PrepareFC (Rx_ChannelPtr_3, 50);
  Starting walk at: CanTp_PrepareFC (Rx_ChannelPtr_3, 50);
  instance pointer: Rx_ChannelPtr_3  Outer instance pointer: &CanTp_Channel[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PrepareFC (Rx_ChannelPtr_3, 48);
  Starting walk at: CanTp_PrepareFC (Rx_ChannelPtr_3, 48);
  instance pointer: Rx_ChannelPtr_3  Outer instance pointer: &CanTp_Channel[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TransmitFrame (Tx_ChannelPtr_3, 0B);
  Starting walk at: CanTp_TransmitFrame (Tx_ChannelPtr_3, 0B);
  instance pointer: Tx_ChannelPtr_3  Outer instance pointer: &CanTp_Channel[_2] offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TransmitFrame (Tx_ChannelPtr_3, 0B);
  Starting walk at: CanTp_TransmitFrame (Tx_ChannelPtr_3, 0B);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_1(D), 0, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_1(D), 0, 1);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TryToSendFC (ChannelPtr_1(D), 5);
  Starting walk at: CanTp_TryToSendFC (ChannelPtr_1(D), 5);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TryToSendFC (ChannelPtr_1(D), 6);
  Starting walk at: CanTp_TryToSendFC (ChannelPtr_1(D), 6);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_1(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_1(D), 1, 1);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_2 = CanTp_RxProcessData (ChannelPtr_1(D), 0B, 0);
  Starting walk at: Ret_ReqRxBuffer_2 = CanTp_RxProcessData (ChannelPtr_1(D), 0B, 0);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_2 = CanTp_RxProcessData (ChannelPtr_1(D), 0B, 0);
  Starting walk at: Ret_ReqRxBuffer_2 = CanTp_RxProcessData (ChannelPtr_1(D), 0B, 0);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: BSCalc_Ok_2 = CanTp_CalculateBlockSize (ChannelPtr_1(D), &ActualBlockSize);
  Starting walk at: BSCalc_Ok_2 = CanTp_CalculateBlockSize (ChannelPtr_1(D), &ActualBlockSize);
  instance pointer: ChannelPtr_1(D)  Outer instance pointer: ChannelPtr_1(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: BSCalc_Ok_2 = CanTp_CalculateBlockSize (ChannelPtr_1(D), &ActualBlockSize);
  Starting walk at: BSCalc_Ok_2 = CanTp_CalculateBlockSize (ChannelPtr_1(D), &ActualBlockSize);
  instance pointer: &ActualBlockSize  Outer instance pointer: ActualBlockSize offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_34, 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_34, 1, 1);
  instance pointer: ChannelPtr_34  Outer instance pointer: &CanTp_Channel[_9] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_34);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_34);
  instance pointer: ChannelPtr_34  Outer instance pointer: &CanTp_Channel[_9] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_StopChannel (ChannelPtr_34, 1, 1);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 9, 160);
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 9, 160);
Determining dynamic type for call: CanTp_TimeoutHandling (ChannelPtr_8(D));
  Starting walk at: CanTp_TimeoutHandling (ChannelPtr_8(D));
  instance pointer: ChannelPtr_8(D)  Outer instance pointer: ChannelPtr_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Starting walk at: CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  instance pointer: ChannelPtr_6(D)  Outer instance pointer: ChannelPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostSTminCallback (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostRxIndication (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Starting walk at: CanTp_PostTxConfirmation (ChannelPtr_6(D));
  instance pointer: ChannelPtr_6(D)  Outer instance pointer: ChannelPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostSTminCallback (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostRxIndication (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_PostRxIndication (ChannelPtr_6(D));
  Starting walk at: CanTp_PostRxIndication (ChannelPtr_6(D));
  instance pointer: ChannelPtr_6(D)  Outer instance pointer: ChannelPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostSTminCallback (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostRxIndication (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_PostSTminCallback (ChannelPtr_6(D));
  Starting walk at: CanTp_PostSTminCallback (ChannelPtr_6(D));
  instance pointer: ChannelPtr_6(D)  Outer instance pointer: ChannelPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PostRxIndication (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostSTminCallback (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostRxIndication (ChannelPtr_6(D));
  Function call may change dynamic type:CanTp_PostTxConfirmation (ChannelPtr_6(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_TxStateHandling (ChannelPtr_43(D), 0);
  Starting walk at: CanTp_TxStateHandling (ChannelPtr_43(D), 0);
  instance pointer: ChannelPtr_43(D)  Outer instance pointer: ChannelPtr_43(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_43(D), 1, 0);
  Starting walk at: CanTp_StopChannel (ChannelPtr_43(D), 1, 0);
  instance pointer: ChannelPtr_43(D)  Outer instance pointer: ChannelPtr_43(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessConfirmedCF (ChannelPtr_59(D));
  Starting walk at: CanTp_ProcessConfirmedCF (ChannelPtr_59(D));
  instance pointer: ChannelPtr_59(D)  Outer instance pointer: ChannelPtr_59(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_59(D), 1, 0);
  Starting walk at: CanTp_StopChannel (ChannelPtr_59(D), 1, 0);
  instance pointer: ChannelPtr_59(D)  Outer instance pointer: ChannelPtr_59(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_59(D), 0, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_59(D), 0, 1);
  instance pointer: ChannelPtr_59(D)  Outer instance pointer: ChannelPtr_59(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessTxPdu (ChannelPtr_10(D), CanTpTxNPduConfId_3);
  Starting walk at: CanTp_ProcessTxPdu (ChannelPtr_10(D), CanTpTxNPduConfId_3);
  instance pointer: ChannelPtr_10(D)  Outer instance pointer: ChannelPtr_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_ProcessTxPdu (ChannelPtr_27, CanTpTxPduId_20(D));
  Starting walk at: CanTp_ProcessTxPdu (ChannelPtr_27, CanTpTxPduId_20(D));
  instance pointer: ChannelPtr_27  Outer instance pointer: &CanTp_Channel[_11] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_27);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_27);
  instance pointer: ChannelPtr_27  Outer instance pointer: &CanTp_Channel[_11] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_ProcessTxPdu (ChannelPtr_27, CanTpTxPduId_20(D));
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_PreparexF (ChannelPtr_34(D));
  Starting walk at: CanTp_PreparexF (ChannelPtr_34(D));
  instance pointer: ChannelPtr_34(D)  Outer instance pointer: ChannelPtr_34(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  Starting walk at: Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  instance pointer: ChannelPtr_34(D)  Outer instance pointer: ChannelPtr_34(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparexF (ChannelPtr_34(D));
Determining dynamic type for call: Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  Starting walk at: Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  instance pointer: &PduInfo  Outer instance pointer: PduInfo offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparexF (ChannelPtr_34(D));
Determining dynamic type for call: Ret_CopyTxData_47 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  Starting walk at: Ret_CopyTxData_47 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  instance pointer: ChannelPtr_34(D)  Outer instance pointer: ChannelPtr_34(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparexF (ChannelPtr_34(D));
  Function call may change dynamic type:Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
Determining dynamic type for call: Ret_CopyTxData_47 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  Starting walk at: Ret_CopyTxData_47 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  instance pointer: &PduInfo  Outer instance pointer: PduInfo offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparexF (ChannelPtr_34(D));
  Function call may change dynamic type:Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
Determining dynamic type for call: _4 = CanTp_RequestTxFrameData (ChannelPtr_9(D));
  Starting walk at: _4 = CanTp_RequestTxFrameData (ChannelPtr_9(D));
  instance pointer: ChannelPtr_9(D)  Outer instance pointer: ChannelPtr_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_9(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_9(D), 1, 1);
  instance pointer: ChannelPtr_9(D)  Outer instance pointer: ChannelPtr_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = CanTp_RequestTxFrameData (ChannelPtr_9(D));
Determining dynamic type for call: CanTp_TxStateHandling.part.0 (ChannelPtr_9(D), CFBufferRequested_17(D));
  Starting walk at: CanTp_TxStateHandling.part.0 (ChannelPtr_9(D), CFBufferRequested_17(D));
  instance pointer: ChannelPtr_9(D)  Outer instance pointer: ChannelPtr_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_23(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_23(D), 1, 1);
  instance pointer: ChannelPtr_23(D)  Outer instance pointer: ChannelPtr_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanIfRet_36 = CanIf_Transmit (LSduId_19, &PduInfo);
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_49);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_49);
  instance pointer: ChannelPtr_49  Outer instance pointer: &CanTp_Channel[_10] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 3, 144);
Determining dynamic type for call: CanTp_InitChannelPtr (ChannelPtr_27(D));
  Starting walk at: CanTp_InitChannelPtr (ChannelPtr_27(D));
  instance pointer: ChannelPtr_27(D)  Outer instance pointer: ChannelPtr_27(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:PduR_CanTpRxIndication (_8, Result_30(D));
Determining dynamic type for call: CanTp_STminTimeoutHandling.part.0 (ChannelPtr_4(D));
  Starting walk at: CanTp_STminTimeoutHandling.part.0 (ChannelPtr_4(D));
  instance pointer: ChannelPtr_4(D)  Outer instance pointer: ChannelPtr_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TxStateHandling (ChannelPtr_4(D), 1);
  Starting walk at: CanTp_TxStateHandling (ChannelPtr_4(D), 1);
  instance pointer: ChannelPtr_4(D)  Outer instance pointer: ChannelPtr_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_STminTimeoutHandling (ChannelPtr_7(D));
  Starting walk at: CanTp_STminTimeoutHandling (ChannelPtr_7(D));
  instance pointer: ChannelPtr_7(D)  Outer instance pointer: ChannelPtr_7(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_STminTimeoutHandling (ChannelPtr_7);
  Starting walk at: CanTp_STminTimeoutHandling (ChannelPtr_7);
  instance pointer: ChannelPtr_7  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_7);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_7);
  instance pointer: ChannelPtr_7  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_STminTimeoutHandling (ChannelPtr_7);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: Ret_CopyRxData_32 = CanTp_RxProcessData (ChannelPtr_23(D), NSduDataPtr_30, DataLength_26(D));
  Starting walk at: Ret_CopyRxData_32 = CanTp_RxProcessData (ChannelPtr_23(D), NSduDataPtr_30, DataLength_26(D));
  instance pointer: ChannelPtr_23(D)  Outer instance pointer: ChannelPtr_23(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_CopyRxData_32 = CanTp_RxProcessData (ChannelPtr_23(D), NSduDataPtr_30, DataLength_26(D));
  Starting walk at: Ret_CopyRxData_32 = CanTp_RxProcessData (ChannelPtr_23(D), NSduDataPtr_30, DataLength_26(D));
  instance pointer: NSduDataPtr_30  Outer instance pointer: NSduDataPtr_30 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_23(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_23(D), 1, 1);
  instance pointer: ChannelPtr_23(D)  Outer instance pointer: ChannelPtr_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_CopyRxData_32 = CanTp_RxProcessData (ChannelPtr_23(D), NSduDataPtr_30, DataLength_26(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_23(D), 1, 0);
  Starting walk at: CanTp_StopChannel (ChannelPtr_23(D), 1, 0);
  instance pointer: ChannelPtr_23(D)  Outer instance pointer: ChannelPtr_23(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_CopyRxData_32 = CanTp_RxProcessData (ChannelPtr_23(D), NSduDataPtr_30, DataLength_26(D));
Determining dynamic type for call: Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
  Starting walk at: Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
  instance pointer: ChannelPtr_50(D)  Outer instance pointer: ChannelPtr_50(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
  Starting walk at: Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
  instance pointer: NSduDataPtr_56  Outer instance pointer: NSduDataPtr_56 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_50(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_50(D), 1, 1);
  instance pointer: ChannelPtr_50(D)  Outer instance pointer: ChannelPtr_50(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
Determining dynamic type for call: ContinueWithNextBlock_69 = CanTp_VerifyBlockSize (ChannelPtr_50(D));
  Starting walk at: ContinueWithNextBlock_69 = CanTp_VerifyBlockSize (ChannelPtr_50(D));
  instance pointer: ChannelPtr_50(D)  Outer instance pointer: ChannelPtr_50(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_50(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_50(D));
  instance pointer: ChannelPtr_50(D)  Outer instance pointer: ChannelPtr_50(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ContinueWithNextBlock_69 = CanTp_VerifyBlockSize (ChannelPtr_50(D));
  Function call may change dynamic type:Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
Determining dynamic type for call: CanTp_TryToSendFC (ChannelPtr_50(D), 4);
  Starting walk at: CanTp_TryToSendFC (ChannelPtr_50(D), 4);
  instance pointer: ChannelPtr_50(D)  Outer instance pointer: ChannelPtr_50(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ContinueWithNextBlock_69 = CanTp_VerifyBlockSize (ChannelPtr_50(D));
  Function call may change dynamic type:Ret_CopyRxData_60 = CanTp_RxProcessData (ChannelPtr_50(D), NSduDataPtr_56, DataLength_57);
Determining dynamic type for call: CanTp_ProcessReceivedIntermediateCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D));
  Starting walk at: CanTp_ProcessReceivedIntermediateCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D));
  instance pointer: CanTpRxPduPtr_28(D)  Outer instance pointer: CanTpRxPduPtr_28(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedIntermediateCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D));
  Starting walk at: CanTp_ProcessReceivedIntermediateCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D));
  instance pointer: ChannelPtr_24(D)  Outer instance pointer: ChannelPtr_24(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedLastCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D), _20);
  Starting walk at: CanTp_ProcessReceivedLastCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D), _20);
  instance pointer: CanTpRxPduPtr_28(D)  Outer instance pointer: CanTpRxPduPtr_28(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedLastCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D), _20);
  Starting walk at: CanTp_ProcessReceivedLastCF (CanTpRxPduPtr_28(D), ChannelPtr_24(D), _20);
  instance pointer: ChannelPtr_24(D)  Outer instance pointer: ChannelPtr_24(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_24(D), 1, 5);
  Starting walk at: CanTp_StopChannel (ChannelPtr_24(D), 1, 5);
  instance pointer: ChannelPtr_24(D)  Outer instance pointer: ChannelPtr_24(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
  Starting walk at: Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Starting walk at: Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Starting walk at: Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  instance pointer: NSduDataPtr_92  Outer instance pointer: NSduDataPtr_92 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_72(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_72(D));
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_59, NSduDataPtr_92, _60);
  Function call may change dynamic type:Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: BSCalc_Ok_110 = CanTp_CalculateBlockSize (ChannelPtr_72(D), _58);
  Starting walk at: BSCalc_Ok_110 = CanTp_CalculateBlockSize (ChannelPtr_72(D), _58);
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: BSCalc_Ok_110 = CanTp_CalculateBlockSize (ChannelPtr_72(D), _58);
  Starting walk at: BSCalc_Ok_110 = CanTp_CalculateBlockSize (ChannelPtr_72(D), _58);
  instance pointer: _58  Outer instance pointer: ChannelPtr_72(D) offset: 744 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_72(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_72(D));
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:BSCalc_Ok_110 = CanTp_CalculateBlockSize (ChannelPtr_72(D), _58);
  Function call may change dynamic type:Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: CanTp_TryToSendFC (ChannelPtr_72(D), 4);
  Starting walk at: CanTp_TryToSendFC (ChannelPtr_72(D), 4);
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:BSCalc_Ok_110 = CanTp_CalculateBlockSize (ChannelPtr_72(D), _58);
  Function call may change dynamic type:Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_72(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_72(D), 1, 1);
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_103 = CanTp_ProcessStartOfReceptionData (ChannelPtr_72(D), NSduDataPtr_92, DataLength_FF_91);
  Function call may change dynamic type:Ret_100 = CanTp_ProcessStartOfReception (ChannelPtr_72(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_72(D), 0, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_72(D), 0, 1);
  instance pointer: ChannelPtr_72(D)  Outer instance pointer: ChannelPtr_72(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_66 = CanTp_ProcessStartOfReception (ChannelPtr_51(D));
  Starting walk at: Ret_66 = CanTp_ProcessStartOfReception (ChannelPtr_51(D));
  instance pointer: ChannelPtr_51(D)  Outer instance pointer: ChannelPtr_51(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_68 = CanTp_ProcessStartOfReceptionData (ChannelPtr_51(D), NSduDataPtr_61, DataLength_45);
  Starting walk at: Ret_ReqRxBuffer_68 = CanTp_ProcessStartOfReceptionData (ChannelPtr_51(D), NSduDataPtr_61, DataLength_45);
  instance pointer: ChannelPtr_51(D)  Outer instance pointer: ChannelPtr_51(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_66 = CanTp_ProcessStartOfReception (ChannelPtr_51(D));
Determining dynamic type for call: Ret_ReqRxBuffer_68 = CanTp_ProcessStartOfReceptionData (ChannelPtr_51(D), NSduDataPtr_61, DataLength_45);
  Starting walk at: Ret_ReqRxBuffer_68 = CanTp_ProcessStartOfReceptionData (ChannelPtr_51(D), NSduDataPtr_61, DataLength_45);
  instance pointer: NSduDataPtr_61  Outer instance pointer: NSduDataPtr_61 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_66 = CanTp_ProcessStartOfReception (ChannelPtr_51(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_51(D), 1, 0);
  Starting walk at: CanTp_StopChannel (ChannelPtr_51(D), 1, 0);
  instance pointer: ChannelPtr_51(D)  Outer instance pointer: ChannelPtr_51(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_68 = CanTp_ProcessStartOfReceptionData (ChannelPtr_51(D), NSduDataPtr_61, DataLength_45);
  Function call may change dynamic type:Ret_66 = CanTp_ProcessStartOfReception (ChannelPtr_51(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_51(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_51(D), 1, 1);
  instance pointer: ChannelPtr_51(D)  Outer instance pointer: ChannelPtr_51(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_68 = CanTp_ProcessStartOfReceptionData (ChannelPtr_51(D), NSduDataPtr_61, DataLength_45);
  Function call may change dynamic type:Ret_66 = CanTp_ProcessStartOfReception (ChannelPtr_51(D));
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_51(D), 0, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_51(D), 0, 1);
  instance pointer: ChannelPtr_51(D)  Outer instance pointer: ChannelPtr_51(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_13(D), 1, 7);
  Starting walk at: CanTp_StopChannel (ChannelPtr_13(D), 1, 7);
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_RxChannelCleanup.part.0 (ChannelPtr_13(D));
  Starting walk at: CanTp_RxChannelCleanup.part.0 (ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedFC.isra.0 (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedFC.isra.0 (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: CanTpRxPduPtr_15(D)  Outer instance pointer: CanTpRxPduPtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedFC.isra.0 (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedFC.isra.0 (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedCF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedCF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: CanTpRxPduPtr_15(D)  Outer instance pointer: CanTpRxPduPtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedCF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedCF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_RxChannelCleanup (ChannelPtr_13(D));
  Starting walk at: CanTp_RxChannelCleanup (ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedFF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedFF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: CanTpRxPduPtr_15(D)  Outer instance pointer: CanTpRxPduPtr_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_RxChannelCleanup (ChannelPtr_13(D));
Determining dynamic type for call: CanTp_ProcessReceivedFF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedFF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_RxChannelCleanup (ChannelPtr_13(D));
Determining dynamic type for call: CanTp_RxChannelCleanup (ChannelPtr_13(D));
  Starting walk at: CanTp_RxChannelCleanup (ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_ProcessReceivedSF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedSF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: CanTpRxPduPtr_15(D)  Outer instance pointer: CanTpRxPduPtr_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_RxChannelCleanup (ChannelPtr_13(D));
Determining dynamic type for call: CanTp_ProcessReceivedSF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  Starting walk at: CanTp_ProcessReceivedSF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_RxChannelCleanup (ChannelPtr_13(D));
Determining dynamic type for call: CanTp_ProcessRxFrame (ChannelPtr_21(D), &CanTpNPdu, NSduId_8, FrameType_9);
  Starting walk at: CanTp_ProcessRxFrame (ChannelPtr_21(D), &CanTpNPdu, NSduId_8, FrameType_9);
  instance pointer: ChannelPtr_21(D)  Outer instance pointer: ChannelPtr_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_ProcessRxFrame (ChannelPtr_21(D), &CanTpNPdu, NSduId_8, FrameType_9);
  Starting walk at: CanTp_ProcessRxFrame (ChannelPtr_21(D), &CanTpNPdu, NSduId_8, FrameType_9);
  instance pointer: &CanTpNPdu  Outer instance pointer: CanTpNPdu offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  Starting walk at: _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  Starting walk at: _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  instance pointer: &NSduId  Outer instance pointer: NSduId offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  Starting walk at: _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  instance pointer: &FrameType  Outer instance pointer: FrameType offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  Starting walk at: IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  instance pointer: ChannelPtr_77  Outer instance pointer: &CanTp_Channel[_31] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
Determining dynamic type for call: CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  Starting walk at: CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  instance pointer: ChannelPtr_77  Outer instance pointer: &CanTp_Channel[_31] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  Function call may change dynamic type:_6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
Determining dynamic type for call: CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  Starting walk at: CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  instance pointer: CanTpRxPduPtr_66(D)  Outer instance pointer: CanTpRxPduPtr_66(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  Function call may change dynamic type:_6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
Determining dynamic type for call: CanTp_ProcessRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.102_54, FrameType.103_55);
  Starting walk at: CanTp_ProcessRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.102_54, FrameType.103_55);
  instance pointer: ChannelPtr_77  Outer instance pointer: &CanTp_Channel[_31] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  Function call may change dynamic type:_6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  Function call may change dynamic type:CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 66, 4);
Determining dynamic type for call: CanTp_ProcessRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.102_54, FrameType.103_55);
  Starting walk at: CanTp_ProcessRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.102_54, FrameType.103_55);
  instance pointer: CanTpRxPduPtr_66(D)  Outer instance pointer: CanTpRxPduPtr_66(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  Function call may change dynamic type:_6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  Function call may change dynamic type:CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 66, 4);
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_77);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_77);
  instance pointer: ChannelPtr_77  Outer instance pointer: &CanTp_Channel[_31] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_ProcessRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.102_54, FrameType.103_55);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  Function call may change dynamic type:_6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  Function call may change dynamic type:CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 66, 4);
Determining dynamic type for call: CanTp_PrepareFC (ChannelPtr_13(D), 49);
  Starting walk at: CanTp_PrepareFC (ChannelPtr_13(D), 49);
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PrepareFC (ChannelPtr_13(D), 48);
  Starting walk at: CanTp_PrepareFC (ChannelPtr_13(D), 48);
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PrepareFC (ChannelPtr_13(D), 50);
  Starting walk at: CanTp_PrepareFC (ChannelPtr_13(D), 50);
  instance pointer: ChannelPtr_13(D)  Outer instance pointer: ChannelPtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
  Starting walk at: Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
  Starting walk at: Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
Determining dynamic type for call: ContinueWithNextBlock_22 = CanTp_VerifyBlockSize (ChannelPtr_16(D));
  Starting walk at: ContinueWithNextBlock_22 = CanTp_VerifyBlockSize (ChannelPtr_16(D));
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ContinueWithNextBlock_22 = CanTp_VerifyBlockSize (ChannelPtr_16(D));
  Function call may change dynamic type:Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
Determining dynamic type for call: CanTp_TryToSendFC (ChannelPtr_16(D), 4);
  Starting walk at: CanTp_TryToSendFC (ChannelPtr_16(D), 4);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ContinueWithNextBlock_22 = CanTp_VerifyBlockSize (ChannelPtr_16(D));
  Function call may change dynamic type:Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
Determining dynamic type for call: Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
  Starting walk at: Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
  Starting walk at: Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
  instance pointer: _4  Outer instance pointer: ChannelPtr_16(D) offset: 1296 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
Determining dynamic type for call: BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  Starting walk at: BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
Determining dynamic type for call: BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  Starting walk at: BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  instance pointer: _10  Outer instance pointer: ChannelPtr_16(D) offset: 744 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  Function call may change dynamic type:Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
Determining dynamic type for call: CanTp_TryToSendFC (ChannelPtr_16(D), 4);
  Starting walk at: CanTp_TryToSendFC (ChannelPtr_16(D), 4);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  Function call may change dynamic type:Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
Determining dynamic type for call: Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
  Starting walk at: Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
  Starting walk at: Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
  instance pointer: _2  Outer instance pointer: ChannelPtr_16(D) offset: 1296 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_16(D), 1, 0);
  Starting walk at: CanTp_StopChannel (ChannelPtr_16(D), 1, 0);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  instance pointer: ChannelPtr_16(D)  Outer instance pointer: ChannelPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
Determining dynamic type for call: Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
  Starting walk at: Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
  instance pointer: ChannelPtr_8(D)  Outer instance pointer: ChannelPtr_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
  Starting walk at: Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
  instance pointer: 0B  Outer instance pointer: 0B offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_ReqRxBuffer_15 = CanTp_RxProcessData (ChannelPtr_8(D), NPduDataPtr_13(D), NSduDataLength_6(D));
  Starting walk at: Ret_ReqRxBuffer_15 = CanTp_RxProcessData (ChannelPtr_8(D), NPduDataPtr_13(D), NSduDataLength_6(D));
  instance pointer: ChannelPtr_8(D)  Outer instance pointer: ChannelPtr_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
Determining dynamic type for call: Ret_ReqRxBuffer_15 = CanTp_RxProcessData (ChannelPtr_8(D), NPduDataPtr_13(D), NSduDataLength_6(D));
  Starting walk at: Ret_ReqRxBuffer_15 = CanTp_RxProcessData (ChannelPtr_8(D), NPduDataPtr_13(D), NSduDataLength_6(D));
  instance pointer: NPduDataPtr_13(D)  Outer instance pointer: NPduDataPtr_13(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
Determining dynamic type for call: Ret_ReqRxBuffer_12 = CanTp_ProcessStartOfReceptionData.part.0 (ChannelPtr_8(D));
  Starting walk at: Ret_ReqRxBuffer_12 = CanTp_ProcessStartOfReceptionData.part.0 (ChannelPtr_8(D));
  instance pointer: ChannelPtr_8(D)  Outer instance pointer: ChannelPtr_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_13 = CanTp_ProcessStartOfReception.part.0 (ChannelPtr_15(D));
  Starting walk at: Ret_13 = CanTp_ProcessStartOfReception.part.0 (ChannelPtr_15(D));
  instance pointer: ChannelPtr_15(D)  Outer instance pointer: ChannelPtr_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_StartOfReception_17 = PduR_CanTpStartOfReception (_9, _10, _11);
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_15(D), 0, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_15(D), 0, 1);
  instance pointer: ChannelPtr_15(D)  Outer instance pointer: ChannelPtr_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_StartOfReception_17 = PduR_CanTpStartOfReception (_9, _10, _11);
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_15(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_15(D), 1, 1);
  instance pointer: ChannelPtr_15(D)  Outer instance pointer: ChannelPtr_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Ret_StartOfReception_17 = PduR_CanTpStartOfReception (_9, _10, _11);
Determining dynamic type for call: CanTp_CheckAndHandleWaitFrameTimeOut.part.0 (ChannelPtr_4(D));
  Starting walk at: CanTp_CheckAndHandleWaitFrameTimeOut.part.0 (ChannelPtr_4(D));
  instance pointer: ChannelPtr_4(D)  Outer instance pointer: ChannelPtr_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Ret_BS_Ok_10 = CanTp_VerifyBlockSize.part.0 (ChannelPtr_6(D));
  Starting walk at: Ret_BS_Ok_10 = CanTp_VerifyBlockSize.part.0 (ChannelPtr_6(D));
  instance pointer: ChannelPtr_6(D)  Outer instance pointer: ChannelPtr_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
  Starting walk at: CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
  instance pointer: ChannelPtr_32(D)  Outer instance pointer: ChannelPtr_32(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
  Starting walk at: CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
  instance pointer: &Local_Buffer  Outer instance pointer: Local_Buffer offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_TransmitFrame (ChannelPtr_32(D), &Local_Buffer);
  Starting walk at: CanTp_TransmitFrame (ChannelPtr_32(D), &Local_Buffer);
  instance pointer: ChannelPtr_32(D)  Outer instance pointer: ChannelPtr_32(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
Determining dynamic type for call: CanTp_TransmitFrame (ChannelPtr_32(D), &Local_Buffer);
  Starting walk at: CanTp_TransmitFrame (ChannelPtr_32(D), &Local_Buffer);
  instance pointer: &Local_Buffer  Outer instance pointer: Local_Buffer offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
Determining dynamic type for call: RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  Starting walk at: RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  instance pointer: ChannelPtr_10  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_TxStateHandling (ChannelPtr_10, 0);
  Starting walk at: CanTp_TxStateHandling (ChannelPtr_10, 0);
  instance pointer: ChannelPtr_10  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_RxStateHandling (ChannelPtr_10);
  Starting walk at: CanTp_RxStateHandling (ChannelPtr_10);
  instance pointer: ChannelPtr_10  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_TimeoutHandling (ChannelPtr_10);
  Starting walk at: CanTp_TimeoutHandling (ChannelPtr_10);
  instance pointer: ChannelPtr_10  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_10);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_10);
  instance pointer: ChannelPtr_10  Outer instance pointer: &CanTp_Channel[_1] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_TimeoutHandling (ChannelPtr_10);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:CanTp_RxStateHandling (ChannelPtr_10);
  Function call may change dynamic type:CanTp_TxStateHandling (ChannelPtr_10, 0);
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 3);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 3);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 4);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 4);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 8);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 8);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 1);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_18(D), 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_18(D), 1, 1);
  instance pointer: ChannelPtr_18(D)  Outer instance pointer: ChannelPtr_18(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_21, 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_21, 1, 1);
  instance pointer: ChannelPtr_21  Outer instance pointer: &CanTp_Channel[_10] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanTp_HandlePostponedFlags (ChannelPtr_21);
  Starting walk at: CanTp_HandlePostponedFlags (ChannelPtr_21);
  instance pointer: ChannelPtr_21  Outer instance pointer: &CanTp_Channel[_10] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_StopChannel (ChannelPtr_21, 1, 1);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 8, 160);
  Function call may change dynamic type:Det_ASR40_ReportError (35, 0, 8, 160);
Determining dynamic type for call: _1 = CanTp_IsValidConfig (CfgPtr_21(D));
  Starting walk at: _1 = CanTp_IsValidConfig (CfgPtr_21(D));
  instance pointer: CfgPtr_21(D)  Outer instance pointer: CfgPtr_21(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanTp_StopChannel (ChannelPtr_29, 1, 1);
  Starting walk at: CanTp_StopChannel (ChannelPtr_29, 1, 1);
  instance pointer: ChannelPtr_29  Outer instance pointer: &CanTp_Channel[_3] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_StopChannel (ChannelPtr_29, 1, 1);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_1 = CanTp_IsValidConfig (CfgPtr_21(D));
Determining dynamic type for call: CanTp_InitChannelPtr (ChannelPtr_32);
  Starting walk at: CanTp_InitChannelPtr (ChannelPtr_32);
  instance pointer: ChannelPtr_32  Outer instance pointer: &CanTp_Channel[_6] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanTp_InitChannelPtr (ChannelPtr_32);
  Function call may change dynamic type:SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_1 = CanTp_IsValidConfig (CfgPtr_21(D));
  Function call may change dynamic type:CanTp_StopChannel (ChannelPtr_29, 1, 1);
Determining dynamic type for call: RetVal_10 = CanTp_IsValidConfig.part.0 (voidConfigPtr_6(D));
  Starting walk at: RetVal_10 = CanTp_IsValidConfig.part.0 (voidConfigPtr_6(D));
  instance pointer: voidConfigPtr_6(D)  Outer instance pointer: voidConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CanTp_STminTimeoutHandling.part.0/80:
    callsite  CanTp_STminTimeoutHandling.part.0/80 -> CanTp_TxStateHandling/43 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 98
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_ProcessReceivedFC.isra.0/79:
    callsite  CanTp_ProcessReceivedFC.isra.0/79 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedFC.isra.0/79 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 10
         value: 0xa, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedFC.isra.0/79 -> CanTp_TxStateHandling/43 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 98
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_TxStateHandling.part.0/78:
    callsite  CanTp_TxStateHandling.part.0/78 -> CanTp_RequestTxFrameData/44 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_TxStateHandling.part.0/78 -> CanTp_PreparePadding/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    callsite  CanTp_TxStateHandling.part.0/78 -> CanTp_TransmitFrame/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
    callsite  CanTp_TxStateHandling.part.0/78 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_TransmitPostponedFlowControl.part.0/77:
    callsite  CanTp_TransmitPostponedFlowControl.part.0/77 -> CanTp_PrepareFC/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 49
         value: 0x31, mask: 0x0
         Unknown VR
    callsite  CanTp_TransmitPostponedFlowControl.part.0/77 -> CanTp_PrepareFC/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 48
         value: 0x30, mask: 0x0
         Unknown VR
    callsite  CanTp_TransmitPostponedFlowControl.part.0/77 -> CanTp_PrepareFC/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 50
         value: 0x32, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_TransmitPostponedFrame.part.0/76:
    callsite  CanTp_TransmitPostponedFrame.part.0/76 -> CanTp_TransmitFrame/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
  Jump functions of caller  CanTp_ProcessStartOfReception.part.0/75:
    callsite  CanTp_ProcessStartOfReception.part.0/75 -> CanTp_TryToSendFC/19 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessStartOfReception.part.0/75 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74:
    callsite  CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74 -> CanTp_TryToSendFC/19 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_RxChannelCleanup.part.0/73:
    callsite  CanTp_RxChannelCleanup.part.0/73 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_ProcessStartOfReceptionData.part.0/72:
    callsite  CanTp_ProcessStartOfReceptionData.part.0/72 -> CanTp_RxProcessData/17 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_VerifyBlockSize.part.0/71:
    callsite  CanTp_VerifyBlockSize.part.0/71 -> CanTp_CalculateBlockSize/10 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  CanTp_IsValidConfig.part.0/70:
  Jump functions of caller  CanTp_CheckNPduLength.part.0/69:
  Jump functions of caller  PduR_CanTpCopyTxData/68:
  Jump functions of caller  CanIf_Transmit/66:
  Jump functions of caller  PduR_CanTpTxConfirmation/65:
  Jump functions of caller  PduR_CanTpRxIndication/64:
  Jump functions of caller  TS_MemCpy32/63:
  Jump functions of caller  PduR_CanTpCopyRxData/62:
  Jump functions of caller  PduR_CanTpStartOfReception/61:
  Jump functions of caller  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59:
  Jump functions of caller  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56:
  Jump functions of caller  Det_ASR40_ReportError/55:
  Jump functions of caller  TS_PlatformSigIsValid/53:
  Jump functions of caller  CanTp_CancelReceive/52:
    callsite  CanTp_CancelReceive/52 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_CancelReceive/52 -> CanTp_StopChannel/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_PostponedTimeoutHandling/51:
    callsite  CanTp_PostponedTimeoutHandling/51 -> CanTp_TimeoutHandling/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_HandlePostponedFlags/50:
    callsite  CanTp_HandlePostponedFlags/50 -> CanTp_PostSTminCallback/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_HandlePostponedFlags/50 -> CanTp_PostRxIndication/21 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 0
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_HandlePostponedFlags/50 -> CanTp_PostTxConfirmation/47 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_HandlePostponedFlags/50 -> CanTp_PostponedTimeoutHandling/51 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_ProcessConfirmedCF/49:
    callsite  CanTp_ProcessConfirmedCF/49 -> CanTp_TxStateHandling/43 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 98
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessConfirmedCF/49 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_ProcessTxPdu/48:
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_TransmitPostponedFrame/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_TransmitPostponedFrame/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_TransmitPostponedFrame/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_TransmitPostponedFlowControl/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_ProcessConfirmedCF/49 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_TransmitPostponedFlowControl/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_TransmitPostponedFlowControl/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessTxPdu/48 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_PostTxConfirmation/47:
    callsite  CanTp_PostTxConfirmation/47 -> CanTp_ProcessTxPdu/48 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanTp_TxConfirmation/46:
    callsite  CanTp_TxConfirmation/46 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_TxConfirmation/46 -> CanTp_ProcessTxPdu/48 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanTp_ProcessCopyTxData/45:
  Jump functions of caller  CanTp_RequestTxFrameData/44:
    callsite  CanTp_RequestTxFrameData/44 -> CanTp_ProcessCopyTxData/45 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_RequestTxFrameData/44 -> CanTp_ProcessCopyTxData/45 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0B
           offset: 32, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_RequestTxFrameData/44 -> CanTp_PreparexF/13 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_TxStateHandling/43:
    callsite  CanTp_TxStateHandling/43 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_TxStateHandling/43 -> CanTp_RequestTxFrameData/44 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 98
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_TxStateHandling/43 -> CanTp_TxStateHandling.part.0/78 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_TransmitPostponedFlowControl/42:
    callsite  CanTp_TransmitPostponedFlowControl/42 -> CanTp_TransmitPostponedFlowControl.part.0/77 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_TransmitPostponedFrame/41:
    callsite  CanTp_TransmitPostponedFrame/41 -> CanTp_TransmitPostponedFrame.part.0/76 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_TransmitFrame/40:
    callsite  CanTp_TransmitFrame/40 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_Transmit/39:
    callsite  CanTp_Transmit/39 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  CanTp_StopChannel/38:
    callsite  CanTp_StopChannel/38 -> CanTp_InitChannelPtr/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_STminTimeoutHandling/37:
    callsite  CanTp_STminTimeoutHandling/37 -> CanTp_STminTimeoutHandling.part.0/80 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_STminTimeoutHandling/37 -> CanTp_TxStateHandling/43 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 98
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_PostSTminCallback/36:
    callsite  CanTp_PostSTminCallback/36 -> CanTp_STminTimeoutHandling/37 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_STminCallback/35:
    callsite  CanTp_STminCallback/35 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_STminCallback/35 -> CanTp_STminTimeoutHandling/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  CanTp_ValidateNAI/34:
  Jump functions of caller  CanTp_ValidateFCLength/33:
  Jump functions of caller  CanTp_CheckNPduLength/32:
    callsite  CanTp_CheckNPduLength/32 -> CanTp_CheckNPduLength.part.0/69 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanTp_ProcessReceivedLastCF/30:
    callsite  CanTp_ProcessReceivedLastCF/30 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedLastCF/30 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedLastCF/30 -> CanTp_RxProcessData/17 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessReceivedLastCF/30 -> CanTp_CheckNPduLength/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_ProcessReceivedIntermediateCF/29:
    callsite  CanTp_ProcessReceivedIntermediateCF/29 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedIntermediateCF/29 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 66
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessReceivedIntermediateCF/29 -> CanTp_TryToSendFC/19 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedIntermediateCF/29 -> CanTp_VerifyBlockSize/11 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Aggregate passed by reference:
           offset: 752, cst: 0
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessReceivedIntermediateCF/29 -> CanTp_RxProcessData/17 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_ProcessReceivedCF/28:
    callsite  CanTp_ProcessReceivedCF/28 -> CanTp_ProcessReceivedIntermediateCF/29 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessReceivedCF/28 -> CanTp_ProcessReceivedLastCF/30 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessReceivedCF/28 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_ProcessReceivedFF/27:
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_TryToSendFC/19 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_CalculateBlockSize/10 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_ProcessStartOfReceptionData/16 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessReceivedFF/27 -> CanTp_ProcessStartOfReception/15 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Aggregate passed by reference:
           offset: 64, cst: 0
           offset: 736, cst: 65
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_ProcessReceivedSF/26:
    callsite  CanTp_ProcessReceivedSF/26 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedSF/26 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedSF/26 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessReceivedSF/26 -> CanTp_ProcessStartOfReceptionData/16 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessReceivedSF/26 -> CanTp_ProcessStartOfReception/15 : 
       param 0: PASS THROUGH: 1, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 64
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessReceivedSF/26 -> CanTp_CheckNPduLength/32 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_FindNSduId/25:
  Jump functions of caller  CanTp_RxChannelCleanup/24:
    callsite  CanTp_RxChannelCleanup/24 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 7
         value: 0x7, mask: 0x0
         Unknown VR
    callsite  CanTp_RxChannelCleanup/24 -> CanTp_RxChannelCleanup.part.0/73 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_ProcessRxFrame/23:
    callsite  CanTp_ProcessRxFrame/23 -> CanTp_ProcessReceivedFC.isra.0/79 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessRxFrame/23 -> CanTp_ProcessReceivedCF/28 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessRxFrame/23 -> CanTp_ProcessReceivedFF/27 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessRxFrame/23 -> CanTp_RxChannelCleanup/24 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessRxFrame/23 -> CanTp_ProcessReceivedSF/26 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessRxFrame/23 -> CanTp_RxChannelCleanup/24 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_PostponeRxFrame/22:
  Jump functions of caller  CanTp_PostRxIndication/21:
    callsite  CanTp_PostRxIndication/21 -> CanTp_ProcessRxFrame/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_RxIndication/20:
    callsite  CanTp_RxIndication/20 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_RxIndication/20 -> CanTp_ProcessRxFrame/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_RxIndication/20 -> CanTp_PostponeRxFrame/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_RxIndication/20 -> CanTp_ValidateNAI/34 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_RxIndication/20 -> CanTp_ValidateFCLength/33 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_RxIndication/20 -> CanTp_FindNSduId/25 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 3: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  CanTp_TryToSendFC/19:
    callsite  CanTp_TryToSendFC/19 -> CanTp_PrepareFC/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 77
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 50
         value: 0x32, mask: 0x0
         Unknown VR
    callsite  CanTp_TryToSendFC/19 -> CanTp_PrepareFC/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 78
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 49
         value: 0x31, mask: 0x0
         Unknown VR
    callsite  CanTp_TryToSendFC/19 -> CanTp_PrepareFC/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 736, cst: 76
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 48
         value: 0x30, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_RxStateHandling/18:
    callsite  CanTp_RxStateHandling/18 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_TryToSendFC/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_VerifyBlockSize/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_RxProcessData/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_CheckAndHandleWaitFrameTimeOut/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_TryToSendFC/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_CalculateBlockSize/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 1288, cst: 0
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  CanTp_RxStateHandling/18 -> CanTp_ProcessStartOfReceptionData/16 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_RxStateHandling/18 -> CanTp_ProcessStartOfReceptionData/16 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 720, cst: 1
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_RxProcessData/17:
  Jump functions of caller  CanTp_ProcessStartOfReceptionData/16:
    callsite  CanTp_ProcessStartOfReceptionData/16 -> CanTp_RxProcessData/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_ProcessStartOfReceptionData/16 -> CanTp_RxProcessData/17 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0B
         value: 0x0, mask: 0xfffffff8
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessStartOfReceptionData/16 -> CanTp_ProcessStartOfReceptionData.part.0/72 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_ProcessStartOfReception/15:
    callsite  CanTp_ProcessStartOfReception/15 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_ProcessStartOfReception/15 -> CanTp_ProcessStartOfReception.part.0/75 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  CanTp_ProcessStartOfReception/15 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_PreparePadding/14:
  Jump functions of caller  CanTp_PreparexF/13:
  Jump functions of caller  CanTp_CheckAndHandleWaitFrameTimeOut/12:
    callsite  CanTp_CheckAndHandleWaitFrameTimeOut/12 -> CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_VerifyBlockSize/11:
    callsite  CanTp_VerifyBlockSize/11 -> CanTp_VerifyBlockSize.part.0/71 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_CalculateBlockSize/10:
  Jump functions of caller  CanTp_PrepareFC/9:
    callsite  CanTp_PrepareFC/9 -> CanTp_TransmitFrame/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_PrepareFC/9 -> CanTp_PreparePadding/14 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  CanTp_StallHandling/8:
  Jump functions of caller  CanTp_ChannelHandling/7:
    callsite  CanTp_ChannelHandling/7 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_ChannelHandling/7 -> CanTp_TxStateHandling/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  CanTp_ChannelHandling/7 -> CanTp_RxStateHandling/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_ChannelHandling/7 -> CanTp_TimeoutHandling/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_ChannelHandling/7 -> CanTp_StallHandling/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  CanTp_TimeoutHandling/6:
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_TransmitPostponedFlowControl/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_TransmitPostponedFrame/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_TimeoutHandling/6 -> CanTp_StopChannel/38 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_MainFunction/5:
    callsite  CanTp_MainFunction/5 -> CanTp_ChannelHandling/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  CanTp_MainFunction/5 -> CanTp_STminCallback/35 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CanTp_CancelTransmit/4:
    callsite  CanTp_CancelTransmit/4 -> CanTp_HandlePostponedFlags/50 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_CancelTransmit/4 -> CanTp_StopChannel/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  CanTp_InitChannelPtr/3:
  Jump functions of caller  CanTp_Init/2:
    callsite  CanTp_Init/2 -> CanTp_InitChannelPtr/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  CanTp_Init/2 -> CanTp_StopChannel/38 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanTp_Init/2 -> CanTp_IsValidConfig/1 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanTp_IsValidConfig/1:
    callsite  CanTp_IsValidConfig/1 -> CanTp_IsValidConfig.part.0/70 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering CanTp_CancelReceive for cloning; -fipa-cp-clone disabled.
Not considering CanTp_HandlePostponedFlags for cloning; -fipa-cp-clone disabled.
Not considering CanTp_PostTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TxStateHandling for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TransmitPostponedFlowControl for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TransmitPostponedFrame for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TransmitFrame for cloning; -fipa-cp-clone disabled.
Not considering CanTp_Transmit for cloning; -fipa-cp-clone disabled.
Not considering CanTp_StopChannel for cloning; -fipa-cp-clone disabled.
Not considering CanTp_PostSTminCallback for cloning; -fipa-cp-clone disabled.
Not considering CanTp_STminCallback for cloning; -fipa-cp-clone disabled.
Not considering CanTp_PostRxIndication for cloning; -fipa-cp-clone disabled.
Not considering CanTp_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TryToSendFC for cloning; -fipa-cp-clone disabled.
Not considering CanTp_RxStateHandling for cloning; -fipa-cp-clone disabled.
Not considering CanTp_RxProcessData for cloning; -fipa-cp-clone disabled.
Not considering CanTp_ProcessStartOfReceptionData for cloning; -fipa-cp-clone disabled.
Not considering CanTp_ProcessStartOfReception for cloning; -fipa-cp-clone disabled.
Not considering CanTp_PreparePadding for cloning; -fipa-cp-clone disabled.
Not considering CanTp_PreparexF for cloning; -fipa-cp-clone disabled.
Not considering CanTp_CheckAndHandleWaitFrameTimeOut for cloning; -fipa-cp-clone disabled.
Not considering CanTp_VerifyBlockSize for cloning; -fipa-cp-clone disabled.
Not considering CanTp_CalculateBlockSize for cloning; -fipa-cp-clone disabled.
Not considering CanTp_PrepareFC for cloning; -fipa-cp-clone disabled.
Not considering CanTp_ChannelHandling for cloning; -fipa-cp-clone disabled.
Not considering CanTp_TimeoutHandling for cloning; -fipa-cp-clone disabled.
Not considering CanTp_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering CanTp_CancelTransmit for cloning; -fipa-cp-clone disabled.
Not considering CanTp_InitChannelPtr for cloning; -fipa-cp-clone disabled.
Not considering CanTp_Init for cloning; -fipa-cp-clone disabled.
Not considering CanTp_IsValidConfig for cloning; -fipa-cp-clone disabled.

overall_size: 2725, max_new_size: 11001
 - context independent values, size: 56, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: CanTp_STminTimeoutHandling.part.0/80:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_ProcessReceivedFC.isra.0/79:
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
  Node: CanTp_TxStateHandling.part.0/78:
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
  Node: CanTp_TransmitPostponedFlowControl.part.0/77:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_TransmitPostponedFrame.part.0/76:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_ProcessStartOfReception.part.0/75:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_RxChannelCleanup.part.0/73:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_ProcessStartOfReceptionData.part.0/72:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_VerifyBlockSize.part.0/71:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_IsValidConfig.part.0/70:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_CheckNPduLength.part.0/69:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_CancelReceive/52:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_PostponedTimeoutHandling/51:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_HandlePostponedFlags/50:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_ProcessConfirmedCF/49:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_ProcessTxPdu/48:
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
  Node: CanTp_PostTxConfirmation/47:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_TxConfirmation/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_ProcessCopyTxData/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct PduInfoType * ~[0B, 0B]
        AGGS VARIABLE
        ref offset 0: 0B [loc_time: 0, loc_size: 23, prop_time: 0, prop_size: 0]
        ref offset 32: 0 [loc_time: 0, loc_size: 23, prop_time: 0, prop_size: 0]
  Node: CanTp_RequestTxFrameData/44:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_TxStateHandling/43:
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
  Node: CanTp_TransmitPostponedFlowControl/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_TransmitPostponedFrame/41:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_TransmitFrame/40:
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
  Node: CanTp_Transmit/39:
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
  Node: CanTp_StopChannel/38:
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
  Node: CanTp_STminTimeoutHandling/37:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_PostSTminCallback/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_STminCallback/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_ValidateNAI/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct CanTp_ChannelType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xff
         PduIdType [0, 255]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_ValidateFCLength/33:
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
  Node: CanTp_CheckNPduLength/32:
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
  Node: CanTp_ProcessReceivedLastCF/30:
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
  Node: CanTp_ProcessReceivedIntermediateCF/29:
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
  Node: CanTp_ProcessReceivedCF/28:
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
  Node: CanTp_ProcessReceivedFF/27:
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
  Node: CanTp_ProcessReceivedSF/26:
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
  Node: CanTp_FindNSduId/25:
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
         Bits: value = 0x0, mask = 0xfffffffe
         PduIdType * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: CanTp_RxChannelCleanup/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanTp_ProcessRxFrame/23:
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
  Node: CanTp_PostponeRxFrame/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct CanTp_ChannelType * ~[0B, 0B]
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
  Node: CanTp_PostRxIndication/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_RxIndication/20:
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
  Node: CanTp_TryToSendFC/19:
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
  Node: CanTp_RxStateHandling/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_RxProcessData/17:
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
  Node: CanTp_ProcessStartOfReceptionData/16:
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
  Node: CanTp_ProcessStartOfReception/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_PreparePadding/14:
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
  Node: CanTp_PreparexF/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_CheckAndHandleWaitFrameTimeOut/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_VerifyBlockSize/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_CalculateBlockSize/10:
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
  Node: CanTp_PrepareFC/9:
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
  Node: CanTp_StallHandling/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct CanTp_ChannelType * ~[0B, 0B]
        AGGS VARIABLE
  Node: CanTp_ChannelHandling/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_TimeoutHandling/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_MainFunction/5:
  Node: CanTp_CancelTransmit/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_InitChannelPtr/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_Init/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTp_IsValidConfig/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of CanTp_FindNSduId/25 for all known contexts.
Propagated bits info for function CanTp_FindNSduId.constprop/81:
 param 2: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanTp_ProcessCopyTxData/45:
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function CanTp_ValidateNAI/34:
 param 0: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xff
Propagated bits info for function CanTp_FindNSduId/25:
 param 2: value = 0x0, mask = 0xfffffffe
Propagated bits info for function CanTp_PostponeRxFrame/22:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function CanTp_StallHandling/8:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: CanTp_FindNSduId/25
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CanTp_FindNSduId.constprop.0/81 (CanTp_FindNSduId.constprop) @06f0a380
  Type: function definition analyzed
  Visibility:
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Clone of CanTp_FindNSduId/25
  Availability: local
  Function flags: count:114863530 (estimated locally) local optimize_size
  Called by: CanTp_RxIndication/20 (125411642 (estimated locally),0.12 per call) 
  Calls: Det_ASR40_ReportError/55 (18952483 (estimated locally),0.17 per call) 
CanTp_STminTimeoutHandling.part.0/80 (CanTp_STminTimeoutHandling.part.0) @0727c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_STminTimeoutHandling/37 (173338695 (estimated locally),0.16 per call) 
  Calls: CanTp_TxStateHandling/43 (1073741824 (estimated locally),1.00 per call) 
CanTp_ProcessReceivedFC.isra.0/79 (CanTp_ProcessReceivedFC.isra.0) @07299e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessRxFrame/23 (43465069 (estimated locally),0.04 per call) 
  Calls: CanTp_StopChannel/38 (15059229 (estimated locally),0.01 per call) CanTp_StopChannel/38 (15059229 (estimated locally),0.01 per call) CanTp_TxStateHandling/43 (3047988 (estimated locally),0.00 per call) 
CanTp_TxStateHandling.part.0/78 (CanTp_TxStateHandling.part.0) @07299620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: RetVal_DataReq/67 (write)RetVal_DataReq/67 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_TxStateHandling/43 (357913944 (estimated locally),0.33 per call) 
  Calls: CanTp_RequestTxFrameData/44 (524845004 (estimated locally),0.49 per call) CanTp_PreparePadding/14 (357878150 (estimated locally),0.33 per call) CanTp_TransmitFrame/40 (174930840 (estimated locally),0.16 per call) CanTp_StopChannel/38 (357878150 (estimated locally),0.33 per call) 
CanTp_TransmitPostponedFlowControl.part.0/77 (CanTp_TransmitPostponedFlowControl.part.0) @07299540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_TransmitPostponedFlowControl/42 (708669600 (estimated locally),0.66 per call) 
  Calls: CanTp_PrepareFC/9 (268435456 (estimated locally),0.25 per call) CanTp_PrepareFC/9 (268435456 (estimated locally),0.25 per call) CanTp_PrepareFC/9 (268435456 (estimated locally),0.25 per call) 
CanTp_TransmitPostponedFrame.part.0/76 (CanTp_TransmitPostponedFrame.part.0) @0727ce00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_TransmitPostponedFrame/41 (708669600 (estimated locally),0.66 per call) 
  Calls: CanTp_TransmitFrame/40 (217325345 (estimated locally),0.20 per call) 
CanTp_ProcessStartOfReception.part.0/75 (CanTp_ProcessStartOfReception.part.0) @0727cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_ProcessStartOfReception/15 (214748368 (estimated locally),0.20 per call) 
  Calls: CanTp_TryToSendFC/19 (365072220 (estimated locally),0.34 per call) CanTp_StopChannel/38 (708669605 (estimated locally),0.66 per call) 
CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74 (CanTp_CheckAndHandleWaitFrameTimeOut.part.0) @0727c8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_CheckAndHandleWaitFrameTimeOut/12 (536870912 (estimated locally),0.50 per call) 
  Calls: CanTp_TryToSendFC/19 (354334802 (estimated locally),0.33 per call) 
CanTp_RxChannelCleanup.part.0/73 (CanTp_RxChannelCleanup.part.0) @07266540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_RxChannelCleanup/24 (182536110 (estimated locally),0.17 per call) 
  Calls: CanTp_StopChannel/38 (1073741824 (estimated locally),1.00 per call) 
CanTp_ProcessStartOfReceptionData.part.0/72 (CanTp_ProcessStartOfReceptionData.part.0) @07266380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_ProcessStartOfReceptionData/16 (354334800 (estimated locally),0.33 per call) 
  Calls: CanTp_RxProcessData/17 (1073741824 (estimated locally),1.00 per call) 
CanTp_VerifyBlockSize.part.0/71 (CanTp_VerifyBlockSize.part.0) @07266460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_VerifyBlockSize/11 (354334800 (estimated locally),0.33 per call) 
  Calls: CanTp_CalculateBlockSize/10 (1073741824 (estimated locally),1.00 per call) 
CanTp_IsValidConfig.part.0/70 (CanTp_IsValidConfig.part.0) @0702a7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanTp_LcfgSignature/54 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_IsValidConfig/1 (66369400 (estimated locally),0.06 per call) 
  Calls: 
CanTp_CheckNPduLength.part.0/69 (CanTp_CheckNPduLength.part.0) @070ca000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanTp_CheckNPduLength/32 (29287171 (estimated locally),0.03 per call) 
  Calls: 
PduR_CanTpCopyTxData/68 (PduR_CanTpCopyTxData) @070ca620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_ProcessCopyTxData/45 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
RetVal_DataReq/67 (RetVal_DataReq) @070c8c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanTp_TxStateHandling.part.0/78 (read)CanTp_TxStateHandling.part.0/78 (write)CanTp_TxStateHandling/43 (write)
  Availability: not_available
  Varpool flags:
CanIf_Transmit/66 (CanIf_Transmit) @0705d2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_TransmitFrame/40 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanTpTxConfirmation/65 (PduR_CanTpTxConfirmation) @0705db60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_StopChannel/38 (217325345 (estimated locally),0.20 per call) 
  Calls: 
PduR_CanTpRxIndication/64 (PduR_CanTpRxIndication) @0705da80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_StopChannel/38 (36945309 (estimated locally),0.03 per call) 
  Calls: 
TS_MemCpy32/63 (TS_MemCpy32) @0702ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_ProcessReceivedFF/27 (13055932 (estimated locally),0.01 per call) CanTp_ProcessReceivedSF/26 (26111863 (estimated locally),0.02 per call) CanTp_PostponeRxFrame/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanTpCopyRxData/62 (PduR_CanTpCopyRxData) @07004540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_RxProcessData/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanTpStartOfReception/61 (PduR_CanTpStartOfReception) @07004e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_ProcessStartOfReception/15 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
CanTp_Channel/60 (CanTp_Channel) @06fdb480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanTp_MainFunction/5 (write)CanTp_Transmit/39 (write)CanTp_TransmitPostponedFlowControl.part.0/77 (write)CanTp_RxIndication/20 (write)CanTp_TxStateHandling.part.0/78 (read)CanTp_TxConfirmation/46 (write)CanTp_CancelTransmit/4 (write)CanTp_ChannelHandling/7 (write)CanTp_STminCallback/35 (write)CanTp_Init/2 (write)CanTp_TryToSendFC/19 (read)CanTp_Transmit/39 (write)CanTp_TransmitPostponedFrame.part.0/76 (write)CanTp_TransmitPostponedFlowControl.part.0/77 (write)CanTp_Init/2 (addr)CanTp_Init/2 (addr)CanTp_Init/2 (read)CanTp_Init/2 (write)CanTp_TransmitPostponedFrame.part.0/76 (addr)CanTp_TransmitPostponedFrame.part.0/76 (read)CanTp_TransmitPostponedFrame.part.0/76 (read)CanTp_TransmitPostponedFrame.part.0/76 (write)CanTp_TransmitPostponedFlowControl.part.0/77 (addr)CanTp_TransmitPostponedFlowControl.part.0/77 (read)CanTp_TransmitPostponedFlowControl.part.0/77 (write)CanTp_TxStateHandling.part.0/78 (read)CanTp_CancelTransmit/4 (addr)CanTp_CancelTransmit/4 (read)CanTp_CancelTransmit/4 (write)CanTp_CancelTransmit/4 (read)CanTp_CancelTransmit/4 (read)CanTp_ChannelHandling/7 (addr)CanTp_ChannelHandling/7 (read)CanTp_ChannelHandling/7 (read)CanTp_ChannelHandling/7 (write)CanTp_ChannelHandling/7 (write)CanTp_ChannelHandling/7 (write)CanTp_ChannelHandling/7 (read)CanTp_ChannelHandling/7 (write)CanTp_RxIndication/20 (addr)CanTp_RxIndication/20 (read)CanTp_RxIndication/20 (read)CanTp_RxIndication/20 (read)CanTp_RxIndication/20 (write)CanTp_RxIndication/20 (read)CanTp_STminCallback/35 (addr)CanTp_STminCallback/35 (read)CanTp_STminCallback/35 (read)CanTp_STminCallback/35 (write)CanTp_STminCallback/35 (write)CanTp_MainFunction/5 (read)CanTp_Transmit/39 (addr)CanTp_Transmit/39 (read)CanTp_Transmit/39 (read)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_Transmit/39 (write)CanTp_TxConfirmation/46 (read)CanTp_TxConfirmation/46 (addr)CanTp_TxConfirmation/46 (read)CanTp_TxConfirmation/46 (read)CanTp_TxConfirmation/46 (read)CanTp_TxConfirmation/46 (write)CanTp_TxConfirmation/46 (write)CanTp_TxConfirmation/46 (write)CanTp_CancelReceive/52 (addr)CanTp_CancelReceive/52 (read)CanTp_CancelReceive/52 (write)CanTp_CancelReceive/52 (read)CanTp_CancelReceive/52 (read)CanTp_CancelReceive/52 (read)CanTp_CancelReceive/52 (read)CanTp_CancelReceive/52 (write)
  Availability: not_available
  Varpool flags:
SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0) @06fc1a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_CancelReceive/52 (137224205 (estimated locally),0.13 per call) CanTp_CancelReceive/52 (137224205 (estimated locally),0.13 per call) CanTp_TxConfirmation/46 (121361087 (estimated locally),0.11 per call) CanTp_TxConfirmation/46 (83775926 (estimated locally),0.08 per call) CanTp_TxConfirmation/46 (162623856 (estimated locally),0.15 per call) CanTp_Transmit/39 (203452301 (estimated locally),0.19 per call) CanTp_MainFunction/5 (694774116 (estimated locally),1.00 per call) CanTp_STminCallback/35 (536870913 (estimated locally),0.50 per call) CanTp_STminCallback/35 (536870913 (estimated locally),0.50 per call) CanTp_RxIndication/20 (9244687 (estimated locally),0.01 per call) CanTp_ChannelHandling/7 (536870911 (estimated locally),0.50 per call) CanTp_ChannelHandling/7 (536870911 (estimated locally),0.50 per call) CanTp_CancelTransmit/4 (37217400 (estimated locally),0.03 per call) CanTp_CancelTransmit/4 (37217400 (estimated locally),0.03 per call) CanTp_HandlePostponedFlags/50 (354334802 (estimated locally),3.00 per call) CanTp_HandlePostponedFlags/50 (719407023 (estimated locally),6.09 per call) CanTp_PostTxConfirmation/47 (1073741824 (estimated locally),1.00 per call) CanTp_PostSTminCallback/36 (536870913 (estimated locally),0.50 per call) CanTp_PostSTminCallback/36 (536870913 (estimated locally),0.50 per call) CanTp_PostRxIndication/21 (236223201 (estimated locally),1.00 per call) CanTp_ProcessRxFrame/23 (70866960 (estimated locally),0.07 per call) CanTp_ProcessRxFrame/23 (70866960 (estimated locally),0.07 per call) CanTp_PostponedTimeoutHandling/51 (116930485 (estimated locally),0.11 per call) CanTp_PostponedTimeoutHandling/51 (118702159 (estimated locally),0.11 per call) CanTp_PostponedTimeoutHandling/51 (118702159 (estimated locally),0.11 per call) CanTp_Init/2 (347387059 (estimated locally),0.35 per call) CanTp_StopChannel/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanTp_NonIdleChannelCounter/58 (CanTp_NonIdleChannelCounter) @06fdb3f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanTp_MainFunction/5 (read)CanTp_ProcessRxFrame/23 (read)CanTp_InitChannelPtr/3 (read)CanTp_ProcessRxFrame/23 (write)CanTp_Init/2 (write)CanTp_InitChannelPtr/3 (write)CanTp_ProcessRxFrame/23 (write)CanTp_ProcessRxFrame/23 (read)CanTp_Transmit/39 (read)CanTp_Transmit/39 (write)CanTp_Transmit/39 (read)CanTp_Transmit/39 (write)
  Availability: not_available
  Varpool flags:
CanTp_InitVars/57 (CanTp_InitVars) @06fdb3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanTp_RxIndication/20 (read)CanTp_MainFunction/5 (read)CanTp_Transmit/39 (read)CanTp_TxConfirmation/46 (read)CanTp_CancelTransmit/4 (read)CanTp_Init/2 (write)CanTp_Init/2 (read)CanTp_Init/2 (write)CanTp_CancelReceive/52 (read)
  Availability: not_available
  Varpool flags:
SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0) @06fc19a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_CancelReceive/52 (274448410 (estimated locally),0.26 per call) CanTp_TxConfirmation/46 (367760870 (estimated locally),0.34 per call) CanTp_Transmit/39 (203452301 (estimated locally),0.19 per call) CanTp_MainFunction/5 (694774116 (estimated locally),1.00 per call) CanTp_STminCallback/35 (1073741824 (estimated locally),1.00 per call) CanTp_RxIndication/20 (9244687 (estimated locally),0.01 per call) CanTp_ChannelHandling/7 (1073741823 (estimated locally),1.00 per call) CanTp_CancelTransmit/4 (74434800 (estimated locally),0.07 per call) CanTp_HandlePostponedFlags/50 (1073741824 (estimated locally),9.09 per call) CanTp_PostTxConfirmation/47 (1073741824 (estimated locally),1.00 per call) CanTp_PostSTminCallback/36 (1073741824 (estimated locally),1.00 per call) CanTp_PostRxIndication/21 (236223200 (estimated locally),1.00 per call) CanTp_ProcessRxFrame/23 (70866960 (estimated locally),0.07 per call) CanTp_ProcessRxFrame/23 (70866960 (estimated locally),0.07 per call) CanTp_PostponedTimeoutHandling/51 (354334802 (estimated locally),0.33 per call) CanTp_Init/2 (347387059 (estimated locally),0.35 per call) CanTp_StopChannel/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/55 (Det_ASR40_ReportError) @06fc18c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_FindNSduId.constprop/81 (18952483 (estimated locally),0.17 per call) CanTp_CancelReceive/52 (67075191 (estimated locally),0.06 per call) CanTp_CancelReceive/52 (17537253 (estimated locally),0.02 per call) CanTp_CancelReceive/52 (274448410 (estimated locally),0.26 per call) CanTp_CancelReceive/52 (524845004 (estimated locally),0.49 per call) CanTp_TxConfirmation/46 (181135950 (estimated locally),0.17 per call) CanTp_TxConfirmation/46 (524845003 (estimated locally),0.49 per call) CanTp_Transmit/39 (20589373 (estimated locally),0.02 per call) CanTp_Transmit/39 (100207850 (estimated locally),0.09 per call) CanTp_Transmit/39 (64100720 (estimated locally),0.06 per call) CanTp_Transmit/39 (181135951 (estimated locally),0.17 per call) CanTp_Transmit/39 (524845004 (estimated locally),0.49 per call) CanTp_RxIndication/20 (31807023 (estimated locally),0.03 per call) CanTp_RxIndication/20 (1871125 (estimated locally),0.00 per call) CanTp_RxIndication/20 (2884593 (estimated locally),0.00 per call) CanTp_RxIndication/20 (87150463 (estimated locally),0.08 per call) CanTp_RxIndication/20 (104694768 (estimated locally),0.10 per call) CanTp_RxIndication/20 (231639947 (estimated locally),0.22 per call) CanTp_RxIndication/20 (524845004 (estimated locally),0.49 per call) CanTp_CancelTransmit/4 (18191865 (estimated locally),0.02 per call) CanTp_CancelTransmit/4 (6341211 (estimated locally),0.01 per call) CanTp_CancelTransmit/4 (181135951 (estimated locally),0.17 per call) CanTp_CancelTransmit/4 (524845004 (estimated locally),0.49 per call) CanTp_ProcessReceivedIntermediateCF/29 (524845004 (estimated locally),0.49 per call) CanTp_ProcessReceivedFF/27 (630326181 (estimated locally),0.59 per call) CanTp_ProcessReceivedFF/27 (324713487 (estimated locally),0.30 per call) CanTp_ProcessReceivedSF/26 (836337508 (estimated locally),0.78 per call) CanTp_ProcessReceivedLastCF/30 (836337508 (estimated locally),0.78 per call) CanTp_Init/2 (347387059 (estimated locally),0.35 per call) CanTp_Init/2 (297760336 (estimated locally),0.30 per call) 
  Calls: 
CanTp_LcfgSignature/54 (CanTp_LcfgSignature) @06efec18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanTp_IsValidConfig.part.0/70 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/53 (TS_PlatformSigIsValid) @06fc1700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTp_IsValidConfig/1 (574129754 (estimated locally),0.53 per call) 
  Calls: 
CanTp_CancelReceive/52 (CanTp_CancelReceive) @06fc1540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_InitVars/57 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanTp_HandlePostponedFlags/50 (137224205 (estimated locally),0.13 per call) Det_ASR40_ReportError/55 (67075191 (estimated locally),0.06 per call) CanTp_StopChannel/38 (26305880 (estimated locally),0.02 per call) Det_ASR40_ReportError/55 (17537253 (estimated locally),0.02 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (137224205 (estimated locally),0.13 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (137224205 (estimated locally),0.13 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/55 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/55 (524845004 (estimated locally),0.49 per call) 
CanTp_PostponedTimeoutHandling/51 (CanTp_PostponedTimeoutHandling) @06fbdd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_HandlePostponedFlags/50 (1073741824 (estimated locally),9.09 per call) 
  Calls: SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (116930485 (estimated locally),0.11 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (118702159 (estimated locally),0.11 per call) CanTp_TimeoutHandling/6 (118702159 (estimated locally),0.11 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (118702159 (estimated locally),0.11 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (354334802 (estimated locally),0.33 per call) 
CanTp_HandlePostponedFlags/50 (CanTp_HandlePostponedFlags) @06fbdb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: CanTp_CancelReceive/52 (137224205 (estimated locally),0.13 per call) CanTp_TxConfirmation/46 (121361087 (estimated locally),0.11 per call) CanTp_Transmit/39 (101726150 (estimated locally),0.09 per call) CanTp_STminCallback/35 (536870913 (estimated locally),0.50 per call) CanTp_RxIndication/20 (1871125 (estimated locally),0.00 per call) CanTp_ChannelHandling/7 (268435456 (estimated locally),0.25 per call) CanTp_CancelTransmit/4 (37215497 (estimated locally),0.03 per call) 
  Calls: SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (354334802 (estimated locally),3.00 per call) CanTp_PostSTminCallback/36 (719407023 (estimated locally),6.09 per call) CanTp_PostRxIndication/21 (719407023 (estimated locally),6.09 per call) CanTp_PostTxConfirmation/47 (719407023 (estimated locally),6.09 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (719407023 (estimated locally),6.09 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (1073741824 (estimated locally),9.09 per call) CanTp_PostponedTimeoutHandling/51 (1073741824 (estimated locally),9.09 per call) 
CanTp_ProcessConfirmedCF/49 (CanTp_ProcessConfirmedCF) @06fbd7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) 
  Calls: CanTp_TxStateHandling/43 (234572473 (estimated locally),0.22 per call) CanTp_StopChannel/38 (217325345 (estimated locally),0.20 per call) 
CanTp_ProcessTxPdu/48 (CanTp_ProcessTxPdu) @06fb1700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073632316 (estimated locally) body local optimize_size
  Called by: CanTp_TxConfirmation/46 (121361087 (estimated locally),0.11 per call) CanTp_PostTxConfirmation/47 (354334802 (estimated locally),0.33 per call) 
  Calls: CanTp_TransmitPostponedFrame/41 (52163500 (estimated locally),0.05 per call) CanTp_StopChannel/38 (52163500 (estimated locally),0.05 per call) CanTp_TransmitPostponedFrame/41 (52163500 (estimated locally),0.05 per call) CanTp_TransmitPostponedFrame/41 (52163500 (estimated locally),0.05 per call) CanTp_TransmitPostponedFlowControl/42 (52163500 (estimated locally),0.05 per call) CanTp_ProcessConfirmedCF/49 (52163500 (estimated locally),0.05 per call) CanTp_TransmitPostponedFlowControl/42 (52163500 (estimated locally),0.05 per call) CanTp_TransmitPostponedFlowControl/42 (52163500 (estimated locally),0.05 per call) CanTp_StopChannel/38 (52163500 (estimated locally),0.05 per call) 
CanTp_PostTxConfirmation/47 (CanTp_PostTxConfirmation) @06fac380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_HandlePostponedFlags/50 (719407023 (estimated locally),6.09 per call) 
  Calls: CanTp_ProcessTxPdu/48 (354334802 (estimated locally),0.33 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (1073741824 (estimated locally),1.00 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (1073741824 (estimated locally),1.00 per call) 
CanTp_TxConfirmation/46 (CanTp_TxConfirmation) @06fac000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_InitVars/57 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanTp_HandlePostponedFlags/50 (121361087 (estimated locally),0.11 per call) CanTp_ProcessTxPdu/48 (121361087 (estimated locally),0.11 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (121361087 (estimated locally),0.11 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (83775926 (estimated locally),0.08 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (162623856 (estimated locally),0.15 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (367760870 (estimated locally),0.34 per call) Det_ASR40_ReportError/55 (181135950 (estimated locally),0.17 per call) Det_ASR40_ReportError/55 (524845003 (estimated locally),0.49 per call) 
CanTp_ProcessCopyTxData/45 (CanTp_ProcessCopyTxData) @06fa32a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_RequestTxFrameData/44 (536870911 (estimated locally),0.50 per call) CanTp_RequestTxFrameData/44 (354334801 (estimated locally),0.33 per call) 
  Calls: PduR_CanTpCopyTxData/68 (1073741824 (estimated locally),1.00 per call) 
CanTp_RequestTxFrameData/44 (CanTp_RequestTxFrameData) @06f9aee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741821 (estimated locally) body local optimize_size
  Called by: CanTp_TxStateHandling/43 (357878150 (estimated locally),0.33 per call) CanTp_TxStateHandling.part.0/78 (524845004 (estimated locally),0.49 per call) 
  Calls: CanTp_ProcessCopyTxData/45 (536870911 (estimated locally),0.50 per call) CanTp_ProcessCopyTxData/45 (354334801 (estimated locally),0.33 per call) CanTp_PreparexF/13 (354334801 (estimated locally),0.33 per call) 
CanTp_TxStateHandling/43 (CanTp_TxStateHandling) @06f9ab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: RetVal_DataReq/67 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ChannelHandling/7 (118702158 (estimated locally),0.11 per call) CanTp_ProcessConfirmedCF/49 (234572473 (estimated locally),0.22 per call) CanTp_STminTimeoutHandling/37 (217325345 (estimated locally),0.20 per call) CanTp_STminTimeoutHandling.part.0/80 (1073741824 (estimated locally),1.00 per call) CanTp_ProcessReceivedFC.isra.0/79 (3047988 (estimated locally),0.00 per call) 
  Calls: CanTp_StopChannel/38 (119280787 (estimated locally),0.11 per call) CanTp_RequestTxFrameData/44 (357878150 (estimated locally),0.33 per call) CanTp_TxStateHandling.part.0/78 (357913944 (estimated locally),0.33 per call) 
CanTp_TransmitPostponedFlowControl/42 (CanTp_TransmitPostponedFlowControl) @06ec5d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) 
  Calls: CanTp_TransmitPostponedFlowControl.part.0/77 (708669600 (estimated locally),0.66 per call) 
CanTp_TransmitPostponedFrame/41 (CanTp_TransmitPostponedFrame) @06ec5b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) 
  Calls: CanTp_TransmitPostponedFrame.part.0/76 (708669600 (estimated locally),0.66 per call) 
CanTp_TransmitFrame/40 (CanTp_TransmitFrame) @06ec5540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: CanTp_TxStateHandling.part.0/78 (174930840 (estimated locally),0.16 per call) CanTp_TransmitPostponedFrame.part.0/76 (217325345 (estimated locally),0.20 per call) CanTp_PrepareFC/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: CanTp_StopChannel/38 (354334802 (estimated locally),0.33 per call) CanIf_Transmit/66 (1073741823 (estimated locally),1.00 per call) 
CanTp_Transmit/39 (CanTp_Transmit) @06ec0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_InitVars/57 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (write)CanTp_NonIdleChannelCounter/58 (read)CanTp_NonIdleChannelCounter/58 (write)CanTp_Channel/60 (write)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_NonIdleChannelCounter/58 (read)CanTp_NonIdleChannelCounter/58 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanTp_HandlePostponedFlags/50 (101726150 (estimated locally),0.09 per call) Det_ASR40_ReportError/55 (20589373 (estimated locally),0.02 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (203452301 (estimated locally),0.19 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (203452301 (estimated locally),0.19 per call) Det_ASR40_ReportError/55 (100207850 (estimated locally),0.09 per call) Det_ASR40_ReportError/55 (64100720 (estimated locally),0.06 per call) Det_ASR40_ReportError/55 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/55 (524845004 (estimated locally),0.49 per call) 
CanTp_StopChannel/38 (CanTp_StopChannel) @06ebac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_CancelReceive/52 (26305880 (estimated locally),0.02 per call) CanTp_CancelTransmit/4 (6341211 (estimated locally),0.01 per call) CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_ProcessTxPdu/48 (52163500 (estimated locally),0.05 per call) CanTp_ProcessConfirmedCF/49 (217325345 (estimated locally),0.20 per call) CanTp_ProcessReceivedFC.isra.0/79 (15059229 (estimated locally),0.01 per call) CanTp_ProcessReceivedFC.isra.0/79 (15059229 (estimated locally),0.01 per call) CanTp_TxStateHandling/43 (119280787 (estimated locally),0.11 per call) CanTp_TxStateHandling.part.0/78 (357878150 (estimated locally),0.33 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_TimeoutHandling/6 (134217728 (estimated locally),0.12 per call) CanTp_ProcessReceivedCF/28 (296222520 (estimated locally),0.28 per call) CanTp_ProcessReceivedIntermediateCF/29 (181135951 (estimated locally),0.17 per call) CanTp_ProcessReceivedFF/27 (955039668 (estimated locally),0.89 per call) CanTp_ProcessReceivedFF/27 (13055932 (estimated locally),0.01 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_ProcessReceivedSF/26 (836337508 (estimated locally),0.78 per call) CanTp_ProcessReceivedSF/26 (26111863 (estimated locally),0.02 per call) CanTp_ProcessReceivedSF/26 (26111863 (estimated locally),0.02 per call) CanTp_ProcessStartOfReception/15 (214748364 (estimated locally),0.20 per call) CanTp_ProcessStartOfReception/15 (214748364 (estimated locally),0.20 per call) CanTp_ProcessStartOfReception.part.0/75 (708669605 (estimated locally),0.66 per call) CanTp_TransmitFrame/40 (354334802 (estimated locally),0.33 per call) CanTp_ProcessReceivedLastCF/30 (118702159 (estimated locally),0.11 per call) CanTp_ProcessReceivedLastCF/30 (118702159 (estimated locally),0.11 per call) CanTp_RxChannelCleanup/24 (182536110 (estimated locally),0.17 per call) CanTp_RxChannelCleanup.part.0/73 (1073741824 (estimated locally),1.00 per call) CanTp_Init/2 (955630222 (estimated locally),0.96 per call) 
  Calls: PduR_CanTpTxConfirmation/65 (217325345 (estimated locally),0.20 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (1073741824 (estimated locally),1.00 per call) CanTp_InitChannelPtr/3 (1073741824 (estimated locally),1.00 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (1073741824 (estimated locally),1.00 per call) PduR_CanTpRxIndication/64 (36945309 (estimated locally),0.03 per call) 
CanTp_STminTimeoutHandling/37 (CanTp_STminTimeoutHandling) @06eba620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_STminCallback/35 (536870913 (estimated locally),0.50 per call) CanTp_PostSTminCallback/36 (536870913 (estimated locally),0.50 per call) 
  Calls: CanTp_STminTimeoutHandling.part.0/80 (173338695 (estimated locally),0.16 per call) CanTp_TxStateHandling/43 (217325345 (estimated locally),0.20 per call) 
CanTp_PostSTminCallback/36 (CanTp_PostSTminCallback) @06eba460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_HandlePostponedFlags/50 (719407023 (estimated locally),6.09 per call) 
  Calls: CanTp_STminTimeoutHandling/37 (536870913 (estimated locally),0.50 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (536870913 (estimated locally),0.50 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (536870913 (estimated locally),0.50 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (1073741824 (estimated locally),1.00 per call) 
CanTp_STminCallback/35 (CanTp_STminCallback) @06f8aee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_MainFunction/5 (157678986 (estimated locally),0.23 per call) 
  Calls: CanTp_HandlePostponedFlags/50 (536870913 (estimated locally),0.50 per call) CanTp_STminTimeoutHandling/37 (536870913 (estimated locally),0.50 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (536870913 (estimated locally),0.50 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (536870913 (estimated locally),0.50 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (1073741824 (estimated locally),1.00 per call) 
CanTp_ValidateNAI/34 (CanTp_ValidateNAI) @06f8aa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_RxIndication/20 (28014204 (estimated locally),0.03 per call) 
  Calls: 
CanTp_ValidateFCLength/33 (CanTp_ValidateFCLength) @06f8a000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: CanTp_RxIndication/20 (21319979 (estimated locally),0.02 per call) 
  Calls: 
CanTp_CheckNPduLength/32 (CanTp_CheckNPduLength) @06f0a540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessReceivedSF/26 (719407023 (estimated locally),0.67 per call) CanTp_ProcessReceivedLastCF/30 (719407023 (estimated locally),0.67 per call) 
  Calls: CanTp_CheckNPduLength.part.0/69 (29287171 (estimated locally),0.03 per call) 
CanTp_ProcessReceivedLastCF/30 (CanTp_ProcessReceivedLastCF) @06f02e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessReceivedCF/28 (154898683 (estimated locally),0.14 per call) 
  Calls: Det_ASR40_ReportError/55 (836337508 (estimated locally),0.78 per call) CanTp_StopChannel/38 (118702159 (estimated locally),0.11 per call) CanTp_StopChannel/38 (118702159 (estimated locally),0.11 per call) CanTp_RxProcessData/17 (237404317 (estimated locally),0.22 per call) CanTp_CheckNPduLength/32 (719407023 (estimated locally),0.67 per call) 
CanTp_ProcessReceivedIntermediateCF/29 (CanTp_ProcessReceivedIntermediateCF) @06f029a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessReceivedCF/28 (154898683 (estimated locally),0.14 per call) 
  Calls: Det_ASR40_ReportError/55 (524845004 (estimated locally),0.49 per call) CanTp_StopChannel/38 (181135951 (estimated locally),0.17 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (37217400 (estimated locally),0.03 per call) CanTp_TryToSendFC/19 (37217400 (estimated locally),0.03 per call) CanTp_VerifyBlockSize/11 (74434800 (estimated locally),0.07 per call) CanTp_RxProcessData/17 (548896821 (estimated locally),0.51 per call) 
CanTp_ProcessReceivedCF/28 (CanTp_ProcessReceivedCF) @06ef3ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessRxFrame/23 (14778123 (estimated locally),0.01 per call) 
  Calls: CanTp_ProcessReceivedIntermediateCF/29 (154898683 (estimated locally),0.14 per call) CanTp_ProcessReceivedLastCF/30 (154898683 (estimated locally),0.14 per call) CanTp_StopChannel/38 (296222520 (estimated locally),0.28 per call) 
CanTp_ProcessReceivedFF/27 (CanTp_ProcessReceivedFF) @06ef3a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessRxFrame/23 (70866960 (estimated locally),0.07 per call) 
  Calls: Det_ASR40_ReportError/55 (630326181 (estimated locally),0.59 per call) Det_ASR40_ReportError/55 (324713487 (estimated locally),0.30 per call) CanTp_StopChannel/38 (955039668 (estimated locally),0.89 per call) CanTp_StopChannel/38 (13055932 (estimated locally),0.01 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (13055932 (estimated locally),0.01 per call) TS_MemCpy32/63 (13055932 (estimated locally),0.01 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (6527966 (estimated locally),0.01 per call) CanTp_TryToSendFC/19 (6527966 (estimated locally),0.01 per call) CanTp_CalculateBlockSize/10 (13055932 (estimated locally),0.01 per call) CanTp_ProcessStartOfReceptionData/16 (39171712 (estimated locally),0.04 per call) CanTp_ProcessStartOfReception/15 (118702159 (estimated locally),0.11 per call) 
CanTp_ProcessReceivedSF/26 (CanTp_ProcessReceivedSF) @06ef3460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessRxFrame/23 (70866960 (estimated locally),0.07 per call) 
  Calls: Det_ASR40_ReportError/55 (836337508 (estimated locally),0.78 per call) CanTp_StopChannel/38 (836337508 (estimated locally),0.78 per call) CanTp_StopChannel/38 (26111863 (estimated locally),0.02 per call) TS_MemCpy32/63 (26111863 (estimated locally),0.02 per call) CanTp_StopChannel/38 (26111863 (estimated locally),0.02 per call) CanTp_ProcessStartOfReceptionData/16 (78343425 (estimated locally),0.07 per call) CanTp_ProcessStartOfReception/15 (237404317 (estimated locally),0.22 per call) CanTp_CheckNPduLength/32 (719407023 (estimated locally),0.67 per call) 
CanTp_FindNSduId/25 (CanTp_FindNSduId) @06edaee0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:114863530 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTp_RxChannelCleanup/24 (CanTp_RxChannelCleanup) @06eda8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ProcessRxFrame/23 (214748364 (estimated locally),0.20 per call) CanTp_ProcessRxFrame/23 (214748364 (estimated locally),0.20 per call) 
  Calls: CanTp_StopChannel/38 (182536110 (estimated locally),0.17 per call) CanTp_RxChannelCleanup.part.0/73 (182536110 (estimated locally),0.17 per call) 
CanTp_ProcessRxFrame/23 (CanTp_ProcessRxFrame) @06eda540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanTp_NonIdleChannelCounter/58 (read)CanTp_NonIdleChannelCounter/58 (write)CanTp_NonIdleChannelCounter/58 (read)CanTp_NonIdleChannelCounter/58 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: CanTp_RxIndication/20 (1871125 (estimated locally),0.00 per call) CanTp_PostRxIndication/21 (77953656 (estimated locally),0.33 per call) 
  Calls: CanTp_ProcessReceivedFC.isra.0/79 (43465069 (estimated locally),0.04 per call) CanTp_ProcessReceivedCF/28 (14778123 (estimated locally),0.01 per call) CanTp_ProcessReceivedFF/27 (70866960 (estimated locally),0.07 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (70866960 (estimated locally),0.07 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (70866960 (estimated locally),0.07 per call) CanTp_RxChannelCleanup/24 (214748364 (estimated locally),0.20 per call) CanTp_ProcessReceivedSF/26 (70866960 (estimated locally),0.07 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (70866960 (estimated locally),0.07 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (70866960 (estimated locally),0.07 per call) CanTp_RxChannelCleanup/24 (214748364 (estimated locally),0.20 per call) 
CanTp_PostponeRxFrame/22 (CanTp_PostponeRxFrame) @06eda380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_RxIndication/20 (3368944 (estimated locally),0.00 per call) 
  Calls: TS_MemCpy32/63 (1073741824 (estimated locally),1.00 per call) 
CanTp_PostRxIndication/21 (CanTp_PostRxIndication) @06eda000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: CanTp_HandlePostponedFlags/50 (719407023 (estimated locally),6.09 per call) 
  Calls: CanTp_ProcessRxFrame/23 (77953656 (estimated locally),0.33 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (236223201 (estimated locally),1.00 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (236223200 (estimated locally),1.00 per call) 
CanTp_RxIndication/20 (CanTp_RxIndication) @06ed4a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_InitVars/57 (read)CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (read)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/55 (31807023 (estimated locally),0.03 per call) CanTp_HandlePostponedFlags/50 (1871125 (estimated locally),0.00 per call) CanTp_ProcessRxFrame/23 (1871125 (estimated locally),0.00 per call) Det_ASR40_ReportError/55 (1871125 (estimated locally),0.00 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (9244687 (estimated locally),0.01 per call) CanTp_PostponeRxFrame/22 (3368944 (estimated locally),0.00 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (9244687 (estimated locally),0.01 per call) CanTp_ValidateNAI/34 (28014204 (estimated locally),0.03 per call) Det_ASR40_ReportError/55 (2884593 (estimated locally),0.00 per call) CanTp_ValidateFCLength/33 (21319979 (estimated locally),0.02 per call) CanTp_FindNSduId.constprop/81 (125411642 (estimated locally),0.12 per call) Det_ASR40_ReportError/55 (87150463 (estimated locally),0.08 per call) Det_ASR40_ReportError/55 (104694768 (estimated locally),0.10 per call) Det_ASR40_ReportError/55 (231639947 (estimated locally),0.22 per call) Det_ASR40_ReportError/55 (524845004 (estimated locally),0.49 per call) 
CanTp_TryToSendFC/19 (CanTp_TryToSendFC) @06eb19a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)CanTp_Channel/60 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedIntermediateCF/29 (37217400 (estimated locally),0.03 per call) CanTp_ProcessReceivedFF/27 (6527966 (estimated locally),0.01 per call) CanTp_RxStateHandling/18 (44734769 (estimated locally),0.04 per call) CanTp_RxStateHandling/18 (44734769 (estimated locally),0.04 per call) CanTp_ProcessStartOfReception.part.0/75 (365072220 (estimated locally),0.34 per call) CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74 (354334802 (estimated locally),0.33 per call) 
  Calls: CanTp_PrepareFC/9 (174930840 (estimated locally),0.16 per call) CanTp_PrepareFC/9 (174930840 (estimated locally),0.16 per call) CanTp_PrepareFC/9 (174930840 (estimated locally),0.16 per call) 
CanTp_RxStateHandling/18 (CanTp_RxStateHandling) @06eb1620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ChannelHandling/7 (61149597 (estimated locally),0.06 per call) 
  Calls: CanTp_StopChannel/38 (89469538 (estimated locally),0.08 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (89469538 (estimated locally),0.08 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (44734769 (estimated locally),0.04 per call) CanTp_TryToSendFC/19 (44734769 (estimated locally),0.04 per call) CanTp_VerifyBlockSize/11 (89469538 (estimated locally),0.08 per call) CanTp_RxProcessData/17 (268435456 (estimated locally),0.25 per call) CanTp_StopChannel/38 (89469538 (estimated locally),0.08 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (89469538 (estimated locally),0.08 per call) CanTp_CheckAndHandleWaitFrameTimeOut/12 (44734769 (estimated locally),0.04 per call) CanTp_TryToSendFC/19 (44734769 (estimated locally),0.04 per call) CanTp_CalculateBlockSize/10 (89469538 (estimated locally),0.08 per call) CanTp_ProcessStartOfReceptionData/16 (268435456 (estimated locally),0.25 per call) CanTp_StopChannel/38 (89469538 (estimated locally),0.08 per call) CanTp_StopChannel/38 (89469538 (estimated locally),0.08 per call) CanTp_ProcessStartOfReceptionData/16 (268435456 (estimated locally),0.25 per call) 
CanTp_RxProcessData/17 (CanTp_RxProcessData) @06ea3ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedIntermediateCF/29 (548896821 (estimated locally),0.51 per call) CanTp_RxStateHandling/18 (268435456 (estimated locally),0.25 per call) CanTp_ProcessReceivedLastCF/30 (237404317 (estimated locally),0.22 per call) CanTp_ProcessStartOfReceptionData/16 (286956713 (estimated locally),0.27 per call) CanTp_ProcessStartOfReceptionData/16 (237404317 (estimated locally),0.22 per call) CanTp_ProcessStartOfReceptionData.part.0/72 (1073741824 (estimated locally),1.00 per call) 
  Calls: PduR_CanTpCopyRxData/62 (1073741824 (estimated locally),1.00 per call) 
CanTp_ProcessStartOfReceptionData/16 (CanTp_ProcessStartOfReceptionData) @06ea3b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedFF/27 (39171712 (estimated locally),0.04 per call) CanTp_RxStateHandling/18 (268435456 (estimated locally),0.25 per call) CanTp_RxStateHandling/18 (268435456 (estimated locally),0.25 per call) CanTp_ProcessReceivedSF/26 (78343425 (estimated locally),0.07 per call) 
  Calls: CanTp_RxProcessData/17 (286956713 (estimated locally),0.27 per call) CanTp_RxProcessData/17 (237404317 (estimated locally),0.22 per call) CanTp_ProcessStartOfReceptionData.part.0/72 (354334800 (estimated locally),0.33 per call) 
CanTp_ProcessStartOfReception/15 (CanTp_ProcessStartOfReception) @06ea39a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedFF/27 (118702159 (estimated locally),0.11 per call) CanTp_ProcessReceivedSF/26 (237404317 (estimated locally),0.22 per call) 
  Calls: CanTp_StopChannel/38 (214748364 (estimated locally),0.20 per call) CanTp_ProcessStartOfReception.part.0/75 (214748368 (estimated locally),0.20 per call) CanTp_StopChannel/38 (214748364 (estimated locally),0.20 per call) PduR_CanTpStartOfReception/61 (1073741823 (estimated locally),1.00 per call) 
CanTp_PreparePadding/14 (CanTp_PreparePadding) @06ea3620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: CanTp_TxStateHandling.part.0/78 (357878150 (estimated locally),0.33 per call) CanTp_PrepareFC/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanTp_PreparexF/13 (CanTp_PreparexF) @06ea3460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_RequestTxFrameData/44 (354334801 (estimated locally),0.33 per call) 
  Calls: 
CanTp_CheckAndHandleWaitFrameTimeOut/12 (CanTp_CheckAndHandleWaitFrameTimeOut) @06e9cee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedIntermediateCF/29 (37217400 (estimated locally),0.03 per call) CanTp_ProcessReceivedFF/27 (13055932 (estimated locally),0.01 per call) CanTp_ProcessReceivedFF/27 (6527966 (estimated locally),0.01 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_RxStateHandling/18 (44734769 (estimated locally),0.04 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_RxStateHandling/18 (44734769 (estimated locally),0.04 per call) 
  Calls: CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74 (536870912 (estimated locally),0.50 per call) 
CanTp_VerifyBlockSize/11 (CanTp_VerifyBlockSize) @06e9cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedIntermediateCF/29 (74434800 (estimated locally),0.07 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) 
  Calls: CanTp_VerifyBlockSize.part.0/71 (354334800 (estimated locally),0.33 per call) 
CanTp_CalculateBlockSize/10 (CanTp_CalculateBlockSize) @06e9c9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ProcessReceivedFF/27 (13055932 (estimated locally),0.01 per call) CanTp_RxStateHandling/18 (89469538 (estimated locally),0.08 per call) CanTp_VerifyBlockSize.part.0/71 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanTp_PrepareFC/9 (CanTp_PrepareFC) @06e92d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_TransmitPostponedFlowControl.part.0/77 (268435456 (estimated locally),0.25 per call) CanTp_TransmitPostponedFlowControl.part.0/77 (268435456 (estimated locally),0.25 per call) CanTp_TransmitPostponedFlowControl.part.0/77 (268435456 (estimated locally),0.25 per call) CanTp_TryToSendFC/19 (174930840 (estimated locally),0.16 per call) CanTp_TryToSendFC/19 (174930840 (estimated locally),0.16 per call) CanTp_TryToSendFC/19 (174930840 (estimated locally),0.16 per call) 
  Calls: CanTp_TransmitFrame/40 (1073741824 (estimated locally),1.00 per call) CanTp_PreparePadding/14 (1073741824 (estimated locally),1.00 per call) 
CanTp_StallHandling/8 (CanTp_StallHandling) @06e920e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanTp_ChannelHandling/7 (536870911 (estimated locally),0.50 per call) 
  Calls: 
CanTp_ChannelHandling/7 (CanTp_ChannelHandling) @06e89ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: CanTp_MainFunction/5 (1073741824 (estimated locally),1.55 per call) 
  Calls: CanTp_HandlePostponedFlags/50 (268435456 (estimated locally),0.25 per call) CanTp_TxStateHandling/43 (118702158 (estimated locally),0.11 per call) CanTp_RxStateHandling/18 (61149597 (estimated locally),0.06 per call) CanTp_TimeoutHandling/6 (88583700 (estimated locally),0.08 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (536870911 (estimated locally),0.50 per call) CanTp_StallHandling/8 (536870911 (estimated locally),0.50 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (536870911 (estimated locally),0.50 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (1073741823 (estimated locally),1.00 per call) 
CanTp_TimeoutHandling/6 (CanTp_TimeoutHandling) @06e899a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (read)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_ChannelHandling/7 (88583700 (estimated locally),0.08 per call) CanTp_PostponedTimeoutHandling/51 (118702159 (estimated locally),0.11 per call) 
  Calls: CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_TransmitPostponedFlowControl/42 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_TransmitPostponedFrame/41 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) CanTp_StopChannel/38 (134217728 (estimated locally),0.12 per call) 
CanTp_MainFunction/5 (CanTp_MainFunction) @06e89460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_NonIdleChannelCounter/58 (read)CanTp_InitVars/57 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_CfgPtr/0 (read)
  Referring: 
  Availability: available
  Function flags: count:694774116 (estimated locally) body optimize_size
  Called by: 
  Calls: CanTp_ChannelHandling/7 (1073741824 (estimated locally),1.55 per call) CanTp_STminCallback/35 (157678986 (estimated locally),0.23 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (694774116 (estimated locally),1.00 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (694774116 (estimated locally),1.00 per call) 
CanTp_CancelTransmit/4 (CanTp_CancelTransmit) @06e892a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_InitVars/57 (read)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (read)CanTp_Channel/60 (read)CanTp_Channel/60 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanTp_HandlePostponedFlags/50 (37215497 (estimated locally),0.03 per call) Det_ASR40_ReportError/55 (18191865 (estimated locally),0.02 per call) CanTp_StopChannel/38 (6341211 (estimated locally),0.01 per call) Det_ASR40_ReportError/55 (6341211 (estimated locally),0.01 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (37217400 (estimated locally),0.03 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (37217400 (estimated locally),0.03 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (74434800 (estimated locally),0.07 per call) Det_ASR40_ReportError/55 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/55 (524845004 (estimated locally),0.49 per call) 
CanTp_InitChannelPtr/3 (CanTp_InitChannelPtr) @06ba5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_NonIdleChannelCounter/58 (read)CanTp_NonIdleChannelCounter/58 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_Init/2 (955630224 (estimated locally),0.96 per call) CanTp_StopChannel/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanTp_Init/2 (CanTp_Init) @06ba5620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTp_CfgPtr/0 (write)CanTp_InitVars/57 (read)CanTp_InitVars/57 (write)CanTp_NonIdleChannelCounter/58 (write)CanTp_Channel/60 (addr)CanTp_CfgPtr/0 (read)CanTp_Channel/60 (addr)CanTp_Channel/60 (read)CanTp_Channel/60 (write)CanTp_Channel/60 (write)CanTp_CfgPtr/0 (read)CanTp_InitVars/57 (write)
  Referring: 
  Availability: available
  Function flags: count:992534453 (estimated locally) body optimize_size
  Called by: 
  Calls: CanTp_InitChannelPtr/3 (955630224 (estimated locally),0.96 per call) CanTp_StopChannel/38 (955630222 (estimated locally),0.96 per call) SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/59 (347387059 (estimated locally),0.35 per call) SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0/56 (347387059 (estimated locally),0.35 per call) Det_ASR40_ReportError/55 (347387059 (estimated locally),0.35 per call) CanTp_IsValidConfig/1 (694774118 (estimated locally),0.70 per call) Det_ASR40_ReportError/55 (297760336 (estimated locally),0.30 per call) 
CanTp_IsValidConfig/1 (CanTp_IsValidConfig) @06ba5380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanTp_Init/2 (694774118 (estimated locally),0.70 per call) 
  Calls: CanTp_IsValidConfig.part.0/70 (66369400 (estimated locally),0.06 per call) TS_PlatformSigIsValid/53 (574129754 (estimated locally),0.53 per call) 
CanTp_CfgPtr/0 (CanTp_CfgPtr) @06e3e558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanTp_TxStateHandling.part.0/78 (read)CanTp_MainFunction/5 (read)CanTp_RxProcessData/17 (read)CanTp_RxChannelCleanup/24 (read)CanTp_ProcessReceivedSF/26 (read)CanTp_TimeoutHandling/6 (read)CanTp_ProcessConfirmedCF/49 (read)CanTp_ProcessConfirmedCF/49 (read)CanTp_ProcessReceivedIntermediateCF/29 (read)CanTp_CancelTransmit/4 (read)CanTp_ProcessReceivedIntermediateCF/29 (read)CanTp_ProcessTxPdu/48 (read)CanTp_ProcessReceivedIntermediateCF/29 (read)CanTp_ProcessReceivedCF/28 (read)CanTp_TransmitPostponedFrame.part.0/76 (read)CanTp_RxIndication/20 (read)CanTp_ProcessTxPdu/48 (read)CanTp_RequestTxFrameData/44 (read)CanTp_Init/2 (write)CanTp_ProcessReceivedFF/27 (read)CanTp_Init/2 (read)CanTp_Init/2 (read)CanTp_Transmit/39 (read)CanTp_TxConfirmation/46 (read)CanTp_StopChannel/38 (read)CanTp_ProcessReceivedLastCF/30 (read)CanTp_Transmit/39 (read)CanTp_Transmit/39 (read)CanTp_ProcessTxPdu/48 (read)CanTp_ProcessTxPdu/48 (read)CanTp_ValidateFCLength/33 (read)CanTp_CheckAndHandleWaitFrameTimeOut.part.0/74 (read)CanTp_CancelReceive/52 (read)CanTp_ProcessReceivedFC.isra.0/79 (read)CanTp_ProcessTxPdu/48 (read)CanTp_ProcessStartOfReception/15 (read)CanTp_FindNSduId.constprop.0/81 (read)CanTp_FindNSduId.constprop.0/81 (read)CanTp_PrepareFC/9 (read)CanTp_PrepareFC/9 (read)CanTp_TimeoutHandling/6 (read)CanTp_CalculateBlockSize/10 (read)CanTp_TxStateHandling.part.0/78 (read)CanTp_ProcessCopyTxData/45 (read)CanTp_StopChannel/38 (read)CanTp_TryToSendFC/19 (read)CanTp_RxIndication/20 (read)CanTp_PreparexF/13 (read)CanTp_TransmitFrame/40 (read)CanTp_TransmitFrame/40 (read)CanTp_ValidateNAI/34 (read)CanTp_ValidateNAI/34 (read)CanTp_CancelReceive/52 (read)
  Availability: available
  Varpool flags: initialized

;; Function CanTp_ProcessCopyTxData (CanTp_ProcessCopyTxData, funcdef_no=44, decl_uid=9181, cgraph_uid=45, symbol_order=45)

Modification phase of node CanTp_ProcessCopyTxData/45
Adjusting mask for param 1 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 1
CanTp_ProcessCopyTxData (struct CanTp_ChannelType * ChannelPtr, struct PduInfoType * PduInfoPtr)
{
  PduLengthType UL_BufferSize;
  BufReq_ReturnType Ret_CopyTxData;
  const struct CanTp_ConfigType * CanTp_CfgPtr.204_1;
  long unsigned int _2;
  short unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  sizetype _6;
  const struct CanTp_TxNSduConfigType * _7;
  short unsigned int _8;
  short unsigned int UL_BufferSize.206_9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  UL_BufferSize = 0;
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.204_1 = CanTp_CfgPtr;
  _2 = CanTp_CfgPtr.204_1->TxNSduConfigPtr;
  _3 = ChannelPtr_13(D)->NSduId;
  _4 = (unsigned int) _3;
  _5 = _4 * 24;
  _6 = _2 + _5;
  _7 = CanTp_CfgPtr.204_1 + _6;
  _8 = _7->IPduConfId;
  Ret_CopyTxData_16 = PduR_CanTpCopyTxData (_8, PduInfoPtr_14(D), 0B, &UL_BufferSize);
  # DEBUG Ret_CopyTxData => Ret_CopyTxData_16
  # DEBUG BEGIN_STMT
  if (Ret_CopyTxData_16 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (Ret_CopyTxData_16 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  UL_BufferSize.206_9 = UL_BufferSize;
  ChannelPtr_13(D)->ActualBufferSize = UL_BufferSize.206_9;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  UL_BufferSize ={v} {CLOBBER};
  return Ret_CopyTxData_16;

}



;; Function CanTp_CheckNPduLength (CanTp_CheckNPduLength, funcdef_no=31, decl_uid=8917, cgraph_uid=32, symbol_order=32)

Modification phase of node CanTp_CheckNPduLength/32
CanTp_CheckNPduLength (PduLengthType NPduLength, uint8 Padding, uint8 MaxLength)
{
  boolean ValidNPduLength;
  short unsigned int _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Padding_3(D) == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) MaxLength_5(D);
  if (_1 == NPduLength_4(D))
    goto <bb 15>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  # DEBUG ValidNPduLength => 0
  goto <bb 15>; [100.00%]

  <bb 5> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) <= 7)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (Padding_3(D) == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  # DEBUG ValidNPduLength => 1
  goto <bb 15>; [100.00%]

  <bb 8> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) == 8)
    goto <bb 15>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) == 12)
    goto <bb 15>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 154348240]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) == 16)
    goto <bb 15>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 11> [local count: 101869838]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) == 20)
    goto <bb 15>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 67234093]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) == 24)
    goto <bb 15>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 44374501]:
  # DEBUG BEGIN_STMT
  if (NPduLength_4(D) == 32)
    goto <bb 15>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 14> [local count: 29287171]:
  # DEBUG D#1 => Padding_3(D)
  # DEBUG D#2 => MaxLength_5(D)
  ValidNPduLength_6 = CanTp_CheckNPduLength.part.0 (NPduLength_4(D));

  <bb 15> [local count: 1073741824]:
  # ValidNPduLength_2 = PHI <0(4), 1(7), 1(8), 1(9), 1(10), 1(11), 1(12), 1(13), 1(3), ValidNPduLength_6(14), 0(6)>
  # DEBUG ValidNPduLength => ValidNPduLength_2
  # DEBUG BEGIN_STMT
  return ValidNPduLength_2;

}



;; Function CanTp_IsValidConfig (CanTp_IsValidConfig, funcdef_no=0, decl_uid=5607, cgraph_uid=1, symbol_order=1)

Modification phase of node CanTp_IsValidConfig/1
CanTp_IsValidConfig (const void * voidConfigPtr)
{
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG ConfigPtr => voidConfigPtr_6(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (voidConfigPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct CanTp_ConfigType *)voidConfigPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct CanTp_ConfigType *)voidConfigPtr_6(D)].CfgSignature;
  if (_3 == 294722855)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 66369400]:
  RetVal_10 = CanTp_IsValidConfig.part.0 (voidConfigPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # RetVal_4 = PHI <1(2), 1(3), 1(4), RetVal_10(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function CanTp_InitChannelPtr (CanTp_InitChannelPtr, funcdef_no=2, decl_uid=5905, cgraph_uid=3, symbol_order=3)

Modification phase of node CanTp_InitChannelPtr/3
CanTp_InitChannelPtr (struct CanTp_ChannelType * ChannelPtr)
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char CanTp_NonIdleChannelCounter.5_4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->State = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->NSduId = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->TotalLength = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->ActualBufferSize = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->ProcessedLength = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->BlockSize = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->ProcessedBlockFrames = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->SequenceNumber = 1;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->TempLength = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->WftCounter = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->Ticks = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->PostTicks = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_8(D)->PostFlag;
  _2 = _1 & 253;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = _2 & 251;
  ChannelPtr_8(D)->PostFlag = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->StMin = 255;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->MfCounterTicks = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->CanIfDLC = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->ConnectionFlags = 0;
  # DEBUG BEGIN_STMT
  ChannelPtr_8(D)->ReceivedSduLength = 0;
  # DEBUG BEGIN_STMT
  CanTp_NonIdleChannelCounter.5_4 = CanTp_NonIdleChannelCounter;
  if (CanTp_NonIdleChannelCounter.5_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = CanTp_NonIdleChannelCounter.5_4 + 255;
  CanTp_NonIdleChannelCounter = _5;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function CanTp_CalculateBlockSize (CanTp_CalculateBlockSize, funcdef_no=9, decl_uid=5937, cgraph_uid=10, symbol_order=10)

Modification phase of node CanTp_CalculateBlockSize/10
CanTp_CalculateBlockSize (struct CanTp_ChannelType * ChannelPtr, uint8 * BlockSizePtr)
{
  const uint8 NSduMaxSize;
  const struct CanTp_RxNSduConfigType * const RxNSduCfgPtr;
  Std_ReturnType Ret_BSCalc;
  PduLengthType BlockSizeTmp;
  const PduLengthType RemainingBytes;
  const PduIdType NSduId;
  short unsigned int _1;
  short unsigned int _2;
  const struct CanTp_ConfigType * CanTp_CfgPtr.35_3;
  short unsigned int _4;
  long unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  sizetype _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  short unsigned int _13;
  unsigned char _14;
  int _15;
  int _16;
  int _17;
  unsigned char _18;
  short unsigned int _19;
  unsigned char _20;
  int iftmp.39_24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NSduId_27 = ChannelPtr_26(D)->NSduId;
  # DEBUG NSduId => NSduId_27
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_26(D)->TotalLength;
  _2 = ChannelPtr_26(D)->ProcessedLength;
  RemainingBytes_28 = _1 - _2;
  # DEBUG RemainingBytes => RemainingBytes_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.35_3 = CanTp_CfgPtr;
  _5 = CanTp_CfgPtr.35_3->RxNSduConfigPtr;
  _6 = (unsigned int) NSduId_27;
  _7 = _6 * 26;
  _8 = _5 + _7;
  RxNSduCfgPtr_29 = CanTp_CfgPtr.35_3 + _8;
  # DEBUG RxNSduCfgPtr => RxNSduCfgPtr_29
  # DEBUG BEGIN_STMT
  _9 = RxNSduCfgPtr_29->NPduLength;
  _10 = RxNSduCfgPtr_29->AddressingFormat;
  if (_10 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (_10 != 3)
    goto <bb 5>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 4> [local count: 719407023]:

  <bb 5> [local count: 1073741824]:
  # iftmp.39_24 = PHI <1(3), 0(4)>
  _11 = (unsigned char) iftmp.39_24;
  _12 = _9 - _11;
  NSduMaxSize_30 = _12 + 255;
  # DEBUG NSduMaxSize => NSduMaxSize_30
  # DEBUG BEGIN_STMT
  _13 = ChannelPtr_26(D)->ActualBufferSize;
  if (_13 >= RemainingBytes_28)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _14 = RxNSduCfgPtr_29->BS;
  BlockSizeTmp_32 = (PduLengthType) _14;
  # DEBUG BlockSizeTmp => BlockSizeTmp_32
  # DEBUG BEGIN_STMT
  # DEBUG Ret_BSCalc => 0
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _15 = (int) _13;
  _16 = (int) NSduMaxSize_30;
  _17 = _15 / _16;
  BlockSizeTmp_31 = (PduLengthType) _17;
  # DEBUG BlockSizeTmp => BlockSizeTmp_31
  # DEBUG BEGIN_STMT
  if (BlockSizeTmp_31 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 8> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret_BSCalc => 0
  # DEBUG BEGIN_STMT
  _18 = RxNSduCfgPtr_29->BS;
  _19 = (short unsigned int) _18;
  if (_19 < BlockSizeTmp_31)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 134217728]:
  if (_18 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 67108864]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockSizeTmp => _19

  <bb 11> [local count: 268435456]:
  # BlockSizeTmp_21 = PHI <BlockSizeTmp_31(8), BlockSizeTmp_31(9), _19(10)>
  # DEBUG BlockSizeTmp => BlockSizeTmp_21
  # DEBUG BEGIN_STMT
  _4 = MIN_EXPR <255, BlockSizeTmp_21>;

  <bb 12> [local count: 1073741824]:
  # BlockSizeTmp_22 = PHI <BlockSizeTmp_32(6), _4(11), BlockSizeTmp_31(7)>
  # Ret_BSCalc_23 = PHI <0(6), 0(11), 1(7)>
  # DEBUG Ret_BSCalc => Ret_BSCalc_23
  # DEBUG BlockSizeTmp => BlockSizeTmp_22
  # DEBUG BEGIN_STMT
  _20 = (unsigned char) BlockSizeTmp_22;
  *BlockSizePtr_33(D) = _20;
  # DEBUG BEGIN_STMT
  return Ret_BSCalc_23;

}



;; Function CanTp_VerifyBlockSize (CanTp_VerifyBlockSize, funcdef_no=10, decl_uid=5939, cgraph_uid=11, symbol_order=11)

Modification phase of node CanTp_VerifyBlockSize/11
CanTp_VerifyBlockSize (struct CanTp_ChannelType * ChannelPtr)
{
  const PduLengthType RemainingBytes;
  boolean Ret_BS_Ok;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_6(D)->TotalLength;
  _2 = ChannelPtr_6(D)->ProcessedLength;
  RemainingBytes_7 = _1 - _2;
  # DEBUG RemainingBytes => RemainingBytes_7
  # DEBUG BEGIN_STMT
  _3 = ChannelPtr_6(D)->ActualBufferSize;
  if (_3 >= RemainingBytes_7)
    goto <bb 4>; [67.00%]
  else
    goto <bb 3>; [33.00%]

  <bb 3> [local count: 354334800]:
  Ret_BS_Ok_10 = CanTp_VerifyBlockSize.part.0 (ChannelPtr_6(D));

  <bb 4> [local count: 1073741824]:
  # Ret_BS_Ok_4 = PHI <1(2), Ret_BS_Ok_10(3)>
  # DEBUG Ret_BS_Ok => Ret_BS_Ok_4
  # DEBUG BEGIN_STMT
  return Ret_BS_Ok_4;

}



;; Function CanTp_PreparexF (CanTp_PreparexF, funcdef_no=12, decl_uid=5918, cgraph_uid=13, symbol_order=13)

Modification phase of node CanTp_PreparexF/13
CanTp_PreparexF (struct CanTp_ChannelType * ChannelPtr)
{
  const uint32 TotalLength;
  uint8 NPduLength;
  uint8 DataIndex;
  const PduIdType NSduId;
  const struct CanTp_ConfigType * CanTp_CfgPtr.51_1;
  long unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  sizetype _5;
  const struct CanTp_TxNSduConfigType * _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  short unsigned int _10;
  unsigned char _11;
  unsigned char _12;
  int _13;
  int _14;
  int _15;
  unsigned char _16;
  short unsigned int _17;
  int _18;
  int _19;
  int _20;
  int _21;
  long unsigned int _22;
  int _23;
  unsigned char _24;
  int _25;
  unsigned char _26;
  short unsigned int _27;
  unsigned char _28;
  int _29;
  unsigned char _30;
  int _31;
  unsigned char _32;
  unsigned char _33;
  int _34;
  unsigned char _35;
  unsigned char _36;
  unsigned char _37;
  unsigned char _38;
  unsigned char _39;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NSduId_50 = ChannelPtr_49(D)->NSduId;
  # DEBUG NSduId => NSduId_50
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DataIndex => 0
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.51_1 = CanTp_CfgPtr;
  _2 = CanTp_CfgPtr.51_1->TxNSduConfigPtr;
  _3 = (unsigned int) NSduId_50;
  _4 = _3 * 24;
  _5 = _2 + _4;
  _6 = CanTp_CfgPtr.51_1 + _5;
  _7 = _6->AddressingFormat;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = _6->N_TA_AE;
  ChannelPtr_49(D)->CanIfData[0] = _8;
  # DEBUG BEGIN_STMT
  # DEBUG DataIndex => 1

  <bb 4> [local count: 1073741824]:
  # DataIndex_40 = PHI <0(2), 1(3)>
  # DEBUG DataIndex => DataIndex_40
  # DEBUG BEGIN_STMT
  _9 = ChannelPtr_49(D)->State;
  switch (_9) <default: <L13> [25.00%], case 96: <L2> [25.00%], case 97: <L6> [25.00%], case 98: <L10> [25.00%]>

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  _10 = ChannelPtr_49(D)->TotalLength;
  _11 = (unsigned char) _10;
  _12 = _11 + DataIndex_40;
  NPduLength_75 = _12 + 1;
  # DEBUG NPduLength => NPduLength_75
  # DEBUG BEGIN_STMT
  if (NPduLength_75 > 8)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  _13 = (int) DataIndex_40;
  ChannelPtr_49(D)->CanIfData[_13] = 0;
  # DEBUG BEGIN_STMT
  DataIndex_78 = DataIndex_40 + 1;
  # DEBUG DataIndex => DataIndex_78
  # DEBUG BEGIN_STMT
  _14 = (int) DataIndex_78;
  ChannelPtr_49(D)->CanIfData[_14] = _11;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  _15 = (int) DataIndex_40;
  _16 = _11 & 15;
  ChannelPtr_49(D)->CanIfData[_15] = _16;

  <bb 8> [local count: 268435456]:
  # DataIndex_41 = PHI <DataIndex_78(6), DataIndex_40(7)>
  # DEBUG DataIndex => DataIndex_41
  # DEBUG BEGIN_STMT
  DataIndex_80 = DataIndex_41 + 1;
  # DEBUG DataIndex => DataIndex_80
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 268435456]:
<L6>:
  # DEBUG BEGIN_STMT
  _17 = ChannelPtr_49(D)->TotalLength;
  if (_17 > 4095)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  TotalLength_60 = (const uint32) _17;
  # DEBUG TotalLength => TotalLength_60
  # DEBUG BEGIN_STMT
  _18 = (int) DataIndex_40;
  ChannelPtr_49(D)->CanIfData[_18] = 16;
  # DEBUG BEGIN_STMT
  DataIndex_62 = DataIndex_40 + 1;
  # DEBUG DataIndex => DataIndex_62
  # DEBUG BEGIN_STMT
  _19 = (int) DataIndex_62;
  ChannelPtr_49(D)->CanIfData[_19] = 0;
  # DEBUG BEGIN_STMT
  DataIndex_64 = DataIndex_40 + 2;
  # DEBUG DataIndex => DataIndex_64
  # DEBUG BEGIN_STMT
  _20 = (int) DataIndex_64;
  ChannelPtr_49(D)->CanIfData[_20] = 0;
  # DEBUG BEGIN_STMT
  DataIndex_66 = DataIndex_40 + 3;
  # DEBUG DataIndex => DataIndex_66
  # DEBUG BEGIN_STMT
  _21 = (int) DataIndex_66;
  ChannelPtr_49(D)->CanIfData[_21] = 0;
  # DEBUG BEGIN_STMT
  DataIndex_68 = DataIndex_40 + 4;
  # DEBUG DataIndex => DataIndex_68
  # DEBUG BEGIN_STMT
  _22 = TotalLength_60 >> 8;
  _23 = (int) DataIndex_68;
  _24 = (unsigned char) _22;
  ChannelPtr_49(D)->CanIfData[_23] = _24;
  # DEBUG BEGIN_STMT
  DataIndex_70 = DataIndex_40 + 5;
  # DEBUG DataIndex => DataIndex_70
  # DEBUG BEGIN_STMT
  _25 = (int) DataIndex_70;
  _26 = (unsigned char) _17;
  ChannelPtr_49(D)->CanIfData[_25] = _26;
  # DEBUG BEGIN_STMT
  DataIndex_72 = DataIndex_40 + 6;
  # DEBUG DataIndex => DataIndex_72
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG TotalLength => _17
  # DEBUG BEGIN_STMT
  _27 = _17 >> 8;
  _28 = (unsigned char) _27;
  _29 = (int) DataIndex_40;
  _30 = _28 | 16;
  ChannelPtr_49(D)->CanIfData[_29] = _30;
  # DEBUG BEGIN_STMT
  DataIndex_57 = DataIndex_40 + 1;
  # DEBUG DataIndex => DataIndex_57
  # DEBUG BEGIN_STMT
  _31 = (int) DataIndex_57;
  _32 = (unsigned char) _17;
  ChannelPtr_49(D)->CanIfData[_31] = _32;
  # DEBUG BEGIN_STMT
  DataIndex_59 = DataIndex_40 + 2;
  # DEBUG DataIndex => DataIndex_59

  <bb 12> [local count: 268435456]:
  # DataIndex_42 = PHI <DataIndex_72(10), DataIndex_59(11)>
  # DEBUG DataIndex => DataIndex_42
  # DEBUG BEGIN_STMT
  ChannelPtr_49(D)->ProcessedBlockFrames = 1;
  # DEBUG BEGIN_STMT
  ChannelPtr_49(D)->BlockSize = 1;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 268435456]:
<L10>:
  # DEBUG BEGIN_STMT
  _33 = ChannelPtr_49(D)->SequenceNumber;
  _34 = (int) DataIndex_40;
  _35 = _33 | 32;
  ChannelPtr_49(D)->CanIfData[_34] = _35;
  # DEBUG BEGIN_STMT
  DataIndex_53 = DataIndex_40 + 1;
  # DEBUG DataIndex => DataIndex_53
  # DEBUG BEGIN_STMT
  _36 = _33 + 1;
  # DEBUG BEGIN_STMT
  _37 = _36 & 15;
  ChannelPtr_49(D)->SequenceNumber = _37;
  # DEBUG BEGIN_STMT
  _38 = ChannelPtr_49(D)->ProcessedBlockFrames;
  _39 = _38 + 1;
  ChannelPtr_49(D)->ProcessedBlockFrames = _39;
  # DEBUG BEGIN_STMT

  <bb 14> [local count: 1073741824]:
  # DataIndex_43 = PHI <DataIndex_80(8), DataIndex_42(12), DataIndex_53(13), DataIndex_40(4)>
<L13>:
  # DEBUG DataIndex => DataIndex_43
  # DEBUG BEGIN_STMT
  ChannelPtr_49(D)->CanIfDLC = DataIndex_43;
  return;

}



;; Function CanTp_RequestTxFrameData (CanTp_RequestTxFrameData, funcdef_no=43, decl_uid=9178, cgraph_uid=44, symbol_order=44)

Modification phase of node CanTp_RequestTxFrameData/44
CanTp_RequestTxFrameData (struct CanTp_ChannelType * ChannelPtr)
{
  boolean FrameReadyToSend;
  uint8 ReqTxFrameBytes;
  const PduLengthType RemainingMsgBytes;
  struct PduInfoType PduInfo;
  BufReq_ReturnType Ret_CopyTxData;
  unsigned char _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  const struct CanTp_ConfigType * CanTp_CfgPtr.202_7;
  long unsigned int _8;
  short unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  sizetype _12;
  const struct CanTp_TxNSduConfigType * _13;
  unsigned char _14;
  unsigned char _15;
  short unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  int _19;
  uint8 * _20;
  unsigned char _21;
  unsigned char _22;
  short unsigned int _23;
  short unsigned int _24;

  <bb 2> [local count: 1073741821]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret_CopyTxData => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_34(D)->CanIfDLC;
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334801]:
  # DEBUG BEGIN_STMT
  CanTp_PreparexF (ChannelPtr_34(D));

  <bb 4> [local count: 1073741821]:
  # DEBUG BEGIN_STMT
  _2 = ChannelPtr_34(D)->ActualBufferSize;
  if (_2 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 5> [local count: 354334801]:
  # DEBUG BEGIN_STMT
  PduInfo.SduDataPtr = 0B;
  # DEBUG BEGIN_STMT
  PduInfo.SduLength = 0;
  # DEBUG BEGIN_STMT
  Ret_CopyTxData_39 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  # DEBUG Ret_CopyTxData => Ret_CopyTxData_39
  # DEBUG BEGIN_STMT
  if (Ret_CopyTxData_39 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 177167400]:
  _3 = ChannelPtr_34(D)->ActualBufferSize;
  if (_3 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret_CopyTxData => 2

  <bb 8> [local count: 1073741823]:
  # Ret_CopyTxData_25 = PHI <1(4), Ret_CopyTxData_39(5), 0(6), 2(7)>
  # DEBUG Ret_CopyTxData => Ret_CopyTxData_25
  # DEBUG BEGIN_STMT
  _4 = ChannelPtr_34(D)->ActualBufferSize;
  if (_4 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 9> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _5 = ChannelPtr_34(D)->TotalLength;
  _6 = ChannelPtr_34(D)->ProcessedLength;
  RemainingMsgBytes_40 = _5 - _6;
  # DEBUG RemainingMsgBytes => RemainingMsgBytes_40
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.202_7 = CanTp_CfgPtr;
  _8 = CanTp_CfgPtr.202_7->TxNSduConfigPtr;
  _9 = ChannelPtr_34(D)->NSduId;
  _10 = (unsigned int) _9;
  _11 = _10 * 24;
  _12 = _8 + _11;
  _13 = CanTp_CfgPtr.202_7 + _12;
  _14 = _13->LSduMaxLength;
  _15 = ChannelPtr_34(D)->CanIfDLC;
  ReqTxFrameBytes_41 = _14 - _15;
  # DEBUG ReqTxFrameBytes => ReqTxFrameBytes_41
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = (short unsigned int) ReqTxFrameBytes_41;
  if (_16 > RemainingMsgBytes_40)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  ReqTxFrameBytes_42 = (uint8) RemainingMsgBytes_40;
  # DEBUG ReqTxFrameBytes => ReqTxFrameBytes_42

  <bb 11> [local count: 536870911]:
  # ReqTxFrameBytes_27 = PHI <ReqTxFrameBytes_41(9), ReqTxFrameBytes_42(10)>
  # DEBUG ReqTxFrameBytes => ReqTxFrameBytes_27
  # DEBUG BEGIN_STMT
  _17 = (short unsigned int) ReqTxFrameBytes_27;
  if (_4 < _17)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  ReqTxFrameBytes_43 = (uint8) _4;
  # DEBUG ReqTxFrameBytes => ReqTxFrameBytes_43
  # DEBUG BEGIN_STMT
  # DEBUG FrameReadyToSend => 0

  <bb 13> [local count: 536870911]:
  # ReqTxFrameBytes_28 = PHI <ReqTxFrameBytes_43(12), ReqTxFrameBytes_27(11)>
  # FrameReadyToSend_29 = PHI <0(12), 1(11)>
  # DEBUG FrameReadyToSend => FrameReadyToSend_29
  # DEBUG ReqTxFrameBytes => ReqTxFrameBytes_28
  # DEBUG BEGIN_STMT
  _18 = (short unsigned int) ReqTxFrameBytes_28;
  PduInfo.SduLength = _18;
  # DEBUG BEGIN_STMT
  _19 = (int) _15;
  _20 = &ChannelPtr_34(D)->CanIfData[_19];
  PduInfo.SduDataPtr = _20;
  # DEBUG BEGIN_STMT
  Ret_CopyTxData_47 = CanTp_ProcessCopyTxData (ChannelPtr_34(D), &PduInfo);
  # DEBUG Ret_CopyTxData => Ret_CopyTxData_47
  # DEBUG BEGIN_STMT
  if (Ret_CopyTxData_47 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 14> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _21 = ChannelPtr_34(D)->CanIfDLC;
  _22 = _21 + ReqTxFrameBytes_28;
  ChannelPtr_34(D)->CanIfDLC = _22;
  # DEBUG BEGIN_STMT
  _23 = ChannelPtr_34(D)->ProcessedLength;
  _24 = _18 + _23;
  ChannelPtr_34(D)->ProcessedLength = _24;
  # DEBUG BEGIN_STMT
  if (FrameReadyToSend_29 == 0)
    goto <bb 15>; [35.00%]
  else
    goto <bb 16>; [65.00%]

  <bb 15> [local count: 93952409]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret_CopyTxData => 2

  <bb 16> [local count: 1073741824]:
  # Ret_CopyTxData_26 = PHI <Ret_CopyTxData_25(8), Ret_CopyTxData_47(13), 0(14), 2(15)>
  # DEBUG Ret_CopyTxData => Ret_CopyTxData_26
  # DEBUG BEGIN_STMT
  PduInfo ={v} {CLOBBER};
  return Ret_CopyTxData_26;

}



;; Function CanTp_PreparePadding (CanTp_PreparePadding, funcdef_no=13, decl_uid=5956, cgraph_uid=14, symbol_order=14)

Modification phase of node CanTp_PreparePadding/14
CanTp_PreparePadding (struct CanTp_ChannelType * ChannelPtr, uint8 Padding, uint8 CanIdType, struct PduInfoType * FCBufferPtr)
{
  PduLengthType FrameLength;
  PduLengthType NPduSize;
  uint8_least Idx;
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  unsigned char _5;
  uint8 * _6;
  uint8 * _7;
  long unsigned int _8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PaddingByte => 0
  # DEBUG BEGIN_STMT
  if (FCBufferPtr_14(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 82678120]:
  # DEBUG BEGIN_STMT
  FrameLength_18 = FCBufferPtr_14(D)->SduLength;
  # DEBUG FrameLength => FrameLength_18
  # DEBUG BEGIN_STMT
  # DEBUG NPduSize => FrameLength_18
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 35433480]:
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_16(D)->CanIfDLC;
  FrameLength_17 = (PduLengthType) _1;
  # DEBUG FrameLength => FrameLength_17
  # DEBUG BEGIN_STMT
  # DEBUG NPduSize => FrameLength_17

  <bb 5> [local count: 118111600]:
  # NPduSize_10 = PHI <FrameLength_18(3), FrameLength_17(4)>
  # DEBUG FrameLength => NPduSize_10
  # DEBUG NPduSize => NPduSize_10
  # DEBUG BEGIN_STMT
  _2 = CanIdType_19(D) + 254;
  if (_2 <= 1)
    goto <bb 6>; [41.00%]
  else
    goto <bb 17>; [59.00%]

  <bb 6> [local count: 48425756]:
  # DEBUG BEGIN_STMT
  # DEBUG PaddingByte => 0
  # DEBUG BEGIN_STMT
  if (Padding_20(D) == 2)
    goto <bb 19>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 7> [local count: 31960999]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 8)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 15980499]:
  # DEBUG BEGIN_STMT
  if (Padding_20(D) == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 9> [local count: 5433370]:
  # DEBUG BEGIN_STMT
  # DEBUG NPduSize => 8
  goto <bb 19>; [100.00%]

  <bb 10> [local count: 15980499]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 12)
    goto <bb 19>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 7990250]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 16)
    goto <bb 19>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 3995125]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 20)
    goto <bb 19>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 1997562]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 24)
    goto <bb 19>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 998781]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 32)
    goto <bb 19>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 15> [local count: 499391]:
  # DEBUG BEGIN_STMT
  if (NPduSize_10 <= 48)
    goto <bb 19>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 249695]:
  # DEBUG BEGIN_STMT
  # DEBUG NPduSize => 64
  goto <bb 19>; [100.00%]

  <bb 17> [local count: 69685844]:
  # DEBUG BEGIN_STMT
  if (Padding_20(D) != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 34842922]:
  # DEBUG BEGIN_STMT
  # DEBUG NPduSize => 8

  <bb 19> [local count: 118111600]:
  # NPduSize_11 = PHI <8(9), NPduSize_10(17), 8(18), 64(6), NPduSize_10(8), 64(16), 48(15), 32(14), 24(13), 20(12), 16(11), 12(10)>
  # DEBUG PaddingByte => 0
  # DEBUG NPduSize => NPduSize_11
  # DEBUG BEGIN_STMT
  if (FCBufferPtr_14(D) != 0B)
    goto <bb 20>; [70.00%]
  else
    goto <bb 21>; [30.00%]

  <bb 20> [local count: 82678120]:
  # DEBUG BEGIN_STMT
  _3 = FCBufferPtr_14(D)->SduLength;
  Idx_23 = (uint8_least) _3;
  # DEBUG Idx => Idx_23
  # DEBUG BEGIN_STMT
  FCBufferPtr_14(D)->SduLength = NPduSize_11;
  goto <bb 27>; [100.00%]

  <bb 21> [local count: 35433480]:
  # DEBUG BEGIN_STMT
  _4 = ChannelPtr_16(D)->CanIfDLC;
  Idx_21 = (uint8_least) _4;
  # DEBUG Idx => Idx_21
  # DEBUG BEGIN_STMT
  _5 = (unsigned char) NPduSize_11;
  ChannelPtr_16(D)->CanIfDLC = _5;

  <bb 27> [local count: 118111600]:
  # Idx_29 = PHI <Idx_23(20), Idx_21(21)>
  goto <bb 29>; [100.00%]

  <bb 22> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  if (FCBufferPtr_14(D) != 0B)
    goto <bb 23>; [70.00%]
  else
    goto <bb 24>; [30.00%]

  <bb 23> [local count: 668941158]:
  # DEBUG BEGIN_STMT
  _6 = FCBufferPtr_14(D)->SduDataPtr;
  _7 = _6 + Idx_9;
  *_7 = 0;
  goto <bb 25>; [100.00%]

  <bb 24> [local count: 286689067]:
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->CanIfData[Idx_9] = 0;

  <bb 25> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  Idx_27 = Idx_9 + 1;
  # DEBUG Idx => Idx_27

  <bb 29> [local count: 1073741824]:
  # Idx_9 = PHI <Idx_29(27), Idx_27(25)>
  # DEBUG Idx => Idx_9
  # DEBUG BEGIN_STMT
  _8 = (long unsigned int) NPduSize_11;
  if (_8 > Idx_9)
    goto <bb 22>; [89.00%]
  else
    goto <bb 28>; [11.00%]

  <bb 28> [local count: 118111601]:
  return;

}



;; Function CanTp_RxProcessData (CanTp_RxProcessData, funcdef_no=16, decl_uid=5943, cgraph_uid=17, symbol_order=17)

Modification phase of node CanTp_RxProcessData/17
CanTp_RxProcessData (struct CanTp_ChannelType * ChannelPtr, uint8 * NPduDataPtr, uint8 NSduDataLength)
{
  struct PduInfoType PduInfo;
  PduLengthType UL_BufferSize;
  BufReq_ReturnType Ret_CopyRxData;
  short unsigned int _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.68_2;
  long unsigned int _3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanTp_RxNSduConfigType * _8;
  short unsigned int _9;
  short unsigned int UL_BufferSize.70_10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) NSduDataLength_12(D);
  PduInfo.SduLength = _1;
  # DEBUG BEGIN_STMT
  PduInfo.SduDataPtr = NPduDataPtr_15(D);
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.68_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.68_2->RxNSduConfigPtr;
  _4 = ChannelPtr_17(D)->NSduId;
  _5 = (unsigned int) _4;
  _6 = _5 * 26;
  _7 = _3 + _6;
  _8 = CanTp_CfgPtr.68_2 + _7;
  _9 = _8->IPduId;
  Ret_CopyRxData_19 = PduR_CanTpCopyRxData (_9, &PduInfo, &UL_BufferSize);
  # DEBUG Ret_CopyRxData => Ret_CopyRxData_19
  # DEBUG BEGIN_STMT
  if (Ret_CopyRxData_19 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  UL_BufferSize.70_10 = UL_BufferSize;
  ChannelPtr_17(D)->ActualBufferSize = UL_BufferSize.70_10;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  ChannelPtr_17(D)->ActualBufferSize = 0;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  UL_BufferSize ={v} {CLOBBER};
  PduInfo ={v} {CLOBBER};
  return Ret_CopyRxData_19;

}



;; Function CanTp_ProcessStartOfReceptionData (CanTp_ProcessStartOfReceptionData, funcdef_no=15, decl_uid=5914, cgraph_uid=16, symbol_order=16)

Modification phase of node CanTp_ProcessStartOfReceptionData/16
CanTp_ProcessStartOfReceptionData (struct CanTp_ChannelType * ChannelPtr, uint8 * NPduDataPtr, uint8 NSduDataLength)
{
  BufReq_ReturnType Ret_ReqRxBuffer;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (NSduDataLength_6(D) == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG D#5 => NPduDataPtr_13(D)
  # DEBUG D#6 => NSduDataLength_6(D)
  Ret_ReqRxBuffer_12 = CanTp_ProcessStartOfReceptionData.part.0 (ChannelPtr_8(D));
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_8(D)->ActualBufferSize;
  _2 = (short unsigned int) NSduDataLength_6(D);
  if (_1 < _2)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Ret_ReqRxBuffer_11 = CanTp_RxProcessData (ChannelPtr_8(D), 0B, 0);
  # DEBUG Ret_ReqRxBuffer => Ret_ReqRxBuffer_11
  # DEBUG BEGIN_STMT
  if (Ret_ReqRxBuffer_11 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 600704864]:
  # DEBUG Ret_ReqRxBuffer => NULL
  # DEBUG BEGIN_STMT
  _3 = ChannelPtr_8(D)->ActualBufferSize;
  if (_2 <= _3)
    goto <bb 7>; [47.77%]
  else
    goto <bb 8>; [52.23%]

  <bb 7> [local count: 286956713]:
  # DEBUG BEGIN_STMT
  Ret_ReqRxBuffer_15 = CanTp_RxProcessData (ChannelPtr_8(D), NPduDataPtr_13(D), NSduDataLength_6(D));
  # DEBUG Ret_ReqRxBuffer => Ret_ReqRxBuffer_15

  <bb 8> [local count: 1073741824]:
  # Ret_ReqRxBuffer_5 = PHI <Ret_ReqRxBuffer_12(3), Ret_ReqRxBuffer_11(5), Ret_ReqRxBuffer_15(7), 2(6)>
  # DEBUG Ret_ReqRxBuffer => Ret_ReqRxBuffer_5
  # DEBUG BEGIN_STMT
  return Ret_ReqRxBuffer_5;

}



;; Function CanTp_StopChannel (CanTp_StopChannel, funcdef_no=37, decl_uid=5930, cgraph_uid=38, symbol_order=38)

Modification phase of node CanTp_StopChannel/38
CanTp_StopChannel (struct CanTp_ChannelType * ChannelPtr, CanTp_ULIndicationType ULIndication, NotifResultType Result)
{
  PduIdType NSduID;
  boolean CallPduRCanTpTxConfirmation;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.162_2;
  long unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  sizetype _6;
  const struct CanTp_RxNSduConfigType * _7;
  short unsigned int _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  const struct CanTp_ConfigType * CanTp_CfgPtr.164_13;
  long unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  sizetype _17;
  const struct CanTp_TxNSduConfigType * _18;
  short unsigned int _19;
  unsigned char _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CallPduRCanTpTxConfirmation => 0
  # DEBUG BEGIN_STMT
  NSduID_28 = ChannelPtr_27(D)->NSduId;
  # DEBUG NSduID => NSduID_28
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_27(D)->State;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (ULIndication_29(D) == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _25 = _1 & 96;
  if (_25 == 64)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 36945309]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.162_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.162_2->RxNSduConfigPtr;
  _4 = (unsigned int) NSduID_28;
  _5 = _4 * 26;
  _6 = _3 + _5;
  _7 = CanTp_CfgPtr.162_2 + _6;
  _8 = _7->IPduId;
  PduR_CanTpRxIndication (_8, Result_30(D));

  <bb 6> [local count: 1073741824]:
  # CallPduRCanTpTxConfirmation_20 = PHI <0(2), 0(3), 0(5), 1(4)>
  # DEBUG CallPduRCanTpTxConfirmation => CallPduRCanTpTxConfirmation_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = ChannelPtr_27(D)->PostRxIndFrameType;
  if (_9 == 32)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = ChannelPtr_27(D)->PostFlag;
  _11 = _10 & 254;
  ChannelPtr_27(D)->PostFlag = _11;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_InitChannelPtr (ChannelPtr_27(D));
  # DEBUG BEGIN_STMT
  if (CallPduRCanTpTxConfirmation_20 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 9> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _12 = ChannelPtr_27(D)->ChannelLockFlag;
  if (_12 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  ChannelPtr_27(D)->ChannelLockFlag = 0;

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (CallPduRCanTpTxConfirmation_20 == 1)
    goto <bb 12>; [20.24%]
  else
    goto <bb 13>; [79.76%]

  <bb 12> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.164_13 = CanTp_CfgPtr;
  _14 = CanTp_CfgPtr.164_13->TxNSduConfigPtr;
  _15 = (unsigned int) NSduID_28;
  _16 = _15 * 24;
  _17 = _14 + _16;
  _18 = CanTp_CfgPtr.164_13 + _17;
  _19 = _18->IPduConfId;
  PduR_CanTpTxConfirmation (_19, Result_30(D));

  <bb 13> [local count: 1073741824]:
  return;

}



;; Function CanTp_Init (CanTp_Init, funcdef_no=1, decl_uid=5609, cgraph_uid=2, symbol_order=2)

Modification phase of node CanTp_Init/2
CanTp_Init (const struct CanTp_ConfigType * CfgPtr)
{
  boolean StopChannel;
  boolean ChannelInitFlag;
  CanTp_ChType Channel;
  struct CanTp_ChannelType * ChannelPtr;
  unsigned char _1;
  unsigned char _2;
  int _3;
  const struct CanTp_ConfigType * CanTp_CfgPtr.2_4;
  unsigned char _5;
  int _6;
  unsigned char _7;
  unsigned char _8;
  const struct CanTp_ConfigType * CanTp_CfgPtr.4_9;
  unsigned char _10;

  <bb 2> [local count: 992534453]:
  # DEBUG BEGIN_STMT
  # DEBUG LocalConfigPtr => CfgPtr_21(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (CfgPtr_21(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 297760336]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 1, 3);
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 694774118]:
  # DEBUG BEGIN_STMT
  _1 = CanTp_IsValidConfig (CfgPtr_21(D));
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 347387059]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 1, 1);
  goto <bb 16>; [100.00%]

  <bb 6> [local count: 347387059]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelInitFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG StopChannel => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr = CfgPtr_21(D);
  # DEBUG BEGIN_STMT
  _2 = CanTp_InitVars.State;
  if (_2 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG StopChannel => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_InitVars.State = 0;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 229275458]:
  # DEBUG BEGIN_STMT
  CanTp_NonIdleChannelCounter = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ChannelInitFlag => 1

  <bb 9> [local count: 347387059]:
  # ChannelInitFlag_13 = PHI <0(7), 1(8)>
  # StopChannel_14 = PHI <1(7), 0(8)>
  # DEBUG StopChannel => StopChannel_14
  # DEBUG ChannelInitFlag => ChannelInitFlag_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (StopChannel_14 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 18> [local count: 118111600]:
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 955630222]:
  # DEBUG BEGIN_STMT
  _3 = (int) Channel_11;
  ChannelPtr_29 = &CanTp_Channel[_3];
  # DEBUG ChannelPtr => ChannelPtr_29
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_29, 1, 1);
  # DEBUG BEGIN_STMT
  Channel_31 = Channel_11 + 1;
  # DEBUG Channel => Channel_31

  <bb 11> [local count: 1073741823]:
  # Channel_11 = PHI <Channel_31(10), 0(18)>
  # DEBUG Channel => Channel_11
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.2_4 = CanTp_CfgPtr;
  _5 = CanTp_CfgPtr.2_4->NumberOfChannels;
  if (_5 > Channel_11)
    goto <bb 10>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 347387059]:
  # DEBUG BEGIN_STMT
  if (ChannelInitFlag_13 == 1)
    goto <bb 17>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 17> [local count: 118111600]:
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _6 = (int) Channel_12;
  ChannelPtr_32 = &CanTp_Channel[_6];
  # DEBUG ChannelPtr => ChannelPtr_32
  # DEBUG BEGIN_STMT
  CanTp_InitChannelPtr (ChannelPtr_32);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_6].PostFlag;
  _8 = _7 & 254;
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_6].PostFlag = _8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_6].ChannelLockFlag = 0;
  # DEBUG BEGIN_STMT
  Channel_36 = Channel_12 + 1;
  # DEBUG Channel => Channel_36

  <bb 14> [local count: 1073741824]:
  # Channel_12 = PHI <Channel_36(13), 0(17)>
  # DEBUG Channel => Channel_12
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.4_9 = CanTp_CfgPtr;
  _10 = CanTp_CfgPtr.4_9->NumberOfChannels;
  if (_10 > Channel_12)
    goto <bb 13>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 15> [local count: 347387060]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_InitVars.State = 1;

  <bb 16> [local count: 992534455]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTp_RxChannelCleanup (CanTp_RxChannelCleanup, funcdef_no=23, decl_uid=8903, cgraph_uid=24, symbol_order=24)

Modification phase of node CanTp_RxChannelCleanup/24
CanTp_RxChannelCleanup (struct CanTp_ChannelType * ChannelPtr)
{
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.134_4;
  long unsigned int _5;
  short unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  sizetype _9;
  const struct CanTp_RxNSduConfigType * _10;
  unsigned char _11;
  unsigned char _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_13(D)->State;
  _15 = _1 & 96;
  if (_15 == 64)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
<L2>:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.134_4 = CanTp_CfgPtr;
  _5 = CanTp_CfgPtr.134_4->RxNSduConfigPtr;
  _6 = ChannelPtr_13(D)->NSduId;
  _7 = (unsigned int) _6;
  _8 = _7 * 26;
  _9 = _5 + _8;
  _10 = CanTp_CfgPtr.134_4 + _9;
  _11 = _10->ChannelMode;
  if (_11 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  CanTp_RxChannelCleanup.part.0 (ChannelPtr_13(D));
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_13(D), 1, 7);

  <bb 6> [local count: 1073741824]:
<L8>:
  return;

}



;; Function CanTp_TransmitFrame (CanTp_TransmitFrame, funcdef_no=39, decl_uid=5924, cgraph_uid=40, symbol_order=40)

Modification phase of node CanTp_TransmitFrame/40
CanTp_TransmitFrame (struct CanTp_ChannelType * ChannelPtr, struct PduInfoType * FCBufferPtr)
{
  CanTp_ChStateType NextState;
  Std_ReturnType CanIfRet;
  PduIdType LSduId;
  const PduIdType NSduId;
  struct PduInfoType PduInfo;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.186_2;
  long unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  sizetype _6;
  const struct CanTp_RxNSduConfigType * _7;
  const struct CanTp_ConfigType * CanTp_CfgPtr.188_8;
  long unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  sizetype _12;
  const struct CanTp_TxNSduConfigType * _13;
  uint8 * _14;
  short unsigned int _15;
  unsigned char _16;
  short unsigned int _17;
  uint8[64] * _18;
  unsigned char _40;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NSduId_24 = ChannelPtr_23(D)->NSduId;
  # DEBUG NSduId => NSduId_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_23(D)->State;
  _40 = _1 & 96;
  if (_40 == 64)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.186_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.186_2->RxNSduConfigPtr;
  _4 = (unsigned int) NSduId_24;
  _5 = _4 * 26;
  _6 = _3 + _5;
  _7 = CanTp_CfgPtr.186_2 + _6;
  LSduId_26 = _7->LSduIdFc;
  # DEBUG LSduId => LSduId_26
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.188_8 = CanTp_CfgPtr;
  _9 = CanTp_CfgPtr.188_8->TxNSduConfigPtr;
  _10 = (unsigned int) NSduId_24;
  _11 = _10 * 24;
  _12 = _9 + _11;
  _13 = CanTp_CfgPtr.188_8 + _12;
  LSduId_25 = _13->LSduIdxF;
  # DEBUG LSduId => LSduId_25

  <bb 5> [local count: 1073741823]:
  # LSduId_19 = PHI <LSduId_26(3), LSduId_25(4)>
  # DEBUG LSduId => LSduId_19
  # DEBUG BEGIN_STMT
  if (FCBufferPtr_27(D) != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 6> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _14 = FCBufferPtr_27(D)->SduDataPtr;
  PduInfo.SduDataPtr = _14;
  # DEBUG BEGIN_STMT
  _15 = FCBufferPtr_27(D)->SduLength;
  PduInfo.SduLength = _15;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  _16 = ChannelPtr_23(D)->CanIfDLC;
  _17 = (short unsigned int) _16;
  PduInfo.SduLength = _17;
  # DEBUG BEGIN_STMT
  _18 = &ChannelPtr_23(D)->CanIfData;
  PduInfo.SduDataPtr = _18;

  <bb 8> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CurrentState => _1
  # DEBUG BEGIN_STMT
  NextState_32 = _1 & 103;
  # DEBUG NextState => NextState_32
  # DEBUG BEGIN_STMT
  NextState_33 = NextState_32 | 16;
  # DEBUG NextState => NextState_33
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_23(D)->State = NextState_33;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanIfRet_36 = CanIf_Transmit (LSduId_19, &PduInfo);
  # DEBUG CanIfRet => CanIfRet_36
  # DEBUG BEGIN_STMT
  if (CanIfRet_36 == 0)
    goto <bb 9>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 9> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (FCBufferPtr_27(D) == 0B)
    goto <bb 10>; [30.00%]
  else
    goto <bb 12>; [70.00%]

  <bb 10> [local count: 215822106]:
  # DEBUG BEGIN_STMT
  ChannelPtr_23(D)->CanIfDLC = 0;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_23(D), 1, 1);

  <bb 12> [local count: 1073741824]:
  PduInfo ={v} {CLOBBER};
  return;

}



;; Function CanTp_PrepareFC (CanTp_PrepareFC, funcdef_no=8, decl_uid=5921, cgraph_uid=9, symbol_order=9)

Modification phase of node CanTp_PrepareFC/9
CanTp_PrepareFC (struct CanTp_ChannelType * ChannelPtr, uint8 FcNPCI_Header)
{
  struct PduInfoType Local_Buffer;
  uint8 FC_Data[64];
  uint8 DataIndex;
  const PduIdType NSduId;
  const struct CanTp_ConfigType * CanTp_CfgPtr.20_1;
  long unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  sizetype _5;
  const struct CanTp_RxNSduConfigType * _6;
  unsigned char _7;
  unsigned char _8;
  int _9;
  int _10;
  unsigned char _11;
  long unsigned int _12;
  sizetype _13;
  const struct CanTp_RxNSduConfigType * _14;
  int _15;
  unsigned char _16;
  short unsigned int _17;
  long unsigned int _18;
  sizetype _19;
  const struct CanTp_RxNSduConfigType * _20;
  unsigned char _21;
  unsigned char _22;
  const struct CanTp_ConfigType * CanTp_CfgPtr.33_23;
  long unsigned int _24;
  sizetype _25;
  const struct CanTp_RxNSduConfigType * _26;
  short unsigned int _27;
  long unsigned int _28;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NSduId_33 = ChannelPtr_32(D)->NSduId;
  # DEBUG NSduId => NSduId_33
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.20_1 = CanTp_CfgPtr;
  _2 = CanTp_CfgPtr.20_1->RxNSduConfigPtr;
  _3 = (unsigned int) NSduId_33;
  _4 = _3 * 26;
  _5 = _2 + _4;
  _6 = CanTp_CfgPtr.20_1 + _5;
  _7 = _6->AddressingFormat;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = _6->N_TA_AE;
  FC_Data[0] = _8;
  # DEBUG BEGIN_STMT
  # DEBUG DataIndex => 1

  <bb 4> [local count: 1073741824]:
  # DataIndex_29 = PHI <1(3), 0(2)>
  # DEBUG DataIndex => DataIndex_29
  # DEBUG BEGIN_STMT
  _9 = (int) DataIndex_29;
  FC_Data[_9] = FcNPCI_Header_35(D);
  # DEBUG BEGIN_STMT
  DataIndex_37 = DataIndex_29 + 1;
  # DEBUG DataIndex => DataIndex_37
  # DEBUG BEGIN_STMT
  _10 = (int) DataIndex_37;
  _11 = ChannelPtr_32(D)->BlockSize;
  FC_Data[_10] = _11;
  # DEBUG BEGIN_STMT
  DataIndex_39 = DataIndex_29 + 2;
  # DEBUG DataIndex => DataIndex_39
  # DEBUG BEGIN_STMT
  _12 = CanTp_CfgPtr.20_1->RxNSduConfigPtr;
  _13 = _4 + _12;
  _14 = CanTp_CfgPtr.20_1 + _13;
  _15 = (int) DataIndex_39;
  _16 = _14->STmin;
  FC_Data[_15] = _16;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DataIndex_41 = DataIndex_29 + 3;
  # DEBUG DataIndex => DataIndex_41
  # DEBUG BEGIN_STMT
  _17 = (short unsigned int) DataIndex_41;
  Local_Buffer.SduLength = _17;
  # DEBUG BEGIN_STMT
  Local_Buffer.SduDataPtr = &FC_Data[0];
  # DEBUG BEGIN_STMT
  _18 = CanTp_CfgPtr.20_1->RxNSduConfigPtr;
  _19 = _4 + _18;
  _20 = CanTp_CfgPtr.20_1 + _19;
  _21 = _20->PaddingActivation;
  _22 = _20->FcCanIdType;
  CanTp_PreparePadding (ChannelPtr_32(D), _21, _22, &Local_Buffer);
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.33_23 = CanTp_CfgPtr;
  _24 = CanTp_CfgPtr.33_23->RxNSduConfigPtr;
  _25 = _4 + _24;
  _26 = CanTp_CfgPtr.33_23 + _25;
  _27 = _26->N_Ar;
  _28 = (long unsigned int) _27;
  ChannelPtr_32(D)->Ticks = _28;
  # DEBUG BEGIN_STMT
  CanTp_TransmitFrame (ChannelPtr_32(D), &Local_Buffer);
  FC_Data ={v} {CLOBBER};
  Local_Buffer ={v} {CLOBBER};
  return;

}



;; Function CanTp_TryToSendFC (CanTp_TryToSendFC, funcdef_no=18, decl_uid=5963, cgraph_uid=19, symbol_order=19)

Modification phase of node CanTp_TryToSendFC/19
CanTp_TryToSendFC (struct CanTp_ChannelType * ChannelPtr, uint8 Type)
{
  CanTp_ChStateType ChanState;
  boolean Ret_Postponed;
  CanTp_TxChannelType Tx_ChannelID;
  const struct CanTp_ConfigType * CanTp_CfgPtr.71_1;
  long unsigned int _2;
  short unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  sizetype _6;
  const struct CanTp_RxNSduConfigType * _7;
  int _8;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Tx_ChannelID => 255
  # DEBUG BEGIN_STMT
  # DEBUG Ret_Postponed => 0
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.71_1 = CanTp_CfgPtr;
  _2 = CanTp_CfgPtr.71_1->RxNSduConfigPtr;
  _3 = ChannelPtr_13(D)->NSduId;
  _4 = (unsigned int) _3;
  _5 = _4 * 26;
  _6 = _2 + _5;
  _7 = CanTp_CfgPtr.71_1 + _6;
  Tx_ChannelID_14 = _7->Tx_Channel;
  # DEBUG Tx_ChannelID => Tx_ChannelID_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Ret_Postponed => 0
  # DEBUG BEGIN_STMT
  if (Tx_ChannelID_14 != 255)
    goto <bb 3>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _8 = (int) Tx_ChannelID_14;
  # DEBUG D#9 => &CanTp_Channel[_8]
  # DEBUG ChPtr => D#9
  # DEBUG BEGIN_STMT
  ChanState_15 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_8].State;
  # DEBUG ChanState => ChanState_15
  # DEBUG BEGIN_STMT
  _11 = ChanState_15 & 152;
  if (_11 == 16)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret_Postponed => 1

  <bb 5> [local count: 1073741824]:
  # Ret_Postponed_9 = PHI <0(2), 0(3), 1(4)>
  # DEBUG Ret_Postponed => Ret_Postponed_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (Type_16(D)) <default: <L12> [33.33%], case 4: <L4> [33.33%], case 6: <L8> [33.33%]>

  <bb 6> [local count: 357878150]:
<L4>:
  # DEBUG BEGIN_STMT
  if (Ret_Postponed_9 == 1)
    goto <bb 7>; [51.12%]
  else
    goto <bb 8>; [48.88%]

  <bb 7> [local count: 182947310]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->State = 204;
  goto <bb 15>; [100.00%]

  <bb 8> [local count: 174930840]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->State = 76;
  # DEBUG BEGIN_STMT
  CanTp_PrepareFC (ChannelPtr_13(D), 48);
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 357878150]:
<L8>:
  # DEBUG BEGIN_STMT
  if (Ret_Postponed_9 == 1)
    goto <bb 10>; [51.12%]
  else
    goto <bb 11>; [48.88%]

  <bb 10> [local count: 182947310]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->State = 206;
  goto <bb 15>; [100.00%]

  <bb 11> [local count: 174930840]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->State = 78;
  # DEBUG BEGIN_STMT
  CanTp_PrepareFC (ChannelPtr_13(D), 49);
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 357878150]:
<L12>:
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->ActualBufferSize = 0;
  # DEBUG BEGIN_STMT
  if (Ret_Postponed_9 == 1)
    goto <bb 13>; [51.12%]
  else
    goto <bb 14>; [48.88%]

  <bb 13> [local count: 182947310]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->State = 205;
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 174930840]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->State = 77;
  # DEBUG BEGIN_STMT
  CanTp_PrepareFC (ChannelPtr_13(D), 50);

  <bb 15> [local count: 1073634451]:
  return;

}



;; Function CanTp_CheckAndHandleWaitFrameTimeOut (CanTp_CheckAndHandleWaitFrameTimeOut, funcdef_no=11, decl_uid=5945, cgraph_uid=12, symbol_order=12)

Modification phase of node CanTp_CheckAndHandleWaitFrameTimeOut/12
CanTp_CheckAndHandleWaitFrameTimeOut (struct CanTp_ChannelType * ChannelPtr)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_4(D)->WftCounter;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  CanTp_CheckAndHandleWaitFrameTimeOut.part.0 (ChannelPtr_4(D));

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function CanTp_ProcessStartOfReception (CanTp_ProcessStartOfReception, funcdef_no=14, decl_uid=5910, cgraph_uid=15, symbol_order=15)

Modification phase of node CanTp_ProcessStartOfReception/15
CanTp_ProcessStartOfReception (struct CanTp_ChannelType * ChannelPtr)
{
  BufReq_ReturnType Ret_StartOfReception;
  Std_ReturnType Ret;
  const struct CanTp_ConfigType * CanTp_CfgPtr.66_1;
  long unsigned int _3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanTp_RxNSduConfigType * _8;
  short unsigned int _9;
  short unsigned int _10;
  PduLengthType * _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.66_1 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.66_1->RxNSduConfigPtr;
  _4 = ChannelPtr_15(D)->NSduId;
  _5 = (unsigned int) _4;
  _6 = _5 * 26;
  _7 = _3 + _6;
  _8 = CanTp_CfgPtr.66_1 + _7;
  _9 = _8->IPduId;
  _10 = ChannelPtr_15(D)->TotalLength;
  _11 = &ChannelPtr_15(D)->ActualBufferSize;
  Ret_StartOfReception_17 = PduR_CanTpStartOfReception (_9, _10, _11);
  # DEBUG Ret_StartOfReception => Ret_StartOfReception_17
  # DEBUG BEGIN_STMT
  switch (Ret_StartOfReception_17) <default: <L7> [20.00%], case 0: <L10> [20.00%], case 1: <L1> [20.00%], case 2: <L6> [20.00%], case 3: <L2> [20.00%]>

  <bb 3> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_15(D), 0, 1);
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 1
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748368]:
<L2>:
  Ret_13 = CanTp_ProcessStartOfReception.part.0 (ChannelPtr_15(D));
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L6>:
  # DEBUG BEGIN_STMT
  ChannelPtr_15(D)->ActualBufferSize = 0;
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 0
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L7>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_15(D), 1, 1);
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 1
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # Ret_12 = PHI <0(2), 1(3), Ret_13(4), 0(5), 1(6)>
<L10>:
  # DEBUG Ret => Ret_12
  # DEBUG BEGIN_STMT
  return Ret_12;

}



;; Function CanTp_RxStateHandling (CanTp_RxStateHandling, funcdef_no=17, decl_uid=5916, cgraph_uid=18, symbol_order=18)

Modification phase of node CanTp_RxStateHandling/18
CanTp_RxStateHandling (struct CanTp_ChannelType * ChannelPtr)
{
  boolean ContinueWithNextBlock;
  BufReq_ReturnType Ret_ReqRxBuffer;
  Std_ReturnType BSCalc_Ok;
  BufReq_ReturnType Ret_ReqRxBuffer;
  BufReq_ReturnType Ret_ReqRxBuffer;
  unsigned char _1;
  uint8[64] * _2;
  unsigned char _3;
  uint8[64] * _4;
  unsigned char _5;
  short unsigned int _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int _9;
  uint8 * _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_16(D)->State;
  switch (_1) <default: <L28> [25.00%], case 64: <L0> [25.00%], case 65: <L5> [25.00%], case 66: <L13> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = &ChannelPtr_16(D)->CanIfData;
  _3 = ChannelPtr_16(D)->CanIfDLC;
  Ret_ReqRxBuffer_41 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _2, _3);
  # DEBUG Ret_ReqRxBuffer => Ret_ReqRxBuffer_41
  # DEBUG BEGIN_STMT
  switch (Ret_ReqRxBuffer_41) <default: <L3> [33.33%], case 0: <L1> [33.33%], case 2: <L27> [33.33%]>

  <bb 4> [local count: 89469538]:
<L1>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_16(D), 1, 0);
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 89469538]:
<L3>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 268408613]:
<L27>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->ChannelLockFlag = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 7> [local count: 268435456]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = &ChannelPtr_16(D)->CanIfData;
  _5 = ChannelPtr_16(D)->CanIfDLC;
  Ret_ReqRxBuffer_29 = CanTp_ProcessStartOfReceptionData (ChannelPtr_16(D), _4, _5);
  # DEBUG Ret_ReqRxBuffer => Ret_ReqRxBuffer_29
  # DEBUG BEGIN_STMT
  switch (Ret_ReqRxBuffer_29) <default: <L11> [33.33%], case 0: <L6> [33.33%], case 2: <L10> [33.33%]>

  <bb 8> [local count: 89469538]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = ChannelPtr_16(D)->ProcessedLength;
  _7 = ChannelPtr_16(D)->CanIfDLC;
  _8 = (short unsigned int) _7;
  _9 = _6 + _8;
  ChannelPtr_16(D)->ProcessedLength = _9;
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->CanIfDLC = 0;
  # DEBUG BEGIN_STMT
  _10 = &ChannelPtr_16(D)->BlockSize;
  BSCalc_Ok_34 = CanTp_CalculateBlockSize (ChannelPtr_16(D), _10);
  # DEBUG BSCalc_Ok => BSCalc_Ok_34
  # DEBUG BEGIN_STMT
  if (BSCalc_Ok_34 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 44734769]:
  # DEBUG BEGIN_STMT
  CanTp_TryToSendFC (ChannelPtr_16(D), 4);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 44734769]:
  # DEBUG BEGIN_STMT
  CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 89469538]:
<L10>:
  # DEBUG BEGIN_STMT
  CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 89469538]:
<L11>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 268408613]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->ChannelLockFlag = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 21>; [100.00%]

  <bb 14> [local count: 268435456]:
<L13>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Ret_ReqRxBuffer_19 = CanTp_RxProcessData (ChannelPtr_16(D), 0B, 0);
  # DEBUG Ret_ReqRxBuffer => Ret_ReqRxBuffer_19
  # DEBUG BEGIN_STMT
  switch (Ret_ReqRxBuffer_19) <default: <L19> [33.33%], case 0: <L14> [33.33%], case 2: <L18> [33.33%]>

  <bb 15> [local count: 89469538]:
<L14>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ContinueWithNextBlock_22 = CanTp_VerifyBlockSize (ChannelPtr_16(D));
  # DEBUG ContinueWithNextBlock => ContinueWithNextBlock_22
  # DEBUG BEGIN_STMT
  if (ContinueWithNextBlock_22 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 44734769]:
  # DEBUG BEGIN_STMT
  CanTp_TryToSendFC (ChannelPtr_16(D), 4);
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 44734769]:
  # DEBUG BEGIN_STMT
  CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  goto <bb 20>; [100.00%]

  <bb 18> [local count: 89469538]:
<L18>:
  # DEBUG BEGIN_STMT
  CanTp_CheckAndHandleWaitFrameTimeOut (ChannelPtr_16(D));
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 19> [local count: 89469538]:
<L19>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_16(D), 1, 1);
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 268408613]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_16(D)->ChannelLockFlag = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 21> [local count: 1073661295]:
<L28>:
  return;

}



;; Function CanTp_TxStateHandling.part.0 (CanTp_TxStateHandling.part.0, funcdef_no=61, decl_uid=10229, cgraph_uid=73, symbol_order=78)

Modification phase of node CanTp_TxStateHandling.part.0/78
CanTp_TxStateHandling.part.0 (struct CanTp_ChannelType * ChannelPtr, boolean CFBufferRequested)
{
  CanTp_ChType Rx_ChannelID;
  boolean Ret_Postponed;
  struct CanTp_ChannelType * Rx_ChannelPtr;
  const PduIdType NSduId;
  CanTp_ChStateType ChanState;
  struct CanTp_ChannelType * ChPtr;
  CanTp_ChStateType NextState;
  CanTp_ChStateType CurrentState;
  CanTp_ChStateType NextState;
  CanTp_ChStateType CurrentState;
  <unnamed type> _4;
  <unnamed type> RetVal_DataReq.192_5;
  const struct CanTp_ConfigType * CanTp_CfgPtr.193_6;
  long unsigned int _7;
  short unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  sizetype _11;
  const struct CanTp_TxNSduConfigType * _12;
  int _14;
  unsigned char _16;
  unsigned int _17;
  unsigned int _18;
  sizetype _19;
  const struct CanTp_TxNSduConfigType * _20;
  unsigned char _21;
  unsigned char _22;
  int _24;
  unsigned char _25;
  unsigned char _26;
  long unsigned int _27;
  long unsigned int _28;
  const struct CanTp_ConfigType * CanTp_CfgPtr.199_31;
  long unsigned int _32;
  sizetype _33;
  const struct CanTp_TxNSduConfigType * _34;
  short unsigned int _35;
  long unsigned int _36;

  <bb 16> [local count: 1073741824]:

  <bb 2> [local count: 1073741824]:
<L0>:
  # DEBUG BEGIN_STMT
  NSduId_2 = ChannelPtr_1(D)->NSduId;
  # DEBUG NSduId => NSduId_2
  # DEBUG BEGIN_STMT
  if (CFBufferRequested_3(D) != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  _4 = CanTp_RequestTxFrameData (ChannelPtr_1(D));
  RetVal_DataReq = _4;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RetVal_DataReq.192_5 = RetVal_DataReq;
  switch (RetVal_DataReq.192_5) <default: <L2> [33.33%], case 0: <L1> [33.33%], case 2: <L3> [33.33%]>

  <bb 5> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.193_6 = CanTp_CfgPtr;
  _7 = CanTp_CfgPtr.193_6->TxNSduConfigPtr;
  _8 = ChannelPtr_1(D)->NSduId;
  _9 = (unsigned int) _8;
  _10 = _9 * 24;
  _11 = _7 + _10;
  _12 = CanTp_CfgPtr.193_6 + _11;
  Rx_ChannelID_13 = _12->Rx_Channel;
  # DEBUG Rx_ChannelID => Rx_ChannelID_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Ret_Postponed => 0
  # DEBUG BEGIN_STMT
  if (Rx_ChannelID_13 != 255)
    goto <bb 6>; [66.00%]
  else
    goto <bb 8>; [34.00%]

  <bb 6> [local count: 236199579]:
  # DEBUG BEGIN_STMT
  _14 = (int) Rx_ChannelID_13;
  # DEBUG D#10 => &CanTp_Channel[_14]
  # DEBUG ChPtr => D#10
  # DEBUG BEGIN_STMT
  ChanState_15 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_14].State;
  # DEBUG ChanState => ChanState_15
  # DEBUG BEGIN_STMT
  _16 = ChanState_15 & 152;
  if (_16 == 16)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 80307857]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret_Postponed => 1

  <bb 8> [local count: 357878150]:
  # Ret_Postponed_23 = PHI <0(5), 0(6), 1(7)>
  # DEBUG Ret_Postponed => Ret_Postponed_23
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _17 = (unsigned int) NSduId_2;
  _18 = _17 * 24;
  _19 = _7 + _18;
  _20 = CanTp_CfgPtr.193_6 + _19;
  _21 = _20->PaddingActivation;
  _22 = _20->CanIdType;
  CanTp_PreparePadding (ChannelPtr_1(D), _21, _22, 0B);
  # DEBUG BEGIN_STMT
  if (Ret_Postponed_23 == 1)
    goto <bb 9>; [51.12%]
  else
    goto <bb 13>; [48.88%]

  <bb 9> [local count: 182947310]:
  # DEBUG BEGIN_STMT
  _24 = (int) Rx_ChannelID_13;
  # DEBUG D#11 => &CanTp_Channel[_24]
  # DEBUG Rx_ChannelPtr => D#11
  # DEBUG BEGIN_STMT
  _25 = ChannelPtr_1(D)->State;
  _26 = _25 + 160;
  if (_26 <= 1)
    goto <bb 10>; [41.00%]
  else
    goto <bb 12>; [59.00%]

  <bb 10> [local count: 75008397]:
  # DEBUG BEGIN_STMT
  _27 = ChannelPtr_1(D)->Ticks;
  _28 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_24].Ticks;
  if (_27 < _28)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 37504199]:
  # DEBUG BEGIN_STMT
  ChannelPtr_1(D)->Ticks = _28;

  <bb 12> [local count: 182947311]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CurrentState => _25
  # DEBUG BEGIN_STMT
  NextState_29 = _25 & 103;
  # DEBUG NextState => NextState_29
  # DEBUG BEGIN_STMT
  NextState_30 = NextState_29 | 136;
  # DEBUG NextState => NextState_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_1(D)->State = NextState_30;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 174930840]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.199_31 = CanTp_CfgPtr;
  _32 = CanTp_CfgPtr.199_31->TxNSduConfigPtr;
  _33 = _18 + _32;
  _34 = CanTp_CfgPtr.199_31 + _33;
  _35 = _34->N_As;
  _36 = (long unsigned int) _35;
  ChannelPtr_1(D)->Ticks = _36;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentState_37 = ChannelPtr_1(D)->State;
  # DEBUG CurrentState => CurrentState_37
  # DEBUG BEGIN_STMT
  NextState_38 = CurrentState_37 & 103;
  # DEBUG NextState => NextState_38
  # DEBUG BEGIN_STMT
  NextState_39 = NextState_38 | 16;
  # DEBUG NextState => NextState_39
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_1(D)->State = NextState_39;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_TransmitFrame (ChannelPtr_1(D), 0B);
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 357878150]:
<L2>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_1(D), 1, 1);
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073634452]:
<L3>:
  return;

}



;; Function CanTp_STminTimeoutHandling (CanTp_STminTimeoutHandling, funcdef_no=36, decl_uid=9121, cgraph_uid=37, symbol_order=37)

Modification phase of node CanTp_STminTimeoutHandling/37
CanTp_STminTimeoutHandling (struct CanTp_ChannelType * ChannelPtr)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_4(D)->State;
  if (_1 == 106)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_4(D)->State = 98;
  # DEBUG BEGIN_STMT
  CanTp_TxStateHandling (ChannelPtr_4(D), 1);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  if (_1 == 122)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 173338695]:
  CanTp_STminTimeoutHandling.part.0 (ChannelPtr_4(D));

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTp_PostSTminCallback (CanTp_PostSTminCallback, funcdef_no=35, decl_uid=5951, cgraph_uid=36, symbol_order=36)

Modification phase of node CanTp_PostSTminCallback/36
CanTp_PostSTminCallback (struct CanTp_ChannelType * ChannelPtr)
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PendingSTminTimeout => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_7(D)->PostFlag;
  _4 = _1 & 4;
  if (_4 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG PendingSTminTimeout => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = _1 & 251;
  ChannelPtr_7(D)->PostFlag = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PendingSTminTimeout => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_7(D)->ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_STminTimeoutHandling (ChannelPtr_7(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_7(D)->ChannelLockFlag = 0;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTp_ProcessRxFrame (CanTp_ProcessRxFrame, funcdef_no=22, decl_uid=8908, cgraph_uid=23, symbol_order=23)

Modification phase of node CanTp_ProcessRxFrame/23
CanTp_ProcessRxFrame (struct CanTp_ChannelType * ChannelPtr, const struct PduInfoType * CanTpRxPduPtr, PduIdType NSduId, uint8 FrameType)
{
  unsigned char _1;
  unsigned char CanTp_NonIdleChannelCounter.129_2;
  unsigned char _3;
  unsigned char _4;
  unsigned char CanTp_NonIdleChannelCounter.130_5;
  unsigned char _6;
  short unsigned int _7;
  unsigned char _8;
  short unsigned int _9;
  unsigned char _30;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  switch (FrameType_11(D)) <default: <L16> [20.00%], case 0: <L0> [20.00%], case 16: <L3> [20.00%], case 32: <L6> [20.00%], case 48: <L11> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  CanTp_RxChannelCleanup (ChannelPtr_13(D));
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_13(D)->State;
  if (_1 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 4> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->NSduId = NSduId_14(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_NonIdleChannelCounter.129_2 = CanTp_NonIdleChannelCounter;
  _3 = CanTp_NonIdleChannelCounter.129_2 + 1;
  CanTp_NonIdleChannelCounter = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_ProcessReceivedSF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  CanTp_RxChannelCleanup (ChannelPtr_13(D));
  # DEBUG BEGIN_STMT
  _4 = ChannelPtr_13(D)->State;
  if (_4 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 6> [local count: 70866960]:
  # DEBUG BEGIN_STMT
  ChannelPtr_13(D)->NSduId = NSduId_14(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_NonIdleChannelCounter.130_5 = CanTp_NonIdleChannelCounter;
  _6 = CanTp_NonIdleChannelCounter.130_5 + 1;
  CanTp_NonIdleChannelCounter = _6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_ProcessReceivedFF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 214748364]:
<L6>:
  # DEBUG BEGIN_STMT
  _7 = ChannelPtr_13(D)->NSduId;
  if (_7 == NSduId_14(D))
    goto <bb 8>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 8> [local count: 73014444]:
  _8 = ChannelPtr_13(D)->State;
  _30 = _8 & 96;
  if (_30 == 64)
    goto <bb 9>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 9> [local count: 14778123]:
  # DEBUG BEGIN_STMT
  CanTp_ProcessReceivedCF (CanTpRxPduPtr_15(D), ChannelPtr_13(D));
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 214748364]:
<L11>:
  # DEBUG BEGIN_STMT
  _9 = ChannelPtr_13(D)->NSduId;
  if (_9 == NSduId_14(D))
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 43465069]:
  # DEBUG BEGIN_STMT
  # DEBUG D#13 => CanTpRxPduPtr_15(D)
  CanTp_ProcessReceivedFC.isra.0 (CanTpRxPduPtr_15(D), ChannelPtr_13(D));

  <bb 12> [local count: 1073741824]:
<L16>:
  return;

}



;; Function CanTp_PostRxIndication (CanTp_PostRxIndication, funcdef_no=20, decl_uid=5947, cgraph_uid=21, symbol_order=21)

Modification phase of node CanTp_PostRxIndication/21
CanTp_PostRxIndication (struct CanTp_ChannelType * ChannelPtr)
{
  boolean PendingFrame;
  uint8_least Loop;
  uint8 FrameType;
  PduIdType NSduId;
  uint8 NPduData[64];
  struct PduInfoType CanTpNPdu;
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  unsigned char _5;
  short unsigned int _6;
  unsigned char _7;
  unsigned char _17;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NPduData = "\x00";
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PendingFrame => 0
  # DEBUG BEGIN_STMT
  # DEBUG NSduId => 0
  # DEBUG BEGIN_STMT
  # DEBUG FrameType => 0
  # DEBUG BEGIN_STMT
  CanTpNPdu.SduDataPtr = 0B;
  # DEBUG BEGIN_STMT
  CanTpNPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_21(D)->PostFlag;
  _17 = _1 & 1;
  if (_17 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 9> [local count: 118111600]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = ChannelPtr_21(D)->PostRxIndData[Loop_10];
  NPduData[Loop_10] = _2;
  # DEBUG BEGIN_STMT
  Loop_28 = Loop_10 + 1;
  # DEBUG Loop => Loop_28

  <bb 4> [local count: 1073741824]:
  # Loop_10 = PHI <Loop_28(3), 0(9)>
  # DEBUG Loop => Loop_10
  # DEBUG BEGIN_STMT
  _3 = ChannelPtr_21(D)->PostRxIndLength;
  _4 = (long unsigned int) _3;
  if (_4 > Loop_10)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # _5 = PHI <_3(4)>
  # DEBUG BEGIN_STMT
  CanTpNPdu.SduDataPtr = &NPduData[0];
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) _5;
  CanTpNPdu.SduLength = _6;
  # DEBUG BEGIN_STMT
  NSduId_24 = ChannelPtr_21(D)->PostRxIndNSduId;
  # DEBUG NSduId => NSduId_24
  # DEBUG BEGIN_STMT
  FrameType_25 = ChannelPtr_21(D)->PostRxIndFrameType;
  # DEBUG FrameType => FrameType_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = _1 & 254;
  ChannelPtr_21(D)->PostFlag = _7;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PendingFrame => 1

  <bb 6> [local count: 236223201]:
  # NSduId_8 = PHI <0(2), NSduId_24(5)>
  # FrameType_9 = PHI <0(2), FrameType_25(5)>
  # PendingFrame_11 = PHI <0(2), 1(5)>
  # DEBUG PendingFrame => PendingFrame_11
  # DEBUG FrameType => FrameType_9
  # DEBUG NSduId => NSduId_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PendingFrame_11 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 77953656]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_21(D)->ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_ProcessRxFrame (ChannelPtr_21(D), &CanTpNPdu, NSduId_8, FrameType_9);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_21(D)->ChannelLockFlag = 0;

  <bb 8> [local count: 236223201]:
  # DEBUG BEGIN_STMT
  CanTpNPdu ={v} {CLOBBER};
  NPduData ={v} {CLOBBER};
  return;

}



;; Function CanTp_TransmitPostponedFrame (CanTp_TransmitPostponedFrame, funcdef_no=40, decl_uid=5958, cgraph_uid=41, symbol_order=41)

Modification phase of node CanTp_TransmitPostponedFrame/41
CanTp_TransmitPostponedFrame (CanTp_TxChannelType TxChannelID)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Tx_ChannelPtr => 0B
  # DEBUG BEGIN_STMT
  if (TxChannelID_3(D) != 255)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669600]:
  CanTp_TransmitPostponedFrame.part.0 (TxChannelID_3(D));

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function CanTp_TransmitPostponedFlowControl (CanTp_TransmitPostponedFlowControl, funcdef_no=41, decl_uid=5960, cgraph_uid=42, symbol_order=42)

Modification phase of node CanTp_TransmitPostponedFlowControl/42
CanTp_TransmitPostponedFlowControl (CanTp_ChType RxChannelID)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Rx_ChannelPtr => 0B
  # DEBUG BEGIN_STMT
  if (RxChannelID_3(D) != 255)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669600]:
  CanTp_TransmitPostponedFlowControl.part.0 (RxChannelID_3(D));

  <bb 4> [local count: 1073741824]:
<L7>:
  return;

}



;; Function CanTp_TimeoutHandling (CanTp_TimeoutHandling, funcdef_no=5, decl_uid=5934, cgraph_uid=6, symbol_order=6)

Modification phase of node CanTp_TimeoutHandling/6
CanTp_TimeoutHandling (struct CanTp_ChannelType * ChannelPtr)
{
  CanTp_ChType Rx_ChannelID;
  CanTp_TxChannelType Tx_ChannelID;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.16_2;
  long unsigned int _3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanTp_RxNSduConfigType * _8;
  const struct CanTp_ConfigType * CanTp_CfgPtr.18_9;
  long unsigned int _10;
  short unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  sizetype _14;
  const struct CanTp_TxNSduConfigType * _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Tx_ChannelID => 255
  # DEBUG BEGIN_STMT
  # DEBUG Rx_ChannelID => 255
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_18(D)->State;
  switch (_1) <default: <L17> [12.50%], case 64: <L2> [12.50%], case 65 ... 66: <L0> [12.50%], case 84 ... 86: <L3> [12.50%], case 112 ... 114: <L7> [12.50%], case 194: <L6> [12.50%], case 204 ... 206: <L10> [12.50%], case 228: <L16> [12.50%], case 232 ... 234: <L10> [12.50%]>

  <bb 3> [local count: 134217728]:
<L0>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 8);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 134217728]:
<L2>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 1);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 134217728]:
<L3>:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.16_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.16_2->RxNSduConfigPtr;
  _4 = ChannelPtr_18(D)->NSduId;
  _5 = (unsigned int) _4;
  _6 = _5 * 26;
  _7 = _3 + _6;
  _8 = CanTp_CfgPtr.16_2 + _7;
  Tx_ChannelID_25 = _8->Tx_Channel;
  # DEBUG Tx_ChannelID => Tx_ChannelID_25
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFrame (Tx_ChannelID_25);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 134217728]:
<L6>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 4);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 134217728]:
<L7>:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.18_9 = CanTp_CfgPtr;
  _10 = CanTp_CfgPtr.18_9->TxNSduConfigPtr;
  _11 = ChannelPtr_18(D)->NSduId;
  _12 = (unsigned int) _11;
  _13 = _12 * 24;
  _14 = _10 + _13;
  _15 = CanTp_CfgPtr.18_9 + _14;
  Rx_ChannelID_22 = _15->Rx_Channel;
  # DEBUG Rx_ChannelID => Rx_ChannelID_22
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFlowControl (Rx_ChannelID_22);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 134217728]:
<L10>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 2);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 134217728]:
<L16>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 3);
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 134217728]:
<L17>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_18(D), 1, 1);
  # DEBUG BEGIN_STMT

  <bb 11> [local count: 1073741824]:
  return;

}



;; Function CanTp_ProcessTxPdu (CanTp_ProcessTxPdu, funcdef_no=47, decl_uid=9233, cgraph_uid=48, symbol_order=48)

Modification phase of node CanTp_ProcessTxPdu/48
CanTp_ProcessTxPdu (struct CanTp_ChannelType * ChannelPtr, PduIdType CanTpTxNPduConfId)
{
  const uint8 DataLength_FF;
  const struct CanTp_RxNSduConfigType * const RxNSduCfgPtr;
  CanTp_ChType Rx_ChannelID;
  CanTp_TxChannelType Tx_ChannelID;
  const PduIdType NSduId;
  PduIdType SearchTxNPduId;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.218_2;
  long unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  sizetype _6;
  const struct CanTp_RxNSduConfigType * _7;
  const struct CanTp_ConfigType * CanTp_CfgPtr.222_8;
  long unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  sizetype _12;
  const struct CanTp_TxNSduConfigType * _13;
  unsigned char _14;
  const struct CanTp_ConfigType * CanTp_CfgPtr.226_15;
  long unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  sizetype _19;
  const struct CanTp_TxNSduConfigType * _20;
  short unsigned int _21;
  long unsigned int _22;
  unsigned char _23;
  const struct CanTp_ConfigType * CanTp_CfgPtr.228_24;
  long unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  sizetype _28;
  const struct CanTp_RxNSduConfigType * _29;
  short unsigned int _30;
  long unsigned int _31;
  const struct CanTp_ConfigType * CanTp_CfgPtr.230_32;
  long unsigned int _33;
  unsigned int _34;
  unsigned int _35;
  sizetype _36;
  unsigned char _37;
  unsigned char _38;
  unsigned char _39;
  unsigned char _40;
  unsigned char _41;
  unsigned char _42;
  short unsigned int _43;
  long unsigned int _44;
  short unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  short unsigned int _48;
  short unsigned int _49;
  int iftmp.232_53;
  unsigned char _61;
  unsigned char _62;

  <bb 2> [local count: 1073632316]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NSduId_60 = ChannelPtr_59(D)->NSduId;
  # DEBUG NSduId => NSduId_60
  # DEBUG BEGIN_STMT
  # DEBUG Tx_ChannelID => 255
  # DEBUG BEGIN_STMT
  # DEBUG Rx_ChannelID => 255
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_59(D)->State;
  _61 = _1 & 96;
  if (_61 == 64)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365034987]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.218_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.218_2->RxNSduConfigPtr;
  _4 = (unsigned int) NSduId_60;
  _5 = _4 * 26;
  _6 = _3 + _5;
  _7 = CanTp_CfgPtr.218_2 + _6;
  SearchTxNPduId_65 = _7->NPduConfIdFc;
  # DEBUG SearchTxNPduId => SearchTxNPduId_65
  # DEBUG BEGIN_STMT
  Tx_ChannelID_66 = _7->Tx_Channel;
  # DEBUG Tx_ChannelID => Tx_ChannelID_66
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708597329]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.222_8 = CanTp_CfgPtr;
  _9 = CanTp_CfgPtr.222_8->TxNSduConfigPtr;
  _10 = (unsigned int) NSduId_60;
  _11 = _10 * 24;
  _12 = _9 + _11;
  _13 = CanTp_CfgPtr.222_8 + _12;
  SearchTxNPduId_63 = _13->NPduConfIdxF;
  # DEBUG SearchTxNPduId => SearchTxNPduId_63
  # DEBUG BEGIN_STMT
  Rx_ChannelID_64 = _13->Rx_Channel;
  # DEBUG Rx_ChannelID => Rx_ChannelID_64

  <bb 5> [local count: 1073632316]:
  # SearchTxNPduId_50 = PHI <SearchTxNPduId_65(3), SearchTxNPduId_63(4)>
  # Tx_ChannelID_51 = PHI <Tx_ChannelID_66(3), 255(4)>
  # Rx_ChannelID_52 = PHI <255(3), Rx_ChannelID_64(4)>
  # DEBUG Rx_ChannelID => Rx_ChannelID_52
  # DEBUG Tx_ChannelID => Tx_ChannelID_51
  # DEBUG SearchTxNPduId => SearchTxNPduId_50
  # DEBUG BEGIN_STMT
  if (SearchTxNPduId_50 == CanTpTxNPduConfId_67(D))
    goto <bb 6>; [34.00%]
  else
    goto <bb 24>; [66.00%]

  <bb 6> [local count: 365034987]:
  # DEBUG BEGIN_STMT
  switch (_1) <default: <L25> [14.29%], case 84: <L10> [14.29%], case 85: <L21> [14.29%], case 86: <L11> [14.29%], case 112: <L4> [14.29%], case 113: <L5> [14.29%], case 114: <L9> [14.29%]>

  <bb 7> [local count: 52163500]:
<L4>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_59(D), 1, 0);
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFlowControl (Rx_ChannelID_52);
  # DEBUG BEGIN_STMT
  goto <bb 24>; [100.00%]

  <bb 8> [local count: 52163500]:
<L5>:
  # DEBUG BEGIN_STMT
  _14 = ChannelPtr_59(D)->ConnectionFlags;
  _62 = _14 & 16;
  if (_62 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 26081750]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_59(D)->State = 228;
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.226_15 = CanTp_CfgPtr;
  _16 = CanTp_CfgPtr.226_15->TxNSduConfigPtr;
  _17 = (unsigned int) NSduId_60;
  _18 = _17 * 24;
  _19 = _16 + _18;
  _20 = CanTp_CfgPtr.226_15 + _19;
  _21 = _20->N_Bs;
  _22 = (long unsigned int) _21;
  ChannelPtr_59(D)->Ticks = _22;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 26081750]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_59(D)->State = 98;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _23 = _14 & 239;
  ChannelPtr_59(D)->ConnectionFlags = _23;

  <bb 11> [local count: 52163500]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFlowControl (Rx_ChannelID_52);
  # DEBUG BEGIN_STMT
  goto <bb 24>; [100.00%]

  <bb 12> [local count: 52163500]:
<L9>:
  # DEBUG BEGIN_STMT
  CanTp_ProcessConfirmedCF (ChannelPtr_59(D));
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFlowControl (Rx_ChannelID_52);
  # DEBUG BEGIN_STMT
  goto <bb 24>; [100.00%]

  <bb 13> [local count: 52163500]:
<L10>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_59(D)->State = 194;
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.228_24 = CanTp_CfgPtr;
  _25 = CanTp_CfgPtr.228_24->RxNSduConfigPtr;
  _26 = (unsigned int) NSduId_60;
  _27 = _26 * 26;
  _28 = _25 + _27;
  _29 = CanTp_CfgPtr.228_24 + _28;
  _30 = _29->N_Cr;
  _31 = (long unsigned int) _30;
  ChannelPtr_59(D)->Ticks = _31;
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFrame (Tx_ChannelID_51);
  # DEBUG BEGIN_STMT
  goto <bb 24>; [100.00%]

  <bb 14> [local count: 52163500]:
<L11>:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.230_32 = CanTp_CfgPtr;
  _33 = CanTp_CfgPtr.230_32->RxNSduConfigPtr;
  _34 = (unsigned int) NSduId_60;
  _35 = _34 * 26;
  _36 = _33 + _35;
  RxNSduCfgPtr_77 = CanTp_CfgPtr.230_32 + _36;
  # DEBUG RxNSduCfgPtr => RxNSduCfgPtr_77
  # DEBUG BEGIN_STMT
  _37 = RxNSduCfgPtr_77->NPduLength;
  _38 = RxNSduCfgPtr_77->AddressingFormat;
  if (_38 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 26081750]:
  if (_38 != 3)
    goto <bb 17>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 16> [local count: 34949545]:

  <bb 17> [local count: 52163500]:
  # iftmp.232_53 = PHI <1(15), 0(16)>
  _39 = (unsigned char) iftmp.232_53;
  _40 = _37 - _39;
  DataLength_FF_78 = _40 + 254;
  # DEBUG DataLength_FF => DataLength_FF_78
  # DEBUG BEGIN_STMT
  _41 = ChannelPtr_59(D)->WftCounter;
  _42 = _41 + 255;
  ChannelPtr_59(D)->WftCounter = _42;
  # DEBUG BEGIN_STMT
  _43 = RxNSduCfgPtr_77->N_Br;
  _44 = (long unsigned int) _43;
  ChannelPtr_59(D)->Ticks = _44;
  # DEBUG BEGIN_STMT
  if (_42 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 26081750]:
  # DEBUG BEGIN_STMT
  _45 = RxNSduCfgPtr_77->N_Ar;
  _46 = (long unsigned int) _45;
  _47 = _44 + _46;
  ChannelPtr_59(D)->Ticks = _47;

  <bb 19> [local count: 52163500]:
  # DEBUG BEGIN_STMT
  _48 = ChannelPtr_59(D)->ProcessedLength;
  _49 = (short unsigned int) DataLength_FF_78;
  if (_48 > _49)
    goto <bb 20>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 20> [local count: 26081750]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_59(D)->State = 66;
  goto <bb 22>; [100.00%]

  <bb 21> [local count: 26081750]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_59(D)->State = 65;

  <bb 22> [local count: 52163500]:
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFrame (Tx_ChannelID_51);
  # DEBUG BEGIN_STMT
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 52163500]:
<L21>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_59(D), 0, 1);
  # DEBUG BEGIN_STMT
  CanTp_TransmitPostponedFrame (Tx_ChannelID_51);
  # DEBUG BEGIN_STMT

  <bb 24> [local count: 1073741824]:
<L25>:
  return;

}



;; Function CanTp_TxStateHandling (CanTp_TxStateHandling, funcdef_no=42, decl_uid=5908, cgraph_uid=43, symbol_order=43)

Modification phase of node CanTp_TxStateHandling/43
CanTp_TxStateHandling (struct CanTp_ChannelType * ChannelPtr, boolean CFBufferRequested)
{
  unsigned char _1;
  <unnamed type> _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Rx_ChannelID => 255
  # DEBUG BEGIN_STMT
  # DEBUG Ret_Postponed => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_9(D)->State;
  switch (_1) <default: <L36> [33.33%], case 96 ... 98: <L0> [33.33%], case 122: <L25> [33.33%]>

  <bb 3> [local count: 357913944]:
<L0>:
  CanTp_TxStateHandling.part.0 (ChannelPtr_9(D), CFBufferRequested_17(D));
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 357878150]:
<L25>:
  # DEBUG BEGIN_STMT
  ChannelPtr_9(D)->State = 98;
  # DEBUG BEGIN_STMT
  _4 = CanTp_RequestTxFrameData (ChannelPtr_9(D));
  RetVal_DataReq = _4;
  # DEBUG BEGIN_STMT
  switch (_4) <default: <L30> [33.33%], case 0: <L26> [33.33%], case 2: <L29> [33.33%]>

  <bb 5> [local count: 119280787]:
<L26>:
  # DEBUG BEGIN_STMT
  _5 = ChannelPtr_9(D)->MfCounterTicks;
  _6 = ChannelPtr_9(D)->Ticks;
  if (_5 > _6)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 59640394]:
  # DEBUG BEGIN_STMT
  ChannelPtr_9(D)->Ticks = _5;

  <bb 7> [local count: 119280787]:
  # DEBUG BEGIN_STMT
  ChannelPtr_9(D)->State = 106;
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 119280787]:
<L29>:
  # DEBUG BEGIN_STMT
  ChannelPtr_9(D)->State = 122;
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 119280787]:
<L30>:
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_9(D), 1, 1);
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073562874]:
<L36>:
  return;

}



;; Function CanTp_PostTxConfirmation (CanTp_PostTxConfirmation, funcdef_no=46, decl_uid=5949, cgraph_uid=47, symbol_order=47)

Modification phase of node CanTp_PostTxConfirmation/47
CanTp_PostTxConfirmation (struct CanTp_ChannelType * ChannelPtr)
{
  boolean PendingTxConf;
  PduIdType CanTpTxNPduConfId;
  unsigned char _1;
  unsigned char _2;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PendingTxConf => 0
  # DEBUG BEGIN_STMT
  # DEBUG CanTpTxNPduConfId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_10(D)->PostFlag;
  _7 = _1 & 2;
  if (_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanTpTxNPduConfId_11 = ChannelPtr_10(D)->PostTxConfNPduId;
  # DEBUG CanTpTxNPduConfId => CanTpTxNPduConfId_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = _1 & 253;
  ChannelPtr_10(D)->PostFlag = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PendingTxConf => 1

  <bb 4> [local count: 1073741824]:
  # CanTpTxNPduConfId_3 = PHI <0(2), CanTpTxNPduConfId_11(3)>
  # PendingTxConf_4 = PHI <0(2), 1(3)>
  # DEBUG PendingTxConf => PendingTxConf_4
  # DEBUG CanTpTxNPduConfId => CanTpTxNPduConfId_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PendingTxConf_4 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  CanTp_ProcessTxPdu (ChannelPtr_10(D), CanTpTxNPduConfId_3);

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function CanTp_HandlePostponedFlags (CanTp_HandlePostponedFlags, funcdef_no=49, decl_uid=5932, cgraph_uid=50, symbol_order=50)

Modification phase of node CanTp_HandlePostponedFlags/50
CanTp_HandlePostponedFlags (struct CanTp_ChannelType * ChannelPtr)
{
  boolean PostponedFlags;
  unsigned char _1;
  unsigned char _4;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG PostponedFlags => 0

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_PostponedTimeoutHandling (ChannelPtr_6(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelPtr_6(D)->PostFlag;
  _4 = _1 & 7;
  if (_4 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG PostponedFlags => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_6(D)->ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_PostTxConfirmation (ChannelPtr_6(D));
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelPtr_6(D)->ChannelLockFlag = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_PostRxIndication (ChannelPtr_6(D));
  # DEBUG BEGIN_STMT
  CanTp_PostSTminCallback (ChannelPtr_6(D));
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG PostponedFlags => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  # PostponedFlags_16 = PHI <0(5), 1(4)>
  # DEBUG BEGIN_STMT
  if (PostponedFlags_16 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 8> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 7> [local count: 118111601]:
  return;

}



;; Function CanTp_CancelTransmit (CanTp_CancelTransmit, funcdef_no=3, decl_uid=5618, cgraph_uid=4, symbol_order=4)

Modification phase of node CanTp_CancelTransmit/4
CanTp_CancelTransmit (PduIdType CanTpTxSduId)
{
  struct CanTp_ChannelType * ChannelPtr;
  CanTp_TxChannelType Channel;
  Std_ReturnType ret_result;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.7_2;
  short unsigned int _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanTp_TxNSduConfigType * _8;
  unsigned char _9;
  int _10;
  unsigned char _11;
  short unsigned int _12;
  unsigned char _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanTp_InitVars.State;
  if (_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 8, 32);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.7_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.7_2->NumberTxNSdus;
  if (_3 <= CanTpTxSduId_19(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 8, 2);
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  _4 = CanTp_CfgPtr.7_2->TxNSduConfigPtr;
  _5 = (unsigned int) CanTpTxSduId_19(D);
  _6 = _5 * 24;
  _7 = _4 + _6;
  _8 = CanTp_CfgPtr.7_2 + _7;
  _9 = _8->CanTpTc;
  if (_9 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 7> [local count: 74434800]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG IsChannelAvailable => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Channel_20 = _8->Channel;
  # DEBUG Channel => Channel_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = (int) Channel_20;
  ChannelPtr_21 = &CanTp_Channel[_10];
  # DEBUG ChannelPtr => ChannelPtr_21
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].ChannelLockFlag;
  if (_11 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 37217400]:
  # DEBUG ChannelLockSuccess => 0
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 37217400]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelLockSuccess => 1
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].NSduId;
  if (_12 == CanTpTxSduId_19(D))
    goto <bb 10>; [51.12%]
  else
    goto <bb 13>; [48.88%]

  <bb 10> [local count: 19025535]:
  # DEBUG BEGIN_STMT
  _13 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].State;
  switch (_13) <default: <L22> [33.33%], case 96: <L36> [33.33%], case 97 ... 98: <L35> [33.33%], case 106: <L35> [33.33%], case 112 ... 114: <L36> [33.33%], case 122: <L35> [33.33%], case 228: <L36> [33.33%], case 232: <L36> [33.33%], case 233 ... 234: <L35> [33.33%]>

  <bb 11> [local count: 6341211]:
<L22>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 8, 160);
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 6341211]:
<L35>:
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 0
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_21, 1, 1);
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 18191865]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 8, 160);
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1

  <bb 14> [local count: 37215497]:
  # ret_result_14 = PHI <0(12), 1(13), 1(10), 1(11)>
<L36>:
  # DEBUG ret_result => ret_result_14
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_21);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].ChannelLockFlag = 0;

  <bb 15> [local count: 1073739922]:
  # ret_result_15 = PHI <1(3), 1(5), 1(6), 1(8), ret_result_14(14)>
  # DEBUG ret_result => ret_result_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_result_15;

}



;; Function CanTp_ChannelHandling (CanTp_ChannelHandling, funcdef_no=6, decl_uid=5613, cgraph_uid=7, symbol_order=7)

Modification phase of node CanTp_ChannelHandling/7
CanTp_ChannelHandling (CanTp_ChType Channel)
{
  Std_ReturnType RetVal;
  struct CanTp_ChannelType * ChannelPtr;
  int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  unsigned char _8;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_9(D);
  ChannelPtr_10 = &CanTp_Channel[_1];
  # DEBUG ChannelPtr => ChannelPtr_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].State;
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  RetVal_14 = CanTp_StallHandling (ChannelPtr_10);
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RetVal_14 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].Ticks;
  if (_3 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_TimeoutHandling (ChannelPtr_10);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag = 0;
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 179851755]:
  # DEBUG BEGIN_STMT
  _4 = _3 + 4294967295;
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].Ticks = _4;
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].State;
  _8 = _5 & 96;
  if (_8 == 64)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 61149597]:
  # DEBUG BEGIN_STMT
  CanTp_RxStateHandling (ChannelPtr_10);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 118702158]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_TxStateHandling (ChannelPtr_10, 0);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag = 0;

  <bb 10> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_10);

  <bb 11> [local count: 1073741824]:
  return;

}



;; Function CanTp_RxIndication (CanTp_RxIndication, funcdef_no=19, decl_uid=5966, cgraph_uid=20, symbol_order=20)

Modification phase of node CanTp_RxIndication/20
CanTp_RxIndication (PduIdType CanTpRxPduId, struct PduInfoType * CanTpRxPduPtr)
{
  boolean OverwrittenCF;
  boolean IgnoreMsgFlag;
  const uint8 * SduDataPtr;
  const uint8 AddressingFormat;
  CanTp_ChType Channel;
  boolean FCValidLength;
  PduLengthType NPduMaxLength;
  boolean RxProcessFlag;
  const struct CanTp_RxNPduTableType * RxNPduTableEntry;
  uint8 FrameType;
  PduIdType NSduId;
  struct CanTp_ChannelType * ChannelPtr;
  unsigned char _1;
  uint8 * _2;
  const struct CanTp_ConfigType * CanTp_CfgPtr.73_3;
  short unsigned int _4;
  short unsigned int _5;
  unsigned char _6;
  const struct CanTp_ConfigType * CanTp_CfgPtr.74_7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  sizetype _12;
  const CanTp_RxNPduLookupEntryType * _13;
  short unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  sizetype _17;
  unsigned char FrameType.78_18;
  long unsigned int _19;
  short unsigned int NSduId.81_20;
  unsigned int _21;
  unsigned int _22;
  sizetype _23;
  const struct CanTp_TxNSduConfigType * _24;
  long unsigned int _25;
  short unsigned int NSduId.84_26;
  unsigned int _27;
  unsigned int _28;
  sizetype _29;
  const struct CanTp_RxNSduConfigType * _30;
  int _31;
  short unsigned int NSduId.86_32;
  short unsigned int _33;
  long unsigned int _34;
  short unsigned int NSduId.89_35;
  unsigned int _36;
  unsigned int _37;
  sizetype _38;
  const struct CanTp_RxNSduConfigType * _39;
  unsigned char _40;
  unsigned char _41;
  unsigned char _42;
  short unsigned int _43;
  short unsigned int _44;
  short unsigned int NSduId.93_45;
  unsigned char _46;
  short unsigned int _47;
  unsigned char _48;
  unsigned char FrameType.95_49;
  unsigned char _50;
  unsigned char _51;
  unsigned char _52;
  short unsigned int NSduId.100_53;
  short unsigned int NSduId.102_54;
  unsigned char FrameType.103_55;
  unsigned char _72;
  unsigned char _73;
  unsigned char _74;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanTp_InitVars.State;
  if (_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 32);
  goto <bb 43>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (CanTpRxPduPtr_66(D) == 0B)
    goto <bb 6>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 453224104]:
  _2 = CanTpRxPduPtr_66(D)->SduDataPtr;
  if (_2 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 231639947]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 3);
  goto <bb 43>; [100.00%]

  <bb 7> [local count: 317256873]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.73_3 = CanTp_CfgPtr;
  _4 = CanTp_CfgPtr.73_3->NumberRxNPdus;
  if (_4 <= CanTpRxPduId_67(D))
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 104694768]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 64);
  goto <bb 43>; [100.00%]

  <bb 9> [local count: 212562105]:
  # DEBUG BEGIN_STMT
  _5 = CanTpRxPduPtr_66(D)->SduLength;
  if (_5 <= 1)
    goto <bb 10>; [41.00%]
  else
    goto <bb 11>; [59.00%]

  <bb 10> [local count: 87150463]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 128);
  goto <bb 43>; [100.00%]

  <bb 11> [local count: 125411642]:
  # DEBUG BEGIN_STMT
  NSduId = 0;
  # DEBUG BEGIN_STMT
  FrameType = 0;
  # DEBUG BEGIN_STMT
  _6 = CanTp_FindNSduId (CanTpRxPduId_67(D), _2, &NSduId, &FrameType);
  if (_6 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 43>; [50.00%]

  <bb 12> [local count: 62705821]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.74_7 = CanTp_CfgPtr;
  _8 = CanTp_CfgPtr.74_7->RxNPduTablePtr;
  _9 = CanTp_CfgPtr.74_7->RxNPduLookupTablePtr;
  _10 = (unsigned int) CanTpRxPduId_67(D);
  _11 = _10 * 2;
  _12 = _9 + _11;
  _13 = CanTp_CfgPtr.74_7 + _12;
  _14 = *_13;
  _15 = (unsigned int) _14;
  _16 = _15 * 8;
  _17 = _8 + _16;
  RxNPduTableEntry_71 = CanTp_CfgPtr.74_7 + _17;
  # DEBUG RxNPduTableEntry => RxNPduTableEntry_71
  # DEBUG BEGIN_STMT
  # DEBUG RxProcessFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG NPduMaxLength => 8
  # DEBUG BEGIN_STMT
  # DEBUG FCValidLength => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  FrameType.78_18 = FrameType;
  if (FrameType.78_18 == 48)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 21319979]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19 = CanTp_CfgPtr.74_7->TxNSduConfigPtr;
  NSduId.81_20 = NSduId;
  _21 = (unsigned int) NSduId.81_20;
  _22 = _21 * 24;
  _23 = _19 + _22;
  _24 = CanTp_CfgPtr.74_7 + _23;
  Channel_76 = _24->Channel;
  # DEBUG Channel => Channel_76
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 41385842]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _25 = CanTp_CfgPtr.74_7->RxNSduConfigPtr;
  NSduId.84_26 = NSduId;
  _27 = (unsigned int) NSduId.84_26;
  _28 = _27 * 26;
  _29 = _25 + _28;
  _30 = CanTp_CfgPtr.74_7 + _29;
  Channel_75 = _30->Channel;
  # DEBUG Channel => Channel_75

  <bb 15> [local count: 62705821]:
  # Channel_59 = PHI <Channel_76(13), Channel_75(14)>
  # DEBUG Channel => Channel_59
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _31 = (int) Channel_59;
  ChannelPtr_77 = &CanTp_Channel[_31];
  # DEBUG ChannelPtr => ChannelPtr_77
  # DEBUG BEGIN_STMT
  if (FrameType.78_18 == 48)
    goto <bb 16>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 16> [local count: 21319979]:
  # DEBUG BEGIN_STMT
  AddressingFormat_79 = RxNPduTableEntry_71->AddressingFormat;
  # DEBUG AddressingFormat => AddressingFormat_79
  # DEBUG BEGIN_STMT
  NSduId.86_32 = NSduId;
  _33 = CanTpRxPduPtr_66(D)->SduLength;
  FCValidLength_80 = CanTp_ValidateFCLength (NSduId.86_32, _33, AddressingFormat_79);
  # DEBUG FCValidLength => FCValidLength_80
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 41385842]:
  # DEBUG BEGIN_STMT
  _34 = CanTp_CfgPtr.74_7->RxNSduConfigPtr;
  NSduId.89_35 = NSduId;
  _36 = (unsigned int) NSduId.89_35;
  _37 = _36 * 26;
  _38 = _34 + _37;
  _39 = CanTp_CfgPtr.74_7 + _38;
  _40 = _39->NPduLength;
  NPduMaxLength_78 = (PduLengthType) _40;
  # DEBUG NPduMaxLength => NPduMaxLength_78

  <bb 18> [local count: 62705821]:
  # NPduMaxLength_57 = PHI <8(16), NPduMaxLength_78(17)>
  # FCValidLength_58 = PHI <FCValidLength_80(16), 0(17)>
  # DEBUG FCValidLength => FCValidLength_58
  # DEBUG NPduMaxLength => NPduMaxLength_57
  # DEBUG BEGIN_STMT
  if (FrameType.78_18 == 16)
    goto <bb 19>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 19> [local count: 21319979]:
  _41 = RxNPduTableEntry_71->AddressingFormat;
  _42 = _41 + 255;
  if (_42 <= 1)
    goto <bb 20>; [41.00%]
  else
    goto <bb 22>; [59.00%]

  <bb 20> [local count: 8741191]:
  _43 = CanTpRxPduPtr_66(D)->SduLength;
  if (_43 <= 2)
    goto <bb 21>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 21> [local count: 2884593]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 128);
  goto <bb 43>; [100.00%]

  <bb 22> [local count: 59821228]:
  # DEBUG BEGIN_STMT
  if (FrameType.78_18 == 48)
    goto <bb 23>; [34.00%]
  else
    goto <bb 24>; [66.00%]

  <bb 23> [local count: 20339217]:
  if (FCValidLength_58 == 1)
    goto <bb 26>; [34.00%]
  else
    goto <bb 24>; [66.00%]

  <bb 24> [local count: 52905894]:
  if (FrameType.78_18 != 48)
    goto <bb 25>; [79.76%]
  else
    goto <bb 42>; [20.24%]

  <bb 25> [local count: 42197741]:
  _44 = CanTpRxPduPtr_66(D)->SduLength;
  if (_44 <= NPduMaxLength_57)
    goto <bb 26>; [50.00%]
  else
    goto <bb 42>; [50.00%]

  <bb 26> [local count: 28014204]:
  # DEBUG BEGIN_STMT
  SduDataPtr_83 = CanTpRxPduPtr_66(D)->SduDataPtr;
  # DEBUG SduDataPtr => SduDataPtr_83
  # DEBUG BEGIN_STMT
  NSduId.93_45 = NSduId;
  _46 = *SduDataPtr_83;
  _47 = (short unsigned int) _46;
  IgnoreMsgFlag_85 = CanTp_ValidateNAI (ChannelPtr_77, NSduId.93_45, _47, FrameType.78_18);
  # DEBUG IgnoreMsgFlag => IgnoreMsgFlag_85
  # DEBUG BEGIN_STMT
  if (IgnoreMsgFlag_85 == 0)
    goto <bb 27>; [33.00%]
  else
    goto <bb 43>; [67.00%]

  <bb 27> [local count: 9244687]:
  # DEBUG BEGIN_STMT
  # DEBUG OverwrittenCF => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _48 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_31].ChannelLockFlag;
  if (_48 == 0)
    goto <bb 34>; [50.00%]
  else
    goto <bb 28>; [50.00%]

  <bb 28> [local count: 4622344]:
  FrameType.95_49 = FrameType;
  if (FrameType.95_49 != 48)
    goto <bb 29>; [66.00%]
  else
    goto <bb 35>; [34.00%]

  <bb 29> [local count: 3050747]:
  if (FrameType.95_49 != 32)
    goto <bb 30>; [66.00%]
  else
    goto <bb 35>; [34.00%]

  <bb 30> [local count: 2013493]:
  if (FrameType.95_49 != 0)
    goto <bb 32>; [50.00%]
  else
    goto <bb 31>; [50.00%]

  <bb 31> [local count: 1006746]:
  _50 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_31].ConnectionFlags;
  _72 = _50 & 4;
  if (_72 == 0)
    goto <bb 32>; [50.00%]
  else
    goto <bb 35>; [50.00%]

  <bb 32> [local count: 1510120]:
  if (FrameType.95_49 != 16)
    goto <bb 34>; [66.00%]
  else
    goto <bb 33>; [34.00%]

  <bb 33> [local count: 513441]:
  _51 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_31].ConnectionFlags;
  _73 = _51 & 4;
  if (_73 == 0)
    goto <bb 34>; [50.00%]
  else
    goto <bb 35>; [50.00%]

  <bb 34> [local count: 5875743]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_31].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RxProcessFlag => 1
  goto <bb 38>; [100.00%]

  <bb 35> [local count: 3368944]:
  # DEBUG BEGIN_STMT
  if (FrameType.95_49 == 32)
    goto <bb 36>; [34.00%]
  else
    goto <bb 37>; [66.00%]

  <bb 36> [local count: 1145441]:
  _52 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_31].PostFlag;
  _74 = _52 & 1;

  <bb 37> [local count: 3368944]:
  # OverwrittenCF_60 = PHI <0(35), _74(36)>
  # DEBUG OverwrittenCF => OverwrittenCF_60
  # DEBUG BEGIN_STMT
  NSduId.100_53 = NSduId;
  CanTp_PostponeRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.100_53, FrameType.95_49);

  <bb 38> [local count: 9244687]:
  # RxProcessFlag_56 = PHI <1(34), 0(37)>
  # OverwrittenCF_61 = PHI <0(34), OverwrittenCF_60(37)>
  # DEBUG OverwrittenCF => OverwrittenCF_61
  # DEBUG RxProcessFlag => RxProcessFlag_56
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (OverwrittenCF_61 == 1)
    goto <bb 39>; [20.24%]
  else
    goto <bb 40>; [79.76%]

  <bb 39> [local count: 1871125]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 4);

  <bb 40> [local count: 9244687]:
  # DEBUG BEGIN_STMT
  if (RxProcessFlag_56 == 1)
    goto <bb 41>; [20.24%]
  else
    goto <bb 43>; [79.76%]

  <bb 41> [local count: 1871125]:
  # DEBUG BEGIN_STMT
  NSduId.102_54 = NSduId;
  FrameType.103_55 = FrameType;
  CanTp_ProcessRxFrame (ChannelPtr_77, CanTpRxPduPtr_66(D), NSduId.102_54, FrameType.103_55);
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_77);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_31].ChannelLockFlag = 0;
  goto <bb 43>; [100.00%]

  <bb 42> [local count: 31807023]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 66, 128);

  <bb 43> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NSduId ={v} {CLOBBER};
  FrameType ={v} {CLOBBER};
  return;

}



;; Function CanTp_STminCallback (CanTp_STminCallback, funcdef_no=34, decl_uid=5926, cgraph_uid=35, symbol_order=35)

Modification phase of node CanTp_STminCallback/35
CanTp_STminCallback (CanTp_ChType Channel)
{
  struct CanTp_ChannelType * ChannelPtr;
  int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG STminCallbackFlag => 0
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_6(D);
  ChannelPtr_7 = &CanTp_Channel[_1];
  # DEBUG ChannelPtr => ChannelPtr_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].PostFlag;
  _4 = _3 | 4;
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].PostFlag = _4;
  # DEBUG BEGIN_STMT
  # DEBUG STminCallbackFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG STminCallbackFlag => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_STminTimeoutHandling (ChannelPtr_7);
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_7);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_1].ChannelLockFlag = 0;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTp_MainFunction (CanTp_MainFunction, funcdef_no=4, decl_uid=5611, cgraph_uid=5, symbol_order=5)

Modification phase of node CanTp_MainFunction/5
CanTp_MainFunction ()
{
  uint32 MfCounterTicks;
  CanTp_ChType No_of_nonIdleChannels;
  CanTp_ChType Channel;
  unsigned char _1;
  int _2;
  const struct CanTp_ConfigType * CanTp_CfgPtr.13_3;
  unsigned char _4;
  const struct CanTp_ConfigType * CanTp_CfgPtr.13_5;

  <bb 2> [local count: 694774116]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG No_of_nonIdleChannels => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  No_of_nonIdleChannels_14 = CanTp_NonIdleChannelCounter;
  # DEBUG No_of_nonIdleChannels => No_of_nonIdleChannels_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanTp_InitVars.State;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 3> [local count: 236223199]:
  if (No_of_nonIdleChannels_14 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 12> [local count: 118111600]:
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (int) Channel_6;
  # DEBUG D#14 => &CanTp_Channel[_2]
  # DEBUG ChannelPtr => D#14
  # DEBUG BEGIN_STMT
  MfCounterTicks_19 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_2].MfCounterTicks;
  # DEBUG MfCounterTicks => MfCounterTicks_19
  # DEBUG BEGIN_STMT
  if (MfCounterTicks_19 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 477815109]:
  # DEBUG BEGIN_STMT
  MfCounterTicks_20 = MfCounterTicks_19 + 4294967295;
  # DEBUG MfCounterTicks => MfCounterTicks_20
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_2].MfCounterTicks = MfCounterTicks_20;
  # DEBUG BEGIN_STMT
  if (MfCounterTicks_20 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 157678986]:
  # DEBUG BEGIN_STMT
  CanTp_STminCallback (Channel_6);

  <bb 7> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  Channel_23 = Channel_6 + 1;
  # DEBUG Channel => Channel_23

  <bb 8> [local count: 1073741820]:
  # Channel_6 = PHI <Channel_23(7), 0(12)>
  # DEBUG Channel => Channel_6
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.13_3 = CanTp_CfgPtr;
  _4 = CanTp_CfgPtr.13_3->NumberOfTxChannels;
  if (_4 > Channel_6)
    goto <bb 4>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111600]:
  # CanTp_CfgPtr.13_5 = PHI <CanTp_CfgPtr.13_3(8)>
  # DEBUG BEGIN_STMT
  Channel_16 = CanTp_CfgPtr.13_5->NumberOfChannels;
  # DEBUG Channel => Channel_16

  <bb 10> [local count: 1073741824]:
  # Channel_7 = PHI <Channel_16(9), Channel_17(13)>
  # DEBUG Channel => Channel_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Channel_17 = Channel_7 + 255;
  # DEBUG Channel => Channel_17
  # DEBUG BEGIN_STMT
  CanTp_ChannelHandling (Channel_17);
  # DEBUG BEGIN_STMT
  if (Channel_17 != 0)
    goto <bb 13>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 13> [local count: 955630224]:
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 694774117]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTp_Transmit (CanTp_Transmit, funcdef_no=38, decl_uid=5616, cgraph_uid=39, symbol_order=39)

Modification phase of node CanTp_Transmit/39
CanTp_Transmit (PduIdType CanTpTxSduId, const struct PduInfoType * CanTpTxInfoPtr)
{
  uint8 MaxUnSegMsgLength;
  uint8 NPciSize_SF;
  Std_ReturnType ValidLength;
  CanTp_TxChannelType Channel;
  struct CanTp_ChannelType * ChannelPtr;
  Std_ReturnType Ret;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.166_2;
  short unsigned int _3;
  short unsigned int _4;
  long unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  sizetype _8;
  const struct CanTp_TxNSduConfigType * _9;
  int _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  unsigned char _16;
  short unsigned int _17;
  short unsigned int _18;
  const struct CanTp_ConfigType * CanTp_CfgPtr.178_19;
  long unsigned int _20;
  sizetype _21;
  const struct CanTp_TxNSduConfigType * _22;
  short unsigned int _23;
  long unsigned int _24;
  unsigned char CanTp_NonIdleChannelCounter.180_25;
  unsigned char _26;
  const struct CanTp_ConfigType * CanTp_CfgPtr.181_27;
  long unsigned int _28;
  sizetype _29;
  const struct CanTp_TxNSduConfigType * _30;
  unsigned char _31;
  short unsigned int _32;
  long unsigned int _33;
  unsigned char CanTp_NonIdleChannelCounter.185_34;
  unsigned char _35;
  int iftmp.173_41;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanTp_InitVars.State;
  if (_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 3, 32);
  goto <bb 26>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.166_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.166_2->NumberTxNSdus;
  if (_3 <= CanTpTxSduId_46(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 3, 2);
  goto <bb 26>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (CanTpTxInfoPtr_47(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 64100720]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 3, 3);
  goto <bb 26>; [100.00%]

  <bb 8> [local count: 303660150]:
  # DEBUG BEGIN_STMT
  _4 = CanTpTxInfoPtr_47(D)->SduLength;
  if (_4 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 100207850]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 3, 112);
  goto <bb 26>; [100.00%]

  <bb 10> [local count: 203452301]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelFound => 1
  # DEBUG BEGIN_STMT
  # DEBUG ValidLength => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = CanTp_CfgPtr.166_2->TxNSduConfigPtr;
  _6 = (unsigned int) CanTpTxSduId_46(D);
  _7 = _6 * 24;
  _8 = _5 + _7;
  _9 = CanTp_CfgPtr.166_2 + _8;
  Channel_48 = _9->Channel;
  # DEBUG Channel => Channel_48
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = (int) Channel_48;
  ChannelPtr_49 = &CanTp_Channel[_10];
  # DEBUG ChannelPtr => ChannelPtr_49
  # DEBUG BEGIN_STMT
  _11 = _9->LSduMaxLength;
  if (_11 > 8)
    goto <bb 12>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 101726150]:
  # DEBUG BEGIN_STMT
  # DEBUG NPciSize_SF => 1

  <bb 12> [local count: 203452301]:
  # NPciSize_SF_40 = PHI <2(10), 1(11)>
  # DEBUG NPciSize_SF => NPciSize_SF_40
  # DEBUG BEGIN_STMT
  _12 = _11 - NPciSize_SF_40;
  _13 = _9->AddressingFormat;
  if (_13 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 101726150]:
  if (_13 != 3)
    goto <bb 15>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 14> [local count: 136313042]:

  <bb 15> [local count: 203452301]:
  # iftmp.173_41 = PHI <1(13), 0(14)>
  _14 = (unsigned char) iftmp.173_41;
  MaxUnSegMsgLength_50 = _12 - _14;
  # DEBUG MaxUnSegMsgLength => MaxUnSegMsgLength_50
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _15 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].State;
  if (_15 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 16> [local count: 101726150]:
  _16 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].ChannelLockFlag;
  if (_16 == 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 17> [local count: 50863075]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _17 = CanTpTxInfoPtr_47(D)->SduLength;
  _18 = (short unsigned int) MaxUnSegMsgLength_50;
  if (_17 <= _18)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 25431538]:
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].NSduId = CanTpTxSduId_46(D);
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].TotalLength = _17;
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.178_19 = CanTp_CfgPtr;
  _20 = CanTp_CfgPtr.178_19->TxNSduConfigPtr;
  _21 = _7 + _20;
  _22 = CanTp_CfgPtr.178_19 + _21;
  _23 = _22->N_Cs;
  _24 = (long unsigned int) _23;
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].Ticks = _24;
  # DEBUG BEGIN_STMT
  CanTp_NonIdleChannelCounter.180_25 = CanTp_NonIdleChannelCounter;
  _26 = CanTp_NonIdleChannelCounter.180_25 + 1;
  CanTp_NonIdleChannelCounter = _26;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].State = 96;
  # DEBUG BEGIN_STMT
  # DEBUG ValidLength => 0
  goto <bb 22>; [100.00%]

  <bb 19> [local count: 25431538]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.181_27 = CanTp_CfgPtr;
  _28 = CanTp_CfgPtr.181_27->TxNSduConfigPtr;
  _29 = _7 + _28;
  _30 = CanTp_CfgPtr.181_27 + _29;
  _31 = _30->Tatype;
  if (_31 != 1)
    goto <bb 20>; [66.00%]
  else
    goto <bb 22>; [34.00%]

  <bb 20> [local count: 16784815]:
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].NSduId = CanTpTxSduId_46(D);
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].TotalLength = _17;
  # DEBUG BEGIN_STMT
  _32 = _30->N_Cs;
  _33 = (long unsigned int) _32;
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].Ticks = _33;
  # DEBUG BEGIN_STMT
  CanTp_NonIdleChannelCounter.185_34 = CanTp_NonIdleChannelCounter;
  _35 = CanTp_NonIdleChannelCounter.185_34 + 1;
  CanTp_NonIdleChannelCounter = _35;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].State = 97;
  # DEBUG BEGIN_STMT
  # DEBUG ValidLength => 0

  <bb 22> [local count: 203452301]:
  # Ret_36 = PHI <1(15), 1(16), 0(19), 0(18), 0(20)>
  # ValidLength_39 = PHI <1(15), 1(16), 1(19), 0(18), 0(20)>
  # DEBUG ValidLength => ValidLength_39
  # DEBUG Ret => Ret_36
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Ret_36 == 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 26>; [50.00%]

  <bb 23> [local count: 101726150]:
  # DEBUG BEGIN_STMT
  if (ValidLength_39 == 1)
    goto <bb 24>; [20.24%]
  else
    goto <bb 25>; [79.76%]

  <bb 24> [local count: 20589373]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 3, 144);
  # DEBUG BEGIN_STMT
  # DEBUG Ret => 1

  <bb 25> [local count: 101726150]:
  # Ret_37 = PHI <0(23), 1(24)>
  # DEBUG Ret => Ret_37
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_49);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_10].ChannelLockFlag = 0;

  <bb 26> [local count: 1073741824]:
  # Ret_38 = PHI <1(3), 1(5), 1(7), 1(9), Ret_36(22), Ret_37(25)>
  # DEBUG Ret => Ret_38
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Ret_38;

}



;; Function CanTp_TxConfirmation (CanTp_TxConfirmation, funcdef_no=45, decl_uid=5968, cgraph_uid=46, symbol_order=46)

Modification phase of node CanTp_TxConfirmation/46
CanTp_TxConfirmation (PduIdType CanTpTxPduId)
{
  CanTp_ChType ChannelLcl;
  CanTp_ChType Channel;
  struct CanTp_ChannelType * ChannelPtr;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.207_2;
  short unsigned int _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanTp_TxNPduToTpChannelType * _8;
  int _9;
  unsigned char _10;
  int _11;
  unsigned char _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  unsigned char _18;
  unsigned int _25;
  unsigned int _26;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TxConfirmFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG PduHandled => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanTp_InitVars.State;
  if (_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845003]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 64, 32);
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 548896820]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.207_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.207_2->NumberTxConfNPdus;
  if (_3 > CanTpTxPduId_20(D))
    goto <bb 6>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 5> [local count: 181135950]:
  # DEBUG PduHandled => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 64, 48);
  goto <bb 16>; [100.00%]

  <bb 6> [local count: 367760869]:
  # DEBUG BEGIN_STMT
  _4 = CanTp_CfgPtr.207_2->TxNPduToTpChannelPtr;
  _5 = (unsigned int) CanTpTxPduId_20(D);
  _6 = _5 * 2;
  _7 = _4 + _6;
  _8 = CanTp_CfgPtr.207_2 + _7;
  Channel_22 = _8->Tx_Chan;
  # DEBUG Channel => Channel_22
  # DEBUG BEGIN_STMT
  if (Channel_22 != 255)
    goto <bb 7>; [66.00%]
  else
    goto <bb 10>; [34.00%]

  <bb 7> [local count: 242722173]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ChannelLcl_24 = _8->Rx_Chan;
  # DEBUG ChannelLcl => ChannelLcl_24
  # DEBUG BEGIN_STMT
  if (ChannelLcl_24 != 255)
    goto <bb 8>; [66.00%]
  else
    goto <bb 11>; [34.00%]

  <bb 8> [local count: 160196634]:
  # DEBUG BEGIN_STMT
  _9 = (int) ChannelLcl_24;
  # DEBUG D#15 => &CanTp_Channel[_9]
  # DEBUG ChannelPtrLcl => D#15
  # DEBUG BEGIN_STMT
  _10 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].State;
  _25 = (unsigned int) _10;
  _26 = _25 + 4294967212;
  if (_26 <= 2)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 80098317]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG Channel => ChannelLcl_24
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 125038695]:
  # DEBUG BEGIN_STMT
  Channel_23 = _8->Rx_Chan;
  # DEBUG Channel => Channel_23

  <bb 11> [local count: 367760870]:
  # Channel_16 = PHI <ChannelLcl_24(9), Channel_23(10), Channel_22(7), Channel_22(8)>
  # DEBUG Channel => Channel_16
  # DEBUG BEGIN_STMT
  _11 = (int) Channel_16;
  ChannelPtr_27 = &CanTp_Channel[_11];
  # DEBUG ChannelPtr => ChannelPtr_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].ChannelLockFlag;
  if (_12 != 0)
    goto <bb 12>; [67.00%]
  else
    goto <bb 15>; [33.00%]

  <bb 12> [local count: 246399782]:
  # DEBUG BEGIN_STMT
  _13 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].State;
  _18 = _13 & 152;
  if (_18 == 16)
    goto <bb 14>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 162623856]:
  # DEBUG TxConfirmFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduHandled => 1
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 83775926]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].PostFlag;
  _15 = _14 | 2;
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].PostFlag = _15;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].PostTxConfNPduId = CanTpTxPduId_20(D);
  # DEBUG TxConfirmFlag => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduHandled => 1
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 121361087]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TxConfirmFlag => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_ProcessTxPdu (ChannelPtr_27, CanTpTxPduId_20(D));
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_27);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_11].ChannelLockFlag = 0;
  # DEBUG PduHandled => 1
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTp_CancelReceive (CanTp_CancelReceive, funcdef_no=51, decl_uid=5620, cgraph_uid=52, symbol_order=52)

Modification phase of node CanTp_CancelReceive/52
CanTp_CancelReceive (PduIdType CanTpRxSduId)
{
  uint8 MaxCfLength;
  struct CanTp_ChannelType * ChannelPtr;
  CanTp_ChType Channel;
  Std_ReturnType ret_result;
  unsigned char _1;
  const struct CanTp_ConfigType * CanTp_CfgPtr.251_2;
  short unsigned int _3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct CanTp_RxNSduConfigType * _8;
  int _9;
  unsigned char _10;
  short unsigned int _11;
  const struct CanTp_ConfigType * CanTp_CfgPtr.254_12;
  long unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  sizetype _16;
  const struct CanTp_RxNSduConfigType * _17;
  unsigned char _18;
  unsigned char _19;
  short unsigned int _20;
  int _21;
  short unsigned int _22;
  int _23;
  int _24;
  int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanTp_InitVars.State;
  if (_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 9, 32);
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.251_2 = CanTp_CfgPtr;
  _3 = CanTp_CfgPtr.251_2->NumberRxNSdus;
  if (_3 <= CanTpRxSduId_32(D))
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 9, 2);
  goto <bb 17>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelLockedFound => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = CanTp_CfgPtr.251_2->RxNSduConfigPtr;
  _5 = (unsigned int) CanTpRxSduId_32(D);
  _6 = _5 * 26;
  _7 = _4 + _6;
  _8 = CanTp_CfgPtr.251_2 + _7;
  Channel_33 = _8->Channel;
  # DEBUG Channel => Channel_33
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = (int) Channel_33;
  ChannelPtr_34 = &CanTp_Channel[_9];
  # DEBUG ChannelPtr => ChannelPtr_34
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _10 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].ChannelLockFlag;
  if (_10 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 137224205]:
  # DEBUG ChannelLockSuccess => 0
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 137224205]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].ChannelLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ChannelLockSuccess => 1
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanTp_SCHM_CANTP_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].NSduId;
  if (_11 == CanTpRxSduId_32(D))
    goto <bb 9>; [51.12%]
  else
    goto <bb 15>; [48.88%]

  <bb 9> [local count: 70149014]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTp_CfgPtr.254_12 = CanTp_CfgPtr;
  _13 = CanTp_CfgPtr.254_12->RxNSduConfigPtr;
  _14 = (unsigned int) _11;
  _15 = _14 * 26;
  _16 = _13 + _15;
  _17 = CanTp_CfgPtr.254_12 + _16;
  _18 = _17->AddressingFormat;
  if (_18 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 35074507]:
  # DEBUG BEGIN_STMT
  # DEBUG MaxCfLength => 6

  <bb 11> [local count: 70149014]:
  # MaxCfLength_28 = PHI <7(9), 6(10)>
  # DEBUG MaxCfLength => MaxCfLength_28
  # DEBUG BEGIN_STMT
  _19 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].State;
  switch (_19) <default: <L28> [25.00%], case 64: <L42> [25.00%], case 65 ... 66: <L43> [25.00%], case 76 ... 78: <L43> [25.00%], case 84 ... 86: <L42> [25.00%], case 194: <L20> [25.00%], case 204 ... 206: <L43> [25.00%]>

  <bb 12> [local count: 17537253]:
<L20>:
  # DEBUG BEGIN_STMT
  _20 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].TotalLength;
  _21 = (int) _20;
  _22 = MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].ProcessedLength;
  _23 = (int) _22;
  _24 = _21 - _23;
  _25 = (int) MaxCfLength_28;
  if (_24 <= _25)
    goto <bb 16>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 17537253]:
<L28>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 9, 160);
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 26305880]:
<L43>:
  # DEBUG ret_result => NULL
  # DEBUG BEGIN_STMT
  CanTp_StopChannel (ChannelPtr_34, 1, 1);
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 67075191]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (35, 0, 9, 160);
  # DEBUG BEGIN_STMT
  # DEBUG ret_result => 1

  <bb 16> [local count: 137224205]:
  # ret_result_26 = PHI <0(14), 1(15), 1(11), 1(13), 1(12)>
<L42>:
  # DEBUG ret_result => ret_result_26
  # DEBUG BEGIN_STMT
  CanTp_HandlePostponedFlags (ChannelPtr_34);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct CanTp_ChannelType *)&CanTp_Channel][_9].ChannelLockFlag = 0;

  <bb 17> [local count: 1073741824]:
  # ret_result_27 = PHI <1(3), 1(5), 1(7), ret_result_26(16)>
  # DEBUG ret_result => ret_result_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_result_27;

}


