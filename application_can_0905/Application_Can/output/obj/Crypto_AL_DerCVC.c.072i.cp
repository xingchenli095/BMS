
IPA constant propagation start:
Determining dynamic type for call: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  Starting walk at: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  instance pointer: &Crypto_DerCVCCptCertificate  Outer instance pointer: Crypto_DerCVCCptCertificate offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  Starting walk at: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  instance pointer: Encoding_11(D)  Outer instance pointer: Encoding_11(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  Starting walk at: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  instance pointer: &Crypto_DerCVCSubCptsCertificate[0]  Outer instance pointer: Crypto_DerCVCSubCptsCertificate offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  Starting walk at: _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  instance pointer: &Position  Outer instance pointer: Position offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  Starting walk at: _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  instance pointer: &Crypto_DerCVCCptCertificate  Outer instance pointer: Crypto_DerCVCCptCertificate offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  Starting walk at: _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  instance pointer: Encoding_7(D)  Outer instance pointer: Encoding_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  Starting walk at: _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  instance pointer: &CurrentPos  Outer instance pointer: CurrentPos offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  TS_MemCpy32/36:
  Jump functions of caller  Crypto_AL_DerEncGetContentsLength/35:
  Jump functions of caller  Crypto_AL_DerEncGetContentsStart/34:
  Jump functions of caller  Crypto_AL_DerSubComponentContents/33:
  Jump functions of caller  Crypto_AL_DerCVCGetDate/23:
  Jump functions of caller  Crypto_AL_DerCVCRSAPubKeyGetModulos/22:
  Jump functions of caller  Crypto_AL_DerCVCRSAPubKeyGetOid/21:
  Jump functions of caller  Crypto_AL_DerCVCRSAPubKeyGetExponent/20:
  Jump functions of caller  Crypto_AL_DerCVCGetSignedData/19:
    indirect simple callsite, calling param -1, offset 0, for stmt _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
       param 0: CONST: &Crypto_DerCVCCptCertificate
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: &Crypto_DerCVCSubCptsCertificate[0]
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 4: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Crypto_AL_DerCVCGetSignatureValue/18:
  Jump functions of caller  Crypto_AL_DerCVCCheckCertificate/17:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
       param 0: CONST: &Crypto_DerCVCCptCertificate
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]

 Propagating constants:

Not considering Crypto_AL_DerCVCGetDate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_DerCVCRSAPubKeyGetModulos for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_DerCVCRSAPubKeyGetOid for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_DerCVCRSAPubKeyGetExponent for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_DerCVCGetSignedData for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_DerCVCGetSignatureValue for cloning; -fipa-cp-clone disabled.
Not considering Crypto_AL_DerCVCCheckCertificate for cloning; -fipa-cp-clone disabled.

overall_size: 131, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Crypto_AL_DerCVCGetDate/23:
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
  Node: Crypto_AL_DerCVCRSAPubKeyGetModulos/22:
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
  Node: Crypto_AL_DerCVCRSAPubKeyGetOid/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_AL_DerCVCRSAPubKeyGetExponent/20:
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
  Node: Crypto_AL_DerCVCGetSignedData/19:
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
  Node: Crypto_AL_DerCVCGetSignatureValue/18:
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
  Node: Crypto_AL_DerCVCCheckCertificate/17:
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


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

TS_MemCpy32/36 (TS_MemCpy32) @06c0c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_DerCVCGetDate/23 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerCVCGetDate/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_DerEncGetContentsLength/35 (Crypto_AL_DerEncGetContentsLength) @06bf1b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_DerCVCGetSignedData/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_DerEncGetContentsStart/34 (Crypto_AL_DerEncGetContentsStart) @06bf1a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_DerCVCGetSignedData/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_DerSubComponentContents/33 (Crypto_AL_DerSubComponentContents) @06bf18c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_AL_DerCVCGetDate/23 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerCVCGetDate/23 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerCVCRSAPubKeyGetModulos/22 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerCVCRSAPubKeyGetOid/21 (287068042 (estimated locally),1.00 per call) Crypto_AL_DerCVCRSAPubKeyGetExponent/20 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerCVCGetSignatureValue/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_DerParseFunctionsCharacterS/32 (Crypto_DerParseFunctionsCharacterS) @06bf50d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCptCharacterS/12 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerParseFunctionsObjectIdentifier/31 (Crypto_DerParseFunctionsObjectIdentifier) @06bf5090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCRSAPubKCptOid/0 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerParseFunctionsInteger/30 (Crypto_DerParseFunctionsInteger) @06bf5048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCRSAPubKCptPubKeyExp/2 (addr)Crypto_DerCVCRSAPubKCptModulus/1 (addr)Crypto_DerCVCCptIden/10 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerParseFunctionsSequenceIgnoreTag/29 (Crypto_DerParseFunctionsSequenceIgnoreTag) @06bf5000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCCptSbjPbKeyRsaInfo/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerParseFunctionsPublicKey/28 (Crypto_DerParseFunctionsPublicKey) @06babab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCCptSbjPbKeyInfo/6 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerCptObjIdentifier/27 (Crypto_DerCptObjIdentifier) @06bab090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCSubCptsHoldAuthTem/7 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerParseFunctionsDate/26 (Crypto_DerParseFunctionsDate) @06babf78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCCptCertDate/11 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerCptOctetString/25 (Crypto_DerCptOctetString) @06babf30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_DerCVCSubCptsCertificate/15 (addr)Crypto_DerCVCSubCptsHoldAuthTem/7 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_DerParseFunctionsSequence/24 (Crypto_DerParseFunctionsSequence) @06babe58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_DerCVCCheckCertificate/17 (read)Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCCptTBSCert/14 (addr)Crypto_DerCVCCptHoldAuthTem/8 (addr)Crypto_AL_DerCVCGetSignedData/19 (read)
  Availability: not_available
  Varpool flags: read-only
