
IPA constant propagation start:
Determining dynamic type for call: RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  Starting walk at: RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  instance pointer: InputBufferPtr_12(D)  Outer instance pointer: InputBufferPtr_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_15 = E2EXf_Inv_OutOfPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferPtr_12(D), InputBufferLength_13(D), PXXConfigPtr_9);
Determining dynamic type for call: RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  Starting walk at: RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  instance pointer: CheckStatesPtr_16(D)  Outer instance pointer: CheckStatesPtr_16(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_15 = E2EXf_Inv_OutOfPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferPtr_12(D), InputBufferLength_13(D), PXXConfigPtr_9);
Determining dynamic type for call: RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  Starting walk at: RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  instance pointer: ConfigPtr_8(D)  Outer instance pointer: ConfigPtr_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_15 = E2EXf_Inv_OutOfPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferPtr_12(D), InputBufferLength_13(D), PXXConfigPtr_9);
Determining dynamic type for call: RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  Starting walk at: RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  instance pointer: BufferPtr_10(D)  Outer instance pointer: BufferPtr_10(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_14 = E2EXf_Inv_InPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferLength_12(D), PXXConfigPtr_9);
Determining dynamic type for call: RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  Starting walk at: RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  instance pointer: CheckStatesPtr_15(D)  Outer instance pointer: CheckStatesPtr_15(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_14 = E2EXf_Inv_InPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferLength_12(D), PXXConfigPtr_9);
Determining dynamic type for call: RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  Starting walk at: RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  instance pointer: ConfigPtr_8(D)  Outer instance pointer: ConfigPtr_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:RetVal_14 = E2EXf_Inv_InPlaceTransPreCondCheck (BufferPtr_10(D), BufferLengthPtr_11(D), InputBufferLength_12(D), PXXConfigPtr_9);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  E2EXf_Inv_CopyOutOfPlaceBuffer/16:
  Jump functions of caller  E2EXf_Inv_OutOfPlaceTransPreCondCheck/15:
  Jump functions of caller  E2EXf_Inv_SMCheck/14:
  Jump functions of caller  E2E_P05MapStatusToSM/13:
  Jump functions of caller  E2E_P05Check/12:
  Jump functions of caller  E2EXf_Inv_InPlaceShiftUpperHeaderToRight/11:
  Jump functions of caller  E2EXf_Inv_InPlaceTransPreCondCheck/10:
  Jump functions of caller  E2EXf_CopyOutOfPlaceBuffer/9:
  Jump functions of caller  E2EXf_OutOfPlaceTransPreCondCheck/8:
  Jump functions of caller  E2E_P05Protect/7:
  Jump functions of caller  E2EXf_InPlaceShiftUpperHeaderToLeft/6:
  Jump functions of caller  E2EXf_InPlaceTransPreCondCheck/5:
  Jump functions of caller  E2EXf_Inv_P05Check/4:
  Jump functions of caller  E2EXf_Inv_P05OutOfPlace_Transformer/3:
    callsite  E2EXf_Inv_P05OutOfPlace_Transformer/3 -> E2EXf_Inv_P05Check/4 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  E2EXf_Inv_P05InPlace_Transformer/2:
    callsite  E2EXf_Inv_P05InPlace_Transformer/2 -> E2EXf_Inv_P05Check/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  E2EXf_P05OutOfPlace_Transformer/1:
  Jump functions of caller  E2EXf_P05InPlace_Transformer/0:

 Propagating constants:

Not considering E2EXf_Inv_P05OutOfPlace_Transformer for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_Inv_P05InPlace_Transformer for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_P05OutOfPlace_Transformer for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_P05InPlace_Transformer for cloning; -fipa-cp-clone disabled.

overall_size: 139, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2EXf_Inv_P05Check/4:
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
  Node: E2EXf_Inv_P05OutOfPlace_Transformer/3:
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
  Node: E2EXf_Inv_P05InPlace_Transformer/2:
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
  Node: E2EXf_P05OutOfPlace_Transformer/1:
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
  Node: E2EXf_P05InPlace_Transformer/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

E2EXf_Inv_CopyOutOfPlaceBuffer/16 (E2EXf_Inv_CopyOutOfPlaceBuffer) @06b53d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05OutOfPlace_Transformer/3 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_Inv_OutOfPlaceTransPreCondCheck/15 (E2EXf_Inv_OutOfPlaceTransPreCondCheck) @06b53c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05OutOfPlace_Transformer/3 (343919506 (estimated locally),0.32 per call) 
  Calls: 
