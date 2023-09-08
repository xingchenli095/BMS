
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  E2EXf_Inv_CopyOutOfPlaceBuffer/5:
  Jump functions of caller  E2EXf_Inv_OutOfPlaceTransPreCondCheck/4:
  Jump functions of caller  E2EXf_Inv_InPlaceShiftUpperHeaderToRight/3:
  Jump functions of caller  E2EXf_Inv_InPlaceTransPreCondCheck/2:
  Jump functions of caller  E2EXf_Inv_NoCheckOutOfPlace_Transformer/1:
  Jump functions of caller  E2EXf_Inv_NoCheckInPlace_Transformer/0:

 Propagating constants:

Not considering E2EXf_Inv_NoCheckOutOfPlace_Transformer for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_Inv_NoCheckInPlace_Transformer for cloning; -fipa-cp-clone disabled.

overall_size: 49, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2EXf_Inv_NoCheckOutOfPlace_Transformer/1:
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
  Node: E2EXf_Inv_NoCheckInPlace_Transformer/0:
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


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

E2EXf_Inv_CopyOutOfPlaceBuffer/5 (E2EXf_Inv_CopyOutOfPlaceBuffer) @06a80e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_NoCheckOutOfPlace_Transformer/1 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_Inv_OutOfPlaceTransPreCondCheck/4 (E2EXf_Inv_OutOfPlaceTransPreCondCheck) @06a80d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_NoCheckOutOfPlace_Transformer/1 (343919506 (estimated locally),0.32 per call) 
  Calls: 
E2EXf_Inv_InPlaceShiftUpperHeaderToRight/3 (E2EXf_Inv_InPlaceShiftUpperHeaderToRight) @06a80b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_NoCheckInPlace_Transformer/0 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_Inv_InPlaceTransPreCondCheck/2 (E2EXf_Inv_InPlaceTransPreCondCheck) @06a80a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_NoCheckInPlace_Transformer/0 (343919506 (estimated locally),0.32 per call) 
  Calls: 
E2EXf_Inv_NoCheckOutOfPlace_Transformer/1 (E2EXf_Inv_NoCheckOutOfPlace_Transformer) @06a808c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_Inv_CopyOutOfPlaceBuffer/5 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_OutOfPlaceTransPreCondCheck/4 (343919506 (estimated locally),0.32 per call) 
E2EXf_Inv_NoCheckInPlace_Transformer/0 (E2EXf_Inv_NoCheckInPlace_Transformer) @06a80700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_Inv_InPlaceShiftUpperHeaderToRight/3 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_InPlaceTransPreCondCheck/2 (343919506 (estimated locally),0.32 per call) 

;; Function E2EXf_Inv_NoCheckInPlace_Transformer (E2EXf_Inv_NoCheckInPlace_Transformer, funcdef_no=0, decl_uid=5452, cgraph_uid=1, symbol_order=0)

Modification phase of node E2EXf_Inv_NoCheckInPlace_Transformer/0
E2EXf_Inv_NoCheckInPlace_Transformer (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength, const struct E2EXf_NoCheck_CheckCfgType * ConfigPtr, E2EXf_StateType E2EXf_PartitionInitState)
{
  const struct E2EXf_PXXConfigType * const PXXConfigPtr;
  Std_ReturnType RetVal;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255
  # DEBUG BEGIN_STMT
  if (E2EXf_PartitionInitState_6(D) == 1)
    goto <bb 3>; [32.03%]
  else
    goto <bb 7>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  PXXConfigPtr_9 = &ConfigPtr_8(D)->PXXConfig;
  # DEBUG PXXConfigPtr => PXXConfigPtr_9
  # DEBUG BEGIN_STMT
  RetVal_14 = E2EXf_Inv_InPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferLength_12(D), PXXConfigPtr_9);
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  if (RetVal_14 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 4> [local count: 113493437]:
  # DEBUG BEGIN_STMT
  E2EXf_Inv_InPlaceShiftUpperHeaderToRight (BufferPtr_10(D), PXXConfigPtr_9);
  # DEBUG BEGIN_STMT
  if (InputBufferLength_12(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 56746718]:
  # DEBUG BEGIN_STMT
  *BufferLengthPtr_11(D) = 0;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 56746718]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct E2EXf_PXXConfigType *)ConfigPtr_8(D)].HeaderLength;
  _2 = _1 >> 3;
  _3 = InputBufferLength_12(D) - _2;
  *BufferLengthPtr_11(D) = _3;

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <255(2), RetVal_14(3), 0(5), 0(6)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function E2EXf_Inv_NoCheckOutOfPlace_Transformer (E2EXf_Inv_NoCheckOutOfPlace_Transformer, funcdef_no=1, decl_uid=5459, cgraph_uid=2, symbol_order=1)

Modification phase of node E2EXf_Inv_NoCheckOutOfPlace_Transformer/1
E2EXf_Inv_NoCheckOutOfPlace_Transformer (uint8 * BufferPtr, uint16 * BufferLengthPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, const struct E2EXf_NoCheck_CheckCfgType * ConfigPtr, E2EXf_StateType E2EXf_PartitionInitState)
{
  const struct E2EXf_PXXConfigType * const PXXConfigPtr;
  Std_ReturnType RetVal;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255
  # DEBUG BEGIN_STMT
  if (E2EXf_PartitionInitState_6(D) == 1)
    goto <bb 3>; [32.03%]
  else
    goto <bb 7>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  PXXConfigPtr_9 = &ConfigPtr_8(D)->PXXConfig;
  # DEBUG PXXConfigPtr => PXXConfigPtr_9
  # DEBUG BEGIN_STMT
  RetVal_15 = E2EXf_Inv_OutOfPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferPtr_12(D), InputBufferLength_13(D), PXXConfigPtr_9);
  # DEBUG RetVal => RetVal_15
  # DEBUG BEGIN_STMT
  if (RetVal_15 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 4> [local count: 113493437]:
  # DEBUG BEGIN_STMT
  E2EXf_Inv_CopyOutOfPlaceBuffer (BufferPtr_10(D), InputBufferPtr_12(D), InputBufferLength_13(D), PXXConfigPtr_9);
  # DEBUG BEGIN_STMT
  if (InputBufferLength_13(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 56746718]:
  # DEBUG BEGIN_STMT
  *BufferLengthPtr_11(D) = 0;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 56746718]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct E2EXf_PXXConfigType *)ConfigPtr_8(D)].HeaderLength;
  _2 = _1 >> 3;
  _3 = InputBufferLength_13(D) - _2;
  *BufferLengthPtr_11(D) = _3;

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <255(2), RetVal_15(3), 0(5), 0(6)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}


