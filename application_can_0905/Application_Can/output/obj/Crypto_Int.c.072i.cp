
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_AL_CertificateVerify/25:
  Jump functions of caller  Crypto_AL_CertificateParse/24:
  Jump functions of caller  Crypto_AL_KeyExchangeCalcSecret/23:
  Jump functions of caller  Crypto_AL_KeyExchangeCalcPubVal/22:
  Jump functions of caller  Crypto_AL_KeyDerive/21:
  Jump functions of caller  Crypto_AL_KeyGenerate/20:
  Jump functions of caller  Crypto_AL_RandomSeed/19:
  Jump functions of caller  Crypto_AL_KeyCopy/18:
  Jump functions of caller  Crypto_AL_KeyElementCopy/17:
  Jump functions of caller  Crypto_AL_KeyElementGet/16:
  Jump functions of caller  Crypto_AL_KeyValidSet/15:
  Jump functions of caller  Crypto_AL_KeyElementSet/14:
  Jump functions of caller  Crypto_AL_Init/13:
  Jump functions of caller  Crypto_PL_CertificateVerify/12:
  Jump functions of caller  Crypto_PL_CertificateParse/11:
  Jump functions of caller  Crypto_PL_KeyExchangeCalcSecret/10:
  Jump functions of caller  Crypto_PL_KeyExchangeCalcPubVal/9:
  Jump functions of caller  Crypto_PL_KeyDerive/8:
  Jump functions of caller  Crypto_PL_KeyGenerate/7:
  Jump functions of caller  Crypto_PL_RandomSeed/6:
  Jump functions of caller  Crypto_PL_KeyCopy/5:
  Jump functions of caller  Crypto_PL_KeyElementCopy/4:
  Jump functions of caller  Crypto_PL_KeyElementGet/3:
  Jump functions of caller  Crypto_PL_KeyValidSet/2:
  Jump functions of caller  Crypto_PL_KeyElementSet/1:
  Jump functions of caller  Crypto_PL_Init/0:

 Propagating constants:

Not considering Crypto_PL_CertificateVerify for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_CertificateParse for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyExchangeCalcSecret for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyExchangeCalcPubVal for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyDerive for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyGenerate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_RandomSeed for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyElementCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyElementGet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyValidSet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_KeyElementSet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_Init for cloning; -fipa-cp-clone disabled.

