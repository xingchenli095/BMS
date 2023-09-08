
IPA constant propagation start:
Determining dynamic type for call: RetVal_15 = Crypto_AL_ENCRYPT_AES_ECB_Update (_14, Job_5(D));
  Starting walk at: RetVal_15 = Crypto_AL_ENCRYPT_AES_ECB_Update (_14, Job_5(D));
  instance pointer: Job_5(D)  Outer instance pointer: Job_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AL_ENCRYPT_AES_ECB_Finish (_17, Job_5(D));
  Starting walk at: Crypto_AL_ENCRYPT_AES_ECB_Finish (_17, Job_5(D));
  instance pointer: Job_5(D)  Outer instance pointer: Job_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptUpdate (_4, 16, _5, _2);
  Starting walk at: Crypto_AESEncryptUpdate (_4, 16, _5, _2);
  instance pointer: _4  Outer instance pointer: _4 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptUpdate (_4, 16, _5, _2);
  Starting walk at: Crypto_AESEncryptUpdate (_4, 16, _5, _2);
  instance pointer: _5  Outer instance pointer: _5 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptUpdate (_4, 16, _5, _2);
  Starting walk at: Crypto_AESEncryptUpdate (_4, 16, _5, _2);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _32 (_19, _33);
  Starting walk at: _32 (_19, _33);
  instance pointer: _19  Outer instance pointer: _19 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _28 (_19, 12);
  Starting walk at: _28 (_19, 12);
  instance pointer: _19  Outer instance pointer: _19 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptCalculateRounds (&Crypto_AESEncryptContext);
  Starting walk at: Crypto_AESEncryptCalculateRounds (&Crypto_AESEncryptContext);
  instance pointer: &Crypto_AESEncryptContext  Outer instance pointer: Crypto_AESEncryptContext offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AES_EncryptCalculateKeySchedule ();
Determining dynamic type for call: _11 (_12, _13);
  Starting walk at: _11 (_12, _13);
  instance pointer: _12  Outer instance pointer: _12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_4, &Crypto_AESEncryptContext.AesState, 16);
  Function call may change dynamic type:Crypto_AESEncryptCalculateRounds (&Crypto_AESEncryptContext);
  Function call may change dynamic type:Crypto_AES_EncryptCalculateKeySchedule ();
Determining dynamic type for call: _6 (_7, 12);
  Starting walk at: _6 (_7, 12);
  instance pointer: _7  Outer instance pointer: _7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_4, &Crypto_AESEncryptContext.AesState, 16);
  Function call may change dynamic type:Crypto_AESEncryptCalculateRounds (&Crypto_AESEncryptContext);
  Function call may change dynamic type:Crypto_AES_EncryptCalculateKeySchedule ();
Determining dynamic type for call: Crypto_ModeEncryptCallBack.0_1 (Job_4(D), Result_5(D));
  Starting walk at: Crypto_ModeEncryptCallBack.0_1 (Job_4(D), Result_5(D));
  instance pointer: Job_4(D)  Outer instance pointer: Job_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  Starting walk at: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  instance pointer: &Crypto_HelperEncryptResult  Outer instance pointer: Crypto_HelperEncryptResult offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
Determining dynamic type for call: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  Starting walk at: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  instance pointer: &Crypto_HelperEncryptBusy  Outer instance pointer: Crypto_HelperEncryptBusy offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
Determining dynamic type for call: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S0  Outer instance pointer: S0 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S1  Outer instance pointer: S1 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S2  Outer instance pointer: S2 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S3  Outer instance pointer: S3 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: Context_305(D)  Outer instance pointer: Context_305(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S0  Outer instance pointer: S0 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
Determining dynamic type for call: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S1  Outer instance pointer: S1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
Determining dynamic type for call: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S2  Outer instance pointer: S2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
Determining dynamic type for call: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: &S3  Outer instance pointer: S3 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
Determining dynamic type for call: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  Starting walk at: Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  instance pointer: Context_305(D)  Outer instance pointer: Context_305(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
Determining dynamic type for call: Crypto_AESCommonCalculateKeySchedule (&Crypto_AESEncryptContext);
  Starting walk at: Crypto_AESCommonCalculateKeySchedule (&Crypto_AESEncryptContext);
  instance pointer: &Crypto_AESEncryptContext  Outer instance pointer: Crypto_AESEncryptContext offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptMainFunction.part.0 (Busy_9(D));
  Starting walk at: Crypto_AESEncryptMainFunction.part.0 (Busy_9(D));
  instance pointer: Busy_9(D)  Outer instance pointer: Busy_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = Crypto_CheckSkipMain (Result_8(D), Busy_9(D), _1);
Determining dynamic type for call: _7 (_8, 0);
  Starting walk at: _7 (_8, 0);
  instance pointer: _8  Outer instance pointer: _8 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Crypto_AESEncryptContext.KeySeed, _6, _5);
Determining dynamic type for call: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0 (Job_6(D), Result_7(D));
  Starting walk at: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0 (Job_6(D), Result_7(D));
  instance pointer: Job_6(D)  Outer instance pointer: Job_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptMainFunction (Result_2(D), Busy_3(D));
  Starting walk at: Crypto_AESEncryptMainFunction (Result_2(D), Busy_3(D));
  instance pointer: Result_2(D)  Outer instance pointer: Result_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptMainFunction (Result_2(D), Busy_3(D));
  Starting walk at: Crypto_AESEncryptMainFunction (Result_2(D), Busy_3(D));
  instance pointer: Busy_3(D)  Outer instance pointer: Busy_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_4 = Crypto_AL_ENCRYPT_AES_ECB_Update.part.0 (Job_8(D));
  Starting walk at: RetVal_4 = Crypto_AL_ENCRYPT_AES_ECB_Update.part.0 (Job_8(D));
  instance pointer: Job_8(D)  Outer instance pointer: Job_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptStart (&Crypto_AES_ECB_ENCRYPT_Cfg, &Crypto_AesKey);
  Starting walk at: Crypto_AESEncryptStart (&Crypto_AES_ECB_ENCRYPT_Cfg, &Crypto_AesKey);
  instance pointer: &Crypto_AES_ECB_ENCRYPT_Cfg  Outer instance pointer: Crypto_AES_ECB_ENCRYPT_Cfg offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_22 = Crypto_AL_KeyElementGet (_4, 1, &Crypto_AesKey.data, &Crypto_AesKey.length);
  Function call may change dynamic type:Crypto_AL_ENCRYPT_AES_ECB_Reset ();
Determining dynamic type for call: Crypto_AESEncryptStart (&Crypto_AES_ECB_ENCRYPT_Cfg, &Crypto_AesKey);
  Starting walk at: Crypto_AESEncryptStart (&Crypto_AES_ECB_ENCRYPT_Cfg, &Crypto_AesKey);
  instance pointer: &Crypto_AesKey  Outer instance pointer: Crypto_AesKey offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_22 = Crypto_AL_KeyElementGet (_4, 1, &Crypto_AesKey.data, &Crypto_AesKey.length);
  Function call may change dynamic type:Crypto_AL_ENCRYPT_AES_ECB_Reset ();
Determining dynamic type for call: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  Starting walk at: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  instance pointer: &Crypto_HelperEncryptResult  Outer instance pointer: Crypto_HelperEncryptResult offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  Starting walk at: Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  instance pointer: &Crypto_HelperEncryptBusy  Outer instance pointer: Crypto_HelperEncryptBusy offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptCalculateRounds (&Context);
  Starting walk at: Crypto_AESEncryptCalculateRounds (&Context);
  instance pointer: &Context  Outer instance pointer: Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Context.AesState, InputPtr_15(D), 16);
Determining dynamic type for call: Crypto_AESCommonCalculateKeySchedule (&Context);
  Starting walk at: Crypto_AESCommonCalculateKeySchedule (&Context);
  instance pointer: &Context  Outer instance pointer: Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (&Context.AesState, InputPtr_16(D), 16);
  Function call may change dynamic type:TS_MemCpy32 (&Context.KeySeed, _2, _1);
Determining dynamic type for call: Crypto_AESEncryptCalculateRounds (&Context);
  Starting walk at: Crypto_AESEncryptCalculateRounds (&Context);
  instance pointer: &Context  Outer instance pointer: Context offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Crypto_AESCommonCalculateKeySchedule (&Context);
  Function call may change dynamic type:TS_MemCpy32 (&Context.AesState, InputPtr_16(D), 16);
  Function call may change dynamic type:TS_MemCpy32 (&Context.KeySeed, _2, _1);
