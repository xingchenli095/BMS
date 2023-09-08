
IPA constant propagation start:
Determining dynamic type for call: RetVal_38 = Crypto_AL_KeyElementSet (TargetCryptoKeyId_34(D), TargetKeyElementId_35(D), _25, _16);
  Starting walk at: RetVal_38 = Crypto_AL_KeyElementSet (TargetCryptoKeyId_34(D), TargetKeyElementId_35(D), _25, _16);
  instance pointer: _25  Outer instance pointer: _25 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_24 = Crypto_AL_KeyElementGetIndex (CryptoKeyId_21(D), KeyElementId_22(D), &KeyElementIndex);
  Starting walk at: RetVal_24 = Crypto_AL_KeyElementGetIndex (CryptoKeyId_21(D), KeyElementId_22(D), &KeyElementIndex);
  instance pointer: &KeyElementIndex  Outer instance pointer: KeyElementIndex offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_AL_AESCMAC_PrecalculateKeys/19:
  Jump functions of caller  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18:
  Jump functions of caller  TS_MemCpy32/17:
  Jump functions of caller  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/15:
  Jump functions of caller  Crypto_AL_KeyElementGetIndex/13:
  Jump functions of caller  Crypto_AL_CertificateVerify/12:
  Jump functions of caller  Crypto_AL_CertificateParse/11:
  Jump functions of caller  Crypto_AL_KeyExchangeCalcSecret/10:
  Jump functions of caller  Crypto_AL_KeyExchangeCalcPubVal/9:
  Jump functions of caller  Crypto_AL_KeyDerive/8:
  Jump functions of caller  Crypto_AL_KeyGenerate/7:
  Jump functions of caller  Crypto_AL_RandomSeed/6:
  Jump functions of caller  Crypto_AL_FindKeyElement/5:
  Jump functions of caller  Crypto_AL_KeyCopy/4:
    callsite  Crypto_AL_KeyCopy/4 -> Crypto_AL_KeyElementCopy/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_KeyElementCopy/3:
    callsite  Crypto_AL_KeyElementCopy/3 -> Crypto_AL_KeyElementSet/0 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_AL_KeyElementGet/2:
    callsite  Crypto_AL_KeyElementGet/2 -> Crypto_AL_KeyElementGetIndex/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Crypto_AL_KeyValidSet/1:
  Jump functions of caller  Crypto_AL_KeyElementSet/0:

 Propagating constants:

Not considering Crypto_AL_CertificateVerify for cloning; -fipa-cp-clone disabled.
Function Crypto_AL_CertificateParse/11 is not versionable, reason: not a tree_versionable_function.
Function Crypto_AL_KeyExchangeCalcSecret/10 is not versionable, reason: not a tree_versionable_function.
Not considering Crypto_AL_KeyExchangeCalcPubVal for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyDerive for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyGenerate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_RandomSeed for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_FindKeyElement for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyElementCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyElementGet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyValidSet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_KeyElementSet for cloning; -fipa-cp-clone disabled.

overall_size: 253, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 3.000000
 - context independent values, size: 3, time_benefit: 3.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 0, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 17, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Crypto_AL_KeyElementGetIndex/13:
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
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: Crypto_AL_CertificateVerify/12:
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
  Node: Crypto_AL_CertificateParse/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_AL_KeyExchangeCalcSecret/10:
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
  Node: Crypto_AL_KeyExchangeCalcPubVal/9:
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
  Node: Crypto_AL_KeyDerive/8:
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
  Node: Crypto_AL_KeyGenerate/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_AL_RandomSeed/6:
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
  Node: Crypto_AL_FindKeyElement/5:
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
  Node: Crypto_AL_KeyCopy/4:
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
  Node: Crypto_AL_KeyElementCopy/3:
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
  Node: Crypto_AL_KeyElementGet/2:
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
  Node: Crypto_AL_KeyValidSet/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_AL_KeyElementSet/0:
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

 - Creating a specialized node of Crypto_AL_RandomSeed/6 for all known contexts.
 - Creating a specialized node of Crypto_AL_KeyElementGetIndex/13 for all known contexts.
