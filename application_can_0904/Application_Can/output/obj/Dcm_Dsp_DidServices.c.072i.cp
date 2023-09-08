
IPA constant propagation start:
Determining dynamic type for call: result_17 = Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute (ReadSignalContextPtr_11);
  Starting walk at: result_17 = Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute (ReadSignalContextPtr_11);
  instance pointer: ReadSignalContextPtr_11  Outer instance pointer: _1 offset: 192 (bits) vtbl reference: 
Determining dynamic type for call: _4 = Dcm_Dsp_DidServices_StoreDidId (StoreBufferCfg_8, _3);
  Starting walk at: _4 = Dcm_Dsp_DidServices_StoreDidId (StoreBufferCfg_8, _3);
  instance pointer: StoreBufferCfg_8  Outer instance pointer: StoreBufferCfg_8 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  Starting walk at: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  instance pointer: _2  Outer instance pointer: _1 offset: 128 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  Starting walk at: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  instance pointer: DidInfoPtr_7  Outer instance pointer: DidInfoPtr_7 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  Starting walk at: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  Starting walk at: Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  instance pointer: ReadStaticDidContextPtr_7  Outer instance pointer: _1 offset: 352 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  Starting walk at: Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  instance pointer: _2  Outer instance pointer: _1 offset: 256 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  Starting walk at: Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _4 = Dcm_Dsp_DidServices_IsDidAvailableInSecLevel (AccessInfo_10);
  Starting walk at: _4 = Dcm_Dsp_DidServices_IsDidAvailableInSecLevel (AccessInfo_10);
  instance pointer: AccessInfo_10  Outer instance pointer: AccessInfo_10 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: DidIsAvailable_15 = _5 (_6);
  Starting walk at: DidIsAvailable_15 = _5 (_6);
  instance pointer: _6  Outer instance pointer: context_9(D) offset: 96 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dcm_Dsp_DidServices_IsDidAvailableInSecLevel (AccessInfo_10);
Determining dynamic type for call: _4 = Dcm_Dsp_DidServices_IsDidAvailableInSession (AccessInfo_9);
  Starting walk at: _4 = Dcm_Dsp_DidServices_IsDidAvailableInSession (AccessInfo_9);
  instance pointer: AccessInfo_9  Outer instance pointer: AccessInfo_9 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 = Dcm_Dsp_DidServices_GetDidIndex (_2, _5);
  Starting walk at: _6 = Dcm_Dsp_DidServices_GetDidIndex (_2, _5);
  instance pointer: _5  Outer instance pointer: _1 offset: 176 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable (_11, _13);
  Starting walk at: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable (_11, _13);
  instance pointer: _13  Outer instance pointer: _1 offset: 200 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Dcm_Dsp_DidServices_GetDidIndex (_2, _5);
Determining dynamic type for call: Dcm_Dsp_DidServices_GetDidInfo_Init (_3, Did_16(D), 1, ProtocolIdx_4(D));
  Starting walk at: Dcm_Dsp_DidServices_GetDidInfo_Init (_3, Did_16(D), 1, ProtocolIdx_4(D));
  instance pointer: _3  Outer instance pointer: WriteDidContext_7(D) offset: 128 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_Dsp_Context_Init (_2, WriteDidContext_7(D), &Dcm_WriteDidStateConfig);
Determining dynamic type for call: Dcm_Dsp_DidServices_GetDidInfo_Init (_5, Did_15(D), DidOp_16(D), ProtocolIdx_8);
  Starting walk at: Dcm_Dsp_DidServices_GetDidInfo_Init (_5, Did_15(D), DidOp_16(D), ProtocolIdx_8);
  instance pointer: _5  Outer instance pointer: ReadDidContext_9(D) offset: 128 (bits) vtbl reference: 
  Function call may change dynamic type:Dcm_Dsp_Context_Init (_4, ReadDidContext_9(D), &Dcm_ReadDidStateConfig);