Determining dynamic type for call: Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  Starting walk at: Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  instance pointer: CipherTextPtr_3(D)  Outer instance pointer: CipherTextPtr_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  Starting walk at: Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  instance pointer: PlainTextPtr_5(D)  Outer instance pointer: PlainTextPtr_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  Starting walk at: Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  instance pointer: PlainTextLengthPtr_6(D)  Outer instance pointer: PlainTextLengthPtr_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptStart (&Temp, KeyPtr_5(D));
  Starting walk at: Crypto_AESEncryptStart (&Temp, KeyPtr_5(D));
  instance pointer: &Temp  Outer instance pointer: Temp offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Crypto_AESEncryptStart (&Temp, KeyPtr_5(D));
  Starting walk at: Crypto_AESEncryptStart (&Temp, KeyPtr_5(D));
  instance pointer: KeyPtr_5(D)  Outer instance pointer: KeyPtr_5(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 -> Crypto_AL_ENCRYPT_AES_ECB_Reset/15 : 
    callsite  Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 -> Crypto_AL_ENCRYPT_AES_ECB_Update/17 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 -> Crypto_AL_ENCRYPT_AES_ECB_Reset/15 : 
    callsite  Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 -> Crypto_AL_ENCRYPT_AES_ECB_Finish/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44 -> Crypto_AESEncryptUpdate/24 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 16
         value: 0x10, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AESEncryptMainFunction.part.0/43:
    callsite  Crypto_AESEncryptMainFunction.part.0/43 -> Crypto_AES_EncryptCalculateKeySchedule/27 : 
    callsite  Crypto_AESEncryptMainFunction.part.0/43 -> Crypto_AESEncryptCalculateRounds/28 : 
       param 0: CONST: &Crypto_AESEncryptContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (_7, 12);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _11 (_12, _13);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _28 (_19, 12);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _32 (_19, _33);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  CryIf_CallbackNotification/42:
  Jump functions of caller  Crypto_AL_KeyElementGet/40:
  Jump functions of caller  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/39:
  Jump functions of caller  TS_MemBZero32/38:
  Jump functions of caller  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/37:
  Jump functions of caller  Crypto_CheckSkipMain/35:
  Jump functions of caller  TS_MemCpy32/34:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_CallbackNotification/33:
    indirect simple callsite, calling param -1, offset 0, for stmt Crypto_ModeEncryptCallBack.0_1 (Job_4(D), Result_5(D));
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Crypto_AESHelperEncryptSynchronousMainCall/32:
    callsite  Crypto_AESHelperEncryptSynchronousMainCall/32 -> Crypto_AESEncryptMainFunction/26 : 
       param 0: CONST: &Crypto_HelperEncryptResult
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: &Crypto_HelperEncryptBusy
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Crypto_AESCommonUnmapState/31:
  Jump functions of caller  Crypto_AESCommonMapState/30:
  Jump functions of caller  Crypto_AESCommonCalculateKeySchedule/29:
  Jump functions of caller  Crypto_AESEncryptCalculateRounds/28:
    callsite  Crypto_AESEncryptCalculateRounds/28 -> Crypto_AESCommonUnmapState/31 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 4: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Crypto_AESEncryptCalculateRounds/28 -> Crypto_AESCommonMapState/30 : 
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 4: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AES_EncryptCalculateKeySchedule/27:
    callsite  Crypto_AES_EncryptCalculateKeySchedule/27 -> Crypto_AESCommonCalculateKeySchedule/29 : 
       param 0: CONST: &Crypto_AESEncryptContext
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Crypto_AESEncryptMainFunction/26:
    callsite  Crypto_AESEncryptMainFunction/26 -> Crypto_AESEncryptMainFunction.part.0/43 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AESEncryptFinish/25:
  Jump functions of caller  Crypto_AESEncryptUpdate/24:
  Jump functions of caller  Crypto_AESEncryptStart/23:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (_8, 0);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_CallBack/22:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_CallBack/22 -> Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Crypto_AL_AESPreCalculateKeySchedule/21:
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_MainFunction/20:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_MainFunction/20 -> Crypto_AESEncryptMainFunction/26 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Cancel/19:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_Cancel/19 -> Crypto_AL_ENCRYPT_AES_ECB_Reset/15 : 
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Finish/18:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_Finish/18 -> Crypto_AESEncryptFinish/25 : 
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Update/17:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_Update/17 -> Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Start/16:
    callsite  Crypto_AL_ENCRYPT_AES_ECB_Start/16 -> Crypto_AESEncryptStart/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: CONST: &Crypto_AesKey
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Crypto_AL_ENCRYPT_AES_ECB_Start/16 -> Crypto_AL_ENCRYPT_AES_ECB_Reset/15 : 
  Jump functions of caller  Crypto_AL_ENCRYPT_AES_ECB_Reset/15:
  Jump functions of caller  Crypto_AES_Helper_Encrypt_MainFunction/14:
    callsite  Crypto_AES_Helper_Encrypt_MainFunction/14 -> Crypto_AESEncryptMainFunction/26 : 
       param 0: CONST: &Crypto_HelperEncryptResult
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: &Crypto_HelperEncryptBusy
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  Crypto_AL_AES_EncryptPreCalc/13:
    callsite  Crypto_AL_AES_EncryptPreCalc/13 -> Crypto_AESEncryptCalculateRounds/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Crypto_AES_Helper_Encrypt_SyncSingleCall/12:
    callsite  Crypto_AES_Helper_Encrypt_SyncSingleCall/12 -> Crypto_AESEncryptCalculateRounds/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Crypto_AES_Helper_Encrypt_SyncSingleCall/12 -> Crypto_AESCommonCalculateKeySchedule/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Crypto_AES_Helper_Encrypt_Finish/11:
    callsite  Crypto_AES_Helper_Encrypt_Finish/11 -> Crypto_AESHelperEncryptSynchronousMainCall/32 : 
    callsite  Crypto_AES_Helper_Encrypt_Finish/11 -> Crypto_AESEncryptFinish/25 : 
  Jump functions of caller  Crypto_AES_Helper_Encrypt_Update/10:
    callsite  Crypto_AES_Helper_Encrypt_Update/10 -> Crypto_AESHelperEncryptSynchronousMainCall/32 : 
    callsite  Crypto_AES_Helper_Encrypt_Update/10 -> Crypto_AESEncryptUpdate/24 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AES_Helper_Encrypt_Start/9:
    callsite  Crypto_AES_Helper_Encrypt_Start/9 -> Crypto_AESEncryptStart/23 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 4, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Crypto_AES_Helper_Encrypt_CallbackNotification for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_CallBack for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_AESPreCalculateKeySchedule for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_Finish for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_Update for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_Start for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_ENCRYPT_AES_ECB_Reset for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AES_Helper_Encrypt_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_AES_EncryptPreCalc for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AES_Helper_Encrypt_SyncSingleCall for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AES_Helper_Encrypt_Finish for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AES_Helper_Encrypt_Update for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AES_Helper_Encrypt_Start for cloning; -fipa-cp-clone disabled.

overall_size: 1121, max_new_size: 11001
 - context independent values, size: 8, time_benefit: 2.000000
 - context independent values, size: 5, time_benefit: 2.000000
 - context independent values, size: 11, time_benefit: 1.000000
 - context independent values, size: 42, time_benefit: 1.000000
 - context independent values, size: 47, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_AESEncryptMainFunction.part.0/43:
    param [0]: VARIABLE
               &Crypto_HelperEncryptBusy [loc_time: 1, loc_size: 122, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_AES_Helper_Encrypt_CallbackNotification/33:
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
  Node: Crypto_AESHelperEncryptSynchronousMainCall/32:
  Node: Crypto_AESCommonUnmapState/31:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const uint32 * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const uint32 * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const uint32 * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const uint32 * ~[0B, 0B]
        AGGS VARIABLE
    param [4]: VARIABLE
               &Crypto_AESEncryptContext [loc_time: 1, loc_size: 47, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Crypto_AES_ContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_AESCommonMapState/30:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
    param [4]: VARIABLE
               &Crypto_AESEncryptContext [loc_time: 1, loc_size: 47, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Crypto_AES_ContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_AESCommonCalculateKeySchedule/29:
    param [0]: VARIABLE
               &Crypto_AESEncryptContext [loc_time: 1, loc_size: 92, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Crypto_AES_ContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_AESEncryptCalculateRounds/28:
    param [0]: VARIABLE
               &Crypto_AESEncryptContext [loc_time: 1, loc_size: 310, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Crypto_AES_ContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Crypto_AES_EncryptCalculateKeySchedule/27:
  Node: Crypto_AESEncryptMainFunction/26:
    param [0]: VARIABLE
               &Crypto_HelperEncryptResult [loc_time: 2, loc_size: 20, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               &Crypto_HelperEncryptBusy [loc_time: 1, loc_size: 20, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_AESEncryptFinish/25:
  Node: Crypto_AESEncryptUpdate/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
               16 [loc_time: 1, loc_size: 14, prop_time: 0, prop_size: 0]
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
  Node: Crypto_AESEncryptStart/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const void * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
               &Crypto_AesKey [loc_time: 1, loc_size: 42, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Crypto_AL_ENCRYPT_AES_ECB_CallBack/22:
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
  Node: Crypto_AL_AESPreCalculateKeySchedule/21:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_MainFunction/20:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_Cancel/19:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_Finish/18:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_Update/17:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_Start/16:
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
  Node: Crypto_AL_ENCRYPT_AES_ECB_Reset/15:
  Node: Crypto_AES_Helper_Encrypt_MainFunction/14:
  Node: Crypto_AL_AES_EncryptPreCalc/13:
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
  Node: Crypto_AES_Helper_Encrypt_SyncSingleCall/12:
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
  Node: Crypto_AES_Helper_Encrypt_Finish/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_AES_Helper_Encrypt_Update/10:
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
  Node: Crypto_AES_Helper_Encrypt_Start/9:
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

IPA decision stage:

 - Creating a specialized node of Crypto_AESCommonMapState/30 for all known contexts.
Propagated bits info for function Crypto_AESCommonMapState.constprop/46:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffc
 param 4: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_AESCommonUnmapState/31:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffc
 param 4: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_AESCommonMapState/30:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
 param 2: value = 0x0, mask = 0xfffffffc
 param 3: value = 0x0, mask = 0xfffffffc
 param 4: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_AESCommonCalculateKeySchedule/29:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_AESEncryptCalculateRounds/28:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_AESEncryptStart/23:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: Crypto_AESCommonMapState/30
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_AESCommonMapState.constprop.0/46 (Crypto_AESCommonMapState.constprop) @06eca620
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Crypto_AESCommonMapState/30
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Crypto_AESEncryptCalculateRounds/28 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0) @06e99380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)Crypto_DriverObjects/41 (write)Crypto_DriverObjects/41 (write)Crypto_DriverObjects/41 (write)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)Crypto_DriverObjects/41 (write)Crypto_DriverObjects/41 (write)Crypto_DriverObjects/41 (write)Crypto_AESEncryptContext/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_CallBack/22 (536870912 (estimated locally),0.50 per call) 
  Calls: SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/37 (714038313 (estimated locally),0.67 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/39 (714038313 (estimated locally),0.67 per call) CryIf_CallbackNotification/42 (714038313 (estimated locally),0.67 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (714038313 (estimated locally),0.67 per call) CryIf_CallbackNotification/42 (87911538 (estimated locally),0.08 per call) Crypto_AL_ENCRYPT_AES_ECB_Update/17 (50621798 (estimated locally),0.05 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/37 (16705193 (estimated locally),0.02 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/39 (16705193 (estimated locally),0.02 per call) CryIf_CallbackNotification/42 (16705193 (estimated locally),0.02 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (16705193 (estimated locally),0.02 per call) Crypto_AL_ENCRYPT_AES_ECB_Finish/18 (24815294 (estimated locally),0.02 per call) 
Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44 (Crypto_AL_ENCRYPT_AES_ECB_Update.part.0) @06e99d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Update/17 (178483810 (estimated locally),0.17 per call) 
  Calls: Crypto_AESEncryptUpdate/24 (217325345 (estimated locally),0.20 per call) 
Crypto_AESEncryptMainFunction.part.0/43 (Crypto_AESEncryptMainFunction.part.0) @06d80b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (addr)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (addr)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Crypto_AESEncryptMainFunction/26 (536870908 (estimated locally),0.50 per call) 
  Calls: Crypto_AES_EncryptCalculateKeySchedule/27 (214748365 (estimated locally),0.20 per call) Crypto_AESEncryptCalculateRounds/28 (214748365 (estimated locally),0.20 per call) TS_MemCpy32/34 (214748365 (estimated locally),0.20 per call) 
   Indirect call(73014444 (estimated locally),0.07 per call) 
   Indirect call(141733921 (estimated locally),0.13 per call) 
   Indirect call(73014444 (estimated locally),0.07 per call) 
   Indirect call(141733920 (estimated locally),0.13 per call) 
CryIf_CallbackNotification/42 (CryIf_CallbackNotification) @06d49700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (714038313 (estimated locally),0.67 per call) Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (87911538 (estimated locally),0.08 per call) Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (16705193 (estimated locally),0.02 per call) 
  Calls: 
Crypto_DriverObjects/41 (Crypto_DriverObjects) @06d4aca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)
  Availability: not_available
  Varpool flags:
Crypto_AL_KeyElementGet/40 (Crypto_AL_KeyElementGet) @06d49380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Start/16 (700686807 (estimated locally),0.65 per call) 
  Calls: 
SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/39 (SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06d490e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (714038313 (estimated locally),0.67 per call) Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (16705193 (estimated locally),0.02 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_MemBZero32/38 (TS_MemBZero32) @06d49000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/37 (SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06849ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (714038313 (estimated locally),0.67 per call) Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (16705193 (estimated locally),0.02 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
*.LC0/36 (*.LC0) @068524c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CheckSkipMain/35 (Crypto_CheckSkipMain) @068498c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AESEncryptMainFunction/26 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
TS_MemCpy32/34 (TS_MemCpy32) @068491c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_AESPreCalculateKeySchedule/21 (118111601 (estimated locally),1.00 per call) Crypto_AL_AES_EncryptPreCalc/13 (382522672 (estimated locally),0.36 per call) Crypto_AL_AES_EncryptPreCalc/13 (382522672 (estimated locally),0.36 per call) Crypto_AL_AES_EncryptPreCalc/13 (765045346 (estimated locally),0.71 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (382522672 (estimated locally),0.36 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (382522672 (estimated locally),0.36 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (765045346 (estimated locally),0.71 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (765045346 (estimated locally),0.71 per call) Crypto_AESEncryptMainFunction.part.0/43 (214748365 (estimated locally),0.20 per call) Crypto_AESEncryptUpdate/24 (1073741824 (estimated locally),1.00 per call) Crypto_AESEncryptStart/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AES_Helper_Encrypt_CallbackNotification/33 (Crypto_AES_Helper_Encrypt_CallbackNotification) @06c8cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Crypto_HelperEncryptFlgCallbackNotification/5 (write)Crypto_ModeEncryptCallBack/8 (read)
  Referring: Crypto_AES_Helper_Encrypt_Start/9 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Crypto_AESHelperEncryptSynchronousMainCall/32 (Crypto_AESHelperEncryptSynchronousMainCall) @06c8cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_HelperEncryptFlgCallbackNotification/5 (write)Crypto_HelperEncryptResult/7 (addr)Crypto_HelperEncryptBusy/4 (addr)Crypto_HelperEncryptFlgCallbackNotification/5 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Crypto_AES_Helper_Encrypt_Finish/11 (217325345 (estimated locally),0.20 per call) Crypto_AES_Helper_Encrypt_Update/10 (217325345 (estimated locally),0.20 per call) 
  Calls: Crypto_AESEncryptMainFunction/26 (955630223 (estimated locally),8.09 per call) 
Crypto_AESCommonUnmapState/31 (Crypto_AESCommonUnmapState) @06c8c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AESEncryptCalculateRounds/28 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AESCommonMapState/30 (Crypto_AESCommonMapState) @06c8c7e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AESCommonCalculateKeySchedule/29 (Crypto_AESCommonCalculateKeySchedule) @06c8c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: *.LC0/36 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (765045346 (estimated locally),0.71 per call) Crypto_AES_EncryptCalculateKeySchedule/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AESEncryptCalculateRounds/28 (Crypto_AESEncryptCalculateRounds) @06c8c380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_Te0/1 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Crypto_AL_AES_EncryptPreCalc/13 (765045346 (estimated locally),0.71 per call) Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (765045346 (estimated locally),0.71 per call) Crypto_AESEncryptMainFunction.part.0/43 (214748365 (estimated locally),0.20 per call) 
  Calls: Crypto_AESCommonUnmapState/31 (118111601 (estimated locally),1.00 per call) Crypto_AESCommonMapState.constprop/46 (118111600 (estimated locally),1.00 per call) 
Crypto_AES_EncryptCalculateKeySchedule/27 (Crypto_AES_EncryptCalculateKeySchedule) @06c8c1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AESEncryptContext/3 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AESEncryptMainFunction.part.0/43 (214748365 (estimated locally),0.20 per call) 
  Calls: Crypto_AESCommonCalculateKeySchedule/29 (1073741824 (estimated locally),1.00 per call) 
Crypto_AESEncryptMainFunction/26 (Crypto_AESEncryptMainFunction) @06c8c000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_MainFunction/20 (1073741824 (estimated locally),1.00 per call) Crypto_AES_Helper_Encrypt_MainFunction/14 (1073741824 (estimated locally),1.00 per call) Crypto_AESHelperEncryptSynchronousMainCall/32 (955630223 (estimated locally),8.09 per call) 
  Calls: Crypto_AESEncryptMainFunction.part.0/43 (536870908 (estimated locally),0.50 per call) Crypto_CheckSkipMain/35 (1073741823 (estimated locally),1.00 per call) 
Crypto_AESEncryptFinish/25 (Crypto_AESEncryptFinish) @06c7ed20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Finish/18 (343919506 (estimated locally),0.32 per call) Crypto_AES_Helper_Encrypt_Finish/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AESEncryptUpdate/24 (Crypto_AESEncryptUpdate) @06c7eb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44 (217325345 (estimated locally),0.20 per call) Crypto_AES_Helper_Encrypt_Update/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_MemCpy32/34 (1073741824 (estimated locally),1.00 per call) 
Crypto_AESEncryptStart/23 (Crypto_AESEncryptStart) @06c7e8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AesEncryptExpKey/2 (addr)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (addr)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Start/16 (231226646 (estimated locally),0.22 per call) Crypto_AES_Helper_Encrypt_Start/9 (765045345 (estimated locally),0.71 per call) 
  Calls: TS_MemCpy32/34 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Crypto_AL_ENCRYPT_AES_ECB_CallBack/22 (Crypto_AL_ENCRYPT_AES_ECB_CallBack) @06c7e620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Crypto_AL_ENCRYPT_AES_ECB_Start/16 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (536870912 (estimated locally),0.50 per call) 
Crypto_AL_AESPreCalculateKeySchedule/21 (Crypto_AL_AESPreCalculateKeySchedule) @06c7e460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: *.LC0/36 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)Crypto_AES_SboxNrm/0 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/34 (118111601 (estimated locally),1.00 per call) 
Crypto_AL_ENCRYPT_AES_ECB_MainFunction/20 (Crypto_AL_ENCRYPT_AES_ECB_MainFunction) @06c7e0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AESEncryptMainFunction/26 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_ENCRYPT_AES_ECB_Cancel/19 (Crypto_AL_ENCRYPT_AES_ECB_Cancel) @06c77ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (343919506 (estimated locally),0.32 per call) 
Crypto_AL_ENCRYPT_AES_ECB_Finish/18 (Crypto_AL_ENCRYPT_AES_ECB_Finish) @06c77d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AESEncryptContext/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (24815294 (estimated locally),0.02 per call) 
  Calls: Crypto_AESEncryptFinish/25 (343919506 (estimated locally),0.32 per call) 
Crypto_AL_ENCRYPT_AES_ECB_Update/17 (Crypto_AL_ENCRYPT_AES_ECB_Update) @06c77b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AESEncryptContext/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (50621798 (estimated locally),0.05 per call) 
  Calls: Crypto_AL_ENCRYPT_AES_ECB_Update.part.0/44 (178483810 (estimated locally),0.17 per call) 
Crypto_AL_ENCRYPT_AES_ECB_Start/16 (Crypto_AL_ENCRYPT_AES_ECB_Start) @06c779a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AesKey/6 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack/22 (addr)Crypto_AesKey/6 (addr)Crypto_AesKey/6 (addr)Crypto_AesKey/6 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AESEncryptStart/23 (231226646 (estimated locally),0.22 per call) Crypto_AL_KeyElementGet/40 (700686807 (estimated locally),0.65 per call) Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (Crypto_AL_ENCRYPT_AES_ECB_Reset) @06c777e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AESEncryptContext/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Crypto_AL_ENCRYPT_AES_ECB_Cancel/19 (343919506 (estimated locally),0.32 per call) Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (714038313 (estimated locally),0.67 per call) Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (16705193 (estimated locally),0.02 per call) Crypto_AL_ENCRYPT_AES_ECB_Start/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/39 (1073741824 (estimated locally),1.00 per call) TS_MemBZero32/38 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/37 (1073741824 (estimated locally),1.00 per call) 
Crypto_AES_Helper_Encrypt_MainFunction/14 (Crypto_AES_Helper_Encrypt_MainFunction) @06c77540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_HelperEncryptResult/7 (addr)Crypto_HelperEncryptBusy/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AESEncryptMainFunction/26 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_AES_EncryptPreCalc/13 (Crypto_AL_AES_EncryptPreCalc) @06c77380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/34 (382522672 (estimated locally),0.36 per call) TS_MemCpy32/34 (382522672 (estimated locally),0.36 per call) Crypto_AESEncryptCalculateRounds/28 (765045346 (estimated locally),0.71 per call) TS_MemCpy32/34 (765045346 (estimated locally),0.71 per call) 
Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (Crypto_AES_Helper_Encrypt_SyncSingleCall) @06c3dee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AesEncryptExpKey/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/34 (382522672 (estimated locally),0.36 per call) TS_MemCpy32/34 (382522672 (estimated locally),0.36 per call) Crypto_AESEncryptCalculateRounds/28 (765045346 (estimated locally),0.71 per call) Crypto_AESCommonCalculateKeySchedule/29 (765045346 (estimated locally),0.71 per call) TS_MemCpy32/34 (765045346 (estimated locally),0.71 per call) TS_MemCpy32/34 (765045346 (estimated locally),0.71 per call) 
Crypto_AES_Helper_Encrypt_Finish/11 (Crypto_AES_Helper_Encrypt_Finish) @06c3d9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AESEncryptContext/3 (read)Crypto_AESEncryptContext/3 (write)Crypto_AESEncryptContext/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AESHelperEncryptSynchronousMainCall/32 (217325345 (estimated locally),0.20 per call) Crypto_AESEncryptFinish/25 (1073741824 (estimated locally),1.00 per call) 
Crypto_AES_Helper_Encrypt_Update/10 (Crypto_AES_Helper_Encrypt_Update) @06c3d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AESHelperEncryptSynchronousMainCall/32 (217325345 (estimated locally),0.20 per call) Crypto_AESEncryptUpdate/24 (1073741824 (estimated locally),1.00 per call) 
Crypto_AES_Helper_Encrypt_Start/9 (Crypto_AES_Helper_Encrypt_Start) @06c3d620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_ModeEncryptCallBack/8 (write)Crypto_AES_Helper_Encrypt_CallbackNotification/33 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AESEncryptStart/23 (765045345 (estimated locally),0.71 per call) 
Crypto_ModeEncryptCallBack/8 (Crypto_ModeEncryptCallBack) @06be5d38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AES_Helper_Encrypt_CallbackNotification/33 (read)Crypto_AES_Helper_Encrypt_Start/9 (write)
  Availability: available
  Varpool flags:
Crypto_HelperEncryptResult/7 (Crypto_HelperEncryptResult) @06be5ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AESHelperEncryptSynchronousMainCall/32 (addr)Crypto_AES_Helper_Encrypt_MainFunction/14 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_AesKey/6 (Crypto_AesKey) @06be5c60
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AL_ENCRYPT_AES_ECB_Start/16 (write)Crypto_AL_ENCRYPT_AES_ECB_Start/16 (addr)Crypto_AL_ENCRYPT_AES_ECB_Start/16 (addr)Crypto_AL_ENCRYPT_AES_ECB_Start/16 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_HelperEncryptFlgCallbackNotification/5 (Crypto_HelperEncryptFlgCallbackNotification) @06be5c18
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: Crypto_AES_Helper_Encrypt_CallbackNotification/33 (write)Crypto_AESHelperEncryptSynchronousMainCall/32 (write)Crypto_AESHelperEncryptSynchronousMainCall/32 (read)
  Availability: available
  Varpool flags: initialized
Crypto_HelperEncryptBusy/4 (Crypto_HelperEncryptBusy) @06be5bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AESHelperEncryptSynchronousMainCall/32 (addr)Crypto_AES_Helper_Encrypt_MainFunction/14 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_AESEncryptContext/3 (Crypto_AESEncryptContext) @06be5b88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptUpdate/24 (write)Crypto_AESEncryptUpdate/24 (write)Crypto_AESEncryptUpdate/24 (write)Crypto_AESEncryptMainFunction/26 (read)Crypto_AESEncryptMainFunction/26 (write)Crypto_AESEncryptMainFunction/26 (write)Crypto_AL_ENCRYPT_AES_ECB_Update/17 (read)Crypto_AES_Helper_Encrypt_Finish/11 (addr)Crypto_AL_ENCRYPT_AES_ECB_Reset/15 (addr)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AESEncryptFinish/25 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AES_Helper_Encrypt_Finish/11 (read)Crypto_AESEncryptFinish/25 (write)Crypto_AES_EncryptCalculateKeySchedule/27 (addr)Crypto_AL_ENCRYPT_AES_ECB_Finish/18 (read)Crypto_AESEncryptMainFunction/26 (read)Crypto_AESEncryptUpdate/24 (addr)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AES_Helper_Encrypt_Finish/11 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (addr)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (write)Crypto_AESEncryptStart/23 (read)Crypto_AESEncryptStart/23 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AESEncryptUpdate/24 (write)Crypto_AESEncryptUpdate/24 (write)Crypto_AESEncryptUpdate/24 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (write)Crypto_AESEncryptMainFunction.part.0/43 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (addr)Crypto_AESEncryptMainFunction.part.0/43 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (addr)Crypto_AESEncryptMainFunction.part.0/43 (write)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AESEncryptMainFunction.part.0/43 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (read)Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0/45 (write)Crypto_AL_ENCRYPT_AES_ECB_Cancel/19 (read)Crypto_AL_ENCRYPT_AES_ECB_Cancel/19 (write)
  Availability: available
  Varpool flags:
Crypto_AesEncryptExpKey/2 (Crypto_AesEncryptExpKey) @06be5b40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AESEncryptStart/23 (addr)Crypto_AES_Helper_Encrypt_SyncSingleCall/12 (addr)
  Availability: available
  Varpool flags:
Crypto_AES_Te0/1 (Crypto_AES_Te0) @06be5af8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_AES_SboxNrm/0 (Crypto_AES_SboxNrm) @06be5a68
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESCommonCalculateKeySchedule/29 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AESEncryptCalculateRounds/28 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)Crypto_AL_AESPreCalculateKeySchedule/21 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crypto_AESCommonCalculateKeySchedule (Crypto_AESCommonCalculateKeySchedule, funcdef_no=20, decl_uid=6504, cgraph_uid=21, symbol_order=29)

Modification phase of node Crypto_AESCommonCalculateKeySchedule/29
Adjusting mask for param 0 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 0
Crypto_AESCommonCalculateKeySchedule (struct Crypto_AES_ContextType * Context)
{
  const uint32 Crypto_AES_Rcon_Fast[10];
  uint32 temp;
  uint8 Index;
  unsigned int _1;
  unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  long unsigned int _5;
  uint8 * _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  unsigned char _15;
  long unsigned int _16;
  uint32 * _17;
  uint32 * _18;
  long unsigned int _19;
  unsigned char _20;
  uint32 * _21;
  sizetype _22;
  sizetype _23;
  uint32 * _24;
  unsigned char _25;
  unsigned char _26;
  long unsigned int _27;
  long unsigned int _28;
  unsigned char _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  unsigned char _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  unsigned char _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;
  unsigned char _44;
  long unsigned int _45;
  long unsigned int _46;
  unsigned char _47;
  unsigned int _48;
  unsigned int _49;
  long unsigned int _50;
  long unsigned int _51;
  unsigned char _52;
  long unsigned int _53;
  long unsigned int _54;
  long unsigned int _55;
  long unsigned int _56;
  unsigned char _57;
  long unsigned int _58;
  long unsigned int _59;
  long unsigned int _60;
  long unsigned int _61;
  long unsigned int _62;
  unsigned char _63;
  long unsigned int _64;
  long unsigned int _65;
  long unsigned int _66;
  long unsigned int _67;
  unsigned char _68;
  long unsigned int _69;
  int _70;
  int _71;
  int _72;
  unsigned int _73;
  unsigned int _74;
  uint32 * _75;
  long unsigned int _76;
  unsigned int _77;
  uint32 * _78;
  long unsigned int _79;
  long unsigned int _80;
  long unsigned int _81;
  long unsigned int _82;
  long unsigned int _83;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AES_Rcon_Fast = *.LC0;
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630220]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) Index_84;
  _2 = _1 * 4;
  _3 = Context_91(D)->KeySeed[_2];
  _4 = (long unsigned int) _3;
  _5 = _4 << 24;
  _6 = &Context_91(D)->KeySeed[_2];
  _7 = MEM[(uint8 *)_6 + 1B];
  _8 = (long unsigned int) _7;
  _9 = _8 << 16;
  _10 = _5 | _9;
  _11 = MEM[(uint8 *)_6 + 2B];
  _12 = (long unsigned int) _11;
  _13 = _12 << 8;
  _14 = _10 | _13;
  _15 = MEM[(uint8 *)_6 + 3B];
  _16 = (long unsigned int) _15;
  _17 = Context_91(D)->KeyExpdFast;
  _18 = _17 + _2;
  _19 = _14 | _16;
  *_18 = _19;
  # DEBUG BEGIN_STMT
  Index_99 = Index_84 + 1;
  # DEBUG Index => Index_99

  <bb 4> [local count: 1073741821]:
  # Index_84 = PHI <0(2), Index_99(3)>
  # DEBUG Index => Index_84
  # DEBUG BEGIN_STMT
  _20 = Context_91(D)->SzeKey;
  if (_20 > Index_84)
    goto <bb 3>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 118111600]:
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _21 = Context_91(D)->KeyExpdFast;
  _22 = _80 + 1073741823;
  _23 = _22 * 4;
  _24 = _21 + _23;
  temp_93 = *_24;
  # DEBUG temp => temp_93
  # DEBUG BEGIN_STMT
  _25 = Context_91(D)->SzeKey;
  _26 = Index_85 % _25;
  if (_26 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  _27 = temp_93 >> 16;
  _28 = _27 & 255;
  _29 = Crypto_AES_SboxNrm[_28];
  _30 = (long unsigned int) _29;
  _31 = _30 << 24;
  _32 = temp_93 >> 8;
  _33 = _32 & 255;
  _34 = Crypto_AES_SboxNrm[_33];
  _35 = (long unsigned int) _34;
  _36 = _35 << 16;
  _37 = _31 ^ _36;
  _38 = temp_93 & 255;
  _39 = Crypto_AES_SboxNrm[_38];
  _40 = (long unsigned int) _39;
  _41 = _40 << 8;
  _42 = _37 ^ _41;
  _43 = temp_93 >> 24;
  _44 = Crypto_AES_SboxNrm[_43];
  _45 = (long unsigned int) _44;
  _46 = _42 ^ _45;
  _47 = Index_85 / _25;
  _48 = (unsigned int) _47;
  _49 = _48 + 4294967295;
  _50 = Crypto_AES_Rcon_Fast[_49];
  temp_95 = _46 ^ _50;
  # DEBUG temp => temp_95
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  if (_25 > 6)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 238907556]:
  if (_26 == 4)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 81228569]:
  # DEBUG BEGIN_STMT
  _51 = temp_93 >> 24;
  _52 = Crypto_AES_SboxNrm[_51];
  _53 = (long unsigned int) _52;
  _54 = _53 << 24;
  _55 = temp_93 >> 16;
  _56 = _55 & 255;
  _57 = Crypto_AES_SboxNrm[_56];
  _58 = (long unsigned int) _57;
  _59 = _58 << 16;
  _60 = _54 ^ _59;
  _61 = temp_93 >> 8;
  _62 = _61 & 255;
  _63 = Crypto_AES_SboxNrm[_62];
  _64 = (long unsigned int) _63;
  _65 = _64 << 8;
  _66 = _60 ^ _65;
  _67 = temp_93 & 255;
  _68 = Crypto_AES_SboxNrm[_67];
  _69 = (long unsigned int) _68;
  temp_94 = _66 ^ _69;
  # DEBUG temp => temp_94

  <bb 11> [local count: 955630224]:
  # temp_86 = PHI <temp_95(7), temp_93(8), temp_93(9), temp_94(10)>
  # DEBUG temp => temp_86
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _70 = (int) Index_85;
  _71 = (int) _25;
  _72 = _70 - _71;
  _73 = (unsigned int) _72;
  _74 = _73 * 4;
  _75 = _21 + _74;
  _76 = *_75;
  _77 = _80 * 4;
  _78 = _21 + _77;
  _79 = _76 ^ temp_86;
  *_78 = _79;
  # DEBUG BEGIN_STMT
  Index_97 = Index_85 + 1;
  # DEBUG Index => Index_97

  <bb 12> [local count: 1073741824]:
  # Index_85 = PHI <Index_97(11), _20(14)>
  # DEBUG Index => Index_85
  # DEBUG BEGIN_STMT
  _80 = (long unsigned int) Index_85;
  _81 = Context_91(D)->SzeTurn;
  _82 = _81 + 1;
  _83 = _82 * 4;
  if (_80 < _83)
    goto <bb 6>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 118111601]:
  Crypto_AES_Rcon_Fast ={v} {CLOBBER};
  return;

}



;; Function Crypto_AES_Helper_Encrypt_CallbackNotification (Crypto_AES_Helper_Encrypt_CallbackNotification, funcdef_no=24, decl_uid=6541, cgraph_uid=25, symbol_order=33)

Modification phase of node Crypto_AES_Helper_Encrypt_CallbackNotification/33
Crypto_AES_Helper_Encrypt_CallbackNotification (struct Crypto_JobType * Job, Std_ReturnType Result)
{
  void (*<T542>) (struct Crypto_JobType *, uint8) Crypto_ModeEncryptCallBack.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_HelperEncryptFlgCallbackNotification ={v} 1;
  # DEBUG BEGIN_STMT
  Crypto_ModeEncryptCallBack.0_1 = Crypto_ModeEncryptCallBack;
  Crypto_ModeEncryptCallBack.0_1 (Job_4(D), Result_5(D));
  return;

}



;; Function Crypto_AESEncryptStart (Crypto_AESEncryptStart, funcdef_no=14, decl_uid=6522, cgraph_uid=15, symbol_order=23)

Modification phase of node Crypto_AESEncryptStart/23
Adjusting mask for param 0 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 0
Crypto_AESEncryptStart (const void * CfgPtr, const struct Crypto_SymKeyType * KeyPtr)
{
  void (*<T542>) (struct Crypto_JobType *, uint8) _1;
  struct Crypto_JobType * _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  const uint8[16] * _6;
  void (*<T542>) (struct Crypto_JobType *, uint8) _7;
  struct Crypto_JobType * _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LocCfgPtr => CfgPtr_10(D)
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct Crypto_AES_ConfigType *)CfgPtr_10(D)].Crypto_Generic_Callback;
  Crypto_AESEncryptContext.Crypto_Generic_Callback = _1;
  # DEBUG BEGIN_STMT
  _2 = MEM[(const struct Crypto_AES_ConfigType *)CfgPtr_10(D)].Job;
  Crypto_AESEncryptContext.Job = _2;
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Crypto_AES_ConfigType *)CfgPtr_10(D)].ObjId;
  Crypto_AESEncryptContext.ObjId = _3;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.CurrentMode = 1;
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Crypto_AES_ConfigType *)CfgPtr_10(D)].TypeKey;
  switch (_4) <default: <L5> [25.00%], case 16: <L0> [25.00%], case 24: <L1> [25.00%], case 32: <L2> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.SzeKey = 4;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.SzeTurn = 10;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.SzeKey = 6;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.SzeTurn = 12;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.SzeKey = 8;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.SzeTurn = 14;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
<L5>:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.KeyExpdFast = &Crypto_AesEncryptExpKey;
  # DEBUG BEGIN_STMT
  _5 = KeyPtr_23(D)->length;
  Crypto_AESEncryptContext.KeySeedLen = _5;
  # DEBUG BEGIN_STMT
  _6 = &KeyPtr_23(D)->data;
  TS_MemCpy32 (&Crypto_AESEncryptContext.KeySeed, _6, _5);
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.CtxError = 0;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.CtxState = 2;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.CntTurn = 0;
  # DEBUG BEGIN_STMT
  _7 = Crypto_AESEncryptContext.Crypto_Generic_Callback;
  _8 = Crypto_AESEncryptContext.Job;
  _7 (_8, 0);
  return;

}



;; Function Crypto_AESEncryptCalculateRounds (Crypto_AESEncryptCalculateRounds, funcdef_no=19, decl_uid=6536, cgraph_uid=20, symbol_order=28)

Modification phase of node Crypto_AESEncryptCalculateRounds/28
Adjusting mask for param 0 to 0xfffffffc
Adjusting align: 4, misalign: 0
Setting nonnull for 0
Crypto_AESEncryptCalculateRounds (struct Crypto_AES_ContextType * Context)
{
  const uint8 keyExpdFastLoopOffset;
  const uint8 keyExpdFastOffset;
  const uint8 numberOfLoops;
  uint8 Index;
  uint32 S3;
  uint32 S2;
  uint32 S1;
  uint32 S0;
  uint32 T3;
  uint32 T2;
  uint32 T1;
  uint32 T0;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _4;
  uint32 * _5;
  long unsigned int _6;
  long unsigned int S0.4_7;
  long unsigned int _8;
  long unsigned int _10;
  long unsigned int S1.5_11;
  long unsigned int _12;
  long unsigned int _14;
  long unsigned int S2.6_15;
  long unsigned int _16;
  long unsigned int _18;
  long unsigned int S3.7_19;
  long unsigned int _20;
  long unsigned int S0.8_21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int S1.9_24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int S2.10_30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int S3.11_36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  sizetype _41;
  sizetype _42;
  sizetype _43;
  uint32 * _44;
  long unsigned int _45;
  long unsigned int _46;
  long unsigned int _47;
  long unsigned int _48;
  long unsigned int _49;
  long unsigned int _50;
  long unsigned int _51;
  long unsigned int _52;
  long unsigned int _53;
  long unsigned int _54;
  long unsigned int _55;
  long unsigned int _56;
  long unsigned int _57;
  long unsigned int _58;
  long unsigned int _59;
  long unsigned int _60;
  long unsigned int _61;
  sizetype _62;
  sizetype _63;
  uint32 * _64;
  long unsigned int _65;
  long unsigned int _66;
  long unsigned int _67;
  long unsigned int _68;
  long unsigned int _69;
  long unsigned int _70;
  long unsigned int _71;
  long unsigned int _72;
  long unsigned int _73;
  long unsigned int _74;
  long unsigned int _75;
  long unsigned int _76;
  long unsigned int _77;
  long unsigned int _78;
  long unsigned int _79;
  long unsigned int _80;
  long unsigned int _81;
  sizetype _82;
  sizetype _83;
  uint32 * _84;
  long unsigned int _85;
  long unsigned int _86;
  long unsigned int _87;
  long unsigned int _88;
  long unsigned int _89;
  long unsigned int _90;
  long unsigned int _91;
  long unsigned int _92;
  long unsigned int _93;
  long unsigned int _94;
  long unsigned int _95;
  long unsigned int _96;
  long unsigned int _97;
  long unsigned int _98;
  long unsigned int _99;
  long unsigned int _100;
  long unsigned int _101;
  sizetype _102;
  sizetype _103;
  uint32 * _104;
  long unsigned int _105;
  unsigned int _106;
  unsigned int _107;
  long unsigned int _108;
  long unsigned int _109;
  long unsigned int _110;
  long unsigned int _111;
  long unsigned int _112;
  long unsigned int _113;
  long unsigned int _114;
  long unsigned int _115;
  long unsigned int _116;
  long unsigned int _117;
  long unsigned int _118;
  long unsigned int _119;
  long unsigned int _120;
  long unsigned int _121;
  long unsigned int _122;
  long unsigned int _123;
  sizetype _124;
  sizetype _125;
  uint32 * _126;
  long unsigned int _127;
  long unsigned int _128;
  long unsigned int _129;
  long unsigned int _130;
  long unsigned int _131;
  long unsigned int _132;
  long unsigned int _133;
  long unsigned int _134;
  long unsigned int _135;
  long unsigned int _136;
  long unsigned int _137;
  long unsigned int _138;
  long unsigned int _139;
  long unsigned int _140;
  long unsigned int _141;
  long unsigned int _142;
  long unsigned int _143;
  long unsigned int _144;
  sizetype _145;
  sizetype _146;
  uint32 * _147;
  long unsigned int _148;
  long unsigned int _149;
  long unsigned int _150;
  long unsigned int _151;
  long unsigned int _152;
  long unsigned int _153;
  long unsigned int _154;
  long unsigned int _155;
  long unsigned int _156;
  long unsigned int _157;
  long unsigned int _158;
  long unsigned int _159;
  long unsigned int _160;
  long unsigned int _161;
  long unsigned int _162;
  long unsigned int _163;
  long unsigned int _164;
  long unsigned int _165;
  sizetype _166;
  sizetype _167;
  uint32 * _168;
  long unsigned int _169;
  long unsigned int _170;
  long unsigned int _171;
  long unsigned int _172;
  long unsigned int _173;
  long unsigned int _174;
  long unsigned int _175;
  long unsigned int _176;
  long unsigned int _177;
  long unsigned int _178;
  long unsigned int _179;
  long unsigned int _180;
  long unsigned int _181;
  long unsigned int _182;
  long unsigned int _183;
  long unsigned int _184;
  long unsigned int _185;
  long unsigned int _186;
  sizetype _187;
  sizetype _188;
  uint32 * _189;
  long unsigned int _190;
  long unsigned int _191;
  long unsigned int _192;
  unsigned char _193;
  long unsigned int _194;
  long unsigned int _195;
  long unsigned int _196;
  long unsigned int _197;
  unsigned char _198;
  long unsigned int _199;
  long unsigned int _200;
  long unsigned int _201;
  long unsigned int _202;
  long unsigned int _203;
  unsigned char _204;
  long unsigned int _205;
  long unsigned int _206;
  long unsigned int _207;
  long unsigned int _208;
  unsigned char _209;
  long unsigned int _210;
  long unsigned int _211;
  unsigned int _212;
  unsigned int _213;
  uint32 * _214;
  long unsigned int _215;
  long unsigned int _216;
  long unsigned int _217;
  unsigned char _218;
  long unsigned int _219;
  long unsigned int _220;
  long unsigned int _221;
  long unsigned int _222;
  unsigned char _223;
  long unsigned int _224;
  long unsigned int _225;
  long unsigned int _226;
  long unsigned int _227;
  long unsigned int _228;
  unsigned char _229;
  long unsigned int _230;
  long unsigned int _231;
  long unsigned int _232;
  long unsigned int _233;
  unsigned char _234;
  long unsigned int _235;
  long unsigned int _236;
  sizetype _237;
  sizetype _238;
  uint32 * _239;
  long unsigned int _240;
  long unsigned int _241;
  long unsigned int _242;
  unsigned char _243;
  long unsigned int _244;
  long unsigned int _245;
  long unsigned int _246;
  long unsigned int _247;
  unsigned char _248;
  long unsigned int _249;
  long unsigned int _250;
  long unsigned int _251;
  long unsigned int _252;
  long unsigned int _253;
  unsigned char _254;
  long unsigned int _255;
  long unsigned int _256;
  long unsigned int _257;
  long unsigned int _258;
  unsigned char _259;
  long unsigned int _260;
  long unsigned int _261;
  sizetype _262;
  sizetype _263;
  uint32 * _264;
  long unsigned int _265;
  long unsigned int _266;
  long unsigned int _267;
  unsigned char _268;
  long unsigned int _269;
  long unsigned int _270;
  long unsigned int _271;
  long unsigned int _272;
  unsigned char _273;
  long unsigned int _274;
  long unsigned int _275;
  long unsigned int _276;
  long unsigned int _277;
  long unsigned int _278;
  unsigned char _279;
  long unsigned int _280;
  long unsigned int _281;
  long unsigned int _282;
  long unsigned int _283;
  unsigned char _284;
  long unsigned int _285;
  long unsigned int _286;
  sizetype _287;
  sizetype _288;
  uint32 * _289;
  long unsigned int _290;
  long unsigned int _291;
  long unsigned int _299;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG T0 => 0
  # DEBUG BEGIN_STMT
  # DEBUG T1 => 0
  # DEBUG BEGIN_STMT
  # DEBUG T2 => 0
  # DEBUG BEGIN_STMT
  # DEBUG T3 => 0
  # DEBUG BEGIN_STMT
  S0 = 0;
  # DEBUG BEGIN_STMT
  S1 = 0;
  # DEBUG BEGIN_STMT
  S2 = 0;
  # DEBUG BEGIN_STMT
  S3 = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Context_305(D)->SzeTurn;
  _2 = _1 >> 1;
  numberOfLoops_306 = (const uint8) _2;
  # DEBUG numberOfLoops => numberOfLoops_306
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) _1;
  keyExpdFastOffset_307 = _4 * 4;
  # DEBUG keyExpdFastOffset => keyExpdFastOffset_307
  # DEBUG BEGIN_STMT
  Crypto_AESCommonMapState (&S0, &S1, &S2, &S3, Context_305(D));
  # DEBUG BEGIN_STMT
  _5 = Context_305(D)->KeyExpdFast;
  _6 = *_5;
  S0.4_7 = S0;
  _8 = _6 ^ S0.4_7;
  S0 = _8;
  # DEBUG BEGIN_STMT
  _10 = MEM[(uint32 *)_5 + 4B];
  S1.5_11 = S1;
  _12 = _10 ^ S1.5_11;
  S1 = _12;
  # DEBUG BEGIN_STMT
  _14 = MEM[(uint32 *)_5 + 8B];
  S2.6_15 = S2;
  _16 = _14 ^ S2.6_15;
  S2 = _16;
  # DEBUG BEGIN_STMT
  _18 = MEM[(uint32 *)_5 + 12B];
  S3.7_19 = S3;
  _20 = _18 ^ S3.7_19;
  S3 = _20;
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  keyExpdFastLoopOffset_322 = Index_296 * 8;
  # DEBUG keyExpdFastLoopOffset => keyExpdFastLoopOffset_322
  # DEBUG BEGIN_STMT
  S0.8_21 = S0;
  _22 = S0.8_21 >> 24;
  _23 = Crypto_AES_Te0[_22];
  S1.9_24 = S1;
  _25 = S1.9_24 >> 16;
  _26 = _25 & 255;
  _27 = Crypto_AES_Te0[_26];
  _28 = _27 r>> 8;
  _29 = _23 ^ _28;
  S2.10_30 = S2;
  _31 = S2.10_30 >> 8;
  _32 = _31 & 255;
  _33 = Crypto_AES_Te0[_32];
  _34 = _33 r>> 16;
  _35 = _29 ^ _34;
  S3.11_36 = S3;
  _37 = S3.11_36 & 255;
  _38 = Crypto_AES_Te0[_37];
  _39 = _38 r>> 24;
  _40 = _35 ^ _39;
  _41 = (sizetype) keyExpdFastLoopOffset_322;
  _42 = _41 + 4;
  _43 = _42 * 4;
  _44 = _5 + _43;
  _45 = *_44;
  T0_323 = _40 ^ _45;
  # DEBUG T0 => T0_323
  # DEBUG BEGIN_STMT
  _46 = S1.9_24 >> 24;
  _47 = Crypto_AES_Te0[_46];
  _48 = S2.10_30 >> 16;
  _49 = _48 & 255;
  _50 = Crypto_AES_Te0[_49];
  _51 = _50 r>> 8;
  _52 = _47 ^ _51;
  _53 = S3.11_36 >> 8;
  _54 = _53 & 255;
  _55 = Crypto_AES_Te0[_54];
  _56 = _55 r>> 16;
  _57 = _52 ^ _56;
  _58 = S0.8_21 & 255;
  _59 = Crypto_AES_Te0[_58];
  _60 = _59 r>> 24;
  _61 = _57 ^ _60;
  _62 = _41 + 5;
  _63 = _62 * 4;
  _64 = _5 + _63;
  _65 = *_64;
  T1_324 = _61 ^ _65;
  # DEBUG T1 => T1_324
  # DEBUG BEGIN_STMT
  _66 = S2.10_30 >> 24;
  _67 = Crypto_AES_Te0[_66];
  _68 = S3.11_36 >> 16;
  _69 = _68 & 255;
  _70 = Crypto_AES_Te0[_69];
  _71 = _70 r>> 8;
  _72 = _67 ^ _71;
  _73 = S0.8_21 >> 8;
  _74 = _73 & 255;
  _75 = Crypto_AES_Te0[_74];
  _76 = _75 r>> 16;
  _77 = _72 ^ _76;
  _78 = S1.9_24 & 255;
  _79 = Crypto_AES_Te0[_78];
  _80 = _79 r>> 24;
  _81 = _77 ^ _80;
  _82 = _41 + 6;
  _83 = _82 * 4;
  _84 = _5 + _83;
  _85 = *_84;
  T2_325 = _81 ^ _85;
  # DEBUG T2 => T2_325
  # DEBUG BEGIN_STMT
  _86 = S3.11_36 >> 24;
  _87 = Crypto_AES_Te0[_86];
  _88 = S0.8_21 >> 16;
  _89 = _88 & 255;
  _90 = Crypto_AES_Te0[_89];
  _91 = _90 r>> 8;
  _92 = _87 ^ _91;
  _93 = S1.9_24 >> 8;
  _94 = _93 & 255;
  _95 = Crypto_AES_Te0[_94];
  _96 = _95 r>> 16;
  _97 = _92 ^ _96;
  _98 = S2.10_30 & 255;
  _99 = Crypto_AES_Te0[_98];
  _100 = _99 r>> 24;
  _101 = _97 ^ _100;
  _102 = _41 + 7;
  _103 = _102 * 4;
  _104 = _5 + _103;
  _105 = *_104;
  T3_326 = _101 ^ _105;
  # DEBUG T3 => T3_326
  # DEBUG BEGIN_STMT
  _106 = (unsigned int) Index_296;
  _299 = _2 & 255;
  _107 = _299 + 4294967295;
  if (_106 < _107)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  _108 = T0_323 >> 24;
  _109 = Crypto_AES_Te0[_108];
  _110 = T1_324 >> 16;
  _111 = _110 & 255;
  _112 = Crypto_AES_Te0[_111];
  _113 = _112 r>> 8;
  _114 = _109 ^ _113;
  _115 = T2_325 >> 8;
  _116 = _115 & 255;
  _117 = Crypto_AES_Te0[_116];
  _118 = _117 r>> 16;
  _119 = _114 ^ _118;
  _120 = T3_326 & 255;
  _121 = Crypto_AES_Te0[_120];
  _122 = _121 r>> 24;
  _123 = _119 ^ _122;
  _124 = _41 + 8;
  _125 = _124 * 4;
  _126 = _5 + _125;
  _127 = *_126;
  _128 = _123 ^ _127;
  S0 = _128;
  # DEBUG BEGIN_STMT
  _129 = T1_324 >> 24;
  _130 = Crypto_AES_Te0[_129];
  _131 = T2_325 >> 16;
  _132 = _131 & 255;
  _133 = Crypto_AES_Te0[_132];
  _134 = _133 r>> 8;
  _135 = _130 ^ _134;
  _136 = T3_326 >> 8;
  _137 = _136 & 255;
  _138 = Crypto_AES_Te0[_137];
  _139 = _138 r>> 16;
  _140 = _135 ^ _139;
  _141 = T0_323 & 255;
  _142 = Crypto_AES_Te0[_141];
  _143 = _142 r>> 24;
  _144 = _140 ^ _143;
  _145 = _41 + 9;
  _146 = _145 * 4;
  _147 = _5 + _146;
  _148 = *_147;
  _149 = _144 ^ _148;
  S1 = _149;
  # DEBUG BEGIN_STMT
  _150 = T2_325 >> 24;
  _151 = Crypto_AES_Te0[_150];
  _152 = T3_326 >> 16;
  _153 = _152 & 255;
  _154 = Crypto_AES_Te0[_153];
  _155 = _154 r>> 8;
  _156 = _151 ^ _155;
  _157 = T0_323 >> 8;
  _158 = _157 & 255;
  _159 = Crypto_AES_Te0[_158];
  _160 = _159 r>> 16;
  _161 = _156 ^ _160;
  _162 = T1_324 & 255;
  _163 = Crypto_AES_Te0[_162];
  _164 = _163 r>> 24;
  _165 = _161 ^ _164;
  _166 = _41 + 10;
  _167 = _166 * 4;
  _168 = _5 + _167;
  _169 = *_168;
  _170 = _165 ^ _169;
  S2 = _170;
  # DEBUG BEGIN_STMT
  _171 = T3_326 >> 24;
  _172 = Crypto_AES_Te0[_171];
  _173 = T0_323 >> 16;
  _174 = _173 & 255;
  _175 = Crypto_AES_Te0[_174];
  _176 = _175 r>> 8;
  _177 = _172 ^ _176;
  _178 = T1_324 >> 8;
  _179 = _178 & 255;
  _180 = Crypto_AES_Te0[_179];
  _181 = _180 r>> 16;
  _182 = _177 ^ _181;
  _183 = T2_325 & 255;
  _184 = Crypto_AES_Te0[_183];
  _185 = _184 r>> 24;
  _186 = _182 ^ _185;
  _187 = _41 + 11;
  _188 = _187 * 4;
  _189 = _5 + _188;
  _190 = *_189;
  _191 = _186 ^ _190;
  S3 = _191;

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  Index_331 = Index_296 + 1;
  # DEBUG Index => Index_331

  <bb 6> [local count: 1073741824]:
  # T0_292 = PHI <0(2), T0_323(5)>
  # T1_293 = PHI <0(2), T1_324(5)>
  # T2_294 = PHI <0(2), T2_325(5)>
  # T3_295 = PHI <0(2), T3_326(5)>
  # Index_296 = PHI <0(2), Index_331(5)>
  # DEBUG Index => Index_296
  # DEBUG T3 => T3_295
  # DEBUG T2 => T2_294
  # DEBUG T1 => T1_293
  # DEBUG T0 => T0_292
  # DEBUG BEGIN_STMT
  if (Index_296 < numberOfLoops_306)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # T0_3 = PHI <T0_292(6)>
  # T1_9 = PHI <T1_293(6)>
  # T2_13 = PHI <T2_294(6)>
  # T3_17 = PHI <T3_295(6)>
  # DEBUG BEGIN_STMT
  _192 = T0_3 >> 24;
  _193 = Crypto_AES_SboxNrm[_192];
  _194 = (long unsigned int) _193;
  _195 = _194 << 24;
  _196 = T1_9 >> 16;
  _197 = _196 & 255;
  _198 = Crypto_AES_SboxNrm[_197];
  _199 = (long unsigned int) _198;
  _200 = _199 << 16;
  _201 = _195 ^ _200;
  _202 = T2_13 >> 8;
  _203 = _202 & 255;
  _204 = Crypto_AES_SboxNrm[_203];
  _205 = (long unsigned int) _204;
  _206 = _205 << 8;
  _207 = _201 ^ _206;
  _208 = T3_17 & 255;
  _209 = Crypto_AES_SboxNrm[_208];
  _210 = (long unsigned int) _209;
  _211 = _207 ^ _210;
  _212 = (unsigned int) keyExpdFastOffset_307;
  _213 = _212 * 4;
  _214 = _5 + _213;
  _215 = *_214;
  _216 = _211 ^ _215;
  S0 = _216;
  # DEBUG BEGIN_STMT
  _217 = T1_9 >> 24;
  _218 = Crypto_AES_SboxNrm[_217];
  _219 = (long unsigned int) _218;
  _220 = _219 << 24;
  _221 = T2_13 >> 16;
  _222 = _221 & 255;
  _223 = Crypto_AES_SboxNrm[_222];
  _224 = (long unsigned int) _223;
  _225 = _224 << 16;
  _226 = _220 ^ _225;
  _227 = T3_17 >> 8;
  _228 = _227 & 255;
  _229 = Crypto_AES_SboxNrm[_228];
  _230 = (long unsigned int) _229;
  _231 = _230 << 8;
  _232 = _226 ^ _231;
  _233 = T0_3 & 255;
  _234 = Crypto_AES_SboxNrm[_233];
  _235 = (long unsigned int) _234;
  _236 = _232 ^ _235;
  _237 = _212 + 1;
  _238 = _237 * 4;
  _239 = _5 + _238;
  _240 = *_239;
  _241 = _236 ^ _240;
  S1 = _241;
  # DEBUG BEGIN_STMT
  _242 = T2_13 >> 24;
  _243 = Crypto_AES_SboxNrm[_242];
  _244 = (long unsigned int) _243;
  _245 = _244 << 24;
  _246 = T3_17 >> 16;
  _247 = _246 & 255;
  _248 = Crypto_AES_SboxNrm[_247];
  _249 = (long unsigned int) _248;
  _250 = _249 << 16;
  _251 = _245 ^ _250;
  _252 = T0_3 >> 8;
  _253 = _252 & 255;
  _254 = Crypto_AES_SboxNrm[_253];
  _255 = (long unsigned int) _254;
  _256 = _255 << 8;
  _257 = _251 ^ _256;
  _258 = T1_9 & 255;
  _259 = Crypto_AES_SboxNrm[_258];
  _260 = (long unsigned int) _259;
  _261 = _257 ^ _260;
  _262 = _212 + 2;
  _263 = _262 * 4;
  _264 = _5 + _263;
  _265 = *_264;
  _266 = _261 ^ _265;
  S2 = _266;
  # DEBUG BEGIN_STMT
  _267 = T3_17 >> 24;
  _268 = Crypto_AES_SboxNrm[_267];
  _269 = (long unsigned int) _268;
  _270 = _269 << 24;
  _271 = T0_3 >> 16;
  _272 = _271 & 255;
  _273 = Crypto_AES_SboxNrm[_272];
  _274 = (long unsigned int) _273;
  _275 = _274 << 16;
  _276 = _270 ^ _275;
  _277 = T1_9 >> 8;
  _278 = _277 & 255;
  _279 = Crypto_AES_SboxNrm[_278];
  _280 = (long unsigned int) _279;
  _281 = _280 << 8;
  _282 = _276 ^ _281;
  _283 = T2_13 & 255;
  _284 = Crypto_AES_SboxNrm[_283];
  _285 = (long unsigned int) _284;
  _286 = _282 ^ _285;
  _287 = _212 + 3;
  _288 = _287 * 4;
  _289 = _5 + _288;
  _290 = *_289;
  _291 = _286 ^ _290;
  S3 = _291;
  # DEBUG BEGIN_STMT
  Crypto_AESCommonUnmapState (&S0, &S1, &S2, &S3, Context_305(D));
  S0 ={v} {CLOBBER};
  S1 ={v} {CLOBBER};
  S2 ={v} {CLOBBER};
  S3 ={v} {CLOBBER};
  return;

}



;; Function Crypto_AESEncryptMainFunction (Crypto_AESEncryptMainFunction, funcdef_no=17, decl_uid=6532, cgraph_uid=18, symbol_order=26)

Modification phase of node Crypto_AESEncryptMainFunction/26
Crypto_AESEncryptMainFunction (Std_ReturnType * Result, boolean * Busy)
{
  long unsigned int _1;
  unsigned char _2;
  Std_ReturnType * _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AESEncryptContext.ObjId;
  _2 = Crypto_CheckSkipMain (Result_8(D), Busy_9(D), _1);
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.IsBusy = Busy_9(D);
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.Result = Result_8(D);
  # DEBUG BEGIN_STMT
  if (Result_8(D) != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 375809638]:
  if (Busy_9(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 263066746]:
  # DEBUG BEGIN_STMT
  *Busy_9(D) = 1;
  # DEBUG BEGIN_STMT
  _3 = Crypto_AESEncryptContext.Result;
  *_3 = 0;

  <bb 6> [local count: 536870908]:
  # DEBUG D#1 => Result_8(D)
  Crypto_AESEncryptMainFunction.part.0 (Busy_9(D));

  <bb 7> [local count: 1073741824]:
<L44>:
  return;

}



;; Function Crypto_AESHelperEncryptSynchronousMainCall (Crypto_AESHelperEncryptSynchronousMainCall, funcdef_no=23, decl_uid=6538, cgraph_uid=24, symbol_order=32)

Modification phase of node Crypto_AESHelperEncryptSynchronousMainCall/32
Crypto_AESHelperEncryptSynchronousMainCall ()
{
  unsigned char Crypto_HelperEncryptFlgCallbackNotification.1_1;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Crypto_HelperEncryptFlgCallbackNotification ={v} 0;
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_HelperEncryptFlgCallbackNotification.1_1 ={v} Crypto_HelperEncryptFlgCallbackNotification;
  if (Crypto_HelperEncryptFlgCallbackNotification.1_1 == 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}



;; Function Crypto_AES_Helper_Encrypt_Start (Crypto_AES_Helper_Encrypt_Start, funcdef_no=0, decl_uid=5627, cgraph_uid=1, symbol_order=9)

Modification phase of node Crypto_AES_Helper_Encrypt_Start/9
Crypto_AES_Helper_Encrypt_Start (const uint32 ObjId, void (*<T542>) (struct Crypto_JobType *, uint8) Crypto_Generic_Callback, struct Crypto_JobType * Job, Crypto_ProcessingType IsSync, const struct Crypto_SymKeyType * KeyPtr)
{
  struct Crypto_AES_ConfigType Temp;
  Std_ReturnType RetVal;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = KeyPtr_5(D)->length;
  if (_1 == 16)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Temp.TypeKey = 16;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_1 == 24)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  Temp.TypeKey = 24;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  if (_1 == 32)
    goto <bb 7>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 7> [local count: 159025459]:
  # DEBUG BEGIN_STMT
  Temp.TypeKey = 32;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 765045346]:
  # DEBUG BEGIN_STMT
  Temp.Job = Job_9(D);
  # DEBUG BEGIN_STMT
  Temp.ObjId = ObjId_11(D);
  # DEBUG BEGIN_STMT
  Crypto_ModeEncryptCallBack = Crypto_Generic_Callback_13(D);
  # DEBUG BEGIN_STMT
  if (IsSync_15(D) == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 382522672]:
  # DEBUG BEGIN_STMT
  Temp.Crypto_Generic_Callback = Crypto_Generic_Callback_13(D);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 382522672]:
  # DEBUG BEGIN_STMT
  Temp.Crypto_Generic_Callback = Crypto_AES_Helper_Encrypt_CallbackNotification;

  <bb 12> [local count: 765045345]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptStart (&Temp, KeyPtr_5(D));

  <bb 13> [local count: 1073741824]:
  # RetVal_20 = PHI <1(6), 0(12)>
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Temp ={v} {CLOBBER};
  return RetVal_20;

}



;; Function Crypto_AES_Helper_Encrypt_Update (Crypto_AES_Helper_Encrypt_Update, funcdef_no=1, decl_uid=5633, cgraph_uid=2, symbol_order=10)

Modification phase of node Crypto_AES_Helper_Encrypt_Update/10
Crypto_AES_Helper_Encrypt_Update (Crypto_ProcessingType IsSync, const uint8 * CipherTextPtr, uint32 CipherTextLength, uint8 * PlainTextPtr, uint32 * PlainTextLengthPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptUpdate (CipherTextPtr_3(D), CipherTextLength_4(D), PlainTextPtr_5(D), PlainTextLengthPtr_6(D));
  # DEBUG BEGIN_STMT
  if (IsSync_8(D) == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Crypto_AESHelperEncryptSynchronousMainCall ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Crypto_AES_Helper_Encrypt_Finish (Crypto_AES_Helper_Encrypt_Finish, funcdef_no=2, decl_uid=5635, cgraph_uid=3, symbol_order=11)

Modification phase of node Crypto_AES_Helper_Encrypt_Finish/11
Crypto_AES_Helper_Encrypt_Finish (Crypto_ProcessingType IsSync)
{
  struct Crypto_JobType * _1;
  uint32 * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AESEncryptContext.Job;
  _2 = _1->jobPrimitiveInputOutput.outputLengthPtr;
  Crypto_AESEncryptContext.TmpOutputLengthPtr = _2;
  # DEBUG BEGIN_STMT
  _1->jobPrimitiveInputOutput.outputLengthPtr = &Crypto_AESEncryptContext.KeySeedLen;
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptFinish ();
  # DEBUG BEGIN_STMT
  if (IsSync_8(D) == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Crypto_AESHelperEncryptSynchronousMainCall ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Crypto_AES_Helper_Encrypt_SyncSingleCall (Crypto_AES_Helper_Encrypt_SyncSingleCall, funcdef_no=3, decl_uid=5641, cgraph_uid=4, symbol_order=12)

Modification phase of node Crypto_AES_Helper_Encrypt_SyncSingleCall/12
Crypto_AES_Helper_Encrypt_SyncSingleCall (const uint8 * InputPtr, uint32 InputLength, uint8 * OutputPtr, uint32 * OutputLengthPtr, const struct Crypto_SymKeyType * KeyPtr)
{
  struct Crypto_AES_ContextType Context;
  Std_ReturnType RetVal;
  long unsigned int _1;
  const uint8[16] * _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Context.KeyExpdFast = &Crypto_AesEncryptExpKey;
  # DEBUG BEGIN_STMT
  _1 = KeyPtr_7(D)->length;
  if (_1 == 16)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Context.SzeKey = 4;
  # DEBUG BEGIN_STMT
  Context.SzeTurn = 10;
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (_1 == 24)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  Context.SzeKey = 6;
  # DEBUG BEGIN_STMT
  Context.SzeTurn = 12;
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  if (_1 == 32)
    goto <bb 8>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 8> [local count: 159025459]:
  # DEBUG BEGIN_STMT
  Context.SzeKey = 8;
  # DEBUG BEGIN_STMT
  Context.SzeTurn = 14;
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 765045346]:
  # DEBUG BEGIN_STMT
  Context.KeySeedLen = _1;
  # DEBUG BEGIN_STMT
  _2 = &KeyPtr_7(D)->data;
  TS_MemCpy32 (&Context.KeySeed, _2, _1);
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Context.AesState, InputPtr_16(D), 16);
  # DEBUG BEGIN_STMT
  Crypto_AESCommonCalculateKeySchedule (&Context);
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptCalculateRounds (&Context);
  # DEBUG BEGIN_STMT
  _3 = *OutputLengthPtr_20(D);
  if (_3 <= 16)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 382522672]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (OutputPtr_21(D), &Context.AesState, _3);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 382522672]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (OutputPtr_21(D), &Context.AesState, 16);
  # DEBUG BEGIN_STMT
  *OutputLengthPtr_20(D) = 16;

  <bb 12> [local count: 1073741824]:
  # RetVal_26 = PHI <1(6), 0(10), 0(11)>
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Context ={v} {CLOBBER};
  return RetVal_26;

}



;; Function Crypto_AL_AES_EncryptPreCalc (Crypto_AL_AES_EncryptPreCalc, funcdef_no=4, decl_uid=5654, cgraph_uid=5, symbol_order=13)

Modification phase of node Crypto_AL_AES_EncryptPreCalc/13
Crypto_AL_AES_EncryptPreCalc (const uint8 * InputPtr, uint8 * OutputPtr, uint32 * OutputLengthPtr, uint32 KeyLength, uint32 * expKey)
{
  struct Crypto_AES_ContextType Context;
  Std_ReturnType RetVal;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Context.KeyExpdLen = 60;
  # DEBUG BEGIN_STMT
  Context.KeyExpdFast = expKey_5(D);
  # DEBUG BEGIN_STMT
  if (KeyLength_7(D) == 16)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Context.SzeKey = 4;
  # DEBUG BEGIN_STMT
  Context.SzeTurn = 10;
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (KeyLength_7(D) == 24)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  Context.SzeKey = 6;
  # DEBUG BEGIN_STMT
  Context.SzeTurn = 12;
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 467721939]:
  # DEBUG BEGIN_STMT
  if (KeyLength_7(D) == 32)
    goto <bb 8>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 8> [local count: 159025459]:
  # DEBUG BEGIN_STMT
  Context.SzeKey = 8;
  # DEBUG BEGIN_STMT
  Context.SzeTurn = 14;
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 765045346]:
  # DEBUG BEGIN_STMT
  Context.KeySeedLen = KeyLength_7(D);
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (&Context.AesState, InputPtr_15(D), 16);
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptCalculateRounds (&Context);
  # DEBUG BEGIN_STMT
  _1 = *OutputLengthPtr_18(D);
  if (_1 <= 16)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 382522672]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (OutputPtr_19(D), &Context.AesState, _1);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 382522672]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (OutputPtr_19(D), &Context.AesState, 16);
  # DEBUG BEGIN_STMT
  *OutputLengthPtr_18(D) = 16;

  <bb 12> [local count: 1073741824]:
  # RetVal_24 = PHI <1(6), 0(10), 0(11)>
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  Context ={v} {CLOBBER};
  return RetVal_24;

}