E2EXf_Inv_SMCheck/14 (E2EXf_Inv_SMCheck) @06b53a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05Check/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_P05MapStatusToSM/13 (E2E_P05MapStatusToSM) @06b539a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05Check/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_P05Check/12 (E2E_P05Check) @06b538c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05Check/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2EXf_Inv_InPlaceShiftUpperHeaderToRight/11 (E2EXf_Inv_InPlaceShiftUpperHeaderToRight) @06b53700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05InPlace_Transformer/2 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_Inv_InPlaceTransPreCondCheck/10 (E2EXf_Inv_InPlaceTransPreCondCheck) @06b53620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_P05InPlace_Transformer/2 (343919506 (estimated locally),0.32 per call) 
  Calls: 
E2EXf_CopyOutOfPlaceBuffer/9 (E2EXf_CopyOutOfPlaceBuffer) @06b53460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_P05OutOfPlace_Transformer/1 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_OutOfPlaceTransPreCondCheck/8 (E2EXf_OutOfPlaceTransPreCondCheck) @06b53380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_P05OutOfPlace_Transformer/1 (343919506 (estimated locally),0.32 per call) 
  Calls: 
E2E_P05Protect/7 (E2E_P05Protect) @06b531c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_P05OutOfPlace_Transformer/1 (113493437 (estimated locally),0.11 per call) E2EXf_P05InPlace_Transformer/0 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_InPlaceShiftUpperHeaderToLeft/6 (E2EXf_InPlaceShiftUpperHeaderToLeft) @06b530e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_P05InPlace_Transformer/0 (113493437 (estimated locally),0.11 per call) 
  Calls: 
E2EXf_InPlaceTransPreCondCheck/5 (E2EXf_InPlaceTransPreCondCheck) @06b53000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_P05InPlace_Transformer/0 (343919506 (estimated locally),0.32 per call) 
  Calls: 
E2EXf_Inv_P05Check/4 (E2EXf_Inv_P05Check) @06b47e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: E2EXf_Inv_P05OutOfPlace_Transformer/3 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_P05InPlace_Transformer/2 (113493437 (estimated locally),0.11 per call) 
  Calls: E2EXf_Inv_SMCheck/14 (1073741824 (estimated locally),1.00 per call) E2E_P05MapStatusToSM/13 (1073741824 (estimated locally),1.00 per call) E2E_P05Check/12 (1073741824 (estimated locally),1.00 per call) 
E2EXf_Inv_P05OutOfPlace_Transformer/3 (E2EXf_Inv_P05OutOfPlace_Transformer) @06b47c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_Inv_CopyOutOfPlaceBuffer/16 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_P05Check/4 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_OutOfPlaceTransPreCondCheck/15 (343919506 (estimated locally),0.32 per call) 
E2EXf_Inv_P05InPlace_Transformer/2 (E2EXf_Inv_P05InPlace_Transformer) @06b47a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_Inv_InPlaceShiftUpperHeaderToRight/11 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_P05Check/4 (113493437 (estimated locally),0.11 per call) E2EXf_Inv_InPlaceTransPreCondCheck/10 (343919506 (estimated locally),0.32 per call) 
E2EXf_P05OutOfPlace_Transformer/1 (E2EXf_P05OutOfPlace_Transformer) @06b478c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_P05Protect/7 (113493437 (estimated locally),0.11 per call) E2EXf_CopyOutOfPlaceBuffer/9 (113493437 (estimated locally),0.11 per call) E2EXf_OutOfPlaceTransPreCondCheck/8 (343919506 (estimated locally),0.32 per call) 
E2EXf_P05InPlace_Transformer/0 (E2EXf_P05InPlace_Transformer) @06b47700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_P05Protect/7 (113493437 (estimated locally),0.11 per call) E2EXf_InPlaceShiftUpperHeaderToLeft/6 (113493437 (estimated locally),0.11 per call) E2EXf_InPlaceTransPreCondCheck/5 (343919506 (estimated locally),0.32 per call) 

;; Function E2EXf_Inv_P05Check (E2EXf_Inv_P05Check, funcdef_no=4, decl_uid=5529, cgraph_uid=5, symbol_order=4)