Determining dynamic type for call: DIDFound_9 = Dcm_Dsp_DidServices_GetDidIndex.part.0 (Did_12(D), ConfigIdx_13(D));
  Starting walk at: DIDFound_9 = Dcm_Dsp_DidServices_GetDidIndex.part.0 (Did_12(D), ConfigIdx_13(D));
  instance pointer: ConfigIdx_13(D)  Outer instance pointer: ConfigIdx_13(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsp_DidServices_GetAccessInfo.part.0/96:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidIndex.part.0/90:
  Jump functions of caller  Dcm_Dsp_DidSignals_Write_Init/83:
  Jump functions of caller  Dcm_Dsp_DidSignals_Write_Execute/82:
  Jump functions of caller  Dcm_Dsp_DidSignals_Write_Cancel/81:
  Jump functions of caller  Dcm_Dsp_DidSignals_Read_Execute/80:
  Jump functions of caller  Dcm_Dsp_DidSignals_Read_Init/79:
  Jump functions of caller  Dcm_Dsp_DidSignals_Read_Cancel/78:
  Jump functions of caller  Dcm_Dsp_PidServices_Execute/76:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperInit/75:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperExecute/74:
  Jump functions of caller  Dcm_Dsp_VinServices_UnlockService/73:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperCancel/72:
  Jump functions of caller  Dcm_Dsp_VinServices_LockService/71:
  Jump functions of caller  Dcm_Dsp_Context_Cancel/68:
  Jump functions of caller  Dcm_Dsp_Context_Execute/67:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/62:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/61:
  Jump functions of caller  Dcm_Dsp_Context_Init/60:
  Jump functions of caller  Dcm_Dsp_DidSignals_GetDidDataConfig/59:
  Jump functions of caller  Dcm_Dsp_DidSignals_GetDidSignalConfig/58:
  Jump functions of caller  Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition/56:
  Jump functions of caller  Dcm_Dsp_DidServices_StoreDidId/55:
  Jump functions of caller  Dcm_Dsp_DidServices_GetAccessInfo/53:
    callsite  Dcm_Dsp_DidServices_GetAccessInfo/53 -> Dcm_Dsp_DidServices_GetAccessInfo.part.0/96 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_IsDidAvailableInSecLevel/52:
  Jump functions of caller  Dcm_Dsp_DidServices_IsDidInValidRange/51:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49:
    callsite  Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49 -> Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc/48:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47:
    callsite  Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47 -> Dcm_Dsp_DidServices_StoreDidId/55 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42:
    callsite  Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42 -> Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_ReadStaticDid_Init/39:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock/38:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect/36:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead/35:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect/34:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_StaticRead/33:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_StaticSelect/32:
    callsite  Dcm_Dsp_DidServices_ReadDid_StaticSelect/32 -> Dcm_Dsp_DidServices_ReadStaticDid_Init/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30:
    callsite  Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30 -> Dcm_Dsp_DidServices_IsDidAvailableInSecLevel/52 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30 -> Dcm_Dsp_DidServices_GetAccessInfo/53 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt DidIsAvailable_15 = _5 (_6);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28:
    callsite  Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28 -> Dcm_Dsp_DidServices_IsDidAvailableInSession/25 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28 -> Dcm_Dsp_DidServices_GetAccessInfo/53 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_SelectType/27:
    callsite  Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 -> Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 -> Dcm_Dsp_DidServices_GetDidIndex/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 -> Dcm_Dsp_DidServices_IsDidInValidRange/51 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26:
  Jump functions of caller  Dcm_Dsp_DidServices_IsDidAvailableInSession/25:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_SigWrite/24:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_SigSelect/23:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_Cancel/21:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_Execute/20:
  Jump functions of caller  Dcm_Dsp_DidServices_WriteDid_Init/19:
    callsite  Dcm_Dsp_DidServices_WriteDid_Init/19 -> Dcm_Dsp_DidServices_GetDidInfo_Init/10 : 
       param 0: ANCESTOR: 0, offset 128
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_ReadSignal_GetResults/18:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17:
    callsite  Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 -> Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition/56 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_Cancel/16:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_Execute/15:
  Jump functions of caller  Dcm_Dsp_DidServices_ReadDid_Init/14:
    callsite  Dcm_Dsp_DidServices_ReadDid_Init/14 -> Dcm_Dsp_DidServices_GetDidInfo_Init/10 : 
       param 0: ANCESTOR: 0, offset 128
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidGeneralBuffer/13:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_Cancel/12:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_Execute/11:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidInfo_Init/10:
  Jump functions of caller  Dcm_Dsp_DidServices_GetMaximumDidLength/9:
  Jump functions of caller  Dcm_Dsp_DidServices_GetDidIndex/8:
    callsite  Dcm_Dsp_DidServices_GetDidIndex/8 -> Dcm_Dsp_DidServices_GetDidIndex.part.0/90 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_DidServices_Init/7:

 Propagating constants:

Not considering Dcm_Dsp_DidServices_GetAccessInfo for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDid_StaticRead for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDid_StaticSelect for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDid_GetDidInfo for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_CheckSession for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_SelectType for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_WriteDid_SigWrite for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_WriteDid_SigSelect for cloning; -fipa-cp-clone disabled.
Function Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22 is not versionable, reason: not a tree_versionable_function.
Not considering Dcm_Dsp_DidServices_WriteDid_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_WriteDid_Execute for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_WriteDid_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadSignal_GetResults for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDid_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDid_Execute for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_ReadDid_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidGeneralBuffer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_Execute for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidInfo_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetMaximumDidLength for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_GetDidIndex for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_DidServices_Init for cloning; -fipa-cp-clone disabled.

overall_size: 928, max_new_size: 11001
 - context independent values, size: 16, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_DidServices_GetAccessInfo.part.0/96:
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
  Node: Dcm_Dsp_DidServices_GetDidIndex.part.0/90:
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
  Node: Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition/56:
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
  Node: Dcm_Dsp_DidServices_StoreDidId/55:
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
  Node: Dcm_Dsp_DidServices_GetAccessInfo/53:
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
  Node: Dcm_Dsp_DidServices_IsDidAvailableInSecLevel/52:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_DidServices_IsDidInValidRange/51:
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
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc/48:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_ReadSingleStaticDidContextType * ~[0B, 0B]
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
  Node: Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadStaticDid_Init/39:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_ReadStaticDidContextType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         struct Dcm_DidInfoContextExtType * ~[0B, 0B]
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
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadDid_StaticRead/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadDid_StaticSelect/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_SelectType/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         Dcm_DidType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_Dsp_DidServices_IsDidAvailableInSession/25:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsp_DidServices_WriteDid_SigWrite/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_WriteDid_SigSelect/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_WriteDid_Cancel/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_WriteDid_Execute/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_WriteDid_Init/19:
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
  Node: Dcm_Dsp_DidServices_ReadSignal_GetResults/18:
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
  Node: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadDid_Cancel/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadDid_Execute/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_ReadDid_Init/14:
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
    param [6]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidGeneralBuffer/13:
  Node: Dcm_Dsp_DidServices_GetDidInfo_Cancel/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_Execute/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidInfo_Init/10:
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
  Node: Dcm_Dsp_DidServices_GetMaximumDidLength/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_DidServices_GetDidIndex/8:
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
  Node: Dcm_Dsp_DidServices_Init/7:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_DidServices_GetAccessInfo.part.0/96 (Dcm_Dsp_DidServices_GetAccessInfo.part.0) @06e50620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_DidInfo/84 (read)Dcm_DidWriteAccessInfo/86 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsp_DidServices_GetAccessInfo/53 (233860968 (estimated locally),0.22 per call) 
  Calls: 
Dcm_Dsp_DidServices_GetDidIndex.part.0/90 (Dcm_Dsp_DidServices_GetDidIndex.part.0) @06e50460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_DidConfig/57 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidIndex/8 (114863532 (estimated locally),0.25 per call) 
  Calls: 
Dcm_DidWriteAccessInfo/86 (Dcm_DidWriteAccessInfo) @06f3b678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetAccessInfo.part.0/96 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_DidReadAccessInfo/85 (Dcm_DidReadAccessInfo) @06f3b630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetAccessInfo/53 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_DidInfo/84 (Dcm_DidInfo) @06f3b5e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetAccessInfo.part.0/96 (read)Dcm_Dsp_DidServices_GetAccessInfo/53 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_DidSignals_Write_Init/83 (Dcm_Dsp_DidSignals_Write_Init) @06f308c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_SigSelect/23 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsp_DidSignals_Write_Execute/82 (Dcm_Dsp_DidSignals_Write_Execute) @06f30700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_SigWrite/24 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_Dsp_DidSignals_Write_Cancel/81 (Dcm_Dsp_DidSignals_Write_Cancel) @06f30620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_SigWrite/24 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_Dsp_DidSignals_Read_Execute/80 (Dcm_Dsp_DidSignals_Read_Execute) @06f301c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (958878293 (estimated locally),4.77 per call) 
  Calls: 
Dcm_Dsp_DidSignals_Read_Init/79 (Dcm_Dsp_DidSignals_Read_Init) @06f300e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (194076967 (estimated locally),0.97 per call) 
  Calls: 
Dcm_Dsp_DidSignals_Read_Cancel/78 (Dcm_Dsp_DidSignals_Read_Cancel) @06f30000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (24142894 (estimated locally),0.12 per call) 
  Calls: 
Dcm_ProtocolConfig/77 (Dcm_ProtocolConfig) @06f20e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44 (read)Dcm_Dsp_DidServices_WriteDid_Init/19 (read)Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc/48 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_PidServices_Execute/76 (Dcm_Dsp_PidServices_Execute) @06f1e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_VinServices_HelperInit/75 (Dcm_Dsp_VinServices_HelperInit) @06f1e2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_VinServices_HelperExecute/74 (Dcm_Dsp_VinServices_HelperExecute) @06f1e0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (565234877 (estimated locally),0.53 per call) Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (291181603 (estimated locally),0.27 per call) 
  Calls: 
Dcm_Dsp_VinServices_UnlockService/73 (Dcm_Dsp_VinServices_UnlockService) @06f1e000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (382515436 (estimated locally),0.36 per call) Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (291181603 (estimated locally),0.27 per call) Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsp_VinServices_HelperCancel/72 (Dcm_Dsp_VinServices_HelperCancel) @06ec1ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsp_VinServices_LockService/71 (Dcm_Dsp_VinServices_LockService) @06ec1d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock/38 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_MainConnectionConfig/70 (Dcm_MainConnectionConfig) @06ec05e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_ReadDid_Init/14 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_RxPduIdConfig/69 (Dcm_RxPduIdConfig) @06ec05a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_ReadDid_Init/14 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_Context_Cancel/68 (Dcm_Dsp_Context_Cancel) @06ec1000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_Cancel/21 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadDid_Cancel/16 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31 (365072220 (estimated locally),0.34 per call) Dcm_Dsp_DidServices_GetDidInfo_Cancel/12 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43 (365072220 (estimated locally),0.34 per call) Dcm_Dsp_DidServices_ReadDid_StaticRead/33 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_Dsp_Context_Execute/67 (Dcm_Dsp_Context_Execute) @06ea9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_Execute/20 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadDid_Execute/15 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_DidServices_GetDidInfo_Execute/11 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_DidServices_ReadDid_StaticRead/33 (708669605 (estimated locally),0.66 per call) 
  Calls: 
Dcm_DspVehInfo/66 (Dcm_DspVehInfo) @06ec0090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_DspVehInfoUsed/65 (Dcm_DspVehInfoUsed) @06ec0048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_DspPidConfig/64 (Dcm_DspPidConfig) @06ec0000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (read)Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_DspPidUsed/63 (Dcm_DspPidUsed) @06eb7f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/62 (Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession) @06ea9540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_IsDidAvailableInSession/25 (324669915 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/61 (Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel) @06ea90e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_IsDidAvailableInSecLevel/52 (229727064 (estimated locally),0.23 per call) 
  Calls: 
Dcm_Dsp_Context_Init/60 (Dcm_Dsp_Context_Init) @06e9ae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_Init/19 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadDid_Init/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_GetDidInfo_Init/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadStaticDid_Init/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidSignals_GetDidDataConfig/59 (Dcm_Dsp_DidSignals_GetDidDataConfig) @06e9ac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (125620728 (estimated locally),0.63 per call) Dcm_Dsp_DidServices_GetMaximumDidLength/9 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29 (955630223 (estimated locally),4.05 per call) 
  Calls: 
Dcm_Dsp_DidSignals_GetDidSignalConfig/58 (Dcm_Dsp_DidSignals_GetDidSignalConfig) @06e9ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (194076967 (estimated locally),0.97 per call) Dcm_Dsp_DidServices_GetMaximumDidLength/9 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_DidServices_WriteDid_SigSelect/23 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29 (955630223 (estimated locally),4.05 per call) 
  Calls: 
Dcm_DidConfig/57 (Dcm_DidConfig) @06e4fdc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_DidServices_GetDidIndex/8 (read)Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 (read)Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29 (read)Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29 (read)Dcm_Dsp_DidServices_WriteDid_SigSelect/23 (read)Dcm_Dsp_DidServices_GetDidIndex/8 (read)Dcm_Dsp_DidServices_GetMaximumDidLength/9 (read)Dcm_Dsp_DidServices_GetMaximumDidLength/9 (read)Dcm_Dsp_DidServices_WriteDid_SigSelect/23 (read)Dcm_Dsp_DidServices_GetDidIndex.part.0/90 (read)Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (read)Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition/56 (Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition) @06e9a7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (125620728 (estimated locally),0.63 per call) 
  Calls: 
Dcm_Dsp_DidServices_StoreDidId/55 (Dcm_Dsp_DidServices_StoreDidId) @06e9a620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsp_DidServices_GetAccessInfo/53 (Dcm_Dsp_DidServices_GetAccessInfo) @06e9a2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DidInfo/84 (read)Dcm_DidReadAccessInfo/85 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_DidServices_GetAccessInfo.part.0/96 (233860968 (estimated locally),0.22 per call) 
Dcm_Dsp_DidServices_IsDidAvailableInSecLevel/52 (Dcm_Dsp_DidServices_IsDidAvailableInSecLevel) @06e9a0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:994489456 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/61 (229727064 (estimated locally),0.23 per call) 
Dcm_Dsp_DidServices_IsDidInValidRange/51 (Dcm_Dsp_DidServices_IsDidInValidRange) @06e50ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49 (Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData) @06e50b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc/48 (Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc) @06e509a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dcm_ProtocolConfig/77 (read)
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47 (Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId) @06e507e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_StoreDidId/55 (217325345 (estimated locally),0.20 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44 (Dcm_Dsp_DidServices_ReadSingleStaticDid_Init) @06e502a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ReadSingleStaticDidStateConfig/3 (addr)Dcm_ProtocolConfig/77 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_Context_Init/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43 (Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead) @06e500e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadStaticDidStateConfig/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Execute/67 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_Context_Cancel/68 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42 (Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect) @06e47e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadStaticDidStateConfig/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadStaticDid_Init/39 (Dcm_Dsp_DidServices_ReadStaticDid_Init) @06e478c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_ReadStaticDidStateConfig/2 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_ReadDid_StaticSelect/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_Context_Init/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock/38 (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock) @06e47700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_VinServices_LockService/71 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead) @06e47540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_VinServices_UnlockService/73 (382515436 (estimated locally),0.36 per call) Dcm_Dsp_VinServices_UnlockService/73 (291181603 (estimated locally),0.27 per call) Dcm_Dsp_VinServices_HelperExecute/74 (565234877 (estimated locally),0.53 per call) Dcm_Dsp_VinServices_HelperExecute/74 (291181603 (estimated locally),0.27 per call) Dcm_Dsp_VinServices_UnlockService/73 (217325345 (estimated locally),0.20 per call) Dcm_Dsp_VinServices_HelperCancel/72 (217325345 (estimated locally),0.20 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect/36 (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect) @06e47380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_VinServices_HelperInit/75 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead/35 (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead) @06e471c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_PidServices_Execute/76 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect/34 (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect) @06e47000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadSingleStaticDidStateConfig/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_DidServices_ReadDid_StaticRead/33 (Dcm_Dsp_DidServices_ReadDid_StaticRead) @06e3ce00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadDidStateConfig/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Execute/67 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_Context_Cancel/68 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_DidServices_ReadDid_StaticSelect/32 (Dcm_Dsp_DidServices_ReadDid_StaticSelect) @06e3cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadDidStateConfig/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_ReadStaticDid_Init/39 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31 (Dcm_Dsp_DidServices_ReadDid_GetDidInfo) @06e3c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_ReadDidStateConfig/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_Context_Execute/67 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_Context_Cancel/68 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30 (Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity) @06e3c700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_GetDidInfoStateConfig/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_IsDidAvailableInSecLevel/52 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_GetAccessInfo/53 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(255550554 (estimated locally),0.24 per call) 
Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29 (Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen) @06e3c540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dcm_DidConfig/57 (read)Dcm_DidConfig/57 (read)
  Referring: Dcm_GetDidInfoStateConfig/0 (addr)
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidSignals_GetDidDataConfig/59 (955630223 (estimated locally),4.05 per call) Dcm_Dsp_DidSignals_GetDidSignalConfig/58 (955630223 (estimated locally),4.05 per call) 
Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28 (Dcm_Dsp_DidServices_GetDidInfo_CheckSession) @06e3c2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_GetDidInfoStateConfig/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_IsDidAvailableInSession/25 (574129754 (estimated locally),0.53 per call) Dcm_Dsp_DidServices_GetAccessInfo/53 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 (Dcm_Dsp_DidServices_GetDidInfo_SelectType) @06e3c0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dcm_DidConfig/57 (read)
  Referring: Dcm_GetDidInfoStateConfig/0 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (29232621 (estimated locally),0.03 per call) Dcm_Dsp_DidServices_GetDidIndex/8 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_DidServices_IsDidInValidRange/51 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable/26 (Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable) @06e2dee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_DspPidUsed/63 (read)Dcm_DspPidConfig/64 (read)Dcm_DspPidConfig/64 (read)Dcm_DspVehInfoUsed/65 (read)Dcm_DspVehInfo/66 (read)
  Referring: 
  Availability: local
  Function flags: count:794501303 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 (29232621 (estimated locally),0.03 per call) 
  Calls: 
Dcm_Dsp_DidServices_IsDidAvailableInSession/25 (Dcm_Dsp_DidServices_IsDidAvailableInSession) @06e2dc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:324669915 (estimated locally) body local optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28 (574129754 (estimated locally),0.53 per call) 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetCurrentSession/62 (324669915 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_WriteDid_SigWrite/24 (Dcm_Dsp_DidServices_WriteDid_SigWrite) @06e2da80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_WriteDidStateConfig/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidSignals_Write_Execute/82 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_DidSignals_Write_Cancel/81 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_DidServices_WriteDid_SigSelect/23 (Dcm_Dsp_DidServices_WriteDid_SigSelect) @06e2d8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Dcm_DidConfig/57 (read)Dcm_DidConfig/57 (read)
  Referring: Dcm_WriteDidStateConfig/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidSignals_Write_Init/83 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_DidSignals_GetDidSignalConfig/58 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22 (Dcm_Dsp_DidServices_WriteDid_GetDidInfo) @06e2d700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Dcm_WriteDidStateConfig/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_WriteDid_Cancel/21 (Dcm_Dsp_DidServices_WriteDid_Cancel) @06e2d460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Cancel/68 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_WriteDid_Execute/20 (Dcm_Dsp_DidServices_WriteDid_Execute) @06e2d2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Execute/67 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_WriteDid_Init/19 (Dcm_Dsp_DidServices_WriteDid_Init) @06e2d0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/77 (read)Dcm_WriteDidStateConfig/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_GetDidInfo_Init/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_Context_Init/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadSignal_GetResults/18 (Dcm_Dsp_DidServices_ReadSignal_GetResults) @06e22ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17 (Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute) @06e22d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DidConfig/57 (read)Dcm_DidConfig/57 (read)
  Referring: 
  Availability: available
  Function flags: count:200856020 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_DidSignals_Read_Execute/80 (958878293 (estimated locally),4.77 per call) Dcm_Dsp_DidSignals_Read_Init/79 (194076967 (estimated locally),0.97 per call) Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition/56 (125620728 (estimated locally),0.63 per call) Dcm_Dsp_DidSignals_GetDidDataConfig/59 (125620728 (estimated locally),0.63 per call) Dcm_Dsp_DidSignals_GetDidSignalConfig/58 (194076967 (estimated locally),0.97 per call) Dcm_Dsp_DidSignals_Read_Cancel/78 (24142894 (estimated locally),0.12 per call) 
Dcm_Dsp_DidServices_ReadDid_Cancel/16 (Dcm_Dsp_DidServices_ReadDid_Cancel) @06e22b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Cancel/68 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadDid_Execute/15 (Dcm_Dsp_DidServices_ReadDid_Execute) @06e229a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Execute/67 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_ReadDid_Init/14 (Dcm_Dsp_DidServices_ReadDid_Init) @06e227e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/69 (read)Dcm_MainConnectionConfig/70 (read)Dcm_ReadDidStateConfig/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidServices_GetDidInfo_Init/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_Context_Init/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_GetDidGeneralBuffer/13 (Dcm_Dsp_DidServices_GetDidGeneralBuffer) @06e22620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DIDGeneralBuffer/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_DidServices_GetDidInfo_Cancel/12 (Dcm_Dsp_DidServices_GetDidInfo_Cancel) @06e22460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Cancel/68 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_GetDidInfo_Execute/11 (Dcm_Dsp_DidServices_GetDidInfo_Execute) @06e222a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Execute/67 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_GetDidInfo_Init/10 (Dcm_Dsp_DidServices_GetDidInfo_Init) @06e220e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_GetDidInfoStateConfig/0 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_DidServices_WriteDid_Init/19 (1073741824 (estimated locally),1.00 per call) Dcm_Dsp_DidServices_ReadDid_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsp_Context_Init/60 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_DidServices_GetMaximumDidLength/9 (Dcm_Dsp_DidServices_GetMaximumDidLength) @06df7e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DidConfig/57 (read)Dcm_DidConfig/57 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_DidSignals_GetDidDataConfig/59 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_DidSignals_GetDidSignalConfig/58 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsp_DidServices_GetDidIndex/8 (Dcm_Dsp_DidServices_GetDidIndex) @06df7b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DidConfig/57 (read)Dcm_DidConfig/57 (read)
  Referring: 
  Availability: available
  Function flags: count:459454128 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 (354334802 (estimated locally),0.33 per call) 
  Calls: Dcm_Dsp_DidServices_GetDidIndex.part.0/90 (114863532 (estimated locally),0.25 per call) 
Dcm_Dsp_DidServices_Init/7 (Dcm_Dsp_DidServices_Init) @06df79a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_DIDGeneralBuffer/6 (Dcm_DIDGeneralBuffer) @06de7750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_DidServices_GetDidGeneralBuffer/13 (addr)
  Availability: available
  Varpool flags:
Dcm_PeriodicRequest/5 (Dcm_PeriodicRequest) @06de7708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
Dcm_WriteDidStateConfig/4 (Dcm_WriteDidStateConfig) @06de76c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22 (addr)Dcm_Dsp_DidServices_WriteDid_SigSelect/23 (addr)Dcm_Dsp_DidServices_WriteDid_SigWrite/24 (addr)
  Referring: Dcm_Dsp_DidServices_WriteDid_Init/19 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_ReadSingleStaticDidStateConfig/3 (Dcm_ReadSingleStaticDidStateConfig) @06de7678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc/48 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect/34 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead/35 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect/36 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37 (addr)Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock/38 (addr)
  Referring: Dcm_Dsp_DidServices_ReadSingleStaticDid_Init/44 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_ReadStaticDidStateConfig/2 (Dcm_ReadStaticDidStateConfig) @06de75e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42 (addr)Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43 (addr)
  Referring: Dcm_Dsp_DidServices_ReadStaticDid_Init/39 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_ReadDidStateConfig/1 (Dcm_ReadDidStateConfig) @06de75a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31 (addr)Dcm_Dsp_DidServices_ReadDid_StaticSelect/32 (addr)Dcm_Dsp_DidServices_ReadDid_StaticRead/33 (addr)
  Referring: Dcm_Dsp_DidServices_ReadDid_Init/14 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_GetDidInfoStateConfig/0 (Dcm_GetDidInfoStateConfig) @06de7558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsp_DidServices_GetDidInfo_SelectType/27 (addr)Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28 (addr)Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29 (addr)Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30 (addr)
  Referring: Dcm_Dsp_DidServices_GetDidInfo_Init/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect, funcdef_no=27, decl_uid=7365, cgraph_uid=28, symbol_order=34)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect/34
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidSelect (struct Dcm_Dsp_ContextBaseType * context)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  context_2(D)->next_state = 4;
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc (Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc, funcdef_no=41, decl_uid=7361, cgraph_uid=42, symbol_order=48)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc/48
Dcm_Dsp_DidServices_ReadSingleStaticDid_SelectDidDataSrc (struct Dcm_Dsp_ContextBaseType * context)
{
  struct Dcm_DspMsgBufferCfgType * const BufferCfgPtr;
  const struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  void * _1;
  uint8 * _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  unsigned char _20;
  int _21;
  unsigned char _22;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = context_8(D)->SpecialPtr;
  DidInfoPtr_9 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_9
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.ReadSignalContext
  # DEBUG ReadSignalContextPtr => D#2
  # DEBUG BEGIN_STMT
  BufferCfgPtr_10 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.BufferCfgPtr;
  # DEBUG BufferCfgPtr => BufferCfgPtr_10
  # DEBUG BEGIN_STMT
  _2 = BufferCfgPtr_10->BufferPtr;
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].outputBuffer = _2;
  # DEBUG BEGIN_STMT
  _3 = BufferCfgPtr_10->Size;
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].BufferLimit = _3;
  # DEBUG BEGIN_STMT
  _4 = BufferCfgPtr_10->Occupied;
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].AmountOfBufferOccupied = _4;
  # DEBUG BEGIN_STMT
  _5 = DidInfoPtr_9->ConfigType;
  switch (_5) <default: <L4> [20.00%], case 1: <L0> [20.00%], case 5: <L1> [20.00%], case 6: <L3> [20.00%], case 7: <L2> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 2;
  # DEBUG BEGIN_STMT
  _20 = MEM[(unsigned char *)DidInfoPtr_9 + 8B];
  # DEBUG D#1 => DidInfoPtr_9
  # DEBUG pReadSignalContext => D#2
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_DidSetStatus
  # DEBUG DidInfoPtr => D#1
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].SignalInd = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].NrcConditions = 0;
  # DEBUG BEGIN_STMT
  _21 = (int) _20;
  _22 = Dcm_ProtocolConfig[_21].EndiannessConversion;
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].EndiannessConversion = _22;
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].NewSignal = 1;
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 3;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 5;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 9;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 214748364]:
<L4>:
  # DEBUG BEGIN_STMT
  context_8(D)->nrc = 16;
  # DEBUG BEGIN_STMT
  context_8(D)->result = 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
  # DEBUG pReadSignalContext => NULL
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId (Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId, funcdef_no=40, decl_uid=7359, cgraph_uid=41, symbol_order=47)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId/47
Dcm_Dsp_DidServices_ReadSingleStaticDid_StoreDidId (struct Dcm_Dsp_ContextBaseType * context)
{
  struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  struct Dcm_DspMsgBufferCfgType * const StoreBufferCfg;
  void * _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = context_7(D)->SpecialPtr;
  StoreBufferCfg_8 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.BufferCfgPtr;
  # DEBUG StoreBufferCfg => StoreBufferCfg_8
  # DEBUG BEGIN_STMT
  DidInfoPtr_9 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_9
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.WriteDidIds;
  if (_2 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _3 = DidInfoPtr_9->Did;
  _4 = Dcm_Dsp_DidServices_StoreDidId (StoreBufferCfg_8, _3);
  if (_4 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  context_7(D)->next_state = 1;
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  context_7(D)->nrc = 20;
  # DEBUG BEGIN_STMT
  context_7(D)->result = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  context_7(D)->next_state = 1;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen (Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen, funcdef_no=22, decl_uid=7345, cgraph_uid=23, symbol_order=29)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen/29
Dcm_Dsp_DidServices_GetDidInfo_DidCheckLen (struct Dcm_Dsp_ContextBaseType * context)
{
  const struct Dcm_DidSignalType * CurrentSignalCfg;
  struct Dcm_DidDataType dataCfg;
  uint16 MaxSignalEndingPositionWithoutVarLen;
  uint16 MaxSignalEndingPosition;
  uint16 CurrentSignalEndingPosition;
  const uint16 NumSignals;
  uint16_least SignalsIndex;
  void * _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  unsigned char _11;
  short unsigned int _12;
  int _13;
  short unsigned int _14;
  int _15;
  int _16;
  unsigned int _17;
  unsigned int _18;
  unsigned int _19;
  long unsigned int _20;
  unsigned char _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  _1 = context_34(D)->SpecialPtr;
  # DEBUG D#3 => &MEM[(struct Dcm_DidInfoContextType *)_1].DidInfoContext
  # DEBUG DidInfo => D#3
  # DEBUG BEGIN_STMT
  # DEBUG DidLengthCheckResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigIdx;
  _3 = (int) _2;
  NumSignals_37 = Dcm_DidConfig[_3].NumSignals;
  # DEBUG NumSignals => NumSignals_37
  # DEBUG BEGIN_STMT
  if (NumSignals_37 != 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 19> [local count: 118111600]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigIdx;
  _5 = (int) _4;
  _6 = Dcm_DidConfig[_5].DidSignalsIdx;
  _7 = (short unsigned int) _6;
  _8 = (short unsigned int) SignalsIndex_27;
  _9 = _7 + _8;
  CurrentSignalCfg_40 = Dcm_Dsp_DidSignals_GetDidSignalConfig (_9);
  # DEBUG CurrentSignalCfg => CurrentSignalCfg_40
  # DEBUG BEGIN_STMT
  _10 = CurrentSignalCfg_40->DspDataIndex;
  Dcm_Dsp_DidSignals_GetDidDataConfig (&dataCfg, _10);
  # DEBUG BEGIN_STMT
  _11 = dataCfg.FixedLength;
  if (_11 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG MaxSignalEndingPositionWithoutVarLen => MaxSignalEndingPosition_28

  <bb 5> [local count: 955630223]:
  # MaxSignalEndingPositionWithoutVarLen_29 = PHI <MaxSignalEndingPositionWithoutVarLen_30(3), MaxSignalEndingPosition_28(4)>
  # DEBUG MaxSignalEndingPositionWithoutVarLen => MaxSignalEndingPositionWithoutVarLen_29
  # DEBUG BEGIN_STMT
  _12 = CurrentSignalCfg_40->DataPos;
  _13 = (int) _12;
  _14 = dataCfg.DataLength;
  _15 = (int) _14;
  _16 = _13 + _15;
  _17 = (unsigned int) _16;
  _18 = _17 + 7;
  _19 = _18 >> 3;
  CurrentSignalEndingPosition_42 = (uint16) _19;
  # DEBUG CurrentSignalEndingPosition => CurrentSignalEndingPosition_42
  # DEBUG BEGIN_STMT
  MaxSignalEndingPosition_36 = MAX_EXPR <CurrentSignalEndingPosition_42, MaxSignalEndingPosition_28>;
  # DEBUG MaxSignalEndingPosition => MaxSignalEndingPosition_36
  # DEBUG BEGIN_STMT
  SignalsIndex_44 = SignalsIndex_27 + 1;
  # DEBUG SignalsIndex => SignalsIndex_44

  <bb 6> [local count: 1073741824]:
  # SignalsIndex_27 = PHI <SignalsIndex_44(5), 0(19)>
  # MaxSignalEndingPosition_28 = PHI <MaxSignalEndingPosition_36(5), 0(19)>
  # MaxSignalEndingPositionWithoutVarLen_30 = PHI <MaxSignalEndingPositionWithoutVarLen_29(5), 0(19)>
  # DEBUG MaxSignalEndingPositionWithoutVarLen => MaxSignalEndingPositionWithoutVarLen_30
  # DEBUG MaxSignalEndingPosition => MaxSignalEndingPosition_28
  # DEBUG SignalsIndex => SignalsIndex_27
  # DEBUG BEGIN_STMT
  _20 = (long unsigned int) NumSignals_37;
  if (_20 > SignalsIndex_27)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # MaxSignalEndingPosition_35 = PHI <MaxSignalEndingPosition_28(6)>
  # MaxSignalEndingPositionWithoutVarLen_49 = PHI <MaxSignalEndingPositionWithoutVarLen_30(6)>
  # DEBUG BEGIN_STMT
  _21 = dataCfg.FixedLength;
  if (_21 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 8> [local count: 40157944]:
  # DEBUG BEGIN_STMT
  _22 = (long unsigned int) MaxSignalEndingPosition_35;
  _23 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].ReqLen;
  if (_22 == _23)
    goto <bb 15>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 26504243]:
  # DEBUG DidLengthCheckResult => 1
  dataCfg ={v} {CLOBBER};
  # DEBUG DidLengthCheckResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 10> [local count: 77953656]:
  # DEBUG BEGIN_STMT
  _24 = (long unsigned int) MaxSignalEndingPosition_35;
  _25 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].ReqLen;
  if (_24 >= _25)
    goto <bb 11>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 11> [local count: 38976828]:
  _26 = (long unsigned int) MaxSignalEndingPositionWithoutVarLen_49;
  if (_25 >= _26)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 19488414]:
  # DEBUG BEGIN_STMT
  # DEBUG DidLengthCheckResult => 0
  dataCfg ={v} {CLOBBER};
  # DEBUG DidLengthCheckResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 19488414]:
  # DEBUG DidLengthCheckResult => 1
  dataCfg ={v} {CLOBBER};
  # DEBUG DidLengthCheckResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 38976828]:
  # DEBUG DidLengthCheckResult => 1
  dataCfg ={v} {CLOBBER};
  # DEBUG DidLengthCheckResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 15> [local count: 13653701]:
  # DEBUG BEGIN_STMT
  # DEBUG DidLengthCheckResult => 0
  dataCfg ={v} {CLOBBER};
  # DEBUG DidLengthCheckResult => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 33142115]:
  # DEBUG BEGIN_STMT
  context_34(D)->next_state = 3;
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 203081086]:
  # DEBUG DidLengthCheckResult => NULL
  # DEBUG BEGIN_STMT
  context_34(D)->nrc = 19;
  # DEBUG BEGIN_STMT
  context_34(D)->result = 1;

  <bb 18> [local count: 236223201]:
  return;

}



;; Function Dcm_Dsp_DidServices_ReadDid_StaticSelect (Dcm_Dsp_DidServices_ReadDid_StaticSelect, funcdef_no=25, decl_uid=7351, cgraph_uid=26, symbol_order=32)

Modification phase of node Dcm_Dsp_DidServices_ReadDid_StaticSelect/32
Dcm_Dsp_DidServices_ReadDid_StaticSelect (struct Dcm_Dsp_ContextBaseType * context)
{
  struct Dcm_ReadStaticDidContextType * ReadStaticDidContextPtr;
  void * _1;
  struct Dcm_DidInfoContextExtType * _2;
  unsigned char _3;
  struct Dcm_DspMsgBufferCfgType * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_6(D)->SpecialPtr;
  ReadStaticDidContextPtr_7 = &MEM[(struct Dcm_ReadDidContextType *)_1].ReadDidContext.ReadStaticDidContext;
  # DEBUG ReadStaticDidContextPtr => ReadStaticDidContextPtr_7
  # DEBUG BEGIN_STMT
  _2 = &MEM[(struct Dcm_ReadDidContextType *)_1].ReadDidContext.DidInfoContext.DidInfoContext;
  _3 = MEM[(struct Dcm_ReadDidContextType *)_1].ReadDidContext.WriteDidIds;
  _4 = MEM[(struct Dcm_ReadDidContextType *)_1].ReadDidContext.DidBufferCfgPtr;
  Dcm_Dsp_DidServices_ReadStaticDid_Init (ReadStaticDidContextPtr_7, _2, _3, _4);
  # DEBUG BEGIN_STMT
  context_6(D)->next_state = 2;
  return;

}



;; Function Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect (Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect, funcdef_no=35, decl_uid=7355, cgraph_uid=36, symbol_order=42)

Modification phase of node Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect/42
Dcm_Dsp_DidServices_ReadStaticDid_PrimarySelect (struct Dcm_Dsp_ContextBaseType * context)
{
  struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  void * _1;
  struct Dcm_ReadSingleStaticDidContextType * _2;
  unsigned char _3;
  struct Dcm_DspMsgBufferCfgType * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_6(D)->SpecialPtr;
  DidInfoPtr_7 = MEM[(struct Dcm_ReadStaticDidContextType *)_1].ReadStaticDidContext.DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_7
  # DEBUG BEGIN_STMT
  _2 = &MEM[(struct Dcm_ReadStaticDidContextType *)_1].ReadStaticDidContext.ReadSingleStaticDidContext;
  _3 = MEM[(struct Dcm_ReadStaticDidContextType *)_1].ReadStaticDidContext.WriteDidIds;
  _4 = MEM[(struct Dcm_ReadStaticDidContextType *)_1].ReadStaticDidContext.BufferCfgPtr;
  Dcm_Dsp_DidServices_ReadSingleStaticDid_Init (_2, DidInfoPtr_7, _3, _4);
  # DEBUG BEGIN_STMT
  context_6(D)->next_state = 1;
  return;

}



;; Function Dcm_Dsp_DidServices_ReadDid_StaticRead (Dcm_Dsp_DidServices_ReadDid_StaticRead, funcdef_no=26, decl_uid=7353, cgraph_uid=27, symbol_order=33)

Modification phase of node Dcm_Dsp_DidServices_ReadDid_StaticRead/33
Dcm_Dsp_DidServices_ReadDid_StaticRead (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  void * _1;
  unsigned char _2;
  unsigned char _3;
  struct Dcm_Dsp_ContextBaseType * _10;
  unsigned char _11;
  struct Dcm_Dsp_ContextBaseType * _12;
  unsigned char _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_7(D)->SpecialPtr;
  # DEBUG D#5 => &MEM[(struct Dcm_ReadDidContextType *)_1].ReadDidContext.ReadStaticDidContext
  # DEBUG ReadStaticDidContextPtr => D#5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = context_7(D)->opstatus;
  if (_2 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadStaticDidContextPtr => D#5
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_ReadStaticDid_Cancel
  # DEBUG BEGIN_STMT
  _10 = &MEM[(struct Dcm_ReadStaticDidContextType *)_1 + 44B].BaseContext;
  _11 = Dcm_Dsp_Context_Cancel (_10);
  # DEBUG ReadStaticDidContextPtr => NULL
  # DEBUG result => _11
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadStaticDidContextPtr => D#5
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_ReadStaticDid_Execute
  # DEBUG BEGIN_STMT
  _12 = &MEM[(struct Dcm_ReadStaticDidContextType *)_1 + 44B].BaseContext;
  _13 = Dcm_Dsp_Context_Execute (_12);
  # DEBUG ReadStaticDidContextPtr => NULL
  # DEBUG result => _13

  <bb 5> [local count: 1073741824]:
  # result_4 = PHI <_11(3), _13(4)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  context_7(D)->result = result_4;
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_ReadStaticDidContextType *)_1 + 44B].BaseContext.nrc;
  context_7(D)->nrc = _3;
  return;

}



