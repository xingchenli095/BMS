
IPA constant propagation start:
Determining dynamic type for call: _6 = FlexCAN_IsListenOnlyModeEnabled (base_4);
  Starting walk at: _6 = FlexCAN_IsListenOnlyModeEnabled (base_4);
  instance pointer: base_4  Outer instance pointer: base_4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: FlexCAN_SetListenOnlyMode (pBase_13, enable_19(D));
  Starting walk at: FlexCAN_SetListenOnlyMode (pBase_13, enable_19(D));
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_10 ();
  Function call may change dynamic type:freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: _5 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: _5 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: _4 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: _4 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_9, _4);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_9, _4);
  instance pointer: pBase_9  Outer instance pointer: pBase_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: _5 = FlexCAN_GetBuffStatusFlag (pBase_11, _4);
  Starting walk at: _5 = FlexCAN_GetBuffStatusFlag (pBase_11, _4);
  instance pointer: pBase_11  Outer instance pointer: pBase_11 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: FlexCAN_SetTxArbitrationStartDelay (pBase_13, value_19(D));
  Starting walk at: FlexCAN_SetTxArbitrationStartDelay (pBase_13, value_19(D));
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_17 ();
  Function call may change dynamic type:freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: freeze_20 = FlexCAN_IsFreezeMode (pBase_16);
  Starting walk at: freeze_20 = FlexCAN_IsFreezeMode (pBase_16);
  instance pointer: pBase_16  Outer instance pointer: pBase_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_18 = FlexCAN_Enable (pBase_16);
Determining dynamic type for call: FlexCAN_SetTDCOffset (pBase_16, enable_22(D), offset_23(D));
  Starting walk at: FlexCAN_SetTDCOffset (pBase_16, enable_22(D), offset_23(D));
  instance pointer: pBase_16  Outer instance pointer: pBase_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16 ();
  Function call may change dynamic type:freeze_20 = FlexCAN_IsFreezeMode (pBase_16);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_18 = FlexCAN_Enable (pBase_16);
Determining dynamic type for call: FlexCAN_SetEnhancedTDCOffset (pBase_16, enable_22(D), offset_23(D));
  Starting walk at: FlexCAN_SetEnhancedTDCOffset (pBase_16, enable_22(D), offset_23(D));
  instance pointer: pBase_16  Outer instance pointer: pBase_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16 ();
  Function call may change dynamic type:freeze_20 = FlexCAN_IsFreezeMode (pBase_16);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_18 = FlexCAN_Enable (pBase_16);
Determining dynamic type for call: FlexCAN_GetFDTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetFDTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: pBase_12  Outer instance pointer: pBase_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetFDTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetFDTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: bitrate_10(D)  Outer instance pointer: bitrate_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetEnhancedDataTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetEnhancedDataTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: pBase_12  Outer instance pointer: pBase_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetEnhancedDataTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetEnhancedDataTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: bitrate_10(D)  Outer instance pointer: bitrate_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  Starting walk at: FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  instance pointer: pBase_22  Outer instance pointer: pBase_22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_24 = FlexCAN_Enable (pBase_22);
Determining dynamic type for call: FlexCAN_SetFDTimeSegments (pBase_22, bitrate_20(D));
  Starting walk at: FlexCAN_SetFDTimeSegments (pBase_22, bitrate_20(D));
  instance pointer: pBase_22  Outer instance pointer: pBase_22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_24 = FlexCAN_Enable (pBase_22);
Determining dynamic type for call: FlexCAN_SetFDTimeSegments (pBase_22, bitrate_20(D));
  Starting walk at: FlexCAN_SetFDTimeSegments (pBase_22, bitrate_20(D));
  instance pointer: bitrate_20(D)  Outer instance pointer: bitrate_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_24 = FlexCAN_Enable (pBase_22);
Determining dynamic type for call: FlexCAN_SetEnhancedDataTimeSegments (pBase_22, bitrate_20(D));
  Starting walk at: FlexCAN_SetEnhancedDataTimeSegments (pBase_22, bitrate_20(D));
  instance pointer: pBase_22  Outer instance pointer: pBase_22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_24 = FlexCAN_Enable (pBase_22);
Determining dynamic type for call: FlexCAN_SetEnhancedDataTimeSegments (pBase_22, bitrate_20(D));
  Starting walk at: FlexCAN_SetEnhancedDataTimeSegments (pBase_22, bitrate_20(D));
  instance pointer: bitrate_20(D)  Outer instance pointer: bitrate_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_24 = FlexCAN_Enable (pBase_22);
Determining dynamic type for call: FlexCAN_GetTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: pBase_12  Outer instance pointer: pBase_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: bitrate_10(D)  Outer instance pointer: bitrate_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetExtendedTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetExtendedTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: pBase_12  Outer instance pointer: pBase_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetExtendedTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetExtendedTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: bitrate_10(D)  Outer instance pointer: bitrate_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetEnhancedNominalTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetEnhancedNominalTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: pBase_12  Outer instance pointer: pBase_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_GetEnhancedNominalTimeSegments (pBase_12, bitrate_10(D));
  Starting walk at: FlexCAN_GetEnhancedNominalTimeSegments (pBase_12, bitrate_10(D));
  instance pointer: bitrate_10(D)  Outer instance pointer: bitrate_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Starting walk at: FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  instance pointer: pBase_21  Outer instance pointer: pBase_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: FlexCAN_SetTimeSegments (pBase_21, bitrate_19(D));
  Starting walk at: FlexCAN_SetTimeSegments (pBase_21, bitrate_19(D));
  instance pointer: pBase_21  Outer instance pointer: pBase_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: FlexCAN_SetTimeSegments (pBase_21, bitrate_19(D));
  Starting walk at: FlexCAN_SetTimeSegments (pBase_21, bitrate_19(D));
  instance pointer: bitrate_19(D)  Outer instance pointer: bitrate_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: FlexCAN_SetExtendedTimeSegments (pBase_21, bitrate_19(D));
  Starting walk at: FlexCAN_SetExtendedTimeSegments (pBase_21, bitrate_19(D));
  instance pointer: pBase_21  Outer instance pointer: pBase_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: FlexCAN_SetExtendedTimeSegments (pBase_21, bitrate_19(D));
  Starting walk at: FlexCAN_SetExtendedTimeSegments (pBase_21, bitrate_19(D));
  instance pointer: bitrate_19(D)  Outer instance pointer: bitrate_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: FlexCAN_SetEnhancedNominalTimeSegments (pBase_21, bitrate_19(D));
  Starting walk at: FlexCAN_SetEnhancedNominalTimeSegments (pBase_21, bitrate_19(D));
  instance pointer: pBase_21  Outer instance pointer: pBase_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: FlexCAN_SetEnhancedNominalTimeSegments (pBase_21, bitrate_19(D));
  Starting walk at: FlexCAN_SetEnhancedNominalTimeSegments (pBase_21, bitrate_19(D));
  instance pointer: bitrate_19(D)  Outer instance pointer: bitrate_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_23 = FlexCAN_Enable (pBase_21);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: FlexCAN_SetRxMaskType (pBase_13, type_19(D));
  Starting walk at: FlexCAN_SetRxMaskType (pBase_13, type_19(D));
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08 ();
  Function call may change dynamic type:freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: _5 = FlexCAN_GetBuffStatusFlag (base_20, _4);
  Starting walk at: _5 = FlexCAN_GetBuffStatusFlag (base_20, _4);
  instance pointer: base_20  Outer instance pointer: base_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);
  instance pointer: base_20  Outer instance pointer: base_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = FlexCAN_GetMsgBuffTimestamp (base_20, _4);
  Function call may change dynamic type:_5 = FlexCAN_GetBuffStatusFlag (base_20, _4);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);
  instance pointer: base_20  Outer instance pointer: base_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_GetMsgBuff (base_20, _4, &mb);
  Function call may change dynamic type:FlexCAN_LockRxMsgBuff (base_20, _4);
  Function call may change dynamic type:_5 = FlexCAN_GetBuffStatusFlag (base_20, _4);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: _14 (instance_18(D), 4, _4, state_21);
  Starting walk at: _14 (instance_18(D), 4, _4, state_21);
  instance pointer: state_21  Outer instance pointer: state_21 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_GetMsgBuff (base_20, _4, &mb);
  Function call may change dynamic type:FlexCAN_LockRxMsgBuff (base_20, _4);
  Function call may change dynamic type:_5 = FlexCAN_GetBuffStatusFlag (base_20, _4);
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);
  Function call may change dynamic type:_13 = FlexCAN_GetMsgBuffTimestamp (base_20, _4);
Determining dynamic type for call: _5 (instance_9(D), 11, u32ErrStatus_14, state_12);
  Starting walk at: _5 (instance_9(D), 11, u32ErrStatus_14, state_12);
  instance pointer: state_12  Outer instance pointer: state_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: _10 = FlexCAN_GetBuffStatusFlag (base_16, _9);
  Starting walk at: _10 = FlexCAN_GetBuffStatusFlag (base_16, _9);
  instance pointer: base_16  Outer instance pointer: base_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_SetRegDefaultVal (base_7);
  Starting walk at: FlexCAN_SetRegDefaultVal (base_7);
  instance pointer: base_7  Outer instance pointer: base_7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:result_10 = FlexCAN_EnterFreezeMode (base_7);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: freeze_21 = FlexCAN_IsFreezeMode (pBase_15);
  Starting walk at: freeze_21 = FlexCAN_IsFreezeMode (pBase_15);
  instance pointer: pBase_15  Outer instance pointer: pBase_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:result_19 = FlexCAN_Enable (pBase_15);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_12);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_12);
  instance pointer: pBase_12  Outer instance pointer: pBase_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_12);
Determining dynamic type for call: result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  Starting walk at: result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  instance pointer: tx_info_39(D)  Outer instance pointer: tx_info_39(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
Determining dynamic type for call: result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  Starting walk at: result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  instance pointer: mb_data_43(D)  Outer instance pointer: mb_data_43(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
Determining dynamic type for call: _10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
  Starting walk at: _10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
  instance pointer: base_32  Outer instance pointer: base_32 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_8 = OsIf_GetCounter (0);
  Function call may change dynamic type:result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
  Function call may change dynamic type:_50 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  instance pointer: base_32  Outer instance pointer: base_32 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_50 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
  Function call may change dynamic type:_8 = OsIf_GetCounter (0);
  Function call may change dynamic type:result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
Determining dynamic type for call: _14 = FlexCAN_GetBuffStatusFlag (base_32, _2);
  Starting walk at: _14 = FlexCAN_GetBuffStatusFlag (base_32, _2);
  instance pointer: base_32  Outer instance pointer: base_32 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_13 = OsIf_GetCounter (0);
  Function call may change dynamic type:uS2Ticks_60 = OsIf_MicrosToTicks (1000000, 0);
  Function call may change dynamic type:flexcan_mb_54 = FlexCAN_GetMsgBuffRegion (base_32, _2);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  Function call may change dynamic type:_50 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
  Function call may change dynamic type:_8 = OsIf_GetCounter (0);
  Function call may change dynamic type:result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
  Function call may change dynamic type:_65 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_14 = FlexCAN_GetBuffStatusFlag (base_32, _2);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  instance pointer: base_32  Outer instance pointer: base_32 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_50 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
  Function call may change dynamic type:_8 = OsIf_GetCounter (0);
  Function call may change dynamic type:result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  Function call may change dynamic type:DevAssert (_7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
  Function call may change dynamic type:_65 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_14 = FlexCAN_GetBuffStatusFlag (base_32, _2);
  Function call may change dynamic type:_13 = OsIf_GetCounter (0);
  Function call may change dynamic type:uS2Ticks_60 = OsIf_MicrosToTicks (1000000, 0);
  Function call may change dynamic type:flexcan_mb_54 = FlexCAN_GetMsgBuffRegion (base_32, _2);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
Determining dynamic type for call: _7 (instance_37(D), 9, u32ErrStatus_42, state_40);
  Starting walk at: _7 (instance_37(D), 9, u32ErrStatus_42, state_40);
  instance pointer: state_40  Outer instance pointer: state_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: _11 (instance_37(D), 10, u32ErrStatus_24, state_40);
  Starting walk at: _11 (instance_37(D), 10, u32ErrStatus_24, state_40);
  instance pointer: state_40  Outer instance pointer: state_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:_7 (instance_37(D), 9, u32ErrStatus_42, state_40);
Determining dynamic type for call: _15 (instance_37(D), 13, u32ErrStatus_25, state_40);
  Starting walk at: _15 (instance_37(D), 13, u32ErrStatus_25, state_40);
  instance pointer: state_40  Outer instance pointer: state_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:_7 (instance_37(D), 9, u32ErrStatus_42, state_40);
  Function call may change dynamic type:_11 (instance_37(D), 10, u32ErrStatus_24, state_40);
Determining dynamic type for call: _19 (instance_37(D), 12, u32ErrStatus_26, state_40);
  Starting walk at: _19 (instance_37(D), 12, u32ErrStatus_26, state_40);
  instance pointer: state_40  Outer instance pointer: state_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:_7 (instance_37(D), 9, u32ErrStatus_42, state_40);
  Function call may change dynamic type:_11 (instance_37(D), 10, u32ErrStatus_24, state_40);
  Function call may change dynamic type:_15 (instance_37(D), 13, u32ErrStatus_25, state_40);
Determining dynamic type for call: _23 (instance_37(D), 11, u32ErrStatus_27, state_40);
  Starting walk at: _23 (instance_37(D), 11, u32ErrStatus_27, state_40);
  instance pointer: state_40  Outer instance pointer: state_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:_7 (instance_37(D), 9, u32ErrStatus_42, state_40);
  Function call may change dynamic type:_11 (instance_37(D), 10, u32ErrStatus_24, state_40);
  Function call may change dynamic type:_15 (instance_37(D), 13, u32ErrStatus_25, state_40);
  Function call may change dynamic type:_19 (instance_37(D), 12, u32ErrStatus_26, state_40);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_20);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_20);
  instance pointer: base_30  Outer instance pointer: base_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_20);
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_4);
Determining dynamic type for call: _7 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, endMbIdx_32(D));
  Starting walk at: _7 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, endMbIdx_32(D));
  instance pointer: base_30  Outer instance pointer: base_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_4);
Determining dynamic type for call: _8 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_41);
  Starting walk at: _8 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_41);
  instance pointer: base_30  Outer instance pointer: base_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, endMbIdx_32(D));
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:_8 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_41);
Determining dynamic type for call: _12 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_44);
  Starting walk at: _12 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_44);
  instance pointer: base_30  Outer instance pointer: base_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_IRQHandlerRxFIFO (instance_28(D), mb_idx_44);
  Function call may change dynamic type:_7 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, endMbIdx_32(D));
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:_8 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_41);
  Function call may change dynamic type:FlexCAN_IRQHandlerRxMB (instance_28(D), mb_idx_44);
  Function call may change dynamic type:FlexCAN_IRQHandlerTxMB (instance_28(D), mb_idx_44);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_44);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_44);
  instance pointer: base_30  Outer instance pointer: base_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_12 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_44);
  Function call may change dynamic type:FlexCAN_IRQHandlerRxFIFO (instance_28(D), mb_idx_44);
  Function call may change dynamic type:_7 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, endMbIdx_32(D));
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:_8 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_41);
  Function call may change dynamic type:FlexCAN_IRQHandlerRxMB (instance_28(D), mb_idx_44);
  Function call may change dynamic type:FlexCAN_IRQHandlerTxMB (instance_28(D), mb_idx_44);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_28, _12);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_28, _12);
  instance pointer: pBase_28  Outer instance pointer: pBase_28 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_18 = FlexCAN_IsMbOutOfRange (pBase_28, mb_idx_34(D), _16, _17);
  Function call may change dynamic type:DevAssert (_15);
  Function call may change dynamic type:_13 = FlexCAN_GetMbPayloadSize (pBase_28, _12);
  Function call may change dynamic type:DevAssert (_9);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: freeze_24 = FlexCAN_IsFreezeMode (pBase_15);
  Starting walk at: freeze_24 = FlexCAN_IsFreezeMode (pBase_15);
  instance pointer: pBase_15  Outer instance pointer: pBase_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_6);
  Function call may change dynamic type:DevAssert (_4);
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (pBase_15);
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:result_22 = FlexCAN_Enable (pBase_15);
Determining dynamic type for call: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  Starting walk at: freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  instance pointer: pBase_13  Outer instance pointer: pBase_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_2);
  Function call may change dynamic type:result_15 = FlexCAN_Enable (pBase_13);
Determining dynamic type for call: result_14 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  Starting walk at: result_14 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  instance pointer: data_12(D)  Outer instance pointer: data_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (base_9);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: result_19 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  Starting walk at: result_19 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  instance pointer: data_12(D)  Outer instance pointer: data_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (base_9);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: result_23 = FlexCAN_StartRxMessageEnhancedFifoData (instance_7(D), data_12(D));
  Starting walk at: result_23 = FlexCAN_StartRxMessageEnhancedFifoData (instance_7(D), data_12(D));
  instance pointer: data_12(D)  Outer instance pointer: data_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (base_9);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: result_14 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  Starting walk at: result_14 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  instance pointer: data_12(D)  Outer instance pointer: data_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (base_10);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: result_16 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  Starting walk at: result_16 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  instance pointer: data_12(D)  Outer instance pointer: data_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (base_10);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: result_18 = FlexCAN_StartRxMessageEnhancedFifoData (instance_7(D), data_12(D));
  Starting walk at: result_18 = FlexCAN_StartRxMessageEnhancedFifoData (instance_7(D), data_12(D));
  instance pointer: data_12(D)  Outer instance pointer: data_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = FlexCAN_IsEnhancedRxFifoAvailable (base_10);
  Function call may change dynamic type:DevAssert (_2);
Determining dynamic type for call: result_39 = FlexCAN_StartRxMessageBufferData (instance_31(D), mb_idx_35(D), data_36(D), isPolling_37(D));
  Starting walk at: result_39 = FlexCAN_StartRxMessageBufferData (instance_31(D), mb_idx_35(D), data_36(D), isPolling_37(D));
  instance pointer: data_36(D)  Outer instance pointer: data_36(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:mS2Ticks_30 = OsIf_MicrosToTicks (_1, 0);
Determining dynamic type for call: _9 = FlexCAN_GetBuffStatusFlag (base_34, _8);
  Starting walk at: _9 = FlexCAN_GetBuffStatusFlag (base_34, _8);
  instance pointer: base_34  Outer instance pointer: base_34 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = OsIf_GetCounter (0);
  Function call may change dynamic type:result_39 = FlexCAN_StartRxMessageBufferData (instance_31(D), mb_idx_35(D), data_36(D), isPolling_37(D));
  Function call may change dynamic type:DevAssert (_3);
  Function call may change dynamic type:mS2Ticks_30 = OsIf_MicrosToTicks (_1, 0);
  Function call may change dynamic type:result_41 = FlexCAN_SetMsgBuffIntCmd (base_34, instance_31(D), _5, 1, _6);
  Function call may change dynamic type:_47 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_9 = FlexCAN_GetBuffStatusFlag (base_34, _8);
  Function call may change dynamic type:FlexCAN_IRQHandlerRxMB (instance_31(D), _8);
Determining dynamic type for call: result_17 = FlexCAN_StartRxMessageBufferData (instance_8(D), mb_idx_13(D), data_14(D), isPolling_15(D));
  Starting walk at: result_17 = FlexCAN_StartRxMessageBufferData (instance_8(D), mb_idx_13(D), data_14(D), isPolling_15(D));
  instance pointer: data_14(D)  Outer instance pointer: data_14(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_17, _9);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_17, _9);
  instance pointer: base_17  Outer instance pointer: base_17 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_8 = FlexCAN_IsMbOutOfRange (base_17, mb_idx_22(D), _6, _7);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: _6 = FlexCAN_IsListenOnlyModeEnabled (base_14);
  Starting walk at: _6 = FlexCAN_IsListenOnlyModeEnabled (base_14);
  instance pointer: base_14  Outer instance pointer: base_14 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: result_24 = FlexCAN_StartSendData (instance_12(D), mb_idx_20(D), tx_info_17(D), msg_id_21(D), mb_data_22(D));
  Starting walk at: result_24 = FlexCAN_StartSendData (instance_12(D), mb_idx_20(D), tx_info_17(D), msg_id_21(D), mb_data_22(D));
  instance pointer: tx_info_17(D)  Outer instance pointer: tx_info_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = FlexCAN_IsListenOnlyModeEnabled (base_14);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: result_24 = FlexCAN_StartSendData (instance_12(D), mb_idx_20(D), tx_info_17(D), msg_id_21(D), mb_data_22(D));
  Starting walk at: result_24 = FlexCAN_StartSendData (instance_12(D), mb_idx_20(D), tx_info_17(D), msg_id_21(D), mb_data_22(D));
  instance pointer: mb_data_22(D)  Outer instance pointer: mb_data_22(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = FlexCAN_IsListenOnlyModeEnabled (base_14);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  Starting walk at: eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  instance pointer: pBase_18  Outer instance pointer: pBase_18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  Starting walk at: eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  instance pointer: Flexcan_Ip_pData_20(D)  Outer instance pointer: Flexcan_Ip_pData_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_InitBaudrate (pBase_18, Flexcan_Ip_pData_20(D));
  Starting walk at: FlexCAN_InitBaudrate (pBase_18, Flexcan_Ip_pData_20(D));
  instance pointer: pBase_18  Outer instance pointer: pBase_18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_InitBaudrate (pBase_18, Flexcan_Ip_pData_20(D));
  Starting walk at: FlexCAN_InitBaudrate (pBase_18, Flexcan_Ip_pData_20(D));
  instance pointer: Flexcan_Ip_pData_20(D)  Outer instance pointer: Flexcan_Ip_pData_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_14, _9);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_14, _9);
  instance pointer: pBase_14  Outer instance pointer: pBase_14 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FLEXCAN_ClearMsgBuffIntCmd (pBase_14, u8Instance_12(D), 5, _7);
  Function call may change dynamic type:flexcan_mb_28 = FlexCAN_GetMsgBuffRegion (pBase_14, _6);
  Function call may change dynamic type:flexcan_mb_19 = FlexCAN_GetMsgBuffRegion (pBase_14, _8);
Determining dynamic type for call: _4 = FlexCAN_GetBuffStatusFlag (pBase_16, _2);
  Starting walk at: _4 = FlexCAN_GetBuffStatusFlag (pBase_16, _2);
  instance pointer: pBase_16  Outer instance pointer: pBase_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 = OsIf_GetCounter (0);
  Function call may change dynamic type:uS2Ticks_27 = OsIf_MicrosToTicks (1000000, 0);
  Function call may change dynamic type:flexcan_mb_21 = FlexCAN_GetMsgBuffRegion (pBase_16, _2);
  Function call may change dynamic type:_32 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_4 = FlexCAN_GetBuffStatusFlag (pBase_16, _2);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_16, _2);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_16, _2);
  instance pointer: pBase_16  Outer instance pointer: pBase_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_32 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:_4 = FlexCAN_GetBuffStatusFlag (pBase_16, _2);
  Function call may change dynamic type:_3 = OsIf_GetCounter (0);
  Function call may change dynamic type:uS2Ticks_27 = OsIf_MicrosToTicks (1000000, 0);
  Function call may change dynamic type:flexcan_mb_21 = FlexCAN_GetMsgBuffRegion (pBase_16, _2);
Determining dynamic type for call: _9 (instance_13(D), 8, 255, state_16);
  Starting walk at: _9 (instance_13(D), 8, 255, state_16);
  instance pointer: state_16  Outer instance pointer: state_16 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _8 (instance_13(D), 7, 255, state_16);
  Starting walk at: _8 (instance_13(D), 7, 255, state_16);
  instance pointer: state_16  Outer instance pointer: state_16 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 (instance_13(D), 6, 255, state_16);
  Starting walk at: _7 (instance_13(D), 6, 255, state_16);
  instance pointer: state_16  Outer instance pointer: state_16 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _5 (instance_13(D), 5, 255, state_16);
  Starting walk at: _5 (instance_13(D), 5, 255, state_16);
  instance pointer: state_16  Outer instance pointer: state_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ReadEnhancedRxFifo (base_15, _4);
Determining dynamic type for call: _3 = FlexCAN_GetEnhancedRxFIFOStatusFlag (base_13, u32intType_6);
  Starting walk at: _3 = FlexCAN_GetEnhancedRxFIFOStatusFlag (base_13, u32intType_6);
  instance pointer: base_13  Outer instance pointer: base_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 = FlexCAN_GetEnhancedRxFIFOStatusFlag (base_13, u32intType_6);
  Function call may change dynamic type:FlexCAN_IRQHandlerEnhancedRxFIFO (u8Instance_11(D), u32intType_6);
  Function call may change dynamic type:_4 = FlexCAN_GetEnhancedRxFIFOIntStatusFlag (base_13, u32intType_6);
Determining dynamic type for call: _4 = FlexCAN_GetEnhancedRxFIFOIntStatusFlag (base_13, u32intType_6);
  Starting walk at: _4 = FlexCAN_GetEnhancedRxFIFOIntStatusFlag (base_13, u32intType_6);
  instance pointer: base_13  Outer instance pointer: base_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 = FlexCAN_GetEnhancedRxFIFOStatusFlag (base_13, u32intType_6);
  Function call may change dynamic type:_3 = FlexCAN_GetEnhancedRxFIFOStatusFlag (base_13, u32intType_6);
  Function call may change dynamic type:FlexCAN_IRQHandlerEnhancedRxFIFO (u8Instance_11(D), u32intType_6);
  Function call may change dynamic type:_4 = FlexCAN_GetEnhancedRxFIFOIntStatusFlag (base_13, u32intType_6);
Determining dynamic type for call: _2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  Starting walk at: _2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  instance pointer: base_13  Outer instance pointer: base_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  Function call may change dynamic type:_3 = FlexCAN_GetBuffStatusImask (base_13, mb_idx_7);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_13, mb_idx_7);
Determining dynamic type for call: _3 = FlexCAN_GetBuffStatusImask (base_13, mb_idx_7);
  Starting walk at: _3 = FlexCAN_GetBuffStatusImask (base_13, mb_idx_7);
  instance pointer: base_13  Outer instance pointer: base_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  Function call may change dynamic type:_2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  Function call may change dynamic type:_3 = FlexCAN_GetBuffStatusImask (base_13, mb_idx_7);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_13, mb_idx_7);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_13, mb_idx_7);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_13, mb_idx_7);
  instance pointer: base_13  Outer instance pointer: base_13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 = FlexCAN_GetBuffStatusImask (base_13, mb_idx_7);
  Function call may change dynamic type:_2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  Function call may change dynamic type:_2 = FlexCAN_GetBuffStatusFlag (base_13, mb_idx_7);
  Function call may change dynamic type:_3 = FlexCAN_GetBuffStatusImask (base_13, mb_idx_7);
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_13, mb_idx_7);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  instance pointer: base_14  Outer instance pointer: base_14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _8 (instance_12(D), 3, 0, state_15);
  Starting walk at: _8 (instance_12(D), 3, 0, state_15);
  instance pointer: state_15  Outer instance pointer: state_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  instance pointer: base_14  Outer instance pointer: base_14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _7 (instance_12(D), 2, 0, state_15);
  Starting walk at: _7 (instance_12(D), 2, 0, state_15);
  instance pointer: state_15  Outer instance pointer: state_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  instance pointer: base_14  Outer instance pointer: base_14 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ReadRxFifo (base_14, _4);
Determining dynamic type for call: _5 (instance_12(D), 1, 0, state_15);
  Starting walk at: _5 (instance_12(D), 1, 0, state_15);
  instance pointer: state_15  Outer instance pointer: state_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  Function call may change dynamic type:FlexCAN_ReadRxFifo (base_14, _4);
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_18, u32MbIdx_20(D));
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_18, u32MbIdx_20(D));
  instance pointer: pBase_18  Outer instance pointer: pBase_18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_7 = FlexCAN_GetMsgBuffTimestamp (pBase_18, u32MbIdx_20(D));
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_18, u32MbIdx_20(D));
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (pBase_18, u32MbIdx_20(D));
  instance pointer: pBase_18  Outer instance pointer: pBase_18 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_GetMsgBuff (pBase_18, u32MbIdx_20(D), &mb);
  Function call may change dynamic type:FlexCAN_LockRxMsgBuff (pBase_18, u32MbIdx_20(D));
Determining dynamic type for call: _8 (u8Instance_16(D), 4, u32MbIdx_20(D), pState_19);
  Starting walk at: _8 (u8Instance_16(D), 4, u32MbIdx_20(D), pState_19);
  instance pointer: pState_19  Outer instance pointer: pState_19 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (pBase_18, u32MbIdx_20(D));
  Function call may change dynamic type:FlexCAN_GetMsgBuff (pBase_18, u32MbIdx_20(D), &mb);
  Function call may change dynamic type:FlexCAN_LockRxMsgBuff (pBase_18, u32MbIdx_20(D));
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (pBase_18, u32MbIdx_20(D));
  Function call may change dynamic type:_7 = FlexCAN_GetMsgBuffTimestamp (pBase_18, u32MbIdx_20(D));
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_15, mb_idx_17(D));
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_15, mb_idx_17(D));
  instance pointer: base_15  Outer instance pointer: base_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_GetMsgBuff (base_15, mb_idx_17(D), _3);
  Function call may change dynamic type:FlexCAN_LockRxMsgBuff (base_15, mb_idx_17(D));
Determining dynamic type for call: _4 (instance_13(D), 0, mb_idx_17(D), state_16);
  Starting walk at: _4 (instance_13(D), 0, mb_idx_17(D), state_16);
  instance pointer: state_16  Outer instance pointer: state_16 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ClearMsgBuffIntStatusFlag (base_15, mb_idx_17(D));
  Function call may change dynamic type:FlexCAN_GetMsgBuff (base_15, mb_idx_17(D), _3);
  Function call may change dynamic type:FlexCAN_LockRxMsgBuff (base_15, mb_idx_17(D));
Determining dynamic type for call: FlexCAN_ClearMsgBuffIntStatusFlag (base_30, _8);
  Starting walk at: FlexCAN_ClearMsgBuffIntStatusFlag (base_30, _8);
  instance pointer: base_30  Outer instance pointer: base_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_14 = FlexCAN_IsMbOutOfRange (base_30, mb_idx_34(D), _12, _13);
  Function call may change dynamic type:DevAssert (_11);
  Function call may change dynamic type:_9 = FlexCAN_GetMbPayloadSize (base_30, _8);
  Function call may change dynamic type:DevAssert (_5);
  Function call may change dynamic type:DevAssert (_3);
Determining dynamic type for call: _5 = FlexCAN_GetBuffStatusFlag (pBase_26, u32intType_15);
  Starting walk at: _5 = FlexCAN_GetBuffStatusFlag (pBase_26, u32intType_15);
  instance pointer: pBase_26  Outer instance pointer: pBase_26 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = FlexCAN_GetBuffStatusFlag (pBase_26, u32intType_15);
  Function call may change dynamic type:_3 = OsIf_GetCounter (0);
  Function call may change dynamic type:mS2Ticks_30 = OsIf_MicrosToTicks (_2, 0);
  Function call may change dynamic type:_37 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:FlexCAN_IRQHandlerRxFIFO (u8Instance_23(D), u32intType_15);
Determining dynamic type for call: _5 = FlexCAN_GetEnhancedRxFIFOStatusFlag (pBase_23, u32intType_12);
  Starting walk at: _5 = FlexCAN_GetEnhancedRxFIFOStatusFlag (pBase_23, u32intType_12);
  instance pointer: pBase_23  Outer instance pointer: pBase_23 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 = FlexCAN_GetEnhancedRxFIFOStatusFlag (pBase_23, u32intType_12);
  Function call may change dynamic type:_3 = OsIf_GetCounter (0);
  Function call may change dynamic type:mS2Ticks_27 = OsIf_MicrosToTicks (_2, 0);
  Function call may change dynamic type:_34 = OsIf_GetElapsed (&timeStart, 0);
  Function call may change dynamic type:FlexCAN_IRQHandlerEnhancedRxFIFO (u8Instance_20(D), u32intType_12);