overall_size: 95, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Crypto_PL_CertificateVerify/12:
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
  Node: Crypto_PL_CertificateParse/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_PL_KeyExchangeCalcSecret/10:
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
  Node: Crypto_PL_KeyExchangeCalcPubVal/9:
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
  Node: Crypto_PL_KeyDerive/8:
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
  Node: Crypto_PL_KeyGenerate/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_PL_RandomSeed/6:
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
  Node: Crypto_PL_KeyCopy/5:
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
  Node: Crypto_PL_KeyElementCopy/4:
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
  Node: Crypto_PL_KeyElementGet/3:
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
  Node: Crypto_PL_KeyValidSet/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_PL_KeyElementSet/1:
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
  Node: Crypto_PL_Init/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Crypto_AL_CertificateVerify/25 (Crypto_AL_CertificateVerify) @06bb6460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_CertificateVerify/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_CertificateParse/24 (Crypto_AL_CertificateParse) @06bb62a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_CertificateParse/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyExchangeCalcSecret/23 (Crypto_AL_KeyExchangeCalcSecret) @06bb60e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyExchangeCalcSecret/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyExchangeCalcPubVal/22 (Crypto_AL_KeyExchangeCalcPubVal) @06bafee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyExchangeCalcPubVal/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyDerive/21 (Crypto_AL_KeyDerive) @06bafd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyDerive/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyGenerate/20 (Crypto_AL_KeyGenerate) @06bafb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyGenerate/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_RandomSeed/19 (Crypto_AL_RandomSeed) @06baf9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_RandomSeed/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyCopy/18 (Crypto_AL_KeyCopy) @06baf7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyCopy/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyElementCopy/17 (Crypto_AL_KeyElementCopy) @06baf620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyElementCopy/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyElementGet/16 (Crypto_AL_KeyElementGet) @06baf460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyElementGet/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyValidSet/15 (Crypto_AL_KeyValidSet) @06baf2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyValidSet/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_KeyElementSet/14 (Crypto_AL_KeyElementSet) @06baf0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_KeyElementSet/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_Init/13 (Crypto_AL_Init) @06b52ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_PL_CertificateVerify/12 (Crypto_PL_CertificateVerify) @06b52d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_CertificateVerify/25 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_CertificateParse/11 (Crypto_PL_CertificateParse) @06b52b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_CertificateParse/24 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyExchangeCalcSecret/10 (Crypto_PL_KeyExchangeCalcSecret) @06b529a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyExchangeCalcSecret/23 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyExchangeCalcPubVal/9 (Crypto_PL_KeyExchangeCalcPubVal) @06b527e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyExchangeCalcPubVal/22 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyDerive/8 (Crypto_PL_KeyDerive) @06b52620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyDerive/21 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyGenerate/7 (Crypto_PL_KeyGenerate) @06b52460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyGenerate/20 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_RandomSeed/6 (Crypto_PL_RandomSeed) @06b522a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_RandomSeed/19 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyCopy/5 (Crypto_PL_KeyCopy) @06b520e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyCopy/18 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyElementCopy/4 (Crypto_PL_KeyElementCopy) @06b97700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyElementCopy/17 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyElementGet/3 (Crypto_PL_KeyElementGet) @06b97e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyElementGet/16 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyValidSet/2 (Crypto_PL_KeyValidSet) @06b97c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyValidSet/15 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_KeyElementSet/1 (Crypto_PL_KeyElementSet) @06b97a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_KeyElementSet/14 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_Init/0 (Crypto_PL_Init) @06b978c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_Init/13 (1073741824 (estimated locally),1.00 per call) 

;; Function Crypto_PL_Init (Crypto_PL_Init, funcdef_no=0, decl_uid=5624, cgraph_uid=1, symbol_order=0)

Modification phase of node Crypto_PL_Init/0
Crypto_PL_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AL_Init ();
  return;

}



;; Function Crypto_PL_KeyElementSet (Crypto_PL_KeyElementSet, funcdef_no=1, decl_uid=5631, cgraph_uid=2, symbol_order=1)

Modification phase of node Crypto_PL_KeyElementSet/1
Crypto_PL_KeyElementSet (uint32 CryptoKeyId, uint32 KeyElementId, const uint8 * KeyPtr, uint32 KeyLength)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_AL_KeyElementSet (CryptoKeyId_2(D), KeyElementId_3(D), KeyPtr_4(D), KeyLength_5(D));
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Crypto_PL_KeyValidSet (Crypto_PL_KeyValidSet, funcdef_no=2, decl_uid=5633, cgraph_uid=3, symbol_order=2)

Modification phase of node Crypto_PL_KeyValidSet/2
Crypto_PL_KeyValidSet (uint32 CryptoKeyId)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_4 = Crypto_AL_KeyValidSet (CryptoKeyId_2(D));
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_PL_KeyElementGet (Crypto_PL_KeyElementGet, funcdef_no=3, decl_uid=5638, cgraph_uid=4, symbol_order=3)

Modification phase of node Crypto_PL_KeyElementGet/3
Crypto_PL_KeyElementGet (uint32 CryptoKeyId, uint32 KeyElementId, uint8 * ResultPtr, uint32 * ResultLengthPtr)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_AL_KeyElementGet (CryptoKeyId_2(D), KeyElementId_3(D), ResultPtr_4(D), ResultLengthPtr_5(D));
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Crypto_PL_KeyElementCopy (Crypto_PL_KeyElementCopy, funcdef_no=4, decl_uid=5643, cgraph_uid=5, symbol_order=4)

Modification phase of node Crypto_PL_KeyElementCopy/4
Crypto_PL_KeyElementCopy (uint32 CryptoKeyId, uint32 KeyElementId, uint32 TargetCryptoKeyId, uint32 TargetKeyElementId)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_AL_KeyElementCopy (CryptoKeyId_2(D), KeyElementId_3(D), TargetCryptoKeyId_4(D), TargetKeyElementId_5(D));
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Crypto_PL_KeyCopy (Crypto_PL_KeyCopy, funcdef_no=5, decl_uid=5646, cgraph_uid=6, symbol_order=5)

