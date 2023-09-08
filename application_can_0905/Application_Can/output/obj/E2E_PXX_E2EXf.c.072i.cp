
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  E2E_SMCheck/10:
  Jump functions of caller  E2E_MemCpy32/9:
  Jump functions of caller  E2EXf_Inv_SMCheck/8:
  Jump functions of caller  E2EXf_Inv_OutOfPlaceTransPreCondCheck/7:
  Jump functions of caller  E2EXf_Inv_InPlaceTransPreCondCheck/6:
  Jump functions of caller  E2EXf_Inv_CopyOutOfPlaceBuffer/5:
  Jump functions of caller  E2EXf_Inv_InPlaceShiftUpperHeaderToRight/4:
  Jump functions of caller  E2EXf_CopyOutOfPlaceBuffer/3:
  Jump functions of caller  E2EXf_InPlaceShiftUpperHeaderToLeft/2:
  Jump functions of caller  E2EXf_OutOfPlaceTransPreCondCheck/1:
  Jump functions of caller  E2EXf_InPlaceTransPreCondCheck/0:

 Propagating constants:

Not considering E2EXf_Inv_SMCheck for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_Inv_OutOfPlaceTransPreCondCheck for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_Inv_InPlaceTransPreCondCheck for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_Inv_CopyOutOfPlaceBuffer for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_Inv_InPlaceShiftUpperHeaderToRight for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_CopyOutOfPlaceBuffer for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_InPlaceShiftUpperHeaderToLeft for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_OutOfPlaceTransPreCondCheck for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_InPlaceTransPreCondCheck for cloning; -fipa-cp-clone disabled.

overall_size: 152, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2EXf_Inv_SMCheck/8:
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
  Node: E2EXf_Inv_OutOfPlaceTransPreCondCheck/7:
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
  Node: E2EXf_Inv_InPlaceTransPreCondCheck/6:
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
  Node: E2EXf_Inv_CopyOutOfPlaceBuffer/5:
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
  Node: E2EXf_Inv_InPlaceShiftUpperHeaderToRight/4:
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
  Node: E2EXf_CopyOutOfPlaceBuffer/3:
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
  Node: E2EXf_InPlaceShiftUpperHeaderToLeft/2:
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
  Node: E2EXf_OutOfPlaceTransPreCondCheck/1:
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
  Node: E2EXf_InPlaceTransPreCondCheck/0:
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

E2E_SMCheck/10 (E2E_SMCheck) @06af7d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_SMCheck/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_MemCpy32/9 (E2E_MemCpy32) @06af7700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_CopyOutOfPlaceBuffer/5 (751619278 (estimated locally),0.70 per call) E2EXf_Inv_CopyOutOfPlaceBuffer/5 (248034361 (estimated locally),0.23 per call) E2EXf_CopyOutOfPlaceBuffer/3 (1073741824 (estimated locally),1.00 per call) E2EXf_CopyOutOfPlaceBuffer/3 (1073741824 (estimated locally),1.00 per call) E2EXf_InPlaceShiftUpperHeaderToLeft/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
E2EXf_Inv_SMCheck/8 (E2EXf_Inv_SMCheck) @06af7380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_SMCheck/10 (1073741824 (estimated locally),1.00 per call) 
E2EXf_Inv_OutOfPlaceTransPreCondCheck/7 (E2EXf_Inv_OutOfPlaceTransPreCondCheck) @06af71c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2EXf_Inv_InPlaceTransPreCondCheck/6 (E2EXf_Inv_InPlaceTransPreCondCheck) @06af7000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2EXf_Inv_CopyOutOfPlaceBuffer/5 (E2EXf_Inv_CopyOutOfPlaceBuffer) @06ad8e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_MemCpy32/9 (751619278 (estimated locally),0.70 per call) E2E_MemCpy32/9 (248034361 (estimated locally),0.23 per call) 
E2EXf_Inv_InPlaceShiftUpperHeaderToRight/4 (E2EXf_Inv_InPlaceShiftUpperHeaderToRight) @06ad8b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:337461715 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2EXf_CopyOutOfPlaceBuffer/3 (E2EXf_CopyOutOfPlaceBuffer) @06ad89a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_MemCpy32/9 (1073741824 (estimated locally),1.00 per call) E2E_MemCpy32/9 (1073741824 (estimated locally),1.00 per call) 
E2EXf_InPlaceShiftUpperHeaderToLeft/2 (E2EXf_InPlaceShiftUpperHeaderToLeft) @06ad8700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_MemCpy32/9 (354334802 (estimated locally),0.33 per call) 
E2EXf_OutOfPlaceTransPreCondCheck/1 (E2EXf_OutOfPlaceTransPreCondCheck) @06ad8460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2EXf_InPlaceTransPreCondCheck/0 (E2EXf_InPlaceTransPreCondCheck) @06ad82a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function E2EXf_InPlaceTransPreCondCheck (E2EXf_InPlaceTransPreCondCheck, funcdef_no=0, decl_uid=5406, cgraph_uid=1, symbol_order=0)