;; Function Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead (Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead, funcdef_no=36, decl_uid=7357, cgraph_uid=37, symbol_order=43)

Modification phase of node Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead/43
Dcm_Dsp_DidServices_ReadStaticDid_PrimaryRead (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  void * _1;
  unsigned char _2;
  unsigned char _3;
  struct Dcm_Dsp_ContextBaseType * _10;
  unsigned char _11;
  struct Dcm_Dsp_ContextBaseType * _12;
  unsigned char _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_7(D)->SpecialPtr;
  # DEBUG D#6 => &MEM[(struct Dcm_ReadStaticDidContextType *)_1].ReadStaticDidContext.ReadSingleStaticDidContext
  # DEBUG ReadSingleStaticDidContextPtr => D#6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = context_7(D)->opstatus;
  if (_2 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadSingleStaticDidContextPtr => D#6
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_ReadSingleStaticDid_Cancel
  # DEBUG BEGIN_STMT
  _10 = &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1 + 16B].BaseContext;
  _11 = Dcm_Dsp_Context_Cancel (_10);
  # DEBUG ReadSingleStaticDidContextPtr => NULL
  # DEBUG result => _11
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG ReadSingleStaticDidContextPtr => D#6
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_ReadSingleStaticDid_Execute
  # DEBUG BEGIN_STMT
  _12 = &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1 + 16B].BaseContext;
  _13 = Dcm_Dsp_Context_Execute (_12);
  # DEBUG ReadSingleStaticDidContextPtr => NULL
  # DEBUG result => _13

  <bb 5> [local count: 1073741824]:
  # result_4 = PHI <_11(3), _13(4)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  context_7(D)->result = result_4;
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1 + 16B].BaseContext.nrc;
  context_7(D)->nrc = _3;
  return;

}