Modification phase of node Crypto_PL_KeyCopy/5
Crypto_PL_KeyCopy (uint32 CryptoKeyId, uint32 TargetCryptoKeyId)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_AL_KeyCopy (CryptoKeyId_2(D), TargetCryptoKeyId_3(D));
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_PL_RandomSeed (Crypto_PL_RandomSeed, funcdef_no=6, decl_uid=5650, cgraph_uid=7, symbol_order=6)

Modification phase of node Crypto_PL_RandomSeed/6
Crypto_PL_RandomSeed (uint32 CryptoKeyId, const uint8 * EntropyPtr, uint32 EntropyLength)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_6 = Crypto_AL_RandomSeed (CryptoKeyId_2(D), EntropyPtr_3(D), EntropyLength_4(D));
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_PL_KeyGenerate (Crypto_PL_KeyGenerate, funcdef_no=7, decl_uid=5652, cgraph_uid=8, symbol_order=7)

Modification phase of node Crypto_PL_KeyGenerate/7
Crypto_PL_KeyGenerate (uint32 CryptoKeyId)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_4 = Crypto_AL_KeyGenerate (CryptoKeyId_2(D));
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_PL_KeyDerive (Crypto_PL_KeyDerive, funcdef_no=8, decl_uid=5655, cgraph_uid=9, symbol_order=8)

Modification phase of node Crypto_PL_KeyDerive/8
Crypto_PL_KeyDerive (uint32 CryptoKeyId, uint32 TargetCryptoKeyId)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_AL_KeyDerive (CryptoKeyId_2(D), TargetCryptoKeyId_3(D));
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_PL_KeyExchangeCalcPubVal (Crypto_PL_KeyExchangeCalcPubVal, funcdef_no=9, decl_uid=5659, cgraph_uid=10, symbol_order=9)

Modification phase of node Crypto_PL_KeyExchangeCalcPubVal/9
Crypto_PL_KeyExchangeCalcPubVal (uint32 CryptoKeyId, uint8 * PublicValuePtr, uint32 * PublicValueLengthPtr)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_6 = Crypto_AL_KeyExchangeCalcPubVal (CryptoKeyId_2(D), PublicValuePtr_3(D), PublicValueLengthPtr_4(D));
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_PL_KeyExchangeCalcSecret (Crypto_PL_KeyExchangeCalcSecret, funcdef_no=10, decl_uid=5663, cgraph_uid=11, symbol_order=10)

Modification phase of node Crypto_PL_KeyExchangeCalcSecret/10
Crypto_PL_KeyExchangeCalcSecret (uint32 CryptoKeyId, const uint8 * PartnerPublicValuePtr, uint32 PartnerPublicValueLength)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_6 = Crypto_AL_KeyExchangeCalcSecret (CryptoKeyId_2(D), PartnerPublicValuePtr_3(D), PartnerPublicValueLength_4(D));
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Crypto_PL_CertificateParse (Crypto_PL_CertificateParse, funcdef_no=11, decl_uid=5665, cgraph_uid=12, symbol_order=11)

Modification phase of node Crypto_PL_CertificateParse/11
Crypto_PL_CertificateParse (uint32 CryptoKeyId)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_4 = Crypto_AL_CertificateParse (CryptoKeyId_2(D));
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function Crypto_PL_CertificateVerify (Crypto_PL_CertificateVerify, funcdef_no=12, decl_uid=5669, cgraph_uid=13, symbol_order=12)

Modification phase of node Crypto_PL_CertificateVerify/12
Crypto_PL_CertificateVerify (uint32 CryptoKeyId, uint32 VerifyCryptoKeyId, Crypto_VerifyResultType * VerifyPtr)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_6 = Crypto_AL_CertificateVerify (CryptoKeyId_2(D), VerifyCryptoKeyId_3(D), VerifyPtr_4(D));
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}


