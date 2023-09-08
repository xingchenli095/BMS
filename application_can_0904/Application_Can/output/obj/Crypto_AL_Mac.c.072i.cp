
IPA constant propagation start:
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_CMACVrfyContext.K1, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_CMACVrfyContext.K1, 16);
  instance pointer: &Crypto_CMACVrfyContext.K1  Outer instance pointer: Crypto_CMACVrfyContext offset: 448 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_CMACVrfyContext.K2, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_CMACVrfyContext.K2, 16);
  instance pointer: &Crypto_CMACVrfyContext.K2  Outer instance pointer: Crypto_CMACVrfyContext offset: 576 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CMACVrfyContext.K2, &Crypto_CMACVrfyContext.K1, 16);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_CMACVrfyContext.K1, 16);
Determining dynamic type for call: Crypto_AL_MACVERIFY_AES_CMAC_Update (_21, _14);
  Starting walk at: Crypto_AL_MACVERIFY_AES_CMAC_Update (_21, _14);
  instance pointer: _14  Outer instance pointer: _14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AL_MACVERIFY_AES_CMAC_Finish (_25, _14);
  Starting walk at: Crypto_AL_MACVERIFY_AES_CMAC_Finish (_25, _14);
  instance pointer: _14  Outer instance pointer: _14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _26 (_27, _28);
  Starting walk at: _26 (_27, _28);
  instance pointer: _27  Outer instance pointer: _27 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_Update (_21, _14);
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_Finish (_25, _14);
Determining dynamic type for call: _7 (_8, 12);
  Starting walk at: _7 (_8, 12);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  Function call may change dynamic type:SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
Determining dynamic type for call: Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0 (Job_12(D), Error_13(D));
  Starting walk at: Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0 (Job_12(D), Error_13(D));
  instance pointer: Job_12(D)  Outer instance pointer: Job_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_Reset ();
  Function call may change dynamic type:CryIf_CallbackNotification (Job_12(D), Error_13(D));
  Function call may change dynamic type:SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  Function call may change dynamic type:SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_CMACGenContext.K1, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_CMACGenContext.K1, 16);
  instance pointer: &Crypto_CMACGenContext.K1  Outer instance pointer: Crypto_CMACGenContext offset: 448 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_CMACGenContext.K2, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_CMACGenContext.K2, 16);
  instance pointer: &Crypto_CMACGenContext.K2  Outer instance pointer: Crypto_CMACGenContext offset: 576 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CMACGenContext.K2, &Crypto_CMACGenContext.K1, 16);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_CMACGenContext.K1, 16);
Determining dynamic type for call: Crypto_AL_MACGENERATE_AES_CMAC_Update (_21, _14);
  Starting walk at: Crypto_AL_MACGENERATE_AES_CMAC_Update (_21, _14);
  instance pointer: _14  Outer instance pointer: _14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AL_MACGENERATE_AES_CMAC_Finish (_24, _14);
  Starting walk at: Crypto_AL_MACGENERATE_AES_CMAC_Finish (_24, _14);
  instance pointer: _14  Outer instance pointer: _14 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _25 (_26, _27);
  Starting walk at: _25 (_26, _27);
  instance pointer: _26  Outer instance pointer: _26 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_Update (_21, _14);
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_Finish (_24, _14);
Determining dynamic type for call: _7 (_8, 12);
  Starting walk at: _7 (_8, 12);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  Function call may change dynamic type:SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
Determining dynamic type for call: Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0 (Job_12(D), Error_13(D));
  Starting walk at: Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0 (Job_12(D), Error_13(D));
  instance pointer: Job_12(D)  Outer instance pointer: Job_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_Reset ();
  Function call may change dynamic type:CryIf_CallbackNotification (Job_12(D), Error_13(D));
  Function call may change dynamic type:SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  Function call may change dynamic type:SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
Determining dynamic type for call: Crypto_CMACShiftBlockOneBitLeft (Kx_4(D));
  Starting walk at: Crypto_CMACShiftBlockOneBitLeft (Kx_4(D));
  instance pointer: Kx_4(D)  Outer instance pointer: Kx_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACCalcKx (_17, 16);
  Starting walk at: Crypto_CMACCalcKx (_17, 16);
  instance pointer: _17  Outer instance pointer: _17 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_12 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, _11, &OutputLengthPtr, &Crypto_PreCalcKey);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_PreCalcKey.data, _6, _5);
  Function call may change dynamic type:KeyExists_54 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1, &KeyContentIndex);
  Function call may change dynamic type:K1Exists_52 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1001, &K1Index);
Determining dynamic type for call: Crypto_CMACCalcKx (_31, 16);
  Starting walk at: Crypto_CMACCalcKx (_31, 16);
  instance pointer: _31  Outer instance pointer: _31 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_22, _26, 16);
  Function call may change dynamic type:K2Exists_62 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1002, &K2Index);
  Function call may change dynamic type:Crypto_CMACCalcKx (_17, 16);
  Function call may change dynamic type:_12 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, _11, &OutputLengthPtr, &Crypto_PreCalcKey);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_PreCalcKey.data, _6, _5);
  Function call may change dynamic type:KeyExists_54 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1, &KeyContentIndex);
  Function call may change dynamic type:K1Exists_52 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1001, &K1Index);
Determining dynamic type for call: Crypto_CMACVrfyMainFunction (Result_2(D), Busy_3(D));
  Starting walk at: Crypto_CMACVrfyMainFunction (Result_2(D), Busy_3(D));
  instance pointer: Result_2(D)  Outer instance pointer: Result_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACVrfyMainFunction (Result_2(D), Busy_3(D));
  Starting walk at: Crypto_CMACVrfyMainFunction (Result_2(D), Busy_3(D));
  instance pointer: Busy_3(D)  Outer instance pointer: Busy_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_K1, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_K1, 16);
  instance pointer: &Crypto_K1  Outer instance pointer: Crypto_K1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_59 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_55 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_53 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacVrfyKey.data, &Crypto_CmacVrfyKey.length);
  Function call may change dynamic type:RetVal_48 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_57 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacVrfyKey);
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_K2, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_K2, 16);
  instance pointer: &Crypto_K2  Outer instance pointer: Crypto_K2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  Function call may change dynamic type:RetVal_62 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  Function call may change dynamic type:RetVal_55 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_53 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacVrfyKey.data, &Crypto_CmacVrfyKey.length);
  Function call may change dynamic type:RetVal_48 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_59 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_57 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacVrfyKey);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K1, 16);
Determining dynamic type for call: RetVal_76 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_67, _88, ExpandedKeyAvailable_32, Crypto_CmacVrfyKey);
  Starting walk at: RetVal_76 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_67, _88, ExpandedKeyAvailable_32, Crypto_CmacVrfyKey);
  instance pointer: _88  Outer instance pointer: Job_46(D) offset: 64 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K1, 16);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_FinalBlock, _17, 16);
  Function call may change dynamic type:RetVal_62 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  Function call may change dynamic type:RetVal_55 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_53 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacVrfyKey.data, &Crypto_CmacVrfyKey.length);
  Function call may change dynamic type:RetVal_48 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_59 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_57 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacVrfyKey);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K1, 16);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K2, 16);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K2, 16);
  Function call may change dynamic type:TS_MemSet32 (_22, 0, _23);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_FinalBlock, _21, FinalBlockSize_66);
Determining dynamic type for call: _27 = Crypto_CompareMac (Job_46(D));
  Starting walk at: _27 = Crypto_CompareMac (Job_46(D));
  instance pointer: Job_46(D)  Outer instance pointer: Job_46(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_76 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_67, _88, ExpandedKeyAvailable_32, Crypto_CmacVrfyKey);
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K1, 16);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_FinalBlock, _17, 16);
  Function call may change dynamic type:RetVal_62 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  Function call may change dynamic type:RetVal_55 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_53 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacVrfyKey.data, &Crypto_CmacVrfyKey.length);
  Function call may change dynamic type:RetVal_48 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_59 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_57 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacVrfyKey);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K1, 16);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K2, 16);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K2, 16);
  Function call may change dynamic type:TS_MemSet32 (_22, 0, _23);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_FinalBlock, _21, FinalBlockSize_66);
  Function call may change dynamic type:RetVal_81 = Crypto_AL_AES_EncryptPreCalc (&Crypto_FinalBlock, &Crypto_LastEncryptedBlock, &OutputLengthPtr, _24, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_LastEncryptedBlock, 16);
  Function call may change dynamic type:RetVal_79 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_FinalBlock, 16, &Crypto_LastEncryptedBlock, &OutputLengthPtr, &Crypto_CmacVrfyKey);
Determining dynamic type for call: RetVal_7 = Crypto_CMACVrfyFinish (_1, _2, _3);
  Starting walk at: RetVal_7 = Crypto_CMACVrfyFinish (_1, _2, _3);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_7 = Crypto_CMACVrfyFinish (_1, _2, _3);
  Starting walk at: RetVal_7 = Crypto_CMACVrfyFinish (_1, _2, _3);
  instance pointer: _3  Outer instance pointer: _3 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_6 = Crypto_CMACVrfyUpdate (_1, _2);
  Starting walk at: RetVal_6 = Crypto_CMACVrfyUpdate (_1, _2);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_19 = Crypto_CMACVrfyStart (&Crypto_CMACVerifyConfig, &Key);
  Starting walk at: RetVal_19 = Crypto_CMACVrfyStart (&Crypto_CMACVerifyConfig, &Key);
  instance pointer: &Crypto_CMACVerifyConfig  Outer instance pointer: Crypto_CMACVerifyConfig offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_17 = Crypto_AL_KeyElementGet (_4, 1, &Key.data, &Key.length);
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_Reset ();
Determining dynamic type for call: RetVal_19 = Crypto_CMACVrfyStart (&Crypto_CMACVerifyConfig, &Key);
  Starting walk at: RetVal_19 = Crypto_CMACVrfyStart (&Crypto_CMACVerifyConfig, &Key);
  instance pointer: &Key  Outer instance pointer: Key offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_17 = Crypto_AL_KeyElementGet (_4, 1, &Key.data, &Key.length);
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_Reset ();
Determining dynamic type for call: Crypto_CMACGenMainFunction (Result_2(D), Busy_3(D));
  Starting walk at: Crypto_CMACGenMainFunction (Result_2(D), Busy_3(D));
  instance pointer: Result_2(D)  Outer instance pointer: Result_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACGenMainFunction (Result_2(D), Busy_3(D));
  Starting walk at: Crypto_CMACGenMainFunction (Result_2(D), Busy_3(D));
  instance pointer: Busy_3(D)  Outer instance pointer: Busy_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_K1, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_K1, 16);
  instance pointer: &Crypto_K1  Outer instance pointer: Crypto_K1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_58 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_54 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_52 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacGenKey.data, &Crypto_CmacGenKey.length);
  Function call may change dynamic type:RetVal_47 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_56 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacGenKey);
Determining dynamic type for call: Crypto_CMACCalcKx (&Crypto_K2, 16);
  Starting walk at: Crypto_CMACCalcKx (&Crypto_K2, 16);
  instance pointer: &Crypto_K2  Outer instance pointer: Crypto_K2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  Function call may change dynamic type:RetVal_61 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  Function call may change dynamic type:RetVal_54 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_52 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacGenKey.data, &Crypto_CmacGenKey.length);
  Function call may change dynamic type:RetVal_47 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_58 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_56 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacGenKey);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K1, 16);