Crypto_AL_DerCVCGetDate/23 (Crypto_AL_DerCVCGetDate) @06bf1540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsTBSCert/13 (addr)Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/36 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerSubComponentContents/33 (1073741824 (estimated locally),1.00 per call) TS_MemCpy32/36 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerSubComponentContents/33 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_DerCVCRSAPubKeyGetModulos/22 (Crypto_AL_DerCVCRSAPubKeyGetModulos) @06bf1380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_DerSubComponentContents/33 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_DerCVCRSAPubKeyGetOid/21 (Crypto_AL_DerCVCRSAPubKeyGetOid) @06bf11c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:287068042 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_DerSubComponentContents/33 (287068042 (estimated locally),1.00 per call) 
Crypto_AL_DerCVCRSAPubKeyGetExponent/20 (Crypto_AL_DerCVCRSAPubKeyGetExponent) @06be9ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_DerSubComponentContents/33 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_DerCVCGetSignedData/19 (Crypto_AL_DerCVCGetSignedData) @06be9d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerParseFunctionsSequence/24 (read)Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsCertificate/15 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_DerEncGetContentsLength/35 (1073741824 (estimated locally),1.00 per call) Crypto_AL_DerEncGetContentsStart/34 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Crypto_AL_DerCVCGetSignatureValue/18 (Crypto_AL_DerCVCGetSignatureValue) @06be9b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerCVCCptCertificate/16 (addr)Crypto_DerCVCSubCptsCertificate/15 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_DerSubComponentContents/33 (1073741824 (estimated locally),1.00 per call) 
Crypto_AL_DerCVCCheckCertificate/17 (Crypto_AL_DerCVCCheckCertificate) @06be99a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DerParseFunctionsSequence/24 (read)Crypto_DerCVCCptCertificate/16 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Crypto_DerCVCCptCertificate/16 (Crypto_DerCVCCptCertificate) @06bab900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsSequence/24 (addr)Crypto_DerCVCSubCptsCertificate/15 (addr)
  Referring: Crypto_AL_DerCVCRSAPubKeyGetOid/21 (addr)Crypto_AL_DerCVCRSAPubKeyGetModulos/22 (addr)Crypto_AL_DerCVCCheckCertificate/17 (addr)Crypto_AL_DerCVCGetSignatureValue/18 (addr)Crypto_AL_DerCVCGetSignedData/19 (addr)Crypto_AL_DerCVCRSAPubKeyGetExponent/20 (addr)Crypto_AL_DerCVCGetDate/23 (addr)Crypto_AL_DerCVCGetDate/23 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCSubCptsCertificate/15 (Crypto_DerCVCSubCptsCertificate) @06bab870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerCVCCptTBSCert/14 (addr)Crypto_DerCptOctetString/25 (addr)
  Referring: Crypto_DerCVCCptCertificate/16 (addr)Crypto_AL_DerCVCGetSignatureValue/18 (addr)Crypto_AL_DerCVCGetSignedData/19 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCCptTBSCert/14 (Crypto_DerCVCCptTBSCert) @06bab828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsSequence/24 (addr)Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Referring: Crypto_DerCVCSubCptsCertificate/15 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCSubCptsTBSCert/13 (Crypto_DerCVCSubCptsTBSCert) @06bab798
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerCVCCptIden/10 (addr)Crypto_DerCptCharacterS/12 (addr)Crypto_DerCVCCptSbjPbKeyInfo/6 (addr)Crypto_DerCptCharacterS/12 (addr)Crypto_DerCVCCptHoldAuthTem/8 (addr)Crypto_DerCVCCptCertDate/11 (addr)Crypto_DerCVCCptCertDate/11 (addr)
  Referring: Crypto_DerCVCCptTBSCert/14 (addr)Crypto_AL_DerCVCGetDate/23 (addr)Crypto_AL_DerCVCGetDate/23 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCptCharacterS/12 (Crypto_DerCptCharacterS) @06bab708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsCharacterS/32 (addr)
  Referring: Crypto_DerCVCSubCptsTBSCert/13 (addr)Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCCptCertDate/11 (Crypto_DerCVCCptCertDate) @06bab678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsDate/26 (addr)
  Referring: Crypto_DerCVCSubCptsTBSCert/13 (addr)Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCCptIden/10 (Crypto_DerCVCCptIden) @06bab5e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsInteger/30 (addr)Crypto_DerCVCRangesIden/9 (addr)
  Referring: Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCRangesIden/9 (Crypto_DerCVCRangesIden) @06bab558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crypto_DerCVCCptIden/10 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCCptHoldAuthTem/8 (Crypto_DerCVCCptHoldAuthTem) @06bab510
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsSequence/24 (addr)Crypto_DerCVCSubCptsHoldAuthTem/7 (addr)
  Referring: Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCSubCptsHoldAuthTem/7 (Crypto_DerCVCSubCptsHoldAuthTem) @06bab480
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerCptObjIdentifier/27 (addr)Crypto_DerCptOctetString/25 (addr)
  Referring: Crypto_DerCVCCptHoldAuthTem/8 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCCptSbjPbKeyInfo/6 (Crypto_DerCVCCptSbjPbKeyInfo) @06bab438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsPublicKey/28 (addr)Crypto_DerCVCSubCptsSbjPbKeyInfo/5 (addr)
  Referring: Crypto_DerCVCSubCptsTBSCert/13 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCSubCptsSbjPbKeyInfo/5 (Crypto_DerCVCSubCptsSbjPbKeyInfo) @06bab3a8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerCVCCptSbjPbKeyRsaInfo/4 (addr)
  Referring: Crypto_DerCVCCptSbjPbKeyInfo/6 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCCptSbjPbKeyRsaInfo/4 (Crypto_DerCVCCptSbjPbKeyRsaInfo) @06bab360
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsSequenceIgnoreTag/29 (addr)Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Referring: Crypto_DerCVCSubCptsSbjPbKeyInfo/5 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (Crypto_DerCVCSubCptsSbjPbKeyRsaInfo) @06bab2d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerCVCRSAPubKCptOid/0 (addr)Crypto_DerCVCRSAPubKCptModulus/1 (addr)Crypto_DerCVCRSAPubKCptPubKeyExp/2 (addr)
  Referring: Crypto_DerCVCCptSbjPbKeyRsaInfo/4 (addr)Crypto_AL_DerCVCRSAPubKeyGetExponent/20 (addr)Crypto_AL_DerCVCRSAPubKeyGetOid/21 (addr)Crypto_AL_DerCVCRSAPubKeyGetModulos/22 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCRSAPubKCptPubKeyExp/2 (Crypto_DerCVCRSAPubKCptPubKeyExp) @06bab288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsInteger/30 (addr)
  Referring: Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCRSAPubKCptModulus/1 (Crypto_DerCVCRSAPubKCptModulus) @06bab1f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsInteger/30 (addr)
  Referring: Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DerCVCRSAPubKCptOid/0 (Crypto_DerCVCRSAPubKCptOid) @06bab168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_DerParseFunctionsObjectIdentifier/31 (addr)
  Referring: Crypto_DerCVCSubCptsSbjPbKeyRsaInfo/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crypto_AL_DerCVCCheckCertificate (Crypto_AL_DerCVCCheckCertificate, funcdef_no=0, decl_uid=5426, cgraph_uid=1, symbol_order=17)

