
IPA constant propagation start:
Determining dynamic type for call: RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);
  Starting walk at: RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);
  instance pointer: _22  Outer instance pointer: _22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);
Determining dynamic type for call: RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);
  Starting walk at: RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);
  instance pointer: _23  Outer instance pointer: _23 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_Base64DecodeOneBlock/2:
  Jump functions of caller  Crypto_AL_Base64Decode/1:
    callsite  Crypto_AL_Base64Decode/1 -> Crypto_Base64DecodeOneBlock/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Crypto_AL_Base64Decode for cloning; -fipa-cp-clone disabled.

overall_size: 116, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Crypto_Base64DecodeOneBlock/2:
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
  Node: Crypto_AL_Base64Decode/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_Base64DecodeOneBlock/2 (Crypto_Base64DecodeOneBlock) @06ad1c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_Base64Mapping/0 (read)
  Referring: 
  Availability: local
  Function flags: count:4851969 (estimated locally) body local optimize_size
  Called by: Crypto_AL_Base64Decode/1 (11181965 (estimated locally),0.81 per call) 
  Calls: 
Crypto_AL_Base64Decode/1 (Crypto_AL_Base64Decode) @06ad1a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:13759446 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_Base64DecodeOneBlock/2 (11181965 (estimated locally),0.81 per call) 
Crypto_Base64Mapping/0 (Crypto_Base64Mapping) @068ac558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_Base64DecodeOneBlock/2 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crypto_AL_Base64Decode (Crypto_AL_Base64Decode, funcdef_no=0, decl_uid=5372, cgraph_uid=1, symbol_order=1)