;; Function Dcm_Dsp_DidServices_ReadDid_GetDidInfo (Dcm_Dsp_DidServices_ReadDid_GetDidInfo, funcdef_no=24, decl_uid=7349, cgraph_uid=25, symbol_order=31)

Modification phase of node Dcm_Dsp_DidServices_ReadDid_GetDidInfo/31
Dcm_Dsp_DidServices_ReadDid_GetDidInfo (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType stateOfCtxExe;
  Std_ReturnType stateOfCtxCancel;
  Std_ReturnType result;
  void * _1;
  unsigned char _2;
  unsigned char _3;
  struct Dcm_Dsp_ContextBaseType * _12;
  struct Dcm_Dsp_ContextBaseType * _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_8(D)->SpecialPtr;
  # DEBUG D#15 => &MEM[(struct Dcm_ReadDidContextType *)_1].ReadDidContext.DidInfoContext
  # DEBUG DidInfoContextPtr => D#15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = context_8(D)->opstatus;
  if (_2 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG DidInfoContext => D#15
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_GetDidInfo_Cancel
  # DEBUG BEGIN_STMT
  # DEBUG stateOfCtxCancel => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _12 = &MEM[(struct Dcm_DidInfoContextType *)_1 + 16B].BaseContext;
  stateOfCtxCancel_13 = Dcm_Dsp_Context_Cancel (_12);
  # DEBUG stateOfCtxCancel => stateOfCtxCancel_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DidInfoContext => NULL
  # DEBUG stateOfCtxCancel => NULL
  # DEBUG result => stateOfCtxCancel_13
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG DidInfoContext => D#15
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_GetDidInfo_Execute
  # DEBUG BEGIN_STMT
  # DEBUG stateOfCtxExe => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = &MEM[(struct Dcm_DidInfoContextType *)_1 + 16B].BaseContext;
  stateOfCtxExe_15 = Dcm_Dsp_Context_Execute (_14);
  # DEBUG stateOfCtxExe => stateOfCtxExe_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DidInfoContext => NULL
  # DEBUG stateOfCtxExe => NULL
  # DEBUG result => stateOfCtxExe_15

  <bb 5> [local count: 1073741824]:
  # result_4 = PHI <stateOfCtxCancel_13(3), stateOfCtxExe_15(4)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  if (result_4 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 1;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  context_8(D)->result = result_4;
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct Dcm_DidInfoContextType *)_1 + 16B].BaseContext.nrc;
  context_8(D)->nrc = _3;

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_WriteDid_GetDidInfo (Dcm_Dsp_DidServices_WriteDid_GetDidInfo, funcdef_no=54, decl_uid=7375, cgraph_uid=16, symbol_order=22)