Modification phase of node Crypto_AL_DerCVCCheckCertificate/17
Crypto_AL_DerCVCCheckCertificate (const uint8 * Encoding, uint32 EncodingLength)
{
  Std_ReturnType Valid;
  uint32 CurrentPos;
  boolean (*<T473>) (const struct Crypto_DerComponentStruct *, const uint8 *, uint32, uint32 *) _1;
  unsigned char _2;
  long unsigned int CurrentPos.0_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CurrentPos = 0;
  # DEBUG BEGIN_STMT
  # DEBUG Valid => 1
  # DEBUG BEGIN_STMT
  _1 = Crypto_DerParseFunctionsSequence.CheckFunction;
  _2 = _1 (&Crypto_DerCVCCptCertificate, Encoding_7(D), EncodingLength_8(D), &CurrentPos);
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  CurrentPos.0_3 = CurrentPos;
  if (CurrentPos.0_3 == EncodingLength_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG Valid => 0

  <bb 5> [local count: 1073741824]:
  # Valid_4 = PHI <1(2), 1(3), 0(4)>
  # DEBUG Valid => Valid_4
  # DEBUG BEGIN_STMT
  CurrentPos ={v} {CLOBBER};
  return Valid_4;

}



;; Function Crypto_AL_DerCVCGetSignatureValue (Crypto_AL_DerCVCGetSignatureValue, funcdef_no=1, decl_uid=5429, cgraph_uid=2, symbol_order=18)

Modification phase of node Crypto_AL_DerCVCGetSignatureValue/18
Crypto_AL_DerCVCGetSignatureValue (uint8 * Encoding, uint32 * ThingLengthPtr)
{
  long unsigned int _1;
  uint8 * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_DerSubComponentContents (&Crypto_DerCVCCptCertificate, Encoding_3(D), &Crypto_DerCVCSubCptsCertificate[1], ThingLengthPtr_4(D), 0);
  _6 = Encoding_3(D) + _1;
  return _6;

}



;; Function Crypto_AL_DerCVCGetSignedData (Crypto_AL_DerCVCGetSignedData, funcdef_no=2, decl_uid=5432, cgraph_uid=3, symbol_order=19)

Modification phase of node Crypto_AL_DerCVCGetSignedData/19
Crypto_AL_DerCVCGetSignedData (uint8 * Encoding, uint32 * ThingLengthPtr)
{
  uint8 * ResultPtr;
  uint32 Position;
  boolean (*<T46e>) (const struct Crypto_DerComponentStruct *, const uint8 *, const struct Crypto_DerSubComponentStruct *, uint32 *, uint32) _1;
  long unsigned int Position.1_2;
  uint8 * _3;
  long unsigned int _4;
  long unsigned int Position.2_5;
  uint8 * _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int Position.3_9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Crypto_DerParseFunctionsSequence.FindFunction;
  _1 (&Crypto_DerCVCCptCertificate, Encoding_11(D), &Crypto_DerCVCSubCptsCertificate[0], &Position, 0);
  # DEBUG BEGIN_STMT
  Position.1_2 = Position;
  _3 = Encoding_11(D) + Position.1_2;
  _4 = Crypto_AL_DerEncGetContentsStart (_3);
  Position.2_5 = Position;
  _6 = Encoding_11(D) + Position.2_5;
  _7 = Crypto_AL_DerEncGetContentsLength (_6);
  _8 = _4 + _7;
  *ThingLengthPtr_15(D) = _8;
  # DEBUG BEGIN_STMT
  Position.3_9 = Position;
  ResultPtr_17 = Encoding_11(D) + Position.3_9;
  # DEBUG ResultPtr => ResultPtr_17
  # DEBUG BEGIN_STMT
  Position ={v} {CLOBBER};
  return ResultPtr_17;

}



;; Function Crypto_AL_DerCVCRSAPubKeyGetExponent (Crypto_AL_DerCVCRSAPubKeyGetExponent, funcdef_no=3, decl_uid=5435, cgraph_uid=4, symbol_order=20)

Modification phase of node Crypto_AL_DerCVCRSAPubKeyGetExponent/20
Crypto_AL_DerCVCRSAPubKeyGetExponent (uint8 * Encoding, uint32 * ExponentLengthPtr)
{
  long unsigned int _1;
  uint8 * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_DerSubComponentContents (&Crypto_DerCVCCptCertificate, Encoding_3(D), &Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[2], ExponentLengthPtr_4(D), 0);
  _6 = Encoding_3(D) + _1;
  return _6;

}



;; Function Crypto_AL_DerCVCRSAPubKeyGetOid (Crypto_AL_DerCVCRSAPubKeyGetOid, funcdef_no=4, decl_uid=5440, cgraph_uid=5, symbol_order=21)

Modification phase of node Crypto_AL_DerCVCRSAPubKeyGetOid/21
Crypto_AL_DerCVCRSAPubKeyGetOid (const uint8 * Encoding)
{
  uint8 RetVal;
  uint8 IdTaRsaPssSha256[10];
  uint32 OidLength;
  uint8 i;
  long unsigned int _1;
  long unsigned int OidLength.4_2;
  int _3;
  unsigned char _4;
  sizetype _5;
  const uint8 * _6;
  unsigned char _7;
  long unsigned int _12;

  <bb 2> [local count: 287068042]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OidPtr => 0B
  # DEBUG BEGIN_STMT
  OidLength = 0;
  # DEBUG BEGIN_STMT
  IdTaRsaPssSha256 = "\x04\x00\x7f\x00\x07\x02\x02\x02\x01\x04";
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_DerSubComponentContents (&Crypto_DerCVCCptCertificate, Encoding_16(D), &Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[0], &OidLength, 0);
  # DEBUG OidPtr => Encoding_16(D) + _1
  # DEBUG BEGIN_STMT
  OidLength.4_2 = OidLength;
  if (OidLength.4_2 == 10)
    goto <bb 8>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 8> [local count: 97603134]:
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 976138692]:
  # DEBUG BEGIN_STMT
  _3 = (int) i_8;
  _4 = IdTaRsaPssSha256[_3];
  _5 = (sizetype) i_8;
  _12 = _1 + _5;
  _6 = Encoding_16(D) + _12;
  _7 = *_6;
  if (_4 != _7)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 644251538]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 5> [local count: 976138692]:
  # RetVal_9 = PHI <RetVal_10(3), 0(4)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  i_18 = i_8 + 1;
  # DEBUG i => i_18

  <bb 6> [local count: 1073741824]:
  # i_8 = PHI <i_18(5), 0(8)>
  # RetVal_10 = PHI <RetVal_9(5), 1(8)>
  # DEBUG RetVal => RetVal_10
  # DEBUG i => i_8
  # DEBUG BEGIN_STMT
  if (i_8 != 10)
    goto <bb 3>; [90.91%]
  else
    goto <bb 7>; [9.09%]

  <bb 7> [local count: 287068040]:
  # RetVal_11 = PHI <0(2), RetVal_10(6)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  OidLength ={v} {CLOBBER};
  IdTaRsaPssSha256 ={v} {CLOBBER};
  return RetVal_11;

}