Determining dynamic type for call: RetVal_75 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_66, _85, ExpandedKeyAvailable_33, Crypto_CmacGenKey);
  Starting walk at: RetVal_75 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_66, _85, ExpandedKeyAvailable_33, Crypto_CmacGenKey);
  instance pointer: _85  Outer instance pointer: Job_45(D) offset: 64 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K1, 16);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_FinalBlock, _17, 16);
  Function call may change dynamic type:RetVal_61 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  Function call may change dynamic type:RetVal_54 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  Function call may change dynamic type:RetVal_52 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacGenKey.data, &Crypto_CmacGenKey.length);
  Function call may change dynamic type:RetVal_47 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  Function call may change dynamic type:RetVal_58 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  Function call may change dynamic type:RetVal_56 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacGenKey);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K1, 16);
  Function call may change dynamic type:Crypto_CMACCalcKx (&Crypto_K2, 16);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  Function call may change dynamic type:Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K2, 16);
  Function call may change dynamic type:TS_MemSet32 (_22, 0, _23);
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_FinalBlock, _21, FinalBlockSize_65);
Determining dynamic type for call: RetVal_6 = Crypto_CMACGenFinish (_1, _2, 1);
  Starting walk at: RetVal_6 = Crypto_CMACGenFinish (_1, _2, 1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_6 = Crypto_CMACGenFinish (_1, _2, 1);
  Starting walk at: RetVal_6 = Crypto_CMACGenFinish (_1, _2, 1);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_6 = Crypto_CMACGenUpdate (_1, _2);
  Starting walk at: RetVal_6 = Crypto_CMACGenUpdate (_1, _2);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_19 = Crypto_CMACGenStart (&Crypto_CMACGenerateConfig, &Key);
  Starting walk at: RetVal_19 = Crypto_CMACGenStart (&Crypto_CMACGenerateConfig, &Key);
  instance pointer: &Crypto_CMACGenerateConfig  Outer instance pointer: Crypto_CMACGenerateConfig offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_17 = Crypto_AL_KeyElementGet (_4, 1, &Key.data, &Key.length);
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_Reset ();
Determining dynamic type for call: RetVal_19 = Crypto_CMACGenStart (&Crypto_CMACGenerateConfig, &Key);
  Starting walk at: RetVal_19 = Crypto_CMACGenStart (&Crypto_CMACGenerateConfig, &Key);
  instance pointer: &Key  Outer instance pointer: Key offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_17 = Crypto_AL_KeyElementGet (_4, 1, &Key.data, &Key.length);
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_Reset ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_CipherMiddleBlocks.isra.0/93:
  Jump functions of caller  Crypto_CMACVrfyCallback.part.0/92:
    callsite  Crypto_CMACVrfyCallback.part.0/92 -> Crypto_CMACVrfyStateUpdCpFromInput/61 : 
  Jump functions of caller  Crypto_CMACGenCallback.part.0/91:
    callsite  Crypto_CMACGenCallback.part.0/91 -> Crypto_CMACGenStateUpdCpFromInput/43 : 
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89:
  Jump functions of caller  Crypto_AL_AESPreCalculateKeySchedule/88:
  Jump functions of caller  Crypto_AL_FindKeyElement/86:
  Jump functions of caller  Crypto_MemCmp_Sec/85:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_Finish/84:
  Jump functions of caller  Crypto_CheckSkipMain/83:
  Jump functions of caller  TS_MemSet32/82:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_SyncSingleCall/81:
  Jump functions of caller  Crypto_AL_AES_EncryptPreCalc/80:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_MainFunction/79:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_Update/78:
  Jump functions of caller  Crypto_CommonXOR/77:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_Start/76:
  Jump functions of caller  TS_MemCpy32/75:
  Jump functions of caller  TS_MemBZero32/74:
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Reset/73:
  Jump functions of caller  CryIf_CallbackNotification/72:
  Jump functions of caller  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71:
  Jump functions of caller  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69:
  Jump functions of caller  Crypto_AL_KeyElementGet/68:
  Jump functions of caller  Crypto_CMACVrfyStateFinReqSbFin/66:
  Jump functions of caller  Crypto_CMACVrfyStateFinCompare/65:
    callsite  Crypto_CMACVrfyStateFinCompare/65 -> Crypto_CMACVrfyStateFinReqSbFin/66 : 
  Jump functions of caller  Crypto_CMACVrfyStateFinReqSbUpd/64:
  Jump functions of caller  Crypto_CMACVrfyStateFinPadLastBlock/63:
  Jump functions of caller  Crypto_CMACVrfyStateUpdReqSbUpd/62:
  Jump functions of caller  Crypto_CMACVrfyStateUpdCpFromInput/61:
  Jump functions of caller  Crypto_CMACVrfyStateStartK1AndK2/60:
    callsite  Crypto_CMACVrfyStateStartK1AndK2/60 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_CMACVrfyContext.K2
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Crypto_CMACVrfyStateStartK1AndK2/60 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_CMACVrfyContext.K1
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_CMACVrfyStateStartReqSBUpd/59:
  Jump functions of caller  Crypto_CMACVrfyStateStartReqSBSt/58:
  Jump functions of caller  Crypto_CMACVrfyCallback/57:
    callsite  Crypto_CMACVrfyCallback/57 -> Crypto_CMACVrfyCallback.part.0/92 : 
    callsite  Crypto_CMACVrfyCallback/57 -> Crypto_CMACVrfyStateStartK1AndK2/60 : 
  Jump functions of caller  Crypto_CMACVrfyCallbackCancel/56:
    callsite  Crypto_CMACVrfyCallbackCancel/56 -> Crypto_AL_MACVERIFY_AES_CMAC_Finish/24 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_CMACVrfyCallbackCancel/56 -> Crypto_AL_MACVERIFY_AES_CMAC_Update/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _26 (_27, _28);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (_8, 12);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_CMACVrfyMainFunction/55:
    callsite  Crypto_CMACVrfyMainFunction/55 -> Crypto_CMACVrfyCallbackCancel/56 : 
    callsite  Crypto_CMACVrfyMainFunction/55 -> Crypto_CMACVrfyStateFinCompare/65 : 
    callsite  Crypto_CMACVrfyMainFunction/55 -> Crypto_CMACVrfyStateUpdReqSbUpd/62 : 
    callsite  Crypto_CMACVrfyMainFunction/55 -> Crypto_CMACVrfyStateUpdCpFromInput/61 : 
  Jump functions of caller  Crypto_CMACVrfyFinish/54:
    callsite  Crypto_CMACVrfyFinish/54 -> Crypto_CMACVrfyStateFinReqSbUpd/64 : 
    callsite  Crypto_CMACVrfyFinish/54 -> Crypto_CMACVrfyStateFinPadLastBlock/63 : 
  Jump functions of caller  Crypto_CMACVrfyUpdate/53:
  Jump functions of caller  Crypto_CMACVrfyStart/52:
    callsite  Crypto_CMACVrfyStart/52 -> Crypto_CMACVrfyStateStartReqSBUpd/59 : 
    callsite  Crypto_CMACVrfyStart/52 -> Crypto_CMACVrfyStateStartReqSBSt/58 : 
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 -> Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 -> Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 : 
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Reset/50:
  Jump functions of caller  Crypto_CompareMac/49:
  Jump functions of caller  Crypto_CMACGenStateFinReqSbFin/48:
  Jump functions of caller  Crypto_CMACGenStateFinCpToResult/47:
    callsite  Crypto_CMACGenStateFinCpToResult/47 -> Crypto_CMACGenStateFinReqSbFin/48 : 
  Jump functions of caller  Crypto_CMACGenStateFinReqSbUpd/46:
  Jump functions of caller  Crypto_CMACGenStateFinPadLastBlock/45:
  Jump functions of caller  Crypto_CMACGenStateUpdReqSbUpd/44:
  Jump functions of caller  Crypto_CMACGenStateUpdCpFromInput/43:
  Jump functions of caller  Crypto_CMACGenStateStartK1AndK2/42:
    callsite  Crypto_CMACGenStateStartK1AndK2/42 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_CMACGenContext.K2
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Crypto_CMACGenStateStartK1AndK2/42 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_CMACGenContext.K1
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_CMACGenStateStartReqSBUpd/41:
  Jump functions of caller  Crypto_CMACGenStateStartReqSBSt/40:
  Jump functions of caller  Crypto_CMACGenCallback/39:
    callsite  Crypto_CMACGenCallback/39 -> Crypto_CMACGenCallback.part.0/91 : 
    callsite  Crypto_CMACGenCallback/39 -> Crypto_CMACGenStateStartK1AndK2/42 : 
  Jump functions of caller  Crypto_CMACGenCallbackCancel/38:
    callsite  Crypto_CMACGenCallbackCancel/38 -> Crypto_AL_MACGENERATE_AES_CMAC_Finish/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_CMACGenCallbackCancel/38 -> Crypto_AL_MACGENERATE_AES_CMAC_Update/17 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _25 (_26, _27);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (_8, 12);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_CMACGenMainFunction/37:
    callsite  Crypto_CMACGenMainFunction/37 -> Crypto_CMACGenCallbackCancel/38 : 
    callsite  Crypto_CMACGenMainFunction/37 -> Crypto_CMACGenStateFinCpToResult/47 : 
    callsite  Crypto_CMACGenMainFunction/37 -> Crypto_CMACGenStateUpdReqSbUpd/44 : 
    callsite  Crypto_CMACGenMainFunction/37 -> Crypto_CMACGenStateUpdCpFromInput/43 : 
  Jump functions of caller  Crypto_CMACGenFinish/36:
    callsite  Crypto_CMACGenFinish/36 -> Crypto_CMACGenStateFinReqSbUpd/46 : 
    callsite  Crypto_CMACGenFinish/36 -> Crypto_CMACGenStateFinPadLastBlock/45 : 
  Jump functions of caller  Crypto_CMACGenUpdate/35:
  Jump functions of caller  Crypto_CMACGenStart/34:
    callsite  Crypto_CMACGenStart/34 -> Crypto_CMACGenStateStartReqSBUpd/41 : 
    callsite  Crypto_CMACGenStart/34 -> Crypto_CMACGenStateStartReqSBSt/40 : 
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 -> Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 -> Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 : 
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Reset/32:
  Jump functions of caller  Crypto_CMACCalcKx/30:
    callsite  Crypto_CMACCalcKx/30 -> Crypto_CMACShiftBlockOneBitLeft/29 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_CMACShiftBlockOneBitLeft/29:
  Jump functions of caller  Crypto_AL_AESCMAC_PrecalculateKeys/28:
    callsite  Crypto_AL_AESCMAC_PrecalculateKeys/28 -> Crypto_CMACCalcKx/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Crypto_AL_AESCMAC_PrecalculateKeys/28 -> Crypto_CMACCalcKx/30 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/27:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/27 -> Crypto_CMACVrfyMainFunction/55 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26 -> Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 : 
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 -> Crypto_CompareMac/49 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 -> Crypto_CipherMiddleBlocks.isra.0/93 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1fffffff
         VR  [0, 268435456]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 3: UNKNOWN
         Unknown bits
         Unknown VR
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_K2
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_K1
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Finish/24:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_Finish/24 -> Crypto_CMACVrfyFinish/54 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Update/23:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_Update/23 -> Crypto_CMACVrfyUpdate/53 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Start/22:
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_Start/22 -> Crypto_CMACVrfyStart/52 : 
       param 0: CONST: &Crypto_CMACVerifyConfig
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Crypto_AL_MACVERIFY_AES_CMAC_Start/22 -> Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 : 
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/21:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/21 -> Crypto_CMACGenMainFunction/37 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20 -> Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 : 
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 -> Crypto_CipherMiddleBlocks.isra.0/93 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x1fffffff
         VR  [0, 268435456]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 3: UNKNOWN
         Unknown bits
         Unknown VR
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_K2
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 -> Crypto_CMACCalcKx/30 : 
       param 0: CONST: &Crypto_K1
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Finish/18:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_Finish/18 -> Crypto_CMACGenFinish/36 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Update/17:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_Update/17 -> Crypto_CMACGenUpdate/35 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Start/16:
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_Start/16 -> Crypto_CMACGenStart/34 : 
       param 0: CONST: &Crypto_CMACGenerateConfig
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Crypto_AL_MACGENERATE_AES_CMAC_Start/16 -> Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 : 

 Propagating constants:

Not considering Crypto_CMACVrfyCallback for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_CallBack for cloning; -fipa-cp-clone disabled.
Not considering Crypto_CMACGenCallback for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_CallBack for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_AESCMAC_PrecalculateKeys for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_Finish for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_Update for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACVERIFY_AES_CMAC_Start for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_Finish for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_Update for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_MACGENERATE_AES_CMAC_Start for cloning; -fipa-cp-clone disabled.

overall_size: 1657, max_new_size: 11001
 - context independent values, size: 20, time_benefit: 2.000000
 - context independent values, size: 23, time_benefit: 2.000000
 - context independent values, size: 8, time_benefit: 2.000000
 - context independent values, size: 179, time_benefit: 1.000000
 - context independent values, size: 10, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 23, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 2.000000
 - context independent values, size: 173, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 9, time_benefit: 1.000000
 - context independent values, size: 26, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 24, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Crypto_CipherMiddleBlocks.isra.0/93:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1fffffff
         uint32 [0, 268435456]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const uint8 * const * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_CMACVrfyCallback.part.0/92:
  Node: Crypto_CMACGenCallback.part.0/91:
  Node: Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89:
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
  Node: Crypto_CMACVrfyStateFinReqSbFin/66:
  Node: Crypto_CMACVrfyStateFinCompare/65:
  Node: Crypto_CMACVrfyStateFinReqSbUpd/64:
  Node: Crypto_CMACVrfyStateFinPadLastBlock/63:
  Node: Crypto_CMACVrfyStateUpdReqSbUpd/62:
  Node: Crypto_CMACVrfyStateUpdCpFromInput/61:
  Node: Crypto_CMACVrfyStateStartK1AndK2/60:
  Node: Crypto_CMACVrfyStateStartReqSBUpd/59:
  Node: Crypto_CMACVrfyStateStartReqSBSt/58:
  Node: Crypto_CMACVrfyCallback/57:
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
  Node: Crypto_CMACVrfyCallbackCancel/56:
  Node: Crypto_CMACVrfyMainFunction/55:
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
  Node: Crypto_CMACVrfyFinish/54:
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
  Node: Crypto_CMACVrfyUpdate/53:
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
  Node: Crypto_CMACVrfyStart/52:
    param [0]: &Crypto_CMACVerifyConfig [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const void * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Crypto_SymKeyType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51:
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
  Node: Crypto_AL_MACVERIFY_AES_CMAC_Reset/50:
  Node: Crypto_CompareMac/49:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_CMACGenStateFinReqSbFin/48:
  Node: Crypto_CMACGenStateFinCpToResult/47:
  Node: Crypto_CMACGenStateFinReqSbUpd/46:
  Node: Crypto_CMACGenStateFinPadLastBlock/45:
  Node: Crypto_CMACGenStateUpdReqSbUpd/44:
  Node: Crypto_CMACGenStateUpdCpFromInput/43:
  Node: Crypto_CMACGenStateStartK1AndK2/42:
  Node: Crypto_CMACGenStateStartReqSBUpd/41:
  Node: Crypto_CMACGenStateStartReqSBSt/40:
  Node: Crypto_CMACGenCallback/39:
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
  Node: Crypto_CMACGenCallbackCancel/38:
  Node: Crypto_CMACGenMainFunction/37:
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
  Node: Crypto_CMACGenFinish/36:
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
    param [2]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         boolean [1, 1]
        AGGS VARIABLE
  Node: Crypto_CMACGenUpdate/35:
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
  Node: Crypto_CMACGenStart/34:
    param [0]: &Crypto_CMACGenerateConfig [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const void * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Crypto_SymKeyType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_Reset/32:
  Node: Crypto_CMACCalcKx/30:
    param [0]: VARIABLE
               &Crypto_K1 [loc_time: 2, loc_size: 12, prop_time: 0, prop_size: 0]
               &Crypto_K2 [loc_time: 2, loc_size: 12, prop_time: 0, prop_size: 0]
               &Crypto_CMACGenContext.K1 [loc_time: 2, loc_size: 12, prop_time: 0, prop_size: 0]
               &Crypto_CMACGenContext.K2 [loc_time: 2, loc_size: 12, prop_time: 0, prop_size: 0]
               &Crypto_CMACVrfyContext.K1 [loc_time: 2, loc_size: 12, prop_time: 0, prop_size: 0]
               &Crypto_CMACVrfyContext.K2 [loc_time: 2, loc_size: 12, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 16 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x10, mask = 0x0
         uint32 [16, 16]
        AGGS VARIABLE
  Node: Crypto_CMACShiftBlockOneBitLeft/29:
    param [0]: VARIABLE
               &Crypto_CMACVrfyContext.K2 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
               &Crypto_CMACVrfyContext.K1 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
               &Crypto_CMACGenContext.K2 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
               &Crypto_CMACGenContext.K1 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
               &Crypto_K2 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
               &Crypto_K1 [loc_time: 1, loc_size: 18, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_AL_AESCMAC_PrecalculateKeys/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/27:
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
  Node: Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26:
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
  Node: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25:
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
  Node: Crypto_AL_MACVERIFY_AES_CMAC_Finish/24:
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
  Node: Crypto_AL_MACVERIFY_AES_CMAC_Update/23:
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
  Node: Crypto_AL_MACVERIFY_AES_CMAC_Start/22:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/21:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_Finish/18:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_Update/17:
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
  Node: Crypto_AL_MACGENERATE_AES_CMAC_Start/16:
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

IPA decision stage:

 - Creating a specialized node of Crypto_CMACVrfyStart/52 for all known contexts.
    replacing param #0 CfgPtr with const &Crypto_CMACVerifyConfig
 - Creating a specialized node of Crypto_CMACCalcKx/30 for all known contexts.
    replacing param #1 Length with const 16
 - Creating a specialized node of Crypto_CMACGenFinish/36 for all known contexts.
    replacing param #2 TruncationIsAllowed with const 1
 - Creating a specialized node of Crypto_CMACGenStart/34 for all known contexts.
    replacing param #0 CfgPtr with const &Crypto_CMACGenerateConfig
Propagated bits info for function Crypto_CMACGenStart.constprop/97:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_CMACGenFinish.constprop/96:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Crypto_CMACCalcKx.constprop/95:
 param 1: value = 0x10, mask = 0x0
Propagated bits info for function Crypto_CMACVrfyStart.constprop/94:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_CipherMiddleBlocks.isra.0/93:
 param 0: value = 0x0, mask = 0x1fffffff
 param 2: value = 0x0, mask = 0x1
Propagated bits info for function Crypto_CMACVrfyStart/52:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_CMACGenFinish/36:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Crypto_CMACGenStart/34:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_CMACCalcKx/30:
 param 1: value = 0x10, mask = 0x0

IPA constant propagation end

Reclaiming functions: Crypto_CMACVrfyStart/52 Crypto_CMACGenFinish/36 Crypto_CMACGenStart/34 Crypto_CMACCalcKx/30
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_CMACGenStart.constprop.0/97 (Crypto_CMACGenStart.constprop) @0705d380
  Type: function definition analyzed
  Visibility:
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenerateConfig/13 (addr)
  Referring: 
  Clone of Crypto_CMACGenStart/34
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (354334802 (estimated locally),0.33 per call) 
  Calls: TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartReqSBSt/40 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartReqSBUpd/41 (354334802 (estimated locally),0.33 per call) 
Crypto_CMACGenFinish.constprop.0/96 (Crypto_CMACGenFinish.constprop) @0705d1c0
  Type: function definition analyzed
  Visibility:
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)
  Referring: 
  Clone of Crypto_CMACGenFinish/36
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Crypto_AL_MACGENERATE_AES_CMAC_Finish/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_CMACGenStateFinPadLastBlock/45 (14213153 (estimated locally),0.01 per call) Crypto_CMACGenStateFinReqSbUpd/46 (14213153 (estimated locally),0.01 per call) 
Crypto_CMACCalcKx.constprop.0/95 (Crypto_CMACCalcKx.constprop) @06fe6ee0
  Type: function definition analyzed
  Visibility:
  References: Crypto_CMACSubKeyGenerationConstant/0 (addr)
  Referring: 
  Clone of Crypto_CMACCalcKx/30
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Crypto_CMACGenStateStartK1AndK2/42 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartK1AndK2/42 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartK1AndK2/60 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartK1AndK2/60 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (5156634 (estimated locally),0.08 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (4572216 (estimated locally),0.07 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (5156634 (estimated locally),0.08 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (4572216 (estimated locally),0.07 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (24383904 (estimated locally),0.02 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (4935302 (estimated locally),0.00 per call) 
  Calls: Crypto_CMACShiftBlockOneBitLeft/29 (1073741824 (estimated locally),1.00 per call) Crypto_CommonXOR/77 (273804165 (estimated locally),0.25 per call) 
Crypto_CMACVrfyStart.constprop.0/94 (Crypto_CMACVrfyStart.constprop) @06d49a80
  Type: function definition analyzed
  Visibility:
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVerifyConfig/15 (addr)
  Referring: 
  Clone of Crypto_CMACVrfyStart/52
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (354334802 (estimated locally),0.33 per call) 
  Calls: TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartReqSBSt/58 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartReqSBUpd/59 (354334802 (estimated locally),0.33 per call) 
Crypto_CipherMiddleBlocks.isra.0/93 (Crypto_CipherMiddleBlocks.isra.0) @06fc9380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_Block/6 (addr)Crypto_Block/6 (addr)Crypto_LastEncryptedBlock/7 (addr)Crypto_Block/6 (addr)Crypto_LastEncryptedBlock/7 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_Block/6 (addr)Crypto_LastEncryptedBlock/7 (addr)
  Referring: 
  Availability: local
  Function flags: count:194683953 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (6875513 (estimated locally),0.11 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (6875513 (estimated locally),0.11 per call) 
  Calls: Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (669692776 (estimated locally),3.44 per call) Crypto_AL_AES_EncryptPreCalc/80 (344993248 (estimated locally),1.77 per call) Crypto_CommonXOR/77 (1014686025 (estimated locally),5.21 per call) TS_MemCpy32/75 (1014686025 (estimated locally),5.21 per call) 
Crypto_CMACVrfyCallback.part.0/92 (Crypto_CMACVrfyCallback.part.0) @06fc9b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_CMACVrfyCallback/57 (214748368 (estimated locally),0.20 per call) 
  Calls: Crypto_CMACVrfyStateUpdCpFromInput/61 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenCallback.part.0/91 (Crypto_CMACGenCallback.part.0) @06fc9540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_CMACGenCallback/39 (178921184 (estimated locally),0.17 per call) 
  Calls: Crypto_CMACGenStateUpdCpFromInput/43 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90 (Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0) @06e98c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_CMACVrfyContext/14 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (268435457 (estimated locally),0.25 per call) 
  Calls: CryIf_CallbackNotification/72 (524845004 (estimated locally),0.49 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89 (Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0) @04de58c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_CMACGenContext/12 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (268435457 (estimated locally),0.25 per call) 
  Calls: CryIf_CallbackNotification/72 (524845004 (estimated locally),0.49 per call) 
Crypto_AL_AESPreCalculateKeySchedule/88 (Crypto_AL_AESPreCalculateKeySchedule) @06e31c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_AESCMAC_PrecalculateKeys/28 (15982271 (estimated locally),0.01 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (20037953 (estimated locally),0.02 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (25122810 (estimated locally),0.02 per call) 
  Calls: 
Crypto_AL_Keys_Data/87 (Crypto_AL_Keys_Data) @06e41558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)
  Availability: not_available
  Varpool flags:
Crypto_AL_FindKeyElement/86 (Crypto_AL_FindKeyElement) @06e31a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_AESCMAC_PrecalculateKeys/28 (1073741824 (estimated locally),1.00 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (24383904 (estimated locally),0.02 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (1073741823 (estimated locally),1.00 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Crypto_MemCmp_Sec/85 (Crypto_MemCmp_Sec) @06e08b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyStateFinCompare/65 (472446400 (estimated locally),1.00 per call) Crypto_CompareMac/49 (472446400 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AES_Helper_Encrypt_Finish/84 (Crypto_AES_Helper_Encrypt_Finish) @04de57e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyStateFinReqSbFin/66 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateFinReqSbFin/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_CheckSkipMain/83 (Crypto_CheckSkipMain) @04de52a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyMainFunction/55 (1073634462 (estimated locally),1.00 per call) Crypto_CMACGenMainFunction/37 (1073634462 (estimated locally),1.00 per call) 
  Calls: 
TS_MemSet32/82 (TS_MemSet32) @04dd28c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (5355337 (estimated locally),0.08 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (5355337 (estimated locally),0.08 per call) 
  Calls: 
Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (Crypto_AES_Helper_Encrypt_SyncSingleCall) @04dd2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_AESCMAC_PrecalculateKeys/28 (73890617 (estimated locally),0.07 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (1497487 (estimated locally),0.02 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (10313269 (estimated locally),0.16 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (1497487 (estimated locally),0.02 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (10313269 (estimated locally),0.16 per call) Crypto_CipherMiddleBlocks.isra.0/93 (669692776 (estimated locally),3.44 per call) 
  Calls: 
Crypto_AL_AES_EncryptPreCalc/80 (Crypto_AL_AES_EncryptPreCalc) @04dd2000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (771433 (estimated locally),0.01 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (5312896 (estimated locally),0.08 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (771433 (estimated locally),0.01 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (5312896 (estimated locally),0.08 per call) Crypto_CipherMiddleBlocks.isra.0/93 (344993248 (estimated locally),1.77 per call) 
  Calls: 
Crypto_AES_Helper_Encrypt_MainFunction/79 (Crypto_AES_Helper_Encrypt_MainFunction) @04dd2380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyMainFunction/55 (89487432 (estimated locally),0.08 per call) Crypto_CMACGenMainFunction/37 (89487432 (estimated locally),0.08 per call) Crypto_CMACVrfyStateFinReqSbFin/66 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateFinReqSbFin/48 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateUpdReqSbUpd/62 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartReqSBUpd/59 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateUpdReqSbUpd/44 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartReqSBUpd/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AES_Helper_Encrypt_Update/78 (Crypto_AES_Helper_Encrypt_Update) @04dd21c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyStateUpdReqSbUpd/62 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartReqSBUpd/59 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateUpdReqSbUpd/44 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartReqSBUpd/41 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateFinReqSbUpd/64 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateFinReqSbUpd/46 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_CommonXOR/77 (Crypto_CommonXOR) @04dcbee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACCalcKx.constprop/95 (273804165 (estimated locally),0.25 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (2268919 (estimated locally),0.04 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (5355337 (estimated locally),0.08 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (1520176 (estimated locally),0.02 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (2268919 (estimated locally),0.04 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (5355337 (estimated locally),0.08 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (1520176 (estimated locally),0.02 per call) Crypto_CipherMiddleBlocks.isra.0/93 (1014686025 (estimated locally),5.21 per call) Crypto_CMACVrfyStateFinPadLastBlock/63 (148083752 (estimated locally),1.00 per call) Crypto_CMACVrfyStateFinPadLastBlock/63 (118111601 (estimated locally),0.80 per call) Crypto_CMACVrfyStateFinPadLastBlock/63 (29972151 (estimated locally),0.20 per call) Crypto_CMACVrfyStateUpdCpFromInput/61 (536870913 (estimated locally),0.50 per call) Crypto_CMACGenStateFinPadLastBlock/45 (148083752 (estimated locally),1.00 per call) Crypto_CMACGenStateFinPadLastBlock/45 (118111601 (estimated locally),0.80 per call) Crypto_CMACGenStateFinPadLastBlock/45 (29972151 (estimated locally),0.20 per call) Crypto_CMACGenStateUpdCpFromInput/43 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Crypto_AES_Helper_Encrypt_Start/76 (Crypto_AES_Helper_Encrypt_Start) @04dcb8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyStateStartReqSBSt/58 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartReqSBSt/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_MemCpy32/75 (TS_MemCpy32) @04dcb620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACGenStart.constprop/97 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStart.constprop/94 (1073741824 (estimated locally),1.00 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (4935302 (estimated locally),0.00 per call) Crypto_AL_AESCMAC_PrecalculateKeys/28 (73890617 (estimated locally),0.07 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (5355337 (estimated locally),0.08 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (1520176 (estimated locally),0.02 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (4572216 (estimated locally),0.07 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (8433962 (estimated locally),0.13 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (5355337 (estimated locally),0.08 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (1520176 (estimated locally),0.02 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (4572216 (estimated locally),0.07 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (8433962 (estimated locally),0.13 per call) Crypto_CMACGenStateFinCpToResult/47 (1073741824 (estimated locally),1.00 per call) Crypto_CipherMiddleBlocks.isra.0/93 (1014686025 (estimated locally),5.21 per call) Crypto_CMACVrfyStateUpdCpFromInput/61 (536870913 (estimated locally),0.50 per call) Crypto_CMACVrfyStateUpdCpFromInput/61 (536870913 (estimated locally),0.50 per call) Crypto_CMACGenStateUpdCpFromInput/43 (536870913 (estimated locally),0.50 per call) Crypto_CMACGenStateUpdCpFromInput/43 (536870913 (estimated locally),0.50 per call) Crypto_CMACVrfyStateStartK1AndK2/60 (1073741824 (estimated locally),1.00 per call) Crypto_CMACVrfyStateStartK1AndK2/60 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartK1AndK2/42 (1073741824 (estimated locally),1.00 per call) Crypto_CMACGenStateStartK1AndK2/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_MemBZero32/74 (TS_MemBZero32) @04dcb460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_ENCRYPT_AES_ECB_Reset/73 (Crypto_AL_ENCRYPT_AES_ECB_Reset) @04dcb380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CryIf_CallbackNotification/72 (CryIf_CallbackNotification) @04dcb1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (357019157 (estimated locally),0.33 per call) Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90 (524845004 (estimated locally),0.49 per call) Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (357019157 (estimated locally),0.33 per call) Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89 (524845004 (estimated locally),0.49 per call) 
  Calls: 
SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @04dcb0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyCallbackCancel/56 (136642881 (estimated locally),0.13 per call) Crypto_CMACGenCallbackCancel/38 (136642881 (estimated locally),0.13 per call) Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (357019157 (estimated locally),0.33 per call) Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (357019157 (estimated locally),0.33 per call) Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_DriverObjects/70 (Crypto_DriverObjects) @06df5630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (write)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (write)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (write)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (write)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (write)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (write)Crypto_CMACGenCallbackCancel/38 (write)Crypto_CMACGenCallbackCancel/38 (write)Crypto_CMACGenCallbackCancel/38 (write)Crypto_CMACVrfyCallbackCancel/56 (write)Crypto_CMACVrfyCallbackCancel/56 (write)Crypto_CMACVrfyCallbackCancel/56 (write)
  Availability: not_available
  Varpool flags:
SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06deeee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CMACVrfyCallbackCancel/56 (136642881 (estimated locally),0.13 per call) Crypto_CMACGenCallbackCancel/38 (136642881 (estimated locally),0.13 per call) Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (357019157 (estimated locally),0.33 per call) Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (357019157 (estimated locally),0.33 per call) Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyElementGet/68 (Crypto_AL_KeyElementGet) @06deec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (6875513 (estimated locally),0.11 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (20834886 (estimated locally),0.33 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (63136019 (estimated locally),1.00 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (63136019 (estimated locally),1.00 per call) Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (6875513 (estimated locally),0.11 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (20834886 (estimated locally),0.33 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (63136019 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (63136019 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
*.LC0/67 (*.LC0) @06d07ea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (read)Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CMACVrfyStateFinReqSbFin/66 (Crypto_CMACVrfyStateFinReqSbFin) @06deea80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyStateFinCompare/65 (472446401 (estimated locally),1.00 per call) 
  Calls: Crypto_AES_Helper_Encrypt_MainFunction/79 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_Finish/84 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVrfyStateFinCompare/65 (Crypto_CMACVrfyStateFinCompare) @06dee8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)
  Referring: 
  Availability: local
  Function flags: count:472446400 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyMainFunction/55 (89487432 (estimated locally),0.08 per call) 
  Calls: Crypto_CMACVrfyStateFinReqSbFin/66 (472446401 (estimated locally),1.00 per call) Crypto_MemCmp_Sec/85 (472446400 (estimated locally),1.00 per call) 
Crypto_CMACVrfyStateFinReqSbUpd/64 (Crypto_CMACVrfyStateFinReqSbUpd) @06dee700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyFinish/54 (10847347 (estimated locally),0.01 per call) 
  Calls: Crypto_AES_Helper_Encrypt_Update/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVrfyStateFinPadLastBlock/63 (Crypto_CMACVrfyStateFinPadLastBlock) @06dee540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: local
  Function flags: count:148083751 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyFinish/54 (10847347 (estimated locally),0.01 per call) 
  Calls: Crypto_CommonXOR/77 (148083752 (estimated locally),1.00 per call) Crypto_CommonXOR/77 (118111601 (estimated locally),0.80 per call) Crypto_CommonXOR/77 (29972151 (estimated locally),0.20 per call) 
Crypto_CMACVrfyStateUpdReqSbUpd/62 (Crypto_CMACVrfyStateUpdReqSbUpd) @06dee380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyMainFunction/55 (89487432 (estimated locally),0.08 per call) 
  Calls: Crypto_AES_Helper_Encrypt_MainFunction/79 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_Update/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVrfyStateUpdCpFromInput/61 (Crypto_CMACVrfyStateUpdCpFromInput) @06dee1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyMainFunction/55 (89487432 (estimated locally),0.08 per call) Crypto_CMACVrfyCallback.part.0/92 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_MemCpy32/75 (536870913 (estimated locally),0.50 per call) Crypto_CommonXOR/77 (536870913 (estimated locally),0.50 per call) TS_MemCpy32/75 (536870913 (estimated locally),0.50 per call) 
Crypto_CMACVrfyStateStartK1AndK2/60 (Crypto_CMACVrfyStateStartK1AndK2) @06dee000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACZeroBlock/1 (addr)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyCallback/57 (214748364 (estimated locally),0.20 per call) 
  Calls: TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) Crypto_CMACCalcKx.constprop/95 (1073741824 (estimated locally),1.00 per call) TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) Crypto_CMACCalcKx.constprop/95 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVrfyStateStartReqSBUpd/59 (Crypto_CMACVrfyStateStartReqSBUpd) @06d7be00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACZeroBlock/1 (addr)Crypto_CMACVrfyContext/14 (addr)Crypto_CMACVrfyContext/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyStart.constprop/94 (354334802 (estimated locally),0.33 per call) 
  Calls: Crypto_AES_Helper_Encrypt_MainFunction/79 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_Update/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVrfyStateStartReqSBSt/58 (Crypto_CMACVrfyStateStartReqSBSt) @06d7bc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyCallback/57 (addr)Crypto_CMACVrfyContext/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyStart.constprop/94 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_AES_Helper_Encrypt_Start/76 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVrfyCallback/57 (Crypto_CMACVrfyCallback) @06d7ba80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)
  Referring: Crypto_CMACVrfyStateStartReqSBSt/58 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CMACVrfyCallback.part.0/92 (214748368 (estimated locally),0.20 per call) Crypto_CMACVrfyStateStartK1AndK2/60 (214748364 (estimated locally),0.20 per call) 
Crypto_CMACVrfyCallbackCancel/56 (Crypto_CMACVrfyCallbackCancel) @06d7b8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACVrfyMainFunction/55 (536924595 (estimated locally),0.50 per call) 
  Calls: Crypto_AL_MACVERIFY_AES_CMAC_Finish/24 (7816995 (estimated locally),0.01 per call) Crypto_AL_MACVERIFY_AES_CMAC_Update/23 (13762275 (estimated locally),0.01 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (136642881 (estimated locally),0.13 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (136642881 (estimated locally),0.13 per call) 
   Indirect call(240947665 (estimated locally),0.22 per call) 
   Indirect call(365072220 (estimated locally),0.34 per call) 
Crypto_CMACVrfyMainFunction/55 (Crypto_CMACVrfyMainFunction) @06d7b700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)
  Referring: 
  Availability: local
  Function flags: count:1073634462 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_CMACVrfyCallbackCancel/56 (536924595 (estimated locally),0.50 per call) Crypto_AES_Helper_Encrypt_MainFunction/79 (89487432 (estimated locally),0.08 per call) Crypto_CMACVrfyStateFinCompare/65 (89487432 (estimated locally),0.08 per call) Crypto_CMACVrfyStateUpdReqSbUpd/62 (89487432 (estimated locally),0.08 per call) Crypto_CMACVrfyStateUpdCpFromInput/61 (89487432 (estimated locally),0.08 per call) Crypto_CheckSkipMain/83 (1073634462 (estimated locally),1.00 per call) 
Crypto_CMACVrfyFinish/54 (Crypto_CMACVrfyFinish) @06d7b540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_Finish/24 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_CMACVrfyStateFinReqSbUpd/64 (10847347 (estimated locally),0.01 per call) Crypto_CMACVrfyStateFinPadLastBlock/63 (10847347 (estimated locally),0.01 per call) 
Crypto_CMACVrfyUpdate/53 (Crypto_CMACVrfyUpdate) @06d7b380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_Update/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_CMACVrfyStart/52 (Crypto_CMACVrfyStart) @06d7b1c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (Crypto_AL_MACVERIFY_AES_CMAC_CallBack) @06d7b000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)Crypto_CMACVrfyContext/14 (read)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_CMACVrfyContext/14 (read)
  Referring: Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90 (268435457 (estimated locally),0.25 per call) Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (357019157 (estimated locally),0.33 per call) CryIf_CallbackNotification/72 (357019157 (estimated locally),0.33 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (357019157 (estimated locally),0.33 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (357019157 (estimated locally),0.33 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (Crypto_AL_MACVERIFY_AES_CMAC_Reset) @06d73e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACVrfyContext/14 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26 (343919506 (estimated locally),0.32 per call) Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (357019157 (estimated locally),0.33 per call) 
  Calls: SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (1073741824 (estimated locally),1.00 per call) TS_MemBZero32/74 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (1073741824 (estimated locally),1.00 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/73 (1073741824 (estimated locally),1.00 per call) 
Crypto_CompareMac/49 (Crypto_CompareMac) @06d73b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_LastEncryptedBlock/7 (addr)Crypto_LastEncryptedBlock/7 (read)
  Referring: 
  Availability: local
  Function flags: count:472446400 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (1134460 (estimated locally),0.02 per call) 
  Calls: Crypto_MemCmp_Sec/85 (472446400 (estimated locally),1.00 per call) 
Crypto_CMACGenStateFinReqSbFin/48 (Crypto_CMACGenStateFinReqSbFin) @06d739a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenStateFinCpToResult/47 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_AES_Helper_Encrypt_MainFunction/79 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_Finish/84 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenStateFinCpToResult/47 (Crypto_CMACGenStateFinCpToResult) @06d737e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenMainFunction/37 (89487432 (estimated locally),0.08 per call) 
  Calls: Crypto_CMACGenStateFinReqSbFin/48 (1073741824 (estimated locally),1.00 per call) TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenStateFinReqSbUpd/46 (Crypto_CMACGenStateFinReqSbUpd) @06d73620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenFinish.constprop/96 (14213153 (estimated locally),0.01 per call) 
  Calls: Crypto_AES_Helper_Encrypt_Update/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenStateFinPadLastBlock/45 (Crypto_CMACGenStateFinPadLastBlock) @06d73460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: local
  Function flags: count:148083751 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenFinish.constprop/96 (14213153 (estimated locally),0.01 per call) 
  Calls: Crypto_CommonXOR/77 (148083752 (estimated locally),1.00 per call) Crypto_CommonXOR/77 (118111601 (estimated locally),0.80 per call) Crypto_CommonXOR/77 (29972151 (estimated locally),0.20 per call) 
Crypto_CMACGenStateUpdReqSbUpd/44 (Crypto_CMACGenStateUpdReqSbUpd) @06d732a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenMainFunction/37 (89487432 (estimated locally),0.08 per call) 
  Calls: Crypto_AES_Helper_Encrypt_MainFunction/79 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_Update/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenStateUpdCpFromInput/43 (Crypto_CMACGenStateUpdCpFromInput) @06d730e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenMainFunction/37 (89487432 (estimated locally),0.08 per call) Crypto_CMACGenCallback.part.0/91 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_MemCpy32/75 (536870913 (estimated locally),0.50 per call) Crypto_CommonXOR/77 (536870913 (estimated locally),0.50 per call) TS_MemCpy32/75 (536870913 (estimated locally),0.50 per call) 
Crypto_CMACGenStateStartK1AndK2/42 (Crypto_CMACGenStateStartK1AndK2) @06d68ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACZeroBlock/1 (addr)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenCallback/39 (178956971 (estimated locally),0.17 per call) 
  Calls: TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) Crypto_CMACCalcKx.constprop/95 (1073741824 (estimated locally),1.00 per call) TS_MemCpy32/75 (1073741824 (estimated locally),1.00 per call) Crypto_CMACCalcKx.constprop/95 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenStateStartReqSBUpd/41 (Crypto_CMACGenStateStartReqSBUpd) @06d68d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACZeroBlock/1 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenStart.constprop/97 (354334802 (estimated locally),0.33 per call) 
  Calls: Crypto_AES_Helper_Encrypt_MainFunction/79 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_Update/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenStateStartReqSBSt/40 (Crypto_CMACGenStateStartReqSBSt) @06d68b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenCallback/39 (addr)Crypto_CMACGenContext/12 (addr)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenStart.constprop/97 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_AES_Helper_Encrypt_Start/76 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACGenCallback/39 (Crypto_CMACGenCallback) @06d689a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)
  Referring: Crypto_CMACGenStateStartReqSBSt/40 (addr)
  Availability: available
  Function flags: count:1073527120 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CMACGenCallback.part.0/91 (178921184 (estimated locally),0.17 per call) Crypto_CMACGenStateStartK1AndK2/42 (178956971 (estimated locally),0.17 per call) 
Crypto_CMACGenCallbackCancel/38 (Crypto_CMACGenCallbackCancel) @06d687e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_CMACGenMainFunction/37 (536924595 (estimated locally),0.50 per call) 
  Calls: Crypto_AL_MACGENERATE_AES_CMAC_Finish/18 (7816995 (estimated locally),0.01 per call) Crypto_AL_MACGENERATE_AES_CMAC_Update/17 (13762275 (estimated locally),0.01 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (136642881 (estimated locally),0.13 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (136642881 (estimated locally),0.13 per call) 
   Indirect call(240947665 (estimated locally),0.22 per call) 
   Indirect call(365072220 (estimated locally),0.34 per call) 
Crypto_CMACGenMainFunction/37 (Crypto_CMACGenMainFunction) @06d68620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)
  Referring: 
  Availability: local
  Function flags: count:1073634462 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: Crypto_CMACGenCallbackCancel/38 (536924595 (estimated locally),0.50 per call) Crypto_AES_Helper_Encrypt_MainFunction/79 (89487432 (estimated locally),0.08 per call) Crypto_CMACGenStateFinCpToResult/47 (89487432 (estimated locally),0.08 per call) Crypto_CMACGenStateUpdReqSbUpd/44 (89487432 (estimated locally),0.08 per call) Crypto_CMACGenStateUpdCpFromInput/43 (89487432 (estimated locally),0.08 per call) Crypto_CheckSkipMain/83 (1073634462 (estimated locally),1.00 per call) 
Crypto_CMACGenFinish/36 (Crypto_CMACGenFinish) @06d68460
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_CMACGenUpdate/35 (Crypto_CMACGenUpdate) @06d682a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACGENERATE_AES_CMAC_Update/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_CMACGenStart/34 (Crypto_CMACGenStart) @06d680e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (Crypto_AL_MACGENERATE_AES_CMAC_CallBack) @06d49ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)Crypto_CMACGenContext/12 (read)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_DriverObjects/70 (write)Crypto_CMACGenContext/12 (read)
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89 (268435457 (estimated locally),0.25 per call) Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (357019157 (estimated locally),0.33 per call) CryIf_CallbackNotification/72 (357019157 (estimated locally),0.33 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (357019157 (estimated locally),0.33 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (357019157 (estimated locally),0.33 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (Crypto_AL_MACGENERATE_AES_CMAC_Reset) @06d49d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_CMACGenContext/12 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20 (343919506 (estimated locally),0.32 per call) Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (357019157 (estimated locally),0.33 per call) 
  Calls: SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/71 (1073741824 (estimated locally),1.00 per call) TS_MemBZero32/74 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/69 (1073741824 (estimated locally),1.00 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/73 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACCalcKx/30 (Crypto_CMACCalcKx) @06d498c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_CMACShiftBlockOneBitLeft/29 (Crypto_CMACShiftBlockOneBitLeft) @06d49700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:67108864 (estimated locally) body local optimize_size
  Called by: Crypto_CMACCalcKx.constprop/95 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_AESCMAC_PrecalculateKeys/28 (Crypto_AL_AESCMAC_PrecalculateKeys) @06d49540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AL_Keys_Data/87 (read)Crypto_PreCalcKey/11 (write)Crypto_PreCalcKey/11 (addr)Crypto_AL_Keys_Data/87 (read)Crypto_CMACZeroBlock/1 (addr)Crypto_PreCalcKey/11 (addr)Crypto_AL_Keys_Data/87 (read)Crypto_AL_Keys_Data/87 (read)Crypto_AL_Keys_Data/87 (read)Crypto_AL_Keys_Data/87 (read)Crypto_AL_Keys_Data/87 (read)Crypto_PreCalcKey/11 (read)Crypto_PreCalcKey/11 (addr)Crypto_PreCalcKey/11 (addr)Crypto_PreCalcKey/11 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_AESPreCalculateKeySchedule/88 (15982271 (estimated locally),0.01 per call) Crypto_AL_AESPreCalculateKeySchedule/88 (20037953 (estimated locally),0.02 per call) Crypto_AL_AESPreCalculateKeySchedule/88 (25122810 (estimated locally),0.02 per call) Crypto_AL_FindKeyElement/86 (1073741824 (estimated locally),1.00 per call) Crypto_CMACCalcKx.constprop/95 (4935302 (estimated locally),0.00 per call) TS_MemCpy32/75 (4935302 (estimated locally),0.00 per call) Crypto_AL_FindKeyElement/86 (24383904 (estimated locally),0.02 per call) Crypto_CMACCalcKx.constprop/95 (24383904 (estimated locally),0.02 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (73890617 (estimated locally),0.07 per call) TS_MemCpy32/75 (73890617 (estimated locally),0.07 per call) Crypto_AL_FindKeyElement/86 (1073741823 (estimated locally),1.00 per call) Crypto_AL_FindKeyElement/86 (1073741823 (estimated locally),1.00 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/27 (Crypto_AL_MACVERIFY_AES_CMAC_MainFunction) @06d49380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CMACVrfyMainFunction/55 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26 (Crypto_AL_MACVERIFY_AES_CMAC_Cancel) @06d491c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_CMACVrfyContext/14 (read)Crypto_CMACVrfyContext/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (343919506 (estimated locally),0.32 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall) @06d49000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_LastEncryptedBlock/7 (write)Crypto_CmacGenExpKey/3 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_CmacGenExpKey/3 (addr)Crypto_CmacVrfyKey/10 (write)Crypto_CmacVrfyKey/10 (addr)Crypto_CmacVrfyKey/10 (addr)Crypto_K1/4 (addr)Crypto_CmacVrfyKey/10 (read)Crypto_CMACZeroBlock/1 (addr)Crypto_K1/4 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_CMACZeroBlock/1 (addr)Crypto_K1/4 (addr)Crypto_CmacVrfyKey/10 (addr)Crypto_K1/4 (addr)Crypto_K2/5 (addr)Crypto_K2/5 (addr)Crypto_K1/4 (addr)Crypto_K2/5 (addr)Crypto_FinalBlock/8 (addr)Crypto_FinalBlock/8 (addr)Crypto_K1/4 (addr)Crypto_FinalBlock/8 (addr)Crypto_FinalBlock/8 (write)Crypto_FinalBlock/8 (addr)Crypto_FinalBlock/8 (addr)Crypto_K2/5 (addr)Crypto_CmacVrfyKey/10 (read)Crypto_FinalBlock/8 (addr)Crypto_LastEncryptedBlock/7 (addr)Crypto_CmacVrfyKey/10 (read)Crypto_FinalBlock/8 (addr)Crypto_LastEncryptedBlock/7 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_FinalBlock/8 (addr)Crypto_LastEncryptedBlock/7 (addr)Crypto_CmacVrfyKey/10 (addr)
  Referring: 
  Availability: available
  Function flags: count:63136020 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CompareMac/49 (1134460 (estimated locally),0.02 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (1497487 (estimated locally),0.02 per call) Crypto_AL_AES_EncryptPreCalc/80 (771433 (estimated locally),0.01 per call) Crypto_CommonXOR/77 (2268919 (estimated locally),0.04 per call) Crypto_CipherMiddleBlocks.isra.0/93 (6875513 (estimated locally),0.11 per call) Crypto_CommonXOR/77 (5355337 (estimated locally),0.08 per call) TS_MemSet32/82 (5355337 (estimated locally),0.08 per call) TS_MemCpy32/75 (5355337 (estimated locally),0.08 per call) Crypto_CommonXOR/77 (1520176 (estimated locally),0.02 per call) TS_MemCpy32/75 (1520176 (estimated locally),0.02 per call) Crypto_CMACCalcKx.constprop/95 (4572216 (estimated locally),0.07 per call) TS_MemCpy32/75 (4572216 (estimated locally),0.07 per call) Crypto_AL_KeyElementGet/68 (6875513 (estimated locally),0.11 per call) Crypto_CMACCalcKx.constprop/95 (5156634 (estimated locally),0.08 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (10313269 (estimated locally),0.16 per call) Crypto_AL_AES_EncryptPreCalc/80 (5312896 (estimated locally),0.08 per call) Crypto_AL_KeyElementGet/68 (20834886 (estimated locally),0.33 per call) Crypto_AL_KeyElementGet/68 (63136019 (estimated locally),1.00 per call) TS_MemCpy32/75 (8433962 (estimated locally),0.13 per call) Crypto_AL_KeyElementGet/68 (63136019 (estimated locally),1.00 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_Finish/24 (Crypto_AL_MACVERIFY_AES_CMAC_Finish) @06d08c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_CMACVrfyCallbackCancel/56 (7816995 (estimated locally),0.01 per call) 
  Calls: Crypto_CMACVrfyFinish/54 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_Update/23 (Crypto_AL_MACVERIFY_AES_CMAC_Update) @06d08a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_CMACVrfyCallbackCancel/56 (13762275 (estimated locally),0.01 per call) 
  Calls: Crypto_CMACVrfyUpdate/53 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (Crypto_AL_MACVERIFY_AES_CMAC_Start) @06d088c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: *.LC0/67 (read)Crypto_CMACVerifyConfig/15 (write)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (addr)Crypto_CMACVerifyConfig/15 (write)Crypto_CMACVerifyConfig/15 (write)Crypto_CMACVerifyConfig/15 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CMACVrfyStart.constprop/94 (354334802 (estimated locally),0.33 per call) Crypto_AL_KeyElementGet/68 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/21 (Crypto_AL_MACGENERATE_AES_CMAC_MainFunction) @06d08700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CMACGenMainFunction/37 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20 (Crypto_AL_MACGENERATE_AES_CMAC_Cancel) @06d08540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_CMACGenContext/12 (read)Crypto_CMACGenContext/12 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (343919506 (estimated locally),0.32 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall) @06d08380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_LastEncryptedBlock/7 (write)Crypto_CmacGenExpKey/3 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_CmacGenExpKey/3 (addr)Crypto_CmacGenKey/9 (write)Crypto_CmacGenKey/9 (addr)Crypto_CmacGenKey/9 (addr)Crypto_K1/4 (addr)Crypto_CmacGenKey/9 (read)Crypto_CMACZeroBlock/1 (addr)Crypto_K1/4 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_CMACZeroBlock/1 (addr)Crypto_K1/4 (addr)Crypto_CmacGenKey/9 (addr)Crypto_K1/4 (addr)Crypto_K2/5 (addr)Crypto_K2/5 (addr)Crypto_K1/4 (addr)Crypto_K2/5 (addr)Crypto_FinalBlock/8 (addr)Crypto_FinalBlock/8 (addr)Crypto_K1/4 (addr)Crypto_FinalBlock/8 (addr)Crypto_FinalBlock/8 (write)Crypto_FinalBlock/8 (addr)Crypto_FinalBlock/8 (addr)Crypto_K2/5 (addr)Crypto_CmacGenKey/9 (read)Crypto_FinalBlock/8 (addr)Crypto_LastEncryptedBlock/7 (addr)Crypto_CmacGenKey/9 (read)Crypto_FinalBlock/8 (addr)Crypto_CmacGenExpKey32/2 (addr)Crypto_FinalBlock/8 (addr)Crypto_CmacGenKey/9 (addr)
  Referring: 
  Availability: available
  Function flags: count:63136020 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (1497487 (estimated locally),0.02 per call) Crypto_AL_AES_EncryptPreCalc/80 (771433 (estimated locally),0.01 per call) Crypto_CommonXOR/77 (2268919 (estimated locally),0.04 per call) Crypto_CipherMiddleBlocks.isra.0/93 (6875513 (estimated locally),0.11 per call) Crypto_CommonXOR/77 (5355337 (estimated locally),0.08 per call) TS_MemSet32/82 (5355337 (estimated locally),0.08 per call) TS_MemCpy32/75 (5355337 (estimated locally),0.08 per call) Crypto_CommonXOR/77 (1520176 (estimated locally),0.02 per call) TS_MemCpy32/75 (1520176 (estimated locally),0.02 per call) Crypto_CMACCalcKx.constprop/95 (4572216 (estimated locally),0.07 per call) TS_MemCpy32/75 (4572216 (estimated locally),0.07 per call) Crypto_AL_KeyElementGet/68 (6875513 (estimated locally),0.11 per call) Crypto_CMACCalcKx.constprop/95 (5156634 (estimated locally),0.08 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/81 (10313269 (estimated locally),0.16 per call) Crypto_AL_AES_EncryptPreCalc/80 (5312896 (estimated locally),0.08 per call) Crypto_AL_KeyElementGet/68 (20834886 (estimated locally),0.33 per call) Crypto_AL_KeyElementGet/68 (63136019 (estimated locally),1.00 per call) TS_MemCpy32/75 (8433962 (estimated locally),0.13 per call) Crypto_AL_KeyElementGet/68 (63136019 (estimated locally),1.00 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_Finish/18 (Crypto_AL_MACGENERATE_AES_CMAC_Finish) @06d08000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_CMACGenCallbackCancel/38 (7816995 (estimated locally),0.01 per call) 
  Calls: Crypto_CMACGenFinish.constprop/96 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_Update/17 (Crypto_AL_MACGENERATE_AES_CMAC_Update) @06d02e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_CMACGenCallbackCancel/38 (13762275 (estimated locally),0.01 per call) 
  Calls: Crypto_CMACGenUpdate/35 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (Crypto_AL_MACGENERATE_AES_CMAC_Start) @06d02c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: *.LC0/67 (read)Crypto_CMACGenerateConfig/13 (write)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (addr)Crypto_CMACGenerateConfig/13 (write)Crypto_CMACGenerateConfig/13 (write)Crypto_CMACGenerateConfig/13 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_CMACGenStart.constprop/97 (354334802 (estimated locally),0.33 per call) Crypto_AL_KeyElementGet/68 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (1073741824 (estimated locally),1.00 per call) 
Crypto_CMACVerifyConfig/15 (Crypto_CMACVerifyConfig) @06ba4900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (write)Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (write)Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (write)Crypto_AL_MACVERIFY_AES_CMAC_Start/22 (addr)Crypto_CMACVrfyStart.constprop.0/94 (addr)
  Availability: available
  Varpool flags:
Crypto_CMACVrfyContext/14 (Crypto_CMACVrfyContext) @06ba4f78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyMainFunction/55 (write)Crypto_CMACVrfyUpdate/53 (write)Crypto_CMACVrfyMainFunction/55 (read)Crypto_CMACVrfyStateFinPadLastBlock/63 (write)Crypto_CMACVrfyStateFinPadLastBlock/63 (write)Crypto_CMACVrfyStateFinPadLastBlock/63 (read)Crypto_CMACVrfyFinish/54 (read)Crypto_CMACVrfyFinish/54 (write)Crypto_CMACVrfyFinish/54 (write)Crypto_CMACVrfyFinish/54 (write)Crypto_CMACVrfyFinish/54 (write)Crypto_CMACVrfyUpdate/53 (write)Crypto_CMACVrfyUpdate/53 (write)Crypto_CMACVrfyUpdate/53 (write)Crypto_AL_MACVERIFY_AES_CMAC_Reset/50 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (write)Crypto_CMACVrfyStateStartK1AndK2/60 (write)Crypto_CMACVrfyStateStartK1AndK2/60 (write)Crypto_CMACVrfyStateStartK1AndK2/60 (write)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyStateFinPadLastBlock/63 (addr)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyUpdate/53 (read)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (read)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (write)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (read)Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51 (read)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyStateUpdReqSbUpd/62 (addr)Crypto_CMACVrfyStateFinCompare/65 (write)Crypto_CMACVrfyStateFinCompare/65 (read)Crypto_CMACVrfyStateFinCompare/65 (read)Crypto_CMACVrfyStateFinCompare/65 (addr)Crypto_CMACVrfyStateFinCompare/65 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (addr)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyStateFinPadLastBlock/63 (addr)Crypto_CMACVrfyStateFinPadLastBlock/63 (write)Crypto_CMACVrfyStateFinPadLastBlock/63 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStateFinPadLastBlock/63 (read)Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0/90 (read)Crypto_CMACVrfyStateStartReqSBSt/58 (read)Crypto_CMACVrfyStateStartReqSBSt/58 (read)Crypto_CMACVrfyStateStartReqSBSt/58 (addr)Crypto_CMACVrfyStateFinReqSbUpd/64 (write)Crypto_CMACVrfyStateFinReqSbUpd/64 (read)Crypto_CMACVrfyStateFinReqSbUpd/64 (addr)Crypto_CMACVrfyStateFinReqSbUpd/64 (addr)Crypto_CMACVrfyStateFinReqSbUpd/64 (addr)Crypto_CMACVrfyStateUpdReqSbUpd/62 (addr)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyStart.constprop.0/94 (addr)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyStateUpdReqSbUpd/62 (write)Crypto_CMACVrfyStateUpdReqSbUpd/62 (read)Crypto_CMACVrfyStateUpdReqSbUpd/62 (addr)Crypto_CMACVrfyStateFinReqSbFin/66 (write)Crypto_CMACVrfyStateFinReqSbFin/66 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (addr)Crypto_CMACVrfyStateUpdCpFromInput/61 (addr)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyCallback.part.0/92 (read)Crypto_CMACVrfyCallback.part.0/92 (write)Crypto_CMACVrfyStateFinPadLastBlock/63 (addr)Crypto_CMACVrfyStateFinPadLastBlock/63 (addr)Crypto_CMACVrfyStateFinPadLastBlock/63 (addr)Crypto_CMACVrfyStateFinPadLastBlock/63 (addr)Crypto_CMACVrfyStateFinPadLastBlock/63 (write)Crypto_CMACVrfyStateFinCompare/65 (read)Crypto_CMACVrfyStateFinCompare/65 (read)Crypto_CMACVrfyStateFinCompare/65 (read)Crypto_CMACVrfyStateStartReqSBUpd/59 (write)Crypto_CMACVrfyStateStartReqSBUpd/59 (write)Crypto_CMACVrfyStateStartReqSBUpd/59 (read)Crypto_CMACVrfyStateStartReqSBUpd/59 (addr)Crypto_CMACVrfyStateStartReqSBUpd/59 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (addr)Crypto_CMACVrfyStateUpdCpFromInput/61 (addr)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (read)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyStateUpdCpFromInput/61 (write)Crypto_CMACVrfyCallback/57 (read)Crypto_CMACVrfyCallback/57 (write)Crypto_CMACVrfyCallback/57 (write)Crypto_CMACVrfyCallback/57 (write)Crypto_CMACVrfyCallback/57 (write)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (write)Crypto_CMACVrfyStart.constprop.0/94 (write)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyCallbackCancel/56 (read)Crypto_CMACVrfyMainFunction/55 (read)Crypto_CMACVrfyMainFunction/55 (write)Crypto_CMACVrfyMainFunction/55 (write)Crypto_CMACVrfyMainFunction/55 (read)Crypto_CMACVrfyMainFunction/55 (read)Crypto_CMACVrfyMainFunction/55 (read)Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26 (read)Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26 (write)
  Availability: available
  Varpool flags:
Crypto_CMACGenerateConfig/13 (Crypto_CMACGenerateConfig) @06ba4f30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (write)Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (write)Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (write)Crypto_AL_MACGENERATE_AES_CMAC_Start/16 (addr)Crypto_CMACGenStart.constprop.0/97 (addr)
  Availability: available
  Varpool flags:
Crypto_CMACGenContext/12 (Crypto_CMACGenContext) @06ba4ee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenMainFunction/37 (write)Crypto_CMACGenUpdate/35 (write)Crypto_CMACGenMainFunction/37 (read)Crypto_CMACGenStateFinPadLastBlock/45 (write)Crypto_CMACGenStateFinPadLastBlock/45 (write)Crypto_CMACGenStateFinPadLastBlock/45 (write)Crypto_CMACGenStateFinPadLastBlock/45 (read)Crypto_CMACGenStart.constprop.0/97 (addr)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenStateStartReqSBUpd/41 (addr)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenUpdate/35 (read)Crypto_CMACGenUpdate/35 (write)Crypto_CMACGenUpdate/35 (write)Crypto_CMACGenUpdate/35 (write)Crypto_AL_MACGENERATE_AES_CMAC_Reset/32 (addr)Crypto_CMACGenStateStartK1AndK2/42 (addr)Crypto_CMACGenStateStartK1AndK2/42 (addr)Crypto_CMACGenStateStartK1AndK2/42 (addr)Crypto_CMACGenStateStartK1AndK2/42 (addr)Crypto_CMACGenStateStartK1AndK2/42 (addr)Crypto_CMACGenStateStartK1AndK2/42 (write)Crypto_CMACGenStateStartK1AndK2/42 (write)Crypto_CMACGenStateStartK1AndK2/42 (write)Crypto_CMACGenStateStartK1AndK2/42 (write)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenStateStartReqSBUpd/41 (write)Crypto_CMACGenStateStartReqSBUpd/41 (read)Crypto_CMACGenStateStartReqSBUpd/41 (addr)Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0/89 (read)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (read)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (write)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (read)Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33 (read)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenCallback/39 (write)Crypto_CMACGenCallback/39 (write)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (write)Crypto_CMACGenFinish.constprop.0/96 (write)Crypto_CMACGenStateUpdCpFromInput/43 (addr)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenStateFinPadLastBlock/45 (read)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenFinish.constprop.0/96 (write)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenStateFinCpToResult/47 (addr)Crypto_CMACGenStateStartReqSBUpd/41 (write)Crypto_CMACGenStateStartReqSBSt/40 (write)Crypto_CMACGenStateStartReqSBSt/40 (read)Crypto_CMACGenStateStartReqSBSt/40 (read)Crypto_CMACGenStateStartReqSBSt/40 (addr)Crypto_CMACGenStateStartReqSBSt/40 (write)Crypto_CMACGenStateStartReqSBSt/40 (write)Crypto_CMACGenStateStartReqSBSt/40 (write)Crypto_CMACGenStateFinReqSbUpd/46 (write)Crypto_CMACGenStateFinReqSbUpd/46 (read)Crypto_CMACGenStateFinReqSbUpd/46 (addr)Crypto_CMACGenStateFinReqSbUpd/46 (addr)Crypto_CMACGenStateFinReqSbUpd/46 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (write)Crypto_CMACGenStateUpdReqSbUpd/44 (addr)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenFinish.constprop.0/96 (write)Crypto_CMACGenFinish.constprop.0/96 (write)Crypto_CMACGenStateUpdReqSbUpd/44 (write)Crypto_CMACGenStateUpdReqSbUpd/44 (read)Crypto_CMACGenStateUpdReqSbUpd/44 (addr)Crypto_CMACGenStateFinReqSbFin/48 (write)Crypto_CMACGenStateFinReqSbFin/48 (read)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (addr)Crypto_CMACGenStateUpdCpFromInput/43 (addr)Crypto_CMACGenCallback.part.0/91 (write)Crypto_CMACGenCallback.part.0/91 (read)Crypto_CMACGenCallback/39 (read)Crypto_CMACGenStateFinPadLastBlock/45 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (addr)Crypto_CMACGenStateFinPadLastBlock/45 (write)Crypto_CMACGenStart.constprop.0/97 (write)Crypto_CMACGenStateUpdReqSbUpd/44 (addr)Crypto_CMACGenFinish.constprop.0/96 (read)Crypto_CMACGenFinish.constprop.0/96 (write)Crypto_CMACGenStateFinCpToResult/47 (read)Crypto_CMACGenStateFinCpToResult/47 (write)Crypto_CMACGenStateFinCpToResult/47 (read)Crypto_CMACGenStateFinCpToResult/47 (read)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (addr)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenStateUpdCpFromInput/43 (read)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenStateUpdCpFromInput/43 (write)Crypto_CMACGenCallback/39 (write)Crypto_CMACGenCallback/39 (write)Crypto_CMACGenCallback/39 (write)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenCallbackCancel/38 (read)Crypto_CMACGenMainFunction/37 (read)Crypto_CMACGenMainFunction/37 (write)Crypto_CMACGenMainFunction/37 (write)Crypto_CMACGenMainFunction/37 (read)Crypto_CMACGenMainFunction/37 (read)Crypto_CMACGenMainFunction/37 (read)Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20 (read)Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20 (write)
  Availability: available
  Varpool flags:
Crypto_PreCalcKey/11 (Crypto_PreCalcKey) @06ba4ea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_AESCMAC_PrecalculateKeys/28 (write)Crypto_AL_AESCMAC_PrecalculateKeys/28 (addr)Crypto_AL_AESCMAC_PrecalculateKeys/28 (addr)Crypto_AL_AESCMAC_PrecalculateKeys/28 (read)Crypto_AL_AESCMAC_PrecalculateKeys/28 (addr)Crypto_AL_AESCMAC_PrecalculateKeys/28 (addr)Crypto_AL_AESCMAC_PrecalculateKeys/28 (addr)
  Availability: available
  Varpool flags:
Crypto_CmacVrfyKey/10 (Crypto_CmacVrfyKey) @06ba4e58
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (write)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (read)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (read)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (read)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_CmacGenKey/9 (Crypto_CmacGenKey) @06ba4e10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (write)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (read)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (read)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (read)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_FinalBlock/8 (Crypto_FinalBlock) @06ba4dc8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (write)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (write)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)
  Availability: available
  Varpool flags:
Crypto_LastEncryptedBlock/7 (Crypto_LastEncryptedBlock) @06ba4d80
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_CompareMac/49 (read)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (write)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_CompareMac/49 (addr)Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (write)
  Availability: available
  Varpool flags:
Crypto_Block/6 (Crypto_Block) @06ba4d38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_CipherMiddleBlocks.isra.0/93 (addr)
  Availability: available
  Varpool flags:
Crypto_K2/5 (Crypto_K2) @06ba4cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)
  Availability: available
  Varpool flags:
Crypto_K1/4 (Crypto_K1) @06ba4ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)
  Availability: available
  Varpool flags:
Crypto_CmacGenExpKey/3 (Crypto_CmacGenExpKey) @06ba4c60
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)
  Availability: available
  Varpool flags:
Crypto_CmacGenExpKey32/2 (Crypto_CmacGenExpKey32) @06ba4c18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_CipherMiddleBlocks.isra.0/93 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)
  Availability: available
  Varpool flags:
Crypto_CMACZeroBlock/1 (Crypto_CMACZeroBlock) @06ba4bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_CMACGenStateStartK1AndK2/42 (addr)Crypto_CMACVrfyStateStartReqSBUpd/59 (addr)Crypto_CMACGenStateStartReqSBUpd/41 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_CMACVrfyStateStartK1AndK2/60 (addr)Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19 (addr)Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25 (addr)Crypto_AL_AESCMAC_PrecalculateKeys/28 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CMACSubKeyGenerationConstant/0 (Crypto_CMACSubKeyGenerationConstant) @06ba4b40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_CMACCalcKx.constprop.0/95 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crypto_AL_MACGENERATE_AES_CMAC_Reset (Crypto_AL_MACGENERATE_AES_CMAC_Reset, funcdef_no=16, decl_uid=6581, cgraph_uid=17, symbol_order=32)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_Reset/32
Crypto_AL_MACGENERATE_AES_CMAC_Reset ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AL_ENCRYPT_AES_ECB_Reset ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  TS_MemBZero32 (&Crypto_CMACGenContext, 136);
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  return;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_Reset (Crypto_AL_MACVERIFY_AES_CMAC_Reset, funcdef_no=34, decl_uid=6624, cgraph_uid=35, symbol_order=50)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_Reset/50
Crypto_AL_MACVERIFY_AES_CMAC_Reset ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AL_ENCRYPT_AES_ECB_Reset ();
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  TS_MemBZero32 (&Crypto_CMACVrfyContext, 136);
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  return;

}



;; Function Crypto_CMACGenStateUpdCpFromInput (Crypto_CMACGenStateUpdCpFromInput, funcdef_no=27, decl_uid=6610, cgraph_uid=28, symbol_order=43)

Modification phase of node Crypto_CMACGenStateUpdCpFromInput/43
Crypto_CMACGenStateUpdCpFromInput ()
{
  uint32 NewLen;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint8 * _4;
  const uint8 * _5;
  const uint8 * _6;
  const uint8 * _7;
  long unsigned int _8;
  long unsigned int _9;
  uint8 * _10;
  const uint8 * _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_CMACGenContext.BytesStoredInBlock;
  _2 = Crypto_CMACGenContext.DataLength;
  _3 = _1 + _2;
  if (_3 > 16)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NewLen_22 = 16 - _1;
  # DEBUG NewLen => NewLen_22
  # DEBUG BEGIN_STMT
  _4 = &Crypto_CMACGenContext.Block[_1];
  _5 = Crypto_CMACGenContext.DataPtr;
  TS_MemCpy32 (_4, _5, NewLen_22);
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.BytesStoredInBlock = 16;
  # DEBUG BEGIN_STMT
  _6 = Crypto_CMACGenContext.DataPtr;
  _7 = _6 + NewLen_22;
  Crypto_CMACGenContext.DataPtr = _7;
  # DEBUG BEGIN_STMT
  _8 = Crypto_CMACGenContext.DataLength;
  _29 = _1 + 4294967280;
  _9 = _8 + _29;
  Crypto_CMACGenContext.DataLength = _9;
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_CMACGenContext.Block, &Crypto_CMACGenContext.LastEncryptedBlock, 16);
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.State = 7;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _10 = &Crypto_CMACGenContext.Block[_1];
  _11 = Crypto_CMACGenContext.DataPtr;
  TS_MemCpy32 (_10, _11, _2);
  # DEBUG BEGIN_STMT
  _12 = Crypto_CMACGenContext.BytesStoredInBlock;
  _13 = Crypto_CMACGenContext.DataLength;
  _14 = _12 + _13;
  Crypto_CMACGenContext.BytesStoredInBlock = _14;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.State = 15;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.CallbackFlag = 1;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.CallbackResult = 0;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Crypto_CMACVrfyStateUpdCpFromInput (Crypto_CMACVrfyStateUpdCpFromInput, funcdef_no=45, decl_uid=6653, cgraph_uid=46, symbol_order=61)

Modification phase of node Crypto_CMACVrfyStateUpdCpFromInput/61
Crypto_CMACVrfyStateUpdCpFromInput ()
{
  uint32 NewLen;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint8 * _4;
  const uint8 * _5;
  const uint8 * _6;
  const uint8 * _7;
  long unsigned int _8;
  long unsigned int _9;
  uint8 * _10;
  const uint8 * _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _29;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_CMACVrfyContext.BytesStoredInBlock;
  _2 = Crypto_CMACVrfyContext.DataLength;
  _3 = _1 + _2;
  if (_3 > 16)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NewLen_22 = 16 - _1;
  # DEBUG NewLen => NewLen_22
  # DEBUG BEGIN_STMT
  _4 = &Crypto_CMACVrfyContext.Block[_1];
  _5 = Crypto_CMACVrfyContext.DataPtr;
  TS_MemCpy32 (_4, _5, NewLen_22);
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.BytesStoredInBlock = 16;
  # DEBUG BEGIN_STMT
  _6 = Crypto_CMACVrfyContext.DataPtr;
  _7 = _6 + NewLen_22;
  Crypto_CMACVrfyContext.DataPtr = _7;
  # DEBUG BEGIN_STMT
  _8 = Crypto_CMACVrfyContext.DataLength;
  _29 = _1 + 4294967280;
  _9 = _8 + _29;
  Crypto_CMACVrfyContext.DataLength = _9;
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_CMACVrfyContext.Block, &Crypto_CMACVrfyContext.LastEncryptedBlock, 16);
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.State = 7;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _10 = &Crypto_CMACVrfyContext.Block[_1];
  _11 = Crypto_CMACVrfyContext.DataPtr;
  TS_MemCpy32 (_10, _11, _2);
  # DEBUG BEGIN_STMT
  _12 = Crypto_CMACVrfyContext.BytesStoredInBlock;
  _13 = Crypto_CMACVrfyContext.DataLength;
  _14 = _12 + _13;
  Crypto_CMACVrfyContext.BytesStoredInBlock = _14;
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.State = 15;
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.CallbackFlag = 1;
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.CallbackResult = 0;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_CallBack (Crypto_AL_MACGENERATE_AES_CMAC_CallBack, funcdef_no=17, decl_uid=6584, cgraph_uid=18, symbol_order=33)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_CallBack/33
Crypto_AL_MACGENERATE_AES_CMAC_CallBack (struct Crypto_JobType * Job, uint8 Error)
{
  const struct Crypto_JobPrimitiveInfoType * _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Job_12(D)->jobPrimitiveInfo;
  _2 = _1->processingType;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = Crypto_CMACGenContext.CurrentMode;
  _4 = _3 & 4;
  if (_4 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 4> [local count: 359703511]:
  if (Error_13(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 357019157]:
  # DEBUG BEGIN_STMT
  Job_12(D)->jobState = 0;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.CurrentMode = 0;
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _5 = Crypto_CMACGenContext.ObjId;
  Crypto_DriverObjects[_5].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  Crypto_DriverObjects[_5].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  Crypto_DriverObjects[_5].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  CryIf_CallbackNotification (Job_12(D), Error_13(D));
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_Reset ();

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = Crypto_CMACGenContext.CurrentMode;
  _9 = _8 & 2;
  if (_9 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 268435457]:
  Crypto_AL_MACGENERATE_AES_CMAC_CallBack.part.0 (Job_12(D), Error_13(D));

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_CallBack (Crypto_AL_MACVERIFY_AES_CMAC_CallBack, funcdef_no=35, decl_uid=6627, cgraph_uid=36, symbol_order=51)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_CallBack/51
Crypto_AL_MACVERIFY_AES_CMAC_CallBack (struct Crypto_JobType * Job, uint8 Error)
{
  const struct Crypto_JobPrimitiveInfoType * _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Job_12(D)->jobPrimitiveInfo;
  _2 = _1->processingType;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = Crypto_CMACVrfyContext.CurrentMode;
  _4 = _3 & 4;
  if (_4 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 4> [local count: 359703511]:
  if (Error_13(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 357019157]:
  # DEBUG BEGIN_STMT
  Job_12(D)->jobState = 0;
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.CurrentMode = 0;
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _5 = Crypto_CMACVrfyContext.ObjId;
  Crypto_DriverObjects[_5].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  Crypto_DriverObjects[_5].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  Crypto_DriverObjects[_5].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  CryIf_CallbackNotification (Job_12(D), Error_13(D));
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_Reset ();

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _8 = Crypto_CMACVrfyContext.CurrentMode;
  _9 = _8 & 2;
  if (_9 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 268435457]:
  Crypto_AL_MACVERIFY_AES_CMAC_CallBack.part.0 (Job_12(D), Error_13(D));

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Crypto_CipherMiddleBlocks.isra.0 (Crypto_CipherMiddleBlocks.isra.0, funcdef_no=55, decl_uid=7420, cgraph_uid=75, symbol_order=93)

Modification phase of node Crypto_CipherMiddleBlocks.isra.0/93
Adjusting mask for param 0 to 0x1fffffff
Adjusting mask for param 2 to 0x1
Setting value range of param 0 [0, 268435456]
Setting nonnull for 1
Setting value range of param 2 [0, 1]
Crypto_CipherMiddleBlocks.isra.0 (uint32 NrBlocks, const uint8 * const * ISRA.57, boolean ExpandedKeyAvailable, struct Crypto_SymKeyType Key)
{
  uint32 BlockIdx;
  uint32 OutputLengthPtr;
  Std_ReturnType RetVal;
  const uint8 * _3;
  long unsigned int _5;
  const void * _6;
  long unsigned int _8;
  long unsigned int _13;

  <bb 11> [local count: 194683953]:
  # DEBUG Job s=> Job

  <bb 2> [local count: 194683953]:
  # DEBUG BEGIN_STMT
  # DEBUG BlockIdx => 0
  # DEBUG BEGIN_STMT
  OutputLengthPtr = 16;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  if (NrBlocks_1(D) <= 1)
    goto <bb 10>; [41.00%]
  else
    goto <bb 3>; [59.00%]

  <bb 3> [local count: 114863532]:
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _3 = *ISRA.57_26(D);
  _5 = BlockIdx_4 * 16;
  _6 = _3 + _5;
  TS_MemCpy32 (&Crypto_Block, _6, 16);
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_Block, &Crypto_LastEncryptedBlock, 16);
  # DEBUG BEGIN_STMT
  if (ExpandedKeyAvailable_7(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 344993248]:
  # DEBUG BEGIN_STMT
  _8 = Key.length;
  RetVal_9 = Crypto_AL_AES_EncryptPreCalc (&Crypto_Block, &Crypto_LastEncryptedBlock, &OutputLengthPtr, _8, &Crypto_CmacGenExpKey32);
  # DEBUG RetVal => RetVal_9
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 669692776]:
  # DEBUG BEGIN_STMT
  RetVal_10 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_Block, 16, &Crypto_LastEncryptedBlock, &OutputLengthPtr, &Key);
  # DEBUG RetVal => RetVal_10

  <bb 7> [local count: 1014686025]:
  # RetVal_11 = PHI <RetVal_9(5), RetVal_10(6)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  if (RetVal_11 != 0)
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878292]:
  # DEBUG BEGIN_STMT
  BlockIdx_12 = BlockIdx_4 + 1;
  # DEBUG BlockIdx => BlockIdx_12

  <bb 9> [local count: 1073741824]:
  # BlockIdx_4 = PHI <0(3), BlockIdx_12(8)>
  # RetVal_15 = PHI <1(3), 0(8)>
  # DEBUG RetVal => RetVal_15
  # DEBUG BlockIdx => BlockIdx_4
  # DEBUG BEGIN_STMT
  _13 = NrBlocks_1(D) + 4294967295;
  if (BlockIdx_4 < _13)
    goto <bb 4>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 194683952]:
  # RetVal_14 = PHI <0(2), RetVal_11(7), RetVal_15(9)>
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  OutputLengthPtr ={v} {CLOBBER};
  return RetVal_14;

}



;; Function Crypto_CMACCalcKx.constprop (Crypto_CMACCalcKx.constprop.0, funcdef_no=58, decl_uid=7455, cgraph_uid=77, symbol_order=95)

Modification phase of node Crypto_CMACCalcKx.constprop/95
Crypto_CMACCalcKx.constprop (uint8 * Kx)
{
  uint32 Length;
  unsigned char _2;
  signed char _3;

  <bb 5> [local count: 1073741824]:
  # DEBUG Length => 16

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = *Kx_1(D);
  # DEBUG Msb => _2 & 128
  # DEBUG BEGIN_STMT
  Crypto_CMACShiftBlockOneBitLeft (Kx_1(D));
  # DEBUG BEGIN_STMT
  _3 = (signed char) _2;
  if (_3 < 0)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (Kx_1(D), &Crypto_CMACSubKeyGenerationConstant, 16);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Crypto_CMACVrfyCallback (Crypto_CMACVrfyCallback, funcdef_no=41, decl_uid=6645, cgraph_uid=42, symbol_order=57)

Modification phase of node Crypto_CMACVrfyCallback/57
Crypto_CMACVrfyCallback (struct Crypto_JobType * Job, Std_ReturnType Result)
{
  unsigned char _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_CMACVrfyContext.State;
  switch (_1) <default: <L8> [20.00%], case 4: <L0> [20.00%], case 8: <L1> [20.00%], case 11: <L4> [20.00%], case 14: <L5> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyStateStartK1AndK2 ();
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748368]:
<L1>:
  # DEBUG D#5 => Job_2(D)
  # DEBUG D#6 => Result_3(D)
  Crypto_CMACVrfyCallback.part.0 ();
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L4>:
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.State = 12;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L5>:
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.State = 0;
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.CallbackFlag = 1;
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.CallbackResult = 0;
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
<L8>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Crypto_CMACGenCallback (Crypto_CMACGenCallback, funcdef_no=23, decl_uid=6602, cgraph_uid=24, symbol_order=39)

Modification phase of node Crypto_CMACGenCallback/39
Crypto_CMACGenCallback (struct Crypto_JobType * Job, Std_ReturnType Result)
{
  unsigned char _1;

  <bb 2> [local count: 1073527120]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_CMACGenContext.State;
  switch (_1) <default: <L9> [16.67%], case 2: <L0> [16.67%], case 4: <L1> [16.67%], case 8: <L2> [16.67%], case 11: <L5> [16.67%], case 14: <L6> [16.67%]>

  <bb 3> [local count: 178956971]:
<L0>:
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.State = 3;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 178956971]:
<L1>:
  # DEBUG BEGIN_STMT
  Crypto_CMACGenStateStartK1AndK2 ();
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 178921184]:
<L2>:
  # DEBUG D#1 => Job_2(D)
  # DEBUG D#2 => Result_3(D)
  Crypto_CMACGenCallback.part.0 ();
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 178956971]:
<L5>:
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.State = 12;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 178956971]:
<L6>:
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.State = 0;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.CallbackFlag = 1;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.CallbackResult = 0;
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741824]:
<L9>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_Start (Crypto_AL_MACGENERATE_AES_CMAC_Start, funcdef_no=0, decl_uid=6416, cgraph_uid=1, symbol_order=16)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_Start/16
Crypto_AL_MACGENERATE_AES_CMAC_Start (uint32 ObjectId, struct Crypto_JobType * Job)
{
  struct Crypto_SymKeyType Key;
  Std_ReturnType RetVal;
  const struct Crypto_JobPrimitiveInfoType * _1;
  const struct Crypto_PrimitiveInfoType * _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Key = *.LC0;
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_Reset ();
  # DEBUG BEGIN_STMT
  _1 = Job_10(D)->jobPrimitiveInfo;
  _2 = _1->primitiveInfo;
  _3 = _2->algorithm.keyLength;
  Key.length = _3;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenerateConfig.Crypto_Generic_Callback = Crypto_AL_MACGENERATE_AES_CMAC_CallBack;
  # DEBUG BEGIN_STMT
  Crypto_CMACGenerateConfig.ObjId = ObjectId_13(D);
  # DEBUG BEGIN_STMT
  Crypto_CMACGenerateConfig.Job = Job_10(D);
  # DEBUG BEGIN_STMT
  _4 = Job_10(D)->cryptoKeyId;
  RetVal_17 = Crypto_AL_KeyElementGet (_4, 1, &Key.data, &Key.length);
  # DEBUG RetVal => RetVal_17
  # DEBUG BEGIN_STMT
  if (RetVal_17 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_19 = Crypto_CMACGenStart (&Crypto_CMACGenerateConfig, &Key);
  # DEBUG RetVal => RetVal_19

  <bb 4> [local count: 1073741824]:
  # RetVal_5 = PHI <RetVal_17(2), RetVal_19(3)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  Key ={v} {CLOBBER};
  return RetVal_5;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_Update (Crypto_AL_MACGENERATE_AES_CMAC_Update, funcdef_no=1, decl_uid=6419, cgraph_uid=2, symbol_order=17)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_Update/17
Crypto_AL_MACGENERATE_AES_CMAC_Update (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  const uint8 * _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Job_4(D)->jobPrimitiveInputOutput.inputPtr;
  _2 = Job_4(D)->jobPrimitiveInputOutput.inputLength;
  RetVal_6 = Crypto_CMACGenUpdate (_1, _2);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_Finish (Crypto_AL_MACGENERATE_AES_CMAC_Finish, funcdef_no=2, decl_uid=6422, cgraph_uid=3, symbol_order=18)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_Finish/18
Crypto_AL_MACGENERATE_AES_CMAC_Finish (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  uint8 * _1;
  uint32 * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Job_4(D)->jobPrimitiveInputOutput.outputPtr;
  _2 = Job_4(D)->jobPrimitiveInputOutput.outputLengthPtr;
  RetVal_6 = Crypto_CMACGenFinish (_1, _2, 1);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall (Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall, funcdef_no=3, decl_uid=6425, cgraph_uid=4, symbol_order=19)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/19
Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  boolean ExpandedKeyAvailable;
  uint32 OutputLengthPtr;
  uint32 SubKeyLength;
  uint8 i;
  uint32 FinalBlockSize;
  uint32 NrBlocks;
  Std_ReturnType RetVal;
  int _1;
  long unsigned int _2;
  long unsigned int SubKeyLength.2_3;
  const struct Crypto_JobPrimitiveInfoType * _4;
  const struct Crypto_PrimitiveInfoType * _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int SubKeyLength.3_9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int SubKeyLength.4_12;
  long unsigned int _13;
  const uint8 * _14;
  long unsigned int _15;
  long unsigned int _16;
  const void * _17;
  const uint8 * _18;
  long unsigned int _19;
  long unsigned int _20;
  const void * _21;
  uint8 * _22;
  long unsigned int _23;
  uint8 * _24;
  uint32 * _25;
  long unsigned int _26;
  uint8 * _27;
  uint32 * _28;
  long unsigned int iftmp.5_34;
  const uint8 * const * _85;

  <bb 2> [local count: 63136020]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SubKeyLength = 240;
  # DEBUG BEGIN_STMT
  OutputLengthPtr = 16;
  # DEBUG BEGIN_STMT
  # DEBUG ExpandedKeyAvailable => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1010605805]:
  # DEBUG BEGIN_STMT
  _1 = (int) i_32;
  Crypto_LastEncryptedBlock[_1] = 0;
  # DEBUG BEGIN_STMT
  i_84 = i_32 + 1;
  # DEBUG i => i_84

  <bb 4> [local count: 1073741824]:
  # i_32 = PHI <0(2), i_84(3)>
  # DEBUG i => i_32
  # DEBUG BEGIN_STMT
  if (i_32 != 16)
    goto <bb 3>; [94.12%]
  else
    goto <bb 5>; [5.88%]

  <bb 5> [local count: 63136019]:
  # DEBUG BEGIN_STMT
  _2 = Job_45(D)->cryptoKeyId;
  RetVal_47 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  # DEBUG RetVal => RetVal_47
  # DEBUG BEGIN_STMT
  if (RetVal_47 == 8)
    goto <bb 8>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 41669773]:
  SubKeyLength.2_3 = SubKeyLength;
  if (SubKeyLength.2_3 != 240)
    goto <bb 8>; [79.76%]
  else
    goto <bb 7>; [20.24%]

  <bb 7> [local count: 8433962]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  # DEBUG BEGIN_STMT
  # DEBUG ExpandedKeyAvailable => 1

  <bb 8> [local count: 63136019]:
  # ExpandedKeyAvailable_33 = PHI <0(6), 1(7), 0(5)>
  # DEBUG ExpandedKeyAvailable => ExpandedKeyAvailable_33
  # DEBUG BEGIN_STMT
  SubKeyLength = 16;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Job_45(D)->jobPrimitiveInfo;
  _5 = _4->primitiveInfo;
  _6 = _5->algorithm.keyLength;
  Crypto_CmacGenKey.length = _6;
  # DEBUG BEGIN_STMT
  _7 = Job_45(D)->cryptoKeyId;
  RetVal_52 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacGenKey.data, &Crypto_CmacGenKey.length);
  # DEBUG RetVal => RetVal_52
  # DEBUG BEGIN_STMT
  if (RetVal_52 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 31>; [67.00%]

  <bb 9> [local count: 20834886]:
  # DEBUG BEGIN_STMT
  _8 = Job_45(D)->cryptoKeyId;
  RetVal_54 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  # DEBUG RetVal => RetVal_54
  # DEBUG BEGIN_STMT
  if (RetVal_54 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 10417443]:
  SubKeyLength.3_9 = SubKeyLength;
  if (SubKeyLength.3_9 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 11> [local count: 15626165]:
  # DEBUG BEGIN_STMT
  if (ExpandedKeyAvailable_33 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 5312896]:
  # DEBUG BEGIN_STMT
  _10 = Crypto_CmacGenKey.length;
  RetVal_58 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  # DEBUG RetVal => RetVal_58
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 10313269]:
  # DEBUG BEGIN_STMT
  RetVal_56 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacGenKey);
  # DEBUG RetVal => RetVal_56

  <bb 14> [local count: 15626165]:
  # RetVal_29 = PHI <RetVal_58(12), RetVal_56(13)>
  # DEBUG RetVal => RetVal_29
  # DEBUG BEGIN_STMT
  if (RetVal_29 == 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 5156634]:
  # DEBUG BEGIN_STMT
  Crypto_CMACCalcKx (&Crypto_K1, 16);

  <bb 16> [local count: 20834886]:
  # RetVal_30 = PHI <0(10), RetVal_29(14), 0(15)>
  # DEBUG RetVal => RetVal_30
  # DEBUG BEGIN_STMT
  if (RetVal_30 == 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 31>; [67.00%]

  <bb 17> [local count: 6875513]:
  # DEBUG BEGIN_STMT
  _11 = Job_45(D)->cryptoKeyId;
  RetVal_61 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  # DEBUG RetVal => RetVal_61
  # DEBUG BEGIN_STMT
  if (RetVal_61 != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 18> [local count: 4606593]:
  SubKeyLength.4_12 = SubKeyLength;
  if (SubKeyLength.4_12 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 4572216]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  # DEBUG BEGIN_STMT
  Crypto_CMACCalcKx (&Crypto_K2, 16);

  <bb 20> [local count: 6875513]:
  # DEBUG BEGIN_STMT
  _13 = Job_45(D)->jobPrimitiveInputOutput.inputLength;
  NrBlocks_64 = _13 >> 4;
  # DEBUG NrBlocks => NrBlocks_64
  # DEBUG BEGIN_STMT
  FinalBlockSize_65 = _13 & 15;
  # DEBUG FinalBlockSize => FinalBlockSize_65
  # DEBUG BEGIN_STMT
  if (FinalBlockSize_65 != 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 21> [local count: 3437756]:
  if (_13 <= 15)
    goto <bb 23>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 22> [local count: 1718878]:

  <bb 23> [local count: 6875513]:
  # iftmp.5_34 = PHI <1(21), 0(22), 1(20)>
  NrBlocks_66 = iftmp.5_34 + NrBlocks_64;
  # DEBUG NrBlocks => NrBlocks_66
  # DEBUG BEGIN_STMT
  if (FinalBlockSize_65 == 0)
    goto <bb 24>; [67.00%]
  else
    goto <bb 26>; [33.00%]

  <bb 24> [local count: 4606593]:
  if (_13 != 0)
    goto <bb 25>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 25> [local count: 1520176]:
  # DEBUG BEGIN_STMT
  _14 = Job_45(D)->jobPrimitiveInputOutput.inputPtr;
  _15 = NrBlocks_66 + 4294967295;
  _16 = _15 * 16;
  _17 = _14 + _16;
  TS_MemCpy32 (&Crypto_FinalBlock, _17, 16);
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K1, 16);
  goto <bb 27>; [100.00%]

  <bb 26> [local count: 5355337]:
  # DEBUG BEGIN_STMT
  _18 = Job_45(D)->jobPrimitiveInputOutput.inputPtr;
  _19 = NrBlocks_66 + 4294967295;
  _20 = _19 * 16;
  _21 = _18 + _20;
  TS_MemCpy32 (&Crypto_FinalBlock, _21, FinalBlockSize_65);
  # DEBUG BEGIN_STMT
  Crypto_FinalBlock[FinalBlockSize_65] = 128;
  # DEBUG BEGIN_STMT
  FinalBlockSize_71 = FinalBlockSize_65 + 1;
  # DEBUG FinalBlockSize => FinalBlockSize_71
  # DEBUG BEGIN_STMT
  _22 = &Crypto_FinalBlock[FinalBlockSize_71];
  _23 = 16 - FinalBlockSize_71;
  TS_MemSet32 (_22, 0, _23);
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K2, 16);

  <bb 27> [local count: 6875513]:
  # DEBUG BEGIN_STMT
  _85 = &MEM[(const uint8 * *)Job_45(D) + 8B];
  # DEBUG D#9 => Job_45(D)
  RetVal_75 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_66, _85, ExpandedKeyAvailable_33, Crypto_CmacGenKey);
  # DEBUG RetVal => RetVal_75
  # DEBUG BEGIN_STMT
  if (RetVal_75 == 0)
    goto <bb 28>; [33.00%]
  else
    goto <bb 31>; [67.00%]

  <bb 28> [local count: 2268919]:
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_LastEncryptedBlock, 16);
  # DEBUG BEGIN_STMT
  if (ExpandedKeyAvailable_33 == 1)
    goto <bb 29>; [34.00%]
  else
    goto <bb 30>; [66.00%]

  <bb 29> [local count: 771433]:
  # DEBUG BEGIN_STMT
  _24 = Job_45(D)->jobPrimitiveInputOutput.outputPtr;
  _25 = Job_45(D)->jobPrimitiveInputOutput.outputLengthPtr;
  _26 = Crypto_CmacGenKey.length;
  RetVal_80 = Crypto_AL_AES_EncryptPreCalc (&Crypto_FinalBlock, _24, _25, _26, &Crypto_CmacGenExpKey32);
  # DEBUG RetVal => RetVal_80
  goto <bb 31>; [100.00%]

  <bb 30> [local count: 1497487]:
  # DEBUG BEGIN_STMT
  _27 = Job_45(D)->jobPrimitiveInputOutput.outputPtr;
  _28 = Job_45(D)->jobPrimitiveInputOutput.outputLengthPtr;
  RetVal_78 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_FinalBlock, 16, _27, _28, &Crypto_CmacGenKey);
  # DEBUG RetVal => RetVal_78

  <bb 31> [local count: 63136019]:
  # RetVal_31 = PHI <RetVal_52(8), RetVal_30(16), RetVal_75(27), RetVal_80(29), RetVal_78(30)>
  # DEBUG RetVal => RetVal_31
  # DEBUG BEGIN_STMT
  SubKeyLength ={v} {CLOBBER};
  OutputLengthPtr ={v} {CLOBBER};
  return RetVal_31;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_Cancel (Crypto_AL_MACGENERATE_AES_CMAC_Cancel, funcdef_no=4, decl_uid=6428, cgraph_uid=5, symbol_order=20)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_Cancel/20
Crypto_AL_MACGENERATE_AES_CMAC_Cancel (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _1 = Crypto_CMACGenContext.State;
  if (_1 == 15)
    goto <bb 3>; [32.03%]
  else
    goto <bb 4>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_Reset ();
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 729822319]:
  # DEBUG BEGIN_STMT
  Crypto_CMACGenContext.CancelFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 12

  <bb 5> [local count: 1073741824]:
  # RetVal_2 = PHI <0(3), 12(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (Crypto_AL_MACGENERATE_AES_CMAC_MainFunction, funcdef_no=5, decl_uid=6431, cgraph_uid=6, symbol_order=21)

Modification phase of node Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/21
Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (Std_ReturnType * Result, boolean * Busy)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_CMACGenMainFunction (Result_2(D), Busy_3(D));
  return;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_Start (Crypto_AL_MACVERIFY_AES_CMAC_Start, funcdef_no=6, decl_uid=6434, cgraph_uid=7, symbol_order=22)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_Start/22
Crypto_AL_MACVERIFY_AES_CMAC_Start (uint32 ObjectId, struct Crypto_JobType * Job)
{
  struct Crypto_SymKeyType Key;
  Std_ReturnType RetVal;
  const struct Crypto_JobPrimitiveInfoType * _1;
  const struct Crypto_PrimitiveInfoType * _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Key = *.LC0;
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_Reset ();
  # DEBUG BEGIN_STMT
  _1 = Job_10(D)->jobPrimitiveInfo;
  _2 = _1->primitiveInfo;
  _3 = _2->algorithm.keyLength;
  Key.length = _3;
  # DEBUG BEGIN_STMT
  Crypto_CMACVerifyConfig.Crypto_Generic_Callback = Crypto_AL_MACVERIFY_AES_CMAC_CallBack;
  # DEBUG BEGIN_STMT
  Crypto_CMACVerifyConfig.ObjId = ObjectId_13(D);
  # DEBUG BEGIN_STMT
  Crypto_CMACVerifyConfig.Job = Job_10(D);
  # DEBUG BEGIN_STMT
  _4 = Job_10(D)->cryptoKeyId;
  RetVal_17 = Crypto_AL_KeyElementGet (_4, 1, &Key.data, &Key.length);
  # DEBUG RetVal => RetVal_17
  # DEBUG BEGIN_STMT
  if (RetVal_17 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  RetVal_19 = Crypto_CMACVrfyStart (&Crypto_CMACVerifyConfig, &Key);
  # DEBUG RetVal => RetVal_19

  <bb 4> [local count: 1073741824]:
  # RetVal_5 = PHI <RetVal_17(2), RetVal_19(3)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  Key ={v} {CLOBBER};
  return RetVal_5;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_Update (Crypto_AL_MACVERIFY_AES_CMAC_Update, funcdef_no=7, decl_uid=6437, cgraph_uid=8, symbol_order=23)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_Update/23
Crypto_AL_MACVERIFY_AES_CMAC_Update (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  const uint8 * _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Job_4(D)->jobPrimitiveInputOutput.inputPtr;
  _2 = Job_4(D)->jobPrimitiveInputOutput.inputLength;
  RetVal_6 = Crypto_CMACVrfyUpdate (_1, _2);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_Finish (Crypto_AL_MACVERIFY_AES_CMAC_Finish, funcdef_no=8, decl_uid=6440, cgraph_uid=9, symbol_order=24)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_Finish/24
Crypto_AL_MACVERIFY_AES_CMAC_Finish (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  const uint8 * _1;
  long unsigned int _2;
  Crypto_VerifyResultType * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Job_5(D)->jobPrimitiveInputOutput.secondaryInputPtr;
  _2 = Job_5(D)->jobPrimitiveInputOutput.secondaryInputLength;
  _3 = Job_5(D)->jobPrimitiveInputOutput.verifyPtr;
  RetVal_7 = Crypto_CMACVrfyFinish (_1, _2, _3);
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall (Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall, funcdef_no=9, decl_uid=6443, cgraph_uid=10, symbol_order=25)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/25
Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  uint8 i;
  boolean ExpandedKeyAvailable;
  uint32 OutputLengthPtr;
  uint32 SubKeyLength;
  uint32 FinalBlockSize;
  uint32 NrBlocks;
  Std_ReturnType RetVal;
  int _1;
  long unsigned int _2;
  long unsigned int SubKeyLength.7_3;
  const struct Crypto_JobPrimitiveInfoType * _4;
  const struct Crypto_PrimitiveInfoType * _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int SubKeyLength.8_9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int SubKeyLength.9_12;
  long unsigned int _13;
  const uint8 * _14;
  long unsigned int _15;
  long unsigned int _16;
  const void * _17;
  const uint8 * _18;
  long unsigned int _19;
  long unsigned int _20;
  const void * _21;
  uint8 * _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  Crypto_VerifyResultType * _26;
  unsigned char _27;
  long unsigned int iftmp.10_34;
  const uint8 * const * _88;

  <bb 2> [local count: 63136020]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SubKeyLength = 240;
  # DEBUG BEGIN_STMT
  OutputLengthPtr = 16;
  # DEBUG BEGIN_STMT
  # DEBUG ExpandedKeyAvailable => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1010605805]:
  # DEBUG BEGIN_STMT
  _1 = (int) i_33;
  Crypto_LastEncryptedBlock[_1] = 0;
  # DEBUG BEGIN_STMT
  i_87 = i_33 + 1;
  # DEBUG i => i_87

  <bb 4> [local count: 1073741824]:
  # i_33 = PHI <0(2), i_87(3)>
  # DEBUG i => i_33
  # DEBUG BEGIN_STMT
  if (i_33 != 16)
    goto <bb 3>; [94.12%]
  else
    goto <bb 5>; [5.88%]

  <bb 5> [local count: 63136019]:
  # DEBUG BEGIN_STMT
  _2 = Job_46(D)->cryptoKeyId;
  RetVal_48 = Crypto_AL_KeyElementGet (_2, 1000, &Crypto_CmacGenExpKey, &SubKeyLength);
  # DEBUG RetVal => RetVal_48
  # DEBUG BEGIN_STMT
  if (RetVal_48 == 8)
    goto <bb 8>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 41669773]:
  SubKeyLength.7_3 = SubKeyLength;
  if (SubKeyLength.7_3 != 240)
    goto <bb 8>; [79.76%]
  else
    goto <bb 7>; [20.24%]

  <bb 7> [local count: 8433962]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Crypto_CmacGenExpKey32, &Crypto_CmacGenExpKey, 240);
  # DEBUG BEGIN_STMT
  # DEBUG ExpandedKeyAvailable => 1

  <bb 8> [local count: 63136019]:
  # ExpandedKeyAvailable_32 = PHI <0(6), 1(7), 0(5)>
  # DEBUG ExpandedKeyAvailable => ExpandedKeyAvailable_32
  # DEBUG BEGIN_STMT
  SubKeyLength = 16;
  # DEBUG BEGIN_STMT
  _4 = Job_46(D)->jobPrimitiveInfo;
  _5 = _4->primitiveInfo;
  _6 = _5->algorithm.keyLength;
  Crypto_CmacVrfyKey.length = _6;
  # DEBUG BEGIN_STMT
  _7 = Job_46(D)->cryptoKeyId;
  RetVal_53 = Crypto_AL_KeyElementGet (_7, 1, &Crypto_CmacVrfyKey.data, &Crypto_CmacVrfyKey.length);
  # DEBUG RetVal => RetVal_53
  # DEBUG BEGIN_STMT
  if (RetVal_53 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 34>; [67.00%]

  <bb 9> [local count: 20834886]:
  # DEBUG BEGIN_STMT
  _8 = Job_46(D)->cryptoKeyId;
  RetVal_55 = Crypto_AL_KeyElementGet (_8, 1001, &Crypto_K1, &SubKeyLength);
  # DEBUG RetVal => RetVal_55
  # DEBUG BEGIN_STMT
  if (RetVal_55 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 10417443]:
  SubKeyLength.8_9 = SubKeyLength;
  if (SubKeyLength.8_9 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 11> [local count: 15626165]:
  # DEBUG BEGIN_STMT
  if (ExpandedKeyAvailable_32 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 5312896]:
  # DEBUG BEGIN_STMT
  _10 = Crypto_CmacVrfyKey.length;
  RetVal_59 = Crypto_AL_AES_EncryptPreCalc (&Crypto_CMACZeroBlock, &Crypto_K1, &OutputLengthPtr, _10, &Crypto_CmacGenExpKey32);
  # DEBUG RetVal => RetVal_59
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 10313269]:
  # DEBUG BEGIN_STMT
  RetVal_57 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, &Crypto_K1, &OutputLengthPtr, &Crypto_CmacVrfyKey);
  # DEBUG RetVal => RetVal_57

  <bb 14> [local count: 15626165]:
  # RetVal_28 = PHI <RetVal_59(12), RetVal_57(13)>
  # DEBUG RetVal => RetVal_28
  # DEBUG BEGIN_STMT
  if (RetVal_28 == 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 5156634]:
  # DEBUG BEGIN_STMT
  Crypto_CMACCalcKx (&Crypto_K1, 16);

  <bb 16> [local count: 20834886]:
  # RetVal_29 = PHI <0(10), RetVal_28(14), 0(15)>
  # DEBUG RetVal => RetVal_29
  # DEBUG BEGIN_STMT
  if (RetVal_29 == 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 34>; [67.00%]

  <bb 17> [local count: 6875513]:
  # DEBUG BEGIN_STMT
  _11 = Job_46(D)->cryptoKeyId;
  RetVal_62 = Crypto_AL_KeyElementGet (_11, 1002, &Crypto_K2, &SubKeyLength);
  # DEBUG RetVal => RetVal_62
  # DEBUG BEGIN_STMT
  if (RetVal_62 != 0)
    goto <bb 19>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 18> [local count: 4606593]:
  SubKeyLength.9_12 = SubKeyLength;
  if (SubKeyLength.9_12 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 4572216]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Crypto_K2, &Crypto_K1, 16);
  # DEBUG BEGIN_STMT
  Crypto_CMACCalcKx (&Crypto_K2, 16);

  <bb 20> [local count: 6875513]:
  # DEBUG BEGIN_STMT
  _13 = Job_46(D)->jobPrimitiveInputOutput.inputLength;
  NrBlocks_65 = _13 >> 4;
  # DEBUG NrBlocks => NrBlocks_65
  # DEBUG BEGIN_STMT
  FinalBlockSize_66 = _13 & 15;
  # DEBUG FinalBlockSize => FinalBlockSize_66
  # DEBUG BEGIN_STMT
  if (FinalBlockSize_66 != 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 21> [local count: 3437756]:
  if (_13 <= 15)
    goto <bb 23>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 22> [local count: 1718878]:

  <bb 23> [local count: 6875513]:
  # iftmp.10_34 = PHI <1(21), 0(22), 1(20)>
  NrBlocks_67 = iftmp.10_34 + NrBlocks_65;
  # DEBUG NrBlocks => NrBlocks_67
  # DEBUG BEGIN_STMT
  if (FinalBlockSize_66 == 0)
    goto <bb 24>; [67.00%]
  else
    goto <bb 26>; [33.00%]

  <bb 24> [local count: 4606593]:
  if (_13 != 0)
    goto <bb 25>; [33.00%]
  else
    goto <bb 26>; [67.00%]

  <bb 25> [local count: 1520176]:
  # DEBUG BEGIN_STMT
  _14 = Job_46(D)->jobPrimitiveInputOutput.inputPtr;
  _15 = NrBlocks_67 + 4294967295;
  _16 = _15 * 16;
  _17 = _14 + _16;
  TS_MemCpy32 (&Crypto_FinalBlock, _17, 16);
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K1, 16);
  goto <bb 27>; [100.00%]

  <bb 26> [local count: 5355337]:
  # DEBUG BEGIN_STMT
  _18 = Job_46(D)->jobPrimitiveInputOutput.inputPtr;
  _19 = NrBlocks_67 + 4294967295;
  _20 = _19 * 16;
  _21 = _18 + _20;
  TS_MemCpy32 (&Crypto_FinalBlock, _21, FinalBlockSize_66);
  # DEBUG BEGIN_STMT
  Crypto_FinalBlock[FinalBlockSize_66] = 128;
  # DEBUG BEGIN_STMT
  FinalBlockSize_72 = FinalBlockSize_66 + 1;
  # DEBUG FinalBlockSize => FinalBlockSize_72
  # DEBUG BEGIN_STMT
  _22 = &Crypto_FinalBlock[FinalBlockSize_72];
  _23 = 16 - FinalBlockSize_72;
  TS_MemSet32 (_22, 0, _23);
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_K2, 16);

  <bb 27> [local count: 6875513]:
  # DEBUG BEGIN_STMT
  _88 = &MEM[(const uint8 * *)Job_46(D) + 8B];
  # DEBUG D#9 => Job_46(D)
  RetVal_76 = Crypto_CipherMiddleBlocks.isra.0 (NrBlocks_67, _88, ExpandedKeyAvailable_32, Crypto_CmacVrfyKey);
  # DEBUG RetVal => RetVal_76
  # DEBUG BEGIN_STMT
  if (RetVal_76 == 0)
    goto <bb 28>; [33.00%]
  else
    goto <bb 31>; [67.00%]

  <bb 28> [local count: 2268919]:
  # DEBUG BEGIN_STMT
  Crypto_CommonXOR (&Crypto_FinalBlock, &Crypto_LastEncryptedBlock, 16);
  # DEBUG BEGIN_STMT
  if (ExpandedKeyAvailable_32 == 1)
    goto <bb 29>; [34.00%]
  else
    goto <bb 30>; [66.00%]

  <bb 29> [local count: 771433]:
  # DEBUG BEGIN_STMT
  _24 = Crypto_CmacVrfyKey.length;
  RetVal_81 = Crypto_AL_AES_EncryptPreCalc (&Crypto_FinalBlock, &Crypto_LastEncryptedBlock, &OutputLengthPtr, _24, &Crypto_CmacGenExpKey32);
  # DEBUG RetVal => RetVal_81
  goto <bb 31>; [100.00%]

  <bb 30> [local count: 1497487]:
  # DEBUG BEGIN_STMT
  RetVal_79 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_FinalBlock, 16, &Crypto_LastEncryptedBlock, &OutputLengthPtr, &Crypto_CmacVrfyKey);
  # DEBUG RetVal => RetVal_79

  <bb 31> [local count: 6875513]:
  # RetVal_30 = PHI <RetVal_76(27), RetVal_81(29), RetVal_79(30)>
  # DEBUG RetVal => RetVal_30
  # DEBUG BEGIN_STMT
  if (RetVal_30 == 0)
    goto <bb 32>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 32> [local count: 3437756]:
  # DEBUG BEGIN_STMT
  _25 = Job_46(D)->jobPrimitiveInputOutput.secondaryInputLength;
  if (_25 <= 128)
    goto <bb 33>; [33.00%]
  else
    goto <bb 34>; [67.00%]

  <bb 33> [local count: 1134460]:
  # DEBUG BEGIN_STMT
  _26 = Job_46(D)->jobPrimitiveInputOutput.verifyPtr;
  _27 = Crypto_CompareMac (Job_46(D));
  *_26 = _27;

  <bb 34> [local count: 63136019]:
  # RetVal_31 = PHI <RetVal_53(8), RetVal_29(16), RetVal_30(31), 0(33), 1(32)>
  # DEBUG RetVal => RetVal_31
  # DEBUG BEGIN_STMT
  SubKeyLength ={v} {CLOBBER};
  OutputLengthPtr ={v} {CLOBBER};
  return RetVal_31;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_Cancel (Crypto_AL_MACVERIFY_AES_CMAC_Cancel, funcdef_no=10, decl_uid=6446, cgraph_uid=11, symbol_order=26)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_Cancel/26
Crypto_AL_MACVERIFY_AES_CMAC_Cancel (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _1 = Crypto_CMACVrfyContext.State;
  if (_1 == 15)
    goto <bb 3>; [32.03%]
  else
    goto <bb 4>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_Reset ();
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 729822319]:
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyContext.CancelFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 12

  <bb 5> [local count: 1073741824]:
  # RetVal_2 = PHI <0(3), 12(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (Crypto_AL_MACVERIFY_AES_CMAC_MainFunction, funcdef_no=11, decl_uid=6449, cgraph_uid=12, symbol_order=27)

Modification phase of node Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/27
Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (Std_ReturnType * Result, boolean * Busy)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_CMACVrfyMainFunction (Result_2(D), Busy_3(D));
  return;

}



;; Function Crypto_AL_AESCMAC_PrecalculateKeys (Crypto_AL_AESCMAC_PrecalculateKeys, funcdef_no=12, decl_uid=6451, cgraph_uid=13, symbol_order=28)

Modification phase of node Crypto_AL_AESCMAC_PrecalculateKeys/28
Crypto_AL_AESCMAC_PrecalculateKeys (uint32 CryptoKeyId)
{
  uint32 K2Index;
  boolean K2Exists;
  uint32 KeyContentIndex;
  uint32 ExpKeyIndex;
  uint32 K1Index;
  boolean KeyExists;
  boolean K1Exists;
  uint32 OutputLengthPtr;
  struct Crypto_AL_KeyDataType * _1;
  long unsigned int KeyContentIndex.13_2;
  long unsigned int _3;
  struct Crypto_AL_KeyDataType * _4;
  long unsigned int _5;
  uint8 * _6;
  struct Crypto_AL_KeyDataType * _7;
  long unsigned int K1Index.15_8;
  long unsigned int _9;
  struct Crypto_AL_KeyDataType * _10;
  uint8 * _11;
  unsigned char _12;
  struct Crypto_AL_KeyDataType * _13;
  long unsigned int K1Index.17_14;
  long unsigned int _15;
  struct Crypto_AL_KeyDataType * _16;
  uint8 * _17;
  struct Crypto_AL_KeyDataType * _18;
  long unsigned int K2Index.19_19;
  long unsigned int _20;
  struct Crypto_AL_KeyDataType * _21;
  uint8 * _22;
  long unsigned int K1Index.20_23;
  long unsigned int _24;
  struct Crypto_AL_KeyDataType * _25;
  uint8 * _26;
  struct Crypto_AL_KeyDataType * _27;
  long unsigned int K2Index.21_28;
  long unsigned int _29;
  struct Crypto_AL_KeyDataType * _30;
  uint8 * _31;
  struct Crypto_AL_KeyDataType * _32;
  long unsigned int K2Index.22_33;
  long unsigned int _34;
  struct Crypto_AL_KeyDataType * _35;
  unsigned char _36;
  struct Crypto_AL_KeyDataType * _37;
  long unsigned int ExpKeyIndex.23_38;
  long unsigned int _39;
  struct Crypto_AL_KeyDataType * _40;
  long unsigned int _41;
  uint8 * _42;
  uint8 * _43;
  uint8 * _44;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  OutputLengthPtr = 16;
  # DEBUG BEGIN_STMT
  # DEBUG K1Exists => 0
  # DEBUG BEGIN_STMT
  # DEBUG KeyExists => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  K1Exists_52 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1001, &K1Index);
  # DEBUG K1Exists => K1Exists_52
  # DEBUG BEGIN_STMT
  KeyExists_54 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1, &KeyContentIndex);
  # DEBUG KeyExists => KeyExists_54
  # DEBUG BEGIN_STMT
  if (K1Exists_52 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (KeyExists_54 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  KeyContentIndex.13_2 = KeyContentIndex;
  _3 = KeyContentIndex.13_2 * 12;
  _4 = _1 + _3;
  _5 = _4->RfKeyElemDataSize;
  Crypto_PreCalcKey.length = _5;
  # DEBUG BEGIN_STMT
  _6 = _4->RfKeyElemData;
  TS_MemCpy32 (&Crypto_PreCalcKey.data, _6, _5);
  # DEBUG BEGIN_STMT
  _7 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  K1Index.15_8 = K1Index;
  _9 = K1Index.15_8 * 12;
  _10 = _7 + _9;
  _10->RfKeyElemDataSize = 0;
  # DEBUG BEGIN_STMT
  _11 = _10->RfKeyElemData;
  _12 = Crypto_AES_Helper_Encrypt_SyncSingleCall (&Crypto_CMACZeroBlock, 16, _11, &OutputLengthPtr, &Crypto_PreCalcKey);
  if (_12 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 5> [local count: 24383904]:
  # DEBUG BEGIN_STMT
  # DEBUG K2Exists => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _13 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  K1Index.17_14 = K1Index;
  _15 = K1Index.17_14 * 12;
  _16 = _13 + _15;
  _16->RfKeyElemDataSize = 16;
  # DEBUG BEGIN_STMT
  _17 = _16->RfKeyElemData;
  Crypto_CMACCalcKx (_17, 16);
  # DEBUG BEGIN_STMT
  K2Exists_62 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1002, &K2Index);
  # DEBUG K2Exists => K2Exists_62
  # DEBUG BEGIN_STMT
  if (K2Exists_62 == 1)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 4935302]:
  # DEBUG BEGIN_STMT
  _18 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  K2Index.19_19 = K2Index;
  _20 = K2Index.19_19 * 12;
  _21 = _18 + _20;
  _22 = _21->RfKeyElemData;
  K1Index.20_23 = K1Index;
  _24 = K1Index.20_23 * 12;
  _25 = _18 + _24;
  _26 = _25->RfKeyElemData;
  TS_MemCpy32 (_22, _26, 16);
  # DEBUG BEGIN_STMT
  _27 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  K2Index.21_28 = K2Index;
  _29 = K2Index.21_28 * 12;
  _30 = _27 + _29;
  _31 = _30->RfKeyElemData;
  Crypto_CMACCalcKx (_31, 16);
  # DEBUG BEGIN_STMT
  _32 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  K2Index.22_33 = K2Index;
  _34 = K2Index.22_33 * 12;
  _35 = _32 + _34;
  _35->RfKeyElemDataSize = 16;

  <bb 7> [local count: 24383904]:
  K2Index ={v} {CLOBBER};

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _36 = Crypto_AL_FindKeyElement (CryptoKeyId_50(D), 1000, &ExpKeyIndex);
  if (_36 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 9> [local count: 365072221]:
  if (KeyExists_54 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 10> [local count: 124124555]:
  # DEBUG BEGIN_STMT
  _37 = Crypto_AL_Keys_Data[CryptoKeyId_50(D)].KeyData;
  ExpKeyIndex.23_38 = ExpKeyIndex;
  _39 = ExpKeyIndex.23_38 * 12;
  _40 = _37 + _39;
  _40->RfKeyElemDataSize = 240;
  # DEBUG BEGIN_STMT
  _41 = Crypto_PreCalcKey.length;
  if (_41 == 16)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 25122810]:
  # DEBUG BEGIN_STMT
  _42 = _40->RfKeyElemData;
  Crypto_AL_AESPreCalculateKeySchedule (4, 10, &Crypto_PreCalcKey.data, _42);
  goto <bb 17>; [100.00%]

  <bb 12> [local count: 99001745]:
  # DEBUG BEGIN_STMT
  if (_41 == 24)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 20037953]:
  # DEBUG BEGIN_STMT
  _43 = _40->RfKeyElemData;
  Crypto_AL_AESPreCalculateKeySchedule (6, 12, &Crypto_PreCalcKey.data, _43);
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 78963792]:
  # DEBUG BEGIN_STMT
  if (_41 == 32)
    goto <bb 15>; [20.24%]
  else
    goto <bb 16>; [79.76%]

  <bb 15> [local count: 15982271]:
  # DEBUG BEGIN_STMT
  _44 = _40->RfKeyElemData;
  Crypto_AL_AESPreCalculateKeySchedule (8, 14, &Crypto_PreCalcKey.data, _44);
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 62981520]:
  # DEBUG BEGIN_STMT
  _40->RfKeyElemDataSize = 0;

  <bb 17> [local count: 1073741824]:
  OutputLengthPtr ={v} {CLOBBER};
  K1Index ={v} {CLOBBER};
  ExpKeyIndex ={v} {CLOBBER};
  KeyContentIndex ={v} {CLOBBER};
  return;

}