Modification phase of node Dcm_Dsp_DidServices_WriteDid_GetDidInfo/22
Dcm_Dsp_DidServices_WriteDid_GetDidInfo (struct Dcm_Dsp_ContextBaseType * context)
{
  <bb 2> [local count: 1073741824]:
  Dcm_Dsp_DidServices_ReadDid_GetDidInfo (context_2(D)); [tail call]
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock, funcdef_no=31, decl_uid=7373, cgraph_uid=32, symbol_order=38)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock/38
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect_TryLock (struct Dcm_Dsp_ContextBaseType * context)
{
  const Std_ReturnType VinLockStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  VinLockStatus_4 = Dcm_Dsp_VinServices_LockService ();
  # DEBUG VinLockStatus => VinLockStatus_4
  # DEBUG BEGIN_STMT
  if (VinLockStatus_4 == 31)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  context_5(D)->result = 10;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  context_5(D)->next_state = 7;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead, funcdef_no=30, decl_uid=7371, cgraph_uid=31, symbol_order=37)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead/37
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoRead (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  const uint8 InfoId;
  struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  struct Dcm_DspMsgBufferCfgType * const BufferCfgPtr;
  void * _1;
  short unsigned int _2;
  unsigned char _3;
  struct Dcm_DspReqVehInfoContextType * _4;
  struct Dcm_DspReqVehInfoContextType * _5;
  struct Dcm_DspReqVehInfoContextType * _6;
  void * _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_17(D)->SpecialPtr;
  # DEBUG D#7 => &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext
  # DEBUG ReadDidSingleStaticDidContextPtr => D#7
  # DEBUG BEGIN_STMT
  BufferCfgPtr_18 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].BufferCfgPtr;
  # DEBUG BufferCfgPtr => BufferCfgPtr_18
  # DEBUG BEGIN_STMT
  DidInfoPtr_19 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_19
  # DEBUG BEGIN_STMT
  _2 = DidInfoPtr_19->Did;
  InfoId_20 = (const uint8) _2;
  # DEBUG InfoId => InfoId_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = context_17(D)->opstatus;
  if (_3 == 2)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _4 = &MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].ReadInfoContext;
  Dcm_Dsp_VinServices_HelperCancel (_4);
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_UnlockService ();
  # DEBUG BEGIN_STMT
  # DEBUG result => 26
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  if (_3 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 291181603]:
  # DEBUG BEGIN_STMT
  _5 = &MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].ReadInfoContext;
  result_24 = Dcm_Dsp_VinServices_HelperExecute (1, InfoId_20, _5);
  # DEBUG result => result_24
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 565234877]:
  # DEBUG BEGIN_STMT
  _6 = &MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].ReadInfoContext;
  result_22 = Dcm_Dsp_VinServices_HelperExecute (0, InfoId_20, _6);
  # DEBUG result => result_22

  <bb 7> [local count: 856416479]:
  # result_12 = PHI <result_22(6), result_24(5)>
  # DEBUG result => result_12
  # DEBUG BEGIN_STMT
  if (result_12 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 8> [local count: 291181603]:
  # DEBUG BEGIN_STMT
  _7 = context_17(D)->SpecialPtr;
  _8 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_7].ReadSingleStaticDidContext.WriteDidIds;
  if (_8 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 99001745]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = BufferCfgPtr_18->Occupied;
  _10 = _9 + 4294967294;
  BufferCfgPtr_18->Occupied = _10;

  <bb 10> [local count: 291181603]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_UnlockService ();
  goto <bb 14>; [100.00%]

  <bb 11> [local count: 782560221]:
  # result_33 = PHI <result_12(7), 26(3)>
  # DEBUG BEGIN_STMT
  if (result_33 == 10)
    goto <bb 12>; [51.12%]
  else
    goto <bb 13>; [48.88%]

  <bb 12> [local count: 400044785]:
  # DEBUG BEGIN_STMT
  context_17(D)->opstatus = 1;
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 382515436]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_VinServices_UnlockService ();

  <bb 14> [local count: 1073741824]:
  # result_34 = PHI <1(10), 10(12), result_33(13)>
  # DEBUG BEGIN_STMT
  context_17(D)->result = result_34;
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].ReadInfoContext.nrc;
  context_17(D)->nrc = _11;
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect, funcdef_no=29, decl_uid=7369, cgraph_uid=30, symbol_order=36)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect/36
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdInfoSelect (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  const uint8 InfoId;
  struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  struct Dcm_DspMsgBufferCfgType * const BufferCfgPtr;
  void * _1;
  short unsigned int _2;
  struct Dcm_DspReqVehInfoContextType * _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_7(D)->SpecialPtr;
  # DEBUG D#8 => &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext
  # DEBUG ReadSingleStaticDidContextPtr => D#8
  # DEBUG BEGIN_STMT
  BufferCfgPtr_8 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].BufferCfgPtr;
  # DEBUG BufferCfgPtr => BufferCfgPtr_8
  # DEBUG BEGIN_STMT
  DidInfoPtr_9 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_9
  # DEBUG BEGIN_STMT
  _2 = DidInfoPtr_9->Did;
  InfoId_10 = (const uint8) _2;
  # DEBUG InfoId => InfoId_10
  # DEBUG BEGIN_STMT
  _3 = &MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].ReadInfoContext;
  result_12 = Dcm_Dsp_VinServices_HelperInit (InfoId_10, _3, BufferCfgPtr_8);
  # DEBUG result => result_12
  # DEBUG BEGIN_STMT
  if (result_12 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  context_7(D)->next_state = 8;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  context_7(D)->result = result_12;
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].ReadInfoContext.nrc;
  context_7(D)->nrc = _4;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead (Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead, funcdef_no=28, decl_uid=7367, cgraph_uid=29, symbol_order=35)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead/35
Dcm_Dsp_DidServices_ReadSingleStaticDid_ObdPidRead (struct Dcm_Dsp_ContextBaseType * context)
{
  const Std_ReturnType result;
  const uint8 Pid;
  struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  struct Dcm_DspMsgBufferCfgType * const BufferCfgPtr;
  void * _1;
  short unsigned int _2;
  Dcm_NegativeResponseCodeType * _3;
  void * _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_10(D)->SpecialPtr;
  # DEBUG D#9 => &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext
  # DEBUG ReadSingleStaticDidContextPtr => D#9
  # DEBUG BEGIN_STMT
  BufferCfgPtr_11 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].BufferCfgPtr;
  # DEBUG BufferCfgPtr => BufferCfgPtr_11
  # DEBUG BEGIN_STMT
  DidInfoPtr_12 = MEM[(struct Dcm_ReadSingleStaticDidContextExtType *)_1 + 16B].DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_12
  # DEBUG BEGIN_STMT
  _2 = DidInfoPtr_12->Did;
  Pid_13 = (const uint8) _2;
  # DEBUG Pid => Pid_13
  # DEBUG BEGIN_STMT
  _3 = &context_10(D)->nrc;
  result_15 = Dcm_Dsp_PidServices_Execute (Pid_13, _3, BufferCfgPtr_11);
  # DEBUG result => result_15
  # DEBUG BEGIN_STMT
  if (result_15 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _4 = context_10(D)->SpecialPtr;
  _5 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_4].ReadSingleStaticDidContext.WriteDidIds;
  if (_5 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 124124555]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = BufferCfgPtr_11->Occupied;
  _7 = _6 + 4294967294;
  BufferCfgPtr_11->Occupied = _7;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  context_10(D)->result = result_15;
  return;

}



;; Function Dcm_Dsp_DidServices_WriteDid_SigWrite (Dcm_Dsp_DidServices_WriteDid_SigWrite, funcdef_no=17, decl_uid=7379, cgraph_uid=18, symbol_order=24)

Modification phase of node Dcm_Dsp_DidServices_WriteDid_SigWrite/24
Dcm_Dsp_DidServices_WriteDid_SigWrite (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  void * _1;
  unsigned char _2;
  struct Dcm_DidSignalWriteContextType * _3;
  struct Dcm_DidSignalWriteContextType * _4;
  short unsigned int _5;
  short unsigned int _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = context_11(D)->SpecialPtr;
  # DEBUG D#10 => &MEM[(struct Dcm_WriteDidContextType *)_1].WriteDidContext
  # DEBUG WriteDidContext => D#10
  # DEBUG BEGIN_STMT
  _2 = context_11(D)->opstatus;
  if (_2 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = &MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalWriteContext;
  Dcm_Dsp_DidSignals_Write_Cancel (_3);
  # DEBUG BEGIN_STMT
  context_11(D)->result = 26;
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _4 = &MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalWriteContext;
  result_13 = Dcm_Dsp_DidSignals_Write_Execute (_4);
  # DEBUG result => result_13
  # DEBUG BEGIN_STMT
  if (result_13 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalInd;
  _6 = _5 + 1;
  MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalInd = _6;
  # DEBUG BEGIN_STMT
  context_11(D)->next_state = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalWriteContext.Nrc;
  context_11(D)->nrc = _7;

  <bb 7> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  context_11(D)->result = result_13;

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_WriteDid_SigSelect (Dcm_Dsp_DidServices_WriteDid_SigSelect, funcdef_no=16, decl_uid=7377, cgraph_uid=17, symbol_order=23)

Modification phase of node Dcm_Dsp_DidServices_WriteDid_SigSelect/23
Dcm_Dsp_DidServices_WriteDid_SigSelect (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType InitRetVal;
  const uint16 DspDataIndex;
  const uint16 DataPos;
  const struct Dcm_DidSignalType * const SignalCfg;
  const uint16 NumSignals;
  void * _1;
  unsigned char _2;
  int _3;
  short unsigned int _4;
  unsigned char _5;
  short unsigned int _6;
  short unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  const struct Dcm_DidSignalType * _10;
  struct Dcm_DidSignalWriteContextType * _11;
  uint8 * _12;
  long unsigned int _13;
  unsigned char _14;
  unsigned char _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_18(D)->SpecialPtr;
  # DEBUG D#11 => &MEM[(struct Dcm_WriteDidContextType *)_1].WriteDidContext
  # DEBUG WriteDidContext => D#11
  # DEBUG BEGIN_STMT
  # DEBUG D#12 => &MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].DidInfoContext.DidInfoContext
  # DEBUG DidInfo => D#12
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 32B].ConfigIdx;
  _3 = (int) _2;
  NumSignals_19 = Dcm_DidConfig[_3].NumSignals;
  # DEBUG NumSignals => NumSignals_19
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalInd;
  if (_4 < NumSignals_19)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _5 = Dcm_DidConfig[_3].DidSignalsIdx;
  _6 = (short unsigned int) _5;
  SignalCfg_22 = Dcm_Dsp_DidSignals_GetDidSignalConfig (_6);
  # DEBUG SignalCfg => SignalCfg_22
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalInd;
  _8 = (unsigned int) _7;
  _9 = _8 * 4;
  _10 = SignalCfg_22 + _9;
  DataPos_23 = _10->DataPos;
  # DEBUG DataPos => DataPos_23
  # DEBUG BEGIN_STMT
  DspDataIndex_24 = _10->DspDataIndex;
  # DEBUG DspDataIndex => DspDataIndex_24
  # DEBUG BEGIN_STMT
  _11 = &MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalWriteContext;
  _12 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].BufferCfg.BufferPtr;
  _13 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].BufferCfg.Occupied;
  _14 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].EndiannessConversion;
  InitRetVal_26 = Dcm_Dsp_DidSignals_Write_Init (_11, _12, _13, DspDataIndex_24, DataPos_23, _14);
  # DEBUG InitRetVal => InitRetVal_26
  # DEBUG BEGIN_STMT
  if (InitRetVal_26 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _15 = MEM[(struct Dcm_WriteDidContextExtType *)_1 + 16B].SignalWriteContext.Nrc;
  context_18(D)->nrc = _15;
  # DEBUG BEGIN_STMT
  context_18(D)->result = InitRetVal_26;
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  context_18(D)->next_state = 2;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  context_18(D)->result = 0;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_Init (Dcm_Dsp_DidServices_Init, funcdef_no=0, decl_uid=7131, cgraph_uid=1, symbol_order=7)

Modification phase of node Dcm_Dsp_DidServices_Init/7
Dcm_Dsp_DidServices_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_DidServices_GetDidIndex (Dcm_Dsp_DidServices_GetDidIndex, funcdef_no=1, decl_uid=7172, cgraph_uid=2, symbol_order=8)

Modification phase of node Dcm_Dsp_DidServices_GetDidIndex/8
Dcm_Dsp_DidServices_GetDidIndex (uint16 Did, Dcm_DidConfigIdxType * ConfigIdx)
{
  Dcm_DidConfigIdxType HighDidIdx;
  Dcm_DidConfigIdxType LowDidIdx;
  boolean DIDFound;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 459454128]:
  # DEBUG BEGIN_STMT
  # DEBUG DIDFound => 0
  # DEBUG BEGIN_STMT
  # DEBUG LowDidIdx => 0
  # DEBUG BEGIN_STMT
  # DEBUG HighDidIdx => 2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = Dcm_DidConfig[0].Did;
  if (_2 <= Did_12(D))
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 229727064]:
  _3 = Dcm_DidConfig[2].Did;
  if (_3 >= Did_12(D))
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 114863532]:
  # DIDFound_4 = PHI <0(3)>
  # LowDidIdx_6 = PHI <0(3)>
  # HighDidIdx_7 = PHI <2(3)>
  DIDFound_9 = Dcm_Dsp_DidServices_GetDidIndex.part.0 (Did_12(D), ConfigIdx_13(D));

  <bb 5> [local count: 459454128]:
  # DIDFound_5 = PHI <0(2), 0(3), DIDFound_9(4)>
  # DEBUG DIDFound => DIDFound_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DIDFound_5;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_SelectType (Dcm_Dsp_DidServices_GetDidInfo_SelectType, funcdef_no=20, decl_uid=7341, cgraph_uid=21, symbol_order=27)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_SelectType/27