Modification phase of node Crypto_AL_Base64Decode/1
Crypto_AL_Base64Decode (const uint8 * Encoding, uint32 EncodingLength, uint8 * Result, uint32 * ResultLengthPtr)
{
  boolean Finished;
  uint32 PaddingCharsAtEnd;
  uint32 TotalPaddingChars;
  uint32 ResultBufferLength;
  uint32 ResultBlockLength;
  uint32 EncodingBlockRealLength;
  uint32 EncodingBlockLength;
  uint32 ResultPosition;
  uint32 EncodingPosition;
  Std_ReturnType RetVal;
  const uint8 * _1;
  unsigned char _2;
  const uint8 * _5;
  unsigned char _6;
  const uint8 * _11;
  unsigned char _12;
  long unsigned int _18;
  long unsigned int _20;
  long unsigned int _21;
  const uint8 * _22;
  uint8 * _23;
  long unsigned int _24;

  <bb 2> [local count: 13759446]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EncodingPosition => EncodingLength_44(D)
  # DEBUG BEGIN_STMT
  # DEBUG EncodingLength => 0
  # DEBUG BEGIN_STMT
  # DEBUG Finished => 0
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 114863557]:
  # DEBUG BEGIN_STMT
  EncodingPosition_48 = EncodingPosition_28 + 4294967295;
  # DEBUG EncodingPosition => EncodingPosition_48
  # DEBUG BEGIN_STMT
  _1 = Encoding_49(D) + EncodingPosition_48;
  _2 = *_1;
  if (_2 != 10)
    goto <bb 4>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 4> [local count: 75809948]:
  if (_2 != 13)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 50034565]:
  # DEBUG BEGIN_STMT
  # DEBUG Finished => 1
  # DEBUG BEGIN_STMT
  # DEBUG EncodingLength => EncodingPosition_28

  <bb 6> [local count: 114863557]:
  # EncodingLength_51 = PHI <EncodingLength_25(3), EncodingLength_25(4), EncodingPosition_28(5)>
  # EncodingPosition_4 = PHI <EncodingPosition_48(3), EncodingPosition_48(4), EncodingPosition_48(5)>
  # Finished_3 = PHI <0(3), 0(4), 1(5)>

  <bb 7> [local count: 128623003]:
  # EncodingLength_25 = PHI <EncodingLength_51(6), 0(2)>
  # EncodingPosition_28 = PHI <EncodingPosition_4(6), EncodingLength_44(D)(2)>
  # Finished_40 = PHI <Finished_3(6), 0(2)>
  # DEBUG Finished => Finished_40
  # DEBUG EncodingPosition => EncodingPosition_28
  # DEBUG EncodingLength => EncodingLength_25
  # DEBUG BEGIN_STMT
  if (EncodingPosition_28 != 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 13759446]:
  # EncodingPosition_17 = PHI <EncodingLength_25(7), EncodingLength_25(9)>
  # EncodingLength_19 = PHI <EncodingLength_25(7), EncodingLength_25(9)>
  goto <bb 16>; [100.00%]

  <bb 9> [local count: 121548738]:
  if (Finished_40 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 10> [local count: 114863555]:
  # DEBUG BEGIN_STMT
  EncodingPosition_53 = EncodingPosition_29 + 4294967295;
  # DEBUG EncodingPosition => EncodingPosition_53
  # DEBUG BEGIN_STMT
  _5 = Encoding_49(D) + EncodingPosition_53;
  _6 = *_5;
  if (_6 == 61)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 39053609]:
  # DEBUG BEGIN_STMT
  PaddingCharsAtEnd_54 = PaddingCharsAtEnd_39 + 1;
  # DEBUG PaddingCharsAtEnd => PaddingCharsAtEnd_54
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 75809946]:
  # DEBUG BEGIN_STMT
  if (_6 != 10)
    goto <bb 13>; [66.00%]
  else
    goto <bb 15>; [34.00%]

  <bb 13> [local count: 50034564]:
  if (_6 != 13)
    goto <bb 14>; [66.00%]
  else
    goto <bb 15>; [34.00%]

  <bb 14> [local count: 33022813]:
  # DEBUG BEGIN_STMT
  # DEBUG Finished => 1

  <bb 15> [local count: 114863555]:
  # EncodingPosition_8 = PHI <EncodingPosition_53(12), EncodingPosition_53(11), EncodingPosition_53(14), EncodingPosition_53(13)>
  # PaddingCharsAtEnd_7 = PHI <PaddingCharsAtEnd_39(12), PaddingCharsAtEnd_54(11), PaddingCharsAtEnd_39(14), PaddingCharsAtEnd_39(13)>
  # Finished_52 = PHI <0(12), 0(11), 1(14), 0(13)>

  <bb 16> [local count: 128623000]:
  # EncodingPosition_29 = PHI <EncodingPosition_8(15), EncodingPosition_17(8)>
  # PaddingCharsAtEnd_39 = PHI <PaddingCharsAtEnd_7(15), 0(8)>
  # Finished_41 = PHI <Finished_52(15), 0(8)>
  # DEBUG Finished => Finished_41
  # DEBUG PaddingCharsAtEnd => PaddingCharsAtEnd_39
  # DEBUG EncodingPosition => EncodingPosition_29
  # DEBUG BEGIN_STMT
  if (EncodingPosition_29 != 0)
    goto <bb 17>; [94.50%]
  else
    goto <bb 18>; [5.50%]

  <bb 17> [local count: 121548735]:
  if (Finished_41 == 0)
    goto <bb 10>; [94.50%]
  else
    goto <bb 18>; [5.50%]

  <bb 18> [local count: 13759445]:
  # PaddingCharsAtEnd_67 = PHI <PaddingCharsAtEnd_39(16), PaddingCharsAtEnd_39(17)>
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG EncodingPosition => 0
  # DEBUG BEGIN_STMT
  # DEBUG ResultPosition => 0
  # DEBUG BEGIN_STMT
  # DEBUG TotalPaddingChars => 0
  # DEBUG BEGIN_STMT
  ResultBufferLength_56 = *ResultLengthPtr_55(D);
  # DEBUG ResultBufferLength => ResultBufferLength_56
  # DEBUG BEGIN_STMT
  # DEBUG ResultBlockLength => 0
  # DEBUG BEGIN_STMT
  # DEBUG EncodingBlockRealLength => 0
  # DEBUG BEGIN_STMT
  goto <bb 33>; [100.00%]

  <bb 19> [local count: 958878292]:
  # DEBUG BEGIN_STMT
  _11 = Encoding_49(D) + _20;
  _12 = *_11;
  if (_12 != 13)
    goto <bb 20>; [66.00%]
  else
    goto <bb 23>; [34.00%]

  <bb 20> [local count: 632859673]:
  if (_12 != 10)
    goto <bb 21>; [66.00%]
  else
    goto <bb 23>; [34.00%]

  <bb 21> [local count: 417687383]:
  if (_12 != 61)
    goto <bb 22>; [66.00%]
  else
    goto <bb 23>; [34.00%]

  <bb 22> [local count: 275673673]:
  # DEBUG BEGIN_STMT
  EncodingBlockRealLength_57 = EncodingBlockRealLength_34 + 1;
  # DEBUG EncodingBlockRealLength => EncodingBlockRealLength_57

  <bb 23> [local count: 958878292]:
  # EncodingBlockRealLength_33 = PHI <EncodingBlockRealLength_34(19), EncodingBlockRealLength_34(20), EncodingBlockRealLength_34(21), EncodingBlockRealLength_57(22)>
  # DEBUG EncodingBlockRealLength => EncodingBlockRealLength_33
  # DEBUG BEGIN_STMT
  if (_12 == 61)
    goto <bb 24>; [34.00%]
  else
    goto <bb 25>; [66.00%]

  <bb 24> [local count: 326018619]:
  # DEBUG BEGIN_STMT
  TotalPaddingChars_58 = TotalPaddingChars_37 + 1;
  # DEBUG TotalPaddingChars => TotalPaddingChars_58

  <bb 25> [local count: 958878292]:
  # TotalPaddingChars_36 = PHI <TotalPaddingChars_37(23), TotalPaddingChars_58(24)>
  # DEBUG TotalPaddingChars => TotalPaddingChars_36
  # DEBUG BEGIN_STMT
  EncodingBlockLength_59 = EncodingBlockLength_32 + 1;
  # DEBUG EncodingBlockLength => EncodingBlockLength_59

  <bb 26> [local count: 1073741824]:
  # EncodingBlockLength_32 = PHI <EncodingBlockLength_59(25), 0(41)>
  # EncodingBlockRealLength_34 = PHI <EncodingBlockRealLength_33(25), 0(41)>
  # TotalPaddingChars_37 = PHI <TotalPaddingChars_36(25), TotalPaddingChars_38(41)>
  # DEBUG TotalPaddingChars => TotalPaddingChars_37
  # DEBUG EncodingBlockRealLength => EncodingBlockRealLength_34
  # DEBUG EncodingBlockLength => EncodingBlockLength_32
  # DEBUG BEGIN_STMT
  _20 = EncodingPosition_30 + EncodingBlockLength_32;
  if (EncodingLength_19 > _20)
    goto <bb 27>; [94.50%]
  else
    goto <bb 28>; [5.50%]

  <bb 27> [local count: 1014686023]:
  if (EncodingBlockRealLength_34 <= 3)
    goto <bb 19>; [94.50%]
  else
    goto <bb 28>; [5.50%]

  <bb 28> [local count: 114863532]:
  # _18 = PHI <_20(26), _20(27)>
  # EncodingBlockLength_43 = PHI <EncodingBlockLength_32(26), EncodingBlockLength_32(27)>
  # EncodingBlockRealLength_45 = PHI <EncodingBlockRealLength_34(26), EncodingBlockRealLength_34(27)>
  # TotalPaddingChars_47 = PHI <TotalPaddingChars_37(26), TotalPaddingChars_37(27)>
  # DEBUG BEGIN_STMT
  if (EncodingBlockRealLength_45 <= 1)
    goto <bb 32>; [41.00%]
  else
    goto <bb 29>; [59.00%]

  <bb 29> [local count: 67769484]:
  if (TotalPaddingChars_47 > PaddingCharsAtEnd_67)
    goto <bb 32>; [50.00%]
  else
    goto <bb 30>; [50.00%]

  <bb 30> [local count: 33884742]:
  # DEBUG BEGIN_STMT
  ResultBlockLength_60 = EncodingBlockRealLength_45 + 4294967295;
  # DEBUG ResultBlockLength => ResultBlockLength_60
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _21 = ResultPosition_31 + ResultBlockLength_60;
  if (_21 <= ResultBufferLength_56)
    goto <bb 31>; [33.00%]
  else
    goto <bb 32>; [67.00%]

  <bb 31> [local count: 11181965]:
  # DEBUG BEGIN_STMT
  _22 = Encoding_49(D) + EncodingPosition_30;
  _23 = Result_61(D) + ResultPosition_31;
  RetVal_63 = Crypto_Base64DecodeOneBlock (_22, EncodingBlockLength_43, _23, ResultBlockLength_60);
  # DEBUG RetVal => RetVal_63
  # DEBUG BEGIN_STMT
  # DEBUG EncodingPosition => _18
  # DEBUG BEGIN_STMT
  # DEBUG ResultPosition => _21

  <bb 32> [local count: 114863532]:
  # RetVal_16 = PHI <1(28), RetVal_63(31), 1(29), 1(30)>
  # EncodingPosition_15 = PHI <EncodingPosition_30(28), _18(31), EncodingPosition_30(29), EncodingPosition_30(30)>
  # ResultPosition_14 = PHI <ResultPosition_31(28), _21(31), ResultPosition_31(29), ResultPosition_31(30)>
  # EncodingBlockRealLength_13 = PHI <EncodingBlockRealLength_45(28), EncodingBlockRealLength_45(31), EncodingBlockRealLength_45(29), EncodingBlockRealLength_45(30)>
  # TotalPaddingChars_10 = PHI <TotalPaddingChars_47(28), TotalPaddingChars_47(31), TotalPaddingChars_47(29), TotalPaddingChars_47(30)>

  <bb 33> [local count: 128622977]:
  # RetVal_26 = PHI <RetVal_16(32), 0(18)>
  # EncodingPosition_30 = PHI <EncodingPosition_15(32), 0(18)>
  # ResultPosition_31 = PHI <ResultPosition_14(32), 0(18)>
  # EncodingBlockRealLength_35 = PHI <EncodingBlockRealLength_13(32), 0(18)>
  # TotalPaddingChars_38 = PHI <TotalPaddingChars_10(32), 0(18)>
  # DEBUG TotalPaddingChars => TotalPaddingChars_38
  # DEBUG ResultBlockLength => NULL
  # DEBUG EncodingBlockRealLength => EncodingBlockRealLength_35
  # DEBUG ResultPosition => ResultPosition_31
  # DEBUG EncodingPosition => EncodingPosition_30
  # DEBUG RetVal => RetVal_26
  # DEBUG BEGIN_STMT
  if (EncodingLength_19 > EncodingPosition_30)
    goto <bb 34>; [94.50%]
  else
    goto <bb 35>; [5.50%]

  <bb 34> [local count: 121548713]:
  if (RetVal_26 == 0)
    goto <bb 41>; [94.50%]
  else
    goto <bb 35>; [5.50%]

  <bb 41> [local count: 114863534]:
  goto <bb 26>; [100.00%]

  <bb 35> [local count: 13759443]:
  # RetVal_64 = PHI <RetVal_26(33), RetVal_26(34)>
  # ResultPosition_65 = PHI <ResultPosition_31(33), ResultPosition_31(34)>
  # EncodingBlockRealLength_46 = PHI <EncodingBlockRealLength_35(33), EncodingBlockRealLength_35(34)>
  # DEBUG BEGIN_STMT
  if (RetVal_64 == 0)
    goto <bb 36>; [50.00%]
  else
    goto <bb 40>; [50.00%]

  <bb 36> [local count: 6879721]:
  if (PaddingCharsAtEnd_67 != 0)
    goto <bb 37>; [50.00%]
  else
    goto <bb 40>; [50.00%]

  <bb 37> [local count: 3439861]:
  _24 = EncodingBlockRealLength_46 + PaddingCharsAtEnd_67;
  if (_24 != 4)
    goto <bb 39>; [66.00%]
  else
    goto <bb 38>; [34.00%]

  <bb 38> [local count: 1169553]:
  if (PaddingCharsAtEnd_67 > 2)
    goto <bb 39>; [50.00%]
  else
    goto <bb 40>; [50.00%]

  <bb 39> [local count: 2855084]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 40> [local count: 13759443]:
  # RetVal_27 = PHI <RetVal_64(35), 0(36), 0(38), 1(39)>
  # DEBUG RetVal => RetVal_27
  # DEBUG BEGIN_STMT
  *ResultLengthPtr_55(D) = ResultPosition_65;
  # DEBUG BEGIN_STMT
  return RetVal_27;

}