;; Function Crypto_AL_DerCVCRSAPubKeyGetModulos (Crypto_AL_DerCVCRSAPubKeyGetModulos, funcdef_no=5, decl_uid=5438, cgraph_uid=6, symbol_order=22)

Modification phase of node Crypto_AL_DerCVCRSAPubKeyGetModulos/22
Crypto_AL_DerCVCRSAPubKeyGetModulos (uint8 * Encoding, uint32 * ModulusLengthPtr)
{
  long unsigned int _1;
  uint8 * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_DerSubComponentContents (&Crypto_DerCVCCptCertificate, Encoding_3(D), &Crypto_DerCVCSubCptsSbjPbKeyRsaInfo[1], ModulusLengthPtr_4(D), 0);
  _6 = Encoding_3(D) + _1;
  return _6;

}



;; Function Crypto_AL_DerCVCGetDate (Crypto_AL_DerCVCGetDate, funcdef_no=6, decl_uid=5443, cgraph_uid=7, symbol_order=23)

Modification phase of node Crypto_AL_DerCVCGetDate/23
Crypto_AL_DerCVCGetDate (const uint8 * Encoding, struct Crypto_CVDateInfoType * CVDate)
{
  uint32 CurrentPos;
  uint32 ThingLengthPtr;
  uint8[6] * _1;
  const uint8 * _2;
  uint8[6] * _3;
  const uint8 * _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentPos_8 = Crypto_AL_DerSubComponentContents (&Crypto_DerCVCCptCertificate, Encoding_6(D), &Crypto_DerCVCSubCptsTBSCert[5], &ThingLengthPtr, 0);
  # DEBUG CurrentPos => CurrentPos_8
  # DEBUG BEGIN_STMT
  _1 = &CVDate_9(D)->EffectiveDate;
  _2 = Encoding_6(D) + CurrentPos_8;
  TS_MemCpy32 (_1, _2, 6);
  # DEBUG BEGIN_STMT
  CurrentPos_12 = Crypto_AL_DerSubComponentContents (&Crypto_DerCVCCptCertificate, Encoding_6(D), &Crypto_DerCVCSubCptsTBSCert[6], &ThingLengthPtr, 0);
  # DEBUG CurrentPos => CurrentPos_12
  # DEBUG BEGIN_STMT
  _3 = &CVDate_9(D)->ExpirationDate;
  _4 = Encoding_6(D) + CurrentPos_12;
  TS_MemCpy32 (_3, _4, 6);
  ThingLengthPtr ={v} {CLOBBER};
  return;

}