Modification phase of node E2EXf_InPlaceTransPreCondCheck/0
E2EXf_InPlaceTransPreCondCheck (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 UpperHeaderBytesToShift;
  Std_ReturnType RetVal;
  short unsigned int _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_4(D)->UpperHeaderBitsToShift;
  UpperHeaderBytesToShift_5 = _1 >> 3;
  # DEBUG UpperHeaderBytesToShift => UpperHeaderBytesToShift_5
  # DEBUG BEGIN_STMT
  if (BufferPtr_6(D) == 0B)
    goto <bb 6>; [18.75%]
  else
    goto <bb 3>; [81.25%]

  <bb 3> [local count: 872415231]:
  # DEBUG BEGIN_STMT
  if (UpperHeaderBytesToShift_5 > InputBufferLength_7(D))
    goto <bb 6>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 567069901]:
  # DEBUG BEGIN_STMT
  if (BufferLengthPtr_8(D) == 0B)
    goto <bb 6>; [18.75%]
  else
    goto <bb 5>; [81.25%]

  <bb 5> [local count: 460744294]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 6> [local count: 1073741824]:
  # RetVal_2 = PHI <255(2), 255(3), 255(4), 0(5)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function E2EXf_OutOfPlaceTransPreCondCheck (E2EXf_OutOfPlaceTransPreCondCheck, funcdef_no=1, decl_uid=5412, cgraph_uid=2, symbol_order=1)

