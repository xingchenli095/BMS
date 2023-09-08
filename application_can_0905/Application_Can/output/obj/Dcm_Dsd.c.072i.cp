
IPA constant propagation start:
Determining dynamic type for call: NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
  Starting walk at: NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
  instance pointer: RequestData_11  Outer instance pointer: RequestData_28 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 71, 2);
  Function call may change dynamic type:NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
Determining dynamic type for call: NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
  Starting walk at: NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
  instance pointer: &curNrc  Outer instance pointer: curNrc offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 71, 2);
  Function call may change dynamic type:NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
Determining dynamic type for call: NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
  Starting walk at: NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
  instance pointer: RequestData_13  Outer instance pointer: RequestData_30 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 70, 2);
  Function call may change dynamic type:NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
Determining dynamic type for call: NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
  Starting walk at: NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
  instance pointer: &curNrc  Outer instance pointer: curNrc offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Det_ASR40_ReportError (53, 0, 70, 2);
  Function call may change dynamic type:NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
Determining dynamic type for call: subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
  Starting walk at: subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
  instance pointer: curSidConfig_41(D)  Outer instance pointer: curSidConfig_41(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
  Starting walk at: subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
  instance pointer: &subSidIdxExt  Outer instance pointer: subSidIdxExt offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _17 = Dcm_DsdInternal_CheckSubServiceSession.isra.0 (subSidIdxExt.11_16, _52);
  Starting walk at: _17 = Dcm_DsdInternal_CheckSubServiceSession.isra.0 (subSidIdxExt.11_16, _52);
  instance pointer: _52  Outer instance pointer: curSidConfig_41(D) offset: 64 (bits) vtbl reference: 
  Function call may change dynamic type:subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
Determining dynamic type for call: _19 = Dcm_DsdInternal_CheckSubServiceSecurity.isra.0 (subSidIdxExt.12_18, _52);
  Starting walk at: _19 = Dcm_DsdInternal_CheckSubServiceSecurity.isra.0 (subSidIdxExt.12_18, _52);
  instance pointer: _52  Outer instance pointer: curSidConfig_41(D) offset: 64 (bits) vtbl reference: 
  Function call may change dynamic type:_17 = Dcm_DsdInternal_CheckSubServiceSession.isra.0 (subSidIdxExt.11_16, _52);
  Function call may change dynamic type:subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
Determining dynamic type for call: _25 (&modeRuleNrc);
  Starting walk at: _25 (&modeRuleNrc);
  instance pointer: &modeRuleNrc  Outer instance pointer: modeRuleNrc offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:subserviceEnabled_43 = Dcm_DsdInternal_GetSubServiceUsedStatus (ServiceTableIndex_40, _5, curSidConfig_41(D), _13, &subSidIdxExt);
  Function call may change dynamic type:_19 = Dcm_DsdInternal_CheckSubServiceSecurity.isra.0 (subSidIdxExt.12_18, _52);
  Function call may change dynamic type:_17 = Dcm_DsdInternal_CheckSubServiceSession.isra.0 (subSidIdxExt.11_16, _52);
Determining dynamic type for call: curNrc_54 = Dcm_Dsd_SecurityLevelCheckOnService (sidConfig_46);
  Starting walk at: curNrc_54 = Dcm_Dsd_SecurityLevelCheckOnService (sidConfig_46);
  instance pointer: sidConfig_46  Outer instance pointer: sidConfig_46 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:curSesCtrl_51 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
Determining dynamic type for call: _29 (&modeRuleNrc);
  Starting walk at: _29 (&modeRuleNrc);
  instance pointer: &modeRuleNrc  Outer instance pointer: modeRuleNrc offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:curSesCtrl_51 = Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession ();
  Function call may change dynamic type:curNrc_54 = Dcm_Dsd_SecurityLevelCheckOnService (sidConfig_46);
Determining dynamic type for call: Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
  Starting walk at: Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
  instance pointer: curMsgContext_38  Outer instance pointer: &MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
  Starting walk at: Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
  instance pointer: &TxBufferUse  Outer instance pointer: TxBufferUse offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: curNrc_50 = Dcm_DsdInternal_ValidateSvcReq (instIdx_37(D), &curSidConfig);
  Starting walk at: curNrc_50 = Dcm_DsdInternal_ValidateSvcReq (instIdx_37(D), &curSidConfig);
  instance pointer: &curSidConfig  Outer instance pointer: curSidConfig offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_17 = Dcm_DsdInternal_ManufacturerNotification (instIdx_37(D));
  Function call may change dynamic type:TxBufferAllocationResult_47 = Dcm_Dsl_BufferAllocate (_8, TxBufferUse.0_9, 0, _10);
  Function call may change dynamic type:Dcm_Dsl_BufferAllocate (_5, 7, 3, _6);
  Function call may change dynamic type:Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
Determining dynamic type for call: Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0 (instIdx_37(D), _67, curNrc_50);
  Starting walk at: Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0 (instIdx_37(D), _67, curNrc_50);
  instance pointer: _67  Outer instance pointer: curSidConfig.1_18 offset: 224 (bits) vtbl reference: 
  Function call may change dynamic type:curNrc_50 = Dcm_DsdInternal_ValidateSvcReq (instIdx_37(D), &curSidConfig);
  Function call may change dynamic type:_17 = Dcm_DsdInternal_ManufacturerNotification (instIdx_37(D));
  Function call may change dynamic type:TxBufferAllocationResult_47 = Dcm_Dsl_BufferAllocate (_8, TxBufferUse.0_9, 0, _10);
  Function call may change dynamic type:Dcm_Dsl_BufferAllocate (_5, 7, 3, _6);
  Function call may change dynamic type:Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
Determining dynamic type for call: curNrc_54 = Dcm_DsdInternal_ValidateSubSvcReq (instIdx_37(D), curSidConfig.2_20);
  Starting walk at: curNrc_54 = Dcm_DsdInternal_ValidateSubSvcReq (instIdx_37(D), curSidConfig.2_20);
  instance pointer: curSidConfig.2_20  Outer instance pointer: curSidConfig.2_20 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_19 = Dcm_DsdInternal_SupplierNotification (instIdx_37(D));
  Function call may change dynamic type:Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0 (instIdx_37(D), _67, curNrc_50);
  Function call may change dynamic type:curNrc_50 = Dcm_DsdInternal_ValidateSvcReq (instIdx_37(D), &curSidConfig);
  Function call may change dynamic type:_17 = Dcm_DsdInternal_ManufacturerNotification (instIdx_37(D));
  Function call may change dynamic type:TxBufferAllocationResult_47 = Dcm_Dsl_BufferAllocate (_8, TxBufferUse.0_9, 0, _10);
  Function call may change dynamic type:Dcm_Dsl_BufferAllocate (_5, 7, 3, _6);
  Function call may change dynamic type:Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
Determining dynamic type for call: Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0 (instIdx_37(D), _68, curNrc_29);
  Starting walk at: Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0 (instIdx_37(D), _68, curNrc_29);
  instance pointer: _68  Outer instance pointer: curSidConfig.6_24 offset: 96 (bits) vtbl reference: 
  Function call may change dynamic type:_19 = Dcm_DsdInternal_SupplierNotification (instIdx_37(D));
  Function call may change dynamic type:Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0 (instIdx_37(D), _67, curNrc_50);
  Function call may change dynamic type:curNrc_50 = Dcm_DsdInternal_ValidateSvcReq (instIdx_37(D), &curSidConfig);
  Function call may change dynamic type:_17 = Dcm_DsdInternal_ManufacturerNotification (instIdx_37(D));
  Function call may change dynamic type:TxBufferAllocationResult_47 = Dcm_Dsl_BufferAllocate (_8, TxBufferUse.0_9, 0, _10);
  Function call may change dynamic type:Dcm_Dsl_BufferAllocate (_5, 7, 3, _6);
  Function call may change dynamic type:Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
  Function call may change dynamic type:curNrc_54 = Dcm_DsdInternal_ValidateSubSvcReq (instIdx_37(D), curSidConfig.2_20);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42:
  Jump functions of caller  Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41:
  Jump functions of caller  Dcm_DsdInternal_CheckSubServiceSecurity.isra.0/40:
  Jump functions of caller  Dcm_DsdInternal_CheckSubServiceSession.isra.0/39:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/38:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/37:
  Jump functions of caller  Dcm_DspInternal_SvcFunc/35:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/34:
  Jump functions of caller  Dcm_Dsp_SecurityAccess_Reset/32:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/28:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/27:
  Jump functions of caller  Dcm_HsmEmitInst/23:
  Jump functions of caller  Det_ASR40_ReportError/22:
  Jump functions of caller  Dcm_HsmEmitToSelfInst/19:
  Jump functions of caller  Dcm_Dsl_BufferAllocate/18:
  Jump functions of caller  Dcm_Dsd_SecurityLevelCheckOnService/16:
  Jump functions of caller  Dcm_DsdInternal_HandleReqMsgType/15:
  Jump functions of caller  Dcm_DsdInternal_SupplierNotification/14:
    indirect simple callsite, calling param -1, offset 0, for stmt NotificationRetVal_30 = _5 (Sid_24, RequestData_11, DataSize_25, ReqType_12, SourceAddress_27, &curNrc);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 4: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 5: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DsdInternal_ManufacturerNotification/13:
    indirect simple callsite, calling param -1, offset 0, for stmt NotificationRetVal_32 = _7 (Sid_26, RequestData_13, DataSize_27, ReqType_14, SourceAddress_29, &curNrc);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 4: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 5: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DsdInternal_ValidateSubSvcReq/10:
    callsite  Dcm_DsdInternal_ValidateSubSvcReq/10 -> Dcm_DsdInternal_CheckSubServiceSecurity.isra.0/40 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DsdInternal_ValidateSubSvcReq/10 -> Dcm_DsdInternal_CheckSubServiceSession.isra.0/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_DsdInternal_ValidateSubSvcReq/10 -> Dcm_DsdInternal_GetSubServiceUsedStatus/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    indirect simple callsite, calling param -1, offset 0, for stmt _25 (&modeRuleNrc);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DsdInternal_GetSubServiceUsedStatus/9:
  Jump functions of caller  Dcm_DsdInternal_ValidateSvcReq/8:
    callsite  Dcm_DsdInternal_ValidateSvcReq/8 -> Dcm_Dsd_SecurityLevelCheckOnService/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _29 (&modeRuleNrc);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_DsdInternal_ProcessPage/5:
  Jump functions of caller  Dcm_DsdInternal_StartPagedProcessing/4:
  Jump functions of caller  Dcm_ExternalProcessingDone/3:
  Jump functions of caller  Dcm_ExternalSetNegResponse/2:
  Jump functions of caller  Dcm_DsdInternal_DispatchSvcReq/1:
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_ValidateSubSvcReq/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_SupplierNotification/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_ValidateSvcReq/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_ManufacturerNotification/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_DsdInternal_DispatchSvcReq/1 -> Dcm_DsdInternal_HandleReqMsgType/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]

 Propagating constants:

Not considering Dcm_DsdInternal_ProcessPage for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DsdInternal_StartPagedProcessing for cloning; -fipa-cp-clone disabled.
Not considering Dcm_ExternalProcessingDone for cloning; -fipa-cp-clone disabled.
Not considering Dcm_ExternalSetNegResponse for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DsdInternal_DispatchSvcReq for cloning; -fipa-cp-clone disabled.

overall_size: 695, max_new_size: 11001
 - context independent values, size: 18, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Std_ReturnType (*<T997>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const boolean * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DsdInternal_CheckSubServiceSecurity.isra.0/40:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Dcm_SubSidTabEntryConfigType * const * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DsdInternal_CheckSubServiceSession.isra.0/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Dcm_SubSidTabEntryConfigType * const * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_Dsd_SecurityLevelCheckOnService/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DsdInternal_HandleReqMsgType/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_MsgContextType * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dcm_BufferUsageType * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: Dcm_DsdInternal_SupplierNotification/14:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DsdInternal_ManufacturerNotification/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_DsdInternal_ValidateSubSvcReq/10:
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
  Node: Dcm_DsdInternal_GetSubServiceUsedStatus/9:
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
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DsdInternal_ValidateSvcReq/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dcm_SidTabEntryConfigType * * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_DsdInternal_ProcessPage/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_DsdInternal_StartPagedProcessing/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_ExternalProcessingDone/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_ExternalSetNegResponse/2:
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
  Node: Dcm_DsdInternal_DispatchSvcReq/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of Dcm_DsdInternal_HandleReqMsgType/15 for all known contexts.
Propagated bits info for function Dcm_DsdInternal_ValidateSvcReq/8:
 param 1: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: Dcm_DsdInternal_HandleReqMsgType/15
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_DsdInternal_HandleReqMsgType.constprop.0/43 (Dcm_DsdInternal_HandleReqMsgType.constprop) @06ea0ee0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_DsdInternal_HandleReqMsgType/15
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0) @0701fc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (19293530 (estimated locally),0.02 per call) 
  Calls: Dcm_DspInternal_SvcFunc/35 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/34 (536870913 (estimated locally),0.50 per call) 
Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0) @0701f2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (116930485 (estimated locally),0.11 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (354334802 (estimated locally),0.33 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (354334802 (estimated locally),0.33 per call) 
Dcm_DsdInternal_CheckSubServiceSecurity.isra.0/40 (Dcm_DsdInternal_CheckSubServiceSecurity.isra.0) @06f2cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:696142619 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_ValidateSubSvcReq/10 (111715385 (estimated locally),0.10 per call) 
  Calls: Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/28 (229727064 (estimated locally),0.33 per call) 
Dcm_DsdInternal_CheckSubServiceSession.isra.0/39 (Dcm_DsdInternal_CheckSubServiceSession.isra.0) @06ed27e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_ValidateSubSvcReq/10 (233860969 (estimated locally),0.22 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/27 (114863532 (estimated locally),0.33 per call) 
Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/38 (Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol) @06f11620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ProcessPage/5 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/37 (Dcm_Dsl_Supervisor_GetProcessingProtocolIndex) @06f112a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_StartPagedProcessing/4 (384227774 (estimated locally),0.36 per call) Dcm_ExternalProcessingDone/3 (384227774 (estimated locally),0.36 per call) Dcm_ExternalSetNegResponse/2 (384227774 (estimated locally),0.36 per call) 
  Calls: 
Dcm_Initialized/36 (Dcm_Initialized) @06f10678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_ExternalProcessingDone/3 (read)Dcm_DsdInternal_StartPagedProcessing/4 (read)Dcm_ExternalSetNegResponse/2 (read)Dcm_DsdInternal_ProcessPage/5 (read)
  Availability: not_available
  Varpool flags:
Dcm_DspInternal_SvcFunc/35 (Dcm_DspInternal_SvcFunc) @06f110e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured/34 (Dcm_Dsl_DiagnosticSessionHandler_ClearResetToDefaultSessionOccured) @06f11000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_DsdSubServiceUsed/33 (Dcm_DsdSubServiceUsed) @06f08750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_GetSubServiceUsedStatus/9 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_SecurityAccess_Reset/32 (Dcm_Dsp_SecurityAccess_Reset) @06ef8b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ValidateSubSvcReq/10 (89223651 (estimated locally),0.08 per call) 
  Calls: 
Dcm_RteSupplierNotificationTable/31 (Dcm_RteSupplierNotificationTable) @06f045e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_SupplierNotification/14 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ef8460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ProcessPage/5 (365072220 (estimated locally),0.34 per call) Dcm_DsdInternal_StartPagedProcessing/4 (384227774 (estimated locally),0.36 per call) Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06ef8380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ProcessPage/5 (365072220 (estimated locally),0.34 per call) Dcm_DsdInternal_StartPagedProcessing/4 (384227774 (estimated locally),0.36 per call) Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/28 (Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel) @06ef81c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_CheckSubServiceSecurity.isra.0/40 (229727064 (estimated locally),0.33 per call) Dcm_Dsd_SecurityLevelCheckOnService/16 (176713126 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/27 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @06ef8000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ValidateSvcReq/8 (4604138 (estimated locally),0.04 per call) Dcm_DsdInternal_CheckSubServiceSession.isra.0/39 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Dcm_DsdServiceUsed/26 (Dcm_DsdServiceUsed) @06ef5168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_ValidateSvcReq/8 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_SidTabConfig/25 (Dcm_SidTabConfig) @06ef5120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSubSvcReq/10 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_ProtocolConfig/24 (Dcm_ProtocolConfig) @06ef50d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSubSvcReq/10 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmEmitInst/23 (Dcm_HsmEmitInst) @06ed2b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ProcessPage/5 (365072220 (estimated locally),0.34 per call) Dcm_DsdInternal_SupplierNotification/14 (30009026 (estimated locally),0.26 per call) Dcm_DsdInternal_ManufacturerNotification/13 (30009026 (estimated locally),0.26 per call) 
  Calls: 
Det_ASR40_ReportError/22 (Det_ASR40_ReportError) @06ed2a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_ProcessPage/5 (708669605 (estimated locally),0.66 per call) Dcm_DsdInternal_StartPagedProcessing/4 (164669046 (estimated locally),0.15 per call) Dcm_DsdInternal_StartPagedProcessing/4 (524845004 (estimated locally),0.49 per call) Dcm_ExternalProcessingDone/3 (164669046 (estimated locally),0.15 per call) Dcm_ExternalProcessingDone/3 (524845004 (estimated locally),0.49 per call) Dcm_ExternalSetNegResponse/2 (126795166 (estimated locally),0.12 per call) Dcm_ExternalSetNegResponse/2 (164669046 (estimated locally),0.15 per call) Dcm_ExternalSetNegResponse/2 (524845004 (estimated locally),0.49 per call) Dcm_DsdInternal_SupplierNotification/14 (107586144 (estimated locally),0.94 per call) Dcm_DsdInternal_ManufacturerNotification/13 (107586144 (estimated locally),0.94 per call) 
  Calls: 
Dcm_RteManufacturerNotificationTable/21 (Dcm_RteManufacturerNotificationTable) @06edf480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_ManufacturerNotification/13 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmScDcm/20 (Dcm_HsmScDcm) @06ed75a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_ManufacturerNotification/13 (addr)Dcm_DsdInternal_ManufacturerNotification/13 (addr)Dcm_DsdInternal_SupplierNotification/14 (addr)Dcm_DsdInternal_DispatchSvcReq/1 (addr)Dcm_DsdInternal_SupplierNotification/14 (addr)Dcm_DsdInternal_ManufacturerNotification/13 (addr)Dcm_DsdInternal_SupplierNotification/14 (addr)Dcm_DsdInternal_DispatchSvcReq/1 (addr)Dcm_DsdInternal_ProcessPage/5 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmEmitToSelfInst/19 (Dcm_HsmEmitToSelfInst) @06ed2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (38587060 (estimated locally),0.04 per call) Dcm_DsdInternal_DispatchSvcReq/1 (719407023 (estimated locally),0.67 per call) Dcm_DsdInternal_SupplierNotification/14 (38284015 (estimated locally),0.33 per call) Dcm_DsdInternal_SupplierNotification/14 (8274989 (estimated locally),0.07 per call) Dcm_DsdInternal_ManufacturerNotification/13 (38284015 (estimated locally),0.33 per call) Dcm_DsdInternal_ManufacturerNotification/13 (8274989 (estimated locally),0.07 per call) 
  Calls: 
Dcm_Dsl_BufferAllocate/18 (Dcm_Dsl_BufferAllocate) @06ed2540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (1073741824 (estimated locally),1.00 per call) Dcm_DsdInternal_DispatchSvcReq/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_HsmInfo/17 (Dcm_HsmInfo) @06ed7438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_DsdInternal_ValidateSubSvcReq/10 (write)Dcm_ExternalSetNegResponse/2 (read)Dcm_ExternalProcessingDone/3 (write)Dcm_DsdInternal_ManufacturerNotification/13 (write)Dcm_DsdInternal_SupplierNotification/14 (write)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_StartPagedProcessing/4 (read)Dcm_DsdInternal_StartPagedProcessing/4 (write)Dcm_DsdInternal_ValidateSvcReq/8 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_ManufacturerNotification/13 (write)Dcm_ExternalSetNegResponse/2 (write)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_ManufacturerNotification/13 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (read)Dcm_DsdInternal_SupplierNotification/14 (write)Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSvcReq/8 (write)Dcm_DsdInternal_ValidateSvcReq/8 (write)Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_ValidateSvcReq/8 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (write)Dcm_DsdInternal_DispatchSvcReq/1 (addr)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (addr)Dcm_DsdInternal_DispatchSvcReq/1 (addr)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (read)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_DispatchSvcReq/1 (write)Dcm_DsdInternal_ProcessPage/5 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (write)Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (read)Dcm_DsdInternal_ValidateSubSvcReq/10 (read)Dcm_DsdInternal_ValidateSubSvcReq/10 (read)Dcm_DsdInternal_ValidateSubSvcReq/10 (read)Dcm_DsdInternal_ValidateSubSvcReq/10 (read)Dcm_DsdInternal_ProcessPage/5 (write)Dcm_DsdInternal_ProcessPage/5 (read)Dcm_DsdInternal_ProcessPage/5 (write)
  Availability: not_available
  Varpool flags:
Dcm_Dsd_SecurityLevelCheckOnService/16 (Dcm_Dsd_SecurityLevelCheckOnService) @06ed22a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:176713126 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_ValidateSvcReq/8 (3844455 (estimated locally),0.03 per call) 
  Calls: Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/28 (176713126 (estimated locally),1.00 per call) 
Dcm_DsdInternal_HandleReqMsgType/15 (Dcm_DsdInternal_HandleReqMsgType) @06ed20e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_DsdInternal_SupplierNotification/14 (Dcm_DsdInternal_SupplierNotification) @06ea9ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_RteSupplierNotificationTable/31 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmScDcm/20 (addr)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (38587060 (estimated locally),0.04 per call) 
  Calls: Dcm_HsmEmitToSelfInst/19 (38284015 (estimated locally),0.33 per call) Dcm_HsmEmitToSelfInst/19 (8274989 (estimated locally),0.07 per call) Dcm_HsmEmitInst/23 (30009026 (estimated locally),0.26 per call) Det_ASR40_ReportError/22 (107586144 (estimated locally),0.94 per call) 
   Indirect call(1014686025 (estimated locally),8.83 per call) 
Dcm_DsdInternal_ManufacturerNotification/13 (Dcm_DsdInternal_ManufacturerNotification) @06ea9c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_RteManufacturerNotificationTable/21 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmScDcm/20 (addr)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (354334802 (estimated locally),0.33 per call) 
  Calls: Dcm_HsmEmitToSelfInst/19 (38284015 (estimated locally),0.33 per call) Dcm_HsmEmitToSelfInst/19 (8274989 (estimated locally),0.07 per call) Dcm_HsmEmitInst/23 (30009026 (estimated locally),0.26 per call) Det_ASR40_ReportError/22 (107586144 (estimated locally),0.94 per call) 
   Indirect call(1014686025 (estimated locally),8.83 per call) 
Dcm_DsdInternal_ValidateSubSvcReq/10 (Dcm_DsdInternal_ValidateSubSvcReq) @06ea9620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_HsmInfo/17 (read)Dcm_ProtocolConfig/24 (read)Dcm_SidTabConfig/25 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (585752 (estimated locally),0.00 per call) 
  Calls: Dcm_Dsp_SecurityAccess_Reset/32 (89223651 (estimated locally),0.08 per call) Dcm_DsdInternal_CheckSubServiceSecurity.isra.0/40 (111715385 (estimated locally),0.10 per call) Dcm_DsdInternal_CheckSubServiceSession.isra.0/39 (233860969 (estimated locally),0.22 per call) Dcm_DsdInternal_GetSubServiceUsedStatus/9 (352990477 (estimated locally),0.33 per call) 
   Indirect call(191598272 (estimated locally),0.18 per call) 
Dcm_DsdInternal_GetSubServiceUsedStatus/9 (Dcm_DsdInternal_GetSubServiceUsedStatus) @06ea9460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DsdSubServiceUsed/33 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_ValidateSubSvcReq/10 (352990477 (estimated locally),0.33 per call) 
  Calls: 
Dcm_DsdInternal_ValidateSvcReq/8 (Dcm_DsdInternal_ValidateSvcReq) @06ea92a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ProtocolConfig/24 (read)Dcm_SidTabConfig/25 (read)Dcm_HsmInfo/17 (read)Dcm_DsdServiceUsed/26 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_SidTabConfig/25 (read)Dcm_HsmInfo/17 (read)Dcm_SidTabConfig/25 (read)Dcm_HsmInfo/17 (read)Dcm_ProtocolConfig/24 (read)Dcm_HsmInfo/17 (write)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Dcm_DsdInternal_DispatchSvcReq/1 (116930485 (estimated locally),0.11 per call) 
  Calls: Dcm_Dsd_SecurityLevelCheckOnService/16 (3844455 (estimated locally),0.03 per call) Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/27 (4604138 (estimated locally),0.04 per call) 
   Indirect call(9766353 (estimated locally),0.09 per call) 
Dcm_DsdInternal_ProcessPage/5 (Dcm_DsdInternal_ProcessPage) @06ea0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/36 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_HsmEmitInst/23 (365072220 (estimated locally),0.34 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (365072220 (estimated locally),0.34 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (365072220 (estimated locally),0.34 per call) Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol/38 (365072220 (estimated locally),0.34 per call) Det_ASR40_ReportError/22 (708669605 (estimated locally),0.66 per call) 
Dcm_DsdInternal_StartPagedProcessing/4 (Dcm_DsdInternal_StartPagedProcessing) @06ea08c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/36 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (384227774 (estimated locally),0.36 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (384227774 (estimated locally),0.36 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/37 (384227774 (estimated locally),0.36 per call) Det_ASR40_ReportError/22 (164669046 (estimated locally),0.15 per call) Det_ASR40_ReportError/22 (524845004 (estimated locally),0.49 per call) 
Dcm_ExternalProcessingDone/3 (Dcm_ExternalProcessingDone) @06ea0540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/36 (read)Dcm_HsmInfo/17 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/37 (384227774 (estimated locally),0.36 per call) Det_ASR40_ReportError/22 (164669046 (estimated locally),0.15 per call) Det_ASR40_ReportError/22 (524845004 (estimated locally),0.49 per call) 
Dcm_ExternalSetNegResponse/2 (Dcm_ExternalSetNegResponse) @06ea01c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/36 (read)Dcm_ValidNegativeResponseCodeMask/0 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/22 (126795166 (estimated locally),0.12 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/37 (384227774 (estimated locally),0.36 per call) Det_ASR40_ReportError/22 (164669046 (estimated locally),0.15 per call) Det_ASR40_ReportError/22 (524845004 (estimated locally),0.49 per call) 
Dcm_DsdInternal_DispatchSvcReq/1 (Dcm_DsdInternal_DispatchSvcReq) @06d8dee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_HsmInfo/17 (addr)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (addr)Dcm_HsmInfo/17 (addr)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (read)Dcm_HsmInfo/17 (write)Dcm_HsmScDcm/20 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_HsmEmitToSelfInst/19 (38587060 (estimated locally),0.04 per call) Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0/42 (19293530 (estimated locally),0.02 per call) Dcm_DsdInternal_ValidateSubSvcReq/10 (585752 (estimated locally),0.00 per call) Dcm_DsdInternal_SupplierNotification/14 (38587060 (estimated locally),0.04 per call) Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0/41 (116930485 (estimated locally),0.11 per call) Dcm_DsdInternal_ValidateSvcReq/8 (116930485 (estimated locally),0.11 per call) Dcm_DsdInternal_ManufacturerNotification/13 (354334802 (estimated locally),0.33 per call) Dcm_HsmEmitToSelfInst/19 (719407023 (estimated locally),0.67 per call) Dcm_Dsl_BufferAllocate/18 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferAllocate/18 (1073741824 (estimated locally),1.00 per call) Dcm_DsdInternal_HandleReqMsgType.constprop/43 (1073741824 (estimated locally),1.00 per call) 
Dcm_ValidNegativeResponseCodeMask/0 (Dcm_ValidNegativeResponseCodeMask) @06dae870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_ExternalSetNegResponse/2 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Dcm_DsdInternal_DispatchSvcReq (Dcm_DsdInternal_DispatchSvcReq, funcdef_no=0, decl_uid=6468, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_DsdInternal_DispatchSvcReq/1
Dcm_DsdInternal_DispatchSvcReq (uint8 instIdx)
{
  Dcm_NegativeResponseCodeType curNrc;
  const struct Dcm_SidTabEntryConfigType * curSidConfig;
  struct Dcm_MsgContextType * const curMsgContext;
  BufReq_ReturnType TxBufferAllocationResult;
  Dcm_BufferUsageType TxBufferUse;
  int _1;
  unsigned char _2;
  Dcm_MsgItemType * _3;
  unsigned char _4;
  short unsigned int _5;
  struct Dcm_BufferType * _6;
  short unsigned int _7;
  short unsigned int _8;
  unsigned char TxBufferUse.0_9;
  struct Dcm_BufferType * _10;
  long unsigned int _11;
  long unsigned int _12;
  Dcm_MsgItemType * _13;
  Dcm_MsgItemType * _14;
  unsigned char _15;
  short unsigned int _16;
  unsigned char _17;
  const struct Dcm_SidTabEntryConfigType * curSidConfig.1_18;
  unsigned char _19;
  const struct Dcm_SidTabEntryConfigType * curSidConfig.2_20;
  Std_ReturnType (*<T686>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) _21;
  unsigned char _22;
  unsigned char _23;
  const struct Dcm_SidTabEntryConfigType * curSidConfig.6_24;
  Std_ReturnType (*<T686>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) _25;
  unsigned char _26;
  long unsigned int _27;
  const boolean * _67;
  Std_ReturnType (*<T997>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) * _68;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  TxBufferUse = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_37(D);
  # DEBUG D#17 => &Dcm_HsmInfo[_1]
  # DEBUG curHsmInfo => D#17
  # DEBUG BEGIN_STMT
  curMsgContext_38 = &MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext;
  # DEBUG curMsgContext => curMsgContext_38
  # DEBUG BEGIN_STMT
  curSidConfig = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RequestType;
  Dcm_DsdInternal_HandleReqMsgType (_2, curMsgContext_38, &TxBufferUse);
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].processPageFuncId = 255;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].dspService = 1;
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RxBuffer.BufferPtr;
  _4 = *_3;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId = _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxConnectionId;
  _6 = &MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].NRCBuffer;
  Dcm_Dsl_BufferAllocate (_5, 7, 3, _6);
  # DEBUG BEGIN_STMT
  _7 = (short unsigned int) instIdx_37(D);
  _8 = _7 + 12;
  TxBufferUse.0_9 = TxBufferUse;
  _10 = &MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].TxBuffer;
  TxBufferAllocationResult_47 = Dcm_Dsl_BufferAllocate (_8, TxBufferUse.0_9, 0, _10);
  # DEBUG TxBufferAllocationResult => TxBufferAllocationResult_47
  # DEBUG BEGIN_STMT
  if (TxBufferAllocationResult_47 != 0)
    goto <bb 3>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RxBuffer.FilledLength;
  _12 = _11 + 4294967295;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.reqDataLen = _12;
  # DEBUG BEGIN_STMT
  if (_11 > 1)
    goto <bb 4>; [59.00%]
  else
    goto <bb 5>; [41.00%]

  <bb 4> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  _13 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RxBuffer.BufferPtr;
  _14 = _13 + 1;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.reqData = _14;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.reqData = 0B;

  <bb 6> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _15 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.idContext = _15;
  # DEBUG BEGIN_STMT
  _16 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RxConnectionId;
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].msgContext.dcmRxPduId = _16;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode = 33;
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitToSelfInst (&Dcm_HsmScDcm, instIdx_37(D), 6);
  goto <bb 21>; [100.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _17 = Dcm_DsdInternal_ManufacturerNotification (instIdx_37(D));
  if (_17 == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 8> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  curNrc_50 = Dcm_DsdInternal_ValidateSvcReq (instIdx_37(D), &curSidConfig);
  # DEBUG curNrc => curNrc_50
  # DEBUG BEGIN_STMT
  curSidConfig.1_18 = curSidConfig;
  _67 = &MEM[(unsigned char *)curSidConfig.1_18 + 28B];
  # DEBUG D#10 => curSidConfig.1_18
  Dcm_DsdInternal_UpdateHsmInfoAfterValidSvcReq.isra.0 (instIdx_37(D), _67, curNrc_50);
  # DEBUG BEGIN_STMT
  if (curNrc_50 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 9> [local count: 38587060]:
  # DEBUG BEGIN_STMT
  _19 = Dcm_DsdInternal_SupplierNotification (instIdx_37(D));
  if (_19 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 10> [local count: 19293530]:
  # DEBUG BEGIN_STMT
  curSidConfig.2_20 = curSidConfig;
  _21 = curSidConfig.2_20->ExtSrvHandler;
  if (_21 == 0B)
    goto <bb 11>; [30.00%]
  else
    goto <bb 14>; [70.00%]

  <bb 11> [local count: 5788059]:
  _22 = curSidConfig.2_20->NumSubServices;
  if (_22 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 2894029]:
  _23 = curSidConfig.2_20->SubfuncAvail;
  if (_23 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 585752]:
  # DEBUG BEGIN_STMT
  curNrc_54 = Dcm_DsdInternal_ValidateSubSvcReq (instIdx_37(D), curSidConfig.2_20);
  # DEBUG curNrc => curNrc_54

  <bb 14> [local count: 19293530]:
  # curNrc_28 = PHI <0(10), 0(11), 0(12), curNrc_54(13)>
  # DEBUG curNrc => curNrc_28
  # DEBUG BEGIN_STMT
  curSidConfig.6_24 = curSidConfig;
  _25 = curSidConfig.6_24->ExtSrvHandler;
  if (_25 != 0B)
    goto <bb 15>; [70.00%]
  else
    goto <bb 18>; [30.00%]

  <bb 15> [local count: 13505471]:
  _26 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].serviceId;
  if (_26 == 16)
    goto <bb 16>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 16> [local count: 4591860]:
  _27 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].RxBuffer.FilledLength;
  if (_27 <= 1)
    goto <bb 17>; [41.00%]
  else
    goto <bb 18>; [59.00%]

  <bb 17> [local count: 1882663]:
  # DEBUG BEGIN_STMT
  # DEBUG curNrc => 19

  <bb 18> [local count: 19293530]:
  # curNrc_29 = PHI <curNrc_28(14), curNrc_28(15), curNrc_28(16), 19(17)>
  # DEBUG curNrc => curNrc_29
  # DEBUG BEGIN_STMT
  _68 = &MEM[(Std_ReturnType (*<T686>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) *)curSidConfig.6_24 + 12B];
  # DEBUG D#16 => curSidConfig.6_24
  Dcm_DsdInternal_UpdateHsmInfoAfterValidSubSvcReq.isra.0 (instIdx_37(D), _68, curNrc_29);

  <bb 19> [local count: 116930485]:
  # curNrc_30 = PHI <curNrc_50(8), 0(9), curNrc_29(18)>
  # DEBUG curNrc => curNrc_30
  # DEBUG BEGIN_STMT
  if (curNrc_30 != 0)
    goto <bb 20>; [33.00%]
  else
    goto <bb 21>; [67.00%]

  <bb 20> [local count: 38587060]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_1].negativeResponseCode = curNrc_30;
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitToSelfInst (&Dcm_HsmScDcm, instIdx_37(D), 6);

  <bb 21> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  TxBufferUse ={v} {CLOBBER};
  curSidConfig ={v} {CLOBBER};
  return;

}



;; Function Dcm_ExternalSetNegResponse (Dcm_ExternalSetNegResponse, funcdef_no=1, decl_uid=5749, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_ExternalSetNegResponse/2
Dcm_ExternalSetNegResponse (struct Dcm_MsgContextType * pMsgContext, Dcm_NegativeResponseCodeType errorCode)
{
  uint8 ProtocolIndex;
  unsigned char Dcm_Initialized.17_1;
  short unsigned int _2;
  <unnamed-unsigned:3> _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned int _7;
  long unsigned int _8;
  unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  unsigned char _12;
  unsigned char _24;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.17_1 = Dcm_Initialized;
  if (Dcm_Initialized.17_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 68, 5);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (pMsgContext_16(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 164669046]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 68, 7);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 384227774]:
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_16(D)->dcmRxPduId;
  _3 = pMsgContext_16(D)->msgAddInfo.requestOrigin;
  _4 = (unsigned char) _3;
  ProtocolIndex_18 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_2, _4);
  # DEBUG ProtocolIndex => ProtocolIndex_18
  # DEBUG BEGIN_STMT
  _5 = (int) ProtocolIndex_18;
  # DEBUG D#18 => &Dcm_HsmInfo[_5]
  # DEBUG curHsmInfo => D#18
  # DEBUG BEGIN_STMT
  _6 = errorCode_19(D) >> 5;
  _7 = (unsigned int) _6;
  _8 = Dcm_ValidNegativeResponseCodeMask[_7];
  _24 = errorCode_19(D) & 31;
  _9 = (unsigned int) _24;
  _10 = _8 >> _9;
  _11 = _10 & 1;
  if (_11 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 126795166]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 68, 6);

  <bb 8> [local count: 384227775]:
  # DEBUG BEGIN_STMT
  _12 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_5].negativeResponseCode;
  if (_12 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 192113887]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_5].negativeResponseCode = errorCode_19(D);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_ExternalProcessingDone (Dcm_ExternalProcessingDone, funcdef_no=2, decl_uid=5716, cgraph_uid=3, symbol_order=3)

Modification phase of node Dcm_ExternalProcessingDone/3
Dcm_ExternalProcessingDone (struct Dcm_MsgContextType * pMsgContext)
{
  uint8 instIdx;
  unsigned char Dcm_Initialized.18_1;
  short unsigned int _2;
  long unsigned int _3;
  int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.18_1 = Dcm_Initialized;
  if (Dcm_Initialized.18_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 67, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (pMsgContext_8(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 164669046]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 67, 7);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 384227774]:
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_8(D)->dcmRxPduId;
  instIdx_10 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_2, 1);
  # DEBUG instIdx => instIdx_10
  # DEBUG BEGIN_STMT
  _3 = pMsgContext_8(D)->resDataLen;
  _4 = (int) instIdx_10;
  _5 = _3 + 1;
  Dcm_HsmInfo[_4].TxBuffer.FilledLength = _5;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_DsdInternal_StartPagedProcessing (Dcm_DsdInternal_StartPagedProcessing, funcdef_no=3, decl_uid=6476, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_DsdInternal_StartPagedProcessing/4
Dcm_DsdInternal_StartPagedProcessing (const struct Dcm_MsgContextType * pMsgContext)
{
  uint8 instIdx;
  Dcm_MsgLenType curTxBufferLen;
  unsigned char Dcm_Initialized.19_1;
  short unsigned int _2;
  int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.19_1 = Dcm_Initialized;
  if (Dcm_Initialized.19_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 69, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (pMsgContext_6(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 164669046]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 69, 7);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 384227774]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_6(D)->dcmRxPduId;
  instIdx_8 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_2, 1);
  # DEBUG instIdx => instIdx_8
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = (int) instIdx_8;
  curTxBufferLen_10 = Dcm_HsmInfo[_3].TxBuffer.FilledLength;
  # DEBUG curTxBufferLen => curTxBufferLen_10
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_HsmInfo[_3].sentLength = curTxBufferLen_10;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_DsdInternal_ProcessPage (Dcm_DsdInternal_ProcessPage, funcdef_no=4, decl_uid=6478, cgraph_uid=5, symbol_order=5)

Modification phase of node Dcm_DsdInternal_ProcessPage/5
Dcm_DsdInternal_ProcessPage (Dcm_MsgLenType FilledPageLen)
{
  const uint8 instIdx;
  unsigned char Dcm_Initialized.20_1;
  short unsigned int _2;
  unsigned char _3;
  int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.20_1 = Dcm_Initialized;
  if (Dcm_Initialized.20_1 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 105, 5);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_Dsl_Supervisor_GetLatestExternalUDSProtocol ();
  _3 = (unsigned char) _2;
  instIdx_12 = _3 + 244;
  # DEBUG instIdx => instIdx_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = (int) instIdx_12;
  _5 = Dcm_HsmInfo[_4].sentLength;
  _6 = _5 + FilledPageLen_13(D);
  Dcm_HsmInfo[_4].sentLength = _6;
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _7 = Dcm_HsmInfo[_4].TxBuffer.FilledLength;
  _8 = _7 + FilledPageLen_13(D);
  Dcm_HsmInfo[_4].TxBuffer.FilledLength = _8;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_HsmEmitInst (&Dcm_HsmScDcm, instIdx_12, 10);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


