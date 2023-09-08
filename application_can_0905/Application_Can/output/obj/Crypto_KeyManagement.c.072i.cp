
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_PL_CertificateVerify/29:
  Jump functions of caller  Crypto_PL_KeyExchangeCalcSecret/28:
  Jump functions of caller  Crypto_PL_KeyExchangeCalcPubVal/27:
  Jump functions of caller  Crypto_PL_KeyDerive/26:
  Jump functions of caller  Crypto_PL_KeyGenerate/25:
  Jump functions of caller  Crypto_PL_RandomSeed/24:
  Jump functions of caller  Crypto_PL_KeyCopy/23:
  Jump functions of caller  Crypto_PL_KeyElementCopy/22:
  Jump functions of caller  Crypto_PL_KeyElementGet/21:
  Jump functions of caller  Crypto_PL_KeyValidSet/20:
  Jump functions of caller  Crypto_PL_KeyElementSet/19:
  Jump functions of caller  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18:
  Jump functions of caller  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/17:
  Jump functions of caller  Det_ASR40_ReportError/14:
  Jump functions of caller  Crypto_CertificateVerify/12:
  Jump functions of caller  Crypto_CertificateParse/11:
  Jump functions of caller  Crypto_KeyExchangeCalcSecret/10:
  Jump functions of caller  Crypto_KeyExchangeCalcPubVal/9:
  Jump functions of caller  Crypto_KeyDerive/8:
  Jump functions of caller  Crypto_KeyGenerate/7:
  Jump functions of caller  Crypto_RandomSeed/6:
  Jump functions of caller  Crypto_KeyElementIdsGet/5:
  Jump functions of caller  Crypto_KeyCopy/4:
  Jump functions of caller  Crypto_KeyElementCopy/3:
  Jump functions of caller  Crypto_KeyElementGet/2:
  Jump functions of caller  Crypto_KeyValidSet/1:
  Jump functions of caller  Crypto_KeyElementSet/0:

 Propagating constants:

Not considering Crypto_CertificateVerify for cloning; -fipa-cp-clone disabled.
Not considering Crypto_CertificateParse for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyExchangeCalcSecret for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyExchangeCalcPubVal for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyDerive for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyGenerate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_RandomSeed for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementIdsGet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementCopy for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementGet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyValidSet for cloning; -fipa-cp-clone disabled.
Not considering Crypto_KeyElementSet for cloning; -fipa-cp-clone disabled.

overall_size: 623, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Crypto_CertificateVerify/12:
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
  Node: Crypto_CertificateParse/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyExchangeCalcSecret/10:
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
  Node: Crypto_KeyExchangeCalcPubVal/9:
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
  Node: Crypto_KeyDerive/8:
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
  Node: Crypto_KeyGenerate/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_RandomSeed/6:
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
  Node: Crypto_KeyElementIdsGet/5:
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
  Node: Crypto_KeyCopy/4:
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
  Node: Crypto_KeyElementCopy/3:
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
  Node: Crypto_KeyElementGet/2:
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
  Node: Crypto_KeyValidSet/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Crypto_KeyElementSet/0:
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

Crypto_PL_CertificateVerify/29 (Crypto_PL_CertificateVerify) @06d07540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CertificateVerify/12 (120826136 (estimated locally),0.11 per call) 
  Calls: 
Crypto_PL_KeyExchangeCalcSecret/28 (Crypto_PL_KeyExchangeCalcSecret) @06d072a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyExchangeCalcSecret/10 (173808607 (estimated locally),0.16 per call) 
  Calls: 
Crypto_PL_KeyExchangeCalcPubVal/27 (Crypto_PL_KeyExchangeCalcPubVal) @06d070e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyExchangeCalcPubVal/9 (143513767 (estimated locally),0.13 per call) 
  Calls: 
Crypto_PL_KeyDerive/26 (Crypto_PL_KeyDerive) @06cc09a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyDerive/8 (172608766 (estimated locally),0.16 per call) 
  Calls: 
Crypto_PL_KeyGenerate/25 (Crypto_PL_KeyGenerate) @06cc0ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyGenerate/7 (294956879 (estimated locally),0.27 per call) 
  Calls: 
Crypto_PL_RandomSeed/24 (Crypto_PL_RandomSeed) @06cc0d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_RandomSeed/6 (173808607 (estimated locally),0.16 per call) 
  Calls: 
Crypto_PL_KeyCopy/23 (Crypto_PL_KeyCopy) @06cc0a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyCopy/4 (4322082 (estimated locally),0.04 per call) 
  Calls: 
Crypto_PL_KeyElementCopy/22 (Crypto_PL_KeyElementCopy) @06cc0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyElementCopy/3 (39805209 (estimated locally),0.05 per call) 
  Calls: 
Crypto_PL_KeyElementGet/21 (Crypto_PL_KeyElementGet) @06cc01c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyElementGet/2 (26563098 (estimated locally),0.02 per call) 
  Calls: 
Crypto_PL_KeyValidSet/20 (Crypto_PL_KeyValidSet) @06c93e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyValidSet/1 (294956879 (estimated locally),0.27 per call) 
  Calls: 
Crypto_PL_KeyElementSet/19 (Crypto_PL_KeyElementSet) @06c93c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyElementSet/0 (24723253 (estimated locally),0.05 per call) 
  Calls: 
SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06c93a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyCopy/4 (10315494 (estimated locally),0.10 per call) Crypto_KeyCopy/4 (2862194 (estimated locally),0.03 per call) Crypto_KeyCopy/4 (2781726 (estimated locally),0.03 per call) Crypto_KeyElementCopy/3 (90467602 (estimated locally),0.10 per call) Crypto_KeyElementCopy/3 (25101639 (estimated locally),0.03 per call) Crypto_KeyElementCopy/3 (24395929 (estimated locally),0.03 per call) Crypto_KeyElementSet/0 (37121479 (estimated locally),0.07 per call) Crypto_KeyElementSet/0 (10299930 (estimated locally),0.02 per call) Crypto_KeyElementSet/0 (10010357 (estimated locally),0.02 per call) 
  Calls: 
SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/17 (SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06c939a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_KeyCopy/4 (15959414 (estimated locally),0.16 per call) Crypto_KeyElementCopy/3 (139965171 (estimated locally),0.16 per call) Crypto_KeyElementSet/0 (57431766 (estimated locally),0.11 per call) 
  Calls: 
Crypto_DriverObjects/16 (Crypto_DriverObjects) @06cb9948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_KeyElementSet/0 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyCopy/4 (read)
  Availability: not_available
  Varpool flags:
Crypto_Keys/15 (Crypto_Keys) @06cb98b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_KeyElementGet/2 (read)Crypto_KeyElementGet/2 (read)Crypto_KeyElementGet/2 (read)Crypto_KeyElementGet/2 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyElementSet/0 (write)Crypto_KeyElementCopy/3 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyCopy/4 (read)Crypto_KeyCopy/4 (read)Crypto_KeyCopy/4 (read)Crypto_KeyCopy/4 (read)Crypto_KeyElementSet/0 (read)Crypto_KeyElementSet/0 (read)Crypto_KeyElementSet/0 (read)Crypto_KeyElementIdsGet/5 (read)Crypto_KeyElementIdsGet/5 (read)Crypto_KeyElementIdsGet/5 (read)
  Availability: not_available
  Varpool flags:
Det_ASR40_ReportError/14 (Det_ASR40_ReportError) @06c938c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_CertificateVerify/12 (51782630 (estimated locally),0.05 per call) Crypto_CertificateVerify/12 (546798257 (estimated locally),0.51 per call) Crypto_CertificateVerify/12 (354334802 (estimated locally),0.33 per call) Crypto_KeyExchangeCalcSecret/10 (173808607 (estimated locally),0.16 per call) Crypto_KeyExchangeCalcSecret/10 (73379775 (estimated locally),0.07 per call) Crypto_KeyExchangeCalcSecret/10 (298410033 (estimated locally),0.28 per call) Crypto_KeyExchangeCalcSecret/10 (354334802 (estimated locally),0.33 per call) Crypto_KeyExchangeCalcPubVal/9 (17250355 (estimated locally),0.02 per call) Crypto_KeyExchangeCalcPubVal/9 (143513767 (estimated locally),0.13 per call) Crypto_KeyExchangeCalcPubVal/9 (60589680 (estimated locally),0.06 per call) Crypto_KeyExchangeCalcPubVal/9 (73379775 (estimated locally),0.07 per call) Crypto_KeyExchangeCalcPubVal/9 (298410033 (estimated locally),0.28 per call) Crypto_KeyExchangeCalcPubVal/9 (354334802 (estimated locally),0.33 per call) Crypto_KeyDerive/8 (248388223 (estimated locally),0.23 per call) Crypto_KeyDerive/8 (298410033 (estimated locally),0.28 per call) Crypto_KeyDerive/8 (354334802 (estimated locally),0.33 per call) Crypto_KeyGenerate/7 (424450143 (estimated locally),0.40 per call) Crypto_KeyGenerate/7 (354334802 (estimated locally),0.33 per call) Crypto_RandomSeed/6 (173808607 (estimated locally),0.16 per call) Crypto_RandomSeed/6 (73379775 (estimated locally),0.07 per call) Crypto_RandomSeed/6 (298410033 (estimated locally),0.28 per call) Crypto_RandomSeed/6 (354334802 (estimated locally),0.33 per call) Crypto_KeyElementIdsGet/5 (31321092 (estimated locally),0.08 per call) Crypto_KeyElementIdsGet/5 (105920507 (estimated locally),0.28 per call) Crypto_KeyElementIdsGet/5 (125770979 (estimated locally),0.33 per call) Crypto_KeyCopy/4 (22965986 (estimated locally),0.23 per call) Crypto_KeyCopy/4 (27591004 (estimated locally),0.28 per call) Crypto_KeyCopy/4 (32761811 (estimated locally),0.33 per call) Crypto_KeyElementCopy/3 (14515387 (estimated locally),0.02 per call) Crypto_KeyElementCopy/3 (23248379 (estimated locally),0.03 per call) Crypto_KeyElementCopy/3 (201413295 (estimated locally),0.23 per call) Crypto_KeyElementCopy/3 (241975030 (estimated locally),0.28 per call) Crypto_KeyElementCopy/3 (287323364 (estimated locally),0.33 per call) Crypto_KeyElementGet/2 (23115475 (estimated locally),0.02 per call) Crypto_KeyElementGet/2 (28493068 (estimated locally),0.03 per call) Crypto_KeyElementGet/2 (12654280 (estimated locally),0.01 per call) Crypto_KeyElementGet/2 (19461615 (estimated locally),0.02 per call) Crypto_KeyElementGet/2 (94719086 (estimated locally),0.09 per call) Crypto_KeyElementGet/2 (60589680 (estimated locally),0.06 per call) Crypto_KeyElementGet/2 (73379775 (estimated locally),0.07 per call) Crypto_KeyElementGet/2 (298410033 (estimated locally),0.28 per call) Crypto_KeyElementGet/2 (354334802 (estimated locally),0.33 per call) Crypto_KeyValidSet/1 (424450143 (estimated locally),0.40 per call) Crypto_KeyValidSet/1 (354334802 (estimated locally),0.33 per call) Crypto_KeyElementSet/0 (57431766 (estimated locally),0.11 per call) Crypto_KeyElementSet/0 (56574576 (estimated locally),0.11 per call) Crypto_KeyElementSet/0 (36189490 (estimated locally),0.07 per call) Crypto_KeyElementSet/0 (147170075 (estimated locally),0.28 per call) Crypto_KeyElementSet/0 (174751093 (estimated locally),0.33 per call) 
  Calls: 
Crypto_Initialized/13 (Crypto_Initialized) @06cb9750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_KeyExchangeCalcPubVal/9 (read)Crypto_KeyExchangeCalcSecret/10 (read)Crypto_KeyElementSet/0 (read)Crypto_KeyValidSet/1 (read)Crypto_KeyElementGet/2 (read)Crypto_KeyElementCopy/3 (read)Crypto_KeyCopy/4 (read)Crypto_KeyElementIdsGet/5 (read)Crypto_RandomSeed/6 (read)Crypto_KeyGenerate/7 (read)Crypto_KeyDerive/8 (read)Crypto_CertificateVerify/12 (read)
  Availability: not_available
  Varpool flags:
Crypto_CertificateVerify/12 (Crypto_CertificateVerify) @06c93540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_CertificateVerify/29 (120826136 (estimated locally),0.11 per call) Det_ASR40_ReportError/14 (51782630 (estimated locally),0.05 per call) Det_ASR40_ReportError/14 (546798257 (estimated locally),0.51 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_CertificateParse/11 (Crypto_CertificateParse) @06c93380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crypto_KeyExchangeCalcSecret/10 (Crypto_KeyExchangeCalcSecret) @06c931c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyExchangeCalcSecret/28 (173808607 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (173808607 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (73379775 (estimated locally),0.07 per call) Det_ASR40_ReportError/14 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyExchangeCalcPubVal/9 (Crypto_KeyExchangeCalcPubVal) @06c93000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/14 (17250355 (estimated locally),0.02 per call) Crypto_PL_KeyExchangeCalcPubVal/27 (143513767 (estimated locally),0.13 per call) Det_ASR40_ReportError/14 (143513767 (estimated locally),0.13 per call) Det_ASR40_ReportError/14 (60589680 (estimated locally),0.06 per call) Det_ASR40_ReportError/14 (73379775 (estimated locally),0.07 per call) Det_ASR40_ReportError/14 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyDerive/8 (Crypto_KeyDerive) @06c63e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyDerive/26 (172608766 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (248388223 (estimated locally),0.23 per call) Det_ASR40_ReportError/14 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyGenerate/7 (Crypto_KeyGenerate) @06c63c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyGenerate/25 (294956879 (estimated locally),0.27 per call) Det_ASR40_ReportError/14 (424450143 (estimated locally),0.40 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_RandomSeed/6 (Crypto_RandomSeed) @06c63a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_RandomSeed/24 (173808607 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (173808607 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (73379775 (estimated locally),0.07 per call) Det_ASR40_ReportError/14 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyElementIdsGet/5 (Crypto_KeyElementIdsGet) @06c638c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)
  Referring: 
  Availability: available
  Function flags: count:381124179 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/14 (31321092 (estimated locally),0.08 per call) Det_ASR40_ReportError/14 (105920507 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (125770979 (estimated locally),0.33 per call) 
Crypto_KeyCopy/4 (Crypto_KeyCopy) @06c63700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)Crypto_DriverObjects/16 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)
  Referring: 
  Availability: available
  Function flags: count:99278214 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyCopy/23 (4322082 (estimated locally),0.04 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (10315494 (estimated locally),0.10 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (2862194 (estimated locally),0.03 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (2781726 (estimated locally),0.03 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/17 (15959414 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (22965986 (estimated locally),0.23 per call) Det_ASR40_ReportError/14 (27591004 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (32761811 (estimated locally),0.33 per call) 
Crypto_KeyElementCopy/3 (Crypto_KeyElementCopy) @06c63540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)Crypto_DriverObjects/16 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)
  Referring: 
  Availability: available
  Function flags: count:870676862 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyElementCopy/22 (39805209 (estimated locally),0.05 per call) Det_ASR40_ReportError/14 (14515387 (estimated locally),0.02 per call) Det_ASR40_ReportError/14 (23248379 (estimated locally),0.03 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (90467602 (estimated locally),0.10 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (25101639 (estimated locally),0.03 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (24395929 (estimated locally),0.03 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/17 (139965171 (estimated locally),0.16 per call) Det_ASR40_ReportError/14 (201413295 (estimated locally),0.23 per call) Det_ASR40_ReportError/14 (241975030 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (287323364 (estimated locally),0.33 per call) 
Crypto_KeyElementGet/2 (Crypto_KeyElementGet) @06c63380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/14 (23115475 (estimated locally),0.02 per call) Det_ASR40_ReportError/14 (28493068 (estimated locally),0.03 per call) Crypto_PL_KeyElementGet/21 (26563098 (estimated locally),0.02 per call) Det_ASR40_ReportError/14 (12654280 (estimated locally),0.01 per call) Det_ASR40_ReportError/14 (19461615 (estimated locally),0.02 per call) Det_ASR40_ReportError/14 (94719086 (estimated locally),0.09 per call) Det_ASR40_ReportError/14 (60589680 (estimated locally),0.06 per call) Det_ASR40_ReportError/14 (73379775 (estimated locally),0.07 per call) Det_ASR40_ReportError/14 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyValidSet/1 (Crypto_KeyValidSet) @06c631c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyValidSet/20 (294956879 (estimated locally),0.27 per call) Det_ASR40_ReportError/14 (424450143 (estimated locally),0.40 per call) Det_ASR40_ReportError/14 (354334802 (estimated locally),0.33 per call) 
Crypto_KeyElementSet/0 (Crypto_KeyElementSet) @06c63000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_Initialized/13 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (read)Crypto_DriverObjects/16 (read)Crypto_Keys/15 (read)Crypto_Keys/15 (write)
  Referring: 
  Availability: available
  Function flags: count:529548766 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_PL_KeyElementSet/19 (24723253 (estimated locally),0.05 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (37121479 (estimated locally),0.07 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (10299930 (estimated locally),0.02 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/18 (10010357 (estimated locally),0.02 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/17 (57431766 (estimated locally),0.11 per call) Det_ASR40_ReportError/14 (57431766 (estimated locally),0.11 per call) Det_ASR40_ReportError/14 (56574576 (estimated locally),0.11 per call) Det_ASR40_ReportError/14 (36189490 (estimated locally),0.07 per call) Det_ASR40_ReportError/14 (147170075 (estimated locally),0.28 per call) Det_ASR40_ReportError/14 (174751093 (estimated locally),0.33 per call) 

;; Function Crypto_KeyElementSet (Crypto_KeyElementSet, funcdef_no=0, decl_uid=5577, cgraph_uid=1, symbol_order=0)

Modification phase of node Crypto_KeyElementSet/0
Crypto_KeyElementSet (uint32 CryptoKeyId, uint32 KeyElementId, const uint8 * KeyPtr, uint32 KeyLength)
{
  uint32 KeyElementLength;
  uint32 KeyElementIndex;
  boolean Found;
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.0_1;
  struct Crypto_KeyElement * const * _2;
  long unsigned int _3;
  struct Crypto_KeyElement * const * _4;
  struct Crypto_KeyElement * _5;
  long unsigned int _6;
  long unsigned int _7;
  struct Crypto_JobType * _8;
  long unsigned int _10;
  struct Crypto_KeyElement * const * _11;
  long unsigned int _12;
  struct Crypto_KeyElement * const * _13;
  struct Crypto_KeyElement * _14;
  unsigned char _15;
  unsigned char _16;
  long unsigned int _17;
  unsigned char _18;

  <bb 2> [local count: 529548766]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ObjectId => 0
  # DEBUG BEGIN_STMT
  # DEBUG DriverObj => 0B
  # DEBUG BEGIN_STMT
  Crypto_Initialized.0_1 = Crypto_Initialized;
  if (Crypto_Initialized.0_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 174751093]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 4, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 24>; [100.00%]

  <bb 4> [local count: 354797673]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_27(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 147170075]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 4, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 24>; [100.00%]

  <bb 6> [local count: 207627598]:
  # DEBUG BEGIN_STMT
  if (KeyPtr_28(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 36189490]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 4, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 24>; [100.00%]

  <bb 8> [local count: 171438108]:
  # DEBUG BEGIN_STMT
  if (KeyLength_29(D) == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 25>; [67.00%]

  <bb 25> [local count: 114863532]:
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 56574576]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 4, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 24>; [100.00%]

  <bb 10> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _2 = Crypto_Keys[CryptoKeyId_27(D)].KeyType;
  _3 = KeyElementIndex_21 * 4;
  _4 = _2 + _3;
  _5 = *_4;
  _6 = _5->Id;
  if (_6 == KeyElementId_30(D))
    goto <bb 13>; [5.50%]
  else
    goto <bb 11>; [94.50%]

  <bb 11> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  KeyElementIndex_31 = KeyElementIndex_21 + 1;
  # DEBUG KeyElementIndex => KeyElementIndex_31

  <bb 12> [local count: 1073741824]:
  # KeyElementIndex_21 = PHI <KeyElementIndex_31(11), 0(25)>
  # DEBUG KeyElementIndex => KeyElementIndex_21
  # DEBUG BEGIN_STMT
  _7 = Crypto_Keys[CryptoKeyId_27(D)].KeyElements;
  if (_7 > KeyElementIndex_21)
    goto <bb 10>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 13> [local count: 114863532]:
  # Found_20 = PHI <1(10), 0(12)>
  # KeyElementIndex_23 = PHI <KeyElementIndex_21(10), KeyElementIndex_21(12)>
  # DEBUG Found => Found_20
  # DEBUG BEGIN_STMT
  if (Found_20 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 4, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 24>; [100.00%]

  <bb 15> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  # DEBUG DriverObj => &MEM[(void *)&Crypto_DriverObjects]
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _8 = MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects].CurrentJob;
  if (_8 != 0B)
    goto <bb 17>; [82.57%]
  else
    goto <bb 16>; [17.43%]

  <bb 16> [local count: 10010357]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 17> [local count: 47421409]:
  # DEBUG BEGIN_STMT
  _10 = _8->cryptoKeyId;
  if (_10 == CryptoKeyId_27(D))
    goto <bb 18>; [21.72%]
  else
    goto <bb 19>; [78.28%]

  <bb 18> [local count: 10299930]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 24>; [100.00%]

  <bb 19> [local count: 37121479]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT

  <bb 20> [local count: 47131836]:
  # DEBUG BEGIN_STMT
  _11 = Crypto_Keys[CryptoKeyId_27(D)].KeyType;
  _12 = KeyElementIndex_23 * 4;
  _13 = _11 + _12;
  _14 = *_13;
  _15 = _14->WriteAccess;
  _16 = _15 + 255;
  if (_16 <= 1)
    goto <bb 24>; [27.23%]
  else
    goto <bb 21>; [72.77%]

  <bb 21> [local count: 34297837]:
  # DEBUG BEGIN_STMT
  _17 = _14->Size;
  if (_17 != KeyLength_29(D))
    goto <bb 22>; [79.76%]
  else
    goto <bb 23>; [20.24%]

  <bb 22> [local count: 27355955]:
  _18 = _14->AllowPartialAccess;
  if (_18 == 0)
    goto <bb 24>; [35.00%]
  else
    goto <bb 23>; [65.00%]

  <bb 23> [local count: 24723253]:
  # DEBUG BEGIN_STMT
  KeyElementLength_9 = MIN_EXPR <_17, KeyLength_29(D)>;
  # DEBUG KeyElementLength => KeyElementLength_9
  # DEBUG BEGIN_STMT
  Crypto_Keys[CryptoKeyId_27(D)].KeyState = 0;
  # DEBUG BEGIN_STMT
  RetVal_37 = Crypto_PL_KeyElementSet (CryptoKeyId_27(D), KeyElementId_30(D), KeyPtr_28(D), KeyElementLength_9);
  # DEBUG RetVal => RetVal_37

  <bb 24> [local count: 529548765]:
  # RetVal_19 = PHI <1(3), 1(5), 1(7), 1(9), 1(14), 2(18), RetVal_37(23), 7(20), 10(22)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  return RetVal_19;

}



;; Function Crypto_KeyValidSet (Crypto_KeyValidSet, funcdef_no=1, decl_uid=5579, cgraph_uid=2, symbol_order=1)

Modification phase of node Crypto_KeyValidSet/1
Crypto_KeyValidSet (uint32 CryptoKeyId)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.1_1 = Crypto_Initialized;
  if (Crypto_Initialized.1_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 5, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_5(D) > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 5, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_PL_KeyValidSet (CryptoKeyId_5(D));
  # DEBUG RetVal => RetVal_7

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), RetVal_7(6)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyElementGet (Crypto_KeyElementGet, funcdef_no=2, decl_uid=5584, cgraph_uid=3, symbol_order=2)

Modification phase of node Crypto_KeyElementGet/2
Crypto_KeyElementGet (uint32 CryptoKeyId, uint32 KeyElementId, uint8 * ResultPtr, uint32 * ResultLengthPtr)
{
  uint32 keyElementIndex;
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.2_1;
  long unsigned int _2;
  unsigned char _3;
  struct Crypto_KeyElement * const * _4;
  long unsigned int _5;
  struct Crypto_KeyElement * const * _6;
  struct Crypto_KeyElement * _7;
  long unsigned int _8;
  long unsigned int _9;
  struct Crypto_KeyElement * const * _11;
  long unsigned int _12;
  struct Crypto_KeyElement * const * _13;
  struct Crypto_KeyElement * _14;
  long unsigned int _15;
  unsigned char _16;
  unsigned char _17;
  unsigned char _18;
  long unsigned int _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_Initialized.2_1 = Crypto_Initialized;
  if (Crypto_Initialized.2_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 28>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_25(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 28>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (ResultPtr_26(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 73379775]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 28>; [100.00%]

  <bb 8> [local count: 347617214]:
  # DEBUG BEGIN_STMT
  if (ResultLengthPtr_27(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 60589680]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 28>; [100.00%]

  <bb 10> [local count: 287027533]:
  # DEBUG BEGIN_STMT
  _2 = *ResultLengthPtr_27(D);
  if (_2 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 94719086]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 28>; [100.00%]

  <bb 12> [local count: 192308447]:
  # DEBUG BEGIN_STMT
  _3 = Crypto_Keys[CryptoKeyId_25(D)].KeyState;
  if (_3 != 0)
    goto <bb 29>; [50.00%]
  else
    goto <bb 26>; [50.00%]

  <bb 29> [local count: 96154224]:
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 849410993]:
  # DEBUG BEGIN_STMT
  _4 = Crypto_Keys[CryptoKeyId_25(D)].KeyType;
  _5 = keyElementIndex_20 * 4;
  _6 = _4 + _5;
  _7 = *_6;
  _8 = _7->Id;
  if (_8 == KeyElementId_28(D))
    goto <bb 17>; [5.50%]
  else
    goto <bb 15>; [94.50%]

  <bb 15> [local count: 802693388]:
  # DEBUG BEGIN_STMT
  keyElementIndex_29 = keyElementIndex_20 + 1;
  # DEBUG keyElementIndex => keyElementIndex_29

  <bb 16> [local count: 898847612]:
  # keyElementIndex_20 = PHI <keyElementIndex_29(15), 0(29)>
  # DEBUG keyElementIndex => keyElementIndex_20
  # DEBUG BEGIN_STMT
  _9 = Crypto_Keys[CryptoKeyId_25(D)].KeyElements;
  if (_9 > keyElementIndex_20)
    goto <bb 14>; [94.50%]
  else
    goto <bb 17>; [5.50%]

  <bb 17> [local count: 96154223]:
  # _23 = PHI <_9(14), _9(16)>
  # keyElementIndex_10 = PHI <keyElementIndex_20(14), keyElementIndex_20(16)>
  # DEBUG BEGIN_STMT
  if (keyElementIndex_10 == _23)
    goto <bb 18>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 18> [local count: 19461615]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 8
  # DEBUG BEGIN_STMT
  goto <bb 25>; [100.00%]

  <bb 19> [local count: 76692608]:
  # DEBUG BEGIN_STMT
  _11 = Crypto_Keys[CryptoKeyId_25(D)].KeyType;
  _12 = keyElementIndex_10 * 4;
  _13 = _11 + _12;
  _14 = *_13;
  _15 = _14->Size;
  if (_2 < _15)
    goto <bb 20>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 20> [local count: 38346304]:
  _16 = _14->AllowPartialAccess;
  if (_16 == 0)
    goto <bb 21>; [33.00%]
  else
    goto <bb 22>; [67.00%]

  <bb 21> [local count: 12654280]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  # DEBUG BEGIN_STMT
  goto <bb 26>; [100.00%]

  <bb 22> [local count: 64038328]:
  # DEBUG BEGIN_STMT
  _17 = _14->ReadAccess;
  _18 = _17 + 255;
  if (_18 <= 1)
    goto <bb 26>; [58.52%]
  else
    goto <bb 24>; [41.48%]

  <bb 24> [local count: 26563098]:
  # DEBUG BEGIN_STMT
  RetVal_32 = Crypto_PL_KeyElementGet (CryptoKeyId_25(D), KeyElementId_28(D), ResultPtr_26(D), ResultLengthPtr_27(D));
  # DEBUG RetVal => RetVal_32
  # DEBUG BEGIN_STMT
  if (RetVal_32 == 8)
    goto <bb 25>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 25> [local count: 28493068]:
  # RetVal_40 = PHI <RetVal_32(24), 8(18)>
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 1);

  <bb 26> [local count: 192308447]:
  # RetVal_42 = PHI <RetVal_32(24), RetVal_40(25), 1(12), 6(22), 3(21)>
  # DEBUG RetVal => NULL
  # DEBUG BEGIN_STMT
  if (RetVal_42 == 6)
    goto <bb 27>; [12.02%]
  else
    goto <bb 28>; [87.98%]

  <bb 27> [local count: 23115475]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 6, 2);

  <bb 28> [local count: 1073741824]:
  # RetVal_19 = PHI <1(3), 1(5), 1(7), 1(9), 1(11), RetVal_42(26), 6(27)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  return RetVal_19;

}



;; Function Crypto_KeyElementCopy (Crypto_KeyElementCopy, funcdef_no=3, decl_uid=5589, cgraph_uid=4, symbol_order=3)

Modification phase of node Crypto_KeyElementCopy/3
Crypto_KeyElementCopy (uint32 CryptoKeyId, uint32 KeyElementId, uint32 TargetCryptoKeyId, uint32 TargetKeyElementId)
{
  uint32 TargetKeyElementIndex;
  uint32 SourceKeyElementIndex;
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.3_1;
  struct Crypto_JobType * _2;
  long unsigned int _3;
  long unsigned int _4;
  struct Crypto_KeyElement * const * _5;
  long unsigned int _6;
  struct Crypto_KeyElement * const * _7;
  struct Crypto_KeyElement * _8;
  long unsigned int _9;
  long unsigned int _10;
  struct Crypto_KeyElement * const * _11;
  long unsigned int _12;
  struct Crypto_KeyElement * const * _13;
  struct Crypto_KeyElement * _14;
  unsigned char _15;
  struct Crypto_KeyElement * const * _16;
  long unsigned int _17;
  struct Crypto_KeyElement * const * _18;
  struct Crypto_KeyElement * _19;
  long unsigned int _20;
  long unsigned int _21;
  struct Crypto_KeyElement * const * _22;
  long unsigned int _23;
  struct Crypto_KeyElement * const * _24;
  struct Crypto_KeyElement * _25;
  unsigned char _26;
  unsigned char _27;
  long unsigned int _32;

  <bb 2> [local count: 870676862]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG DriverObj => 0B
  # DEBUG BEGIN_STMT
  # DEBUG ObjectId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_Initialized.3_1 = Crypto_Initialized;
  if (Crypto_Initialized.3_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 287323364]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 15, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 29>; [100.00%]

  <bb 4> [local count: 583353498]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_36(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 241975030]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 15, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 29>; [100.00%]

  <bb 6> [local count: 341378466]:
  # DEBUG BEGIN_STMT
  if (TargetCryptoKeyId_37(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 201413295]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 15, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 29>; [100.00%]

  <bb 8> [local count: 139965171]:
  # DEBUG BEGIN_STMT
  # DEBUG DriverObj => &MEM[(void *)&Crypto_DriverObjects]
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects].CurrentJob;
  if (_2 != 0B)
    goto <bb 10>; [82.57%]
  else
    goto <bb 9>; [17.43%]

  <bb 9> [local count: 24395929]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 115569242]:
  # DEBUG BEGIN_STMT
  _4 = _2->cryptoKeyId;
  if (_4 == TargetCryptoKeyId_37(D))
    goto <bb 11>; [21.72%]
  else
    goto <bb 12>; [78.28%]

  <bb 11> [local count: 25101639]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 29>; [100.00%]

  <bb 12> [local count: 90467602]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _5 = Crypto_Keys[CryptoKeyId_36(D)].KeyType;
  _6 = SourceKeyElementIndex_29 * 4;
  _7 = _5 + _6;
  _8 = *_7;
  _9 = _8->Id;
  if (_9 == KeyElementId_42(D))
    goto <bb 17>; [5.50%]
  else
    goto <bb 14>; [94.50%]

  <bb 14> [local count: 958878292]:
  # DEBUG BEGIN_STMT
  SourceKeyElementIndex_43 = SourceKeyElementIndex_29 + 1;
  # DEBUG SourceKeyElementIndex => SourceKeyElementIndex_43
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 114863532]:

  <bb 16> [local count: 1073741824]:
  # SourceKeyElementIndex_29 = PHI <0(15), SourceKeyElementIndex_43(14)>
  # DEBUG SourceKeyElementIndex => SourceKeyElementIndex_29
  # DEBUG BEGIN_STMT
  _10 = Crypto_Keys[CryptoKeyId_36(D)].KeyElements;
  if (_10 > SourceKeyElementIndex_29)
    goto <bb 13>; [94.50%]
  else
    goto <bb 17>; [5.50%]

  <bb 17> [local count: 114863532]:
  # _32 = PHI <_10(13), _10(16)>
  # SourceKeyElementIndex_40 = PHI <SourceKeyElementIndex_29(13), SourceKeyElementIndex_29(16)>
  # DEBUG BEGIN_STMT
  if (_32 == SourceKeyElementIndex_40)
    goto <bb 18>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 18> [local count: 23248379]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 15, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 29>; [100.00%]

  <bb 19> [local count: 91615153]:
  # DEBUG BEGIN_STMT
  _11 = Crypto_Keys[CryptoKeyId_36(D)].KeyType;
  _12 = SourceKeyElementIndex_40 * 4;
  _13 = _11 + _12;
  _14 = *_13;
  _15 = _14->ReadAccess;
  if (_15 == 1)
    goto <bb 29>; [21.72%]
  else
    goto <bb 30>; [78.28%]

  <bb 30> [local count: 71716342]:
  goto <bb 22>; [100.00%]

  <bb 20> [local count: 633530663]:
  # DEBUG BEGIN_STMT
  _16 = Crypto_Keys[TargetCryptoKeyId_37(D)].KeyType;
  _17 = TargetKeyElementIndex_30 * 4;
  _18 = _16 + _17;
  _19 = *_18;
  _20 = _19->Id;
  if (_20 == TargetKeyElementId_44(D))
    goto <bb 23>; [5.50%]
  else
    goto <bb 21>; [94.50%]

  <bb 21> [local count: 598686476]:
  # DEBUG BEGIN_STMT
  TargetKeyElementIndex_45 = TargetKeyElementIndex_30 + 1;
  # DEBUG TargetKeyElementIndex => TargetKeyElementIndex_45

  <bb 22> [local count: 670402818]:
  # TargetKeyElementIndex_30 = PHI <TargetKeyElementIndex_45(21), 0(30)>
  # DEBUG TargetKeyElementIndex => TargetKeyElementIndex_30
  # DEBUG BEGIN_STMT
  _21 = Crypto_Keys[TargetCryptoKeyId_37(D)].KeyElements;
  if (_21 > TargetKeyElementIndex_30)
    goto <bb 20>; [94.50%]
  else
    goto <bb 23>; [5.50%]

  <bb 23> [local count: 71716341]:
  # _3 = PHI <_21(20), _21(22)>
  # TargetKeyElementIndex_34 = PHI <TargetKeyElementIndex_30(20), TargetKeyElementIndex_30(22)>
  # DEBUG BEGIN_STMT
  if (_3 == TargetKeyElementIndex_34)
    goto <bb 24>; [20.24%]
  else
    goto <bb 25>; [79.76%]

  <bb 24> [local count: 14515387]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 15, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 29>; [100.00%]

  <bb 25> [local count: 57200954]:
  # DEBUG BEGIN_STMT
  _22 = Crypto_Keys[TargetCryptoKeyId_37(D)].KeyType;
  _23 = TargetKeyElementIndex_34 * 4;
  _24 = _22 + _23;
  _25 = *_24;
  _26 = _25->WriteAccess;
  if (_26 == 1)
    goto <bb 29>; [21.72%]
  else
    goto <bb 26>; [78.28%]

  <bb 26> [local count: 44776907]:
  if (_15 == 2)
    goto <bb 27>; [51.12%]
  else
    goto <bb 28>; [48.88%]

  <bb 27> [local count: 22889955]:
  _27 = _25->ReadAccess;
  if (_27 == 3)
    goto <bb 29>; [21.72%]
  else
    goto <bb 28>; [78.28%]

  <bb 28> [local count: 39805209]:
  # DEBUG BEGIN_STMT
  RetVal_47 = Crypto_PL_KeyElementCopy (CryptoKeyId_36(D), KeyElementId_42(D), TargetCryptoKeyId_37(D), TargetKeyElementId_44(D));
  # DEBUG RetVal => RetVal_47

  <bb 29> [local count: 870676860]:
  # RetVal_28 = PHI <1(3), 1(5), 1(7), 2(11), 1(18), 6(19), 1(24), 7(27), RetVal_47(28), 7(25)>
  # DEBUG RetVal => RetVal_28
  # DEBUG BEGIN_STMT
  return RetVal_28;

}



;; Function Crypto_KeyCopy (Crypto_KeyCopy, funcdef_no=4, decl_uid=5592, cgraph_uid=5, symbol_order=4)

Modification phase of node Crypto_KeyCopy/4
Crypto_KeyCopy (uint32 CryptoKeyId, uint32 TargetCryptoKeyId)
{
  uint32 j;
  uint32 i;
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.4_1;
  struct Crypto_JobType * _2;
  long unsigned int _3;
  long unsigned int _4;
  struct Crypto_KeyElement * const * _5;
  long unsigned int _6;
  struct Crypto_KeyElement * const * _7;
  struct Crypto_KeyElement * _8;
  unsigned char _9;
  long unsigned int _10;
  struct Crypto_KeyElement * const * _11;
  long unsigned int _12;
  struct Crypto_KeyElement * const * _13;
  struct Crypto_KeyElement * _14;
  long unsigned int _15;
  unsigned char _16;
  unsigned char _17;
  long unsigned int _18;
  long unsigned int _19;
  struct Crypto_KeyElement * _27;
  long unsigned int _31;

  <bb 2> [local count: 99278214]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG DriverObj => 0B
  # DEBUG BEGIN_STMT
  # DEBUG ObjectId => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  Crypto_Initialized.4_1 = Crypto_Initialized;
  if (Crypto_Initialized.4_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 32761811]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 16, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 27>; [100.00%]

  <bb 4> [local count: 66516403]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_33(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 27591004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 16, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 27>; [100.00%]

  <bb 6> [local count: 38925399]:
  # DEBUG BEGIN_STMT
  if (TargetCryptoKeyId_34(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 22965986]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 16, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 27>; [100.00%]

  <bb 8> [local count: 15959414]:
  # DEBUG BEGIN_STMT
  # DEBUG DriverObj => &MEM[(void *)&Crypto_DriverObjects]
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  _2 = MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects].CurrentJob;
  if (_2 != 0B)
    goto <bb 10>; [82.57%]
  else
    goto <bb 9>; [17.43%]

  <bb 9> [local count: 2781726]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 10> [local count: 13177688]:
  # DEBUG BEGIN_STMT
  _4 = _2->cryptoKeyId;
  if (_4 == TargetCryptoKeyId_34(D))
    goto <bb 11>; [21.72%]
  else
    goto <bb 12>; [78.28%]

  <bb 11> [local count: 2862194]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 27>; [100.00%]

  <bb 12> [local count: 10315494]:
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  goto <bb 23>; [100.00%]

  <bb 13> [local count: 119227249]:
  # DEBUG BEGIN_STMT
  _5 = Crypto_Keys[CryptoKeyId_33(D)].KeyType;
  _6 = i_24 * 4;
  _7 = _5 + _6;
  _8 = *_7;
  _9 = _8->ReadAccess;
  if (_9 == 1)
    goto <bb 25>; [3.66%]
  else
    goto <bb 28>; [96.34%]

  <bb 28> [local count: 114863532]:
  goto <bb 20>; [100.00%]

  <bb 14> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _10 = _8->Id;
  _11 = Crypto_Keys[TargetCryptoKeyId_34(D)].KeyType;
  _12 = j_25 * 4;
  _13 = _11 + _12;
  _14 = *_13;
  _15 = _14->Id;
  if (_10 == _15)
    goto <bb 15>; [5.50%]
  else
    goto <bb 19>; [94.50%]

  <bb 15> [local count: 55807731]:
  # _27 = PHI <_14(14)>
  # _3 = PHI <_18(14)>
  # j_29 = PHI <j_25(14)>
  # DEBUG BEGIN_STMT
  _16 = _27->WriteAccess;
  if (_16 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 16> [local count: 36833103]:
  if (_9 == 2)
    goto <bb 17>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 17> [local count: 12523255]:
  _17 = _27->ReadAccess;
  if (_17 == 3)
    goto <bb 18>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 18> [local count: 23232535]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 7
  goto <bb 21>; [100.00%]

  <bb 19> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  j_39 = j_25 + 1;
  # DEBUG j => j_39

  <bb 20> [local count: 1073741824]:
  # j_25 = PHI <j_39(19), 0(28)>
  # DEBUG j => j_25
  # DEBUG BEGIN_STMT
  _18 = Crypto_Keys[TargetCryptoKeyId_34(D)].KeyElements;
  if (_18 > j_25)
    goto <bb 14>; [94.50%]
  else
    goto <bb 21>; [5.50%]

  <bb 21> [local count: 114863532]:
  # RetVal_20 = PHI <RetVal_21(17), RetVal_21(20), RetVal_21(16), 7(18)>
  # _31 = PHI <_3(17), _18(20), _3(16), _3(18)>
  # j_37 = PHI <j_29(17), j_25(20), j_29(16), j_29(18)>
  # DEBUG RetVal => RetVal_20
  # DEBUG BEGIN_STMT
  if (_31 == j_37)
    goto <bb 25>; [3.66%]
  else
    goto <bb 22>; [96.34%]

  <bb 22> [local count: 110659526]:
  # DEBUG BEGIN_STMT
  i_40 = i_24 + 1;
  # DEBUG i => i_40
  goto <bb 24>; [100.00%]

  <bb 23> [local count: 13097220]:

  <bb 24> [local count: 123756746]:
  # RetVal_21 = PHI <0(23), RetVal_20(22)>
  # i_24 = PHI <0(23), i_40(22)>
  # DEBUG i => i_24
  # DEBUG RetVal => RetVal_21
  # DEBUG BEGIN_STMT
  _19 = Crypto_Keys[CryptoKeyId_33(D)].KeyElements;
  if (_19 > i_24)
    goto <bb 13>; [96.34%]
  else
    goto <bb 25>; [3.66%]

  <bb 25> [local count: 13097220]:
  # RetVal_22 = PHI <6(13), 8(21), RetVal_21(24)>
  # DEBUG RetVal => RetVal_22
  # DEBUG BEGIN_STMT
  if (RetVal_22 == 0)
    goto <bb 26>; [33.00%]
  else
    goto <bb 27>; [67.00%]

  <bb 26> [local count: 4322082]:
  # DEBUG BEGIN_STMT
  RetVal_42 = Crypto_PL_KeyCopy (CryptoKeyId_33(D), TargetCryptoKeyId_34(D));
  # DEBUG RetVal => RetVal_42

  <bb 27> [local count: 99278214]:
  # RetVal_23 = PHI <1(3), 1(5), 1(7), 2(11), RetVal_22(25), RetVal_42(26)>
  # DEBUG RetVal => RetVal_23
  # DEBUG BEGIN_STMT
  return RetVal_23;

}



;; Function Crypto_KeyElementIdsGet (Crypto_KeyElementIdsGet, funcdef_no=5, decl_uid=5596, cgraph_uid=6, symbol_order=5)

Modification phase of node Crypto_KeyElementIdsGet/5
Crypto_KeyElementIdsGet (uint32 CryptoKeyId, uint32 * KeyElementIdsPtr, uint32 * KeyElementIdsLengthPtr)
{
  uint32 keyElementIndex;
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.5_1;
  long unsigned int _2;
  long unsigned int _3;
  struct Crypto_KeyElement * const * _4;
  long unsigned int _5;
  struct Crypto_KeyElement * const * _6;
  struct Crypto_KeyElement * _7;
  uint32 * _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;

  <bb 2> [local count: 381124179]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG keyElementIndex => 0
  # DEBUG BEGIN_STMT
  Crypto_Initialized.5_1 = Crypto_Initialized;
  if (Crypto_Initialized.5_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 125770979]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 17, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 255353200]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_17(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 105920507]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 17, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 149432692]:
  # DEBUG BEGIN_STMT
  _2 = *KeyElementIdsLengthPtr_18(D);
  _3 = Crypto_Keys[CryptoKeyId_17(D)].KeyElements;
  if (_2 < _3)
    goto <bb 7>; [20.96%]
  else
    goto <bb 12>; [79.04%]

  <bb 12> [local count: 118111600]:
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 31321092]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 17, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _4 = Crypto_Keys[CryptoKeyId_17(D)].KeyType;
  _5 = keyElementIndex_13 * 4;
  _6 = _4 + _5;
  _7 = *_6;
  _8 = KeyElementIdsPtr_20(D) + _5;
  _9 = _7->Id;
  *_8 = _9;
  # DEBUG BEGIN_STMT
  keyElementIndex_22 = keyElementIndex_13 + 1;
  # DEBUG keyElementIndex => keyElementIndex_22

  <bb 9> [local count: 1073741824]:
  # keyElementIndex_13 = PHI <keyElementIndex_22(8), 0(12)>
  # DEBUG keyElementIndex => keyElementIndex_13
  # DEBUG BEGIN_STMT
  _10 = Crypto_Keys[CryptoKeyId_17(D)].KeyElements;
  if (_10 > keyElementIndex_13)
    goto <bb 8>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 118111601]:
  # _11 = PHI <_10(9)>
  # DEBUG BEGIN_STMT
  *KeyElementIdsLengthPtr_18(D) = _11;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 11> [local count: 381124179]:
  # RetVal_12 = PHI <1(3), 1(5), 3(7), 0(10)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function Crypto_RandomSeed (Crypto_RandomSeed, funcdef_no=6, decl_uid=5600, cgraph_uid=7, symbol_order=6)

Modification phase of node Crypto_RandomSeed/6
Crypto_RandomSeed (uint32 CryptoKeyId, const uint8 * EntropyPtr, uint32 EntropyLength)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.6_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.6_1 = Crypto_Initialized;
  if (Crypto_Initialized.6_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 13, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_5(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 13, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (EntropyPtr_6(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 73379775]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 13, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 347617214]:
  # DEBUG BEGIN_STMT
  if (EntropyLength_7(D) == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 173808607]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 13, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 173808607]:
  # DEBUG BEGIN_STMT
  RetVal_9 = Crypto_PL_RandomSeed (CryptoKeyId_5(D), EntropyPtr_6(D), EntropyLength_7(D));
  # DEBUG RetVal => RetVal_9

  <bb 11> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), 1(7), 1(9), RetVal_9(10)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyGenerate (Crypto_KeyGenerate, funcdef_no=7, decl_uid=5602, cgraph_uid=8, symbol_order=7)

Modification phase of node Crypto_KeyGenerate/7
Crypto_KeyGenerate (uint32 CryptoKeyId)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.7_1 = Crypto_Initialized;
  if (Crypto_Initialized.7_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 7, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_5(D) > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 7, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  RetVal_7 = Crypto_PL_KeyGenerate (CryptoKeyId_5(D));
  # DEBUG RetVal => RetVal_7

  <bb 7> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), RetVal_7(6)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyDerive (Crypto_KeyDerive, funcdef_no=8, decl_uid=5605, cgraph_uid=9, symbol_order=8)

Modification phase of node Crypto_KeyDerive/8
Crypto_KeyDerive (uint32 CryptoKeyId, uint32 TargetCryptoKeyId)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.8_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.8_1 = Crypto_Initialized;
  if (Crypto_Initialized.8_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 8, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_5(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 8, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (TargetCryptoKeyId_6(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 248388223]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 8, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 172608766]:
  # DEBUG BEGIN_STMT
  RetVal_8 = Crypto_PL_KeyDerive (CryptoKeyId_5(D), TargetCryptoKeyId_6(D));
  # DEBUG RetVal => RetVal_8

  <bb 9> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), 1(7), RetVal_8(8)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_KeyExchangeCalcPubVal (Crypto_KeyExchangeCalcPubVal, funcdef_no=9, decl_uid=5609, cgraph_uid=10, symbol_order=9)

Modification phase of node Crypto_KeyExchangeCalcPubVal/9
Crypto_KeyExchangeCalcPubVal (uint32 CryptoKeyId, uint8 * PublicValuePtr, uint32 * PublicValueLengthPtr)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.9_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.9_1 = Crypto_Initialized;
  if (Crypto_Initialized.9_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 9, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_6(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 9, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (PublicValuePtr_7(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 73379775]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 9, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 8> [local count: 347617214]:
  # DEBUG BEGIN_STMT
  if (PublicValueLengthPtr_8(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 60589680]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 9, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 287027533]:
  # DEBUG BEGIN_STMT
  _2 = *PublicValueLengthPtr_8(D);
  if (_2 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 143513767]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 9, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 143513767]:
  # DEBUG BEGIN_STMT
  RetVal_10 = Crypto_PL_KeyExchangeCalcPubVal (CryptoKeyId_6(D), PublicValuePtr_7(D), PublicValueLengthPtr_8(D));
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  if (RetVal_10 == 3)
    goto <bb 13>; [12.02%]
  else
    goto <bb 14>; [87.98%]

  <bb 13> [local count: 17250355]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 9, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3

  <bb 14> [local count: 1073741824]:
  # RetVal_3 = PHI <RetVal_10(12), 3(13), 1(3), 1(11), 1(9), 1(7), 1(5)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function Crypto_KeyExchangeCalcSecret (Crypto_KeyExchangeCalcSecret, funcdef_no=10, decl_uid=5613, cgraph_uid=11, symbol_order=10)

Modification phase of node Crypto_KeyExchangeCalcSecret/10
Crypto_KeyExchangeCalcSecret (uint32 CryptoKeyId, const uint8 * PartnerPublicValuePtr, uint32 PartnerPublicValueLength)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.10_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.10_1 = Crypto_Initialized;
  if (Crypto_Initialized.10_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 10, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_5(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 10, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (PartnerPublicValuePtr_6(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 73379775]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 10, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 347617214]:
  # DEBUG BEGIN_STMT
  if (PartnerPublicValueLength_7(D) == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 173808607]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 10, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 173808607]:
  # DEBUG BEGIN_STMT
  RetVal_9 = Crypto_PL_KeyExchangeCalcSecret (CryptoKeyId_5(D), PartnerPublicValuePtr_6(D), PartnerPublicValueLength_7(D));
  # DEBUG RetVal => RetVal_9

  <bb 11> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(5), 1(7), 1(9), RetVal_9(10)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Crypto_CertificateParse (Crypto_CertificateParse, funcdef_no=11, decl_uid=5615, cgraph_uid=12, symbol_order=11)

Modification phase of node Crypto_CertificateParse/11
Crypto_CertificateParse (uint32 CryptoKeyId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Crypto_CertificateVerify (Crypto_CertificateVerify, funcdef_no=12, decl_uid=5619, cgraph_uid=13, symbol_order=12)

Modification phase of node Crypto_CertificateVerify/12
Crypto_CertificateVerify (uint32 CryptoKeyId, uint32 VerifyCryptoKeyId, Crypto_VerifyResultType * VerifyPtr)
{
  Std_ReturnType RetVal;
  unsigned char Crypto_Initialized.11_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  Crypto_Initialized.11_1 = Crypto_Initialized;
  if (Crypto_Initialized.11_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 18, 0);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (CryptoKeyId_5(D) > 1)
    goto <bb 6>; [41.48%]
  else
    goto <bb 5>; [58.52%]

  <bb 5> [local count: 420996989]:
  if (VerifyCryptoKeyId_6(D) > 1)
    goto <bb 6>; [59.00%]
  else
    goto <bb 7>; [41.00%]

  <bb 6> [local count: 546798257]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 18, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 172608766]:
  # DEBUG BEGIN_STMT
  if (VerifyPtr_7(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 51782630]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (114, 0, 18, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 120826136]:
  # DEBUG BEGIN_STMT
  RetVal_9 = Crypto_PL_CertificateVerify (CryptoKeyId_5(D), VerifyCryptoKeyId_6(D), VerifyPtr_7(D));
  # DEBUG RetVal => RetVal_9

  <bb 10> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 1(6), 1(8), RetVal_9(9)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}