Modification phase of node E2EXf_OutOfPlaceTransPreCondCheck/1
E2EXf_OutOfPlaceTransPreCondCheck (uint8 * BufferPtr, uint16 * BufferLengthPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 UpperHeaderBytesToShift;
  Std_ReturnType RetVal;
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_4(D)->UpperHeaderBitsToShift;
  UpperHeaderBytesToShift_5 = _1 >> 3;
  # DEBUG UpperHeaderBytesToShift => UpperHeaderBytesToShift_5
  # DEBUG BEGIN_STMT
  if (InputBufferPtr_6(D) == 0B)
    goto <bb 7>; [18.75%]
  else
    goto <bb 3>; [81.25%]

  <bb 3> [local count: 872415233]:
  # DEBUG BEGIN_STMT
  if (UpperHeaderBytesToShift_5 > InputBufferLength_7(D))
    goto <bb 7>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 567069902]:
  # DEBUG BEGIN_STMT
  if (BufferLengthPtr_8(D) == 0B)
    goto <bb 7>; [18.75%]
  else
    goto <bb 5>; [81.25%]

  <bb 5> [local count: 460744295]:
  if (BufferPtr_9(D) == 0B)
    goto <bb 7>; [18.75%]
  else
    goto <bb 6>; [81.25%]

  <bb 6> [local count: 374354739]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <255(2), 255(3), 255(5), 0(6), 255(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function E2EXf_InPlaceShiftUpperHeaderToLeft (E2EXf_InPlaceShiftUpperHeaderToLeft, funcdef_no=2, decl_uid=5415, cgraph_uid=3, symbol_order=2)

Modification phase of node E2EXf_InPlaceShiftUpperHeaderToLeft/2
E2EXf_InPlaceShiftUpperHeaderToLeft (uint8 * BufferPtr, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 E2EHeaderLengthBytes;
  const uint16 UpperHeaderBytesToShift;
  short unsigned int _1;
  short unsigned int _2;
  sizetype _3;
  uint8 * _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_8(D)->UpperHeaderBitsToShift;
  UpperHeaderBytesToShift_9 = _1 >> 3;
  # DEBUG UpperHeaderBytesToShift => UpperHeaderBytesToShift_9
  # DEBUG BEGIN_STMT
  _2 = PXXConfigPtr_8(D)->HeaderLength;
  E2EHeaderLengthBytes_10 = _2 >> 3;
  # DEBUG E2EHeaderLengthBytes => E2EHeaderLengthBytes_10
  # DEBUG BEGIN_STMT
  if (_1 > 7)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _3 = (sizetype) E2EHeaderLengthBytes_10;
  _4 = BufferPtr_11(D) + _3;
  _5 = (long unsigned int) UpperHeaderBytesToShift_9;
  E2E_MemCpy32 (BufferPtr_11(D), _4, _5);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function E2EXf_CopyOutOfPlaceBuffer (E2EXf_CopyOutOfPlaceBuffer, funcdef_no=3, decl_uid=5420, cgraph_uid=4, symbol_order=3)

Modification phase of node E2EXf_CopyOutOfPlaceBuffer/3
E2EXf_CopyOutOfPlaceBuffer (uint8 * BufferPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 E2EHeaderLengthBytes;
  const uint16 UpperHeaderBytesToShift;
  short unsigned int _1;
  short unsigned int _2;
  long unsigned int _3;
  int _4;
  int _5;
  int _6;
  sizetype _7;
  uint8 * _8;
  const uint8 * _9;
  short unsigned int _10;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_13(D)->UpperHeaderBitsToShift;
  UpperHeaderBytesToShift_14 = _1 >> 3;
  # DEBUG UpperHeaderBytesToShift => UpperHeaderBytesToShift_14
  # DEBUG BEGIN_STMT
  _2 = PXXConfigPtr_13(D)->HeaderLength;
  E2EHeaderLengthBytes_15 = _2 >> 3;
  # DEBUG E2EHeaderLengthBytes => E2EHeaderLengthBytes_15
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) UpperHeaderBytesToShift_14;
  E2E_MemCpy32 (BufferPtr_16(D), InputBufferPtr_17(D), _3);
  # DEBUG BEGIN_STMT
  _4 = (int) UpperHeaderBytesToShift_14;
  _5 = (int) E2EHeaderLengthBytes_15;
  _6 = _4 + _5;
  _7 = (sizetype) _6;
  _8 = BufferPtr_16(D) + _7;
  _9 = InputBufferPtr_17(D) + _3;
  _10 = InputBufferLength_19(D) - UpperHeaderBytesToShift_14;
  _11 = (long unsigned int) _10;
  E2E_MemCpy32 (_8, _9, _11);
  return;

}



;; Function E2EXf_Inv_InPlaceShiftUpperHeaderToRight (E2EXf_Inv_InPlaceShiftUpperHeaderToRight, funcdef_no=4, decl_uid=5434, cgraph_uid=5, symbol_order=4)

Modification phase of node E2EXf_Inv_InPlaceShiftUpperHeaderToRight/4
E2EXf_Inv_InPlaceShiftUpperHeaderToRight (uint8 * BufferPtr, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  uint16 Offset;
  uint16 Idx;
  const uint16 E2EHeaderLengthBytes;
  const uint16 UpperHeaderBytesToShift;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;
  sizetype _4;
  uint8 * _5;
  short unsigned int _6;
  sizetype _7;
  uint8 * _8;
  unsigned char _9;

  <bb 2> [local count: 337461715]:
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_14(D)->UpperHeaderBitsToShift;
  UpperHeaderBytesToShift_15 = _1 >> 3;
  # DEBUG UpperHeaderBytesToShift => UpperHeaderBytesToShift_15
  # DEBUG BEGIN_STMT
  _2 = PXXConfigPtr_14(D)->HeaderLength;
  E2EHeaderLengthBytes_16 = _2 >> 3;
  # DEBUG E2EHeaderLengthBytes => E2EHeaderLengthBytes_16
  # DEBUG BEGIN_STMT
  if (BufferPtr_17(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 3> [local count: 236223200]:
  if (_1 > 7)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 7> [local count: 118111600]:
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _3 = UpperHeaderBytesToShift_15 - Idx_10;
  Offset_18 = _3 + 65535;
  # DEBUG Offset => Offset_18
  # DEBUG BEGIN_STMT
  _4 = (sizetype) Offset_18;
  _5 = BufferPtr_17(D) + _4;
  _6 = E2EHeaderLengthBytes_16 + Offset_18;
  _7 = (sizetype) _6;
  _8 = BufferPtr_17(D) + _7;
  _9 = *_5;
  *_8 = _9;
  # DEBUG BEGIN_STMT
  Idx_20 = Idx_10 + 1;
  # DEBUG Idx => Idx_20

  <bb 5> [local count: 1073741824]:
  # Idx_10 = PHI <Idx_20(4), 0(7)>
  # DEBUG Idx => Idx_10
  # DEBUG BEGIN_STMT
  if (Idx_10 < UpperHeaderBytesToShift_15)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 337461716]:
  return;

}



;; Function E2EXf_Inv_CopyOutOfPlaceBuffer (E2EXf_Inv_CopyOutOfPlaceBuffer, funcdef_no=5, decl_uid=5439, cgraph_uid=6, symbol_order=5)

Modification phase of node E2EXf_Inv_CopyOutOfPlaceBuffer/5
E2EXf_Inv_CopyOutOfPlaceBuffer (uint8 * BufferPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 E2EHeaderLengthBytes;
  const uint16 UpperHeaderBytesToShift;
  short unsigned int _1;
  short unsigned int _2;
  long unsigned int _3;
  sizetype _4;
  uint8 * _5;
  int _6;
  int _7;
  int _8;
  sizetype _9;
  const uint8 * _10;
  short unsigned int _11;
  short unsigned int _12;
  long unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_17(D)->UpperHeaderBitsToShift;
  UpperHeaderBytesToShift_18 = _1 >> 3;
  # DEBUG UpperHeaderBytesToShift => UpperHeaderBytesToShift_18
  # DEBUG BEGIN_STMT
  _2 = PXXConfigPtr_17(D)->HeaderLength;
  E2EHeaderLengthBytes_19 = _2 >> 3;
  # DEBUG E2EHeaderLengthBytes => E2EHeaderLengthBytes_19
  # DEBUG BEGIN_STMT
  if (InputBufferPtr_20(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  if (_1 > 7)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) UpperHeaderBytesToShift_18;
  E2E_MemCpy32 (BufferPtr_21(D), InputBufferPtr_20(D), _3);

  <bb 5> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _4 = (sizetype) UpperHeaderBytesToShift_18;
  _5 = BufferPtr_21(D) + _4;
  _6 = (int) UpperHeaderBytesToShift_18;
  _7 = (int) E2EHeaderLengthBytes_19;
  _8 = _6 + _7;
  _9 = (sizetype) _8;
  _10 = InputBufferPtr_20(D) + _9;
  _11 = InputBufferLength_23(D) - UpperHeaderBytesToShift_18;
  _12 = _11 - E2EHeaderLengthBytes_19;
  _13 = (long unsigned int) _12;
  E2E_MemCpy32 (_5, _10, _13);

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function E2EXf_Inv_InPlaceTransPreCondCheck (E2EXf_Inv_InPlaceTransPreCondCheck, funcdef_no=6, decl_uid=5425, cgraph_uid=7, symbol_order=6)

Modification phase of node E2EXf_Inv_InPlaceTransPreCondCheck/6
E2EXf_Inv_InPlaceTransPreCondCheck (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 OverallHeaderLengthBytes;
  Std_ReturnType RetVal;
  short unsigned int _1;
  int _2;
  short unsigned int _3;
  int _4;
  int _5;
  unsigned int _6;
  unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_10(D)->UpperHeaderBitsToShift;
  _2 = (int) _1;
  _3 = PXXConfigPtr_10(D)->HeaderLength;
  _4 = (int) _3;
  _5 = _2 + _4;
  _6 = (unsigned int) _5;
  _7 = _6 >> 3;
  OverallHeaderLengthBytes_11 = (const uint16) _7;
  # DEBUG OverallHeaderLengthBytes => OverallHeaderLengthBytes_11
  # DEBUG BEGIN_STMT
  if (BufferPtr_12(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  if (InputBufferLength_13(D) != 0)
    goto <bb 8>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 960998934]:
  # DEBUG BEGIN_STMT
  if (BufferPtr_12(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 672699254]:
  if (OverallHeaderLengthBytes_11 > InputBufferLength_13(D))
    goto <bb 8>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 725554195]:
  # DEBUG BEGIN_STMT
  if (BufferLengthPtr_14(D) == 0B)
    goto <bb 8>; [18.75%]
  else
    goto <bb 7>; [81.25%]

  <bb 7> [local count: 589512783]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 8> [local count: 1073741824]:
  # RetVal_8 = PHI <255(3), 255(5), 255(6), 0(7)>
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  return RetVal_8;

}



;; Function E2EXf_Inv_OutOfPlaceTransPreCondCheck (E2EXf_Inv_OutOfPlaceTransPreCondCheck, funcdef_no=7, decl_uid=5431, cgraph_uid=8, symbol_order=7)

Modification phase of node E2EXf_Inv_OutOfPlaceTransPreCondCheck/7
E2EXf_Inv_OutOfPlaceTransPreCondCheck (uint8 * BufferPtr, uint16 * BufferLengthPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, const struct E2EXf_PXXConfigType * PXXConfigPtr)
{
  const uint16 OverallHeaderLengthBytes;
  Std_ReturnType RetVal;
  short unsigned int _1;
  int _2;
  short unsigned int _3;
  int _4;
  int _5;
  unsigned int _6;
  unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = PXXConfigPtr_10(D)->UpperHeaderBitsToShift;
  _2 = (int) _1;
  _3 = PXXConfigPtr_10(D)->HeaderLength;
  _4 = (int) _3;
  _5 = _2 + _4;
  _6 = (unsigned int) _5;
  _7 = _6 >> 3;
  OverallHeaderLengthBytes_11 = (const uint16) _7;
  # DEBUG OverallHeaderLengthBytes => OverallHeaderLengthBytes_11
  # DEBUG BEGIN_STMT
  if (InputBufferPtr_12(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  if (InputBufferLength_13(D) != 0)
    goto <bb 9>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 960998934]:
  # DEBUG BEGIN_STMT
  if (InputBufferPtr_12(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 672699254]:
  if (OverallHeaderLengthBytes_11 > InputBufferLength_13(D))
    goto <bb 9>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 725554195]:
  # DEBUG BEGIN_STMT
  if (BufferLengthPtr_14(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 7>; [81.25%]

  <bb 7> [local count: 589512783]:
  if (BufferPtr_15(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 8>; [81.25%]

  <bb 8> [local count: 478979135]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 9> [local count: 1073741824]:
  # RetVal_8 = PHI <255(3), 255(5), 255(7), 0(8), 255(6)>
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  return RetVal_8;

}



;; Function E2EXf_Inv_SMCheck (E2EXf_Inv_SMCheck, funcdef_no=8, decl_uid=5443, cgraph_uid=9, symbol_order=8)

Modification phase of node E2EXf_Inv_SMCheck/8
E2EXf_Inv_SMCheck (E2E_PCheckStatusType RetValMapStatusToSM, const struct E2E_SMConfigType * SMConfigPtr, struct E2E_SMCheckStateType * SMCheckStatePtr)
{
  uint8 NibbleProfileStatus;
  uint8 NibbleSMState;
  Std_ReturnType RetValSMCheck;
  Std_ReturnType RetVal;
  unsigned char _1;
  int _2;
  int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RetValSMCheck_10 = E2E_SMCheck (RetValMapStatusToSM_6(D), SMConfigPtr_7(D), SMCheckStatePtr_8(D));
  # DEBUG RetValSMCheck => RetValSMCheck_10
  # DEBUG BEGIN_STMT
  if (RetValSMCheck_10 == 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 4>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _1 = SMCheckStatePtr_8(D)->SMState;
  _2 = (int) _1;
  _3 = _2 << 4;
  NibbleSMState_11 = (uint8) _3;
  # DEBUG NibbleSMState => NibbleSMState_11
  # DEBUG BEGIN_STMT
  NibbleProfileStatus_12 = RetValMapStatusToSM_6(D) & 15;
  # DEBUG NibbleProfileStatus => NibbleProfileStatus_12
  # DEBUG BEGIN_STMT
  RetVal_13 = NibbleSMState_11 | NibbleProfileStatus_12;
  # DEBUG RetVal => RetVal_13

  <bb 4> [local count: 1073741824]:
  # RetVal_4 = PHI <RetVal_13(3), 119(2)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}