;; Function Crypto_AES_Helper_Encrypt_MainFunction (Crypto_AES_Helper_Encrypt_MainFunction, funcdef_no=5, decl_uid=5643, cgraph_uid=6, symbol_order=14)

Modification phase of node Crypto_AES_Helper_Encrypt_MainFunction/14
Crypto_AES_Helper_Encrypt_MainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptMainFunction (&Crypto_HelperEncryptResult, &Crypto_HelperEncryptBusy);
  return;

}



;; Function Crypto_AL_ENCRYPT_AES_ECB_Reset (Crypto_AL_ENCRYPT_AES_ECB_Reset, funcdef_no=6, decl_uid=5656, cgraph_uid=7, symbol_order=15)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_Reset/15
Crypto_AL_ENCRYPT_AES_ECB_Reset ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  TS_MemBZero32 (&Crypto_AESEncryptContext, 120);
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  return;

}



;; Function Crypto_AL_ENCRYPT_AES_ECB_Start (Crypto_AL_ENCRYPT_AES_ECB_Start, funcdef_no=7, decl_uid=5659, cgraph_uid=8, symbol_order=16)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_Start/16
Crypto_AL_ENCRYPT_AES_ECB_Start (uint32 ObjectId, struct Crypto_JobType * Job)
{
  struct Crypto_AES_ConfigType Crypto_AES_ECB_ENCRYPT_Cfg;
  Std_ReturnType RetVal;
  const struct Crypto_JobPrimitiveInfoType * _1;
  const struct Crypto_PrimitiveInfoType * _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_AES_ECB_ENCRYPT_Cfg.Crypto_Generic_Callback = 0B;
  Crypto_AES_ECB_ENCRYPT_Cfg.TypeKey = 16;
  Crypto_AES_ECB_ENCRYPT_Cfg.ValuPrio = 0;
  Crypto_AES_ECB_ENCRYPT_Cfg.ObjId = 0;
  Crypto_AES_ECB_ENCRYPT_Cfg.Job = 0B;
  # DEBUG BEGIN_STMT
  Crypto_AL_ENCRYPT_AES_ECB_Reset ();
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _1 = Job_14(D)->jobPrimitiveInfo;
  _2 = _1->primitiveInfo;
  _3 = _2->algorithm.keyLength;
  Crypto_AesKey.length = _3;
  # DEBUG BEGIN_STMT
  Crypto_AES_ECB_ENCRYPT_Cfg.TypeKey = _3;
  # DEBUG BEGIN_STMT
  if (_3 == 16)
    goto <bb 5>; [20.24%]
  else
    goto <bb 3>; [79.76%]

  <bb 3> [local count: 856416480]:
  if (_3 == 24)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 565234877]:
  if (_3 == 32)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 700686807]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AES_ECB_ENCRYPT_Cfg.Crypto_Generic_Callback = Crypto_AL_ENCRYPT_AES_ECB_CallBack;
  # DEBUG BEGIN_STMT
  Crypto_AES_ECB_ENCRYPT_Cfg.Job = Job_14(D);
  # DEBUG BEGIN_STMT
  Crypto_AES_ECB_ENCRYPT_Cfg.ObjId = ObjectId_19(D);
  # DEBUG BEGIN_STMT
  _4 = Job_14(D)->cryptoKeyId;
  RetVal_22 = Crypto_AL_KeyElementGet (_4, 1, &Crypto_AesKey.data, &Crypto_AesKey.length);
  # DEBUG RetVal => RetVal_22
  # DEBUG BEGIN_STMT
  if (RetVal_22 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 231226646]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptStart (&Crypto_AES_ECB_ENCRYPT_Cfg, &Crypto_AesKey);

  <bb 7> [local count: 1073741824]:
  # RetVal_5 = PHI <1(4), RetVal_22(5), 0(6)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  Crypto_AES_ECB_ENCRYPT_Cfg ={v} {CLOBBER};
  return RetVal_5;

}