Modification phase of node E2EXf_Inv_P05Check/4
E2EXf_Inv_P05Check (const uint8 * BufferPtr, uint16 InputBufferLength, struct E2EXf_P05CheckStatesType * CheckStatesPtr, const struct E2EXf_P05CheckCfgType * ConfigPtr)
{
  struct E2E_SMCheckStateType * const SMCheckStatePtr;
  struct E2E_P05CheckStateType * const CheckStatePtr;
  const struct E2E_SMConfigType * const SMConfigPtr;
  const struct E2E_P05ConfigType * const ProfileConfigPtr;
  E2E_PCheckStatusType RetValMapStatusToSM;
  Std_ReturnType RetValCheck;
  Std_ReturnType RetVal;
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BufferLength => InputBufferLength_2(D)
  # DEBUG BEGIN_STMT
  ProfileConfigPtr_4 = &ConfigPtr_3(D)->P05Config;
  # DEBUG ProfileConfigPtr => ProfileConfigPtr_4
  # DEBUG BEGIN_STMT
  SMConfigPtr_5 = &ConfigPtr_3(D)->SMConfig;
  # DEBUG SMConfigPtr => SMConfigPtr_5
  # DEBUG BEGIN_STMT
  CheckStatePtr_7 = &CheckStatesPtr_6(D)->P05CheckState;
  # DEBUG CheckStatePtr => CheckStatePtr_7
  # DEBUG BEGIN_STMT
  SMCheckStatePtr_8 = &CheckStatesPtr_6(D)->SMCheckState;
  # DEBUG SMCheckStatePtr => SMCheckStatePtr_8
  # DEBUG BEGIN_STMT
  RetValCheck_12 = E2E_P05Check (ProfileConfigPtr_4, CheckStatePtr_7, BufferPtr_10(D), InputBufferLength_2(D));
  # DEBUG RetValCheck => RetValCheck_12
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct E2E_P05CheckStateType *)CheckStatesPtr_6(D)].Status;
  RetValMapStatusToSM_14 = E2E_P05MapStatusToSM (RetValCheck_12, _1);
  # DEBUG RetValMapStatusToSM => RetValMapStatusToSM_14
  # DEBUG BEGIN_STMT
  RetVal_16 = E2EXf_Inv_SMCheck (RetValMapStatusToSM_14, SMConfigPtr_5, SMCheckStatePtr_8);
  # DEBUG RetVal => RetVal_16
  # DEBUG BEGIN_STMT
  return RetVal_16;

}



;; Function E2EXf_P05InPlace_Transformer (E2EXf_P05InPlace_Transformer, funcdef_no=0, decl_uid=5459, cgraph_uid=1, symbol_order=0)