Determining dynamic type for call: FlexCAN_EnableExtCbt (pBase_17(D), _1);
  Starting walk at: FlexCAN_EnableExtCbt (pBase_17(D), _1);
  instance pointer: pBase_17(D)  Outer instance pointer: pBase_17(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: FlexCAN_SetTimeSegments (pBase_17(D), _13);
  Starting walk at: FlexCAN_SetTimeSegments (pBase_17(D), _13);
  instance pointer: pBase_17(D)  Outer instance pointer: pBase_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetTimeSegments (pBase_17(D), _13);
  Starting walk at: FlexCAN_SetTimeSegments (pBase_17(D), _13);
  instance pointer: _13  Outer instance pointer: Flexcan_Ip_pData_16(D) offset: 384 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetExtendedTimeSegments (pBase_17(D), _11);
  Starting walk at: FlexCAN_SetExtendedTimeSegments (pBase_17(D), _11);
  instance pointer: pBase_17(D)  Outer instance pointer: pBase_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetExtendedTimeSegments (pBase_17(D), _11);
  Starting walk at: FlexCAN_SetExtendedTimeSegments (pBase_17(D), _11);
  instance pointer: _11  Outer instance pointer: Flexcan_Ip_pData_16(D) offset: 384 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetFDTimeSegments (pBase_17(D), _12);
  Starting walk at: FlexCAN_SetFDTimeSegments (pBase_17(D), _12);
  instance pointer: pBase_17(D)  Outer instance pointer: pBase_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetExtendedTimeSegments (pBase_17(D), _11);
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetFDTimeSegments (pBase_17(D), _12);
  Starting walk at: FlexCAN_SetFDTimeSegments (pBase_17(D), _12);
  instance pointer: _12  Outer instance pointer: Flexcan_Ip_pData_16(D) offset: 544 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetExtendedTimeSegments (pBase_17(D), _11);
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetEnhancedNominalTimeSegments (pBase_17(D), _5);
  Starting walk at: FlexCAN_SetEnhancedNominalTimeSegments (pBase_17(D), _5);
  instance pointer: pBase_17(D)  Outer instance pointer: pBase_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetEnhancedNominalTimeSegments (pBase_17(D), _5);
  Starting walk at: FlexCAN_SetEnhancedNominalTimeSegments (pBase_17(D), _5);
  instance pointer: _5  Outer instance pointer: Flexcan_Ip_pData_16(D) offset: 384 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetEnhancedDataTimeSegments (pBase_17(D), _7);
  Starting walk at: FlexCAN_SetEnhancedDataTimeSegments (pBase_17(D), _7);
  instance pointer: pBase_17(D)  Outer instance pointer: pBase_17(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetEnhancedNominalTimeSegments (pBase_17(D), _5);
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_SetEnhancedDataTimeSegments (pBase_17(D), _7);
  Starting walk at: FlexCAN_SetEnhancedDataTimeSegments (pBase_17(D), _7);
  instance pointer: _7  Outer instance pointer: Flexcan_Ip_pData_16(D) offset: 544 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_SetEnhancedNominalTimeSegments (pBase_17(D), _5);
  Function call may change dynamic type:FlexCAN_EnableExtCbt (pBase_17(D), _1);
Determining dynamic type for call: FlexCAN_DisableMemErrorDetection (pBase_11(D));
  Starting walk at: FlexCAN_DisableMemErrorDetection (pBase_11(D));
  instance pointer: pBase_11(D)  Outer instance pointer: pBase_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:eResult_19 = FlexCAN_Init (pBase_11(D));
  Function call may change dynamic type:eResult_16 = FlexCAN_Disable (pBase_11(D));
  Function call may change dynamic type:eResult_14 = FlexCAN_EnterFreezeMode (pBase_11(D));
Determining dynamic type for call: FlexCAN_SetFDEnabled (pBase_11(D), _3, _4);
  Starting walk at: FlexCAN_SetFDEnabled (pBase_11(D), _3, _4);
  instance pointer: pBase_11(D)  Outer instance pointer: pBase_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_DisableMemErrorDetection (pBase_11(D));
  Function call may change dynamic type:eResult_19 = FlexCAN_Init (pBase_11(D));
  Function call may change dynamic type:eResult_16 = FlexCAN_Disable (pBase_11(D));
  Function call may change dynamic type:eResult_14 = FlexCAN_EnterFreezeMode (pBase_11(D));
Determining dynamic type for call: eResult_27 = FlexCAN_InitCtroll (pBase_11(D), Flexcan_Ip_pData_21(D));
  Starting walk at: eResult_27 = FlexCAN_InitCtroll (pBase_11(D), Flexcan_Ip_pData_21(D));
  instance pointer: pBase_11(D)  Outer instance pointer: pBase_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ResetImaskBuff (Instance_24(D));
  Function call may change dynamic type:FlexCAN_ConfigCtrlOptions (pBase_11(D), _5);
  Function call may change dynamic type:FlexCAN_SetFDEnabled (pBase_11(D), _3, _4);
  Function call may change dynamic type:FlexCAN_DisableMemErrorDetection (pBase_11(D));
  Function call may change dynamic type:eResult_19 = FlexCAN_Init (pBase_11(D));
  Function call may change dynamic type:eResult_16 = FlexCAN_Disable (pBase_11(D));
  Function call may change dynamic type:eResult_14 = FlexCAN_EnterFreezeMode (pBase_11(D));
Determining dynamic type for call: eResult_27 = FlexCAN_InitCtroll (pBase_11(D), Flexcan_Ip_pData_21(D));
  Starting walk at: eResult_27 = FlexCAN_InitCtroll (pBase_11(D), Flexcan_Ip_pData_21(D));
  instance pointer: Flexcan_Ip_pData_21(D)  Outer instance pointer: Flexcan_Ip_pData_21(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:FlexCAN_ResetImaskBuff (Instance_24(D));
  Function call may change dynamic type:FlexCAN_ConfigCtrlOptions (pBase_11(D), _5);
  Function call may change dynamic type:FlexCAN_SetFDEnabled (pBase_11(D), _3, _4);
  Function call may change dynamic type:FlexCAN_DisableMemErrorDetection (pBase_11(D));
  Function call may change dynamic type:eResult_19 = FlexCAN_Init (pBase_11(D));
  Function call may change dynamic type:eResult_16 = FlexCAN_Disable (pBase_11(D));
  Function call may change dynamic type:eResult_14 = FlexCAN_EnterFreezeMode (pBase_11(D));
Determining dynamic type for call: eResult_11 = FlexCAN_InitRxFifo (pBase_9(D), Flexcan_Ip_pData_8(D));
  Starting walk at: eResult_11 = FlexCAN_InitRxFifo (pBase_9(D), Flexcan_Ip_pData_8(D));
  instance pointer: pBase_9(D)  Outer instance pointer: pBase_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eResult_11 = FlexCAN_InitRxFifo (pBase_9(D), Flexcan_Ip_pData_8(D));
  Starting walk at: eResult_11 = FlexCAN_InitRxFifo (pBase_9(D), Flexcan_Ip_pData_8(D));
  instance pointer: Flexcan_Ip_pData_8(D)  Outer instance pointer: Flexcan_Ip_pData_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: flag_13 = FlexCAN_GetMsgBuffIntStatusFlag.part.0 (base_10(D), msgBuffIdx_8(D));
  Starting walk at: flag_13 = FlexCAN_GetMsgBuffIntStatusFlag.part.0 (base_10(D), msgBuffIdx_8(D));
  instance pointer: base_10(D)  Outer instance pointer: base_10(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FlexCAN_GetMsgBuffIntStatusFlag.part.0/175:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_20/174:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_20/173:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_10/172:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_10/171:
  Jump functions of caller  FLEXCAN_ClearMsgBuffIntCmd/170:
  Jump functions of caller  FlexCAN_SetErrIntCmd/169:
  Jump functions of caller  FlexCAN_DisableInterrupts/168:
  Jump functions of caller  FlexCAN_EnableInterrupts/167:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_17/166:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_17/165:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_16/164:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16/163:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_15/162:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15/161:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09/160:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09/159:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_14/158:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14/157:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_08/156:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08/155:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_07/154:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07/153:
  Jump functions of caller  FlexCAN_GetMaxMbNum/152:
  Jump functions of caller  FlexCAN_ExitFreezeMode/151:
  Jump functions of caller  FlexCAN_GetMsgBuffTimestamp/150:
  Jump functions of caller  FlexCAN_SetEnhancedRxFifoFilter/149:
  Jump functions of caller  FlexCAN_SetRxFifoFilter/148:
  Jump functions of caller  FlexCAN_Enable/147:
  Jump functions of caller  FlexCAN_ReadRxFifo/146:
  Jump functions of caller  FlexCAN_ReadEnhancedRxFifo/145:
  Jump functions of caller  FlexCAN_IsEnhancedRxFifoAvailable/144:
  Jump functions of caller  FlexCAN_GetMsgBuff/143:
  Jump functions of caller  FlexCAN_LockRxMsgBuff/142:
  Jump functions of caller  OsIf_GetElapsed/141:
  Jump functions of caller  OsIf_GetCounter/140:
  Jump functions of caller  OsIf_MicrosToTicks/139:
  Jump functions of caller  FlexCAN_SetRxMsgBuff/138:
  Jump functions of caller  FlexCAN_SetTxMsgBuff/137:
  Jump functions of caller  FlexCAN_GetMsgBuffRegion/136:
  Jump functions of caller  FlexCAN_IsMbOutOfRange/135:
  Jump functions of caller  FlexCAN_GetMbPayloadSize/134:
  Jump functions of caller  FlexCAN_SetMsgBuffIntCmd/133:
  Jump functions of caller  FlexCAN_EnableEnhancedRxFifo/132:
  Jump functions of caller  FlexCAN_EnableRxFifo/131:
  Jump functions of caller  FlexCAN_SetMaxMsgBuffNum/130:
  Jump functions of caller  FlexCAN_SetPayloadSize/129:
  Jump functions of caller  FlexCAN_ResetImaskBuff/128:
  Jump functions of caller  FlexCAN_ConfigCtrlOptions/127:
  Jump functions of caller  FlexCAN_Init/126:
  Jump functions of caller  FlexCAN_Disable/125:
  Jump functions of caller  FlexCAN_EnterFreezeMode/124:
  Jump functions of caller  FlexCAN_SetOperationMode/123:
  Jump functions of caller  FlexCAN_Ip_ManualBusOffRecovery/122:
    callsite  FlexCAN_Ip_ManualBusOffRecovery/122 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetListenOnlyMode/121:
    callsite  FlexCAN_Ip_GetListenOnlyMode/121 -> FlexCAN_IsListenOnlyModeEnabled/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_Ip_SetListenOnlyMode_Privileged/120:
    callsite  FlexCAN_Ip_SetListenOnlyMode_Privileged/120 -> FlexCAN_SetListenOnlyMode/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_SetListenOnlyMode_Privileged/120 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetListenOnlyMode_Privileged/120 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetRxMb15Mask_Privileged/119:
    callsite  FlexCAN_Ip_SetRxMb15Mask_Privileged/119 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxMb15Mask_Privileged/119 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetRxMb14Mask_Privileged/118:
    callsite  FlexCAN_Ip_SetRxMb14Mask_Privileged/118 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxMb14Mask_Privileged/118 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_AbortTransfer/117:
    callsite  FlexCAN_Ip_AbortTransfer/117 -> FlexCAN_AbortRxTransfer/69 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_AbortTransfer/117 -> FlexCAN_AbortTxTransfer/68 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_AbortTransfer/117 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_AbortTransfer/117 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetErrorInt_Privileged/116:
    callsite  FlexCAN_Ip_SetErrorInt_Privileged/116 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetErrorInt_Privileged/116 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetErrorInt_Privileged/116 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_DisableInterrupts_Privileged/115:
    callsite  FlexCAN_Ip_DisableInterrupts_Privileged/115 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_EnableInterrupts_Privileged/114:
    callsite  FlexCAN_Ip_EnableInterrupts_Privileged/114 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ClearBuffStatusFlag/113:
    callsite  FlexCAN_Ip_ClearBuffStatusFlag/113 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 254]
    callsite  FlexCAN_Ip_ClearBuffStatusFlag/113 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetBuffStatusFlag/112:
    callsite  FlexCAN_Ip_GetBuffStatusFlag/112 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 254]
    callsite  FlexCAN_Ip_GetBuffStatusFlag/112 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111:
    callsite  FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 -> FlexCAN_SetTxArbitrationStartDelay/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetTDCOffset_Privileged/110:
    callsite  FlexCAN_Ip_SetTDCOffset_Privileged/110 -> FlexCAN_SetTDCOffset/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_SetTDCOffset_Privileged/110 -> FlexCAN_SetEnhancedTDCOffset/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_SetTDCOffset_Privileged/110 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetTDCOffset_Privileged/110 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetBitrateFD/109:
    callsite  FlexCAN_Ip_GetBitrateFD/109 -> FlexCAN_GetFDTimeSegments/21 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_GetBitrateFD/109 -> FlexCAN_GetEnhancedDataTimeSegments/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_GetBitrateFD/109 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_GetBitrateFD/109 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetBitrateCbt_Privileged/108:
    callsite  FlexCAN_Ip_SetBitrateCbt_Privileged/108 -> FlexCAN_SetFDTimeSegments/12 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrateCbt_Privileged/108 -> FlexCAN_SetEnhancedDataTimeSegments/17 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrateCbt_Privileged/108 -> FlexCAN_SetFDEnabled/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrateCbt_Privileged/108 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_SetBitrateCbt_Privileged/108 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetTDCValue/107:
    callsite  FlexCAN_Ip_GetTDCValue/107 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetTDCFail/106:
    callsite  FlexCAN_Ip_GetTDCFail/106 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ClearTDCFail/105:
    callsite  FlexCAN_Ip_ClearTDCFail/105 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetBitrate/104:
    callsite  FlexCAN_Ip_GetBitrate/104 -> FlexCAN_GetTimeSegments/20 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_GetBitrate/104 -> FlexCAN_GetExtendedTimeSegments/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_GetBitrate/104 -> FlexCAN_GetEnhancedNominalTimeSegments/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_GetBitrate/104 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_GetBitrate/104 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetBitrate_Privileged/103:
    callsite  FlexCAN_Ip_SetBitrate_Privileged/103 -> FlexCAN_SetTimeSegments/13 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrate_Privileged/103 -> FlexCAN_SetExtendedTimeSegments/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrate_Privileged/103 -> FlexCAN_SetEnhancedNominalTimeSegments/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrate_Privileged/103 -> FlexCAN_EnhCbtEnable/24 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_SetBitrate_Privileged/103 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_SetBitrate_Privileged/103 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetRxMaskType_Privileged/102:
    callsite  FlexCAN_Ip_SetRxMaskType_Privileged/102 -> FlexCAN_SetRxMaskType/42 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxMaskType_Privileged/102 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxMaskType_Privileged/102 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetStopMode_Privileged/101:
    callsite  FlexCAN_Ip_SetStopMode_Privileged/101 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetStartMode_Privileged/100:
    callsite  FlexCAN_Ip_SetStartMode_Privileged/100 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetStartMode_Privileged/99:
  Jump functions of caller  FlexCAN_Ip_GetStopMode_Privileged/98:
  Jump functions of caller  FlexCAN_Ip_MainFunctionWrite/97:
    callsite  FlexCAN_Ip_MainFunctionWrite/97 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_MainFunctionWrite/97 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_MainFunctionWrite/97 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_MainFunctionWrite/97 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    indirect simple callsite, calling param -1, offset 0, for stmt _14 (instance_18(D), 4, _4, state_21);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_Ip_MainFunctionBusOff_Privileged/96:
    callsite  FlexCAN_Ip_MainFunctionBusOff_Privileged/96 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    indirect simple callsite, calling param -1, offset 0, for stmt _5 (instance_9(D), 11, u32ErrStatus_14, state_12);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 11
         value: 0xb, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_Ip_MainFunctionRead/95:
    callsite  FlexCAN_Ip_MainFunctionRead/95 -> FlexCAN_IRQHandlerRxMB/62 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 254]
    callsite  FlexCAN_Ip_MainFunctionRead/95 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 254]
    callsite  FlexCAN_Ip_MainFunctionRead/95 -> FlexCAN_IRQHandlerRxFIFO/64 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
    callsite  FlexCAN_Ip_MainFunctionRead/95 -> FlexCAN_IRQHandlerEnhancedRxFIFO/67 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 28
         value: 0x1c, mask: 0x0
         Unknown VR
    callsite  FlexCAN_Ip_MainFunctionRead/95 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_MainFunctionRead/95 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_Deinit_Privileged/94:
    callsite  FlexCAN_Ip_Deinit_Privileged/94 -> FlexCAN_SetRegDefaultVal/48 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_Deinit_Privileged/94 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93:
    callsite  FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SetRxIndividualMask_Privileged/92:
    callsite  FlexCAN_Ip_SetRxIndividualMask_Privileged/92 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxIndividualMask_Privileged/92 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ExitFreezeMode_Privileged/91:
  Jump functions of caller  FlexCAN_Ip_EnterFreezeMode_Privileged/90:
  Jump functions of caller  FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89:
    callsite  FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_SendBlocking/88:
    callsite  FlexCAN_Ip_SendBlocking/88 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_SendBlocking/88 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_SendBlocking/88 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_SendBlocking/88 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_SendBlocking/88 -> FlexCAN_StartSendData/60 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_SendBlocking/88 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_SendBlocking/88 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Busoff_Error_IRQHandler/87:
    callsite  FlexCAN_Busoff_Error_IRQHandler/87 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    indirect simple callsite, calling param -1, offset 0, for stmt _23 (instance_37(D), 11, u32ErrStatus_27, state_40);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 11
         value: 0xb, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _19 (instance_37(D), 12, u32ErrStatus_26, state_40);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _15 (instance_37(D), 13, u32ErrStatus_25, state_40);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 13
         value: 0xd, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _11 (instance_37(D), 10, u32ErrStatus_24, state_40);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 10
         value: 0xa, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (instance_37(D), 9, u32ErrStatus_42, state_40);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 9
         value: 0x9, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_Ip_GetControllerRxErrorCounter/86:
    callsite  FlexCAN_Ip_GetControllerRxErrorCounter/86 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetControllerTxErrorCounter/85:
    callsite  FlexCAN_Ip_GetControllerTxErrorCounter/85 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetErrorStatus/84:
    callsite  FlexCAN_Ip_GetErrorStatus/84 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ClearErrorStatus/83:
    callsite  FlexCAN_Ip_ClearErrorStatus/83 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_IRQHandler/82:
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_ProcessSpuriousInterruptMB/65 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_GetMsgBuffIntStatusFlag/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_IRQHandlerTxMB/63 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_IRQHandlerRxMB/62 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_IRQHandlerRxFIFO/64 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_GetMsgBuffIntStatusFlag/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> FlexCAN_GetMsgBuffIntStatusFlag/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandler/82 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_IRQHandler/82 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_CompleteRxMessageFifoData/81:
    callsite  FlexCAN_CompleteRxMessageFifoData/81 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_GetTransferStatus/80:
    callsite  FlexCAN_Ip_GetTransferStatus/80 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_GetTransferStatus/80 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ConfigRemoteResponseMb/79:
    callsite  FlexCAN_Ip_ConfigRemoteResponseMb/79 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_ConfigRemoteResponseMb/79 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_ConfigRemoteResponseMb/79 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_ConfigRemoteResponseMb/79 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_ConfigRemoteResponseMb/79 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78:
    callsite  FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ConfigRxFifo_Privileged/77:
    callsite  FlexCAN_Ip_ConfigRxFifo_Privileged/77 -> FlexCAN_IsFreezeMode/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_ConfigRxFifo_Privileged/77 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_RxFifoBlocking/76:
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> FlexCAN_ProccessLegacyRxFIFO/58 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> FlexCAN_StartRxMessageFifoData/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> FlexCAN_ProccessLegacyRxFIFO/58 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> FlexCAN_ProccessEnhancedRxFifo/57 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> FlexCAN_StartRxMessageFifoData/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> FlexCAN_StartRxMessageEnhancedFifoData/56 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifoBlocking/76 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_RxFifo/75:
    callsite  FlexCAN_Ip_RxFifo/75 -> FlexCAN_StartRxMessageFifoData/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifo/75 -> FlexCAN_StartRxMessageFifoData/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifo/75 -> FlexCAN_StartRxMessageEnhancedFifoData/56 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_RxFifo/75 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ReceiveBlocking/74:
    callsite  FlexCAN_Ip_ReceiveBlocking/74 -> FlexCAN_IRQHandlerRxMB/62 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_ReceiveBlocking/74 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_ReceiveBlocking/74 -> FlexCAN_StartRxMessageBufferData/59 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_ReceiveBlocking/74 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_Receive/73:
    callsite  FlexCAN_Ip_Receive/73 -> FlexCAN_StartRxMessageBufferData/59 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_Ip_Receive/73 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_ConfigRxMb/72:
    callsite  FlexCAN_Ip_ConfigRxMb/72 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_Ip_ConfigRxMb/72 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_ConfigRxMb/72 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_Send/71:
    callsite  FlexCAN_Ip_Send/71 -> FlexCAN_StartSendData/60 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_Send/71 -> FlexCAN_IsListenOnlyModeEnabled/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_Send/71 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_Send/71 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_Ip_Init_Privileged/70:
    callsite  FlexCAN_Ip_Init_Privileged/70 -> FlexCAN_InitBaudrate/54 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_Init_Privileged/70 -> FlexCAN_InitController/53 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_Ip_Init_Privileged/70 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_Ip_Init_Privileged/70 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_AbortRxTransfer/69:
    callsite  FlexCAN_AbortRxTransfer/69 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_AbortRxTransfer/69 -> RxFifoOcuppiedLastMsgBuff/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 15]
  Jump functions of caller  FlexCAN_AbortTxTransfer/68:
    callsite  FlexCAN_AbortTxTransfer/68 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_AbortTxTransfer/68 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
  Jump functions of caller  FlexCAN_IRQHandlerEnhancedRxFIFO/67:
    callsite  FlexCAN_IRQHandlerEnhancedRxFIFO/67 -> FlexCAN_CompleteRxMessageEnhancedFifoData/55 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _9 (instance_13(D), 8, 255, state_16);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
       param 2: CONST: 255
         value: 0xff, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _8 (instance_13(D), 7, 255, state_16);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 7
         value: 0x7, mask: 0x0
         Unknown VR
       param 2: CONST: 255
         value: 0xff, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (instance_13(D), 6, 255, state_16);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
       param 2: CONST: 255
         value: 0xff, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _5 (instance_13(D), 5, 255, state_16);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 2: CONST: 255
         value: 0xff, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66:
    callsite  FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 -> FlexCAN_IRQHandlerEnhancedRxFIFO/67 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
    callsite  FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 -> FlexCAN_GetEnhancedRxFIFOIntStatusFlag/47 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
    callsite  FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 -> FlexCAN_GetEnhancedRxFIFOStatusFlag/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
  Jump functions of caller  FlexCAN_ProcessSpuriousInterruptMB/65:
    callsite  FlexCAN_ProcessSpuriousInterruptMB/65 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_ProcessSpuriousInterruptMB/65 -> FlexCAN_GetBuffStatusImask/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_ProcessSpuriousInterruptMB/65 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_IRQHandlerRxFIFO/64:
    callsite  FlexCAN_IRQHandlerRxFIFO/64 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandlerRxFIFO/64 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandlerRxFIFO/64 -> FlexCAN_CompleteRxMessageFifoData/81 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_IRQHandlerRxFIFO/64 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _8 (instance_12(D), 3, 0, state_15);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (instance_12(D), 2, 0, state_15);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _5 (instance_12(D), 1, 0, state_15);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_IRQHandlerTxMB/63:
    callsite  FlexCAN_IRQHandlerTxMB/63 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_IRQHandlerTxMB/63 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _8 (u8Instance_16(D), 4, u32MbIdx_20(D), pState_19);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_IRQHandlerRxMB/62:
    callsite  FlexCAN_IRQHandlerRxMB/62 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (instance_13(D), 0, mb_idx_17(D), state_16);
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_StartRxMessageFifoData/61:
    callsite  FlexCAN_StartRxMessageFifoData/61 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_StartSendData/60:
    callsite  FlexCAN_StartSendData/60 -> FlexCAN_ClearMsgBuffIntStatusFlag/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         VR  [0, 255]
    callsite  FlexCAN_StartSendData/60 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_StartSendData/60 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
    callsite  FlexCAN_StartSendData/60 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_StartRxMessageBufferData/59:
    callsite  FlexCAN_StartRxMessageBufferData/59 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_ProccessLegacyRxFIFO/58:
    callsite  FlexCAN_ProccessLegacyRxFIFO/58 -> FlexCAN_IRQHandlerRxFIFO/64 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 7]
    callsite  FlexCAN_ProccessLegacyRxFIFO/58 -> FlexCAN_GetBuffStatusFlag/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 7]
  Jump functions of caller  FlexCAN_ProccessEnhancedRxFifo/57:
    callsite  FlexCAN_ProccessEnhancedRxFifo/57 -> FlexCAN_IRQHandlerEnhancedRxFIFO/67 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
    callsite  FlexCAN_ProccessEnhancedRxFifo/57 -> FlexCAN_GetEnhancedRxFIFOStatusFlag/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1f
         VR  [0, 31]
  Jump functions of caller  FlexCAN_StartRxMessageEnhancedFifoData/56:
    callsite  FlexCAN_StartRxMessageEnhancedFifoData/56 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_CompleteRxMessageEnhancedFifoData/55:
    callsite  FlexCAN_CompleteRxMessageEnhancedFifoData/55 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_CompleteRxMessageEnhancedFifoData/55 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_InitBaudrate/54:
    callsite  FlexCAN_InitBaudrate/54 -> FlexCAN_SetTimeSegments/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: ANCESTOR: 1, offset 384
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  FlexCAN_InitBaudrate/54 -> FlexCAN_SetFDTimeSegments/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: ANCESTOR: 1, offset 544
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  FlexCAN_InitBaudrate/54 -> FlexCAN_SetExtendedTimeSegments/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: ANCESTOR: 1, offset 384
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  FlexCAN_InitBaudrate/54 -> FlexCAN_SetEnhancedDataTimeSegments/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: ANCESTOR: 1, offset 544
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  FlexCAN_InitBaudrate/54 -> FlexCAN_SetEnhancedNominalTimeSegments/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: ANCESTOR: 1, offset 384
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  FlexCAN_InitBaudrate/54 -> FlexCAN_EnableExtCbt/25 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  FlexCAN_InitController/53:
    callsite  FlexCAN_InitController/53 -> FlexCAN_InitCtroll/52 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  FlexCAN_InitController/53 -> FlexCAN_SetFDEnabled/6 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  FlexCAN_InitController/53 -> FlexCAN_DisableMemErrorDetection/5 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_InitCtroll/52:
    callsite  FlexCAN_InitCtroll/52 -> FlexCAN_InitRxFifo/51 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  FlexCAN_InitRxFifo/51:
  Jump functions of caller  FlexCAN_SetRegDefaultVal/48:
  Jump functions of caller  FlexCAN_GetEnhancedRxFIFOIntStatusFlag/47:
  Jump functions of caller  FlexCAN_GetEnhancedRxFIFOStatusFlag/45:
  Jump functions of caller  FlexCAN_SetRxMaskType/42:
  Jump functions of caller  FlexCAN_SetTxArbitrationStartDelay/41:
  Jump functions of caller  FlexCAN_IsFreezeMode/40:
  Jump functions of caller  FlexCAN_GetMsgBuffIntStatusFlag/37:
    callsite  FlexCAN_GetMsgBuffIntStatusFlag/37 -> FlexCAN_GetMsgBuffIntStatusFlag.part.0/175 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  RxFifoOcuppiedLastMsgBuff/29:
  Jump functions of caller  FlexCAN_IsListenOnlyModeEnabled/28:
  Jump functions of caller  FlexCAN_EnableExtCbt/25:
  Jump functions of caller  FlexCAN_EnhCbtEnable/24:
  Jump functions of caller  FlexCAN_GetFDTimeSegments/21:
  Jump functions of caller  FlexCAN_GetTimeSegments/20:
  Jump functions of caller  FlexCAN_GetExtendedTimeSegments/19:
  Jump functions of caller  FlexCAN_GetEnhancedDataTimeSegments/18:
    callsite  FlexCAN_GetEnhancedDataTimeSegments/18 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_SetEnhancedDataTimeSegments/17:
    callsite  FlexCAN_SetEnhancedDataTimeSegments/17 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_GetEnhancedNominalTimeSegments/16:
  Jump functions of caller  FlexCAN_SetEnhancedNominalTimeSegments/15:
    callsite  FlexCAN_SetEnhancedNominalTimeSegments/15 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_SetExtendedTimeSegments/14:
    callsite  FlexCAN_SetExtendedTimeSegments/14 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_SetTimeSegments/13:
    callsite  FlexCAN_SetTimeSegments/13 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_SetFDTimeSegments/12:
    callsite  FlexCAN_SetFDTimeSegments/12 -> DevAssert/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
  Jump functions of caller  FlexCAN_GetBuffStatusImask/11:
  Jump functions of caller  FlexCAN_GetBuffStatusFlag/10:
  Jump functions of caller  FlexCAN_ClearMsgBuffIntStatusFlag/9:
  Jump functions of caller  FlexCAN_SetListenOnlyMode/7:
  Jump functions of caller  FlexCAN_SetFDEnabled/6:
  Jump functions of caller  FlexCAN_DisableMemErrorDetection/5:
  Jump functions of caller  FlexCAN_SetEnhancedTDCOffset/3:
  Jump functions of caller  FlexCAN_SetTDCOffset/2:
  Jump functions of caller  DevAssert/0:

 Propagating constants:

Not considering FlexCAN_Ip_ManualBusOffRecovery for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetListenOnlyMode for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetListenOnlyMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetRxMb15Mask_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetRxMb14Mask_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_AbortTransfer for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetErrorInt_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_DisableInterrupts_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_EnableInterrupts_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ClearBuffStatusFlag for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetBuffStatusFlag for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetTDCOffset_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetBitrateFD for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetBitrateCbt_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetTDCValue for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetTDCFail for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ClearTDCFail for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetBitrate for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetBitrate_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetRxMaskType_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetStopMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetStartMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetStartMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetStopMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_MainFunctionWrite for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_MainFunctionBusOff_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_MainFunctionRead for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_Deinit_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetRxFifoGlobalMask_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetRxIndividualMask_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ExitFreezeMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_EnterFreezeMode_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SetRxMbGlobalMask_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_SendBlocking for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Busoff_Error_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetControllerRxErrorCounter for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetControllerTxErrorCounter for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ClearErrorStatus for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_IRQHandler for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_GetTransferStatus for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ConfigRemoteResponseMb for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ConfigRxFifo_Privileged for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_RxFifoBlocking for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_RxFifo for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ReceiveBlocking for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_Receive for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_ConfigRxMb for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_Send for cloning; -fipa-cp-clone disabled.
Not considering FlexCAN_Ip_Init_Privileged for cloning; -fipa-cp-clone disabled.

overall_size: 3191, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: FlexCAN_GetMsgBuffIntStatusFlag.part.0/175:
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
  Node: FlexCAN_Ip_ManualBusOffRecovery/122:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetListenOnlyMode/121:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_SetListenOnlyMode_Privileged/120:
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
  Node: FlexCAN_Ip_SetRxMb15Mask_Privileged/119:
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
  Node: FlexCAN_Ip_SetRxMb14Mask_Privileged/118:
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
  Node: FlexCAN_Ip_AbortTransfer/117:
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
  Node: FlexCAN_Ip_SetErrorInt_Privileged/116:
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
  Node: FlexCAN_Ip_DisableInterrupts_Privileged/115:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_EnableInterrupts_Privileged/114:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_ClearBuffStatusFlag/113:
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
  Node: FlexCAN_Ip_GetBuffStatusFlag/112:
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
  Node: FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111:
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
  Node: FlexCAN_Ip_SetTDCOffset_Privileged/110:
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
  Node: FlexCAN_Ip_GetBitrateFD/109:
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
  Node: FlexCAN_Ip_SetBitrateCbt_Privileged/108:
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
  Node: FlexCAN_Ip_GetTDCValue/107:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetTDCFail/106:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_ClearTDCFail/105:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetBitrate/104:
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
  Node: FlexCAN_Ip_SetBitrate_Privileged/103:
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
  Node: FlexCAN_Ip_SetRxMaskType_Privileged/102:
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
  Node: FlexCAN_Ip_SetStopMode_Privileged/101:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_SetStartMode_Privileged/100:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetStartMode_Privileged/99:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetStopMode_Privileged/98:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_MainFunctionWrite/97:
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
  Node: FlexCAN_Ip_MainFunctionBusOff_Privileged/96:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_MainFunctionRead/95:
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
  Node: FlexCAN_Ip_Deinit_Privileged/94:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93:
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
  Node: FlexCAN_Ip_SetRxIndividualMask_Privileged/92:
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
  Node: FlexCAN_Ip_ExitFreezeMode_Privileged/91:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_EnterFreezeMode_Privileged/90:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89:
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
  Node: FlexCAN_Ip_SendBlocking/88:
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
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Busoff_Error_IRQHandler/87:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetControllerRxErrorCounter/86:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetControllerTxErrorCounter/85:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_GetErrorStatus/84:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FlexCAN_Ip_ClearErrorStatus/83:
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
  Node: FlexCAN_IRQHandler/82:
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
  Node: FlexCAN_CompleteRxMessageFifoData/81:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_Ip_GetTransferStatus/80:
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
  Node: FlexCAN_Ip_ConfigRemoteResponseMb/79:
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
  Node: FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78:
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
  Node: FlexCAN_Ip_ConfigRxFifo_Privileged/77:
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
  Node: FlexCAN_Ip_RxFifoBlocking/76:
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
  Node: FlexCAN_Ip_RxFifo/75:
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
  Node: FlexCAN_Ip_ReceiveBlocking/74:
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
  Node: FlexCAN_Ip_Receive/73:
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
  Node: FlexCAN_Ip_ConfigRxMb/72:
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
  Node: FlexCAN_Ip_Send/71:
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
  Node: FlexCAN_Ip_Init_Privileged/70:
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
  Node: FlexCAN_AbortRxTransfer/69:
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
  Node: FlexCAN_AbortTxTransfer/68:
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
  Node: FlexCAN_IRQHandlerEnhancedRxFIFO/67:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               28 [loc_time: 5, loc_size: 35, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1c, mask = 0x1f
         uint32 [0, 31]
        AGGS VARIABLE
  Node: FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
  Node: FlexCAN_ProcessSpuriousInterruptMB/65:
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
  Node: FlexCAN_IRQHandlerRxFIFO/64:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               5 [loc_time: 5, loc_size: 36, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_IRQHandlerTxMB/63:
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
  Node: FlexCAN_IRQHandlerRxMB/62:
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
  Node: FlexCAN_StartRxMessageFifoData/61:
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
  Node: FlexCAN_StartSendData/60:
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
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_StartRxMessageBufferData/59:
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
  Node: FlexCAN_ProccessLegacyRxFIFO/58:
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
  Node: FlexCAN_ProccessEnhancedRxFifo/57:
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
  Node: FlexCAN_StartRxMessageEnhancedFifoData/56:
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
  Node: FlexCAN_CompleteRxMessageEnhancedFifoData/55:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_InitBaudrate/54:
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
  Node: FlexCAN_InitController/53:
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
  Node: FlexCAN_InitCtroll/52:
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
  Node: FlexCAN_InitRxFifo/51:
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
  Node: FlexCAN_SetRegDefaultVal/48:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_GetEnhancedRxFIFOIntStatusFlag/47:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1f
         uint32 [0, 31]
        AGGS VARIABLE
  Node: FlexCAN_GetEnhancedRxFIFOStatusFlag/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1f
         uint32 [0, 31]
        AGGS VARIABLE
  Node: FlexCAN_SetRxMaskType/42:
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
  Node: FlexCAN_SetTxArbitrationStartDelay/41:
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
  Node: FlexCAN_IsFreezeMode/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_GetMsgBuffIntStatusFlag/37:
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
  Node: RxFifoOcuppiedLastMsgBuff/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         uint32 [0, 15]
        AGGS VARIABLE
  Node: FlexCAN_IsListenOnlyModeEnabled/28:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_EnableExtCbt/25:
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
  Node: FlexCAN_EnhCbtEnable/24:
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
  Node: FlexCAN_GetFDTimeSegments/21:
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
  Node: FlexCAN_GetTimeSegments/20:
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
  Node: FlexCAN_GetExtendedTimeSegments/19:
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
  Node: FlexCAN_GetEnhancedDataTimeSegments/18:
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
  Node: FlexCAN_SetEnhancedDataTimeSegments/17:
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
  Node: FlexCAN_GetEnhancedNominalTimeSegments/16:
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
  Node: FlexCAN_SetEnhancedNominalTimeSegments/15:
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
  Node: FlexCAN_SetExtendedTimeSegments/14:
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
  Node: FlexCAN_SetTimeSegments/13:
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
  Node: FlexCAN_SetFDTimeSegments/12:
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
  Node: FlexCAN_GetBuffStatusImask/11:
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
  Node: FlexCAN_GetBuffStatusFlag/10:
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
  Node: FlexCAN_ClearMsgBuffIntStatusFlag/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               5 [loc_time: 5, loc_size: 4, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_SetListenOnlyMode/7:
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
  Node: FlexCAN_SetFDEnabled/6:
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
  Node: FlexCAN_DisableMemErrorDetection/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: FlexCAN_SetEnhancedTDCOffset/3:
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
  Node: FlexCAN_SetTDCOffset/2:
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
  Node: DevAssert/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function FlexCAN_IRQHandlerEnhancedRxFIFO/67:
 param 1: value = 0x1c, mask = 0x1f
Propagated bits info for function FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66:
 param 1: value = 0x0, mask = 0x1
Propagated bits info for function FlexCAN_GetEnhancedRxFIFOIntStatusFlag/47:
 param 1: value = 0x0, mask = 0x1f
Propagated bits info for function FlexCAN_GetEnhancedRxFIFOStatusFlag/45:
 param 1: value = 0x0, mask = 0x1f
Propagated bits info for function RxFifoOcuppiedLastMsgBuff/29:
 param 0: value = 0x0, mask = 0xf

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FlexCAN_GetMsgBuffIntStatusFlag.part.0/175 (FlexCAN_GetMsgBuffIntStatusFlag.part.0) @07ec1d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: FlexCAN_GetMsgBuffIntStatusFlag/37 (268435457 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_20/174 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_20) @080577e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ManualBusOffRecovery/122 (114863532 (estimated locally),0.16 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_20/173 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_20) @08057700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ManualBusOffRecovery/122 (114863532 (estimated locally),0.16 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_10/172 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_10) @08057380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_10/171 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_10) @080572a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FLEXCAN_ClearMsgBuffIntCmd/170 (FLEXCAN_ClearMsgBuffIntCmd) @08041c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_AbortTransfer/117 (256463234 (estimated locally),0.24 per call) FlexCAN_AbortRxTransfer/69 (181135951 (estimated locally),0.17 per call) 
  Calls: 
FlexCAN_SetErrIntCmd/169 (FlexCAN_SetErrIntCmd) @08041a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetErrorInt_Privileged/116 (43465 (estimated locally),0.03 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (43465 (estimated locally),0.03 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (214748 (estimated locally),0.15 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (214748 (estimated locally),0.15 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (214748 (estimated locally),0.15 per call) 
  Calls: 
FlexCAN_DisableInterrupts/168 (FlexCAN_DisableInterrupts) @080417e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_DisableInterrupts_Privileged/115 (445388109 (estimated locally),0.41 per call) 
  Calls: 
FlexCAN_EnableInterrupts/167 (FlexCAN_EnableInterrupts) @08041620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_EnableInterrupts_Privileged/114 (445388109 (estimated locally),0.41 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_17/166 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_17) @080411c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_17/165 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_17) @080410e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_16/164 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_16) @08031d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetTDCOffset_Privileged/110 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16/163 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16) @08031c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetTDCOffset_Privileged/110 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_15/162 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_15) @08031700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetBitrateCbt_Privileged/108 (132875550 (estimated locally),0.12 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15/161 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15) @08031620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetBitrateCbt_Privileged/108 (132875550 (estimated locally),0.12 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09/160 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09) @080311c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ClearTDCFail/105 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09/159 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09) @080310e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ClearTDCFail/105 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_14/158 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_14) @080228c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetBitrate_Privileged/103 (265751102 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14/157 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14) @080227e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetBitrate_Privileged/103 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_08/156 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_08) @08022460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetRxMaskType_Privileged/102 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08/155 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08) @08022380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetRxMaskType_Privileged/102 (265751101 (estimated locally),0.25 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_07/154 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_07) @080220e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetStartMode_Privileged/100 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07/153 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07) @08022000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetStartMode_Privileged/100 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_GetMaxMbNum/152 (FlexCAN_GetMaxMbNum) @080098c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_SetRegDefaultVal/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_ExitFreezeMode/151 (FlexCAN_ExitFreezeMode) @080092a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetStartMode_Privileged/100 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ExitFreezeMode_Privileged/91 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_GetMsgBuffTimestamp/150 (FlexCAN_GetMsgBuffTimestamp) @07fed1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_MainFunctionWrite/97 (91268055 (estimated locally),0.08 per call) FlexCAN_IRQHandlerTxMB/63 (536870911 (estimated locally),0.50 per call) 
  Calls: 