;; Function Crypto_AL_ENCRYPT_AES_ECB_Update (Crypto_AL_ENCRYPT_AES_ECB_Update, funcdef_no=8, decl_uid=5662, cgraph_uid=9, symbol_order=17)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_Update/17
Crypto_AL_ENCRYPT_AES_ECB_Update (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  unsigned char _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Crypto_AESEncryptContext.CtxState;
  if (_1 == 2)
    goto <bb 3>; [48.89%]
  else
    goto <bb 5>; [51.11%]

  <bb 3> [local count: 524952378]:
  # DEBUG BEGIN_STMT
  _2 = Job_8(D)->jobPrimitiveInputOutput.inputLength;
  if (_2 == 16)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 178483810]:
  # DEBUG D#3 => ObjectId_3(D)
  RetVal_4 = Crypto_AL_ENCRYPT_AES_ECB_Update.part.0 (Job_8(D));

  <bb 5> [local count: 1073741824]:
  # RetVal_5 = PHI <1(3), 2(2), RetVal_4(4)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_AL_ENCRYPT_AES_ECB_Finish (Crypto_AL_ENCRYPT_AES_ECB_Finish, funcdef_no=9, decl_uid=5665, cgraph_uid=10, symbol_order=18)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_Finish/18
Crypto_AL_ENCRYPT_AES_ECB_Finish (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Crypto_AESEncryptContext.CtxState;
  if (_1 == 2)
    goto <bb 3>; [32.03%]
  else
    goto <bb 4>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptFinish ();
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_2 = PHI <0(3), 2(2)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_AL_ENCRYPT_AES_ECB_CallBack (Crypto_AL_ENCRYPT_AES_ECB_CallBack, funcdef_no=13, decl_uid=6519, cgraph_uid=14, symbol_order=22)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_CallBack/22
Crypto_AL_ENCRYPT_AES_ECB_CallBack (struct Crypto_JobType * Job, uint8 Result)
{
  const struct Crypto_JobPrimitiveInfoType * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _1 = Job_6(D)->jobPrimitiveInfo;
  _2 = _1->processingType;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  Crypto_AL_ENCRYPT_AES_ECB_CallBack.part.0 (Job_6(D), Result_7(D));

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Crypto_AL_ENCRYPT_AES_ECB_Cancel (Crypto_AL_ENCRYPT_AES_ECB_Cancel, funcdef_no=10, decl_uid=5668, cgraph_uid=11, symbol_order=19)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_Cancel/19
Crypto_AL_ENCRYPT_AES_ECB_Cancel (uint32 ObjectId, const struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  _1 = Crypto_AESEncryptContext.CtxState;
  if (_1 == 2)
    goto <bb 3>; [32.03%]
  else
    goto <bb 4>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  Crypto_AL_ENCRYPT_AES_ECB_Reset ();
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 729822319]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptContext.CancelFlag = 1;
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



;; Function Crypto_AL_ENCRYPT_AES_ECB_MainFunction (Crypto_AL_ENCRYPT_AES_ECB_MainFunction, funcdef_no=11, decl_uid=5671, cgraph_uid=12, symbol_order=20)

Modification phase of node Crypto_AL_ENCRYPT_AES_ECB_MainFunction/20
Crypto_AL_ENCRYPT_AES_ECB_MainFunction (Std_ReturnType * Result, boolean * Busy)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AESEncryptMainFunction (Result_2(D), Busy_3(D));
  return;

}



;; Function Crypto_AL_AESPreCalculateKeySchedule (Crypto_AL_AESPreCalculateKeySchedule, funcdef_no=12, decl_uid=5648, cgraph_uid=13, symbol_order=21)

Modification phase of node Crypto_AL_AESPreCalculateKeySchedule/21
Crypto_AL_AESPreCalculateKeySchedule (uint8 SzeKey, uint32 SzeTurn, uint8 * KeySeed, void * KeyExpdFastPtr)
{
  uint32 temp;
  uint32 ExpandedKey[60];
  const uint32 Crypto_AES_Rcon_Fast[10];
  uint8 Index;
  unsigned int _1;
  unsigned int _2;
  uint8 * _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  sizetype _7;
  uint8 * _8;
  unsigned char _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  sizetype _13;
  uint8 * _14;
  unsigned char _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  sizetype _19;
  uint8 * _20;
  unsigned char _21;
  long unsigned int _22;
  int _23;
  long unsigned int _24;
  unsigned int _25;
  unsigned char _26;
  long unsigned int _27;
  long unsigned int _28;
  unsigned char _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  unsigned char _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  unsigned char _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;
  unsigned char _44;
  long unsigned int _45;
  long unsigned int _46;
  unsigned char _47;
  unsigned int _48;
  unsigned int _49;
  long unsigned int _50;
  long unsigned int _51;
  unsigned char _52;
  long unsigned int _53;
  long unsigned int _54;
  long unsigned int _55;
  long unsigned int _56;
  unsigned char _57;
  long unsigned int _58;
  long unsigned int _59;
  long unsigned int _60;
  long unsigned int _61;
  long unsigned int _62;
  unsigned char _63;
  long unsigned int _64;
  long unsigned int _65;
  long unsigned int _66;
  long unsigned int _67;
  unsigned char _68;
  long unsigned int _69;
  int _70;
  int _71;
  int _72;
  long unsigned int _73;
  long unsigned int _74;
  long unsigned int _75;
  long unsigned int _76;
  long unsigned int _77;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AES_Rcon_Fast = *.LC0;
  # DEBUG BEGIN_STMT
  ExpandedKey = {};
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630220]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned int) Index_78;
  _2 = _1 * 4;
  _3 = KeySeed_97(D) + _2;
  _4 = *_3;
  _5 = (long unsigned int) _4;
  _6 = _5 << 24;
  _7 = _2 + 1;
  _8 = KeySeed_97(D) + _7;
  _9 = *_8;
  _10 = (long unsigned int) _9;
  _11 = _10 << 16;
  _12 = _6 | _11;
  _13 = _2 + 2;
  _14 = KeySeed_97(D) + _13;
  _15 = *_14;
  _16 = (long unsigned int) _15;
  _17 = _16 << 8;
  _18 = _12 | _17;
  _19 = _2 + 3;
  _20 = KeySeed_97(D) + _19;
  _21 = *_20;
  _22 = (long unsigned int) _21;
  _23 = (int) Index_78;
  _24 = _18 | _22;
  ExpandedKey[_23] = _24;
  # DEBUG BEGIN_STMT
  Index_99 = Index_78 + 1;
  # DEBUG Index => Index_99

  <bb 4> [local count: 1073741821]:
  # Index_78 = PHI <0(2), Index_99(3)>
  # DEBUG Index => Index_78
  # DEBUG BEGIN_STMT
  if (Index_78 < SzeKey_86(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 118111600]:
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _25 = _75 + 4294967295;
  temp_92 = ExpandedKey[_25];
  # DEBUG temp => temp_92
  # DEBUG BEGIN_STMT
  _26 = Index_79 % SzeKey_86(D);
  if (_26 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  _27 = temp_92 >> 16;
  _28 = _27 & 255;
  _29 = Crypto_AES_SboxNrm[_28];
  _30 = (long unsigned int) _29;
  _31 = _30 << 24;
  _32 = temp_92 >> 8;
  _33 = _32 & 255;
  _34 = Crypto_AES_SboxNrm[_33];
  _35 = (long unsigned int) _34;
  _36 = _35 << 16;
  _37 = _31 ^ _36;
  _38 = temp_92 & 255;
  _39 = Crypto_AES_SboxNrm[_38];
  _40 = (long unsigned int) _39;
  _41 = _40 << 8;
  _42 = _37 ^ _41;
  _43 = temp_92 >> 24;
  _44 = Crypto_AES_SboxNrm[_43];
  _45 = (long unsigned int) _44;
  _46 = _42 ^ _45;
  _47 = Index_79 / SzeKey_86(D);
  _48 = (unsigned int) _47;
  _49 = _48 + 4294967295;
  _50 = Crypto_AES_Rcon_Fast[_49];
  temp_94 = _46 ^ _50;
  # DEBUG temp => temp_94
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  if (SzeKey_86(D) > 6)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 238907556]:
  if (_26 == 4)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 81228569]:
  # DEBUG BEGIN_STMT
  _51 = temp_92 >> 24;
  _52 = Crypto_AES_SboxNrm[_51];
  _53 = (long unsigned int) _52;
  _54 = _53 << 24;
  _55 = temp_92 >> 16;
  _56 = _55 & 255;
  _57 = Crypto_AES_SboxNrm[_56];
  _58 = (long unsigned int) _57;
  _59 = _58 << 16;
  _60 = _54 ^ _59;
  _61 = temp_92 >> 8;
  _62 = _61 & 255;
  _63 = Crypto_AES_SboxNrm[_62];
  _64 = (long unsigned int) _63;
  _65 = _64 << 8;
  _66 = _60 ^ _65;
  _67 = temp_92 & 255;
  _68 = Crypto_AES_SboxNrm[_67];
  _69 = (long unsigned int) _68;
  temp_93 = _66 ^ _69;
  # DEBUG temp => temp_93

  <bb 10> [local count: 955630224]:
  # temp_80 = PHI <temp_94(6), temp_92(7), temp_92(8), temp_93(9)>
  # DEBUG temp => temp_80
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _70 = (int) Index_79;
  _71 = (int) SzeKey_86(D);
  _72 = _70 - _71;
  _73 = ExpandedKey[_72];
  _74 = _73 ^ temp_80;
  ExpandedKey[_70] = _74;
  # DEBUG BEGIN_STMT
  Index_96 = Index_79 + 1;
  # DEBUG Index => Index_96

  <bb 11> [local count: 1073741824]:
  # Index_79 = PHI <Index_96(10), SzeKey_86(D)(13)>
  # DEBUG Index => Index_79
  # DEBUG BEGIN_STMT
  _75 = (long unsigned int) Index_79;
  _76 = SzeTurn_87(D) + 1;
  _77 = _76 * 4;
  if (_75 < _77)
    goto <bb 5>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (KeyExpdFastPtr_88(D), &ExpandedKey, 240);
  Crypto_AES_Rcon_Fast ={v} {CLOBBER};
  ExpandedKey ={v} {CLOBBER};
  return;

}