Propagated bits info for function Crypto_AL_KeyElementGetIndex.constprop/21:
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Crypto_AL_KeyElementGetIndex/13:
 param 2: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: Crypto_AL_KeyElementGetIndex/13
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_AL_KeyElementGetIndex.constprop.0/21 (Crypto_AL_KeyElementGetIndex.constprop) @06dbc000
  Type: function definition analyzed
  Visibility:
  References: Crypto_Keys/14 (read)Crypto_Keys/14 (read)
  Referring: 
  Clone of Crypto_AL_KeyElementGetIndex/13
  Availability: local
  Function flags: count:114863532 (estimated locally) local optimize_size
  Called by: Crypto_AL_KeyElementGet/2 (357913939 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_RandomSeed.constprop.0/20 (Crypto_AL_RandomSeed.constprop) @06cc2d20
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Crypto_AL_RandomSeed/6
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Crypto_AL_KeyExchangeCalcSecret/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_AESCMAC_PrecalculateKeys/19 (Crypto_AL_AESCMAC_PrecalculateKeys) @06ca00e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_KeyElementSet/0 (7218738 (estimated locally),0.06 per call) 
  Calls: 
SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06ca0000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_KeyElementGet/2 (118111601 (estimated locally),0.33 per call) Crypto_AL_KeyElementSet/0 (35665701 (estimated locally),0.31 per call) 
  Calls: 
TS_MemCpy32/17 (TS_MemCpy32) @06c47ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_KeyElementSet/0 (35665701 (estimated locally),0.31 per call) 
  Calls: 
Crypto_AL_Keys_Data/16 (Crypto_AL_Keys_Data) @06c045a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_KeyElementGet/2 (read)Crypto_AL_KeyElementGet/2 (read)Crypto_AL_KeyElementSet/0 (read)Crypto_AL_KeyElementSet/0 (read)Crypto_AL_KeyElementCopy/3 (read)Crypto_AL_KeyCopy/4 (read)
  Availability: not_available
  Varpool flags:
SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/15 (SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06c47e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_KeyElementGet/2 (118111600 (estimated locally),0.33 per call) Crypto_AL_KeyElementSet/0 (35665701 (estimated locally),0.31 per call) 
  Calls: 
Crypto_Keys/14 (Crypto_Keys) @06c04f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_KeyValidSet/1 (write)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyElementGetIndex.constprop.0/21 (read)Crypto_AL_KeyElementCopy/3 (read)Crypto_AL_KeyElementCopy/3 (read)Crypto_AL_KeyElementCopy/3 (read)Crypto_AL_KeyElementCopy/3 (read)Crypto_AL_KeyElementSet/0 (read)Crypto_AL_KeyElementSet/0 (read)Crypto_AL_KeyElementCopy/3 (read)Crypto_AL_KeyElementGetIndex.constprop.0/21 (read)Crypto_AL_KeyElementSet/0 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_KeyCopy/4 (read)Crypto_AL_FindKeyElement/5 (read)Crypto_AL_FindKeyElement/5 (read)
  Availability: not_available
  Varpool flags:
Crypto_AL_KeyElementGetIndex/13 (Crypto_AL_KeyElementGetIndex) @06c47c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_CertificateVerify/12 (Crypto_AL_CertificateVerify) @06c47a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_CertificateParse/11 (Crypto_AL_CertificateParse) @06c478c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Crypto_AL_KeyGenerate/7 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_KeyExchangeCalcSecret/10 (Crypto_AL_KeyExchangeCalcSecret) @06c47700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Crypto_AL_RandomSeed.constprop/20 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_KeyExchangeCalcPubVal/9 (Crypto_AL_KeyExchangeCalcPubVal) @06c47540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_KeyDerive/8 (Crypto_AL_KeyDerive) @06c47380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_KeyGenerate/7 (Crypto_AL_KeyGenerate) @06c471c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Crypto_AL_CertificateParse/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_RandomSeed/6 (Crypto_AL_RandomSeed) @06c47000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
Crypto_AL_FindKeyElement/5 (Crypto_AL_FindKeyElement) @06c27e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Keys/14 (read)Crypto_Keys/14 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_KeyCopy/4 (Crypto_AL_KeyCopy) @06c27c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_AL_Keys_Data/16 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)
  Referring: 
  Availability: available
  Function flags: count:27518886 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyElementCopy/3 (27044587 (estimated locally),0.98 per call) 
Crypto_AL_KeyElementCopy/3 (Crypto_AL_KeyElementCopy) @06c27a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_AL_Keys_Data/16 (read)Crypto_Keys/14 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: Crypto_AL_KeyCopy/4 (27044587 (estimated locally),0.98 per call) 
  Calls: Crypto_AL_KeyElementSet/0 (52362300 (estimated locally),0.46 per call) 
Crypto_AL_KeyElementGet/2 (Crypto_AL_KeyElementGet) @06c278c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_AL_Keys_Data/16 (read)Crypto_AL_Keys_Data/16 (read)
  Referring: 
  Availability: available
  Function flags: count:357913939 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (118111601 (estimated locally),0.33 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/15 (118111600 (estimated locally),0.33 per call) Crypto_AL_KeyElementGetIndex.constprop/21 (357913939 (estimated locally),1.00 per call) 
Crypto_AL_KeyValidSet/1 (Crypto_AL_KeyValidSet) @06c27700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Keys/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_AL_KeyElementSet/0 (Crypto_AL_KeyElementSet) @06c27540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_Keys/14 (read)Crypto_AL_Keys_Data/16 (read)Crypto_AL_Keys_Data/16 (read)
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: Crypto_AL_KeyElementCopy/3 (52362300 (estimated locally),0.46 per call) 
  Calls: Crypto_AL_AESCMAC_PrecalculateKeys/19 (7218738 (estimated locally),0.06 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (35665701 (estimated locally),0.31 per call) TS_MemCpy32/17 (35665701 (estimated locally),0.31 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/15 (35665701 (estimated locally),0.31 per call) 

;; Function Crypto_AL_KeyElementSet (Crypto_AL_KeyElementSet, funcdef_no=0, decl_uid=5918, cgraph_uid=1, symbol_order=0)

Modification phase of node Crypto_AL_KeyElementSet/0
Crypto_AL_KeyElementSet (uint32 CryptoKeyId, uint32 KeyElementId, const uint8 * KeyPtr, uint32 KeyLength)
{
  uint32 KeyElementIndex;
  boolean Found;
  Std_ReturnType RetVal;
  struct Crypto_KeyElement * const * _1;
  long unsigned int _2;
  struct Crypto_KeyElement * const * _3;
  struct Crypto_KeyElement * _4;
  long unsigned int _5;
  long unsigned int _6;
  struct Crypto_KeyElement * const * _7;
  long unsigned int _8;
  struct Crypto_KeyElement * const * _9;
  struct Crypto_KeyElement * _10;
  long unsigned int _11;
  struct Crypto_AL_KeyDataType * _12;
  long unsigned int _13;
  struct Crypto_AL_KeyDataType * _14;
  uint8 * _15;
  struct Crypto_AL_KeyDataType * _16;
  struct Crypto_AL_KeyDataType * _18;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG KeyElementIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_Keys[CryptoKeyId_24(D)].KeyType;
  _2 = KeyElementIndex_21 * 4;
  _3 = _1 + _2;
  _4 = *_3;
  _5 = _4->Id;
  if (_5 == KeyElementId_25(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  KeyElementIndex_26 = KeyElementIndex_21 + 1;
  # DEBUG KeyElementIndex => KeyElementIndex_26

  <bb 5> [local count: 1073741824]:
  # KeyElementIndex_21 = PHI <0(2), KeyElementIndex_26(4)>
  # DEBUG KeyElementIndex => KeyElementIndex_21
  # DEBUG BEGIN_STMT
  _6 = Crypto_Keys[CryptoKeyId_24(D)].KeyElements;
  if (_6 > KeyElementIndex_21)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # Found_20 = PHI <1(3), 0(5)>
  # KeyElementIndex_17 = PHI <KeyElementIndex_21(3), KeyElementIndex_21(5)>
  # DEBUG Found => Found_20
  # DEBUG BEGIN_STMT
  if (Found_20 == 0)
    goto <bb 11>; [35.00%]
  else
    goto <bb 7>; [65.00%]

  <bb 7> [local count: 74661296]:
  # DEBUG BEGIN_STMT
  _7 = Crypto_Keys[CryptoKeyId_24(D)].KeyType;
  _8 = KeyElementIndex_17 * 4;
  _9 = _7 + _8;
  _10 = *_9;
  _11 = _10->Size;
  if (_11 < KeyLength_27(D))
    goto <bb 11>; [52.23%]
  else
    goto <bb 8>; [47.77%]

  <bb 8> [local count: 35665701]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _12 = Crypto_AL_Keys_Data[CryptoKeyId_24(D)].KeyData;
  _13 = KeyElementIndex_17 * 12;
  _14 = _12 + _13;
  _15 = _14->RfKeyElemData;
  TS_MemCpy32 (_15, KeyPtr_29(D), KeyLength_27(D));
  # DEBUG BEGIN_STMT
  _16 = Crypto_AL_Keys_Data[CryptoKeyId_24(D)].KeyData;
  _18 = _16 + _13;
  _18->RfKeyElemDataSize = KeyLength_27(D);
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  if (KeyElementId_25(D) == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 9> [local count: 7218738]:
  # DEBUG BEGIN_STMT
  Crypto_AL_AESCMAC_PrecalculateKeys (CryptoKeyId_24(D));

  <bb 11> [local count: 114863532]:
  # RetVal_19 = PHI <8(6), 10(7), 0(9), 0(8)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  return RetVal_19;

}



;; Function Crypto_AL_KeyValidSet (Crypto_AL_KeyValidSet, funcdef_no=1, decl_uid=5920, cgraph_uid=2, symbol_order=1)

Modification phase of node Crypto_AL_KeyValidSet/1
Crypto_AL_KeyValidSet (uint32 CryptoKeyId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Keys[CryptoKeyId_2(D)].KeyState = 1;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Crypto_AL_KeyElementGet (Crypto_AL_KeyElementGet, funcdef_no=2, decl_uid=5925, cgraph_uid=3, symbol_order=2)

Modification phase of node Crypto_AL_KeyElementGet/2
Crypto_AL_KeyElementGet (uint32 CryptoKeyId, uint32 KeyElementId, uint8 * ResultPtr, uint32 * ResultLengthPtr)
{
  uint32 i;
  uint32 KeyElementIndex;
  Std_ReturnType RetVal;
  long unsigned int _1;
  struct Crypto_AL_KeyDataType * _2;
  long unsigned int KeyElementIndex.0_3;
  long unsigned int _4;
  struct Crypto_AL_KeyDataType * _5;
  long unsigned int _6;
  struct Crypto_AL_KeyDataType * _8;
  struct Crypto_AL_KeyDataType * _9;
  uint8 * _10;
  uint8 * _11;
  uint8 * _12;
  unsigned char _13;
  long unsigned int _14;

  <bb 2> [local count: 357913939]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  KeyElementIndex = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RetVal_24 = Crypto_AL_KeyElementGetIndex (CryptoKeyId_21(D), KeyElementId_22(D), &KeyElementIndex);
  # DEBUG RetVal => RetVal_24
  # DEBUG BEGIN_STMT
  if (RetVal_24 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _1 = *ResultLengthPtr_26(D);
  _2 = Crypto_AL_Keys_Data[CryptoKeyId_21(D)].KeyData;
  KeyElementIndex.0_3 = KeyElementIndex;
  _4 = KeyElementIndex.0_3 * 12;
  _5 = _2 + _4;
  _6 = _5->RfKeyElemDataSize;
  if (_1 > _6)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  *ResultLengthPtr_26(D) = _6;

  <bb 7> [local count: 118111600]:
  # i_16 = PHI <0(4), 0(3)>
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _8 = Crypto_AL_Keys_Data[CryptoKeyId_21(D)].KeyData;
  _9 = _8 + _4;
  _10 = _9->RfKeyElemData;
  _11 = _10 + i_15;
  _12 = ResultPtr_29(D) + i_15;
  _13 = *_11;
  *_12 = _13;
  # DEBUG BEGIN_STMT
  i_31 = i_15 + 1;
  # DEBUG i => i_31

  <bb 10> [local count: 1073741824]:
  # i_15 = PHI <i_16(7), i_31(6)>
  # DEBUG i => i_15
  # DEBUG BEGIN_STMT
  _14 = *ResultLengthPtr_26(D);
  if (_14 > i_15)
    goto <bb 6>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();

  <bb 9> [local count: 357913940]:
  # DEBUG BEGIN_STMT
  KeyElementIndex ={v} {CLOBBER};
  return RetVal_24;

}



;; Function Crypto_AL_KeyElementCopy (Crypto_AL_KeyElementCopy, funcdef_no=3, decl_uid=5930, cgraph_uid=4, symbol_order=3)

Modification phase of node Crypto_AL_KeyElementCopy/3
Crypto_AL_KeyElementCopy (uint32 CryptoKeyId, uint32 KeyElementId, uint32 TargetCryptoKeyId, uint32 TargetKeyElementId)
{
  uint32 TargetKeyElementIndex;
  uint32 SourceKeyElementIndex;
  Std_ReturnType RetVal;
  struct Crypto_KeyElement * const * _1;
  long unsigned int _2;
  struct Crypto_KeyElement * const * _3;
  struct Crypto_KeyElement * _4;
  long unsigned int _5;
  long unsigned int _6;
  struct Crypto_KeyElement * const * _7;
  long unsigned int _8;
  struct Crypto_KeyElement * const * _9;
  struct Crypto_KeyElement * _10;
  long unsigned int _11;
  long unsigned int _12;
  struct Crypto_AL_KeyDataType * _13;
  long unsigned int _14;
  struct Crypto_AL_KeyDataType * _15;
  long unsigned int _16;
  struct Crypto_KeyElement * const * _17;
  long unsigned int _18;
  struct Crypto_KeyElement * const * _19;
  struct Crypto_KeyElement * _20;
  long unsigned int _21;
  unsigned char _24;
  uint8 * _25;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SourceKeyElementIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_Keys[CryptoKeyId_31(D)].KeyType;
  _2 = SourceKeyElementIndex_27 * 4;
  _3 = _1 + _2;
  _4 = *_3;
  _5 = _4->Id;
  if (_5 == KeyElementId_32(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 114863532]:
  # SourceKeyElementIndex_22 = PHI <SourceKeyElementIndex_27(3), SourceKeyElementIndex_27(6)>
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  SourceKeyElementIndex_33 = SourceKeyElementIndex_27 + 1;
  # DEBUG SourceKeyElementIndex => SourceKeyElementIndex_33

  <bb 6> [local count: 1073741824]:
  # SourceKeyElementIndex_27 = PHI <0(2), SourceKeyElementIndex_33(5)>
  # DEBUG SourceKeyElementIndex => SourceKeyElementIndex_27
  # DEBUG BEGIN_STMT
  _6 = Crypto_Keys[CryptoKeyId_31(D)].KeyElements;
  if (_6 > SourceKeyElementIndex_27)
    goto <bb 3>; [94.50%]
  else
    goto <bb 4>; [5.50%]

  <bb 7> [local count: 1014686020]:
  # DEBUG BEGIN_STMT
  _7 = Crypto_Keys[TargetCryptoKeyId_34(D)].KeyType;
  _8 = TargetKeyElementIndex_28 * 4;
  _9 = _7 + _8;
  _10 = *_9;
  _11 = _10->Id;
  if (_11 == TargetKeyElementId_35(D))
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878288]:
  # DEBUG BEGIN_STMT
  TargetKeyElementIndex_36 = TargetKeyElementIndex_28 + 1;
  # DEBUG TargetKeyElementIndex => TargetKeyElementIndex_36

  <bb 9> [local count: 1073741820]:
  # TargetKeyElementIndex_28 = PHI <0(4), TargetKeyElementIndex_36(8)>
  # DEBUG TargetKeyElementIndex => TargetKeyElementIndex_28
  # DEBUG BEGIN_STMT
  _12 = Crypto_Keys[TargetCryptoKeyId_34(D)].KeyElements;
  if (_12 > TargetKeyElementIndex_28)
    goto <bb 7>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863531]:
  # TargetKeyElementIndex_23 = PHI <TargetKeyElementIndex_28(7), TargetKeyElementIndex_28(9)>
  # DEBUG BEGIN_STMT
  _13 = Crypto_AL_Keys_Data[CryptoKeyId_31(D)].KeyData;
  _14 = SourceKeyElementIndex_22 * 12;
  _15 = _13 + _14;
  _16 = _15->RfKeyElemDataSize;
  _17 = Crypto_Keys[TargetCryptoKeyId_34(D)].KeyType;
  _18 = TargetKeyElementIndex_23 * 4;
  _19 = _17 + _18;
  _20 = *_19;
  _21 = _20->Size;
  if (_16 == _21)
    goto <bb 13>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 11> [local count: 91615152]:
  if (_16 < _21)
    goto <bb 12>; [65.00%]
  else
    goto <bb 14>; [35.00%]

  <bb 12> [local count: 59549849]:
  _24 = _20->AllowPartialAccess;
  if (_24 == 1)
    goto <bb 13>; [48.89%]
  else
    goto <bb 14>; [51.11%]

  <bb 13> [local count: 52362300]:
  # DEBUG BEGIN_STMT
  _25 = _15->RfKeyElemData;
  RetVal_38 = Crypto_AL_KeyElementSet (TargetCryptoKeyId_34(D), TargetKeyElementId_35(D), _25, _16);
  # DEBUG RetVal => RetVal_38

  <bb 14> [local count: 114863531]:
  # RetVal_26 = PHI <RetVal_38(13), 10(12), 10(11)>
  # DEBUG RetVal => RetVal_26
  # DEBUG BEGIN_STMT
  return RetVal_26;

}



;; Function Crypto_AL_KeyCopy (Crypto_AL_KeyCopy, funcdef_no=4, decl_uid=5933, cgraph_uid=5, symbol_order=4)

Modification phase of node Crypto_AL_KeyCopy/4
Crypto_AL_KeyCopy (uint32 CryptoKeyId, uint32 TargetCryptoKeyId)
{
  uint32 j;
  uint32 i;
  Std_ReturnType RetVal;
  unsigned char _1;
  struct Crypto_KeyElement * const * _2;
  long unsigned int _3;
  struct Crypto_KeyElement * const * _4;
  struct Crypto_KeyElement * _5;
  long unsigned int _6;
  struct Crypto_KeyElement * const * _7;
  long unsigned int _8;
  struct Crypto_KeyElement * const * _9;
  struct Crypto_KeyElement * _10;
  long unsigned int _11;
  struct Crypto_AL_KeyDataType * _12;
  long unsigned int _13;
  struct Crypto_AL_KeyDataType * _14;
  long unsigned int _15;
  struct Crypto_KeyElement * _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _20;
  unsigned char _21;
  long unsigned int _22;
  long unsigned int _23;
  struct Crypto_KeyElement * const * _24;
  long unsigned int _25;
  struct Crypto_KeyElement * const * _26;
  struct Crypto_KeyElement * _27;
  long unsigned int _28;
  struct Crypto_KeyElement * const * _29;
  long unsigned int _30;
  struct Crypto_KeyElement * const * _31;
  struct Crypto_KeyElement * _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;

  <bb 2> [local count: 27518886]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  _1 = Crypto_Keys[CryptoKeyId_47(D)].KeyState;
  if (_1 != 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 23> [local count: 13759443]:
  goto <bb 11>; [100.00%]

  <bb 3> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _2 = Crypto_Keys[CryptoKeyId_47(D)].KeyType;
  _3 = i_39 * 4;
  _4 = _2 + _3;
  _5 = *_4;
  _6 = _5->Id;
  _7 = Crypto_Keys[TargetCryptoKeyId_48(D)].KeyType;
  _8 = j_41 * 4;
  _9 = _7 + _8;
  _10 = *_9;
  _11 = _10->Id;
  if (_6 == _11)
    goto <bb 4>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 4> [local count: 55807731]:
  # _16 = PHI <_10(3)>
  # DEBUG BEGIN_STMT
  _12 = Crypto_AL_Keys_Data[CryptoKeyId_47(D)].KeyData;
  _13 = i_39 * 12;
  _14 = _12 + _13;
  _15 = _14->RfKeyElemDataSize;
  _20 = _16->Size;
  if (_15 == _20)
    goto <bb 7>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 36833103]:
  if (_15 < _20)
    goto <bb 6>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 6> [local count: 18416551]:
  _21 = _16->AllowPartialAccess;
  if (_21 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 7> [local count: 25236256]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 958878292]:
  # DEBUG BEGIN_STMT
  j_49 = j_41 + 1;
  # DEBUG j => j_49

  <bb 9> [local count: 1073741824]:
  # j_41 = PHI <j_49(8), 0(24)>
  # DEBUG RetVal => NULL
  # DEBUG j => j_41
  # DEBUG BEGIN_STMT
  _22 = Crypto_Keys[TargetCryptoKeyId_48(D)].KeyElements;
  if (_22 > j_41)
    goto <bb 3>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863532]:
  # RetVal_36 = PHI <10(6), 10(9), 10(5), 0(7)>
  # DEBUG RetVal => RetVal_36
  # DEBUG BEGIN_STMT
  i_50 = i_39 + 1;
  # DEBUG i => i_50

  <bb 11> [local count: 128622975]:
  # RetVal_37 = PHI <RetVal_36(10), 0(23)>
  # i_39 = PHI <i_50(10), 0(23)>
  # DEBUG i => i_39
  # DEBUG RetVal => RetVal_37
  # DEBUG BEGIN_STMT
  _23 = Crypto_Keys[CryptoKeyId_47(D)].KeyElements;
  if (_23 > i_39)
    goto <bb 12>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 12> [local count: 121548711]:
  if (RetVal_37 == 0)
    goto <bb 24>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 24> [local count: 114863532]:
  goto <bb 9>; [100.00%]

  <bb 13> [local count: 13759443]:
  # RetVal_19 = PHI <RetVal_37(11), RetVal_37(12)>
  # DEBUG BEGIN_STMT
  if (RetVal_19 == 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 21> [local count: 6879721]:
  goto <bb 19>; [100.00%]

  <bb 14> [local count: 491719763]:
  # DEBUG BEGIN_STMT
  _24 = Crypto_Keys[CryptoKeyId_47(D)].KeyType;
  _25 = i_40 * 4;
  _26 = _24 + _25;
  _27 = *_26;
  _28 = _27->Id;
  _29 = Crypto_Keys[TargetCryptoKeyId_48(D)].KeyType;
  _30 = j_42 * 4;
  _31 = _29 + _30;
  _32 = *_31;
  _33 = _32->Id;
  if (_28 == _33)
    goto <bb 15>; [5.50%]
  else
    goto <bb 16>; [94.50%]

  <bb 15> [local count: 27044587]:
  # _17 = PHI <_28(14)>
  # _18 = PHI <_33(14)>
  # DEBUG BEGIN_STMT
  Crypto_AL_KeyElementCopy (CryptoKeyId_47(D), _17, TargetCryptoKeyId_48(D), _18);
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 16> [local count: 464675176]:
  # DEBUG BEGIN_STMT
  j_51 = j_42 + 1;
  # DEBUG j => j_51

  <bb 17> [local count: 520338373]:
  # j_42 = PHI <j_51(16), 0(22)>
  # DEBUG j => j_42
  # DEBUG BEGIN_STMT
  _34 = Crypto_Keys[TargetCryptoKeyId_48(D)].KeyElements;
  if (_34 > j_42)
    goto <bb 14>; [94.50%]
  else
    goto <bb 18>; [5.50%]

  <bb 18> [local count: 55663197]:
  # DEBUG BEGIN_STMT
  i_53 = i_40 + 1;
  # DEBUG i => i_53

  <bb 19> [local count: 62542919]:
  # i_40 = PHI <i_53(18), 0(21)>
  # DEBUG i => i_40
  # DEBUG BEGIN_STMT
  _35 = Crypto_Keys[CryptoKeyId_47(D)].KeyElements;
  if (_35 > i_40)
    goto <bb 22>; [89.00%]
  else
    goto <bb 20>; [11.00%]

  <bb 22> [local count: 55663198]:
  goto <bb 17>; [100.00%]

  <bb 20> [local count: 27518885]:
  # RetVal_38 = PHI <1(2), RetVal_19(13), 0(19)>
  # DEBUG RetVal => RetVal_38
  # DEBUG BEGIN_STMT
  return RetVal_38;

}



;; Function Crypto_AL_FindKeyElement (Crypto_AL_FindKeyElement, funcdef_no=5, decl_uid=5937, cgraph_uid=6, symbol_order=5)

Modification phase of node Crypto_AL_FindKeyElement/5
Crypto_AL_FindKeyElement (uint32 CryptoKeyId, uint32 KeyElementId, uint32 * KeyElementIndex)
{
  uint32 Idx;
  boolean Found;
  struct Crypto_KeyElement * const * _1;
  long unsigned int _2;
  struct Crypto_KeyElement * const * _3;
  struct Crypto_KeyElement * _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Idx => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_Keys[CryptoKeyId_11(D)].KeyType;
  _2 = Idx_8 * 4;
  _3 = _1 + _2;
  _4 = *_3;
  _5 = _4->Id;
  if (_5 == KeyElementId_12(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 55807731]:
  # Idx_16 = PHI <Idx_8(3)>
  # DEBUG BEGIN_STMT
  # DEBUG Found => 1
  # DEBUG BEGIN_STMT
  *KeyElementIndex_14(D) = Idx_16;
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  Idx_13 = Idx_8 + 1;
  # DEBUG Idx => Idx_13

  <bb 6> [local count: 1073741824]:
  # Idx_8 = PHI <0(2), Idx_13(5)>
  # DEBUG Idx => Idx_8
  # DEBUG BEGIN_STMT
  _6 = Crypto_Keys[CryptoKeyId_11(D)].KeyElements;
  if (_6 > Idx_8)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 114863532]:
  # Found_7 = PHI <1(4), 0(6)>
  # DEBUG Found => Found_7
  # DEBUG BEGIN_STMT
  return Found_7;

}



;; Function Crypto_AL_RandomSeed (Crypto_AL_RandomSeed, funcdef_no=6, decl_uid=5941, cgraph_uid=7, symbol_order=6)

Modification phase of node Crypto_AL_RandomSeed/6
Crypto_AL_RandomSeed (uint32 CryptoKeyId, const uint8 * EntropyPtr, uint32 EntropyLength)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Crypto_AL_KeyGenerate (Crypto_AL_KeyGenerate, funcdef_no=7, decl_uid=5943, cgraph_uid=8, symbol_order=7)

Modification phase of node Crypto_AL_KeyGenerate/7
Crypto_AL_KeyGenerate (uint32 CryptoKeyId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Crypto_AL_KeyDerive (Crypto_AL_KeyDerive, funcdef_no=8, decl_uid=5946, cgraph_uid=9, symbol_order=8)

Modification phase of node Crypto_AL_KeyDerive/8
Crypto_AL_KeyDerive (uint32 CryptoKeyId, uint32 TargetCryptoKeyId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Crypto_AL_KeyExchangeCalcPubVal (Crypto_AL_KeyExchangeCalcPubVal, funcdef_no=9, decl_uid=5950, cgraph_uid=10, symbol_order=9)

Modification phase of node Crypto_AL_KeyExchangeCalcPubVal/9
Crypto_AL_KeyExchangeCalcPubVal (uint32 CryptoKeyId, uint8 * PublicValuePtr, uint32 * PublicValueLengthPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Crypto_AL_KeyExchangeCalcSecret (Crypto_AL_KeyExchangeCalcSecret, funcdef_no=15, decl_uid=5954, cgraph_uid=11, symbol_order=10)

Modification phase of node Crypto_AL_KeyExchangeCalcSecret/10
Crypto_AL_KeyExchangeCalcSecret (uint32 CryptoKeyId, const uint8 * PartnerPublicValuePtr, uint32 PartnerPublicValueLength)
{
  Std_ReturnType retval.17;

  <bb 2> [local count: 1073741824]:
  retval.17_4 = Crypto_AL_RandomSeed (CryptoKeyId_1(D), PartnerPublicValuePtr_2(D), PartnerPublicValueLength_3(D)); [tail call]
  return retval.17_4;

}



;; Function Crypto_AL_CertificateParse (Crypto_AL_CertificateParse, funcdef_no=17, decl_uid=5956, cgraph_uid=12, symbol_order=11)

Modification phase of node Crypto_AL_CertificateParse/11
Crypto_AL_CertificateParse (uint32 CryptoKeyId)
{
  Std_ReturnType retval.18;

  <bb 2> [local count: 1073741824]:
  retval.18_2 = Crypto_AL_KeyGenerate (CryptoKeyId_1(D)); [tail call]
  return retval.18_2;

}



;; Function Crypto_AL_CertificateVerify (Crypto_AL_CertificateVerify, funcdef_no=12, decl_uid=5960, cgraph_uid=13, symbol_order=12)

Modification phase of node Crypto_AL_CertificateVerify/12
Crypto_AL_CertificateVerify (uint32 CryptoKeyId, uint32 VerifyCryptoKeyId, Crypto_VerifyResultType * VerifyPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}