Modification phase of node E2EXf_P05InPlace_Transformer/0
E2EXf_P05InPlace_Transformer (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength, struct E2E_P05ProtectStateType * ProtectStatePtr, const struct E2EXf_P05ProtectCfgType * ConfigPtr, E2EXf_StateType E2EXf_PartitionInitState)
{
  Std_ReturnType RetValProt;
  const struct E2E_P05ConfigType * const ProfileCfgPtr;
  const struct E2EXf_PXXConfigType * const PXXConfigPtr;
  uint16 BufferLength;
  Std_ReturnType RetVal;
  short unsigned int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (E2EXf_PartitionInitState_5(D) == 1)
    goto <bb 3>; [32.03%]
  else
    goto <bb 6>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  PXXConfigPtr_8 = &ConfigPtr_7(D)->PXXConfig;
  # DEBUG PXXConfigPtr => PXXConfigPtr_8
  # DEBUG BEGIN_STMT
  RetVal_13 = E2EXf_InPlaceTransPreCondCheck (BufferPtr_9(D), BufferLengthPtr_10(D), InputBufferLength_11(D), PXXConfigPtr_8);
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  if (RetVal_13 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 4> [local count: 113493437]:
  # DEBUG BEGIN_STMT
  ProfileCfgPtr_14 = &ConfigPtr_7(D)->P05Config;
  # DEBUG ProfileCfgPtr => ProfileCfgPtr_14
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  E2EXf_InPlaceShiftUpperHeaderToLeft (BufferPtr_9(D), PXXConfigPtr_8);
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct E2EXf_PXXConfigType *)ConfigPtr_7(D) + 8B].HeaderLength;
  _2 = _1 >> 3;
  BufferLength_16 = _2 + InputBufferLength_11(D);
  # DEBUG BufferLength => BufferLength_16
  # DEBUG BEGIN_STMT
  *BufferLengthPtr_10(D) = BufferLength_16;
  # DEBUG BEGIN_STMT
  RetValProt_20 = E2E_P05Protect (ProfileCfgPtr_14, ProtectStatePtr_18(D), BufferPtr_9(D), BufferLength_16);
  # DEBUG RetValProt => RetValProt_20
  # DEBUG BEGIN_STMT
  if (RetValProt_20 != 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 5> [local count: 39722703]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255

  <bb 6> [local count: 1073741824]:
  # RetVal_3 = PHI <255(2), RetVal_13(3), 0(4), 255(5)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function E2EXf_P05OutOfPlace_Transformer (E2EXf_P05OutOfPlace_Transformer, funcdef_no=1, decl_uid=5467, cgraph_uid=2, symbol_order=1)

Modification phase of node E2EXf_P05OutOfPlace_Transformer/1
E2EXf_P05OutOfPlace_Transformer (uint8 * BufferPtr, uint16 * BufferLengthPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, struct E2E_P05ProtectStateType * ProtectStatePtr, const struct E2EXf_P05ProtectCfgType * ConfigPtr, E2EXf_StateType E2EXf_PartitionInitState)
{
  Std_ReturnType RetValProt;
  const struct E2E_P05ConfigType * const ProfileCfgPtr;
  const struct E2EXf_PXXConfigType * const PXXConfigPtr;
  uint16 BufferLength;
  Std_ReturnType RetVal;
  short unsigned int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (E2EXf_PartitionInitState_5(D) == 1)
    goto <bb 3>; [32.03%]
  else
    goto <bb 6>; [67.97%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  PXXConfigPtr_8 = &ConfigPtr_7(D)->PXXConfig;
  # DEBUG PXXConfigPtr => PXXConfigPtr_8
  # DEBUG BEGIN_STMT
  RetVal_14 = E2EXf_OutOfPlaceTransPreCondCheck (BufferPtr_9(D), BufferLengthPtr_10(D), InputBufferPtr_11(D), InputBufferLength_12(D), PXXConfigPtr_8);
  # DEBUG RetVal => RetVal_14
  # DEBUG BEGIN_STMT
  if (RetVal_14 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 4> [local count: 113493437]:
  # DEBUG BEGIN_STMT
  ProfileCfgPtr_15 = &ConfigPtr_7(D)->P05Config;
  # DEBUG ProfileCfgPtr => ProfileCfgPtr_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  E2EXf_CopyOutOfPlaceBuffer (BufferPtr_9(D), InputBufferPtr_11(D), InputBufferLength_12(D), PXXConfigPtr_8);
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct E2EXf_PXXConfigType *)ConfigPtr_7(D) + 8B].HeaderLength;
  _2 = _1 >> 3;
  BufferLength_17 = _2 + InputBufferLength_12(D);
  # DEBUG BufferLength => BufferLength_17
  # DEBUG BEGIN_STMT
  *BufferLengthPtr_10(D) = BufferLength_17;
  # DEBUG BEGIN_STMT
  RetValProt_21 = E2E_P05Protect (ProfileCfgPtr_15, ProtectStatePtr_19(D), BufferPtr_9(D), BufferLength_17);
  # DEBUG RetValProt => RetValProt_21
  # DEBUG BEGIN_STMT
  if (RetValProt_21 != 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 5> [local count: 39722703]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 255

  <bb 6> [local count: 1073741824]:
  # RetVal_3 = PHI <255(2), RetVal_14(3), 0(4), 255(5)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function E2EXf_Inv_P05InPlace_Transformer (E2EXf_Inv_P05InPlace_Transformer, funcdef_no=2, decl_uid=5474, cgraph_uid=3, symbol_order=2)

Modification phase of node E2EXf_Inv_P05InPlace_Transformer/2
E2EXf_Inv_P05InPlace_Transformer (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength, struct E2EXf_P05CheckStatesType * CheckStatesPtr, const struct E2EXf_P05CheckCfgType * ConfigPtr, E2EXf_StateType E2EXf_PartitionInitState)
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
  RetVal_17 = E2EXf_Inv_P05Check (BufferPtr_10(D), InputBufferLength_12(D), CheckStatesPtr_15(D), ConfigPtr_8(D));
  # DEBUG RetVal => RetVal_17
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
  _1 = MEM[(const struct E2EXf_PXXConfigType *)ConfigPtr_8(D) + 16B].HeaderLength;
  _2 = _1 >> 3;
  _3 = InputBufferLength_12(D) - _2;
  *BufferLengthPtr_11(D) = _3;

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <255(2), RetVal_14(3), RetVal_17(5), RetVal_17(6)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function E2EXf_Inv_P05OutOfPlace_Transformer (E2EXf_Inv_P05OutOfPlace_Transformer, funcdef_no=3, decl_uid=5482, cgraph_uid=4, symbol_order=3)

Modification phase of node E2EXf_Inv_P05OutOfPlace_Transformer/3
E2EXf_Inv_P05OutOfPlace_Transformer (uint8 * BufferPtr, uint16 * BufferLengthPtr, const uint8 * InputBufferPtr, uint16 InputBufferLength, struct E2EXf_P05CheckStatesType * CheckStatesPtr, const struct E2EXf_P05CheckCfgType * ConfigPtr, E2EXf_StateType E2EXf_PartitionInitState)
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
  RetVal_18 = E2EXf_Inv_P05Check (InputBufferPtr_12(D), InputBufferLength_13(D), CheckStatesPtr_16(D), ConfigPtr_8(D));
  # DEBUG RetVal => RetVal_18
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
  _1 = MEM[(const struct E2EXf_PXXConfigType *)ConfigPtr_8(D) + 16B].HeaderLength;
  _2 = _1 >> 3;
  _3 = InputBufferLength_13(D) - _2;
  *BufferLengthPtr_11(D) = _3;

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <255(2), RetVal_15(3), RetVal_18(5), RetVal_18(6)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}