Dcm_Dsp_DidServices_GetDidInfo_SelectType (struct Dcm_Dsp_ContextBaseType * context)
{
  void * _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  Dcm_DidConfigIdxType * _5;
  unsigned char _6;
  unsigned char _7;
  int _8;
  unsigned char _9;
  short unsigned int _10;
  short unsigned int _11;
  unsigned char _12;
  Dcm_DidType * _13;
  unsigned char _14;
  short unsigned int _19;
  short unsigned int _21;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = context_18(D)->SpecialPtr;
  # DEBUG D#13 => &MEM[(struct Dcm_DidInfoContextType *)_1].DidInfoContext
  # DEBUG DidInfo => D#13
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].Did;
  _3 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].DidOp;
  _4 = Dcm_Dsp_DidServices_IsDidInValidRange (_2, _3);
  if (_4 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _5 = &MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigIdx;
  _6 = Dcm_Dsp_DidServices_GetDidIndex (_2, _5);
  if (_6 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigIdx;
  _8 = (int) _7;
  _9 = Dcm_DidConfig[_8].DidInfoIdx;
  MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].InfoIdx = _9;
  # DEBUG BEGIN_STMT
  _10 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].Did;
  # DEBUG Did => _10
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_IsDidInObdRange
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _21 = _10 + 3072;
  if (_21 <= 1279)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 88583700]:
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG Did => NULL
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigType = 1;
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  # DEBUG Did => NULL
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigType = 1;
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _11 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].Did;
  # DEBUG Did => _11
  # DEBUG INLINE_ENTRY Dcm_Dsp_DidServices_IsDidInObdRange
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  _19 = _11 + 3072;
  if (_19 <= 1279)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  # DEBUG Did => NULL
  # DEBUG result => NULL
  _12 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].DidOp;
  if (_12 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 29232621]:
  # DEBUG BEGIN_STMT
  _13 = &MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigType;
  Dcm_Dsp_DidServices_GetDidInfo_IsObdDIDAvailable (_11, _13);

  <bb 10> [local count: 1073741824]:
  # DEBUG Did => NULL
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ConfigType;
  if (_14 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  context_18(D)->result = 1;
  goto <bb 17>; [100.00%]

  <bb 12> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (_14 == 5)
    goto <bb 15>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 13> [local count: 354334802]:
  if (_14 == 7)
    goto <bb 15>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 14> [local count: 233860969]:
  if (_14 == 6)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 382522673]:
  # DEBUG BEGIN_STMT
  context_18(D)->result = 0;
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 154348240]:
  # DEBUG BEGIN_STMT
  context_18(D)->next_state = 1;

  <bb 17> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_GetMaximumDidLength (Dcm_Dsp_DidServices_GetMaximumDidLength, funcdef_no=2, decl_uid=7166, cgraph_uid=3, symbol_order=9)

Modification phase of node Dcm_Dsp_DidServices_GetMaximumDidLength/9
Dcm_Dsp_DidServices_GetMaximumDidLength (const struct Dcm_DidInfoContextExtType * DidInfo)
{
  struct Dcm_DidDataType CurrentDataCfg;
  const struct Dcm_DidSignalType * SignalCfg;
  const uint16 numSignals;
  uint32 DidDataLength;
  unsigned char _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  long unsigned int _10;
  short unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DidDataLength => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = DidInfo_19(D)->ConfigType;
  if (_1 == 5)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  if (_1 == 7)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 467721939]:
  if (_1 == 6)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 765045346]:
  # DEBUG BEGIN_STMT
  # DEBUG DidDataLength => 1028

  <bb 6> [local count: 1073741824]:
  # DidDataLength_15 = PHI <0(4), 1028(5)>
  # DEBUG DidDataLength => DidDataLength_15
  # DEBUG BEGIN_STMT
  _2 = DidInfo_19(D)->ConfigIdx;
  _3 = (int) _2;
  numSignals_20 = Dcm_DidConfig[_3].NumSignals;
  # DEBUG numSignals => numSignals_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (numSignals_20 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_DidConfig[_3].DidSignalsIdx;
  _5 = (short unsigned int) _4;
  _6 = _5 + numSignals_20;
  _7 = _6 + 65535;
  SignalCfg_22 = Dcm_Dsp_DidSignals_GetDidSignalConfig (_7);
  # DEBUG SignalCfg => SignalCfg_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = SignalCfg_22->DspDataIndex;
  Dcm_Dsp_DidSignals_GetDidDataConfig (&CurrentDataCfg, _8);
  # DEBUG BEGIN_STMT
  _9 = SignalCfg_22->DataPos;
  _10 = (long unsigned int) _9;
  _11 = CurrentDataCfg.DataLength;
  _12 = (long unsigned int) _11;
  _13 = _10 + _12;
  _14 = _13 + 7;
  DidDataLength_24 = _14 >> 3;
  # DEBUG DidDataLength => DidDataLength_24
  CurrentDataCfg ={v} {CLOBBER};

  <bb 8> [local count: 1073741824]:
  # DidDataLength_16 = PHI <DidDataLength_15(6), DidDataLength_24(7)>
  # DEBUG DidDataLength => DidDataLength_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DidDataLength_16;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_Init (Dcm_Dsp_DidServices_GetDidInfo_Init, funcdef_no=3, decl_uid=7136, cgraph_uid=4, symbol_order=10)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_Init/10
Dcm_Dsp_DidServices_GetDidInfo_Init (struct Dcm_DidInfoContextType * DidInfoContext, uint16 Did, Dcm_DidOpType DidOp, uint8 ProtocolIdx)
{
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG D#14 => &DidInfoContext_2(D)->DidInfoContext
  # DEBUG DidInfo => D#14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &DidInfoContext_2(D)->BaseContext;
  Dcm_Dsp_Context_Init (_1, DidInfoContext_2(D), &Dcm_GetDidInfoStateConfig);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)DidInfoContext_2(D) + 16B].Did = Did_5(D);
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)DidInfoContext_2(D) + 16B].DidOp = DidOp_7(D);
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)DidInfoContext_2(D) + 16B].ProtocolIdx = ProtocolIdx_9(D);
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)DidInfoContext_2(D) + 16B].ConfigType = 0;
  # DEBUG BEGIN_STMT
  DidInfoContext_2(D)->BaseContext.nrc = 49;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_Execute (Dcm_Dsp_DidServices_GetDidInfo_Execute, funcdef_no=4, decl_uid=7138, cgraph_uid=5, symbol_order=11)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_Execute/11
Dcm_Dsp_DidServices_GetDidInfo_Execute (struct Dcm_DidInfoContextType * DidInfoContext)
{
  Std_ReturnType stateOfCtxExe;
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG stateOfCtxExe => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &DidInfoContext_2(D)->BaseContext;
  stateOfCtxExe_5 = Dcm_Dsp_Context_Execute (_1);
  # DEBUG stateOfCtxExe => stateOfCtxExe_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return stateOfCtxExe_5;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_Cancel (Dcm_Dsp_DidServices_GetDidInfo_Cancel, funcdef_no=5, decl_uid=7140, cgraph_uid=6, symbol_order=12)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_Cancel/12
Dcm_Dsp_DidServices_GetDidInfo_Cancel (struct Dcm_DidInfoContextType * DidInfoContext)
{
  Std_ReturnType stateOfCtxCancel;
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG stateOfCtxCancel => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &DidInfoContext_2(D)->BaseContext;
  stateOfCtxCancel_5 = Dcm_Dsp_Context_Cancel (_1);
  # DEBUG stateOfCtxCancel => stateOfCtxCancel_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return stateOfCtxCancel_5;

}



;; Function Dcm_Dsp_DidServices_GetDidGeneralBuffer (Dcm_Dsp_DidServices_GetDidGeneralBuffer, funcdef_no=6, decl_uid=7142, cgraph_uid=7, symbol_order=13)

Modification phase of node Dcm_Dsp_DidServices_GetDidGeneralBuffer/13
Dcm_Dsp_DidServices_GetDidGeneralBuffer ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG pDIDGeneralBuffer => 0B
  # DEBUG BEGIN_STMT
  # DEBUG pDIDGeneralBuffer => &Dcm_DIDGeneralBuffer
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return &Dcm_DIDGeneralBuffer;

}



;; Function Dcm_Dsp_DidServices_ReadDid_Init (Dcm_Dsp_DidServices_ReadDid_Init, funcdef_no=7, decl_uid=7150, cgraph_uid=8, symbol_order=14)