FlexCAN_SetEnhancedRxFifoFilter/149 (FlexCAN_SetEnhancedRxFifoFilter) @07fd4b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_SetRxFifoFilter/148 (FlexCAN_SetRxFifoFilter) @07fd48c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigRxFifo_Privileged/77 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_Enable/147 (FlexCAN_Enable) @07fd47e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetRxMb15Mask_Privileged/119 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetRxMb14Mask_Privileged/118 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (376503 (estimated locally),0.26 per call) FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetTDCOffset_Privileged/110 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetBitrateCbt_Privileged/108 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetBitrate_Privileged/103 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetRxMaskType_Privileged/102 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetRxIndividualMask_Privileged/92 (115682260 (estimated locally),0.11 per call) FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_ConfigRxFifo_Privileged/77 (273804165 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_ReadRxFifo/146 (FlexCAN_ReadRxFifo) @07fd4540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_IRQHandlerRxFIFO/64 (54331336 (estimated locally),0.05 per call) 
  Calls: 
FlexCAN_ReadEnhancedRxFifo/145 (FlexCAN_ReadEnhancedRxFifo) @07fd4000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_IRQHandlerEnhancedRxFIFO/67 (73014444 (estimated locally),0.07 per call) 
  Calls: 
FlexCAN_IsEnhancedRxFifoAvailable/144 (FlexCAN_IsEnhancedRxFifoAvailable) @07fbc620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_DisableInterrupts_Privileged/115 (445388109 (estimated locally),0.41 per call) FlexCAN_Ip_EnableInterrupts_Privileged/114 (146978076 (estimated locally),0.14 per call) FlexCAN_Ip_MainFunctionRead/95 (217325345 (estimated locally),0.20 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_RxFifoBlocking/76 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_RxFifo/75 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetRegDefaultVal/48 (1073741824 (estimated locally),1.00 per call) FlexCAN_CompleteRxMessageEnhancedFifoData/55 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_GetMsgBuff/143 (FlexCAN_GetMsgBuff) @07fbc380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_MainFunctionWrite/97 (91268055 (estimated locally),0.08 per call) FlexCAN_IRQHandlerTxMB/63 (536870911 (estimated locally),0.50 per call) FlexCAN_IRQHandlerRxMB/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_LockRxMsgBuff/142 (FlexCAN_LockRxMsgBuff) @07fbc2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_MainFunctionWrite/97 (91268055 (estimated locally),0.08 per call) FlexCAN_IRQHandlerTxMB/63 (536870911 (estimated locally),0.50 per call) FlexCAN_IRQHandlerRxMB/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OsIf_GetElapsed/141 (OsIf_GetElapsed) @07fbc000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ManualBusOffRecovery/122 (1014686025 (estimated locally),1.46 per call) FlexCAN_Ip_SendBlocking/88 (113847772 (estimated locally),0.33 per call) FlexCAN_Ip_SendBlocking/88 (1014686025 (estimated locally),2.92 per call) FlexCAN_Ip_ReceiveBlocking/74 (1014686025 (estimated locally),2.92 per call) FlexCAN_ProccessLegacyRxFIFO/58 (1014686025 (estimated locally),8.83 per call) FlexCAN_ProccessEnhancedRxFifo/57 (1014686025 (estimated locally),8.83 per call) FlexCAN_AbortTxTransfer/68 (1014686025 (estimated locally),8.83 per call) 
  Calls: 
OsIf_GetCounter/140 (OsIf_GetCounter) @07fa9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ManualBusOffRecovery/122 (114863532 (estimated locally),0.16 per call) FlexCAN_Ip_SendBlocking/88 (12887688 (estimated locally),0.04 per call) FlexCAN_Ip_SendBlocking/88 (114863532 (estimated locally),0.33 per call) FlexCAN_Ip_ReceiveBlocking/74 (114863534 (estimated locally),0.33 per call) FlexCAN_ProccessLegacyRxFIFO/58 (114863532 (estimated locally),1.00 per call) FlexCAN_ProccessEnhancedRxFifo/57 (114863532 (estimated locally),1.00 per call) FlexCAN_AbortTxTransfer/68 (114863532 (estimated locally),1.00 per call) 
  Calls: 
OsIf_MicrosToTicks/139 (OsIf_MicrosToTicks) @07fa9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ManualBusOffRecovery/122 (696142619 (estimated locally),1.00 per call) FlexCAN_Ip_SendBlocking/88 (12887688 (estimated locally),0.04 per call) FlexCAN_Ip_SendBlocking/88 (348071309 (estimated locally),1.00 per call) FlexCAN_Ip_ReceiveBlocking/74 (348071315 (estimated locally),1.00 per call) FlexCAN_ProccessLegacyRxFIFO/58 (114863532 (estimated locally),1.00 per call) FlexCAN_ProccessEnhancedRxFifo/57 (114863532 (estimated locally),1.00 per call) FlexCAN_AbortTxTransfer/68 (114863532 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_SetRxMsgBuff/138 (FlexCAN_SetRxMsgBuff) @07fa99a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigRxMb/72 (686872646 (estimated locally),0.64 per call) FlexCAN_Ip_ConfigRxMb/72 (686872646 (estimated locally),0.64 per call) FlexCAN_Ip_ConfigRxMb/72 (686872646 (estimated locally),0.64 per call) 
  Calls: 
FlexCAN_SetTxMsgBuff/137 (FlexCAN_SetTxMsgBuff) @07fa9700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigRemoteResponseMb/79 (686872646 (estimated locally),0.64 per call) FlexCAN_StartSendData/60 (401518840 (estimated locally),0.37 per call) 
  Calls: 
FlexCAN_GetMsgBuffRegion/136 (FlexCAN_GetMsgBuffRegion) @07fa9620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SendBlocking/88 (12887688 (estimated locally),0.04 per call) FlexCAN_Ip_ConfigRemoteResponseMb/79 (686872646 (estimated locally),0.64 per call) FlexCAN_AbortRxTransfer/69 (524845004 (estimated locally),0.49 per call) FlexCAN_AbortRxTransfer/69 (181135951 (estimated locally),0.17 per call) FlexCAN_AbortTxTransfer/68 (114863532 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (401518840 (estimated locally),0.37 per call) 
  Calls: 
FlexCAN_IsMbOutOfRange/135 (FlexCAN_IsMbOutOfRange) @07fa9540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigRemoteResponseMb/79 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/72 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartRxMessageBufferData/59 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_GetMbPayloadSize/134 (FlexCAN_GetMbPayloadSize) @07fa9460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigRemoteResponseMb/79 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_SetMsgBuffIntCmd/133 (FlexCAN_SetMsgBuffIntCmd) @07fa91c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_ConfigRemoteResponseMb/79 (226667973 (estimated locally),0.21 per call) FlexCAN_Ip_ReceiveBlocking/74 (39053601 (estimated locally),0.11 per call) FlexCAN_Ip_ReceiveBlocking/74 (57431767 (estimated locally),0.17 per call) FlexCAN_Ip_Receive/73 (177167401 (estimated locally),0.17 per call) FlexCAN_Ip_Send/71 (58465242 (estimated locally),0.05 per call) FlexCAN_IRQHandlerTxMB/63 (145607982 (estimated locally),0.14 per call) FlexCAN_IRQHandlerTxMB/63 (354334802 (estimated locally),0.33 per call) FlexCAN_ProccessLegacyRxFIFO/58 (19089400 (estimated locally),0.17 per call) FlexCAN_ProccessLegacyRxFIFO/58 (19089400 (estimated locally),0.17 per call) FlexCAN_ProccessLegacyRxFIFO/58 (19089400 (estimated locally),0.17 per call) FlexCAN_IRQHandlerRxMB/62 (90733332 (estimated locally),0.08 per call) FlexCAN_IRQHandlerRxMB/62 (177167401 (estimated locally),0.17 per call) FlexCAN_CompleteRxMessageFifoData/81 (354334802 (estimated locally),0.33 per call) FlexCAN_CompleteRxMessageFifoData/81 (354334802 (estimated locally),0.33 per call) FlexCAN_CompleteRxMessageFifoData/81 (354334802 (estimated locally),0.33 per call) FlexCAN_StartRxMessageFifoData/61 (115158811 (estimated locally),0.11 per call) FlexCAN_StartRxMessageFifoData/61 (115158811 (estimated locally),0.11 per call) FlexCAN_StartRxMessageFifoData/61 (115158811 (estimated locally),0.11 per call) 
  Calls: 
FlexCAN_EnableEnhancedRxFifo/132 (FlexCAN_EnableEnhancedRxFifo) @07f999a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitRxFifo/51 (295869560 (estimated locally),0.28 per call) 
  Calls: 
FlexCAN_EnableRxFifo/131 (FlexCAN_EnableRxFifo) @07f998c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitRxFifo/51 (354334802 (estimated locally),0.33 per call) 
  Calls: 
FlexCAN_SetMaxMsgBuffNum/130 (FlexCAN_SetMaxMsgBuffNum) @07f99620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitCtroll/52 (536870913 (estimated locally),0.50 per call) 
  Calls: 
FlexCAN_SetPayloadSize/129 (FlexCAN_SetPayloadSize) @07f99540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitCtroll/52 (536870913 (estimated locally),0.50 per call) 
  Calls: 
FlexCAN_ResetImaskBuff/128 (FlexCAN_ResetImaskBuff) @07f990e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) 
  Calls: 
FlexCAN_ConfigCtrlOptions/127 (FlexCAN_ConfigCtrlOptions) @07f99000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) 
  Calls: 
FlexCAN_Init/126 (FlexCAN_Init) @07f8dee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_InitController/53 (756987987 (estimated locally),0.71 per call) 
  Calls: 
FlexCAN_Disable/125 (FlexCAN_Disable) @07f8de00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetRxMb15Mask_Privileged/119 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetRxMb14Mask_Privileged/118 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (349188 (estimated locally),0.24 per call) FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetTDCOffset_Privileged/110 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetBitrateCbt_Privileged/108 (217325345 (estimated locally),0.20 per call) FlexCAN_Ip_SetBitrate_Privileged/103 (217325345 (estimated locally),0.20 per call) FlexCAN_Ip_SetRxMaskType_Privileged/102 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_SetStopMode_Privileged/101 (354334802 (estimated locally),0.33 per call) FlexCAN_Ip_Deinit_Privileged/94 (354334802 (estimated locally),0.33 per call) FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_SetRxIndividualMask_Privileged/92 (115682260 (estimated locally),0.11 per call) FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 (273804165 (estimated locally),0.26 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (273804165 (estimated locally),0.25 per call) FlexCAN_Ip_ConfigRxFifo_Privileged/77 (273804165 (estimated locally),0.25 per call) FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) FlexCAN_InitController/53 (209057533 (estimated locally),0.19 per call) FlexCAN_InitCtroll/52 (177167401 (estimated locally),0.17 per call) FlexCAN_InitCtroll/52 (536870913 (estimated locally),0.50 per call) 
  Calls: 
FlexCAN_EnterFreezeMode/124 (FlexCAN_EnterFreezeMode) @07f8dd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_SetStopMode_Privileged/101 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_Deinit_Privileged/94 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_EnterFreezeMode_Privileged/90 (1073741824 (estimated locally),1.00 per call) FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) FlexCAN_InitController/53 (633507677 (estimated locally),0.59 per call) FlexCAN_InitCtroll/52 (177167401 (estimated locally),0.17 per call) FlexCAN_InitCtroll/52 (536870913 (estimated locally),0.50 per call) 
  Calls: 
FlexCAN_SetOperationMode/123 (FlexCAN_SetOperationMode) @07f8da80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FlexCAN_Ip_Init_Privileged/70 (16535624 (estimated locally),0.33 per call) 
  Calls: 
FlexCAN_Ip_ManualBusOffRecovery/122 (FlexCAN_Ip_ManualBusOffRecovery) @07f8d8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:696142619 (estimated locally) body optimize_size
  Called by: 
  Calls: OsIf_GetElapsed/141 (1014686025 (estimated locally),1.46 per call) OsIf_GetCounter/140 (114863532 (estimated locally),0.16 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_20/174 (114863532 (estimated locally),0.16 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_20/173 (114863532 (estimated locally),0.16 per call) DevAssert/0 (696142619 (estimated locally),1.00 per call) OsIf_MicrosToTicks/139 (696142619 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetListenOnlyMode/121 (FlexCAN_Ip_GetListenOnlyMode) @07f8d700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IsListenOnlyModeEnabled/28 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (FlexCAN_Ip_SetListenOnlyMode_Privileged) @07f8d540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.25 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_10/172 (265751101 (estimated locally),0.25 per call) FlexCAN_SetListenOnlyMode/7 (265751101 (estimated locally),0.25 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_10/171 (265751101 (estimated locally),0.25 per call) FlexCAN_IsFreezeMode/40 (1073741824 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetRxMb15Mask_Privileged/119 (FlexCAN_Ip_SetRxMb15Mask_Privileged) @07f8d380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.26 per call) FlexCAN_IsFreezeMode/40 (1073741823 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.26 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetRxMb14Mask_Privileged/118 (FlexCAN_Ip_SetRxMb14Mask_Privileged) @07f8d1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.26 per call) FlexCAN_IsFreezeMode/40 (1073741823 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.26 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_AbortTransfer/117 (FlexCAN_Ip_AbortTransfer) @07f8d000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_AbortRxTransfer/69 (51908159 (estimated locally),0.05 per call) FlexCAN_AbortTxTransfer/68 (51908159 (estimated locally),0.05 per call) FLEXCAN_ClearMsgBuffIntCmd/170 (256463234 (estimated locally),0.24 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetErrorInt_Privileged/116 (FlexCAN_Ip_SetErrorInt_Privileged) @07f82e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1476482 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (349188 (estimated locally),0.24 per call) FlexCAN_SetErrIntCmd/169 (43465 (estimated locally),0.03 per call) FlexCAN_IsFreezeMode/40 (214748 (estimated locally),0.15 per call) FlexCAN_SetErrIntCmd/169 (43465 (estimated locally),0.03 per call) FlexCAN_IsFreezeMode/40 (214748 (estimated locally),0.15 per call) FlexCAN_SetErrIntCmd/169 (214748 (estimated locally),0.15 per call) FlexCAN_SetErrIntCmd/169 (214748 (estimated locally),0.15 per call) FlexCAN_SetErrIntCmd/169 (214748 (estimated locally),0.15 per call) FlexCAN_Enable/147 (376503 (estimated locally),0.26 per call) DevAssert/0 (1476482 (estimated locally),1.00 per call) 
FlexCAN_Ip_DisableInterrupts_Privileged/115 (FlexCAN_Ip_DisableInterrupts_Privileged) @07f82c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IsEnhancedRxFifoAvailable/144 (445388109 (estimated locally),0.41 per call) FlexCAN_DisableInterrupts/168 (445388109 (estimated locally),0.41 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_EnableInterrupts_Privileged/114 (FlexCAN_Ip_EnableInterrupts_Privileged) @07f82a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IsEnhancedRxFifoAvailable/144 (146978076 (estimated locally),0.14 per call) FlexCAN_EnableInterrupts/167 (445388109 (estimated locally),0.41 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ClearBuffStatusFlag/113 (FlexCAN_Ip_ClearBuffStatusFlag) @07f828c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (524845004 (estimated locally),0.49 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetBuffStatusFlag/112 (FlexCAN_Ip_GetBuffStatusFlag) @07f82700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetBuffStatusFlag/10 (524845004 (estimated locally),0.49 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged) @07f82540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.25 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_17/166 (265751101 (estimated locally),0.25 per call) FlexCAN_SetTxArbitrationStartDelay/41 (265751101 (estimated locally),0.25 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_17/165 (265751101 (estimated locally),0.25 per call) FlexCAN_IsFreezeMode/40 (1073741824 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetTDCOffset_Privileged/110 (FlexCAN_Ip_SetTDCOffset_Privileged) @07f82380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.25 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_16/164 (265751101 (estimated locally),0.25 per call) FlexCAN_SetTDCOffset/2 (132875551 (estimated locally),0.12 per call) FlexCAN_SetEnhancedTDCOffset/3 (132875551 (estimated locally),0.12 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16/163 (265751101 (estimated locally),0.25 per call) FlexCAN_IsFreezeMode/40 (1073741824 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetBitrateFD/109 (FlexCAN_Ip_GetBitrateFD) @07f821c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetFDTimeSegments/21 (536870913 (estimated locally),0.50 per call) FlexCAN_GetEnhancedDataTimeSegments/18 (536870913 (estimated locally),0.50 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetBitrateCbt_Privileged/108 (FlexCAN_Ip_SetBitrateCbt_Privileged) @07f82000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (217325345 (estimated locally),0.20 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_15/162 (132875550 (estimated locally),0.12 per call) FlexCAN_SetFDTimeSegments/12 (66437775 (estimated locally),0.06 per call) FlexCAN_SetEnhancedDataTimeSegments/17 (66437775 (estimated locally),0.06 per call) FlexCAN_SetFDEnabled/6 (132875550 (estimated locally),0.12 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15/161 (132875550 (estimated locally),0.12 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.26 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetTDCValue/107 (FlexCAN_Ip_GetTDCValue) @07f78e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetTDCFail/106 (FlexCAN_Ip_GetTDCFail) @07f78c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ClearTDCFail/105 (FlexCAN_Ip_ClearTDCFail) @07f78a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09/160 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09/159 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetBitrate/104 (FlexCAN_Ip_GetBitrate) @07f788c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_GetTimeSegments/20 (424450143 (estimated locally),0.40 per call) FlexCAN_GetExtendedTimeSegments/19 (294956879 (estimated locally),0.27 per call) FlexCAN_GetEnhancedNominalTimeSegments/16 (354334802 (estimated locally),0.33 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetBitrate_Privileged/103 (FlexCAN_Ip_SetBitrate_Privileged) @07f78700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (217325345 (estimated locally),0.20 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_14/158 (265751102 (estimated locally),0.25 per call) FlexCAN_SetTimeSegments/13 (125058216 (estimated locally),0.12 per call) FlexCAN_SetExtendedTimeSegments/14 (86904862 (estimated locally),0.08 per call) FlexCAN_SetEnhancedNominalTimeSegments/15 (53788023 (estimated locally),0.05 per call) FlexCAN_EnhCbtEnable/24 (265751101 (estimated locally),0.25 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14/157 (265751101 (estimated locally),0.25 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetRxMaskType_Privileged/102 (FlexCAN_Ip_SetRxMaskType_Privileged) @07f78540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.25 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_08/156 (265751101 (estimated locally),0.25 per call) FlexCAN_SetRxMaskType/42 (265751101 (estimated locally),0.25 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08/155 (265751101 (estimated locally),0.25 per call) FlexCAN_IsFreezeMode/40 (1073741824 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetStopMode_Privileged/101 (FlexCAN_Ip_SetStopMode_Privileged) @07f78380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (354334802 (estimated locally),0.33 per call) FlexCAN_EnterFreezeMode/124 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetStartMode_Privileged/100 (FlexCAN_Ip_SetStartMode_Privileged) @07f781c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ExitFreezeMode/151 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_07/154 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07/153 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetStartMode_Privileged/99 (FlexCAN_Ip_GetStartMode_Privileged) @07f78000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_Ip_GetStopMode_Privileged/98 (FlexCAN_Ip_GetStopMode_Privileged) @07f6fe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FlexCAN_Ip_MainFunctionWrite/97 (FlexCAN_Ip_MainFunctionWrite) @07f6fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (91268055 (estimated locally),0.08 per call) FlexCAN_GetMsgBuffTimestamp/150 (91268055 (estimated locally),0.08 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (18472654 (estimated locally),0.02 per call) FlexCAN_GetMsgBuff/143 (91268055 (estimated locally),0.08 per call) FlexCAN_LockRxMsgBuff/142 (91268055 (estimated locally),0.08 per call) FlexCAN_GetBuffStatusFlag/10 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(127775277 (estimated locally),0.12 per call) 
FlexCAN_Ip_MainFunctionBusOff_Privileged/96 (FlexCAN_Ip_MainFunctionBusOff_Privileged) @07f6fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(375809639 (estimated locally),0.35 per call) 
FlexCAN_Ip_MainFunctionRead/95 (FlexCAN_Ip_MainFunctionRead) @07f6f8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_IRQHandlerRxMB/62 (64516662 (estimated locally),0.06 per call) FlexCAN_GetBuffStatusFlag/10 (637516427 (estimated locally),0.59 per call) FlexCAN_IRQHandlerRxFIFO/64 (36118509 (estimated locally),0.03 per call) FlexCAN_IRQHandlerEnhancedRxFIFO/67 (9997401 (estimated locally),0.01 per call) FlexCAN_IsEnhancedRxFifoAvailable/144 (217325345 (estimated locally),0.20 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_Deinit_Privileged/94 (FlexCAN_Ip_Deinit_Privileged) @07f6f700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (354334802 (estimated locally),0.33 per call) FlexCAN_SetRegDefaultVal/48 (354334802 (estimated locally),0.33 per call) FlexCAN_EnterFreezeMode/124 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 (FlexCAN_Ip_SetRxFifoGlobalMask_Privileged) @07f6f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.26 per call) FlexCAN_IsFreezeMode/40 (1073741823 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.26 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetRxIndividualMask_Privileged/92 (FlexCAN_Ip_SetRxIndividualMask_Privileged) @07f6f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (115682260 (estimated locally),0.11 per call) FlexCAN_IsFreezeMode/40 (453655920 (estimated locally),0.42 per call) FlexCAN_Enable/147 (115682260 (estimated locally),0.11 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_ExitFreezeMode_Privileged/91 (FlexCAN_Ip_ExitFreezeMode_Privileged) @07f6f1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ExitFreezeMode/151 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_EnterFreezeMode_Privileged/90 (FlexCAN_Ip_EnterFreezeMode_Privileged) @07f6f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_EnterFreezeMode/124 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 (FlexCAN_Ip_SetRxMbGlobalMask_Privileged) @07f64e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.26 per call) FlexCAN_IsFreezeMode/40 (1073741823 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.26 per call) DevAssert/0 (1073741823 (estimated locally),1.00 per call) 
FlexCAN_Ip_SendBlocking/88 (FlexCAN_Ip_SendBlocking) @07f64c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (114863532 (estimated locally),0.33 per call) FlexCAN_GetBuffStatusFlag/10 (120473832 (estimated locally),0.35 per call) OsIf_GetElapsed/141 (113847772 (estimated locally),0.33 per call) OsIf_GetCounter/140 (12887688 (estimated locally),0.04 per call) OsIf_MicrosToTicks/139 (12887688 (estimated locally),0.04 per call) FlexCAN_GetMsgBuffRegion/136 (12887688 (estimated locally),0.04 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (12887688 (estimated locally),0.04 per call) FlexCAN_GetBuffStatusFlag/10 (1073741824 (estimated locally),3.08 per call) OsIf_GetElapsed/141 (1014686025 (estimated locally),2.92 per call) OsIf_GetCounter/140 (114863532 (estimated locally),0.33 per call) FlexCAN_StartSendData/60 (348071309 (estimated locally),1.00 per call) DevAssert/0 (348071309 (estimated locally),1.00 per call) DevAssert/0 (348071309 (estimated locally),1.00 per call) OsIf_MicrosToTicks/139 (348071309 (estimated locally),1.00 per call) 
FlexCAN_Busoff_Error_IRQHandler/87 (FlexCAN_Busoff_Error_IRQHandler) @07f64a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(131533373 (estimated locally),0.12 per call) 
   Indirect call(131533373 (estimated locally),0.12 per call) 
   Indirect call(131533373 (estimated locally),0.12 per call) 
   Indirect call(107857366 (estimated locally),0.10 per call) 
   Indirect call(131533373 (estimated locally),0.12 per call) 
FlexCAN_Ip_GetControllerRxErrorCounter/86 (FlexCAN_Ip_GetControllerRxErrorCounter) @07f648c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetControllerTxErrorCounter/85 (FlexCAN_Ip_GetControllerTxErrorCounter) @07f64700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetErrorStatus/84 (FlexCAN_Ip_GetErrorStatus) @07f64540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ClearErrorStatus/83 (FlexCAN_Ip_ClearErrorStatus) @07f64380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_IRQHandler/82 (FlexCAN_IRQHandler) @07f641c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:214818650 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (808727776 (estimated locally),3.76 per call) FlexCAN_ProcessSpuriousInterruptMB/65 (23248379 (estimated locally),0.11 per call) FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (5283952 (estimated locally),0.02 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (9476241 (estimated locally),0.04 per call) FlexCAN_GetMsgBuffIntStatusFlag/37 (57431766 (estimated locally),0.27 per call) FlexCAN_IRQHandlerTxMB/63 (11624189 (estimated locally),0.05 per call) FlexCAN_IRQHandlerRxMB/62 (10319955 (estimated locally),0.05 per call) FlexCAN_IRQHandlerRxFIFO/64 (6443844 (estimated locally),0.03 per call) FlexCAN_GetMsgBuffIntStatusFlag/37 (958878294 (estimated locally),4.46 per call) FlexCAN_GetMsgBuffIntStatusFlag/37 (114863532 (estimated locally),0.53 per call) DevAssert/0 (214818650 (estimated locally),1.00 per call) DevAssert/0 (214818650 (estimated locally),1.00 per call) 
FlexCAN_CompleteRxMessageFifoData/81 (FlexCAN_CompleteRxMessageFifoData) @07f64000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_IRQHandlerRxFIFO/64 (17929341 (estimated locally),0.02 per call) 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (354334802 (estimated locally),0.33 per call) FlexCAN_SetMsgBuffIntCmd/133 (354334802 (estimated locally),0.33 per call) FlexCAN_SetMsgBuffIntCmd/133 (354334802 (estimated locally),0.33 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_GetTransferStatus/80 (FlexCAN_Ip_GetTransferStatus) @07f54e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ConfigRemoteResponseMb/79 (FlexCAN_Ip_ConfigRemoteResponseMb) @07f54c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (226667973 (estimated locally),0.21 per call) FlexCAN_SetTxMsgBuff/137 (686872646 (estimated locally),0.64 per call) FlexCAN_GetMsgBuffRegion/136 (686872646 (estimated locally),0.64 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (686872646 (estimated locally),0.64 per call) FlexCAN_IsMbOutOfRange/135 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) FlexCAN_GetMbPayloadSize/134 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged) @07f54a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.25 per call) FlexCAN_SetEnhancedRxFifoFilter/149 (265751101 (estimated locally),0.25 per call) FlexCAN_IsFreezeMode/40 (1073741824 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) FlexCAN_IsEnhancedRxFifoAvailable/144 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ConfigRxFifo_Privileged/77 (FlexCAN_Ip_ConfigRxFifo_Privileged) @07f548c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_Disable/125 (273804165 (estimated locally),0.25 per call) FlexCAN_SetRxFifoFilter/148 (265751101 (estimated locally),0.25 per call) FlexCAN_IsFreezeMode/40 (1073741824 (estimated locally),1.00 per call) FlexCAN_Enable/147 (273804165 (estimated locally),0.25 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_RxFifoBlocking/76 (FlexCAN_Ip_RxFifoBlocking) @07f54700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_ProccessLegacyRxFIFO/58 (173198851 (estimated locally),0.16 per call) FlexCAN_StartRxMessageFifoData/61 (524845004 (estimated locally),0.49 per call) FlexCAN_ProccessLegacyRxFIFO/58 (106870211 (estimated locally),0.10 per call) FlexCAN_ProccessEnhancedRxFifo/57 (74265740 (estimated locally),0.07 per call) FlexCAN_StartRxMessageFifoData/61 (323849124 (estimated locally),0.30 per call) FlexCAN_StartRxMessageEnhancedFifoData/56 (225047696 (estimated locally),0.21 per call) FlexCAN_IsEnhancedRxFifoAvailable/144 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_RxFifo/75 (FlexCAN_Ip_RxFifo) @07f54540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_StartRxMessageFifoData/61 (524845004 (estimated locally),0.49 per call) FlexCAN_StartRxMessageFifoData/61 (323849124 (estimated locally),0.30 per call) FlexCAN_StartRxMessageEnhancedFifoData/56 (225047696 (estimated locally),0.21 per call) FlexCAN_IsEnhancedRxFifoAvailable/144 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ReceiveBlocking/74 (FlexCAN_Ip_ReceiveBlocking) @07f54380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxState/50 (read)Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: available
  Function flags: count:348071315 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (39053601 (estimated locally),0.11 per call) OsIf_GetElapsed/141 (1014686025 (estimated locally),2.92 per call) FlexCAN_IRQHandlerRxMB/62 (67772909 (estimated locally),0.19 per call) FlexCAN_GetBuffStatusFlag/10 (205372451 (estimated locally),0.59 per call) OsIf_GetCounter/140 (114863534 (estimated locally),0.33 per call) FlexCAN_SetMsgBuffIntCmd/133 (57431767 (estimated locally),0.17 per call) FlexCAN_StartRxMessageBufferData/59 (348071315 (estimated locally),1.00 per call) DevAssert/0 (348071315 (estimated locally),1.00 per call) OsIf_MicrosToTicks/139 (348071315 (estimated locally),1.00 per call) 
FlexCAN_Ip_Receive/73 (FlexCAN_Ip_Receive) @07f541c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (177167401 (estimated locally),0.17 per call) FlexCAN_StartRxMessageBufferData/59 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_ConfigRxMb/72 (FlexCAN_Ip_ConfigRxMb) @07f54000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_SetRxMsgBuff/138 (686872646 (estimated locally),0.64 per call) FlexCAN_SetRxMsgBuff/138 (686872646 (estimated locally),0.64 per call) FlexCAN_SetRxMsgBuff/138 (686872646 (estimated locally),0.64 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (686872646 (estimated locally),0.64 per call) FlexCAN_IsMbOutOfRange/135 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_Send/71 (FlexCAN_Ip_Send) @07f46e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (58465242 (estimated locally),0.05 per call) FlexCAN_StartSendData/60 (354334802 (estimated locally),0.33 per call) FlexCAN_IsListenOnlyModeEnabled/28 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_Ip_Init_Privileged/70 (FlexCAN_Ip_Init_Privileged) @07f46c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (write)
  Referring: 
  Availability: available
  Function flags: count:50107952 (estimated locally) body optimize_size
  Called by: 
  Calls: FlexCAN_SetOperationMode/123 (16535624 (estimated locally),0.33 per call) FlexCAN_InitBaudrate/54 (16535624 (estimated locally),0.33 per call) FlexCAN_InitController/53 (50107952 (estimated locally),1.00 per call) DevAssert/0 (50107952 (estimated locally),1.00 per call) DevAssert/0 (50107952 (estimated locally),1.00 per call) 
FlexCAN_AbortRxTransfer/69 (FlexCAN_AbortRxTransfer) @07f46a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_AbortTransfer/117 (51908159 (estimated locally),0.05 per call) 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (1073741824 (estimated locally),1.00 per call) FlexCAN_GetMsgBuffRegion/136 (524845004 (estimated locally),0.49 per call) FLEXCAN_ClearMsgBuffIntCmd/170 (181135951 (estimated locally),0.17 per call) FlexCAN_GetMsgBuffRegion/136 (181135951 (estimated locally),0.17 per call) RxFifoOcuppiedLastMsgBuff/29 (548896821 (estimated locally),0.51 per call) 
FlexCAN_AbortTxTransfer/68 (FlexCAN_AbortTxTransfer) @07f468c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_AbortTransfer/117 (51908159 (estimated locally),0.05 per call) 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (114863532 (estimated locally),1.00 per call) FlexCAN_GetBuffStatusFlag/10 (1073741824 (estimated locally),9.35 per call) OsIf_GetElapsed/141 (1014686025 (estimated locally),8.83 per call) OsIf_GetCounter/140 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/139 (114863532 (estimated locally),1.00 per call) FlexCAN_GetMsgBuffRegion/136 (114863532 (estimated locally),1.00 per call) 
FlexCAN_IRQHandlerEnhancedRxFIFO/67 (FlexCAN_IRQHandlerEnhancedRxFIFO) @07f46700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_MainFunctionRead/95 (9997401 (estimated locally),0.01 per call) FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (93544388 (estimated locally),0.44 per call) FlexCAN_ProccessEnhancedRxFifo/57 (214301689 (estimated locally),1.87 per call) 
  Calls: FlexCAN_CompleteRxMessageEnhancedFifoData/55 (24094767 (estimated locally),0.02 per call) FlexCAN_ReadEnhancedRxFifo/145 (73014444 (estimated locally),0.07 per call) 
   Indirect call(150323855 (estimated locally),0.14 per call) 
   Indirect call(150323855 (estimated locally),0.14 per call) 
   Indirect call(150323855 (estimated locally),0.14 per call) 
   Indirect call(51110111 (estimated locally),0.05 per call) 
FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (FlexCAN_ProcessIRQHandlerEnhancedRxFIFO) @07f46540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:214748364 (estimated locally) body local optimize_size
  Called by: FlexCAN_IRQHandler/82 (5283952 (estimated locally),0.02 per call) 
  Calls: FlexCAN_IRQHandlerEnhancedRxFIFO/67 (93544388 (estimated locally),0.44 per call) FlexCAN_GetEnhancedRxFIFOIntStatusFlag/47 (283467841 (estimated locally),1.32 per call) FlexCAN_GetEnhancedRxFIFOStatusFlag/45 (858993459 (estimated locally),4.00 per call) 
FlexCAN_ProcessSpuriousInterruptMB/65 (FlexCAN_ProcessSpuriousInterruptMB) @07f46380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:118111602 (estimated locally) body local optimize_size
  Called by: FlexCAN_IRQHandler/82 (23248379 (estimated locally),0.11 per call) 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (52034066 (estimated locally),0.44 per call) FlexCAN_GetBuffStatusImask/11 (315357973 (estimated locally),2.67 per call) FlexCAN_GetBuffStatusFlag/10 (955630223 (estimated locally),8.09 per call) 
FlexCAN_IRQHandlerRxFIFO/64 (FlexCAN_IRQHandlerRxFIFO) @07f461c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_MainFunctionRead/95 (36118509 (estimated locally),0.03 per call) FlexCAN_IRQHandler/82 (6443844 (estimated locally),0.03 per call) FlexCAN_ProccessLegacyRxFIFO/58 (160726266 (estimated locally),1.40 per call) 
  Calls: FlexCAN_ClearMsgBuffIntStatusFlag/9 (268435456 (estimated locally),0.25 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (268435456 (estimated locally),0.25 per call) FlexCAN_CompleteRxMessageFifoData/81 (17929341 (estimated locally),0.02 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (54331336 (estimated locally),0.05 per call) FlexCAN_ReadRxFifo/146 (54331336 (estimated locally),0.05 per call) 
   Indirect call(187904819 (estimated locally),0.18 per call) 
   Indirect call(187904819 (estimated locally),0.18 per call) 
   Indirect call(38031935 (estimated locally),0.04 per call) 
FlexCAN_IRQHandlerTxMB/63 (FlexCAN_IRQHandlerTxMB) @07f46000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: FlexCAN_IRQHandler/82 (11624189 (estimated locally),0.05 per call) 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (145607982 (estimated locally),0.14 per call) FlexCAN_SetMsgBuffIntCmd/133 (354334802 (estimated locally),0.33 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (536870911 (estimated locally),0.50 per call) FlexCAN_GetMsgBuffTimestamp/150 (536870911 (estimated locally),0.50 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (108662672 (estimated locally),0.10 per call) FlexCAN_GetMsgBuff/143 (536870911 (estimated locally),0.50 per call) FlexCAN_LockRxMsgBuff/142 (536870911 (estimated locally),0.50 per call) 
   Indirect call(751619278 (estimated locally),0.70 per call) 
FlexCAN_IRQHandlerRxMB/62 (FlexCAN_IRQHandlerRxMB) @07f34e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_MainFunctionRead/95 (64516662 (estimated locally),0.06 per call) FlexCAN_IRQHandler/82 (10319955 (estimated locally),0.05 per call) FlexCAN_Ip_ReceiveBlocking/74 (67772909 (estimated locally),0.19 per call) 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (90733332 (estimated locally),0.08 per call) FlexCAN_SetMsgBuffIntCmd/133 (177167401 (estimated locally),0.17 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (1073741824 (estimated locally),1.00 per call) FlexCAN_GetMsgBuff/143 (1073741824 (estimated locally),1.00 per call) FlexCAN_LockRxMsgBuff/142 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(751619278 (estimated locally),0.70 per call) 
FlexCAN_StartRxMessageFifoData/61 (FlexCAN_StartRxMessageFifoData) @07f34c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_RxFifoBlocking/76 (524845004 (estimated locally),0.49 per call) FlexCAN_Ip_RxFifoBlocking/76 (323849124 (estimated locally),0.30 per call) FlexCAN_Ip_RxFifo/75 (524845004 (estimated locally),0.49 per call) FlexCAN_Ip_RxFifo/75 (323849124 (estimated locally),0.30 per call) 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (115158811 (estimated locally),0.11 per call) FlexCAN_SetMsgBuffIntCmd/133 (115158811 (estimated locally),0.11 per call) FlexCAN_SetMsgBuffIntCmd/133 (115158811 (estimated locally),0.11 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_StartSendData/60 (FlexCAN_StartSendData) @07f34a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxState/50 (read)Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SendBlocking/88 (348071309 (estimated locally),1.00 per call) FlexCAN_Ip_Send/71 (354334802 (estimated locally),0.33 per call) 
  Calls: FlexCAN_SetTxMsgBuff/137 (401518840 (estimated locally),0.37 per call) FlexCAN_GetMsgBuffRegion/136 (401518840 (estimated locally),0.37 per call) FlexCAN_ClearMsgBuffIntStatusFlag/9 (401518840 (estimated locally),0.37 per call) FlexCAN_IsMbOutOfRange/135 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) FlexCAN_GetMbPayloadSize/134 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_StartRxMessageBufferData/59 (FlexCAN_StartRxMessageBufferData) @07f348c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_ReceiveBlocking/74 (348071315 (estimated locally),1.00 per call) FlexCAN_Ip_Receive/73 (1073741824 (estimated locally),1.00 per call) 
  Calls: FlexCAN_IsMbOutOfRange/135 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_ProccessLegacyRxFIFO/58 (FlexCAN_ProccessLegacyRxFIFO) @07f34700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxState/50 (read)Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_RxFifoBlocking/76 (173198851 (estimated locally),0.16 per call) FlexCAN_Ip_RxFifoBlocking/76 (106870211 (estimated locally),0.10 per call) 
  Calls: FlexCAN_SetMsgBuffIntCmd/133 (19089400 (estimated locally),0.17 per call) FlexCAN_SetMsgBuffIntCmd/133 (19089400 (estimated locally),0.17 per call) FlexCAN_SetMsgBuffIntCmd/133 (19089400 (estimated locally),0.17 per call) OsIf_GetElapsed/141 (1014686025 (estimated locally),8.83 per call) FlexCAN_IRQHandlerRxFIFO/64 (160726266 (estimated locally),1.40 per call) FlexCAN_GetBuffStatusFlag/10 (487049291 (estimated locally),4.24 per call) OsIf_GetCounter/140 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/139 (114863532 (estimated locally),1.00 per call) 
FlexCAN_ProccessEnhancedRxFifo/57 (FlexCAN_ProccessEnhancedRxFifo) @07f34540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxState/50 (read)Flexcan_Ip_apxBase/49 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_RxFifoBlocking/76 (74265740 (estimated locally),0.07 per call) 
  Calls: OsIf_GetElapsed/141 (1014686025 (estimated locally),8.83 per call) FlexCAN_IRQHandlerEnhancedRxFIFO/67 (214301689 (estimated locally),1.87 per call) FlexCAN_GetEnhancedRxFIFOStatusFlag/45 (649399059 (estimated locally),5.65 per call) OsIf_GetCounter/140 (114863532 (estimated locally),1.00 per call) OsIf_MicrosToTicks/139 (114863532 (estimated locally),1.00 per call) 
FlexCAN_StartRxMessageEnhancedFifoData/56 (FlexCAN_StartRxMessageEnhancedFifoData) @07f34380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_RxFifoBlocking/76 (225047696 (estimated locally),0.21 per call) FlexCAN_Ip_RxFifo/75 (225047696 (estimated locally),0.21 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_CompleteRxMessageEnhancedFifoData/55 (FlexCAN_CompleteRxMessageEnhancedFifoData) @07f341c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Flexcan_Ip_apxBase/49 (read)Flexcan_Ip_apxState/50 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_IRQHandlerEnhancedRxFIFO/67 (24094767 (estimated locally),0.02 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) FlexCAN_IsEnhancedRxFifoAvailable/144 (1073741824 (estimated locally),1.00 per call) DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_InitBaudrate/54 (FlexCAN_InitBaudrate) @07f34000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_Init_Privileged/70 (16535624 (estimated locally),0.33 per call) 
  Calls: FlexCAN_SetTimeSegments/13 (359703511 (estimated locally),0.33 per call) FlexCAN_SetFDTimeSegments/12 (359703511 (estimated locally),0.33 per call) FlexCAN_SetExtendedTimeSegments/14 (359703511 (estimated locally),0.33 per call) FlexCAN_SetEnhancedDataTimeSegments/17 (116930485 (estimated locally),0.11 per call) FlexCAN_SetEnhancedNominalTimeSegments/15 (354334802 (estimated locally),0.33 per call) FlexCAN_EnableExtCbt/25 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_InitController/53 (FlexCAN_InitController) @07f23e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_Init_Privileged/70 (50107952 (estimated locally),1.00 per call) 
  Calls: FlexCAN_InitCtroll/52 (378493993 (estimated locally),0.35 per call) FlexCAN_ResetImaskBuff/128 (378493993 (estimated locally),0.35 per call) FlexCAN_ConfigCtrlOptions/127 (378493993 (estimated locally),0.35 per call) FlexCAN_SetFDEnabled/6 (378493993 (estimated locally),0.35 per call) FlexCAN_DisableMemErrorDetection/5 (378493993 (estimated locally),0.35 per call) FlexCAN_Disable/125 (378493993 (estimated locally),0.35 per call) FlexCAN_EnterFreezeMode/124 (378493993 (estimated locally),0.35 per call) FlexCAN_Init/126 (756987987 (estimated locally),0.71 per call) FlexCAN_Disable/125 (209057533 (estimated locally),0.19 per call) FlexCAN_EnterFreezeMode/124 (633507677 (estimated locally),0.59 per call) 
FlexCAN_InitCtroll/52 (FlexCAN_InitCtroll) @07f23c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) 
  Calls: FlexCAN_Disable/125 (177167401 (estimated locally),0.17 per call) FlexCAN_EnterFreezeMode/124 (177167401 (estimated locally),0.17 per call) FlexCAN_SetMaxMsgBuffNum/130 (536870913 (estimated locally),0.50 per call) FlexCAN_SetPayloadSize/129 (536870913 (estimated locally),0.50 per call) FlexCAN_Disable/125 (536870913 (estimated locally),0.50 per call) FlexCAN_EnterFreezeMode/124 (536870913 (estimated locally),0.50 per call) FlexCAN_InitRxFifo/51 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_InitRxFifo/51 (FlexCAN_InitRxFifo) @07f23a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_InitCtroll/52 (1073741824 (estimated locally),1.00 per call) 
  Calls: FlexCAN_EnableEnhancedRxFifo/132 (295869560 (estimated locally),0.28 per call) FlexCAN_EnableRxFifo/131 (354334802 (estimated locally),0.33 per call) 
Flexcan_Ip_apxState/50 (Flexcan_Ip_apxState) @07f05870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlexCAN_IRQHandlerTxMB/63 (read)FlexCAN_AbortRxTransfer/69 (read)FlexCAN_CompleteRxMessageFifoData/81 (read)FlexCAN_Ip_Init_Privileged/70 (write)FlexCAN_Ip_Send/71 (read)FlexCAN_StartRxMessageFifoData/61 (read)FlexCAN_Ip_ConfigRxMb/72 (read)FlexCAN_StartSendData/60 (read)FlexCAN_ProccessLegacyRxFIFO/58 (read)FlexCAN_StartRxMessageEnhancedFifoData/56 (read)FlexCAN_CompleteRxMessageEnhancedFifoData/55 (read)FlexCAN_IRQHandlerRxMB/62 (read)FlexCAN_AbortTxTransfer/68 (read)FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (read)FlexCAN_ProccessEnhancedRxFifo/57 (read)FlexCAN_ProcessSpuriousInterruptMB/65 (read)FlexCAN_Ip_Receive/73 (read)FlexCAN_Ip_ReceiveBlocking/74 (read)FlexCAN_Ip_ConfigRemoteResponseMb/79 (read)FlexCAN_IRQHandlerRxFIFO/64 (read)FlexCAN_IRQHandlerEnhancedRxFIFO/67 (read)FlexCAN_Ip_DisableInterrupts_Privileged/115 (read)FlexCAN_Ip_GetTransferStatus/80 (read)FlexCAN_IRQHandler/82 (read)FlexCAN_Busoff_Error_IRQHandler/87 (read)FlexCAN_Ip_SendBlocking/88 (read)FlexCAN_Ip_Deinit_Privileged/94 (write)FlexCAN_Ip_MainFunctionRead/95 (read)FlexCAN_Ip_MainFunctionBusOff_Privileged/96 (read)FlexCAN_Ip_MainFunctionWrite/97 (read)FlexCAN_Ip_EnableInterrupts_Privileged/114 (read)FlexCAN_StartRxMessageBufferData/59 (read)FlexCAN_Ip_AbortTransfer/117 (read)
  Availability: available
  Varpool flags:
Flexcan_Ip_apxBase/49 (Flexcan_Ip_apxBase) @07f05828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: FlexCAN_IRQHandlerTxMB/63 (read)FlexCAN_AbortRxTransfer/69 (read)FlexCAN_CompleteRxMessageFifoData/81 (read)FlexCAN_Ip_Init_Privileged/70 (read)FlexCAN_Ip_Send/71 (read)FlexCAN_StartRxMessageFifoData/61 (read)FlexCAN_Ip_ConfigRxMb/72 (read)FlexCAN_StartSendData/60 (read)FlexCAN_Ip_Receive/73 (read)FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (read)FlexCAN_StartRxMessageEnhancedFifoData/56 (read)FlexCAN_Ip_ReceiveBlocking/74 (read)FlexCAN_CompleteRxMessageEnhancedFifoData/55 (read)FlexCAN_IRQHandlerRxMB/62 (read)FlexCAN_AbortTxTransfer/68 (read)FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (read)FlexCAN_ProccessEnhancedRxFifo/57 (read)FlexCAN_ProcessSpuriousInterruptMB/65 (read)FlexCAN_Ip_RxFifo/75 (read)FlexCAN_Ip_RxFifoBlocking/76 (read)FlexCAN_Ip_ConfigRxFifo_Privileged/77 (read)FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (read)FlexCAN_IRQHandlerRxFIFO/64 (read)FlexCAN_IRQHandlerEnhancedRxFIFO/67 (read)FlexCAN_Ip_GetListenOnlyMode/121 (read)FlexCAN_Ip_ConfigRemoteResponseMb/79 (read)FlexCAN_IRQHandler/82 (read)FlexCAN_Ip_ClearErrorStatus/83 (read)FlexCAN_Ip_GetErrorStatus/84 (read)FlexCAN_Ip_GetControllerTxErrorCounter/85 (read)FlexCAN_Ip_GetControllerRxErrorCounter/86 (read)FlexCAN_Busoff_Error_IRQHandler/87 (read)FlexCAN_Ip_SendBlocking/88 (read)FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 (read)FlexCAN_Ip_EnterFreezeMode_Privileged/90 (read)FlexCAN_Ip_ExitFreezeMode_Privileged/91 (read)FlexCAN_Ip_SetRxIndividualMask_Privileged/92 (read)FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 (read)FlexCAN_Ip_Deinit_Privileged/94 (read)FlexCAN_Ip_MainFunctionRead/95 (read)FlexCAN_Ip_MainFunctionBusOff_Privileged/96 (read)FlexCAN_Ip_MainFunctionWrite/97 (read)FlexCAN_Ip_GetStopMode_Privileged/98 (read)FlexCAN_Ip_GetStartMode_Privileged/99 (read)FlexCAN_Ip_SetStartMode_Privileged/100 (read)FlexCAN_Ip_SetStopMode_Privileged/101 (read)FlexCAN_Ip_SetRxMaskType_Privileged/102 (read)FlexCAN_Ip_SetBitrate_Privileged/103 (read)FlexCAN_Ip_GetBitrate/104 (read)FlexCAN_Ip_ClearTDCFail/105 (read)FlexCAN_Ip_GetTDCFail/106 (read)FlexCAN_Ip_GetTDCValue/107 (read)FlexCAN_Ip_SetBitrateCbt_Privileged/108 (read)FlexCAN_Ip_GetBitrateFD/109 (read)FlexCAN_Ip_SetTDCOffset_Privileged/110 (read)FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (read)FlexCAN_Ip_GetBuffStatusFlag/112 (read)FlexCAN_Ip_ClearBuffStatusFlag/113 (read)FlexCAN_Ip_EnableInterrupts_Privileged/114 (read)FlexCAN_Ip_DisableInterrupts_Privileged/115 (read)FlexCAN_StartRxMessageBufferData/59 (read)FlexCAN_ProccessLegacyRxFIFO/58 (read)FlexCAN_Ip_SetErrorInt_Privileged/116 (read)FlexCAN_Ip_AbortTransfer/117 (read)FlexCAN_Ip_SetRxMb14Mask_Privileged/118 (read)FlexCAN_Ip_SetRxMb15Mask_Privileged/119 (read)FlexCAN_Ip_ManualBusOffRecovery/122 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
FlexCAN_SetRegDefaultVal/48 (FlexCAN_SetRegDefaultVal) @07ef28c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_Deinit_Privileged/94 (354334802 (estimated locally),0.33 per call) 
  Calls: FlexCAN_GetMaxMbNum/152 (1073741824 (estimated locally),1.00 per call) FlexCAN_IsEnhancedRxFifoAvailable/144 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_GetEnhancedRxFIFOIntStatusFlag/47 (FlexCAN_GetEnhancedRxFIFOIntStatusFlag) @07ef2380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (283467841 (estimated locally),1.32 per call) 
  Calls: 
FlexCAN_GetEnhancedRxFIFOStatusFlag/45 (FlexCAN_GetEnhancedRxFIFOStatusFlag) @07ef2000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_ProcessIRQHandlerEnhancedRxFIFO/66 (858993459 (estimated locally),4.00 per call) FlexCAN_ProccessEnhancedRxFifo/57 (649399059 (estimated locally),5.65 per call) 
  Calls: 
FlexCAN_SetRxMaskType/42 (FlexCAN_SetRxMaskType) @07ecaa80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetRxMaskType_Privileged/102 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_SetTxArbitrationStartDelay/41 (FlexCAN_SetTxArbitrationStartDelay) @07eca700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_IsFreezeMode/40 (FlexCAN_IsFreezeMode) @07eca460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMb15Mask_Privileged/119 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMb14Mask_Privileged/118 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (214748 (estimated locally),0.15 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (214748 (estimated locally),0.15 per call) FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetTDCOffset_Privileged/110 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMaskType_Privileged/102 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxIndividualMask_Privileged/92 (453655920 (estimated locally),0.42 per call) FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxFifo_Privileged/77 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_GetMsgBuffIntStatusFlag/37 (FlexCAN_GetMsgBuffIntStatusFlag) @07ec7ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_IRQHandler/82 (57431766 (estimated locally),0.27 per call) FlexCAN_IRQHandler/82 (958878294 (estimated locally),4.46 per call) FlexCAN_IRQHandler/82 (114863532 (estimated locally),0.53 per call) 
  Calls: FlexCAN_GetMsgBuffIntStatusFlag.part.0/175 (268435457 (estimated locally),0.25 per call) 
RxFifoOcuppiedLastMsgBuff/29 (RxFifoOcuppiedLastMsgBuff) @07ec1a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_AbortRxTransfer/69 (548896821 (estimated locally),0.51 per call) 
  Calls: 
FlexCAN_IsListenOnlyModeEnabled/28 (FlexCAN_IsListenOnlyModeEnabled) @07ec18c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetListenOnlyMode/121 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_Send/71 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_EnableExtCbt/25 (FlexCAN_EnableExtCbt) @07ec12a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_InitBaudrate/54 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FlexCAN_EnhCbtEnable/24 (FlexCAN_EnhCbtEnable) @07ec1000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrate_Privileged/103 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_GetFDTimeSegments/21 (FlexCAN_GetFDTimeSegments) @07ebd9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetBitrateFD/109 (536870913 (estimated locally),0.50 per call) 
  Calls: 
FlexCAN_GetTimeSegments/20 (FlexCAN_GetTimeSegments) @07ebd7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetBitrate/104 (424450143 (estimated locally),0.40 per call) 
  Calls: 
FlexCAN_GetExtendedTimeSegments/19 (FlexCAN_GetExtendedTimeSegments) @07ebd620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetBitrate/104 (294956879 (estimated locally),0.27 per call) 
  Calls: 
FlexCAN_GetEnhancedDataTimeSegments/18 (FlexCAN_GetEnhancedDataTimeSegments) @07ebd460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetBitrateFD/109 (536870913 (estimated locally),0.50 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_SetEnhancedDataTimeSegments/17 (FlexCAN_SetEnhancedDataTimeSegments) @07ebd2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrateCbt_Privileged/108 (66437775 (estimated locally),0.06 per call) FlexCAN_InitBaudrate/54 (116930485 (estimated locally),0.11 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_GetEnhancedNominalTimeSegments/16 (FlexCAN_GetEnhancedNominalTimeSegments) @07eb7e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetBitrate/104 (354334802 (estimated locally),0.33 per call) 
  Calls: 
FlexCAN_SetEnhancedNominalTimeSegments/15 (FlexCAN_SetEnhancedNominalTimeSegments) @07eb7c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrate_Privileged/103 (53788023 (estimated locally),0.05 per call) FlexCAN_InitBaudrate/54 (354334802 (estimated locally),0.33 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_SetExtendedTimeSegments/14 (FlexCAN_SetExtendedTimeSegments) @07eb77e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrate_Privileged/103 (86904862 (estimated locally),0.08 per call) FlexCAN_InitBaudrate/54 (359703511 (estimated locally),0.33 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_SetTimeSegments/13 (FlexCAN_SetTimeSegments) @07eb71c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrate_Privileged/103 (125058216 (estimated locally),0.12 per call) FlexCAN_InitBaudrate/54 (359703511 (estimated locally),0.33 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_SetFDTimeSegments/12 (FlexCAN_SetFDTimeSegments) @07eb2b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrateCbt_Privileged/108 (66437775 (estimated locally),0.06 per call) FlexCAN_InitBaudrate/54 (359703511 (estimated locally),0.33 per call) 
  Calls: DevAssert/0 (1073741824 (estimated locally),1.00 per call) 
FlexCAN_GetBuffStatusImask/11 (FlexCAN_GetBuffStatusImask) @07eb2540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_ProcessSpuriousInterruptMB/65 (315357973 (estimated locally),2.67 per call) 
  Calls: 
FlexCAN_GetBuffStatusFlag/10 (FlexCAN_GetBuffStatusFlag) @07eb2380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_GetBuffStatusFlag/112 (524845004 (estimated locally),0.49 per call) FlexCAN_Ip_MainFunctionWrite/97 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_MainFunctionRead/95 (637516427 (estimated locally),0.59 per call) FlexCAN_Ip_SendBlocking/88 (120473832 (estimated locally),0.35 per call) FlexCAN_Ip_SendBlocking/88 (1073741824 (estimated locally),3.08 per call) FlexCAN_Ip_ReceiveBlocking/74 (205372451 (estimated locally),0.59 per call) FlexCAN_ProccessLegacyRxFIFO/58 (487049291 (estimated locally),4.24 per call) FlexCAN_AbortTxTransfer/68 (1073741824 (estimated locally),9.35 per call) FlexCAN_ProcessSpuriousInterruptMB/65 (955630223 (estimated locally),8.09 per call) 
  Calls: 
FlexCAN_ClearMsgBuffIntStatusFlag/9 (FlexCAN_ClearMsgBuffIntStatusFlag) @07eb21c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_ClearBuffStatusFlag/113 (524845004 (estimated locally),0.49 per call) FlexCAN_Ip_MainFunctionWrite/97 (91268055 (estimated locally),0.08 per call) FlexCAN_Ip_MainFunctionWrite/97 (18472654 (estimated locally),0.02 per call) FlexCAN_Ip_SendBlocking/88 (114863532 (estimated locally),0.33 per call) FlexCAN_Ip_SendBlocking/88 (12887688 (estimated locally),0.04 per call) FlexCAN_IRQHandler/82 (808727776 (estimated locally),3.76 per call) FlexCAN_IRQHandler/82 (9476241 (estimated locally),0.04 per call) FlexCAN_Ip_ConfigRemoteResponseMb/79 (686872646 (estimated locally),0.64 per call) FlexCAN_Ip_ConfigRxMb/72 (686872646 (estimated locally),0.64 per call) FlexCAN_AbortRxTransfer/69 (1073741824 (estimated locally),1.00 per call) FlexCAN_IRQHandlerTxMB/63 (536870911 (estimated locally),0.50 per call) FlexCAN_IRQHandlerTxMB/63 (108662672 (estimated locally),0.10 per call) FlexCAN_IRQHandlerRxFIFO/64 (268435456 (estimated locally),0.25 per call) FlexCAN_IRQHandlerRxFIFO/64 (268435456 (estimated locally),0.25 per call) FlexCAN_IRQHandlerRxFIFO/64 (54331336 (estimated locally),0.05 per call) FlexCAN_IRQHandlerRxMB/62 (1073741824 (estimated locally),1.00 per call) FlexCAN_AbortTxTransfer/68 (114863532 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (401518840 (estimated locally),0.37 per call) FlexCAN_ProcessSpuriousInterruptMB/65 (52034066 (estimated locally),0.44 per call) 
  Calls: 
FlexCAN_SetListenOnlyMode/7 (FlexCAN_SetListenOnlyMode) @07eafe00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (265751101 (estimated locally),0.25 per call) 
  Calls: 
FlexCAN_SetFDEnabled/6 (FlexCAN_SetFDEnabled) @07eafb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetBitrateCbt_Privileged/108 (132875550 (estimated locally),0.12 per call) FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) 
  Calls: 
FlexCAN_DisableMemErrorDetection/5 (FlexCAN_DisableMemErrorDetection) @07eaf7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_InitController/53 (378493993 (estimated locally),0.35 per call) 
  Calls: 
FlexCAN_SetEnhancedTDCOffset/3 (FlexCAN_SetEnhancedTDCOffset) @07eaf000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetTDCOffset_Privileged/110 (132875551 (estimated locally),0.12 per call) 
  Calls: 
FlexCAN_SetTDCOffset/2 (FlexCAN_SetTDCOffset) @07ea4d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_SetTDCOffset_Privileged/110 (132875551 (estimated locally),0.12 per call) 
  Calls: 
DevAssert/0 (DevAssert) @07e5fc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:214748 (estimated locally) body local optimize_size
  Called by: FlexCAN_Ip_ManualBusOffRecovery/122 (696142619 (estimated locally),1.00 per call) FlexCAN_Ip_SetListenOnlyMode_Privileged/120 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMb15Mask_Privileged/119 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMb14Mask_Privileged/118 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_AbortTransfer/117 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_AbortTransfer/117 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetErrorInt_Privileged/116 (1476482 (estimated locally),1.00 per call) FlexCAN_Ip_DisableInterrupts_Privileged/115 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_EnableInterrupts_Privileged/114 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ClearBuffStatusFlag/113 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetBuffStatusFlag/112 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetTDCOffset_Privileged/110 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetBitrateFD/109 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetBitrateFD/109 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetBitrateCbt_Privileged/108 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetBitrateCbt_Privileged/108 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_GetTDCValue/107 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetTDCFail/106 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ClearTDCFail/105 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetBitrate/104 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetBitrate/104 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetBitrate_Privileged/103 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetBitrate_Privileged/103 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMaskType_Privileged/102 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetStopMode_Privileged/101 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetStartMode_Privileged/100 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_MainFunctionWrite/97 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_MainFunctionBusOff_Privileged/96 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_MainFunctionRead/95 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_MainFunctionRead/95 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_Deinit_Privileged/94 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxIndividualMask_Privileged/92 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89 (1073741823 (estimated locally),1.00 per call) FlexCAN_Ip_SendBlocking/88 (348071309 (estimated locally),1.00 per call) FlexCAN_Ip_SendBlocking/88 (348071309 (estimated locally),1.00 per call) FlexCAN_Busoff_Error_IRQHandler/87 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetControllerRxErrorCounter/86 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetControllerTxErrorCounter/85 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetErrorStatus/84 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ClearErrorStatus/83 (1073741824 (estimated locally),1.00 per call) FlexCAN_IRQHandler/82 (214818650 (estimated locally),1.00 per call) FlexCAN_IRQHandler/82 (214818650 (estimated locally),1.00 per call) FlexCAN_Ip_GetTransferStatus/80 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_GetTransferStatus/80 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRemoteResponseMb/79 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRemoteResponseMb/79 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRemoteResponseMb/79 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRemoteResponseMb/79 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxFifo_Privileged/77 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_RxFifoBlocking/76 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_RxFifo/75 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ReceiveBlocking/74 (348071315 (estimated locally),1.00 per call) FlexCAN_Ip_Receive/73 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/72 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_ConfigRxMb/72 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_Send/71 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_Send/71 (1073741824 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/70 (50107952 (estimated locally),1.00 per call) FlexCAN_Ip_Init_Privileged/70 (50107952 (estimated locally),1.00 per call) FlexCAN_CompleteRxMessageEnhancedFifoData/55 (1073741824 (estimated locally),1.00 per call) FlexCAN_CompleteRxMessageEnhancedFifoData/55 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartSendData/60 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartRxMessageBufferData/59 (1073741824 (estimated locally),1.00 per call) FlexCAN_CompleteRxMessageFifoData/81 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartRxMessageFifoData/61 (1073741824 (estimated locally),1.00 per call) FlexCAN_StartRxMessageEnhancedFifoData/56 (1073741824 (estimated locally),1.00 per call) FlexCAN_GetEnhancedDataTimeSegments/18 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetEnhancedDataTimeSegments/17 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetEnhancedNominalTimeSegments/15 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetExtendedTimeSegments/14 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetTimeSegments/13 (1073741824 (estimated locally),1.00 per call) FlexCAN_SetFDTimeSegments/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function DevAssert (DevAssert, funcdef_no=0, decl_uid=11549, cgraph_uid=1, symbol_order=0)

Modification phase of node DevAssert/0
DevAssert (volatile boolean x)
{
  unsigned char x.0_1;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  x.0_1 ={v} x;
  if (x.0_1 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 107374]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("BKPT #0");
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 107374]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function FlexCAN_ClearMsgBuffIntStatusFlag (FlexCAN_ClearMsgBuffIntStatusFlag, funcdef_no=9, decl_uid=11695, cgraph_uid=10, symbol_order=9)

Modification phase of node FlexCAN_ClearMsgBuffIntStatusFlag/9
FlexCAN_ClearMsgBuffIntStatusFlag (struct FLEXCAN_Type * base, uint32 msgBuffIdx)
{
  uint32 flag;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = msgBuffIdx_3(D) & 31;
  flag_4 = 1 << _1;
  # DEBUG flag => flag_4
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_3(D) <= 31)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  base_6(D)->IFLAG1 ={v} flag_4;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_3(D) <= 63)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  base_6(D)->IFLAG2 ={v} flag_4;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function FlexCAN_GetBuffStatusFlag (FlexCAN_GetBuffStatusFlag, funcdef_no=10, decl_uid=11700, cgraph_uid=11, symbol_order=10)

Modification phase of node FlexCAN_GetBuffStatusFlag/10
FlexCAN_GetBuffStatusFlag (const struct FLEXCAN_Type * base, uint32 msgBuffIdx)
{
  uint32 flag;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  uint8 _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG flag => 0
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_10(D) <= 31)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 ={v} base_12(D)->IFLAG1;
  _2 = msgBuffIdx_10(D);
  _3 = 1 << _2;
  _4 = _1 & _3;
  flag_14 = _4 >> _2;
  # DEBUG flag => flag_14
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_10(D) <= 63)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _5 ={v} base_12(D)->IFLAG2;
  _6 = msgBuffIdx_10(D) & 31;
  _7 = 1 << _6;
  _8 = _5 & _7;
  flag_13 = _8 >> _6;
  # DEBUG flag => flag_13

  <bb 6> [local count: 1073741824]:
  # flag_9 = PHI <flag_14(3), 0(4), flag_13(5)>
  # DEBUG flag => flag_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _15 = (uint8) flag_9;
  return _15;

}



;; Function FlexCAN_SetFDTimeSegments (FlexCAN_SetFDTimeSegments, funcdef_no=12, decl_uid=11710, cgraph_uid=13, symbol_order=12)

Modification phase of node FlexCAN_SetFDTimeSegments/12
FlexCAN_SetFDTimeSegments (struct FLEXCAN_Type * base, const struct Flexcan_Ip_TimeSegmentType * timeSeg)
{
  _Bool _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = timeSeg_25(D) != 0B;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 ={v} base_28(D)->FDCBT;
  _4 = _3 & 3221783320;
  base_28(D)->FDCBT ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_28(D)->FDCBT;
  _6 = timeSeg_25(D)->propSeg;
  _7 = _6 << 10;
  _8 = _7 & 31744;
  _9 = timeSeg_25(D)->phaseSeg2;
  _10 = _9 & 7;
  _11 = _8 | _10;
  _12 = timeSeg_25(D)->phaseSeg1;
  _13 = _12 << 5;
  _14 = _13 & 255;
  _15 = _11 | _14;
  _16 = timeSeg_25(D)->preDivider;
  _17 = _16 << 20;
  _18 = _17 & 1072693248;
  _19 = _15 | _18;
  _20 = timeSeg_25(D)->rJumpwidth;
  _21 = _20 << 16;
  _22 = _21 & 458752;
  _23 = _19 | _22;
  _24 = _5 | _23;
  base_28(D)->FDCBT ={v} _24;
  return;

}



;; Function FlexCAN_SetTimeSegments (FlexCAN_SetTimeSegments, funcdef_no=13, decl_uid=11714, cgraph_uid=14, symbol_order=13)

Modification phase of node FlexCAN_SetTimeSegments/13
FlexCAN_SetTimeSegments (struct FLEXCAN_Type * base, const struct Flexcan_Ip_TimeSegmentType * timeSeg)
{
  _Bool _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = timeSeg_24(D) != 0B;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 ={v} base_27(D)->CTRL1;
  _4 = _3 & 65528;
  base_27(D)->CTRL1 ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_27(D)->CTRL1;
  _6 = timeSeg_24(D)->propSeg;
  _7 = _6 & 7;
  _8 = timeSeg_24(D)->phaseSeg2;
  _9 = _8 << 16;
  _10 = _9 & 458752;
  _11 = _7 | _10;
  _12 = timeSeg_24(D)->phaseSeg1;
  _13 = _12 << 19;
  _14 = _13 & 3670016;
  _15 = _11 | _14;
  _16 = timeSeg_24(D)->preDivider;
  _17 = _16 << 24;
  _18 = _15 | _17;
  _19 = timeSeg_24(D)->rJumpwidth;
  _20 = _19 << 22;
  _21 = _20 & 12582912;
  _22 = _18 | _21;
  _23 = _5 | _22;
  base_27(D)->CTRL1 ={v} _23;
  return;

}



;; Function FlexCAN_SetExtendedTimeSegments (FlexCAN_SetExtendedTimeSegments, funcdef_no=14, decl_uid=11718, cgraph_uid=15, symbol_order=14)

Modification phase of node FlexCAN_SetExtendedTimeSegments/14
FlexCAN_SetExtendedTimeSegments (struct FLEXCAN_Type * base, const struct Flexcan_Ip_TimeSegmentType * timeSeg)
{
  _Bool _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = timeSeg_25(D) != 0B;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 ={v} base_28(D)->CBT;
  _4 = _3 & 2147483648;
  base_28(D)->CBT ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_28(D)->CBT;
  _6 = timeSeg_25(D)->propSeg;
  _7 = _6 << 10;
  _8 = _7 & 65535;
  _9 = timeSeg_25(D)->phaseSeg2;
  _10 = _9 & 31;
  _11 = _8 | _10;
  _12 = timeSeg_25(D)->phaseSeg1;
  _13 = _12 << 5;
  _14 = _13 & 992;
  _15 = _11 | _14;
  _16 = timeSeg_25(D)->preDivider;
  _17 = _16 << 21;
  _18 = _17 & 2145386496;
  _19 = _15 | _18;
  _20 = timeSeg_25(D)->rJumpwidth;
  _21 = _20 << 16;
  _22 = _21 & 2031616;
  _23 = _19 | _22;
  _24 = _5 | _23;
  base_28(D)->CBT ={v} _24;
  return;

}



;; Function FlexCAN_SetEnhancedNominalTimeSegments (FlexCAN_SetEnhancedNominalTimeSegments, funcdef_no=15, decl_uid=11722, cgraph_uid=16, symbol_order=15)

Modification phase of node FlexCAN_SetEnhancedNominalTimeSegments/15
FlexCAN_SetEnhancedNominalTimeSegments (struct FLEXCAN_Type * base, const struct Flexcan_Ip_TimeSegmentType * timeSeg)
{
  _Bool _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = timeSeg_26(D) != 0B;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 ={v} base_29(D)->ENCBT;
  _4 = _3 & 3761770240;
  base_29(D)->ENCBT ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_29(D)->ENCBT;
  _6 = timeSeg_26(D)->phaseSeg1;
  _7 = timeSeg_26(D)->propSeg;
  _8 = _6 + _7;
  _9 = _8 + 1;
  _10 = _9 & 255;
  _11 = timeSeg_26(D)->phaseSeg2;
  _12 = _11 << 12;
  _13 = _12 & 520192;
  _14 = _10 | _13;
  _15 = timeSeg_26(D)->rJumpwidth;
  _16 = _15 << 22;
  _17 = _16 & 532676608;
  _18 = _14 | _17;
  _19 = _5 | _18;
  base_29(D)->ENCBT ={v} _19;
  # DEBUG BEGIN_STMT
  _20 ={v} base_29(D)->EPRS;
  _21 = _20 & 4294966272;
  base_29(D)->EPRS ={v} _21;
  # DEBUG BEGIN_STMT
  _22 ={v} base_29(D)->EPRS;
  _23 = timeSeg_26(D)->preDivider;
  _24 = _23 & 1023;
  _25 = _22 | _24;
  base_29(D)->EPRS ={v} _25;
  return;

}



;; Function FlexCAN_SetEnhancedDataTimeSegments (FlexCAN_SetEnhancedDataTimeSegments, funcdef_no=17, decl_uid=11730, cgraph_uid=18, symbol_order=17)

Modification phase of node FlexCAN_SetEnhancedDataTimeSegments/17
FlexCAN_SetEnhancedDataTimeSegments (struct FLEXCAN_Type * base, const struct Flexcan_Ip_TimeSegmentType * timeSeg)
{
  _Bool _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = timeSeg_26(D) != 0B;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 ={v} base_29(D)->EDCBT;
  _4 = _3 & 4231991264;
  base_29(D)->EDCBT ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} base_29(D)->EDCBT;
  _6 = timeSeg_26(D)->phaseSeg1;
  _7 = timeSeg_26(D)->propSeg;
  _8 = _6 + _7;
  _9 = _8 & 31;
  _10 = timeSeg_26(D)->phaseSeg2;
  _11 = _10 << 12;
  _12 = _11 & 65535;
  _13 = _9 | _12;
  _14 = timeSeg_26(D)->rJumpwidth;
  _15 = _14 << 22;
  _16 = _15 & 62914560;
  _17 = _13 | _16;
  _18 = _5 | _17;
  base_29(D)->EDCBT ={v} _18;
  # DEBUG BEGIN_STMT
  _19 ={v} base_29(D)->EPRS;
  _20 = _19 & 4227923967;
  base_29(D)->EPRS ={v} _20;
  # DEBUG BEGIN_STMT
  _21 ={v} base_29(D)->EPRS;
  _22 = timeSeg_26(D)->preDivider;
  _23 = _22 << 16;
  _24 = _23 & 67043328;
  _25 = _21 | _24;
  base_29(D)->EPRS ={v} _25;
  return;

}



;; Function FlexCAN_IsFreezeMode (FlexCAN_IsFreezeMode, funcdef_no=40, decl_uid=11827, cgraph_uid=41, symbol_order=40)

Modification phase of node FlexCAN_IsFreezeMode/40
FlexCAN_IsFreezeMode (const struct FLEXCAN_Type * base)
{
  long unsigned int _1;
  long unsigned int _2;
  boolean iftmp.8_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 ={v} base_5(D)->MCR;
  _2 = _1 & 16777216;
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.8_3 = PHI <1(2), 0(3)>
  return iftmp.8_3;

}



;; Function FlexCAN_StartRxMessageEnhancedFifoData (FlexCAN_StartRxMessageEnhancedFifoData, funcdef_no=54, decl_uid=12308, cgraph_uid=55, symbol_order=56)

Modification phase of node FlexCAN_StartRxMessageEnhancedFifoData/56
FlexCAN_StartRxMessageEnhancedFifoData (uint8 instance, struct Flexcan_Ip_MsgBuffType * data)
{
  Flexcan_Ip_StatusType eResult;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;
  <unnamed type> _4;
  <unnamed type> _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_10(D);
  base_12 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_12
  # DEBUG BEGIN_STMT
  state_13 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_13
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 0
  # DEBUG BEGIN_STMT
  _2 = instance_10(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 ={v} state_13->enhancedFifoOutput.state;
  if (_4 == 1)
    goto <bb 8>; [21.72%]
  else
    goto <bb 3>; [78.28%]

  <bb 3> [local count: 840525101]:
  # DEBUG BEGIN_STMT
  state_13->enhancedFifoOutput.state ={v} 1;
  # DEBUG BEGIN_STMT
  state_13->enhancedFifoOutput.pMBmessage = data_16(D);
  # DEBUG BEGIN_STMT
  _5 = state_13->transferType;
  if (_5 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 420262550]:
  # DEBUG BEGIN_STMT
  state_13->enhancedFifoOutput.isPolling = 0;
  # DEBUG BEGIN_STMT
  _6 = state_13->isIntActive;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 142889267]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_12
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetEnhancedRxFifoIntAll
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  base_12->ERFIER ={v} 4026531840;

  <bb 6> [local count: 840525101]:
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  if (_5 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 285778534]:
  # DEBUG BEGIN_STMT
  state_13->enhancedFifoOutput.isPolling = 1;

  <bb 8> [local count: 1073741824]:
  # eResult_7 = PHI <2(2), 0(6), 0(7)>
  # DEBUG eResult => eResult_7
  # DEBUG BEGIN_STMT
  return eResult_7;

}



;; Function FlexCAN_StartRxMessageFifoData (FlexCAN_StartRxMessageFifoData, funcdef_no=59, decl_uid=12273, cgraph_uid=60, symbol_order=61)

Modification phase of node FlexCAN_StartRxMessageFifoData/61
FlexCAN_StartRxMessageFifoData (uint8 instance, struct Flexcan_Ip_MsgBuffType * data)
{
  Flexcan_Ip_StatusType eResult;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  _Bool _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  <unnamed type> _5;
  <unnamed type> _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG base => 0B
  # DEBUG BEGIN_STMT
  # DEBUG state => 0B
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 0
  # DEBUG BEGIN_STMT
  _1 = instance_13(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) instance_13(D);
  base_16 = Flexcan_Ip_apxBase[_3];
  # DEBUG base => base_16
  # DEBUG BEGIN_STMT
  state_17 = Flexcan_Ip_apxState[_3];
  # DEBUG state => state_17
  # DEBUG BEGIN_STMT
  _4 = state_17->bIsLegacyFifoEn;
  if (_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 ={v} state_17->mbs[0].state;
  if (_5 != 0)
    goto <bb 8>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 348966093]:
  # DEBUG BEGIN_STMT
  state_17->mbs[0].state ={v} 1;
  # DEBUG BEGIN_STMT
  _6 = state_17->transferType;
  if (_6 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 118648472]:
  # DEBUG BEGIN_STMT
  state_17->mbs[0].isPolling = 1;

  <bb 6> [local count: 348966093]:
  # DEBUG BEGIN_STMT
  state_17->mbs[0].pMBmessage = data_20(D);
  # DEBUG BEGIN_STMT
  if (_6 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 115158811]:
  # DEBUG BEGIN_STMT
  state_17->mbs[0].isPolling = 0;
  # DEBUG BEGIN_STMT
  _7 = state_17->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (base_16, instance_13(D), 6, 1, _7);
  # DEBUG BEGIN_STMT
  _8 = state_17->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (base_16, instance_13(D), 7, 1, _8);
  # DEBUG BEGIN_STMT
  _9 = state_17->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (base_16, instance_13(D), 5, 1, _9);

  <bb 8> [local count: 1073741824]:
  # eResult_10 = PHI <1(2), 2(3), 0(6), 0(7)>
  # DEBUG eResult => eResult_10
  # DEBUG BEGIN_STMT
  return eResult_10;

}



;; Function FlexCAN_StartRxMessageBufferData (FlexCAN_StartRxMessageBufferData, funcdef_no=57, decl_uid=12264, cgraph_uid=58, symbol_order=59)

Modification phase of node FlexCAN_StartRxMessageBufferData/59
FlexCAN_StartRxMessageBufferData (uint8 instance, uint8 mb_idx, struct Flexcan_Ip_MsgBuffType * data, boolean isPolling)
{
  struct Flexcan_Ip_StateType * state;
  const struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned char _6;
  int _7;
  <unnamed type> _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_11(D);
  base_13 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_13
  # DEBUG BEGIN_STMT
  state_14 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_14
  # DEBUG BEGIN_STMT
  _2 = instance_11(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = state_14->bIsLegacyFifoEn;
  _5 = state_14->u32MaxMbNum;
  _6 = FlexCAN_IsMbOutOfRange (base_13, mb_idx_16(D), _4, _5);
  if (_6 == 1)
    goto <bb 5>; [21.72%]
  else
    goto <bb 3>; [78.28%]

  <bb 3> [local count: 840525101]:
  # DEBUG BEGIN_STMT
  _7 = (int) mb_idx_16(D);
  _8 ={v} state_14->mbs[_7].state;
  if (_8 != 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 546341316]:
  # DEBUG BEGIN_STMT
  state_14->mbs[_7].state ={v} 1;
  # DEBUG BEGIN_STMT
  state_14->mbs[_7].pMBmessage = data_19(D);
  # DEBUG BEGIN_STMT
  state_14->mbs[_7].isPolling = isPolling_21(D);

  <bb 5> [local count: 1073741824]:
  # result_9 = PHI <4(2), 2(3), 0(4)>
  # DEBUG result => result_9
  # DEBUG BEGIN_STMT
  return result_9;

}



;; Function FlexCAN_StartSendData (FlexCAN_StartSendData, funcdef_no=58, decl_uid=12270, cgraph_uid=59, symbol_order=60)

Modification phase of node FlexCAN_StartSendData/60
FlexCAN_StartSendData (uint8 Flexcan_Ip_u8Instance, uint8 mb_idx, const struct Flexcan_Ip_DataInfoType * tx_info, uint32 msg_id, const uint8 * mb_data)
{
  volatile uint32 * pMbAddr;
  struct FLEXCAN_Type * base;
  struct Flexcan_Ip_StateType * state;
  struct Flexcan_Ip_MsbuffCodeStatusType cs;
  Flexcan_Ip_StatusType eResult;
  int _1;
  _Bool _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  unsigned char _9;
  _Bool _10;
  unsigned char _11;
  unsigned char _12;
  long unsigned int _13;
  unsigned char _14;
  int _15;
  <unnamed type> _16;
  unsigned char _17;
  unsigned char _18;
  long unsigned int _19;
  <unnamed type> _20;
  unsigned char _21;
  unsigned char _22;
  unsigned char _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) Flexcan_Ip_u8Instance_27(D);
  state_29 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_29
  # DEBUG BEGIN_STMT
  base_30 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_30
  # DEBUG BEGIN_STMT
  # DEBUG pMbAddr => 0B
  # DEBUG BEGIN_STMT
  _2 = Flexcan_Ip_u8Instance_27(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = tx_info_32(D) != 0B;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 = tx_info_32(D)->data_length;
  _7 = (unsigned char) _6;
  _8 = (long unsigned int) mb_idx_34(D);
  _9 = FlexCAN_GetMbPayloadSize (base_30, _8);
  _10 = _7 <= _9;
  _11 = (unsigned char) _10;
  DevAssert (_11);
  # DEBUG BEGIN_STMT
  _12 = state_29->bIsLegacyFifoEn;
  _13 = state_29->u32MaxMbNum;
  _14 = FlexCAN_IsMbOutOfRange (base_30, mb_idx_34(D), _12, _13);
  if (_14 == 1)
    goto <bb 8>; [21.72%]
  else
    goto <bb 3>; [78.28%]

  <bb 3> [local count: 840525101]:
  # DEBUG BEGIN_STMT
  _15 = (int) mb_idx_34(D);
  _16 ={v} state_29->mbs[_15].state;
  if (_16 != 0)
    goto <bb 8>; [52.23%]
  else
    goto <bb 4>; [47.77%]

  <bb 4> [local count: 401518840]:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_30, _8);
  # DEBUG BEGIN_STMT
  state_29->mbs[_15].state ={v} 2;
  # DEBUG BEGIN_STMT
  state_29->mbs[_15].time_stamp = 0;
  # DEBUG BEGIN_STMT
  _17 = tx_info_32(D)->is_polling;
  state_29->mbs[_15].isPolling = _17;
  # DEBUG BEGIN_STMT
  _18 = tx_info_32(D)->is_remote;
  state_29->mbs[_15].isRemote = _18;
  # DEBUG BEGIN_STMT
  _19 = tx_info_32(D)->data_length;
  cs.dataLen = _19;
  # DEBUG BEGIN_STMT
  _20 = tx_info_32(D)->msg_id_type;
  cs.msgIdType = _20;
  # DEBUG BEGIN_STMT
  _21 = tx_info_32(D)->fd_enable;
  cs.fd_enable = _21;
  # DEBUG BEGIN_STMT
  _22 = tx_info_32(D)->fd_padding;
  cs.fd_padding = _22;
  # DEBUG BEGIN_STMT
  _23 = tx_info_32(D)->enable_brs;
  cs.enable_brs = _23;
  # DEBUG BEGIN_STMT
  if (_18 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 200759420]:
  # DEBUG BEGIN_STMT
  cs.code = 28;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 200759420]:
  # DEBUG BEGIN_STMT
  cs.code = 12;

  <bb 7> [local count: 401518840]:
  # DEBUG BEGIN_STMT
  pMbAddr_51 = FlexCAN_GetMsgBuffRegion (base_30, _8);
  # DEBUG pMbAddr => pMbAddr_51
  # DEBUG BEGIN_STMT
  FlexCAN_SetTxMsgBuff (pMbAddr_51, &cs, msg_id_52(D), mb_data_53(D), 0);

  <bb 8> [local count: 1073741824]:
  # eResult_24 = PHI <4(2), 2(3), 0(7)>
  # DEBUG eResult => eResult_24
  # DEBUG BEGIN_STMT
  cs ={v} {CLOBBER};
  return eResult_24;

}



;; Function FlexCAN_IRQHandlerRxMB (FlexCAN_IRQHandlerRxMB, funcdef_no=60, decl_uid=12279, cgraph_uid=61, symbol_order=62)

Modification phase of node FlexCAN_IRQHandlerRxMB/62
FlexCAN_IRQHandlerRxMB (uint8 instance, uint32 mb_idx)
{
  boolean bCurrentIntStat;
  struct Flexcan_Ip_MsgBuffType data;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  int _1;
  struct Flexcan_Ip_MsgBuffType * _2;
  struct Flexcan_Ip_MsgBuffType * _3;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _4;
  <unnamed type> _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  long unsigned int vol.6_29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_13(D);
  base_15 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_15
  # DEBUG BEGIN_STMT
  state_16 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG bCurrentIntStat => 0
  # DEBUG BEGIN_STMT
  _2 = state_16->mbs[mb_idx_17(D)].pMBmessage;
  if (_2 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  state_16->mbs[mb_idx_17(D)].pMBmessage = &data;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FlexCAN_LockRxMsgBuff (base_15, mb_idx_17(D));
  # DEBUG BEGIN_STMT
  _3 = state_16->mbs[mb_idx_17(D)].pMBmessage;
  FlexCAN_GetMsgBuff (base_15, mb_idx_17(D), _3);
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_15, mb_idx_17(D));
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG INLINE_ENTRY FlexCAN_UnlockRxMsgBuff
  # DEBUG BEGIN_STMT
  vol.6_29 ={v} MEM[(const struct FLEXCAN_Type *)base_15].TIMER;
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  state_16->mbs[mb_idx_17(D)].state ={v} 0;
  # DEBUG BEGIN_STMT
  bCurrentIntStat_23 = state_16->mbs[mb_idx_17(D)].isPolling;
  # DEBUG bCurrentIntStat => bCurrentIntStat_23
  # DEBUG BEGIN_STMT
  _4 = state_16->callback;
  if (_4 != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _4 (instance_13(D), 0, mb_idx_17(D), state_16);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} state_16->mbs[mb_idx_17(D)].state;
  if (_5 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 536870913]:
  _6 = state_16->mbs[mb_idx_17(D)].isPolling;
  if (_6 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  state_16->mbs[mb_idx_17(D)].isPolling = 1;
  # DEBUG BEGIN_STMT
  _7 = state_16->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (base_15, instance_13(D), mb_idx_17(D), 0, _7);
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 896574424]:
  # DEBUG BEGIN_STMT
  if (bCurrentIntStat_23 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 448287212]:
  _8 = state_16->mbs[mb_idx_17(D)].isPolling;
  if (_8 == 1)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 90733332]:
  # DEBUG BEGIN_STMT
  _9 = state_16->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (base_15, instance_13(D), mb_idx_17(D), 0, _9);

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  data ={v} {CLOBBER};
  return;

}



;; Function FlexCAN_IRQHandlerEnhancedRxFIFO (FlexCAN_IRQHandlerEnhancedRxFIFO, funcdef_no=65, decl_uid=12300, cgraph_uid=66, symbol_order=67)

Modification phase of node FlexCAN_IRQHandlerEnhancedRxFIFO/67
Adjusting mask for param 1 to 0x1f
Setting value range of param 1 [0, 31]
FlexCAN_IRQHandlerEnhancedRxFIFO (uint8 instance, uint32 intType)
{
  struct Flexcan_Ip_MsgBuffType data;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  int _1;
  <unnamed type> _2;
  struct Flexcan_Ip_MsgBuffType * _3;
  struct Flexcan_Ip_MsgBuffType * _4;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _5;
  <unnamed type> _6;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _7;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _8;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _9;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_13(D);
  base_15 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_15
  # DEBUG BEGIN_STMT
  state_16 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (intType_17(D)) <default: <L20> [20.00%], case 28: <L0> [20.00%], case 29: <L21> [20.00%], case 30: <L22> [20.00%], case 31: <L23> [20.00%]>

  <bb 3> [local count: 214748365]:
<L0>:
  # DEBUG BEGIN_STMT
  _2 ={v} state_16->enhancedFifoOutput.state;
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 4> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  _3 = state_16->enhancedFifoOutput.pMBmessage;
  if (_3 == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 21904333]:
  # DEBUG BEGIN_STMT
  state_16->enhancedFifoOutput.pMBmessage = &data;

  <bb 6> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  _4 = state_16->enhancedFifoOutput.pMBmessage;
  FlexCAN_ReadEnhancedRxFifo (base_15, _4);
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG intFlag => intType_17(D)
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  _27 = 1 << intType_17(D);
  base_15->ERFSR ={v} _27;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG intFlag => 29
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  base_15->ERFSR ={v} 536870912;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG intFlag => 30
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  base_15->ERFSR ={v} 1073741824;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  state_16->enhancedFifoOutput.state ={v} 0;
  # DEBUG BEGIN_STMT
  _5 = state_16->callback;
  if (_5 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 7> [local count: 51110111]:
  # DEBUG BEGIN_STMT
  _5 (instance_13(D), 5, 255, state_16);

  <bb 8> [local count: 73014444]:
  # DEBUG BEGIN_STMT
  _6 ={v} state_16->enhancedFifoOutput.state;
  if (_6 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 9> [local count: 24094767]:
  # DEBUG BEGIN_STMT
  FlexCAN_CompleteRxMessageEnhancedFifoData (instance_13(D));
  goto <bb 16>; [100.00%]

  <bb 10> [local count: 214748365]:
<L21>:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG intFlag => intType_17(D)
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  _28 = 1 << intType_17(D);
  base_15->ERFSR ={v} _28;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  _7 = state_16->callback;
  if (_7 != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 16>; [30.00%]

  <bb 11> [local count: 150323855]:
  # DEBUG BEGIN_STMT
  _7 (instance_13(D), 6, 255, state_16);
  goto <bb 16>; [100.00%]

  <bb 12> [local count: 214748365]:
<L22>:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG intFlag => intType_17(D)
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  _29 = 1 << intType_17(D);
  base_15->ERFSR ={v} _29;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  _8 = state_16->callback;
  if (_8 != 0B)
    goto <bb 13>; [70.00%]
  else
    goto <bb 16>; [30.00%]

  <bb 13> [local count: 150323855]:
  # DEBUG BEGIN_STMT
  _8 (instance_13(D), 7, 255, state_16);
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 214748365]:
<L23>:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_15
  # DEBUG intFlag => intType_17(D)
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  _30 = 1 << intType_17(D);
  base_15->ERFSR ={v} _30;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  _9 = state_16->callback;
  if (_9 != 0B)
    goto <bb 15>; [70.00%]
  else
    goto <bb 16>; [30.00%]

  <bb 15> [local count: 150323855]:
  # DEBUG BEGIN_STMT
  _9 (instance_13(D), 8, 255, state_16);

  <bb 16> [local count: 1073741824]:
<L20>:
  data ={v} {CLOBBER};
  return;

}



;; Function FlexCAN_IRQHandlerRxFIFO (FlexCAN_IRQHandlerRxFIFO, funcdef_no=62, decl_uid=12285, cgraph_uid=63, symbol_order=64)

Modification phase of node FlexCAN_IRQHandlerRxFIFO/64
FlexCAN_IRQHandlerRxFIFO (uint8 instance, uint32 mb_idx)
{
  struct Flexcan_Ip_MsgBuffType data;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  int _1;
  struct Flexcan_Ip_MsgBuffType * _2;
  <unnamed type> _3;
  struct Flexcan_Ip_MsgBuffType * _4;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _5;
  <unnamed type> _6;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _7;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _8;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_12(D);
  base_14 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_14
  # DEBUG BEGIN_STMT
  state_15 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = state_15->mbs[0].pMBmessage;
  if (_2 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  state_15->mbs[0].pMBmessage = &data;

  <bb 4> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  switch (mb_idx_17(D)) <default: <L17> [25.00%], case 5: <L2> [25.00%], case 6: <L9> [25.00%], case 7: <L12> [25.00%]>

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  _3 ={v} state_15->mbs[0].state;
  if (_3 == 1)
    goto <bb 6>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 6> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  _4 = state_15->mbs[0].pMBmessage;
  FlexCAN_ReadRxFifo (base_14, _4);
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  # DEBUG BEGIN_STMT
  state_15->mbs[0].state ={v} 0;
  # DEBUG BEGIN_STMT
  _5 = state_15->callback;
  if (_5 != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 7> [local count: 38031935]:
  # DEBUG BEGIN_STMT
  _5 (instance_12(D), 1, 0, state_15);

  <bb 8> [local count: 54331336]:
  # DEBUG BEGIN_STMT
  _6 ={v} state_15->mbs[0].state;
  if (_6 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 9> [local count: 17929341]:
  # DEBUG BEGIN_STMT
  state_15->mbs[0].isPolling = 1;
  # DEBUG BEGIN_STMT
  FlexCAN_CompleteRxMessageFifoData (instance_12(D));
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 268435456]:
<L9>:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  # DEBUG BEGIN_STMT
  _7 = state_15->callback;
  if (_7 != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 11> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  _7 (instance_12(D), 2, 0, state_15);
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 268435456]:
<L12>:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_14, mb_idx_17(D));
  # DEBUG BEGIN_STMT
  _8 = state_15->callback;
  if (_8 != 0B)
    goto <bb 13>; [70.00%]
  else
    goto <bb 14>; [30.00%]

  <bb 13> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  _8 (instance_12(D), 3, 0, state_15);

  <bb 14> [local count: 1073741824]:
<L17>:
  data ={v} {CLOBBER};
  return;

}



;; Function FlexCAN_ProccessLegacyRxFIFO (FlexCAN_ProccessLegacyRxFIFO, funcdef_no=56, decl_uid=12276, cgraph_uid=57, symbol_order=58)

Modification phase of node FlexCAN_ProccessLegacyRxFIFO/58
FlexCAN_ProccessLegacyRxFIFO (uint8 u8Instance, uint32 u32TimeoutMs)
{
  uint32 u32intType;
  uint32 mS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  struct FLEXCAN_Type * pBase;
  struct Flexcan_Ip_StateType * pState;
  Flexcan_Ip_StatusType eResult;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  <unnamed type> _4;
  unsigned char _5;
  <unnamed type> _6;
  <unnamed type> _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  <unnamed type> _11;
  long unsigned int _37;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 0
  # DEBUG BEGIN_STMT
  _1 = (int) u8Instance_23(D);
  pState_25 = Flexcan_Ip_apxState[_1];
  # DEBUG pState => pState_25
  # DEBUG BEGIN_STMT
  pBase_26 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_26
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  _2 = u32TimeoutMs_28(D) * 1000;
  mS2Ticks_30 = OsIf_MicrosToTicks (_2, 0);
  # DEBUG mS2Ticks => mS2Ticks_30
  # DEBUG BEGIN_STMT
  # DEBUG u32intType => 0
  # DEBUG BEGIN_STMT
  _3 = OsIf_GetCounter (0);
  timeStart = _3;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _4 = pState_25->transferType;
  if (_4 == 1)
    goto <bb 17>; [16.00%]
  else
    goto <bb 8>; [84.00%]

  <bb 17> [local count: 162349764]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 487049291]:
  # DEBUG BEGIN_STMT
  _5 = FlexCAN_GetBuffStatusFlag (pBase_26, u32intType_15);
  if (_5 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 160726266]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerRxFIFO (u8Instance_23(D), u32intType_15);

  <bb 6> [local count: 487049291]:
  # DEBUG BEGIN_STMT
  u32intType_35 = u32intType_15 + 4294967295;
  # DEBUG u32intType => u32intType_35

  <bb 7> [local count: 649399056]:
  # u32intType_15 = PHI <u32intType_35(6), 7(17)>
  # DEBUG u32intType => u32intType_15
  # DEBUG BEGIN_STMT
  if (u32intType_15 > 4)
    goto <bb 4>; [75.00%]
  else
    goto <bb 8>; [25.00%]

  <bb 8> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _37 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_38 = timeElapsed_14 + _37;
  # DEBUG timeElapsed => timeElapsed_38
  # DEBUG BEGIN_STMT
  if (mS2Ticks_30 <= timeElapsed_38)
    goto <bb 10>; [5.50%]
  else
    goto <bb 18>; [94.50%]

  <bb 18> [local count: 958878293]:

  <bb 9> [local count: 1073741824]:
  # timeElapsed_14 = PHI <0(2), timeElapsed_38(18)>
  # DEBUG timeElapsed => timeElapsed_14
  # DEBUG BEGIN_STMT
  _6 ={v} pState_25->mbs[0].state;
  if (_6 == 1)
    goto <bb 3>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863532]:
  # eResult_12 = PHI <3(8), 0(9)>
  # DEBUG eResult => eResult_12
  # DEBUG BEGIN_STMT
  if (eResult_12 == 3)
    goto <bb 11>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 11> [local count: 39053601]:
  _7 = pState_25->transferType;
  if (_7 != 1)
    goto <bb 12>; [48.88%]
  else
    goto <bb 13>; [51.12%]

  <bb 12> [local count: 19089400]:
  # DEBUG BEGIN_STMT
  _8 = pState_25->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (pBase_26, u8Instance_23(D), 5, 0, _8);
  # DEBUG BEGIN_STMT
  _9 = pState_25->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (pBase_26, u8Instance_23(D), 6, 0, _9);
  # DEBUG BEGIN_STMT
  _10 = pState_25->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (pBase_26, u8Instance_23(D), 7, 0, _10);

  <bb 13> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _11 ={v} pState_25->mbs[0].state;
  switch (_11) <default: <L18> [33.33%], case 0: <L22> [33.33%], case 1: <L16> [33.33%]>

  <bb 14> [local count: 38284015]:
<L16>:
  # DEBUG BEGIN_STMT
  pState_25->mbs[0].state ={v} 0;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 38284015]:
<L18>:
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 1
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 114852045]:
  # eResult_13 = PHI <eResult_12(14), 0(13), 1(15)>
<L22>:
  # DEBUG eResult => eResult_13
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return eResult_13;

}



;; Function FlexCAN_GetMsgBuffIntStatusFlag (FlexCAN_GetMsgBuffIntStatusFlag, funcdef_no=37, decl_uid=11813, cgraph_uid=38, symbol_order=37)

Modification phase of node FlexCAN_GetMsgBuffIntStatusFlag/37
FlexCAN_GetMsgBuffIntStatusFlag (const struct FLEXCAN_Type * base, uint32 msgBuffIdx)
{
  uint32 mask;
  uint8 flag;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG flag => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_8(D) <= 31)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  mask_11 ={v} base_10(D)->IMASK1;
  # DEBUG mask => mask_11
  # DEBUG BEGIN_STMT
  _1 ={v} base_10(D)->IFLAG1;
  _2 = _1 & mask_11;
  _3 = msgBuffIdx_8(D);
  _4 = _2 >> _3;
  _5 = (unsigned char) _4;
  flag_12 = _5 & 1;
  # DEBUG flag => flag_12
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_8(D) <= 63)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435457]:
  flag_13 = FlexCAN_GetMsgBuffIntStatusFlag.part.0 (base_10(D), msgBuffIdx_8(D));

  <bb 6> [local count: 1073741824]:
  # flag_6 = PHI <flag_12(3), 0(4), flag_13(5)>
  # DEBUG flag => flag_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return flag_6;

}



;; Function FlexCAN_Ip_Init_Privileged (FlexCAN_Ip_Init_Privileged, funcdef_no=68, decl_uid=11386, cgraph_uid=69, symbol_order=70)

Modification phase of node FlexCAN_Ip_Init_Privileged/70
FlexCAN_Ip_Init_Privileged (uint8 Flexcan_Ip_u8Instance, struct Flexcan_Ip_StateType * Flexcan_Ip_pState, const struct Flexcan_Ip_ConfigType * Flexcan_Ip_pData)
{
  uint32 i;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType eResult;
  int _1;
  _Bool _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  <unnamed type> _6;
  <unnamed type> _7;
  void (*<Tb98>) (uint8, Flexcan_Ip_EventType, uint32, const struct Flexcan_Ip_StateType *) _8;
  void (*<Tb98>) (uint8, Flexcan_Ip_EventType, uint32, const struct Flexcan_Ip_StateType *) _9;
  unsigned char _10;
  unsigned char _11;
  long unsigned int _12;

  <bb 2> [local count: 50107952]:
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 0
  # DEBUG BEGIN_STMT
  _1 = (int) Flexcan_Ip_u8Instance_16(D);
  pBase_18 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_18
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = Flexcan_Ip_u8Instance_16(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = Flexcan_Ip_pData_20(D) != 0B;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  eResult_23 = FlexCAN_InitController (Flexcan_Ip_u8Instance_16(D), pBase_18, Flexcan_Ip_pData_20(D));
  # DEBUG eResult => eResult_23
  # DEBUG BEGIN_STMT
  if (eResult_23 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 3> [local count: 16535624]:
  # DEBUG BEGIN_STMT
  FlexCAN_InitBaudrate (pBase_18, Flexcan_Ip_pData_20(D));
  # DEBUG BEGIN_STMT
  _6 = Flexcan_Ip_pData_20(D)->flexcanMode;
  FlexCAN_SetOperationMode (pBase_18, _6);
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 1057206200]:
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->mbs[i_13].isPolling = 1;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->mbs[i_13].pMBmessage = 0B;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->mbs[i_13].state ={v} 0;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->mbs[i_13].time_stamp = 0;
  # DEBUG BEGIN_STMT
  i_43 = i_13 + 1;
  # DEBUG i => i_43

  <bb 5> [local count: 1073741824]:
  # i_13 = PHI <0(3), i_43(4)>
  # DEBUG i => i_13
  # DEBUG BEGIN_STMT
  if (i_13 != 64)
    goto <bb 4>; [98.46%]
  else
    goto <bb 6>; [1.54%]

  <bb 6> [local count: 16535624]:
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->enhancedFifoOutput.isPolling = 1;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->enhancedFifoOutput.state ={v} 0;
  # DEBUG BEGIN_STMT
  _7 = Flexcan_Ip_pData_20(D)->transfer_type;
  Flexcan_Ip_pState_26(D)->transferType = _7;
  # DEBUG BEGIN_STMT
  _8 = Flexcan_Ip_pData_20(D)->Callback;
  Flexcan_Ip_pState_26(D)->callback = _8;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->callbackParam = 0B;
  # DEBUG BEGIN_STMT
  _9 = Flexcan_Ip_pData_20(D)->ErrorCallback;
  Flexcan_Ip_pState_26(D)->error_callback = _9;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->errorCallbackParam = 0B;
  # DEBUG BEGIN_STMT
  _10 = Flexcan_Ip_pData_20(D)->is_rx_fifo_needed;
  Flexcan_Ip_pState_26(D)->bIsLegacyFifoEn = _10;
  # DEBUG BEGIN_STMT
  _11 = Flexcan_Ip_pData_20(D)->is_enhanced_rx_fifo_needed;
  Flexcan_Ip_pState_26(D)->bIsEnhancedFifoEn = _11;
  # DEBUG BEGIN_STMT
  _12 = Flexcan_Ip_pData_20(D)->max_num_mb;
  Flexcan_Ip_pState_26(D)->u32MaxMbNum = _12;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_pState_26(D)->isIntActive = 1;
  # DEBUG BEGIN_STMT
  Flexcan_Ip_apxState[_1] = Flexcan_Ip_pState_26(D);

  <bb 7> [local count: 50107952]:
  # DEBUG BEGIN_STMT
  return eResult_23;

}



;; Function FlexCAN_Ip_Send (FlexCAN_Ip_Send, funcdef_no=69, decl_uid=11461, cgraph_uid=70, symbol_order=71)

Modification phase of node FlexCAN_Ip_Send/71
FlexCAN_Ip_Send (uint8 instance, uint8 mb_idx, const struct Flexcan_Ip_DataInfoType * tx_info, uint32 msg_id, const uint8 * mb_data)
{
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  long unsigned int _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  _1 = (int) instance_12(D);
  base_14 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_14
  # DEBUG BEGIN_STMT
  state_15 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_15
  # DEBUG BEGIN_STMT
  _2 = instance_12(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = tx_info_17(D) != 0B;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 = FlexCAN_IsListenOnlyModeEnabled (base_14);
  if (_6 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  result_24 = FlexCAN_StartSendData (instance_12(D), mb_idx_20(D), tx_info_17(D), msg_id_21(D), mb_data_22(D));
  # DEBUG result => result_24
  # DEBUG BEGIN_STMT
  if (result_24 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 177167401]:
  _7 = tx_info_17(D)->is_polling;
  if (_7 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 58465242]:
  # DEBUG BEGIN_STMT
  _8 = (long unsigned int) mb_idx_20(D);
  _9 = state_15->isIntActive;
  result_26 = FlexCAN_SetMsgBuffIntCmd (base_14, instance_12(D), _8, 1, _9);
  # DEBUG result => result_26

  <bb 6> [local count: 1073741824]:
  # result_10 = PHI <1(2), result_24(3), 0(4), result_26(5)>
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  return result_10;

}



;; Function FlexCAN_Ip_ConfigRxMb (FlexCAN_Ip_ConfigRxMb, funcdef_no=70, decl_uid=11485, cgraph_uid=71, symbol_order=72)

Modification phase of node FlexCAN_Ip_ConfigRxMb/72
FlexCAN_Ip_ConfigRxMb (uint8 instance, uint8 mb_idx, const struct Flexcan_Ip_DataInfoType * rx_info, uint32 msg_id)
{
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  struct Flexcan_Ip_MsbuffCodeStatusType cs;
  Flexcan_Ip_StatusType eResult;
  int _1;
  _Bool _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  unsigned char _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  <unnamed type> _11;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instance_15(D);
  base_17 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_17
  # DEBUG BEGIN_STMT
  state_18 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_18
  # DEBUG BEGIN_STMT
  _2 = instance_15(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = rx_info_20(D) != 0B;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 = state_18->bIsLegacyFifoEn;
  _7 = state_18->u32MaxMbNum;
  _8 = FlexCAN_IsMbOutOfRange (base_17, mb_idx_22(D), _6, _7);
  if (_8 == 1)
    goto <bb 4>; [36.03%]
  else
    goto <bb 3>; [63.97%]

  <bb 3> [local count: 686872646]:
  # DEBUG BEGIN_STMT
  _9 = (long unsigned int) mb_idx_22(D);
  FlexCAN_ClearMsgBuffIntStatusFlag (base_17, _9);
  # DEBUG BEGIN_STMT
  _10 = rx_info_20(D)->data_length;
  cs.dataLen = _10;
  # DEBUG BEGIN_STMT
  _11 = rx_info_20(D)->msg_id_type;
  cs.msgIdType = _11;
  # DEBUG BEGIN_STMT
  _12 = rx_info_20(D)->fd_enable;
  cs.fd_enable = _12;
  # DEBUG BEGIN_STMT
  cs.code = 15;
  # DEBUG BEGIN_STMT
  FlexCAN_SetRxMsgBuff (base_17, _9, &cs, msg_id_29(D));
  # DEBUG BEGIN_STMT
  cs.code = 0;
  # DEBUG BEGIN_STMT
  FlexCAN_SetRxMsgBuff (base_17, _9, &cs, msg_id_29(D));
  # DEBUG BEGIN_STMT
  cs.code = 4;
  # DEBUG BEGIN_STMT
  FlexCAN_SetRxMsgBuff (base_17, _9, &cs, msg_id_29(D));

  <bb 4> [local count: 1073741824]:
  # eResult_13 = PHI <4(2), 0(3)>
  # DEBUG eResult => eResult_13
  # DEBUG BEGIN_STMT
  cs ={v} {CLOBBER};
  return eResult_13;

}



;; Function FlexCAN_Ip_Receive (FlexCAN_Ip_Receive, funcdef_no=71, decl_uid=11473, cgraph_uid=72, symbol_order=73)

Modification phase of node FlexCAN_Ip_Receive/73
FlexCAN_Ip_Receive (uint8 instance, uint8 mb_idx, struct Flexcan_Ip_MsgBuffType * data, boolean isPolling)
{
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instance_8(D);
  base_10 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_10
  # DEBUG BEGIN_STMT
  state_11 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_11
  # DEBUG BEGIN_STMT
  _2 = instance_8(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  result_17 = FlexCAN_StartRxMessageBufferData (instance_8(D), mb_idx_13(D), data_14(D), isPolling_15(D));
  # DEBUG result => result_17
  # DEBUG BEGIN_STMT
  if (result_17 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (isPolling_15(D) == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) mb_idx_13(D);
  _5 = state_11->isIntActive;
  result_19 = FlexCAN_SetMsgBuffIntCmd (base_10, instance_8(D), _4, 1, _5);
  # DEBUG result => result_19

  <bb 5> [local count: 1073741824]:
  # result_6 = PHI <result_17(2), 0(3), result_19(4)>
  # DEBUG result => result_6
  # DEBUG BEGIN_STMT
  return result_6;

}



;; Function FlexCAN_Ip_ReceiveBlocking (FlexCAN_Ip_ReceiveBlocking, funcdef_no=72, decl_uid=11532, cgraph_uid=73, symbol_order=74)

Modification phase of node FlexCAN_Ip_ReceiveBlocking/74
FlexCAN_Ip_ReceiveBlocking (uint8 instance, uint8 mb_idx, struct Flexcan_Ip_MsgBuffType * data, boolean isPolling, uint32 u32TimeoutMs)
{
  struct FLEXCAN_Type * base;
  struct Flexcan_Ip_StateType * state;
  uint32 mS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  Flexcan_Ip_StatusType result;
  long unsigned int _1;
  _Bool _2;
  unsigned char _3;
  int _4;
  long unsigned int _5;
  unsigned char _6;
  long unsigned int _7;
  long unsigned int _8;
  unsigned char _9;
  int _10;
  <unnamed type> _11;
  long unsigned int _12;
  unsigned char _13;
  int _14;
  <unnamed type> _15;
  long unsigned int _47;

  <bb 2> [local count: 348071315]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  _1 = u32TimeoutMs_28(D) * 1000;
  mS2Ticks_30 = OsIf_MicrosToTicks (_1, 0);
  # DEBUG mS2Ticks => mS2Ticks_30
  # DEBUG BEGIN_STMT
  _2 = instance_31(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = (int) instance_31(D);
  state_33 = Flexcan_Ip_apxState[_4];
  # DEBUG state => state_33
  # DEBUG BEGIN_STMT
  base_34 = Flexcan_Ip_apxBase[_4];
  # DEBUG base => base_34
  # DEBUG BEGIN_STMT
  result_39 = FlexCAN_StartRxMessageBufferData (instance_31(D), mb_idx_35(D), data_36(D), isPolling_37(D));
  # DEBUG result => result_39
  # DEBUG BEGIN_STMT
  if (result_39 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 174035658]:
  if (isPolling_37(D) == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 57431767]:
  # DEBUG BEGIN_STMT
  _5 = (long unsigned int) mb_idx_35(D);
  _6 = state_33->isIntActive;
  result_41 = FlexCAN_SetMsgBuffIntCmd (base_34, instance_31(D), _5, 1, _6);
  # DEBUG result => result_41

  <bb 5> [local count: 348071315]:
  # result_16 = PHI <result_39(2), 0(3), result_41(4)>
  # DEBUG result => result_16
  # DEBUG BEGIN_STMT
  if (result_16 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 6> [local count: 114863534]:
  # DEBUG BEGIN_STMT
  _7 = OsIf_GetCounter (0);
  timeStart = _7;
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  if (isPolling_37(D) == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 8> [local count: 205372451]:
  # DEBUG BEGIN_STMT
  _8 = (long unsigned int) mb_idx_35(D);
  _9 = FlexCAN_GetBuffStatusFlag (base_34, _8);
  if (_9 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 67772909]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerRxMB (instance_31(D), _8);

  <bb 10> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _47 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_48 = timeElapsed_19 + _47;
  # DEBUG timeElapsed => timeElapsed_48
  # DEBUG BEGIN_STMT
  if (mS2Ticks_30 <= timeElapsed_48)
    goto <bb 12>; [5.50%]
  else
    goto <bb 20>; [94.50%]

  <bb 20> [local count: 958878293]:

  <bb 11> [local count: 1073741824]:
  # timeElapsed_19 = PHI <0(6), timeElapsed_48(20)>
  # DEBUG timeElapsed => timeElapsed_19
  # DEBUG BEGIN_STMT
  _10 = (int) mb_idx_35(D);
  _11 ={v} state_33->mbs[_10].state;
  if (_11 == 1)
    goto <bb 7>; [94.50%]
  else
    goto <bb 12>; [5.50%]

  <bb 12> [local count: 348071313]:
  # result_17 = PHI <result_16(5), 3(10), 0(11)>
  # DEBUG result => result_17
  # DEBUG BEGIN_STMT
  if (result_17 == 3)
    goto <bb 13>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 13> [local count: 118344246]:
  if (isPolling_37(D) == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 39053601]:
  # DEBUG BEGIN_STMT
  _12 = (long unsigned int) mb_idx_35(D);
  _13 = state_33->isIntActive;
  FlexCAN_SetMsgBuffIntCmd (base_34, instance_31(D), _12, 0, _13);

  <bb 15> [local count: 348071313]:
  # DEBUG BEGIN_STMT
  if (result_17 != 4)
    goto <bb 16>; [66.00%]
  else
    goto <bb 19>; [34.00%]

  <bb 16> [local count: 229727067]:
  if (result_17 != 2)
    goto <bb 17>; [66.00%]
  else
    goto <bb 19>; [34.00%]

  <bb 17> [local count: 151619864]:
  # DEBUG BEGIN_STMT
  _14 = (int) mb_idx_35(D);
  _15 ={v} state_33->mbs[_14].state;
  if (_15 == 0)
    goto <bb 19>; [65.00%]
  else
    goto <bb 18>; [35.00%]

  <bb 18> [local count: 53066952]:
  # DEBUG BEGIN_STMT
  state_33->mbs[_14].state ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG result => 3

  <bb 19> [local count: 348071314]:
  # result_18 = PHI <result_17(15), result_17(16), 0(17), 3(18)>
  # DEBUG result => result_18
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return result_18;

}



;; Function FlexCAN_Ip_RxFifo (FlexCAN_Ip_RxFifo, funcdef_no=73, decl_uid=11476, cgraph_uid=74, symbol_order=75)

Modification phase of node FlexCAN_Ip_RxFifo/75
FlexCAN_Ip_RxFifo (uint8 instance, struct Flexcan_Ip_MsgBuffType * data)
{
  const struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  long unsigned int _19;
  signed int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = instance_7(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) instance_7(D);
  base_10 = Flexcan_Ip_apxBase[_3];
  # DEBUG base => base_10
  # DEBUG BEGIN_STMT
  _4 = FlexCAN_IsEnhancedRxFifoAvailable (base_10);
  if (_4 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 6>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_10
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhancedRxFifoEnabled
  # DEBUG BEGIN_STMT
  _19 ={v} base_10->ERFCR;
  _20 = (signed int) _19;
  if (_20 < 0)
    goto <bb 4>; [41.00%]
  else
    goto <bb 5>; [59.00%]

  <bb 4> [local count: 225047696]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  result_18 = FlexCAN_StartRxMessageEnhancedFifoData (instance_7(D), data_12(D));
  # DEBUG result => result_18
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 323849124]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  result_16 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  # DEBUG result => result_16
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  result_14 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  # DEBUG result => result_14

  <bb 7> [local count: 1073741824]:
  # result_5 = PHI <result_16(5), result_14(6), result_18(4)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_RxFifoBlocking (FlexCAN_Ip_RxFifoBlocking, funcdef_no=74, decl_uid=11480, cgraph_uid=75, symbol_order=76)

Modification phase of node FlexCAN_Ip_RxFifoBlocking/76
FlexCAN_Ip_RxFifoBlocking (uint8 instance, struct Flexcan_Ip_MsgBuffType * data, uint32 timeout)
{
  const struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _26;
  signed int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_7(D);
  base_9 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_9
  # DEBUG BEGIN_STMT
  _2 = instance_7(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = FlexCAN_IsEnhancedRxFifoAvailable (base_9);
  if (_4 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 8>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_9
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhancedRxFifoEnabled
  # DEBUG BEGIN_STMT
  _26 ={v} base_9->ERFCR;
  _27 = (signed int) _26;
  if (_27 < 0)
    goto <bb 4>; [41.00%]
  else
    goto <bb 5>; [59.00%]

  <bb 4> [local count: 225047696]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  result_23 = FlexCAN_StartRxMessageEnhancedFifoData (instance_7(D), data_12(D));
  # DEBUG result => result_23
  # DEBUG BEGIN_STMT
  if (result_23 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 5> [local count: 323849124]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  result_19 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  # DEBUG result => result_19
  # DEBUG BEGIN_STMT
  if (result_19 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 6> [local count: 74265740]:
  # DEBUG BEGIN_STMT
  result_25 = FlexCAN_ProccessEnhancedRxFifo (instance_7(D), timeout_15(D));
  # DEBUG result => result_25
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 106870211]:
  # DEBUG BEGIN_STMT
  result_21 = FlexCAN_ProccessLegacyRxFIFO (instance_7(D), timeout_15(D));
  # DEBUG result => result_21
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  result_14 = FlexCAN_StartRxMessageFifoData (instance_7(D), data_12(D));
  # DEBUG result => result_14
  # DEBUG BEGIN_STMT
  if (result_14 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 173198851]:
  # DEBUG BEGIN_STMT
  result_17 = FlexCAN_ProccessLegacyRxFIFO (instance_7(D), timeout_15(D));
  # DEBUG result => result_17

  <bb 10> [local count: 1073741824]:
  # result_5 = PHI <result_19(5), result_14(8), result_17(9), result_25(6), result_23(4), result_21(7)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_ConfigRxFifo_Privileged (FlexCAN_Ip_ConfigRxFifo_Privileged, funcdef_no=75, decl_uid=11390, cgraph_uid=76, symbol_order=77)

Modification phase of node FlexCAN_Ip_ConfigRxFifo_Privileged/77
FlexCAN_Ip_ConfigRxFifo_Privileged (uint8 instance, Flexcan_Ip_RxFifoIdElementFormatType id_format, const struct Flexcan_Ip_IdTableType * id_filter_table)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _23;
  signed int _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _23 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _24 = (signed int) _23;
  # DEBUG pBase => NULL
  # DEBUG D#1 => _24 < 0
  # DEBUG disabled => (boolean) D#1
  # DEBUG BEGIN_STMT
  if (_24 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741824]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetRxFifoFilter (pBase_13, id_format_18(D), id_filter_table_19(D));

  <bb 8> [local count: 1073741824]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_24 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_22 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_22
  # DEBUG BEGIN_STMT
  if (status_22 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_22

  <bb 11> [local count: 1073741823]:
  # result_5 = PHI <result_12(8), result_12(9), status_22(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged (FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged, funcdef_no=76, decl_uid=11393, cgraph_uid=77, symbol_order=78)

Modification phase of node FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged/78
FlexCAN_Ip_ConfigEnhancedRxFifo_Privileged (uint8 instance, const struct Flexcan_Ip_EnhancedIdTableType * id_filter_table)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  _Bool _5;
  unsigned char _6;
  long unsigned int _28;
  signed int _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_13(D);
  pBase_15 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_15
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_15
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _28 ={v} MEM[(const struct FLEXCAN_Type *)pBase_15].MCR;
  _29 = (signed int) _28;
  # DEBUG pBase => NULL
  # DEBUG D#2 => _29 < 0
  # DEBUG disabled => (boolean) D#2
  # DEBUG BEGIN_STMT
  _2 = instance_13(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = FlexCAN_IsEnhancedRxFifoAvailable (pBase_15);
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  _5 = id_filter_table_19(D) != 0B;
  _6 = (unsigned char) _5;
  DevAssert (_6);
  # DEBUG BEGIN_STMT
  if (_29 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_22 = FlexCAN_Enable (pBase_15);
  # DEBUG result => result_22

  <bb 4> [local count: 1073741824]:
  # result_7 = PHI <0(2), result_22(3)>
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  freeze_24 = FlexCAN_IsFreezeMode (pBase_15);
  # DEBUG freeze => freeze_24
  # DEBUG BEGIN_STMT
  if (freeze_24 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  if (result_7 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  if (result_7 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetEnhancedRxFifoFilter (pBase_15, id_filter_table_19(D));

  <bb 8> [local count: 1073741824]:
  # result_12 = PHI <result_7(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_29 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_27 = FlexCAN_Disable (pBase_15);
  # DEBUG status => status_27
  # DEBUG BEGIN_STMT
  if (status_27 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_27

  <bb 11> [local count: 1073741823]:
  # result_8 = PHI <result_12(8), result_12(9), status_27(10)>
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  return result_8;

}



;; Function FlexCAN_Ip_ConfigRemoteResponseMb (FlexCAN_Ip_ConfigRemoteResponseMb, funcdef_no=77, decl_uid=11538, cgraph_uid=78, symbol_order=79)

Modification phase of node FlexCAN_Ip_ConfigRemoteResponseMb/79
FlexCAN_Ip_ConfigRemoteResponseMb (uint8 instance, uint8 mb_idx, const struct Flexcan_Ip_DataInfoType * tx_info, uint32 msg_id, const uint8 * mb_data)
{
  volatile uint32 * pMbAddr;
  const struct Flexcan_Ip_StateType * const state;
  struct FLEXCAN_Type * pBase;
  struct Flexcan_Ip_MsbuffCodeStatusType cs;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  _Bool _8;
  unsigned char _9;
  long unsigned int _10;
  unsigned char _11;
  long unsigned int _12;
  unsigned char _13;
  _Bool _14;
  unsigned char _15;
  unsigned char _16;
  long unsigned int _17;
  unsigned char _18;
  long unsigned int _19;
  <unnamed type> _20;
  unsigned char _21;
  unsigned char _22;
  unsigned char _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instance_26(D);
  pBase_28 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_28
  # DEBUG BEGIN_STMT
  state_29 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_29
  # DEBUG BEGIN_STMT
  # DEBUG pMbAddr => 0B
  # DEBUG BEGIN_STMT
  _2 = instance_26(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = tx_info_31(D) != 0B;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 ={v} pBase_28->CTRL2;
  _7 = _6 & 131072;
  _8 = _7 == 0;
  _9 = (unsigned char) _8;
  DevAssert (_9);
  # DEBUG BEGIN_STMT
  _10 = tx_info_31(D)->data_length;
  _11 = (unsigned char) _10;
  _12 = (long unsigned int) mb_idx_34(D);
  _13 = FlexCAN_GetMbPayloadSize (pBase_28, _12);
  _14 = _11 <= _13;
  _15 = (unsigned char) _14;
  DevAssert (_15);
  # DEBUG BEGIN_STMT
  _16 = state_29->bIsLegacyFifoEn;
  _17 = state_29->u32MaxMbNum;
  _18 = FlexCAN_IsMbOutOfRange (pBase_28, mb_idx_34(D), _16, _17);
  if (_18 == 1)
    goto <bb 5>; [36.03%]
  else
    goto <bb 3>; [63.97%]

  <bb 3> [local count: 686872646]:
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19 = tx_info_31(D)->data_length;
  cs.dataLen = _19;
  # DEBUG BEGIN_STMT
  _20 = tx_info_31(D)->msg_id_type;
  cs.msgIdType = _20;
  # DEBUG BEGIN_STMT
  cs.code = 10;
  # DEBUG BEGIN_STMT
  cs.fd_enable = 0;
  # DEBUG BEGIN_STMT
  cs.enable_brs = 0;
  # DEBUG BEGIN_STMT
  cs.fd_padding = 0;
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (pBase_28, _12);
  # DEBUG BEGIN_STMT
  pMbAddr_46 = FlexCAN_GetMsgBuffRegion (pBase_28, _12);
  # DEBUG pMbAddr => pMbAddr_46
  # DEBUG BEGIN_STMT
  _21 = tx_info_31(D)->is_remote;
  FlexCAN_SetTxMsgBuff (pMbAddr_46, &cs, msg_id_47(D), mb_data_48(D), _21);
  # DEBUG BEGIN_STMT
  _22 = tx_info_31(D)->is_polling;
  if (_22 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 226667973]:
  # DEBUG BEGIN_STMT
  _23 = state_29->isIntActive;
  result_51 = FlexCAN_SetMsgBuffIntCmd (pBase_28, instance_26(D), _12, 1, _23);
  # DEBUG result => result_51

  <bb 5> [local count: 1073741824]:
  # result_24 = PHI <4(2), 0(3), result_51(4)>
  # DEBUG result => result_24
  # DEBUG BEGIN_STMT
  cs ={v} {CLOBBER};
  return result_24;

}



;; Function FlexCAN_Ip_GetTransferStatus (FlexCAN_Ip_GetTransferStatus, funcdef_no=78, decl_uid=11494, cgraph_uid=79, symbol_order=80)

Modification phase of node FlexCAN_Ip_GetTransferStatus/80
FlexCAN_Ip_GetTransferStatus (uint8 instance, uint8 mb_idx)
{
  Flexcan_Ip_StatusType status;
  const struct Flexcan_Ip_StateType * state;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  _Bool _5;
  unsigned char _6;
  int _7;
  <unnamed type> _8;
  <unnamed type> _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_11(D);
  state_13 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_13
  # DEBUG BEGIN_STMT
  # DEBUG status => 1
  # DEBUG BEGIN_STMT
  _2 = instance_11(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = mb_idx_15(D) + 192;
  _5 = _4 > 190;
  _6 = (unsigned char) _5;
  DevAssert (_6);
  # DEBUG BEGIN_STMT
  if (mb_idx_15(D) <= 63)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = (int) mb_idx_15(D);
  _8 ={v} state_13->mbs[_7].state;
  if (_8 == 0)
    goto <bb 7>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 4> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  # DEBUG status => 2
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _9 ={v} state_13->enhancedFifoOutput.state;
  if (_9 == 0)
    goto <bb 7>; [65.00%]
  else
    goto <bb 6>; [35.00%]

  <bb 6> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  # DEBUG status => 2

  <bb 7> [local count: 1073741824]:
  # status_10 = PHI <2(4), 0(5), 2(6), 0(3)>
  # DEBUG status => status_10
  # DEBUG BEGIN_STMT
  return status_10;

}



;; Function FlexCAN_IRQHandler (FlexCAN_IRQHandler, funcdef_no=80, decl_uid=11545, cgraph_uid=81, symbol_order=82)

Modification phase of node FlexCAN_IRQHandler/82
FlexCAN_IRQHandler (uint8 instance, uint32 startMbIdx, uint32 endMbIdx, boolean bEnhancedFifoExisted)
{
  uint32 mb_idx;
  boolean bIsSpuriousInt;
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  uint32 flag_reg;
  uint32 u32MbHandle;
  int _1;
  _Bool _3;
  unsigned char _4;
  _Bool _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  <unnamed type> _10;
  <unnamed type> _11;
  unsigned char _12;
  <unnamed type> _13;
  <unnamed type> _14;
  long unsigned int _53;
  signed int _54;

  <bb 2> [local count: 214818650]:
  # DEBUG BEGIN_STMT
  # DEBUG u32MbHandle => 0
  # DEBUG BEGIN_STMT
  # DEBUG flag_reg => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_28(D);
  base_30 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_30
  # DEBUG BEGIN_STMT
  state_31 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_31
  # DEBUG BEGIN_STMT
  # DEBUG bIsSpuriousInt => 1
  # DEBUG BEGIN_STMT
  # DEBUG mb_idx => endMbIdx_32(D)
  # DEBUG BEGIN_STMT
  _3 = instance_28(D) <= 3;
  _4 = (unsigned char) _3;
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  _5 = endMbIdx_32(D) <= 63;
  _6 = (unsigned char) _5;
  DevAssert (_6);
  # DEBUG BEGIN_STMT
  if (state_31 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 29>; [46.53%]

  <bb 29> [local count: 99955118]:
  goto <bb 25>; [100.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _7 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, endMbIdx_32(D));
  flag_reg_40 = (uint32) _7;
  # DEBUG flag_reg => flag_reg_40
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 958878294]:
  # DEBUG BEGIN_STMT
  mb_idx_41 = mb_idx_19 + 4294967295;
  # DEBUG mb_idx => mb_idx_41
  # DEBUG BEGIN_STMT
  _8 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_41);
  flag_reg_43 = (uint32) _8;
  # DEBUG flag_reg => flag_reg_43

  <bb 5> [local count: 1073741824]:
  # flag_reg_16 = PHI <flag_reg_40(3), flag_reg_43(4)>
  # mb_idx_19 = PHI <endMbIdx_32(D)(3), mb_idx_41(4)>
  # DEBUG mb_idx => mb_idx_19
  # DEBUG flag_reg => flag_reg_16
  # DEBUG BEGIN_STMT
  if (flag_reg_16 == 0)
    goto <bb 6>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 6> [local count: 1014686025]:
  if (mb_idx_19 > startMbIdx_35(D))
    goto <bb 4>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 114863532]:
  # flag_reg_2 = PHI <flag_reg_16(5), 0(6)>
  # mb_idx_44 = PHI <mb_idx_19(5), mb_idx_19(6)>
  # DEBUG BEGIN_STMT
  if (flag_reg_2 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 8> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  # DEBUG bIsSpuriousInt => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32MbHandle => mb_idx_44
  # DEBUG BEGIN_STMT
  _9 = state_31->bIsLegacyFifoEn;
  if (_9 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 9> [local count: 19526800]:
  if (mb_idx_44 <= 7)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 6443844]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerRxFIFO (instance_28(D), mb_idx_44);
  # DEBUG BEGIN_STMT
  # DEBUG u32MbHandle => 0
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 50987922]:
  # DEBUG BEGIN_STMT
  _10 ={v} state_31->mbs[mb_idx_44].state;
  if (_10 == 1)
    goto <bb 12>; [20.24%]
  else
    goto <bb 13>; [79.76%]

  <bb 12> [local count: 10319955]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerRxMB (instance_28(D), mb_idx_44);

  <bb 13> [local count: 57431766]:
  # u32MbHandle_15 = PHI <0(10), mb_idx_44(11), mb_idx_44(12)>
  # DEBUG u32MbHandle => u32MbHandle_15
  # DEBUG BEGIN_STMT
  _11 ={v} state_31->mbs[u32MbHandle_15].state;
  if (_11 == 2)
    goto <bb 14>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 14> [local count: 11624189]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerTxMB (instance_28(D), mb_idx_44);

  <bb 15> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  _12 = FlexCAN_GetMsgBuffIntStatusFlag (base_30, mb_idx_44);
  if (_12 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 16> [local count: 28715883]:
  # DEBUG BEGIN_STMT
  _13 ={v} state_31->mbs[u32MbHandle_15].state;
  if (_13 == 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 17> [local count: 9476241]:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_44);

  <bb 18> [local count: 114863532]:
  # bIsSpuriousInt_17 = PHI <1(7), 0(15), 0(16), 0(17)>
  # DEBUG bIsSpuriousInt => bIsSpuriousInt_17
  # DEBUG BEGIN_STMT
  if (bEnhancedFifoExisted_36(D) == 1)
    goto <bb 19>; [34.00%]
  else
    goto <bb 22>; [66.00%]

  <bb 19> [local count: 39053601]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_30
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhancedRxFifoEnabled
  # DEBUG BEGIN_STMT
  _53 ={v} MEM[(const struct FLEXCAN_Type *)base_30].ERFCR;
  _54 = (signed int) _53;
  if (_54 < 0)
    goto <bb 20>; [41.00%]
  else
    goto <bb 22>; [59.00%]

  <bb 20> [local count: 16011976]:
  # DEBUG base => NULL
  _14 = state_31->transferType;
  if (_14 == 0)
    goto <bb 21>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 21> [local count: 5283952]:
  # DEBUG BEGIN_STMT
  bIsSpuriousInt_51 = FlexCAN_ProcessIRQHandlerEnhancedRxFIFO (instance_28(D), bIsSpuriousInt_17);
  # DEBUG bIsSpuriousInt => bIsSpuriousInt_51

  <bb 22> [local count: 114863532]:
  # bIsSpuriousInt_18 = PHI <bIsSpuriousInt_17(18), bIsSpuriousInt_17(19), bIsSpuriousInt_17(20), bIsSpuriousInt_51(21)>
  # DEBUG base => NULL
  # DEBUG bIsSpuriousInt => bIsSpuriousInt_18
  # DEBUG BEGIN_STMT
  if (bIsSpuriousInt_18 == 1)
    goto <bb 23>; [20.24%]
  else
    goto <bb 28>; [79.76%]

  <bb 23> [local count: 23248379]:
  # DEBUG BEGIN_STMT
  FlexCAN_ProcessSpuriousInterruptMB (instance_28(D), startMbIdx_35(D), endMbIdx_32(D));
  goto <bb 28>; [100.00%]

  <bb 24> [local count: 808727776]:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_30, mb_idx_20);
  # DEBUG BEGIN_STMT
  mb_idx_38 = mb_idx_20 + 1;
  # DEBUG mb_idx => mb_idx_38

  <bb 25> [local count: 908682895]:
  # mb_idx_20 = PHI <mb_idx_38(24), startMbIdx_35(D)(29)>
  # DEBUG mb_idx => mb_idx_20
  # DEBUG BEGIN_STMT
  if (mb_idx_20 <= endMbIdx_32(D))
    goto <bb 24>; [89.00%]
  else
    goto <bb 26>; [11.00%]

  <bb 26> [local count: 99955118]:
  # DEBUG BEGIN_STMT
  if (bEnhancedFifoExisted_36(D) == 1)
    goto <bb 27>; [34.00%]
  else
    goto <bb 28>; [66.00%]

  <bb 27> [local count: 33984740]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_30
  # DEBUG intFlag => 28
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  base_30->ERFSR ={v} 268435456;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_30
  # DEBUG intFlag => 29
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  base_30->ERFSR ={v} 536870912;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_30
  # DEBUG intFlag => 30
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  base_30->ERFSR ={v} 1073741824;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_30
  # DEBUG intFlag => 31
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  base_30->ERFSR ={v} 2147483648;

  <bb 28> [local count: 214818651]:
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  return;

}



;; Function FlexCAN_Ip_ClearErrorStatus (FlexCAN_Ip_ClearErrorStatus, funcdef_no=81, decl_uid=11503, cgraph_uid=82, symbol_order=83)

Modification phase of node FlexCAN_Ip_ClearErrorStatus/83
FlexCAN_Ip_ClearErrorStatus (uint8 instance, uint32 error)
{
  struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_4(D);
  base_6 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_6
  # DEBUG BEGIN_STMT
  _2 = instance_4(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  base_6->ESR1 ={v} error_8(D);
  return;

}



;; Function FlexCAN_Ip_GetErrorStatus (FlexCAN_Ip_GetErrorStatus, funcdef_no=82, decl_uid=11496, cgraph_uid=83, symbol_order=84)

Modification phase of node FlexCAN_Ip_GetErrorStatus/84
FlexCAN_Ip_GetErrorStatus (uint8 instance)
{
  const struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;
  uint32 _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_4(D);
  base_6 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_6
  # DEBUG BEGIN_STMT
  _2 = instance_4(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _8 ={v} base_6->ESR1;
  return _8;

}



;; Function FlexCAN_Ip_GetControllerTxErrorCounter (FlexCAN_Ip_GetControllerTxErrorCounter, funcdef_no=83, decl_uid=11498, cgraph_uid=84, symbol_order=85)

Modification phase of node FlexCAN_Ip_GetControllerTxErrorCounter/85
FlexCAN_Ip_GetControllerTxErrorCounter (uint8 instance)
{
  const struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  uint8 _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_5(D);
  base_7 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_7
  # DEBUG BEGIN_STMT
  _2 = instance_5(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 ={v} base_7->ECR;
  _9 = (uint8) _4;
  return _9;

}



;; Function FlexCAN_Ip_GetControllerRxErrorCounter (FlexCAN_Ip_GetControllerRxErrorCounter, funcdef_no=84, decl_uid=11500, cgraph_uid=85, symbol_order=86)

Modification phase of node FlexCAN_Ip_GetControllerRxErrorCounter/86
FlexCAN_Ip_GetControllerRxErrorCounter (uint8 instance)
{
  const struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  uint8 _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_6(D);
  base_8 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_8
  # DEBUG BEGIN_STMT
  _2 = instance_6(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 ={v} base_8->ECR;
  _5 = _4 >> 8;
  _10 = (uint8) _5;
  return _10;

}



;; Function FlexCAN_Busoff_Error_IRQHandler (FlexCAN_Busoff_Error_IRQHandler, funcdef_no=85, decl_uid=11547, cgraph_uid=86, symbol_order=87)

Modification phase of node FlexCAN_Busoff_Error_IRQHandler/87
FlexCAN_Busoff_Error_IRQHandler (uint8 instance)
{
  boolean isSpuriousInt;
  uint32 u32ErrStatus;
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * pBase;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _7;
  long unsigned int _8;
  long unsigned int _9;
  signed int _10;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_37(D);
  pBase_39 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_39
  # DEBUG BEGIN_STMT
  state_40 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_40
  # DEBUG BEGIN_STMT
  # DEBUG u32ErrStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG isSpuriousInt => 1
  # DEBUG BEGIN_STMT
  _2 = instance_37(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  if (state_40 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 24>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  u32ErrStatus_42 ={v} pBase_39->ESR1;
  # DEBUG u32ErrStatus => u32ErrStatus_42
  # DEBUG BEGIN_STMT
  _4 = u32ErrStatus_42 & 2;
  if (_4 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 375809639]:
  _5 ={v} pBase_39->CTRL1;
  _6 = _5 & 16384;
  if (_6 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  pBase_39->ESR1 ={v} 2;
  # DEBUG BEGIN_STMT
  _7 = state_40->error_callback;
  if (_7 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 6> [local count: 131533373]:
  # DEBUG BEGIN_STMT
  _7 (instance_37(D), 9, u32ErrStatus_42, state_40);
  # DEBUG BEGIN_STMT
  u32ErrStatus_45 ={v} pBase_39->ESR1;
  # DEBUG u32ErrStatus => u32ErrStatus_45

  <bb 7> [local count: 751619278]:
  # u32ErrStatus_24 = PHI <u32ErrStatus_42(3), u32ErrStatus_42(4), u32ErrStatus_45(6), u32ErrStatus_42(5)>
  # isSpuriousInt_28 = PHI <1(3), 1(4), 0(6), 0(5)>
  # DEBUG isSpuriousInt => isSpuriousInt_28
  # DEBUG u32ErrStatus => u32ErrStatus_24
  # DEBUG BEGIN_STMT
  _8 = u32ErrStatus_24 & 1048576;
  if (_8 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 8> [local count: 375809639]:
  _9 ={v} pBase_39->CTRL2;
  _10 = (signed int) _9;
  if (_10 < 0)
    goto <bb 9>; [41.00%]
  else
    goto <bb 11>; [59.00%]

  <bb 9> [local count: 154081952]:
  # DEBUG BEGIN_STMT
  pBase_39->ESR1 ={v} 1048576;
  # DEBUG BEGIN_STMT
  _11 = state_40->error_callback;
  if (_11 != 0B)
    goto <bb 10>; [70.00%]
  else
    goto <bb 11>; [30.00%]

  <bb 10> [local count: 107857366]:
  # DEBUG BEGIN_STMT
  _11 (instance_37(D), 10, u32ErrStatus_24, state_40);
  # DEBUG BEGIN_STMT
  u32ErrStatus_48 ={v} pBase_39->ESR1;
  # DEBUG u32ErrStatus => u32ErrStatus_48

  <bb 11> [local count: 751619278]:
  # u32ErrStatus_25 = PHI <u32ErrStatus_24(7), u32ErrStatus_24(8), u32ErrStatus_48(10), u32ErrStatus_24(9)>
  # isSpuriousInt_29 = PHI <isSpuriousInt_28(7), isSpuriousInt_28(8), 0(10), 0(9)>
  # DEBUG isSpuriousInt => isSpuriousInt_29
  # DEBUG u32ErrStatus => u32ErrStatus_25
  # DEBUG BEGIN_STMT
  _12 = u32ErrStatus_25 & 131072;
  if (_12 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 12> [local count: 375809639]:
  _13 ={v} pBase_39->CTRL1;
  _14 = _13 & 2048;
  if (_14 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  pBase_39->ESR1 ={v} 131072;
  # DEBUG BEGIN_STMT
  _15 = state_40->error_callback;
  if (_15 != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 15>; [30.00%]

  <bb 14> [local count: 131533373]:
  # DEBUG BEGIN_STMT
  _15 (instance_37(D), 13, u32ErrStatus_25, state_40);
  # DEBUG BEGIN_STMT
  u32ErrStatus_51 ={v} pBase_39->ESR1;
  # DEBUG u32ErrStatus => u32ErrStatus_51

  <bb 15> [local count: 751619278]:
  # u32ErrStatus_26 = PHI <u32ErrStatus_25(11), u32ErrStatus_25(12), u32ErrStatus_51(14), u32ErrStatus_25(13)>
  # isSpuriousInt_30 = PHI <isSpuriousInt_29(11), isSpuriousInt_29(12), 0(14), 0(13)>
  # DEBUG isSpuriousInt => isSpuriousInt_30
  # DEBUG u32ErrStatus => u32ErrStatus_26
  # DEBUG BEGIN_STMT
  _16 = u32ErrStatus_26 & 65536;
  if (_16 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 16> [local count: 375809639]:
  _17 ={v} pBase_39->CTRL1;
  _18 = _17 & 1024;
  if (_18 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  pBase_39->ESR1 ={v} 65536;
  # DEBUG BEGIN_STMT
  _19 = state_40->error_callback;
  if (_19 != 0B)
    goto <bb 18>; [70.00%]
  else
    goto <bb 19>; [30.00%]

  <bb 18> [local count: 131533373]:
  # DEBUG BEGIN_STMT
  _19 (instance_37(D), 12, u32ErrStatus_26, state_40);
  # DEBUG BEGIN_STMT
  u32ErrStatus_55 ={v} pBase_39->ESR1;
  # DEBUG u32ErrStatus => u32ErrStatus_55

  <bb 19> [local count: 751619278]:
  # u32ErrStatus_27 = PHI <u32ErrStatus_26(15), u32ErrStatus_26(16), u32ErrStatus_55(18), u32ErrStatus_26(17)>
  # isSpuriousInt_31 = PHI <isSpuriousInt_30(15), isSpuriousInt_30(16), 0(18), 0(17)>
  # DEBUG isSpuriousInt => isSpuriousInt_31
  # DEBUG u32ErrStatus => u32ErrStatus_27
  # DEBUG BEGIN_STMT
  _20 = u32ErrStatus_27 & 4;
  if (_20 != 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 20> [local count: 375809639]:
  _21 ={v} pBase_39->CTRL1;
  _22 = _21 & 32768;
  if (_22 != 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 23>; [50.00%]

  <bb 21> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  pBase_39->ESR1 ={v} 4;
  # DEBUG BEGIN_STMT
  _23 = state_40->error_callback;
  if (_23 != 0B)
    goto <bb 22>; [70.00%]
  else
    goto <bb 25>; [30.00%]

  <bb 22> [local count: 131533373]:
  # DEBUG BEGIN_STMT
  _23 (instance_37(D), 11, u32ErrStatus_27, state_40);
  goto <bb 25>; [100.00%]

  <bb 23> [local count: 563714459]:
  # DEBUG isSpuriousInt => isSpuriousInt_31
  # DEBUG BEGIN_STMT
  if (isSpuriousInt_31 == 1)
    goto <bb 24>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 24> [local count: 513785463]:
  # DEBUG isSpuriousInt => NULL
  # DEBUG BEGIN_STMT
  pBase_39->ESR1 ={v} 3866630;

  <bb 25> [local count: 1073741824]:
  # DEBUG isSpuriousInt => NULL
  return;

}



;; Function FlexCAN_Ip_SendBlocking (FlexCAN_Ip_SendBlocking, funcdef_no=86, decl_uid=11468, cgraph_uid=87, symbol_order=88)

Modification phase of node FlexCAN_Ip_SendBlocking/88
FlexCAN_Ip_SendBlocking (uint8 instance, uint8 mb_idx, const struct Flexcan_Ip_DataInfoType * tx_info, uint32 msg_id, const uint8 * mb_data, uint32 timeout_ms)
{
  volatile uint32 * flexcan_mb;
  uint32 flexcan_mb_config;
  uint32 uS2Ticks;
  uint32 mS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType result;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  _Bool _4;
  unsigned char _5;
  _Bool _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned char _10;
  int _11;
  <unnamed type> _12;
  long unsigned int _13;
  unsigned char _14;
  long unsigned int _15;
  long unsigned int _16;
  int _17;
  long unsigned int _50;
  long unsigned int _65;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instance_30(D);
  base_32 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_32
  # DEBUG BEGIN_STMT
  state_33 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_33
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  _3 = timeout_ms_35(D) * 1000;
  mS2Ticks_37 = OsIf_MicrosToTicks (_3, 0);
  # DEBUG mS2Ticks => mS2Ticks_37
  # DEBUG BEGIN_STMT
  # DEBUG uS2Ticks => 0
  # DEBUG BEGIN_STMT
  # DEBUG flexcan_mb_config => 0
  # DEBUG BEGIN_STMT
  # DEBUG flexcan_mb => 0B
  # DEBUG BEGIN_STMT
  _4 = instance_30(D) <= 3;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 = tx_info_39(D) != 0B;
  _7 = (unsigned char) _6;
  DevAssert (_7);
  # DEBUG BEGIN_STMT
  result_45 = FlexCAN_StartSendData (instance_30(D), mb_idx_41(D), tx_info_39(D), msg_id_42(D), mb_data_43(D));
  # DEBUG result => result_45
  # DEBUG BEGIN_STMT
  if (result_45 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _8 = OsIf_GetCounter (0);
  timeStart = _8;
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _50 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_51 = timeElapsed_22 + _50;
  # DEBUG timeElapsed => timeElapsed_51
  # DEBUG BEGIN_STMT
  if (mS2Ticks_37 <= timeElapsed_51)
    goto <bb 6>; [5.50%]
  else
    goto <bb 18>; [94.50%]

  <bb 18> [local count: 958878292]:

  <bb 5> [local count: 1073741824]:
  # timeElapsed_22 = PHI <0(3), timeElapsed_51(18)>
  # DEBUG timeElapsed => timeElapsed_22
  # DEBUG BEGIN_STMT
  _9 = (long unsigned int) mb_idx_41(D);
  _10 = FlexCAN_GetBuffStatusFlag (base_32, _9);
  if (_10 != 1)
    goto <bb 4>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # result_18 = PHI <3(4), 0(5)>
  # _2 = PHI <_9(4), _9(5)>
  # DEBUG result => result_18
  # DEBUG BEGIN_STMT
  if (result_18 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 7> [local count: 39053601]:
  _11 = (int) mb_idx_41(D);
  _12 ={v} state_33->mbs[_11].state;
  if (_12 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 8> [local count: 12887688]:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  # DEBUG BEGIN_STMT
  flexcan_mb_54 = FlexCAN_GetMsgBuffRegion (base_32, _2);
  # DEBUG flexcan_mb => flexcan_mb_54
  # DEBUG BEGIN_STMT
  flexcan_mb_config_55 ={v} *flexcan_mb_54;
  # DEBUG flexcan_mb_config => flexcan_mb_config_55
  # DEBUG BEGIN_STMT
  flexcan_mb_config_56 = flexcan_mb_config_55 & 4043309055;
  # DEBUG flexcan_mb_config => flexcan_mb_config_56
  # DEBUG BEGIN_STMT
  flexcan_mb_config_57 = flexcan_mb_config_56 | 150994944;
  # DEBUG flexcan_mb_config => flexcan_mb_config_57
  # DEBUG BEGIN_STMT
  *flexcan_mb_54 ={v} flexcan_mb_config_57;
  # DEBUG BEGIN_STMT
  uS2Ticks_60 = OsIf_MicrosToTicks (1000000, 0);
  # DEBUG uS2Ticks => uS2Ticks_60
  # DEBUG BEGIN_STMT
  _13 = OsIf_GetCounter (0);
  timeStart = _13;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 113847772]:
  # DEBUG BEGIN_STMT
  _65 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_66 = timeElapsed_23 + _65;
  # DEBUG timeElapsed => timeElapsed_66
  # DEBUG BEGIN_STMT
  if (uS2Ticks_60 <= timeElapsed_66)
    goto <bb 11>; [5.50%]
  else
    goto <bb 17>; [94.50%]

  <bb 17> [local count: 107586144]:

  <bb 10> [local count: 120473832]:
  # timeElapsed_23 = PHI <0(8), timeElapsed_66(17)>
  # DEBUG timeElapsed => timeElapsed_23
  # DEBUG BEGIN_STMT
  _14 = FlexCAN_GetBuffStatusFlag (base_32, _2);
  if (_14 == 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 11>; [5.50%]

  <bb 11> [local count: 12887688]:
  # DEBUG result => 3
  # DEBUG BEGIN_STMT
  flexcan_mb_config_67 ={v} *flexcan_mb_54;
  # DEBUG flexcan_mb_config => flexcan_mb_config_67
  # DEBUG BEGIN_STMT
  _15 = flexcan_mb_config_67 >> 24;
  _16 = _15 & 15;
  if (_16 == 8)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 4381814]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0

  <bb 13> [local count: 12887688]:
  # result_19 = PHI <3(11), 0(12)>
  # DEBUG result => result_19
  # DEBUG BEGIN_STMT
  if (_16 == 9)
    goto <bb 14>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 14> [local count: 4381814]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 3

  <bb 15> [local count: 114863532]:
  # result_20 = PHI <result_18(6), 3(7), result_19(13), 3(14)>
  # DEBUG result => result_20
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_32, _2);
  # DEBUG BEGIN_STMT
  _17 = (int) mb_idx_41(D);
  state_33->mbs[_17].state ={v} 0;

  <bb 16> [local count: 348071309]:
  # result_21 = PHI <result_45(2), result_20(15)>
  # DEBUG result => result_21
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return result_21;

}



;; Function FlexCAN_Ip_SetRxMbGlobalMask_Privileged (FlexCAN_Ip_SetRxMbGlobalMask_Privileged, funcdef_no=87, decl_uid=11428, cgraph_uid=88, symbol_order=89)

Modification phase of node FlexCAN_Ip_SetRxMbGlobalMask_Privileged/89
FlexCAN_Ip_SetRxMbGlobalMask_Privileged (uint8 instance, uint32 mask)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _21;
  signed int _22;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_10(D);
  pBase_12 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_12
  # DEBUG BEGIN_STMT
  # DEBUG freeze => 0
  # DEBUG BEGIN_STMT
  _2 = instance_10(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_12
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(const struct FLEXCAN_Type *)pBase_12].MCR;
  _22 = (signed int) _21;
  # DEBUG pBase => NULL
  # DEBUG D#3 => _22 < 0
  # DEBUG disabled => (boolean) D#3
  # DEBUG BEGIN_STMT
  if (_22 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_12);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741823]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_12);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870911]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306368]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_12
  # DEBUG Mask => mask_18(D)
  # DEBUG INLINE_ENTRY FlexCAN_SetRxMsgBuffGlobalMask
  # DEBUG BEGIN_STMT
  pBase_12->RXMGMASK ={v} mask_18(D);

  <bb 8> [local count: 1073741823]:
  # result_9 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG base => NULL
  # DEBUG Mask => NULL
  # DEBUG BEGIN_STMT
  if (_22 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_20 = FlexCAN_Disable (pBase_12);
  # DEBUG status => status_20
  # DEBUG BEGIN_STMT
  if (status_20 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_20

  <bb 11> [local count: 1073741824]:
  # result_5 = PHI <result_9(8), result_9(9), status_20(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_EnterFreezeMode_Privileged (FlexCAN_Ip_EnterFreezeMode_Privileged, funcdef_no=88, decl_uid=11401, cgraph_uid=89, symbol_order=90)

Modification phase of node FlexCAN_Ip_EnterFreezeMode_Privileged/90
FlexCAN_Ip_EnterFreezeMode_Privileged (uint8 instance)
{
  struct FLEXCAN_Type * base;
  int _1;
  Flexcan_Ip_StatusType _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_2(D);
  base_4 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_4
  # DEBUG BEGIN_STMT
  _6 = FlexCAN_EnterFreezeMode (base_4);
  return _6;

}



;; Function FlexCAN_Ip_ExitFreezeMode_Privileged (FlexCAN_Ip_ExitFreezeMode_Privileged, funcdef_no=89, decl_uid=11403, cgraph_uid=90, symbol_order=91)

Modification phase of node FlexCAN_Ip_ExitFreezeMode_Privileged/91
FlexCAN_Ip_ExitFreezeMode_Privileged (uint8 instance)
{
  struct FLEXCAN_Type * base;
  int _1;
  Flexcan_Ip_StatusType _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_2(D);
  base_4 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_4
  # DEBUG BEGIN_STMT
  _6 = FlexCAN_ExitFreezeMode (base_4);
  return _6;

}



;; Function FlexCAN_Ip_SetRxIndividualMask_Privileged (FlexCAN_Ip_SetRxIndividualMask_Privileged, funcdef_no=90, decl_uid=11425, cgraph_uid=91, symbol_order=92)

Modification phase of node FlexCAN_Ip_SetRxIndividualMask_Privileged/92
FlexCAN_Ip_SetRxIndividualMask_Privileged (uint8 instance, uint8 mb_idx, uint32 mask)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _25;
  signed int _26;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _1 = (int) instance_13(D);
  pBase_15 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_15
  # DEBUG BEGIN_STMT
  # DEBUG freeze => 0
  # DEBUG BEGIN_STMT
  _2 = instance_13(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) mb_idx_17(D);
  _5 ={v} pBase_15->MCR;
  _6 = _5 & 127;
  if (_4 > _6)
    goto <bb 13>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932185]:
  if (mb_idx_17(D) > 63)
    goto <bb 13>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 453655920]:
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_15
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _25 ={v} MEM[(const struct FLEXCAN_Type *)pBase_15].MCR;
  _26 = (signed int) _25;
  # DEBUG pBase => NULL
  # DEBUG D#4 => _26 < 0
  # DEBUG disabled => (boolean) D#4
  # DEBUG BEGIN_STMT
  if (_26 < 0)
    goto <bb 5>; [25.50%]
  else
    goto <bb 6>; [74.50%]

  <bb 5> [local count: 115682260]:
  # DEBUG BEGIN_STMT
  result_19 = FlexCAN_Enable (pBase_15);
  # DEBUG result => result_19

  <bb 6> [local count: 453655920]:
  # result_7 = PHI <0(4), result_19(5)>
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  freeze_21 = FlexCAN_IsFreezeMode (pBase_15);
  # DEBUG freeze => freeze_21
  # DEBUG BEGIN_STMT
  if (freeze_21 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 226827960]:
  if (result_7 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 340241940]:
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  if (result_7 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 170120970]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_15
  # DEBUG msgBuffIdx => _4
  # DEBUG mask => mask_22(D)
  # DEBUG INLINE_ENTRY FlexCAN_SetRxIndividualMask
  # DEBUG BEGIN_STMT
  pBase_15->RXIMR[_4] ={v} mask_22(D);

  <bb 10> [local count: 453655920]:
  # result_12 = PHI <result_7(8), 0(9), 1(7)>
  # DEBUG result => NULL
  # DEBUG base => NULL
  # DEBUG msgBuffIdx => NULL
  # DEBUG mask => NULL
  # DEBUG BEGIN_STMT
  if (_26 < 0)
    goto <bb 11>; [25.50%]
  else
    goto <bb 13>; [74.50%]

  <bb 11> [local count: 115682260]:
  # DEBUG BEGIN_STMT
  status_24 = FlexCAN_Disable (pBase_15);
  # DEBUG status => status_24
  # DEBUG BEGIN_STMT
  if (status_24 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 57841130]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_24

  <bb 13> [local count: 1073741824]:
  # result_8 = PHI <4(3), result_12(10), result_12(11), status_24(12), 4(2)>
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  return result_8;

}



;; Function FlexCAN_Ip_SetRxFifoGlobalMask_Privileged (FlexCAN_Ip_SetRxFifoGlobalMask_Privileged, funcdef_no=91, decl_uid=11406, cgraph_uid=92, symbol_order=93)

Modification phase of node FlexCAN_Ip_SetRxFifoGlobalMask_Privileged/93
FlexCAN_Ip_SetRxFifoGlobalMask_Privileged (uint8 instance, uint32 mask)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _21;
  signed int _22;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _22 = (signed int) _21;
  # DEBUG pBase => NULL
  # DEBUG D#5 => _22 < 0
  # DEBUG disabled => (boolean) D#5
  # DEBUG BEGIN_STMT
  if (_22 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741823]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870911]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306368]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_13
  # DEBUG Mask => mask_18(D)
  # DEBUG INLINE_ENTRY FlexCAN_SetRxFifoGlobalMask
  # DEBUG BEGIN_STMT
  pBase_13->RXFGMASK ={v} mask_18(D);

  <bb 8> [local count: 1073741823]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG base => NULL
  # DEBUG Mask => NULL
  # DEBUG BEGIN_STMT
  if (_22 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_20 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_20
  # DEBUG BEGIN_STMT
  if (status_20 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_20

  <bb 11> [local count: 1073741824]:
  # result_5 = PHI <result_12(8), result_12(9), status_20(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_Deinit_Privileged (FlexCAN_Ip_Deinit_Privileged, funcdef_no=92, decl_uid=11408, cgraph_uid=93, symbol_order=94)

Modification phase of node FlexCAN_Ip_Deinit_Privileged/94
FlexCAN_Ip_Deinit_Privileged (uint8 instance)
{
  Flexcan_Ip_StatusType result;
  struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_5(D);
  base_7 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_7
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  _2 = instance_5(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  result_10 = FlexCAN_EnterFreezeMode (base_7);
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  if (result_10 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetRegDefaultVal (base_7);
  # DEBUG BEGIN_STMT
  FlexCAN_Disable (base_7);
  # DEBUG BEGIN_STMT
  Flexcan_Ip_apxState[_1] = 0B;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return result_10;

}



;; Function FlexCAN_Ip_MainFunctionRead (FlexCAN_Ip_MainFunctionRead, funcdef_no=93, decl_uid=11488, cgraph_uid=94, symbol_order=95)

Modification phase of node FlexCAN_Ip_MainFunctionRead/95
FlexCAN_Ip_MainFunctionRead (uint8 instance, uint8 mb_idx)
{
  uint32 flag;
  const struct Flexcan_Ip_StateType * state;
  const struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  _Bool _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  long unsigned int _9;
  unsigned char _10;
  int _11;
  <unnamed type> _12;
  long unsigned int _26;
  signed int _27;
  long unsigned int _28;
  long unsigned int _29;
  unsigned char _30;
  long unsigned int _31;
  long unsigned int _33;
  long unsigned int _34;
  unsigned char _35;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_14(D);
  base_16 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_16
  # DEBUG BEGIN_STMT
  state_17 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_17
  # DEBUG BEGIN_STMT
  _2 = instance_14(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = mb_idx_19(D) + 192;
  _5 = _4 > 190;
  _6 = (unsigned char) _5;
  DevAssert (_6);
  # DEBUG BEGIN_STMT
  if (mb_idx_19(D) == 255)
    goto <bb 3>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _7 = FlexCAN_IsEnhancedRxFifoAvailable (base_16);
  if (_7 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_16
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhancedRxFifoEnabled
  # DEBUG BEGIN_STMT
  _26 ={v} base_16->ERFCR;
  _27 = (signed int) _26;
  if (_27 < 0)
    goto <bb 5>; [41.00%]
  else
    goto <bb 15>; [59.00%]

  <bb 5> [local count: 30295153]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => base_16
  # DEBUG intFlag => 28
  # DEBUG INLINE_ENTRY FlexCAN_GetEnhancedRxFIFOStatusFlag
  # DEBUG BEGIN_STMT
  _28 ={v} base_16->ERFSR;
  _33 = _28 >> 28;
  _29 = _33 & 1;
  _30 = (unsigned char) _29;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  if (_30 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 6> [local count: 9997401]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerEnhancedRxFIFO (instance_14(D), 28);
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  _8 = state_17->bIsLegacyFifoEn;
  if (_8 == 1)
    goto <bb 8>; [51.12%]
  else
    goto <bb 12>; [48.88%]

  <bb 8> [local count: 437800103]:
  if (mb_idx_19(D) <= 7)
    goto <bb 9>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 9> [local count: 218900052]:
  # DEBUG BEGIN_STMT
  if (mb_idx_19(D) == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 10> [local count: 109450026]:
  # DEBUG BEGIN_STMT
  # DEBUG base => base_16
  # DEBUG msgBuffIdx => 5
  # DEBUG INLINE_ENTRY FlexCAN_GetBuffStatusFlag
  # DEBUG BEGIN_STMT
  # DEBUG flag => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _31 ={v} base_16->IFLAG1;
  _34 = _31 >> 5;
  flag_32 = _34 & 1;
  # DEBUG flag => flag_32
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _35 = (unsigned char) flag_32;
  # DEBUG base => NULL
  # DEBUG msgBuffIdx => NULL
  # DEBUG flag => NULL
  if (_35 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 11> [local count: 36118509]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerRxFIFO (instance_14(D), 5);
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 637516427]:
  # DEBUG BEGIN_STMT
  _9 = (long unsigned int) mb_idx_19(D);
  _10 = FlexCAN_GetBuffStatusFlag (base_16, _9);
  if (_10 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 318758213]:
  # DEBUG BEGIN_STMT
  _11 = (int) mb_idx_19(D);
  _12 ={v} state_17->mbs[_11].state;
  if (_12 == 1)
    goto <bb 14>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 14> [local count: 64516662]:
  # DEBUG BEGIN_STMT
  FlexCAN_IRQHandlerRxMB (instance_14(D), _9);

  <bb 15> [local count: 1073741824]:
  # DEBUG base => NULL
  return;

}



;; Function FlexCAN_Ip_MainFunctionBusOff_Privileged (FlexCAN_Ip_MainFunctionBusOff_Privileged, funcdef_no=94, decl_uid=11395, cgraph_uid=95, symbol_order=96)

Modification phase of node FlexCAN_Ip_MainFunctionBusOff_Privileged/96
FlexCAN_Ip_MainFunctionBusOff_Privileged (uint8 instance)
{
  uint32 u32ErrStatus;
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  Flexcan_Ip_StatusType eRetVal;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  _1 = (int) instance_9(D);
  base_11 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_11
  # DEBUG BEGIN_STMT
  state_12 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_12
  # DEBUG BEGIN_STMT
  # DEBUG u32ErrStatus => 0
  # DEBUG BEGIN_STMT
  _2 = instance_9(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  u32ErrStatus_14 ={v} base_11->ESR1;
  # DEBUG u32ErrStatus => u32ErrStatus_14
  # DEBUG BEGIN_STMT
  _4 = u32ErrStatus_14 & 4;
  if (_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = state_12->error_callback;
  if (_5 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 4> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  _5 (instance_9(D), 11, u32ErrStatus_14, state_12);

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  base_11->ESR1 ={v} 4;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0

  <bb 6> [local count: 1073741824]:
  # eRetVal_6 = PHI <1(2), 0(5)>
  # DEBUG eRetVal => eRetVal_6
  # DEBUG BEGIN_STMT
  return eRetVal_6;

}



;; Function FlexCAN_Ip_MainFunctionWrite (FlexCAN_Ip_MainFunctionWrite, funcdef_no=95, decl_uid=11491, cgraph_uid=96, symbol_order=97)

Modification phase of node FlexCAN_Ip_MainFunctionWrite/97
FlexCAN_Ip_MainFunctionWrite (uint8 instance, uint8 mb_idx)
{
  struct Flexcan_Ip_MsgBuffType mb;
  struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * base;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  unsigned char _5;
  int _6;
  <unnamed type> _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  void (*<Tb92>) (uint8, Flexcan_Ip_EventType, uint32, const struct FlexCANState *) _14;
  long unsigned int vol.6_35;
  long unsigned int vol.6_36;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_18(D);
  base_20 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_20
  # DEBUG BEGIN_STMT
  state_21 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_21
  # DEBUG BEGIN_STMT
  _2 = instance_18(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) mb_idx_23(D);
  _5 = FlexCAN_GetBuffStatusFlag (base_20, _4);
  if (_5 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = (int) mb_idx_23(D);
  _7 ={v} state_21->mbs[_6].state;
  if (_7 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _8 = state_21->mbs[_6].isRemote;
  if (_8 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 5> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FlexCAN_LockRxMsgBuff (base_20, _4);
  # DEBUG BEGIN_STMT
  FlexCAN_GetMsgBuff (base_20, _4, &mb);
  # DEBUG BEGIN_STMT
  # DEBUG base => base_20
  # DEBUG INLINE_ENTRY FlexCAN_UnlockRxMsgBuff
  # DEBUG BEGIN_STMT
  vol.6_35 ={v} MEM[(const struct FLEXCAN_Type *)base_20].TIMER;
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  _9 = mb.time_stamp;
  state_21->mbs[_6].time_stamp = _9;
  # DEBUG BEGIN_STMT
  _10 = mb.cs;
  _11 = _10 >> 24;
  _12 = _11 & 15;
  if (_12 == 4)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 18472654]:
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);

  <bb 7> [local count: 91268055]:
  mb ={v} {CLOBBER};
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  _13 = FlexCAN_GetMsgBuffTimestamp (base_20, _4);
  state_21->mbs[_6].time_stamp = _13;
  # DEBUG BEGIN_STMT
  # DEBUG base => base_20
  # DEBUG INLINE_ENTRY FlexCAN_UnlockRxMsgBuff
  # DEBUG BEGIN_STMT
  vol.6_36 ={v} MEM[(const struct FLEXCAN_Type *)base_20].TIMER;
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  FlexCAN_ClearMsgBuffIntStatusFlag (base_20, _4);

  <bb 9> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  state_21->mbs[_6].state ={v} 0;
  # DEBUG BEGIN_STMT
  _14 = state_21->callback;
  if (_14 != 0B)
    goto <bb 10>; [70.00%]
  else
    goto <bb 11>; [30.00%]

  <bb 10> [local count: 127775277]:
  # DEBUG BEGIN_STMT
  _14 (instance_18(D), 4, _4, state_21);

  <bb 11> [local count: 1073741824]:
  return;

}



;; Function FlexCAN_Ip_GetStopMode_Privileged (FlexCAN_Ip_GetStopMode_Privileged, funcdef_no=96, decl_uid=11397, cgraph_uid=97, symbol_order=98)

Modification phase of node FlexCAN_Ip_GetStopMode_Privileged/98
FlexCAN_Ip_GetStopMode_Privileged (uint8 instance)
{
  const struct FLEXCAN_Type * base;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  boolean iftmp.9_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_5(D);
  base_7 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_7
  # DEBUG BEGIN_STMT
  _2 ={v} base_7->MCR;
  _3 = _2 & 1048576;
  if (_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.9_4 = PHI <1(2), 0(3)>
  return iftmp.9_4;

}



;; Function FlexCAN_Ip_GetStartMode_Privileged (FlexCAN_Ip_GetStartMode_Privileged, funcdef_no=97, decl_uid=11399, cgraph_uid=98, symbol_order=99)

Modification phase of node FlexCAN_Ip_GetStartMode_Privileged/99
FlexCAN_Ip_GetStartMode_Privileged (uint8 instance)
{
  const struct FLEXCAN_Type * base;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  boolean iftmp.10_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_5(D);
  base_7 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_7
  # DEBUG BEGIN_STMT
  _2 ={v} base_7->MCR;
  _3 = _2 & 17825792;
  if (_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.10_4 = PHI <1(2), 0(3)>
  return iftmp.10_4;

}



;; Function FlexCAN_Ip_SetStartMode_Privileged (FlexCAN_Ip_SetStartMode_Privileged, funcdef_no=98, decl_uid=11410, cgraph_uid=99, symbol_order=100)

Modification phase of node FlexCAN_Ip_SetStartMode_Privileged/100
FlexCAN_Ip_SetStartMode_Privileged (uint8 instance)
{
  struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  Flexcan_Ip_StatusType _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_6(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) instance_6(D);
  pBase_9 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_9
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_07 ();
  # DEBUG BEGIN_STMT
  _4 ={v} pBase_9->MCR;
  _5 = _4 & 2147483647;
  pBase_9->MCR ={v} _5;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_07 ();
  # DEBUG BEGIN_STMT
  _14 = FlexCAN_ExitFreezeMode (pBase_9);
  return _14;

}



;; Function FlexCAN_Ip_SetStopMode_Privileged (FlexCAN_Ip_SetStopMode_Privileged, funcdef_no=99, decl_uid=11412, cgraph_uid=100, symbol_order=101)

Modification phase of node FlexCAN_Ip_SetStopMode_Privileged/101
FlexCAN_Ip_SetStopMode_Privileged (uint8 instance)
{
  Flexcan_Ip_StatusType status;
  struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_6(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) instance_6(D);
  pBase_9 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  status_11 = FlexCAN_EnterFreezeMode (pBase_9);
  # DEBUG status => status_11
  # DEBUG BEGIN_STMT
  if (status_11 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  status_13 = FlexCAN_Disable (pBase_9);
  # DEBUG status => status_13

  <bb 4> [local count: 1073741824]:
  # status_4 = PHI <status_11(2), status_13(3)>
  # DEBUG status => status_4
  # DEBUG BEGIN_STMT
  return status_4;

}



;; Function FlexCAN_Ip_SetRxMaskType_Privileged (FlexCAN_Ip_SetRxMaskType_Privileged, funcdef_no=100, decl_uid=11415, cgraph_uid=101, symbol_order=102)

Modification phase of node FlexCAN_Ip_SetRxMaskType_Privileged/102
FlexCAN_Ip_SetRxMaskType_Privileged (uint8 instance, Flexcan_Ip_RxMaskType type)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _24;
  signed int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _25 = (signed int) _24;
  # DEBUG pBase => NULL
  # DEBUG D#6 => _25 < 0
  # DEBUG disabled => (boolean) D#6
  # DEBUG BEGIN_STMT
  if (_25 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741824]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_08 ();
  # DEBUG BEGIN_STMT
  FlexCAN_SetRxMaskType (pBase_13, type_19(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_08 ();

  <bb 8> [local count: 1073741824]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_25 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_23 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_23
  # DEBUG BEGIN_STMT
  if (status_23 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_23

  <bb 11> [local count: 1073741823]:
  # result_5 = PHI <result_12(8), result_12(9), status_23(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_SetBitrate_Privileged (FlexCAN_Ip_SetBitrate_Privileged, funcdef_no=101, decl_uid=11432, cgraph_uid=102, symbol_order=103)

Modification phase of node FlexCAN_Ip_SetBitrate_Privileged/103
FlexCAN_Ip_SetBitrate_Privileged (uint8 instance, const struct Flexcan_Ip_TimeSegmentType * bitrate, boolean enhExt)
{
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  _Bool _3;
  unsigned char _4;
  int _5;
  long unsigned int _6;
  signed int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _34;
  signed int _35;
  unsigned char iftmp.11_36;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_16(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = bitrate_19(D) != 0B;
  _4 = (unsigned char) _3;
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _5 = (int) instance_16(D);
  pBase_21 = Flexcan_Ip_apxBase[_5];
  # DEBUG pBase => pBase_21
  # DEBUG BEGIN_STMT
  _6 ={v} pBase_21->MCR;
  _7 = (signed int) _6;
  if (_7 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG disabled => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_23 = FlexCAN_Enable (pBase_21);
  # DEBUG result => result_23

  <bb 4> [local count: 1073741824]:
  # result_10 = PHI <0(2), result_23(3)>
  # iftmp.11_36 = PHI <0(2), 1(3)>
  # DEBUG disabled => NULL
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  _8 ={v} pBase_21->MCR;
  _9 = _8 & 16777216;
  if (_9 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG freeze => 0
  # DEBUG BEGIN_STMT
  if (result_10 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG freeze => NULL
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  if (result_10 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_14 ();
  # DEBUG BEGIN_STMT
  FlexCAN_EnhCbtEnable (pBase_21, enhExt_25(D));
  # DEBUG BEGIN_STMT
  if (enhExt_25(D) == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 53788023]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetEnhancedNominalTimeSegments (pBase_21, bitrate_19(D));
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 211963079]:
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_21
  # DEBUG INLINE_ENTRY FlexCAN_IsExCbtEnabled
  # DEBUG BEGIN_STMT
  _34 ={v} MEM[(const struct FLEXCAN_Type *)pBase_21].CBT;
  _35 = (signed int) _34;
  # DEBUG pBase => NULL
  if (_35 < 0)
    goto <bb 10>; [41.00%]
  else
    goto <bb 11>; [59.00%]

  <bb 10> [local count: 86904862]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetExtendedTimeSegments (pBase_21, bitrate_19(D));
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 125058216]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetTimeSegments (pBase_21, bitrate_19(D));

  <bb 12> [local count: 265751102]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_14 ();

  <bb 13> [local count: 1073741824]:
  # result_27 = PHI <result_10(6), 0(12), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (iftmp.11_36 == 1)
    goto <bb 14>; [20.24%]
  else
    goto <bb 16>; [79.76%]

  <bb 14> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  status_33 = FlexCAN_Disable (pBase_21);
  # DEBUG status => status_33
  # DEBUG BEGIN_STMT
  if (status_33 != 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 15> [local count: 108662673]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_33

  <bb 16> [local count: 1073741824]:
  # result_11 = PHI <result_27(13), result_27(14), status_33(15)>
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  return result_11;

}



;; Function FlexCAN_Ip_GetBitrate (FlexCAN_Ip_GetBitrate, funcdef_no=102, decl_uid=11506, cgraph_uid=103, symbol_order=104)

Modification phase of node FlexCAN_Ip_GetBitrate/104
FlexCAN_Ip_GetBitrate (uint8 instance, struct Flexcan_Ip_TimeSegmentType * bitrate)
{
  const struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  _Bool _3;
  unsigned char _4;
  int _5;
  long unsigned int _16;
  long unsigned int _17;
  _Bool _18;
  unsigned char _19;
  long unsigned int _20;
  signed int _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_7(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = bitrate_10(D) != 0B;
  _4 = (unsigned char) _3;
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  _5 = (int) instance_7(D);
  pBase_12 = Flexcan_Ip_apxBase[_5];
  # DEBUG pBase => pBase_12
  # DEBUG BEGIN_STMT
  # DEBUG enhCbt => 0
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_12
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhCbtEnabled
  # DEBUG BEGIN_STMT
  _16 ={v} pBase_12->CTRL2;
  _17 = _16 & 8192;
  _18 = _17 != 0;
  _19 = (unsigned char) _18;
  # DEBUG pBase => NULL
  # DEBUG enhCbt => _19
  # DEBUG BEGIN_STMT
  if (_17 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  FlexCAN_GetEnhancedNominalTimeSegments (pBase_12, bitrate_10(D));
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_12
  # DEBUG INLINE_ENTRY FlexCAN_IsExCbtEnabled
  # DEBUG BEGIN_STMT
  _20 ={v} pBase_12->CBT;
  _21 = (signed int) _20;
  # DEBUG pBase => NULL
  if (_21 < 0)
    goto <bb 5>; [41.00%]
  else
    goto <bb 6>; [59.00%]

  <bb 5> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  FlexCAN_GetExtendedTimeSegments (pBase_12, bitrate_10(D));
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  FlexCAN_GetTimeSegments (pBase_12, bitrate_10(D));

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return _19;

}



;; Function FlexCAN_Ip_ClearTDCFail (FlexCAN_Ip_ClearTDCFail, funcdef_no=103, decl_uid=11508, cgraph_uid=104, symbol_order=105)

Modification phase of node FlexCAN_Ip_ClearTDCFail/105
FlexCAN_Ip_ClearTDCFail (uint8 u8Instance)
{
  struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _17;
  long unsigned int _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = u8Instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) u8Instance_9(D);
  pBase_12 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_12
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_09 ();
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_12
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhCbtEnabled
  # DEBUG BEGIN_STMT
  _17 ={v} MEM[(const struct FLEXCAN_Type *)pBase_12].CTRL2;
  _18 = _17 & 8192;
  # DEBUG pBase => NULL
  if (_18 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 ={v} pBase_12->ETDC;
  _5 = _4 | 32768;
  pBase_12->ETDC ={v} _5;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 ={v} pBase_12->FDCTRL;
  _7 = _6 | 16384;
  pBase_12->FDCTRL ={v} _7;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_09 ();
  return;

}



;; Function FlexCAN_Ip_GetTDCFail (FlexCAN_Ip_GetTDCFail, funcdef_no=104, decl_uid=11510, cgraph_uid=105, symbol_order=106)

Modification phase of node FlexCAN_Ip_GetTDCFail/106
FlexCAN_Ip_GetTDCFail (uint8 u8Instance)
{
  const struct FLEXCAN_Type * pBase;
  boolean value;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG value => 0
  # DEBUG BEGIN_STMT
  _1 = u8Instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) u8Instance_9(D);
  pBase_12 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_12
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_12
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhCbtEnabled
  # DEBUG BEGIN_STMT
  _13 ={v} pBase_12->CTRL2;
  _14 = _13 & 8192;
  # DEBUG pBase => NULL
  if (_14 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 ={v} pBase_12->ETDC;
  _5 = _4 & 32768;
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 ={v} pBase_12->FDCTRL;
  _7 = _6 & 16384;
  if (_7 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 268435456]:

  <bb 7> [local count: 1073741824]:
  # value_8 = PHI <0(4), 0(6), 1(5), 1(3)>
  # DEBUG value => value_8
  # DEBUG BEGIN_STMT
  return value_8;

}



;; Function FlexCAN_Ip_GetTDCValue (FlexCAN_Ip_GetTDCValue, funcdef_no=105, decl_uid=11512, cgraph_uid=106, symbol_order=107)

Modification phase of node FlexCAN_Ip_GetTDCValue/107
FlexCAN_Ip_GetTDCValue (uint8 u8Instance)
{
  const struct FLEXCAN_Type * pBase;
  uint8 value;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  unsigned char _6;
  long unsigned int _14;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG value => 0
  # DEBUG BEGIN_STMT
  _1 = u8Instance_8(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) u8Instance_8(D);
  pBase_11 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_11
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_11
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhCbtEnabled
  # DEBUG BEGIN_STMT
  _14 ={v} pBase_11->CTRL2;
  _15 = _14 & 8192;
  # DEBUG pBase => NULL
  if (_15 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 ={v} pBase_11->ETDC;
  value_13 = (uint8) _4;
  # DEBUG value => value_13
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 ={v} pBase_11->FDCTRL;
  _6 = (unsigned char) _5;
  value_12 = _6 & 63;
  # DEBUG value => value_12

  <bb 5> [local count: 1073741824]:
  # value_7 = PHI <value_13(3), value_12(4)>
  # DEBUG value => value_7
  # DEBUG BEGIN_STMT
  return value_7;

}



;; Function FlexCAN_Ip_SetBitrateCbt_Privileged (FlexCAN_Ip_SetBitrateCbt_Privileged, funcdef_no=106, decl_uid=11436, cgraph_uid=107, symbol_order=108)

Modification phase of node FlexCAN_Ip_SetBitrateCbt_Privileged/108
FlexCAN_Ip_SetBitrateCbt_Privileged (uint8 instance, const struct Flexcan_Ip_TimeSegmentType * bitrate, boolean bitRateSwitch)
{
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  _Bool _3;
  unsigned char _4;
  int _5;
  long unsigned int _6;
  signed int _7;
  long unsigned int _8;
  long unsigned int _9;
  boolean iftmp.17_12;
  unsigned char iftmp.16_26;
  long unsigned int _35;
  long unsigned int _36;
  _Bool _37;
  unsigned char _38;
  long unsigned int _39;
  long unsigned int _40;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = instance_17(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = bitrate_20(D) != 0B;
  _4 = (unsigned char) _3;
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _5 = (int) instance_17(D);
  pBase_22 = Flexcan_Ip_apxBase[_5];
  # DEBUG pBase => pBase_22
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_22
  # DEBUG INLINE_ENTRY FlexCAN_IsFDEnabled
  # DEBUG BEGIN_STMT
  _35 ={v} MEM[(const struct FLEXCAN_Type *)pBase_22].MCR;
  _36 = _35 & 2048;
  _37 = _36 != 0;
  _38 = (unsigned char) _37;
  # DEBUG base => NULL
  # DEBUG fd_enable => _38
  # DEBUG BEGIN_STMT
  _6 ={v} pBase_22->MCR;
  _7 = (signed int) _6;
  if (_7 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG disabled => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_24 = FlexCAN_Enable (pBase_22);
  # DEBUG result => result_24

  <bb 4> [local count: 1073741823]:
  # result_10 = PHI <0(2), result_24(3)>
  # iftmp.16_26 = PHI <0(2), 1(3)>
  # DEBUG disabled => NULL
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  _8 ={v} pBase_22->MCR;
  _9 = _8 & 16777216;
  if (_9 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870911]:

  <bb 6> [local count: 1073741823]:
  # iftmp.17_12 = PHI <1(4), 0(5)>
  # DEBUG freeze => iftmp.17_12
  # DEBUG BEGIN_STMT
  if (_36 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 536870911]:
  if (iftmp.17_12 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 268435456]:
  if (result_10 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 402653184]:
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  if (result_10 == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 10> [local count: 132875550]:
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_22
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhCbtEnabled
  # DEBUG BEGIN_STMT
  _39 ={v} MEM[(const struct FLEXCAN_Type *)pBase_22].CTRL2;
  _40 = _39 & 8192;
  # DEBUG D#7 => _40 != 0
  # DEBUG pBase => NULL
  # DEBUG enhCbt => (unsigned char) D#7
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_15 ();
  # DEBUG BEGIN_STMT
  FlexCAN_SetFDEnabled (pBase_22, _38, bitRateSwitch_28(D));
  # DEBUG BEGIN_STMT
  if (_40 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 66437775]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetEnhancedDataTimeSegments (pBase_22, bitrate_20(D));
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 66437775]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetFDTimeSegments (pBase_22, bitrate_20(D));

  <bb 13> [local count: 132875550]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_15 ();

  <bb 14> [local count: 1073741823]:
  # result_25 = PHI <result_10(9), 0(13), 1(6), 1(8)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (iftmp.16_26 == 1)
    goto <bb 15>; [20.24%]
  else
    goto <bb 17>; [79.76%]

  <bb 15> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  status_34 = FlexCAN_Disable (pBase_22);
  # DEBUG status => status_34
  # DEBUG BEGIN_STMT
  if (status_34 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_34

  <bb 17> [local count: 1073741824]:
  # result_11 = PHI <result_25(14), result_25(15), status_34(16)>
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  return result_11;

}



;; Function FlexCAN_Ip_GetBitrateFD (FlexCAN_Ip_GetBitrateFD, funcdef_no=107, decl_uid=11515, cgraph_uid=108, symbol_order=109)

Modification phase of node FlexCAN_Ip_GetBitrateFD/109
FlexCAN_Ip_GetBitrateFD (uint8 instance, struct Flexcan_Ip_TimeSegmentType * bitrate)
{
  const struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  _Bool _3;
  unsigned char _4;
  int _5;
  long unsigned int _15;
  long unsigned int _16;
  _Bool _17;
  unsigned char _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_7(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = bitrate_10(D) != 0B;
  _4 = (unsigned char) _3;
  DevAssert (_4);
  # DEBUG BEGIN_STMT
  _5 = (int) instance_7(D);
  pBase_12 = Flexcan_Ip_apxBase[_5];
  # DEBUG pBase => pBase_12
  # DEBUG BEGIN_STMT
  # DEBUG enhCbt => 0
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_12
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhCbtEnabled
  # DEBUG BEGIN_STMT
  _15 ={v} pBase_12->CTRL2;
  _16 = _15 & 8192;
  _17 = _16 != 0;
  _18 = (unsigned char) _17;
  # DEBUG pBase => NULL
  # DEBUG enhCbt => _18
  # DEBUG BEGIN_STMT
  if (_16 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  FlexCAN_GetEnhancedDataTimeSegments (pBase_12, bitrate_10(D));
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  FlexCAN_GetFDTimeSegments (pBase_12, bitrate_10(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return _18;

}



;; Function FlexCAN_Ip_SetTDCOffset_Privileged (FlexCAN_Ip_SetTDCOffset_Privileged, funcdef_no=108, decl_uid=11443, cgraph_uid=109, symbol_order=110)

Modification phase of node FlexCAN_Ip_SetTDCOffset_Privileged/110
FlexCAN_Ip_SetTDCOffset_Privileged (uint8 instance, boolean enable, uint8 offset)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _29;
  signed int _30;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_12(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_12(D);
  pBase_16 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_16
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_16
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _29 ={v} MEM[(const struct FLEXCAN_Type *)pBase_16].MCR;
  _30 = (signed int) _29;
  # DEBUG pBase => NULL
  # DEBUG D#8 => _30 < 0
  # DEBUG disabled => (boolean) D#8
  # DEBUG BEGIN_STMT
  if (_30 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_18 = FlexCAN_Enable (pBase_16);
  # DEBUG result => result_18

  <bb 4> [local count: 1073741824]:
  # result_6 = PHI <0(2), result_18(3)>
  # DEBUG result => result_6
  # DEBUG BEGIN_STMT
  freeze_20 = FlexCAN_IsFreezeMode (pBase_16);
  # DEBUG freeze => freeze_20
  # DEBUG BEGIN_STMT
  if (freeze_20 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  if (result_6 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG result => result_6
  # DEBUG BEGIN_STMT
  if (result_6 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_16 ();
  # DEBUG BEGIN_STMT
  _4 ={v} pBase_16->CTRL2;
  _5 = _4 & 8192;
  if (_5 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 132875551]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetEnhancedTDCOffset (pBase_16, enable_22(D), offset_23(D));
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 132875551]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetTDCOffset (pBase_16, enable_22(D), offset_23(D));

  <bb 10> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_16 ();

  <bb 11> [local count: 1073741824]:
  # result_15 = PHI <result_6(6), 0(10), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_30 < 0)
    goto <bb 12>; [25.50%]
  else
    goto <bb 14>; [74.50%]

  <bb 12> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_28 = FlexCAN_Disable (pBase_16);
  # DEBUG status => status_28
  # DEBUG BEGIN_STMT
  if (status_28 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_28

  <bb 14> [local count: 1073741823]:
  # result_7 = PHI <result_15(11), result_15(12), status_28(13)>
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  return result_7;

}



;; Function FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged (FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged, funcdef_no=109, decl_uid=11439, cgraph_uid=110, symbol_order=111)

Modification phase of node FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged/111
FlexCAN_Ip_SetTxArbitrationStartDelay_Privileged (uint8 instance, uint8 value)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _24;
  signed int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _25 = (signed int) _24;
  # DEBUG pBase => NULL
  # DEBUG D#9 => _25 < 0
  # DEBUG disabled => (boolean) D#9
  # DEBUG BEGIN_STMT
  if (_25 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741824]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_17 ();
  # DEBUG BEGIN_STMT
  FlexCAN_SetTxArbitrationStartDelay (pBase_13, value_19(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_17 ();

  <bb 8> [local count: 1073741824]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_25 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_23 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_23
  # DEBUG BEGIN_STMT
  if (status_23 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_23

  <bb 11> [local count: 1073741823]:
  # result_5 = PHI <result_12(8), result_12(9), status_23(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_GetBuffStatusFlag (FlexCAN_Ip_GetBuffStatusFlag, funcdef_no=110, decl_uid=11518, cgraph_uid=111, symbol_order=112)

Modification phase of node FlexCAN_Ip_GetBuffStatusFlag/112
FlexCAN_Ip_GetBuffStatusFlag (uint8 instance, uint8 msgBuffIdx)
{
  const struct FLEXCAN_Type * pBase;
  boolean returnResult;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  unsigned char _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG returnResult => 1
  # DEBUG BEGIN_STMT
  _1 = instance_8(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) instance_8(D);
  pBase_11 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_11
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_12(D) == 255)
    goto <bb 3>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_11
  # DEBUG intFlag => 30
  # DEBUG INLINE_ENTRY FlexCAN_GetEnhancedRxFIFOStatusFlag
  # DEBUG BEGIN_STMT
  _15 ={v} pBase_11->ERFSR;
  _14 = _15 >> 30;
  _16 = _14 & 1;
  _17 = (unsigned char) _16;
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) msgBuffIdx_12(D);
  _5 = FlexCAN_GetBuffStatusFlag (pBase_11, _4);
  if (_5 == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 346397702]:

  <bb 6> [local count: 1073741823]:
  # returnResult_6 = PHI <_17(3), 0(5), 1(4)>
  # DEBUG returnResult => returnResult_6
  # DEBUG BEGIN_STMT
  return returnResult_6;

}



;; Function FlexCAN_Ip_ClearBuffStatusFlag (FlexCAN_Ip_ClearBuffStatusFlag, funcdef_no=111, decl_uid=11521, cgraph_uid=112, symbol_order=113)

Modification phase of node FlexCAN_Ip_ClearBuffStatusFlag/113
FlexCAN_Ip_ClearBuffStatusFlag (uint8 instance, uint8 msgBuffIdx)
{
  struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_6(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = (int) instance_6(D);
  pBase_9 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_9
  # DEBUG BEGIN_STMT
  if (msgBuffIdx_10(D) == 255)
    goto <bb 3>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_9
  # DEBUG intFlag => 30
  # DEBUG INLINE_ENTRY FlexCAN_ClearEnhancedRxFifoIntStatusFlag
  # DEBUG BEGIN_STMT
  pBase_9->ERFSR ={v} 1073741824;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) msgBuffIdx_10(D);
  FlexCAN_ClearMsgBuffIntStatusFlag (pBase_9, _4);

  <bb 5> [local count: 1073741824]:
  # DEBUG base => NULL
  # DEBUG intFlag => NULL
  return;

}



;; Function FlexCAN_Ip_EnableInterrupts_Privileged (FlexCAN_Ip_EnableInterrupts_Privileged, funcdef_no=112, decl_uid=11445, cgraph_uid=113, symbol_order=114)

Modification phase of node FlexCAN_Ip_EnableInterrupts_Privileged/114
FlexCAN_Ip_EnableInterrupts_Privileged (uint8 u8Instance)
{
  struct Flexcan_Ip_StateType * state;
  Flexcan_Ip_StatusType result;
  struct FLEXCAN_Type * pBase;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  long unsigned int _17;
  signed int _18;
  long unsigned int _19;
  signed int _20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) u8Instance_9(D);
  pBase_11 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_11
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  state_12 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_12
  # DEBUG BEGIN_STMT
  _2 = u8Instance_9(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_11
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _17 ={v} MEM[(const struct FLEXCAN_Type *)pBase_11].MCR;
  _18 = (signed int) _17;
  # DEBUG pBase => NULL
  if (_18 >= 0)
    goto <bb 3>; [41.48%]
  else
    goto <bb 8>; [58.52%]

  <bb 3> [local count: 445388109]:
  # DEBUG BEGIN_STMT
  FlexCAN_EnableInterrupts (pBase_11, u8Instance_9(D));
  # DEBUG BEGIN_STMT
  _4 = state_12->enhancedFifoOutput.isPolling;
  if (_4 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 4> [local count: 146978076]:
  _5 = FlexCAN_IsEnhancedRxFifoAvailable (pBase_11);
  if (_5 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 49972546]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_11
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhancedRxFifoEnabled
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(const struct FLEXCAN_Type *)pBase_11].ERFCR;
  _20 = (signed int) _19;
  if (_20 < 0)
    goto <bb 6>; [41.00%]
  else
    goto <bb 7>; [59.00%]

  <bb 6> [local count: 20488744]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_11
  # DEBUG enable => 1
  # DEBUG INLINE_ENTRY FlexCAN_SetEnhancedRxFifoIntAll
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pBase_11->ERFIER ={v} 4026531840;

  <bb 7> [local count: 445388109]:
  # DEBUG base => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  state_12->isIntActive = 1;
  # DEBUG BEGIN_STMT
  # DEBUG result => 0

  <bb 8> [local count: 1073741824]:
  # result_6 = PHI <1(2), 0(7)>
  # DEBUG result => result_6
  # DEBUG BEGIN_STMT
  return result_6;

}



;; Function FlexCAN_Ip_DisableInterrupts_Privileged (FlexCAN_Ip_DisableInterrupts_Privileged, funcdef_no=113, decl_uid=11447, cgraph_uid=114, symbol_order=115)

Modification phase of node FlexCAN_Ip_DisableInterrupts_Privileged/115
FlexCAN_Ip_DisableInterrupts_Privileged (uint8 u8Instance)
{
  struct Flexcan_Ip_StateType * state;
  Flexcan_Ip_StatusType result;
  struct FLEXCAN_Type * pBase;
  int _1;
  _Bool _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _16;
  signed int _17;
  long unsigned int _18;
  signed int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) u8Instance_8(D);
  pBase_10 = Flexcan_Ip_apxBase[_1];
  # DEBUG pBase => pBase_10
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  state_11 = Flexcan_Ip_apxState[_1];
  # DEBUG state => state_11
  # DEBUG BEGIN_STMT
  _2 = u8Instance_8(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_10
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(const struct FLEXCAN_Type *)pBase_10].MCR;
  _17 = (signed int) _16;
  # DEBUG pBase => NULL
  if (_17 >= 0)
    goto <bb 3>; [41.48%]
  else
    goto <bb 7>; [58.52%]

  <bb 3> [local count: 445388109]:
  # DEBUG BEGIN_STMT
  FlexCAN_DisableInterrupts (pBase_10);
  # DEBUG BEGIN_STMT
  _4 = FlexCAN_IsEnhancedRxFifoAvailable (pBase_10);
  if (_4 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 151431957]:
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_10
  # DEBUG INLINE_ENTRY FlexCAN_IsEnhancedRxFifoEnabled
  # DEBUG BEGIN_STMT
  _18 ={v} MEM[(const struct FLEXCAN_Type *)pBase_10].ERFCR;
  _19 = (signed int) _18;
  if (_19 < 0)
    goto <bb 5>; [41.00%]
  else
    goto <bb 6>; [59.00%]

  <bb 5> [local count: 62087102]:
  # DEBUG base => NULL
  # DEBUG BEGIN_STMT
  # DEBUG base => pBase_10
  # DEBUG enable => 0
  # DEBUG INLINE_ENTRY FlexCAN_SetEnhancedRxFifoIntAll
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pBase_10->ERFIER ={v} 0;

  <bb 6> [local count: 445388109]:
  # DEBUG base => NULL
  # DEBUG base => NULL
  # DEBUG enable => NULL
  # DEBUG BEGIN_STMT
  state_11->isIntActive = 0;
  # DEBUG BEGIN_STMT
  # DEBUG result => 0

  <bb 7> [local count: 1073741824]:
  # result_5 = PHI <1(2), 0(6)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_SetErrorInt_Privileged (FlexCAN_Ip_SetErrorInt_Privileged, funcdef_no=114, decl_uid=11451, cgraph_uid=115, symbol_order=116)

Modification phase of node FlexCAN_Ip_SetErrorInt_Privileged/116
FlexCAN_Ip_SetErrorInt_Privileged (uint8 u8Instance, Flexcan_Ip_ErrorIntType type, boolean enable)
{
  volatile boolean x;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  unsigned char _5;
  long unsigned int _29;
  signed int _30;
  unsigned char x.0_31;

  <bb 2> [local count: 1476482]:
  # DEBUG BEGIN_STMT
  _1 = u8Instance_10(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) u8Instance_10(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _29 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _30 = (signed int) _29;
  # DEBUG pBase => NULL
  # DEBUG D#10 => _30 < 0
  # DEBUG disabled => (boolean) D#10
  # DEBUG BEGIN_STMT
  if (_30 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 376503]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15
  # DEBUG BEGIN_STMT
  if (result_15 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 4> [local count: 1288230]:
  # result_23 = PHI <result_15(3), 0(2)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  switch (type_16(D)) <default: <L14> [16.67%], case 0: <L6> [16.67%], case 1: <L10> [16.67%], case 2: <L4> [16.67%], case 3: <L5> [16.67%], case 4: <L3> [16.67%]>

  <bb 5> [local count: 214748]:
<L3>:
  # DEBUG BEGIN_STMT
  FlexCAN_SetErrIntCmd (pBase_13, 32768, enable_17(D));
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 214748]:
<L4>:
  # DEBUG BEGIN_STMT
  FlexCAN_SetErrIntCmd (pBase_13, 16384, enable_17(D));
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 7> [local count: 214748]:
<L5>:
  # DEBUG BEGIN_STMT
  FlexCAN_SetErrIntCmd (pBase_13, 16385, enable_17(D));
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 214748]:
<L6>:
  # DEBUG BEGIN_STMT
  _4 = FlexCAN_IsFreezeMode (pBase_13);
  if (_4 != 1)
    goto <bb 14>; [79.76%]
  else
    goto <bb 9>; [20.24%]

  <bb 9> [local count: 43465]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetErrIntCmd (pBase_13, 1024, enable_17(D));
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 214748]:
<L10>:
  # DEBUG BEGIN_STMT
  _5 = FlexCAN_IsFreezeMode (pBase_13);
  if (_5 != 1)
    goto <bb 14>; [79.76%]
  else
    goto <bb 11>; [20.24%]

  <bb 11> [local count: 43465]:
  # DEBUG BEGIN_STMT
  FlexCAN_SetErrIntCmd (pBase_13, 2048, enable_17(D));
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 214748]:
<L14>:
  # DEBUG BEGIN_STMT
  x ={v} 0;
  # DEBUG x => x
  # DEBUG INLINE_ENTRY DevAssert
  # DEBUG BEGIN_STMT
  x.0_31 ={v} x;
  if (x.0_31 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 18> [local count: 107374]:

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("BKPT #0");
  # DEBUG BEGIN_STMT

  <bb 19> [local count: 1073741824]:
  goto <bb 13>; [100.00%]

  <bb 14> [local count: 1369365]:
  # result_6 = PHI <result_15(3), result_23(5), result_23(6), result_23(7), result_23(9), result_23(11), result_23(12), 1(8), 1(10)>
  # DEBUG x => NULL
  # DEBUG result => result_6
  # DEBUG BEGIN_STMT
  if (_30 < 0)
    goto <bb 15>; [25.50%]
  else
    goto <bb 17>; [74.50%]

  <bb 15> [local count: 349188]:
  # DEBUG BEGIN_STMT
  status_28 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_28
  # DEBUG BEGIN_STMT
  if (status_28 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 174594]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_28

  <bb 17> [local count: 1369365]:
  # result_7 = PHI <result_6(14), result_6(15), status_28(16)>
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  return result_7;

}



;; Function FlexCAN_Ip_AbortTransfer (FlexCAN_Ip_AbortTransfer, funcdef_no=115, decl_uid=11524, cgraph_uid=116, symbol_order=117)

Modification phase of node FlexCAN_Ip_AbortTransfer/117
FlexCAN_Ip_AbortTransfer (uint8 u8Instance, uint8 mb_idx)
{
  Flexcan_Ip_StatusType result;
  const struct Flexcan_Ip_StateType * state;
  struct FLEXCAN_Type * pBase;
  _Bool _1;
  unsigned char _2;
  unsigned char _3;
  _Bool _4;
  unsigned char _5;
  int _6;
  int _7;
  <unnamed type> _8;
  long unsigned int _9;
  unsigned char _10;
  <unnamed type> _11;
  <unnamed type> _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = u8Instance_17(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  _3 = mb_idx_20(D) + 192;
  _4 = _3 > 190;
  _5 = (unsigned char) _4;
  DevAssert (_5);
  # DEBUG BEGIN_STMT
  _6 = (int) u8Instance_17(D);
  pBase_22 = Flexcan_Ip_apxBase[_6];
  # DEBUG pBase => pBase_22
  # DEBUG BEGIN_STMT
  state_23 = Flexcan_Ip_apxState[_6];
  # DEBUG state => state_23
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  if (mb_idx_20(D) <= 63)
    goto <bb 3>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _7 = (int) mb_idx_20(D);
  _8 ={v} state_23->mbs[_7].state;
  if (_8 == 0)
    goto <bb 8>; [52.23%]
  else
    goto <bb 4>; [47.77%]

  <bb 4> [local count: 256463234]:
  # DEBUG BEGIN_STMT
  _9 = (long unsigned int) mb_idx_20(D);
  _10 = state_23->isIntActive;
  FLEXCAN_ClearMsgBuffIntCmd (pBase_22, u8Instance_17(D), _9, _10);
  # DEBUG BEGIN_STMT
  _11 ={v} state_23->mbs[_7].state;
  if (_11 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 51908159]:
  # DEBUG BEGIN_STMT
  result_26 = FlexCAN_AbortTxTransfer (u8Instance_17(D), mb_idx_20(D));
  # DEBUG result => result_26

  <bb 6> [local count: 256463234]:
  # result_13 = PHI <0(4), result_26(5)>
  # DEBUG result => result_13
  # DEBUG BEGIN_STMT
  _12 ={v} state_23->mbs[_7].state;
  if (_12 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 51908159]:
  # DEBUG BEGIN_STMT
  FlexCAN_AbortRxTransfer (u8Instance_17(D), mb_idx_20(D));

  <bb 8> [local count: 1073741824]:
  # result_14 = PHI <0(2), 5(3), result_13(6), result_13(7)>
  # DEBUG result => result_14
  # DEBUG BEGIN_STMT
  return result_14;

}



;; Function FlexCAN_Ip_SetRxMb14Mask_Privileged (FlexCAN_Ip_SetRxMb14Mask_Privileged, funcdef_no=116, decl_uid=11418, cgraph_uid=117, symbol_order=118)

Modification phase of node FlexCAN_Ip_SetRxMb14Mask_Privileged/118
FlexCAN_Ip_SetRxMb14Mask_Privileged (uint8 instance, uint32 mask)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _22;
  signed int _23;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG freeze => 0
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _22 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _23 = (signed int) _22;
  # DEBUG pBase => NULL
  # DEBUG D#11 => _23 < 0
  # DEBUG disabled => (boolean) D#11
  # DEBUG BEGIN_STMT
  if (_23 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741823]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870911]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306368]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  pBase_13->RX14MASK ={v} mask_18(D);

  <bb 8> [local count: 1073741823]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_23 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_21 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_21
  # DEBUG BEGIN_STMT
  if (status_21 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_21

  <bb 11> [local count: 1073741824]:
  # result_5 = PHI <result_12(8), result_12(9), status_21(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_SetRxMb15Mask_Privileged (FlexCAN_Ip_SetRxMb15Mask_Privileged, funcdef_no=117, decl_uid=11421, cgraph_uid=118, symbol_order=119)

Modification phase of node FlexCAN_Ip_SetRxMb15Mask_Privileged/119
FlexCAN_Ip_SetRxMb15Mask_Privileged (uint8 instance, uint32 mask)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _22;
  signed int _23;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG freeze => 0
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _22 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _23 = (signed int) _22;
  # DEBUG pBase => NULL
  # DEBUG D#12 => _23 < 0
  # DEBUG disabled => (boolean) D#12
  # DEBUG BEGIN_STMT
  if (_23 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741823]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870911]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306368]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 402653184]:
  # DEBUG BEGIN_STMT
  pBase_13->RX15MASK ={v} mask_18(D);

  <bb 8> [local count: 1073741823]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_23 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_21 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_21
  # DEBUG BEGIN_STMT
  if (status_21 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_21

  <bb 11> [local count: 1073741824]:
  # result_5 = PHI <result_12(8), result_12(9), status_21(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_SetListenOnlyMode_Privileged (FlexCAN_Ip_SetListenOnlyMode_Privileged, funcdef_no=118, decl_uid=11454, cgraph_uid=119, symbol_order=120)

Modification phase of node FlexCAN_Ip_SetListenOnlyMode_Privileged/120
FlexCAN_Ip_SetListenOnlyMode_Privileged (uint8 instance, const boolean enable)
{
  boolean freeze;
  struct FLEXCAN_Type * pBase;
  Flexcan_Ip_StatusType status;
  Flexcan_Ip_StatusType result;
  _Bool _1;
  unsigned char _2;
  int _3;
  long unsigned int _24;
  signed int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = instance_9(D) <= 3;
  _2 = (unsigned char) _1;
  DevAssert (_2);
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG status => 0
  # DEBUG BEGIN_STMT
  _3 = (int) instance_9(D);
  pBase_13 = Flexcan_Ip_apxBase[_3];
  # DEBUG pBase => pBase_13
  # DEBUG BEGIN_STMT
  # DEBUG pBase => pBase_13
  # DEBUG INLINE_ENTRY FlexCAN_IsEnabled
  # DEBUG BEGIN_STMT
  _24 ={v} MEM[(const struct FLEXCAN_Type *)pBase_13].MCR;
  _25 = (signed int) _24;
  # DEBUG pBase => NULL
  # DEBUG D#13 => _25 < 0
  # DEBUG disabled => (boolean) D#13
  # DEBUG BEGIN_STMT
  if (_25 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  result_15 = FlexCAN_Enable (pBase_13);
  # DEBUG result => result_15

  <bb 4> [local count: 1073741824]:
  # result_4 = PHI <0(2), result_15(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  freeze_17 = FlexCAN_IsFreezeMode (pBase_13);
  # DEBUG freeze => freeze_17
  # DEBUG BEGIN_STMT
  if (freeze_17 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  if (result_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 805306369]:
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 265751101]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_10 ();
  # DEBUG BEGIN_STMT
  FlexCAN_SetListenOnlyMode (pBase_13, enable_19(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_10 ();

  <bb 8> [local count: 1073741824]:
  # result_12 = PHI <result_4(6), 0(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  if (_25 < 0)
    goto <bb 9>; [25.50%]
  else
    goto <bb 11>; [74.50%]

  <bb 9> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  status_23 = FlexCAN_Disable (pBase_13);
  # DEBUG status => status_23
  # DEBUG BEGIN_STMT
  if (status_23 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 136902082]:
  # DEBUG BEGIN_STMT
  # DEBUG result => status_23

  <bb 11> [local count: 1073741823]:
  # result_5 = PHI <result_12(8), result_12(9), status_23(10)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  return result_5;

}



;; Function FlexCAN_Ip_GetListenOnlyMode (FlexCAN_Ip_GetListenOnlyMode, funcdef_no=119, decl_uid=11526, cgraph_uid=120, symbol_order=121)

Modification phase of node FlexCAN_Ip_GetListenOnlyMode/121
FlexCAN_Ip_GetListenOnlyMode (uint8 instance)
{
  const struct FLEXCAN_Type * base;
  int _1;
  boolean _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instance_2(D);
  base_4 = Flexcan_Ip_apxBase[_1];
  # DEBUG base => base_4
  # DEBUG BEGIN_STMT
  _6 = FlexCAN_IsListenOnlyModeEnabled (base_4);
  return _6;

}



;; Function FlexCAN_Ip_ManualBusOffRecovery (FlexCAN_Ip_ManualBusOffRecovery, funcdef_no=120, decl_uid=11540, cgraph_uid=121, symbol_order=122)

Modification phase of node FlexCAN_Ip_ManualBusOffRecovery/122
FlexCAN_Ip_ManualBusOffRecovery (uint8 Instance)
{
  Flexcan_Ip_StatusType RetVal;
  uint32 uS2Ticks;
  uint32 timeElapsed;
  uint32 timeStart;
  struct FLEXCAN_Type * Base;
  int _1;
  _Bool _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _33;

  <bb 2> [local count: 696142619]:
  # DEBUG BEGIN_STMT
  _1 = (int) Instance_19(D);
  Base_21 = Flexcan_Ip_apxBase[_1];
  # DEBUG Base => Base_21
  # DEBUG BEGIN_STMT
  timeStart = 0;
  # DEBUG BEGIN_STMT
  # DEBUG timeElapsed => 0
  # DEBUG BEGIN_STMT
  uS2Ticks_24 = OsIf_MicrosToTicks (1000000, 0);
  # DEBUG uS2Ticks => uS2Ticks_24
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _2 = Instance_19(D) <= 3;
  _3 = (unsigned char) _2;
  DevAssert (_3);
  # DEBUG BEGIN_STMT
  _4 ={v} Base_21->CTRL1;
  _5 = _4 & 64;
  if (_5 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _6 ={v} Base_21->ESR1;
  _7 = _6 & 32;
  if (_7 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 4> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_20 ();
  # DEBUG BEGIN_STMT
  _8 ={v} Base_21->CTRL1;
  _9 = _8 & 4294967231;
  Base_21->CTRL1 ={v} _9;
  # DEBUG BEGIN_STMT
  _10 ={v} Base_21->CTRL1;
  _11 = _10 | 64;
  Base_21->CTRL1 ={v} _11;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_20 ();
  # DEBUG BEGIN_STMT
  _12 = OsIf_GetCounter (0);
  timeStart = _12;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _33 = OsIf_GetElapsed (&timeStart, 0);
  timeElapsed_34 = timeElapsed_15 + _33;
  # DEBUG timeElapsed => timeElapsed_34
  # DEBUG BEGIN_STMT
  if (uS2Ticks_24 <= timeElapsed_34)
    goto <bb 7>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878292]:

  <bb 6> [local count: 1073741824]:
  # timeElapsed_15 = PHI <0(4), timeElapsed_34(8)>
  # DEBUG timeElapsed => timeElapsed_15
  # DEBUG BEGIN_STMT
  _13 ={v} Base_21->ESR1;
  _14 = _13 & 32;
  if (_14 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 696142619]:
  # RetVal_16 = PHI <1(2), 0(3), 3(5), 0(6)>
  # DEBUG RetVal => RetVal_16
  # DEBUG BEGIN_STMT
  timeStart ={v} {CLOBBER};
  return RetVal_16;

}