Modification phase of node Dcm_Dsp_DidServices_ReadDid_Init/14
Dcm_Dsp_DidServices_ReadDid_Init (struct Dcm_ReadDidContextType * ReadDidContext, uint16 Did, Dcm_DidOpType DidOp, boolean WriteDidIds, struct Dcm_DspMsgBufferCfgType * DidBufferConfig, boolean EnableRuleChecks, PduIdType RxPduId)
{
  const uint8 ProtocolIdx;
  int _1;
  unsigned char _2;
  int _3;
  struct Dcm_Dsp_ContextBaseType * _4;
  struct Dcm_DidInfoContextType * _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxPduId_6(D);
  _2 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  _3 = (int) _2;
  ProtocolIdx_8 = Dcm_MainConnectionConfig[_3].ProtocolIndex;
  # DEBUG ProtocolIdx => ProtocolIdx_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = &ReadDidContext_9(D)->BaseContext;
  Dcm_Dsp_Context_Init (_4, ReadDidContext_9(D), &Dcm_ReadDidStateConfig);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ReadDidContext_9(D)->ReadDidContext.DidBufferCfgPtr = DidBufferConfig_11(D);
  # DEBUG BEGIN_STMT
  ReadDidContext_9(D)->ReadDidContext.WriteDidIds = WriteDidIds_13(D);
  # DEBUG BEGIN_STMT
  _5 = &ReadDidContext_9(D)->ReadDidContext.DidInfoContext;
  Dcm_Dsp_DidServices_GetDidInfo_Init (_5, Did_15(D), DidOp_16(D), ProtocolIdx_8);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_DidServices_ReadDid_Execute (Dcm_Dsp_DidServices_ReadDid_Execute, funcdef_no=8, decl_uid=7152, cgraph_uid=9, symbol_order=15)

Modification phase of node Dcm_Dsp_DidServices_ReadDid_Execute/15
Dcm_Dsp_DidServices_ReadDid_Execute (struct Dcm_ReadDidContextType * ReadDidContext)
{
  Std_ReturnType statusOfReadDid;
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &ReadDidContext_2(D)->BaseContext;
  statusOfReadDid_5 = Dcm_Dsp_Context_Execute (_1);
  # DEBUG statusOfReadDid => statusOfReadDid_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return statusOfReadDid_5;

}



;; Function Dcm_Dsp_DidServices_ReadDid_Cancel (Dcm_Dsp_DidServices_ReadDid_Cancel, funcdef_no=9, decl_uid=7154, cgraph_uid=10, symbol_order=16)

Modification phase of node Dcm_Dsp_DidServices_ReadDid_Cancel/16
Dcm_Dsp_DidServices_ReadDid_Cancel (struct Dcm_ReadDidContextType * ReadDidContext)
{
  Std_ReturnType stsOfReadDidCancel;
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &ReadDidContext_2(D)->BaseContext;
  stsOfReadDidCancel_5 = Dcm_Dsp_Context_Cancel (_1);
  # DEBUG stsOfReadDidCancel => stsOfReadDidCancel_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return stsOfReadDidCancel_5;

}



;; Function Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute (Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute, funcdef_no=10, decl_uid=7178, cgraph_uid=11, symbol_order=17)

Modification phase of node Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute/17
Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute (struct Dcm_ReadSignalContextType * pReadSignalContext)
{
  uint16 DataIndexPrev;
  uint16_least PreviousSignalIndex;
  struct Dcm_DidDataType LocalDataCfg;
  uint16 didDataPosn;
  const uint16 DidDataIndex;
  const struct Dcm_DidSignalType * const SignalCfg;
  boolean breakConditionsNotFulfilled;
  Std_ReturnType SignalReadRetVal;
  Std_ReturnType RetVal;
  Dcm_NegativeResponseCodeType nrc;
  uint16 numSignals;
  unsigned char _1;
  struct Dcm_DidSignalReadContextType * _2;
  unsigned char _3;
  int _4;
  unsigned char _5;
  unsigned char _6;
  int _7;
  unsigned char _8;
  short unsigned int _9;
  short unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  const struct Dcm_DidSignalType * _13;
  unsigned char _18;
  long unsigned int _19;
  const struct Dcm_DidSignalType * _20;
  unsigned char _21;
  short unsigned int _22;
  short unsigned int _23;
  long unsigned int _24;
  struct Dcm_DidSignalReadContextType * _25;
  uint8 * _26;
  long unsigned int _27;
  long unsigned int _28;
  unsigned char _29;
  unsigned char _30;
  struct Dcm_DidSignalReadContextType * _31;
  short unsigned int _32;
  short unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;
  short unsigned int _37;

  <bb 2> [local count: 200856020]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG nrc => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG SignalReadRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG breakConditionsNotFulfilled => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pReadSignalContext_50(D)->CurrentOpStatus;
  if (_1 == 2)
    goto <bb 3>; [12.02%]
  else
    goto <bb 4>; [87.98%]

  <bb 3> [local count: 24142894]:
  # DEBUG BEGIN_STMT
  _2 = &pReadSignalContext_50(D)->SignalReadContext;
  Dcm_Dsp_DidSignals_Read_Cancel (_2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 26
  goto <bb 20>; [100.00%]

  <bb 4> [local count: 176713126]:
  # DEBUG BEGIN_STMT
  _3 = pReadSignalContext_50(D)->CurrentDidCfgIndex;
  _4 = (int) _3;
  numSignals_51 = Dcm_DidConfig[_4].NumSignals;
  # DEBUG numSignals => numSignals_51
  # DEBUG BEGIN_STMT
  if (numSignals_51 != 0)
    goto <bb 22>; [65.00%]
  else
    goto <bb 20>; [35.00%]

  <bb 22> [local count: 114863532]:
  goto <bb 21>; [100.00%]

  <bb 5> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _5 = pReadSignalContext_50(D)->NewSignal;
  if (_5 == 1)
    goto <bb 6>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 6> [local count: 194076967]:
  # DEBUG BEGIN_STMT
  _6 = pReadSignalContext_50(D)->CurrentDidCfgIndex;
  _7 = (int) _6;
  _8 = Dcm_DidConfig[_7].DidSignalsIdx;
  _9 = (short unsigned int) _8;
  SignalCfg_53 = Dcm_Dsp_DidSignals_GetDidSignalConfig (_9);
  # DEBUG SignalCfg => SignalCfg_53
  # DEBUG BEGIN_STMT
  _10 = pReadSignalContext_50(D)->SignalInd;
  _11 = (unsigned int) _10;
  _12 = _11 * 4;
  _13 = SignalCfg_53 + _12;
  DidDataIndex_54 = _13->DspDataIndex;
  # DEBUG DidDataIndex => DidDataIndex_54
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  didDataPosn_55 = _13->DataPos;
  # DEBUG didDataPosn => didDataPosn_55
  # DEBUG BEGIN_STMT
  if (_10 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 7> [local count: 97038483]:
  _18 = pReadSignalContext_50(D)->EndiannessConversion;
  if (_18 == 1)
    goto <bb 23>; [16.00%]
  else
    goto <bb 11>; [84.00%]

  <bb 23> [local count: 15526157]:
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 125620728]:
  # DEBUG BEGIN_STMT
  _19 = PreviousSignalIndex_43 * 4;
  _20 = SignalCfg_53 + _19;
  DataIndexPrev_57 = _20->DspDataIndex;
  # DEBUG DataIndexPrev => DataIndexPrev_57
  # DEBUG BEGIN_STMT
  Dcm_Dsp_DidSignals_GetDidDataConfig (&LocalDataCfg, DataIndexPrev_57);
  # DEBUG BEGIN_STMT
  _21 = LocalDataCfg.DataType;
  _22 = LocalDataCfg.DataLength;
  didDataPosn_59 = Dcm_Dsp_DidServices_EndianessConversion_CalculateDataPosition (_21, _22, didDataPosn_41);
  # DEBUG didDataPosn => didDataPosn_59
  # DEBUG BEGIN_STMT
  PreviousSignalIndex_60 = PreviousSignalIndex_43 + 1;
  # DEBUG PreviousSignalIndex => PreviousSignalIndex_60

  <bb 9> [local count: 141146886]:
  # didDataPosn_41 = PHI <didDataPosn_59(8), didDataPosn_55(23)>
  # PreviousSignalIndex_43 = PHI <PreviousSignalIndex_60(8), 0(23)>
  # DEBUG PreviousSignalIndex => PreviousSignalIndex_43
  # DEBUG didDataPosn => didDataPosn_41
  # DEBUG BEGIN_STMT
  _23 = pReadSignalContext_50(D)->SignalInd;
  _24 = (long unsigned int) _23;
  if (_24 > PreviousSignalIndex_43)
    goto <bb 8>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 15526157]:
  # didDataPosn_17 = PHI <didDataPosn_41(9)>
  LocalDataCfg ={v} {CLOBBER};

  <bb 11> [local count: 194076967]:
  # didDataPosn_42 = PHI <didDataPosn_55(6), didDataPosn_55(7), didDataPosn_17(10)>
  # DEBUG didDataPosn => didDataPosn_42
  # DEBUG BEGIN_STMT
  _25 = &pReadSignalContext_50(D)->SignalReadContext;
  _26 = pReadSignalContext_50(D)->outputBuffer;
  _27 = pReadSignalContext_50(D)->BufferLimit;
  _28 = pReadSignalContext_50(D)->AmountOfBufferOccupied;
  _29 = pReadSignalContext_50(D)->DidOp;
  _30 = pReadSignalContext_50(D)->EndiannessConversion;
  Dcm_Dsp_DidSignals_Read_Init (_25, _26, _27, DidDataIndex_54, didDataPosn_42, _28, _29, _30);
  # DEBUG BEGIN_STMT
  pReadSignalContext_50(D)->NewSignal = 0;

  <bb 12> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _31 = &pReadSignalContext_50(D)->SignalReadContext;
  SignalReadRetVal_64 = Dcm_Dsp_DidSignals_Read_Execute (_31);
  # DEBUG SignalReadRetVal => SignalReadRetVal_64
  # DEBUG BEGIN_STMT
  nrc_65 = pReadSignalContext_50(D)->SignalReadContext.Nrc;
  # DEBUG nrc => nrc_65
  # DEBUG BEGIN_STMT
  if (SignalReadRetVal_64 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 13> [local count: 479439146]:
  # DEBUG BEGIN_STMT
  _32 = pReadSignalContext_50(D)->SignalInd;
  _33 = _32 + 1;
  pReadSignalContext_50(D)->SignalInd = _33;
  # DEBUG BEGIN_STMT
  pReadSignalContext_50(D)->NewSignal = 1;
  # DEBUG BEGIN_STMT
  if (_33 == numSignals_51)
    goto <bb 14>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 14> [local count: 163009310]:
  # DEBUG BEGIN_STMT
  _34 = pReadSignalContext_50(D)->AmountOfBufferOccupied;
  _35 = pReadSignalContext_50(D)->SignalReadContext.BufferOffset;
  _36 = _34 + _35;
  pReadSignalContext_50(D)->AmountOfBufferOccupied = _36;
  # DEBUG BEGIN_STMT
  pReadSignalContext_50(D)->NrcConditions = 0;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 26
  # DEBUG BEGIN_STMT
  # DEBUG breakConditionsNotFulfilled => 0
  goto <bb 18>; [100.00%]

  <bb 15> [local count: 479439146]:
  # DEBUG BEGIN_STMT
  if (SignalReadRetVal_64 == 1)
    goto <bb 16>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 16> [local count: 163009310]:
  # DEBUG BEGIN_STMT
  pReadSignalContext_50(D)->NrcConditions = nrc_65;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG breakConditionsNotFulfilled => 0

  <bb 18> [local count: 958878293]:
  # RetVal_16 = PHI <26(14), 1(16), RetVal_38(13), 10(15)>
  # breakConditionsNotFulfilled_15 = PHI <0(14), 0(16), breakConditionsNotFulfilled_40(13), 0(15)>

  <bb 21> [local count: 1073741824]:
  # RetVal_38 = PHI <RetVal_16(18), 1(22)>
  # breakConditionsNotFulfilled_40 = PHI <breakConditionsNotFulfilled_15(18), 1(22)>
  # DEBUG breakConditionsNotFulfilled => breakConditionsNotFulfilled_40
  # DEBUG RetVal => RetVal_38
  # DEBUG BEGIN_STMT
  _37 = pReadSignalContext_50(D)->SignalInd;
  if (_37 < numSignals_51)
    goto <bb 19>; [94.50%]
  else
    goto <bb 20>; [5.50%]

  <bb 19> [local count: 1014686025]:
  if (breakConditionsNotFulfilled_40 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 20>; [5.50%]

  <bb 20> [local count: 200856019]:
  # RetVal_39 = PHI <26(3), RetVal_38(19), 26(4), RetVal_38(21)>
  # DEBUG RetVal => RetVal_39
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_39;

}



;; Function Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData (Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData, funcdef_no=42, decl_uid=7363, cgraph_uid=43, symbol_order=49)

Modification phase of node Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData/49
Dcm_Dsp_DidServices_ReadSingleStaticDid_ReadLocalData (struct Dcm_Dsp_ContextBaseType * context)
{
  Std_ReturnType result;
  const struct Dcm_DidInfoContextExtType * const DidInfoPtr;
  struct Dcm_DspMsgBufferCfgType * const BufferCfgPtr;
  struct Dcm_ReadSignalContextType * ReadSignalContextPtr;
  void * _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_10(D)->SpecialPtr;
  ReadSignalContextPtr_11 = &MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.ReadSignalContext;
  # DEBUG ReadSignalContextPtr => ReadSignalContextPtr_11
  # DEBUG BEGIN_STMT
  BufferCfgPtr_12 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.BufferCfgPtr;
  # DEBUG BufferCfgPtr => BufferCfgPtr_12
  # DEBUG BEGIN_STMT
  DidInfoPtr_13 = MEM[(struct Dcm_ReadSingleStaticDidContextType *)_1].ReadSingleStaticDidContext.DidInfoPtr;
  # DEBUG DidInfoPtr => DidInfoPtr_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = context_10(D)->opstatus;
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].CurrentOpStatus = _2;
  # DEBUG BEGIN_STMT
  _3 = DidInfoPtr_13->DidOp;
  MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].DidOp = _3;
  # DEBUG BEGIN_STMT
  result_17 = Dcm_Dsp_DidServices_ReadDataOfSingleDid_Execute (ReadSignalContextPtr_11);
  # DEBUG result => result_17
  # DEBUG BEGIN_STMT
  if (result_17 == 26)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].AmountOfBufferOccupied;
  BufferCfgPtr_12->Occupied = _4;
  # DEBUG BEGIN_STMT
  context_10(D)->result = 0;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  context_10(D)->result = result_17;
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct Dcm_ReadSignalContextType *)_1 + 24B].NrcConditions;
  context_10(D)->nrc = _5;
  # DEBUG BEGIN_STMT
  if (_5 == 49)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  _6 = BufferCfgPtr_12->Occupied;
  _7 = _6 + 4294967294;
  BufferCfgPtr_12->Occupied = _7;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_ReadSignal_GetResults (Dcm_Dsp_DidServices_ReadSignal_GetResults, funcdef_no=11, decl_uid=7176, cgraph_uid=12, symbol_order=18)

Modification phase of node Dcm_Dsp_DidServices_ReadSignal_GetResults/18
Dcm_Dsp_DidServices_ReadSignal_GetResults (const struct Dcm_ReadSignalContextType * pReadSignalContext, Dcm_NegativeResponseCodeType * Nrc, uint32 * AmountOfBufferOccupied)
{
  Std_ReturnType operationResult;
  unsigned char _1;
  long unsigned int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pReadSignalContext_6(D)->NrcConditions;
  if (_1 == 0)
    goto <bb 4>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  # DEBUG operationResult => 1

  <bb 4> [local count: 1073741824]:
  # operationResult_4 = PHI <26(2), 1(3)>
  # DEBUG operationResult => operationResult_4
  # DEBUG BEGIN_STMT
  _2 = pReadSignalContext_6(D)->AmountOfBufferOccupied;
  *AmountOfBufferOccupied_7(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = pReadSignalContext_6(D)->NrcConditions;
  *Nrc_9(D) = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return operationResult_4;

}



;; Function Dcm_Dsp_DidServices_WriteDid_Init (Dcm_Dsp_DidServices_WriteDid_Init, funcdef_no=12, decl_uid=7160, cgraph_uid=13, symbol_order=19)

Modification phase of node Dcm_Dsp_DidServices_WriteDid_Init/19
Dcm_Dsp_DidServices_WriteDid_Init (struct Dcm_WriteDidContextType * WriteDidContext, uint16 Did, uint8 * DataPtr, uint32 DataLen, uint8 ProtocolIdx)
{
  const boolean EndiannessConversion;
  int _1;
  struct Dcm_Dsp_ContextBaseType * _2;
  struct Dcm_DidInfoContextType * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIdx_4(D);
  # DEBUG D#17 => &Dcm_ProtocolConfig[_1]
  # DEBUG curProtocolConfig => D#17
  # DEBUG BEGIN_STMT
  EndiannessConversion_6 = MEM[(const struct Dcm_ProtocolConfigType *)&Dcm_ProtocolConfig][_1].EndiannessConversion;
  # DEBUG EndiannessConversion => EndiannessConversion_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = &WriteDidContext_7(D)->BaseContext;
  Dcm_Dsp_Context_Init (_2, WriteDidContext_7(D), &Dcm_WriteDidStateConfig);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  WriteDidContext_7(D)->WriteDidContext.BufferCfg.BufferPtr = DataPtr_9(D);
  # DEBUG BEGIN_STMT
  WriteDidContext_7(D)->WriteDidContext.BufferCfg.Occupied = DataLen_11(D);
  # DEBUG BEGIN_STMT
  WriteDidContext_7(D)->WriteDidContext.EndiannessConversion = EndiannessConversion_6;
  # DEBUG BEGIN_STMT
  WriteDidContext_7(D)->WriteDidContext.SignalInd = 0;
  # DEBUG BEGIN_STMT
  WriteDidContext_7(D)->WriteDidContext.DidInfoContext.DidInfoContext.ReqLen = DataLen_11(D);
  # DEBUG BEGIN_STMT
  _3 = &WriteDidContext_7(D)->WriteDidContext.DidInfoContext;
  Dcm_Dsp_DidServices_GetDidInfo_Init (_3, Did_16(D), 1, ProtocolIdx_4(D));
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_DidServices_WriteDid_Execute (Dcm_Dsp_DidServices_WriteDid_Execute, funcdef_no=13, decl_uid=7162, cgraph_uid=14, symbol_order=20)

Modification phase of node Dcm_Dsp_DidServices_WriteDid_Execute/20
Dcm_Dsp_DidServices_WriteDid_Execute (struct Dcm_WriteDidContextType * WriteDidContext)
{
  Std_ReturnType statusOfWriteDIDExecute;
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG statusOfWriteDIDExecute => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &WriteDidContext_2(D)->BaseContext;
  statusOfWriteDIDExecute_5 = Dcm_Dsp_Context_Execute (_1);
  # DEBUG statusOfWriteDIDExecute => statusOfWriteDIDExecute_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return statusOfWriteDIDExecute_5;

}



;; Function Dcm_Dsp_DidServices_WriteDid_Cancel (Dcm_Dsp_DidServices_WriteDid_Cancel, funcdef_no=14, decl_uid=7164, cgraph_uid=15, symbol_order=21)

Modification phase of node Dcm_Dsp_DidServices_WriteDid_Cancel/21
Dcm_Dsp_DidServices_WriteDid_Cancel (struct Dcm_WriteDidContextType * WriteDidContext)
{
  Std_ReturnType statusOfWriteDidCancel;
  struct Dcm_Dsp_ContextBaseType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG statusOfWriteDidCancel => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = &WriteDidContext_2(D)->BaseContext;
  statusOfWriteDidCancel_5 = Dcm_Dsp_Context_Cancel (_1);
  # DEBUG statusOfWriteDidCancel => statusOfWriteDidCancel_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return statusOfWriteDidCancel_5;

}



;; Function Dcm_Dsp_DidServices_GetAccessInfo (Dcm_Dsp_DidServices_GetAccessInfo, funcdef_no=46, decl_uid=7169, cgraph_uid=47, symbol_order=53)

Modification phase of node Dcm_Dsp_DidServices_GetAccessInfo/53
Dcm_Dsp_DidServices_GetAccessInfo (Dcm_DidInfoIdxType didInfoIdx, Dcm_DidOpType didOpType)
{
  const Dcm_DidReadAccessInfoIdxType AccessInfoIdx;
  const struct Dcm_DidAccessInfoBaseType * AccessInfo;
  int _1;
  int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG AccessInfo => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (didOpType_4(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (didOpType_4(D) == 4)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 354334802]:
  if (didOpType_4(D) == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 839880856]:
  # DEBUG BEGIN_STMT
  _1 = (int) didInfoIdx_5(D);
  AccessInfoIdx_7 = Dcm_DidInfo[_1].ReadAccessInfoIdx;
  # DEBUG AccessInfoIdx => AccessInfoIdx_7
  # DEBUG BEGIN_STMT
  if (AccessInfoIdx_7 != 255)
    goto <bb 6>; [82.62%]
  else
    goto <bb 8>; [17.38%]

  <bb 6> [local count: 693909563]:
  # DEBUG BEGIN_STMT
  _2 = (int) AccessInfoIdx_7;
  AccessInfo_8 = &Dcm_DidReadAccessInfo[_2].AccessInfoBase;
  # DEBUG AccessInfo => AccessInfo_8
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 233860968]:
  AccessInfo_9 = Dcm_Dsp_DidServices_GetAccessInfo.part.0 (didInfoIdx_5(D), didOpType_4(D));

  <bb 8> [local count: 1073741824]:
  # AccessInfo_3 = PHI <AccessInfo_8(6), 0B(5), AccessInfo_9(7)>
  # DEBUG AccessInfo => AccessInfo_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return AccessInfo_3;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity (Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity, funcdef_no=23, decl_uid=7347, cgraph_uid=24, symbol_order=30)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity/30
Dcm_Dsp_DidServices_GetDidInfo_CheckSecurity (struct Dcm_Dsp_ContextBaseType * context)
{
  const boolean DidIsAvailable;
  const struct Dcm_DidAccessInfoBaseType * AccessInfo;
  void * _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  boolean (*<T68a>) (uint8 *) _5;
  Dcm_NegativeResponseCodeType * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_9(D)->SpecialPtr;
  # DEBUG D#18 => &MEM[(struct Dcm_DidInfoContextType *)_1].DidInfoContext
  # DEBUG DidInfo => D#18
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].InfoIdx;
  _3 = MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].DidOp;
  AccessInfo_10 = Dcm_Dsp_DidServices_GetAccessInfo (_2, _3);
  # DEBUG AccessInfo => AccessInfo_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsp_DidServices_IsDidAvailableInSecLevel (AccessInfo_10);
  if (_4 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _5 = AccessInfo_10->ModeRuleDidFunction;
  if (_5 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 7>; [30.00%]

  <bb 4> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  _6 = &context_9(D)->nrc;
  DidIsAvailable_15 = _5 (_6);
  # DEBUG DidIsAvailable => DidIsAvailable_15
  # DEBUG BEGIN_STMT
  if (DidIsAvailable_15 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 86887188]:
  # DEBUG BEGIN_STMT
  context_9(D)->result = 0;
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 168663366]:
  # DEBUG BEGIN_STMT
  MEM[(struct Dcm_DidInfoContextExtType *)_1 + 16B].ModeRuleFailed = 1;
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 109521666]:
  # DEBUG BEGIN_STMT
  context_9(D)->result = 0;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  context_9(D)->nrc = 51;

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsp_DidServices_GetDidInfo_CheckSession (Dcm_Dsp_DidServices_GetDidInfo_CheckSession, funcdef_no=21, decl_uid=7343, cgraph_uid=22, symbol_order=28)

Modification phase of node Dcm_Dsp_DidServices_GetDidInfo_CheckSession/28
Dcm_Dsp_DidServices_GetDidInfo_CheckSession (struct Dcm_Dsp_ContextBaseType * context)
{
  const struct Dcm_DidAccessInfoBaseType * AccessInfo;
  void * _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = context_8(D)->SpecialPtr;
  # DEBUG D#19 => &MEM[(struct Dcm_DidInfoContextType *)_1].DidInfoContext
  # DEBUG DidInfo => D#19
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].InfoIdx;
  _3 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].DidOp;
  AccessInfo_9 = Dcm_Dsp_DidServices_GetAccessInfo (_2, _3);
  # DEBUG AccessInfo => AccessInfo_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  context_8(D)->result = 1;
  # DEBUG BEGIN_STMT
  if (AccessInfo_9 != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 7>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsp_DidServices_IsDidAvailableInSession (AccessInfo_9);
  if (_4 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 4> [local count: 287064877]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Dcm_DidInfoContextExtType *)_1 + 16B].DidOp;
  if (_5 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 97602058]:
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 2;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 189462818]:
  # DEBUG BEGIN_STMT
  context_8(D)->next_state = 3;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 499612071]:
  # DEBUG BEGIN_STMT
  context_8(D)->nrc = 49;

  <bb 8> [local count: 1073741824]:
  return;

}


