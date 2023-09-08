
IPA constant propagation start:
Determining dynamic type for call: result_9 = Csm_Process.part.0 (jobId_7(D), jobPrimitiveInputOutput_8(D));
  Starting walk at: result_9 = Csm_Process.part.0 (jobId_7(D), jobPrimitiveInputOutput_8(D));
  instance pointer: jobPrimitiveInputOutput_8(D)  Outer instance pointer: jobPrimitiveInputOutput_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: result_25 = Csm_Process (jobId_11(D), &jobPrimitiveInputOutput);
  Starting walk at: result_25 = Csm_Process (jobId_11(D), &jobPrimitiveInputOutput);
  instance pointer: &jobPrimitiveInputOutput  Outer instance pointer: jobPrimitiveInputOutput offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: result_22 = Csm_Process (jobId_10(D), &jobPrimitiveInputOutput);
  Starting walk at: result_22 = Csm_Process (jobId_10(D), &jobPrimitiveInputOutput);
  instance pointer: &jobPrimitiveInputOutput  Outer instance pointer: jobPrimitiveInputOutput offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Csm_Process.part.0/43:
  Jump functions of caller  Csm_QueuePushJob/42:
  Jump functions of caller  CryIf_ProcessJob/41:
  Jump functions of caller  CryIf_RandomSeed/40:
  Jump functions of caller  CryIf_KeySetValid/39:
  Jump functions of caller  CryIf_KeyGenerate/38:
  Jump functions of caller  CryIf_KeyExchangeCalcSecret/37:
  Jump functions of caller  CryIf_KeyExchangeCalcPubVal/36:
  Jump functions of caller  CryIf_KeyElementSet/35:
  Jump functions of caller  CryIf_KeyElementGet/34:
  Jump functions of caller  CryIf_KeyElementCopy/33:
  Jump functions of caller  CryIf_KeyDerive/32:
  Jump functions of caller  CryIf_KeyCopy/31:
  Jump functions of caller  CryIf_CertificateVerify/30:
  Jump functions of caller  CryIf_CertificateParse/29:
  Jump functions of caller  CryIf_CancelJob/27:
  Jump functions of caller  Csm_QueueDelJob/26:
  Jump functions of caller  SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24:
  Jump functions of caller  SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23:
  Jump functions of caller  Csm_Int_CallbackNotification/22:
  Jump functions of caller  Det_ASR40_ReportError/19:
  Jump functions of caller  Csm_Process/18:
    callsite  Csm_Process/18 -> Csm_Process.part.0/43 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Csm_RandomSeed/17:
  Jump functions of caller  Csm_MacVerify/16:
    callsite  Csm_MacVerify/16 -> Csm_Process/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Csm_MacGenerate/15:
    callsite  Csm_MacGenerate/15 -> Csm_Process/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Csm_KeySetValid/14:
  Jump functions of caller  Csm_KeyGenerate/13:
  Jump functions of caller  Csm_KeyExchangeCalcSecret/12:
  Jump functions of caller  Csm_KeyExchangeCalcPubVal/11:
  Jump functions of caller  Csm_KeyElementSet/10:
  Jump functions of caller  Csm_KeyElementGet/9:
  Jump functions of caller  Csm_KeyElementCopy/8:
  Jump functions of caller  Csm_KeyDerive/7:
  Jump functions of caller  Csm_KeyCopy/6:
  Jump functions of caller  Csm_Init/5:
  Jump functions of caller  Csm_CertificateVerify/4:
  Jump functions of caller  Csm_CertificateParse/3:
  Jump functions of caller  Csm_CancelJob/2:
    indirect simple callsite, calling param -1, offset 0, for stmt _12 (12);
       param 0: CONST: 12
         value: 0xc, mask: 0x0
         Unknown VR
  Jump functions of caller  Csm_CallbackNotification/1:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 ();

 Propagating constants:

Not considering Csm_Process for cloning; -fipa-cp-clone disabled.
Not considering Csm_RandomSeed for cloning; -fipa-cp-clone disabled.
Not considering Csm_MacVerify for cloning; -fipa-cp-clone disabled.
Not considering Csm_MacGenerate for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeySetValid for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyGenerate for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyExchangeCalcSecret for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyExchangeCalcPubVal for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyElementSet for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyElementGet for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyElementCopy for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyDerive for cloning; -fipa-cp-clone disabled.
Not considering Csm_KeyCopy for cloning; -fipa-cp-clone disabled.
Not considering Csm_Init for cloning; -fipa-cp-clone disabled.
Not considering Csm_CertificateVerify for cloning; -fipa-cp-clone disabled.
Not considering Csm_CertificateParse for cloning; -fipa-cp-clone disabled.
Not considering Csm_CancelJob for cloning; -fipa-cp-clone disabled.
Not considering Csm_CallbackNotification for cloning; -fipa-cp-clone disabled.

overall_size: 812, max_new_size: 11001
 - context independent values, size: 69, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Csm_Process.part.0/43:
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
  Node: Csm_Process/18:
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
  Node: Csm_RandomSeed/17:
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
  Node: Csm_MacVerify/16:
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
  Node: Csm_MacGenerate/15:
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
  Node: Csm_KeySetValid/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csm_KeyGenerate/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csm_KeyExchangeCalcSecret/12:
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
  Node: Csm_KeyExchangeCalcPubVal/11:
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
  Node: Csm_KeyElementSet/10:
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
  Node: Csm_KeyElementGet/9:
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
  Node: Csm_KeyElementCopy/8:
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
  Node: Csm_KeyDerive/7:
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
  Node: Csm_KeyCopy/6:
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
  Node: Csm_Init/5:
  Node: Csm_CertificateVerify/4:
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
  Node: Csm_CertificateParse/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Csm_CancelJob/2:
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
  Node: Csm_CallbackNotification/1:
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

Csm_Process.part.0/43 (Csm_Process.part.0) @06da79a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Csm_JobExtraData/21 (write)Csm_JobConfigurations/25 (read)Csm_JobConfigurations/25 (write)Csm_JobExtraCnfg/20 (read)Csm_JobConfigurations/25 (addr)Csm_JobConfigurations/25 (read)Csm_JobExtraData/21 (read)Csm_JobExtraCnfg/20 (read)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (addr)Csm_JobExtraData/21 (write)Csm_JobExtraData/21 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (addr)Csm_JobExtraData/21 (write)Csm_JobExtraData/21 (read)Csm_JobExtraCnfg/20 (read)Csm_JobConfigurations/25 (read)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (addr)Csm_JobExtraData/21 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Csm_Process/18 (697932183 (estimated locally),0.65 per call) 
  Calls: SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (1073741824 (estimated locally),1.00 per call) CryIf_ProcessJob/41 (180380037 (estimated locally),0.17 per call) CryIf_ProcessJob/41 (22213302 (estimated locally),0.02 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (5259932 (estimated locally),0.00 per call) Csm_QueuePushJob/42 (5259932 (estimated locally),0.00 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (5259932 (estimated locally),0.00 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (22213302 (estimated locally),0.02 per call) Csm_QueuePushJob/42 (22213302 (estimated locally),0.02 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (22213302 (estimated locally),0.02 per call) CryIf_ProcessJob/41 (208680648 (estimated locally),0.19 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (1073741824 (estimated locally),1.00 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (1073741824 (estimated locally),1.00 per call) 
Csm_QueuePushJob/42 (Csm_QueuePushJob) @06d7ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_Process.part.0/43 (5259932 (estimated locally),0.00 per call) Csm_Process.part.0/43 (22213302 (estimated locally),0.02 per call) 
  Calls: 
CryIf_ProcessJob/41 (CryIf_ProcessJob) @06d7cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_Process.part.0/43 (180380037 (estimated locally),0.17 per call) Csm_Process.part.0/43 (22213302 (estimated locally),0.02 per call) Csm_Process.part.0/43 (208680648 (estimated locally),0.19 per call) 
  Calls: 
CryIf_RandomSeed/40 (CryIf_RandomSeed) @06d7c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_RandomSeed/17 (294697892 (estimated locally),0.27 per call) 
  Calls: 
CryIf_KeySetValid/39 (CryIf_KeySetValid) @06d7c380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeySetValid/14 (294956879 (estimated locally),0.27 per call) 
  Calls: 
CryIf_KeyGenerate/38 (CryIf_KeyGenerate) @06d7c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyGenerate/13 (294956879 (estimated locally),0.27 per call) 
  Calls: 
CryIf_KeyExchangeCalcSecret/37 (CryIf_KeyExchangeCalcSecret) @06d7c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyExchangeCalcSecret/12 (294697892 (estimated locally),0.27 per call) 
  Calls: 
CryIf_KeyExchangeCalcPubVal/36 (CryIf_KeyExchangeCalcPubVal) @06d6aee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyExchangeCalcPubVal/11 (243332049 (estimated locally),0.23 per call) 
  Calls: 
CryIf_KeyElementSet/35 (CryIf_KeyElementSet) @06d6ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyElementSet/10 (294697892 (estimated locally),0.27 per call) 
  Calls: 
CryIf_KeyElementGet/34 (CryIf_KeyElementGet) @06d6ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyElementGet/9 (243332049 (estimated locally),0.23 per call) 
  Calls: 
CryIf_KeyElementCopy/33 (CryIf_KeyElementCopy) @06d6a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyElementCopy/8 (172608766 (estimated locally),0.16 per call) 
  Calls: 
CryIf_KeyDerive/32 (CryIf_KeyDerive) @06d6a7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyDerive/7 (172608766 (estimated locally),0.16 per call) 
  Calls: 
CryIf_KeyCopy/31 (CryIf_KeyCopy) @06d6a620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_KeyCopy/6 (172608766 (estimated locally),0.16 per call) 
  Calls: 
CryIf_CertificateVerify/30 (CryIf_CertificateVerify) @06d6a2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_CertificateVerify/4 (172457207 (estimated locally),0.16 per call) 
  Calls: 
CryIf_CertificateParse/29 (CryIf_CertificateParse) @06d6a0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_CertificateParse/3 (294956879 (estimated locally),0.27 per call) 
  Calls: 
Csm_Keys/28 (Csm_Keys) @06d36438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Csm_KeyGenerate/13 (read)Csm_KeyExchangeCalcSecret/12 (read)Csm_KeySetValid/14 (read)Csm_KeyDerive/7 (read)Csm_CertificateParse/3 (read)Csm_CertificateVerify/4 (read)Csm_CertificateVerify/4 (read)Csm_KeyCopy/6 (read)Csm_KeyCopy/6 (read)Csm_KeyDerive/7 (read)Csm_KeyElementCopy/8 (read)Csm_KeyElementGet/9 (read)Csm_KeyElementSet/10 (read)Csm_KeyExchangeCalcPubVal/11 (read)Csm_KeyElementCopy/8 (read)Csm_RandomSeed/17 (read)
  Availability: not_available
  Varpool flags: read-only
CryIf_CancelJob/27 (CryIf_CancelJob) @06d29e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_CancelJob/2 (48667885 (estimated locally),0.05 per call) Csm_CancelJob/2 (15951407 (estimated locally),0.01 per call) 
  Calls: 
Csm_QueueDelJob/26 (Csm_QueueDelJob) @06d29ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_CancelJob/2 (19999256 (estimated locally),0.02 per call) 
  Calls: 
Csm_JobConfigurations/25 (Csm_JobConfigurations) @06d31e10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Csm_CancelJob/2 (read)Csm_CancelJob/2 (addr)Csm_CancelJob/2 (addr)Csm_CancelJob/2 (addr)Csm_Process.part.0/43 (addr)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Init/5 (write)Csm_MacGenerate/15 (read)Csm_Init/5 (write)Csm_Init/5 (write)Csm_Process.part.0/43 (read)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (addr)Csm_Process.part.0/43 (read)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (addr)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (addr)Csm_Process.part.0/43 (read)Csm_Process.part.0/43 (write)Csm_MacVerify/16 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0) @06d29d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_Process/18 (375809638 (estimated locally),0.35 per call) Csm_Process.part.0/43 (1073741824 (estimated locally),1.00 per call) Csm_Process.part.0/43 (5259932 (estimated locally),0.00 per call) Csm_Process.part.0/43 (22213302 (estimated locally),0.02 per call) Csm_Process.part.0/43 (1073741824 (estimated locally),1.00 per call) Csm_CancelJob/2 (147478440 (estimated locally),0.14 per call) Csm_CancelJob/2 (19999256 (estimated locally),0.02 per call) Csm_CancelJob/2 (147478439 (estimated locally),0.14 per call) Csm_CancelJob/2 (147478439 (estimated locally),0.14 per call) 
  Calls: 
SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0) @06d29c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_Process/18 (1073741823 (estimated locally),1.00 per call) Csm_Process.part.0/43 (5259932 (estimated locally),0.00 per call) Csm_Process.part.0/43 (22213302 (estimated locally),0.02 per call) Csm_Process.part.0/43 (1073741824 (estimated locally),1.00 per call) Csm_CancelJob/2 (147478440 (estimated locally),0.14 per call) Csm_CancelJob/2 (19999256 (estimated locally),0.02 per call) Csm_CancelJob/2 (294956879 (estimated locally),0.27 per call) 
  Calls: 
Csm_Int_CallbackNotification/22 (Csm_Int_CallbackNotification) @06d299a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_CallbackNotification/1 (103536706 (estimated locally),0.10 per call) 
  Calls: 
Csm_JobExtraData/21 (Csm_JobExtraData) @06d31318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Csm_CancelJob/2 (write)Csm_CallbackNotification/1 (write)Csm_CancelJob/2 (read)Csm_CancelJob/2 (write)Csm_CancelJob/2 (read)Csm_CancelJob/2 (read)Csm_CancelJob/2 (write)Csm_Init/5 (write)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (read)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (write)Csm_Process.part.0/43 (read)Csm_Process/18 (read)
  Availability: not_available
  Varpool flags:
Csm_JobExtraCnfg/20 (Csm_JobExtraCnfg) @06d312d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Csm_CancelJob/2 (read)Csm_CancelJob/2 (read)Csm_CallbackNotification/1 (read)Csm_CancelJob/2 (read)Csm_CancelJob/2 (read)Csm_CallbackNotification/1 (read)Csm_Init/5 (read)Csm_Process.part.0/43 (read)Csm_Process.part.0/43 (read)Csm_Process.part.0/43 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ASR40_ReportError/19 (Det_ASR40_ReportError) @06d298c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Csm_MacVerify/16 (25574773 (estimated locally),0.02 per call) Csm_MacVerify/16 (30973445 (estimated locally),0.03 per call) Csm_MacVerify/16 (37511741 (estimated locally),0.03 per call) Csm_MacVerify/16 (205783328 (estimated locally),0.19 per call) Csm_MacVerify/16 (298410032 (estimated locally),0.28 per call) Csm_MacVerify/16 (354334802 (estimated locally),0.33 per call) Csm_MacGenerate/15 (1585875 (estimated locally),0.00 per call) Csm_MacGenerate/15 (25574773 (estimated locally),0.02 per call) Csm_MacGenerate/15 (30973445 (estimated locally),0.03 per call) Csm_MacGenerate/15 (37511741 (estimated locally),0.03 per call) Csm_MacGenerate/15 (205783328 (estimated locally),0.19 per call) Csm_MacGenerate/15 (298410033 (estimated locally),0.28 per call) Csm_MacGenerate/15 (354334802 (estimated locally),0.33 per call) Csm_RandomSeed/17 (126299097 (estimated locally),0.12 per call) Csm_RandomSeed/17 (298410033 (estimated locally),0.28 per call) Csm_RandomSeed/17 (354334802 (estimated locally),0.33 per call) Csm_KeySetValid/14 (424450143 (estimated locally),0.40 per call) Csm_KeySetValid/14 (354334802 (estimated locally),0.33 per call) Csm_KeyGenerate/13 (424450143 (estimated locally),0.40 per call) Csm_KeyGenerate/13 (354334802 (estimated locally),0.33 per call) Csm_KeyExchangeCalcSecret/12 (35422687 (estimated locally),0.03 per call) Csm_KeyExchangeCalcSecret/12 (126299097 (estimated locally),0.12 per call) Csm_KeyExchangeCalcSecret/12 (298410033 (estimated locally),0.28 per call) Csm_KeyExchangeCalcSecret/12 (354334802 (estimated locally),0.33 per call) Csm_KeyExchangeCalcPubVal/11 (29248512 (estimated locally),0.03 per call) Csm_KeyExchangeCalcPubVal/11 (104285164 (estimated locally),0.10 per call) Csm_KeyExchangeCalcPubVal/11 (73379775 (estimated locally),0.07 per call) Csm_KeyExchangeCalcPubVal/11 (298410033 (estimated locally),0.28 per call) Csm_KeyExchangeCalcPubVal/11 (354334802 (estimated locally),0.33 per call) Csm_KeyElementSet/10 (126299097 (estimated locally),0.12 per call) Csm_KeyElementSet/10 (298410033 (estimated locally),0.28 per call) Csm_KeyElementSet/10 (354334802 (estimated locally),0.33 per call) Csm_KeyElementGet/9 (29248512 (estimated locally),0.03 per call) Csm_KeyElementGet/9 (104285164 (estimated locally),0.10 per call) Csm_KeyElementGet/9 (73379775 (estimated locally),0.07 per call) Csm_KeyElementGet/9 (298410033 (estimated locally),0.28 per call) Csm_KeyElementGet/9 (354334802 (estimated locally),0.33 per call) Csm_KeyElementCopy/8 (248388223 (estimated locally),0.23 per call) Csm_KeyElementCopy/8 (298410033 (estimated locally),0.28 per call) Csm_KeyElementCopy/8 (354334802 (estimated locally),0.33 per call) Csm_KeyDerive/7 (248388223 (estimated locally),0.23 per call) Csm_KeyDerive/7 (298410033 (estimated locally),0.28 per call) Csm_KeyDerive/7 (354334802 (estimated locally),0.33 per call) Csm_KeyCopy/6 (248388223 (estimated locally),0.23 per call) Csm_KeyCopy/6 (298410033 (estimated locally),0.28 per call) Csm_KeyCopy/6 (354334802 (estimated locally),0.33 per call) Csm_CertificateVerify/4 (73910231 (estimated locally),0.07 per call) Csm_CertificateVerify/4 (174629551 (estimated locally),0.16 per call) Csm_CertificateVerify/4 (298410033 (estimated locally),0.28 per call) Csm_CertificateVerify/4 (354334802 (estimated locally),0.33 per call) Csm_CertificateParse/3 (424450143 (estimated locally),0.40 per call) Csm_CertificateParse/3 (354334802 (estimated locally),0.33 per call) Csm_CancelJob/2 (424450142 (estimated locally),0.40 per call) Csm_CancelJob/2 (354334802 (estimated locally),0.33 per call) Csm_CallbackNotification/1 (125392644 (estimated locally),0.12 per call) Csm_CallbackNotification/1 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Csm_Process/18 (Csm_Process) @06d29700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_JobExtraData/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Csm_MacVerify/16 (13193638 (estimated locally),0.01 per call) Csm_MacGenerate/15 (13193638 (estimated locally),0.01 per call) 
  Calls: Csm_Process.part.0/43 (697932183 (estimated locally),0.65 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (375809638 (estimated locally),0.35 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (1073741823 (estimated locally),1.00 per call) 
Csm_RandomSeed/17 (Csm_RandomSeed) @06d29460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_RandomSeed/40 (294697892 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (126299097 (estimated locally),0.12 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_MacVerify/16 (Csm_MacVerify) @06d292a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_JobConfigurations/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Csm_Process/18 (13193638 (estimated locally),0.01 per call) Det_ASR40_ReportError/19 (25574773 (estimated locally),0.02 per call) Det_ASR40_ReportError/19 (30973445 (estimated locally),0.03 per call) Det_ASR40_ReportError/19 (37511741 (estimated locally),0.03 per call) Det_ASR40_ReportError/19 (205783328 (estimated locally),0.19 per call) Det_ASR40_ReportError/19 (298410032 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_MacGenerate/15 (Csm_MacGenerate) @06d29000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_JobConfigurations/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/19 (1585875 (estimated locally),0.00 per call) Csm_Process/18 (13193638 (estimated locally),0.01 per call) Det_ASR40_ReportError/19 (25574773 (estimated locally),0.02 per call) Det_ASR40_ReportError/19 (30973445 (estimated locally),0.03 per call) Det_ASR40_ReportError/19 (37511741 (estimated locally),0.03 per call) Det_ASR40_ReportError/19 (205783328 (estimated locally),0.19 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeySetValid/14 (Csm_KeySetValid) @06cbed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_KeySetValid/39 (294956879 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (424450143 (estimated locally),0.40 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyGenerate/13 (Csm_KeyGenerate) @06cbeb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_KeyGenerate/38 (294956879 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (424450143 (estimated locally),0.40 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyExchangeCalcSecret/12 (Csm_KeyExchangeCalcSecret) @06cbe9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/19 (35422687 (estimated locally),0.03 per call) CryIf_KeyExchangeCalcSecret/37 (294697892 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (126299097 (estimated locally),0.12 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyExchangeCalcPubVal/11 (Csm_KeyExchangeCalcPubVal) @06cbe7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/19 (29248512 (estimated locally),0.03 per call) CryIf_KeyExchangeCalcPubVal/36 (243332049 (estimated locally),0.23 per call) Det_ASR40_ReportError/19 (104285164 (estimated locally),0.10 per call) Det_ASR40_ReportError/19 (73379775 (estimated locally),0.07 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyElementSet/10 (Csm_KeyElementSet) @06cbe620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_KeyElementSet/35 (294697892 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (126299097 (estimated locally),0.12 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyElementGet/9 (Csm_KeyElementGet) @06cbe460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/19 (29248512 (estimated locally),0.03 per call) CryIf_KeyElementGet/34 (243332049 (estimated locally),0.23 per call) Det_ASR40_ReportError/19 (104285164 (estimated locally),0.10 per call) Det_ASR40_ReportError/19 (73379775 (estimated locally),0.07 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyElementCopy/8 (Csm_KeyElementCopy) @06cbe2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_KeyElementCopy/33 (172608766 (estimated locally),0.16 per call) Det_ASR40_ReportError/19 (248388223 (estimated locally),0.23 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyDerive/7 (Csm_KeyDerive) @06cbe0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_KeyDerive/32 (172608766 (estimated locally),0.16 per call) Det_ASR40_ReportError/19 (248388223 (estimated locally),0.23 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_KeyCopy/6 (Csm_KeyCopy) @06c98b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_KeyCopy/31 (172608766 (estimated locally),0.16 per call) Det_ASR40_ReportError/19 (248388223 (estimated locally),0.23 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_Init/5 (Csm_Init) @06c989a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobConfigurations/25 (write)Csm_JobExtraCnfg/20 (read)Csm_JobExtraData/21 (write)Csm_Initialized/0 (write)
  Referring: 
  Availability: available
  Function flags: count:59046942 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csm_CertificateVerify/4 (Csm_CertificateVerify) @06c987e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_CertificateVerify/30 (172457207 (estimated locally),0.16 per call) Det_ASR40_ReportError/19 (73910231 (estimated locally),0.07 per call) Det_ASR40_ReportError/19 (174629551 (estimated locally),0.16 per call) Det_ASR40_ReportError/19 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_CertificateParse/3 (Csm_CertificateParse) @06c98620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_Keys/28 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CryIf_CertificateParse/29 (294956879 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (424450143 (estimated locally),0.40 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
Csm_CancelJob/2 (Csm_CancelJob) @06c98460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_JobExtraData/21 (read)Csm_JobExtraData/21 (write)Csm_JobConfigurations/25 (read)Csm_JobExtraData/21 (read)Csm_JobExtraCnfg/20 (read)Csm_JobConfigurations/25 (addr)Csm_JobExtraCnfg/20 (read)Csm_JobConfigurations/25 (addr)Csm_JobExtraData/21 (read)Csm_JobExtraCnfg/20 (read)Csm_JobExtraData/21 (write)Csm_JobExtraCnfg/20 (read)Csm_JobConfigurations/25 (addr)Csm_JobExtraData/21 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (147478440 (estimated locally),0.14 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (147478440 (estimated locally),0.14 per call) CryIf_CancelJob/27 (48667885 (estimated locally),0.05 per call) CryIf_CancelJob/27 (15951407 (estimated locally),0.01 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (19999256 (estimated locally),0.02 per call) Csm_QueueDelJob/26 (19999256 (estimated locally),0.02 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (19999256 (estimated locally),0.02 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (147478439 (estimated locally),0.14 per call) SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/24 (147478439 (estimated locally),0.14 per call) SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0/23 (294956879 (estimated locally),0.27 per call) Det_ASR40_ReportError/19 (424450142 (estimated locally),0.40 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
   Indirect call(4278129 (estimated locally),0.00 per call) 
Csm_CallbackNotification/1 (Csm_CallbackNotification) @06c98e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_Initialized/0 (read)Csm_JobExtraCnfg/20 (read)Csm_JobExtraData/21 (write)Csm_JobExtraCnfg/20 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Csm_Int_CallbackNotification/22 (103536706 (estimated locally),0.10 per call) Det_ASR40_ReportError/19 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/19 (354334802 (estimated locally),0.33 per call) 
   Indirect call(490477672 (estimated locally),0.46 per call) 
Csm_Initialized/0 (Csm_Initialized) @06c79900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Csm_KeyGenerate/13 (read)Csm_MacGenerate/15 (read)Csm_CallbackNotification/1 (read)Csm_CancelJob/2 (read)Csm_KeySetValid/14 (read)Csm_RandomSeed/17 (read)Csm_CertificateParse/3 (read)Csm_CertificateVerify/4 (read)Csm_Init/5 (write)Csm_KeyCopy/6 (read)Csm_KeyDerive/7 (read)Csm_KeyElementCopy/8 (read)Csm_KeyElementGet/9 (read)Csm_KeyElementSet/10 (read)Csm_KeyExchangeCalcPubVal/11 (read)Csm_KeyExchangeCalcSecret/12 (read)Csm_MacVerify/16 (read)
  Availability: available
  Varpool flags: initialized

;; Function Csm_CallbackNotification (Csm_CallbackNotification, funcdef_no=0, decl_uid=5728, cgraph_uid=1, symbol_order=1)

Modification phase of node Csm_CallbackNotification/1
Csm_CallbackNotification (const struct Crypto_JobType * job, Std_ReturnType result)
{
  unsigned char Csm_Initialized.0_1;
  long unsigned int _2;
  void (*<T5b5>) (Crypto_ResultType) _3;
  void (*<T5af>) (void) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Csm_Initialized.0_1 = Csm_Initialized;
  if (Csm_Initialized.0_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 112, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (job_7(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 112, 1);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  _2 = job_7(D)->jobId;
  _3 = Csm_JobExtraCnfg[_2].csmSWCCallback;
  if (_3 != 0B)
    goto <bb 7>; [82.57%]
  else
    goto <bb 8>; [17.43%]

  <bb 7> [local count: 490477672]:
  # DEBUG BEGIN_STMT
  Csm_JobExtraData[_2].callbackSWCResult = result_8(D);
  # DEBUG BEGIN_STMT
  _4 = Csm_JobExtraCnfg[_2].internalTrigger;
  _4 ();
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 103536706]:
  # DEBUG BEGIN_STMT
  Csm_Int_CallbackNotification (job_7(D), result_8(D));

  <bb 9> [local count: 1073741824]:
  return;

}



;; Function Csm_CancelJob (Csm_CancelJob, funcdef_no=1, decl_uid=5731, cgraph_uid=2, symbol_order=2)

Modification phase of node Csm_CancelJob/2
Csm_CancelJob (uint32 job, Crypto_OperationModeType mode)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.1_1;
  unsigned char _2;
  const struct Crypto_JobPrimitiveInfoType * _3;
  unsigned char _4;
  unsigned char _5;
  struct Csm_QueueType * _6;
  struct Crypto_JobType * _7;
  struct Csm_QueueType * _8;
  long unsigned int _9;
  struct Crypto_JobType * _10;
  unsigned char _11;
  void (*<T5b5>) (Crypto_ResultType) _12;
  struct Csm_QueueType * _13;
  long unsigned int _14;
  struct Crypto_JobType * _15;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.1_1 = Csm_Initialized;
  if (Csm_Initialized.1_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 111, 5);
  goto <bb 20>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (job_24(D) > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 424450142]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 111, 4);
  goto <bb 20>; [100.00%]

  <bb 6> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  # DEBUG run => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = Csm_JobExtraData[job_24(D)].csmLockFlag;
  if (_2 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 147478439]:
  # DEBUG run => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 20>; [100.00%]

  <bb 8> [local count: 147478439]:
  # DEBUG BEGIN_STMT
  Csm_JobExtraData[job_24(D)].csmLockFlag = 1;
  # DEBUG BEGIN_STMT
  # DEBUG run => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Csm_JobConfigurations[job_24(D)].jobPrimitiveInfo;
  _4 = _3->processingType;
  if (_4 == 0)
    goto <bb 9>; [67.00%]
  else
    goto <bb 18>; [33.00%]

  <bb 9> [local count: 98810554]:
  # DEBUG BEGIN_STMT
  _5 = Csm_JobExtraData[job_24(D)].csmQueueLevel;
  if (_5 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 19999256]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _6 = Csm_JobExtraCnfg[job_24(D)].csmQueue;
  _7 = &Csm_JobConfigurations[job_24(D)];
  result_34 = Csm_QueueDelJob (_6, _7);
  # DEBUG result => result_34
  # DEBUG BEGIN_STMT
  SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 78811298]:
  # DEBUG BEGIN_STMT
  if (_5 == 2)
    goto <bb 12>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 12> [local count: 15951407]:
  # DEBUG BEGIN_STMT
  _8 = Csm_JobExtraCnfg[job_24(D)].csmQueue;
  _9 = _8->cryIfChannelId;
  _10 = &Csm_JobConfigurations[job_24(D)];
  result_31 = CryIf_CancelJob (_9, _10);
  # DEBUG result => result_31

  <bb 13> [local count: 35950663]:
  # result_16 = PHI <result_34(10), result_31(12)>
  # DEBUG result => result_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (result_16 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 14> [local count: 17975332]:
  # DEBUG BEGIN_STMT
  _11 = Csm_JobExtraData[job_24(D)].csmQueueLevel;
  if (_11 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 15> [local count: 6111613]:
  _12 = Csm_JobExtraCnfg[job_24(D)].csmSWCCallback;
  if (_12 != 0B)
    goto <bb 16>; [70.00%]
  else
    goto <bb 17>; [30.00%]

  <bb 16> [local count: 4278129]:
  # DEBUG BEGIN_STMT
  _12 (12);

  <bb 17> [local count: 17975332]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Csm_JobExtraData[job_24(D)].csmQueueLevel = 0;
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 48667885]:
  # DEBUG BEGIN_STMT
  _13 = Csm_JobExtraCnfg[job_24(D)].csmQueue;
  _14 = _13->cryIfChannelId;
  _15 = &Csm_JobConfigurations[job_24(D)];
  result_29 = CryIf_CancelJob (_14, _15);
  # DEBUG result => result_29

  <bb 19> [local count: 147478440]:
  # result_17 = PHI <0(17), result_29(18), result_16(13), 1(11)>
  # DEBUG result => result_17
  # DEBUG BEGIN_STMT
  SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Csm_JobExtraData[job_24(D)].csmLockFlag = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();

  <bb 20> [local count: 1073741824]:
  # result_18 = PHI <1(3), 1(5), result_17(19), 1(7)>
  # DEBUG result => result_18
  # DEBUG BEGIN_STMT
  return result_18;

}



;; Function Csm_CertificateParse (Csm_CertificateParse, funcdef_no=2, decl_uid=5733, cgraph_uid=3, symbol_order=3)

Modification phase of node Csm_CertificateParse/3
Csm_CertificateParse (uint32 keyId)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.2_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.2_1 = Csm_Initialized;
  if (Csm_Initialized.2_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 110, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_6(D) > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 110, 4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_6(D)];
  result_8 = CryIf_CertificateParse (_2);
  # DEBUG result => result_8

  <bb 7> [local count: 1073741824]:
  # result_3 = PHI <1(3), 1(5), result_8(6)>
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function Csm_CertificateVerify (Csm_CertificateVerify, funcdef_no=3, decl_uid=5737, cgraph_uid=4, symbol_order=4)

Modification phase of node Csm_CertificateVerify/4
Csm_CertificateVerify (uint32 keyId, uint32 verifyCryIfKeyId, Crypto_VerifyResultType * verifyPtr)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.3_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.3_1 = Csm_Initialized;
  if (Csm_Initialized.3_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 116, 5);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_7(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 116, 4);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (verifyCryIfKeyId_8(D) > 1)
    goto <bb 7>; [41.48%]
  else
    goto <bb 8>; [58.52%]

  <bb 7> [local count: 174629551]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 116, 4);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 246367438]:
  # DEBUG BEGIN_STMT
  if (verifyPtr_9(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 73910231]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 116, 1);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 172457207]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_7(D)];
  _3 = Csm_Keys[verifyCryIfKeyId_8(D)];
  result_11 = CryIf_CertificateVerify (_2, _3, verifyPtr_9(D));
  # DEBUG result => result_11

  <bb 11> [local count: 1073741824]:
  # result_4 = PHI <1(3), 1(5), 1(7), 1(9), result_11(10)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function Csm_Init (Csm_Init, funcdef_no=4, decl_uid=5739, cgraph_uid=5, symbol_order=5)

Modification phase of node Csm_Init/5
Csm_Init ()
{
  uint32 j;
  uint32 i;
  struct Csm_QueueType * _1;
  struct Csm_QueueElementType * _2;
  long unsigned int _3;
  struct Csm_QueueElementType * _4;
  long unsigned int _5;

  <bb 2> [local count: 59046942]:
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobState = 0;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].cryptoKeyId = 4294967295;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.inputPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.inputLength = 0;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.secondaryInputPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.secondaryInputLength = 0;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.tertiaryInputPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.tertiaryInputLength = 0;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.outputPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.outputLengthPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.secondaryOutputPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.secondaryOutputLengthPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.verifyPtr = 0B;
  # DEBUG BEGIN_STMT
  Csm_JobConfigurations[i_6].jobPrimitiveInputOutput.mode = 7;
  # DEBUG BEGIN_STMT
  _1 = Csm_JobExtraCnfg[i_6].csmQueue;
  _1->lockMainQueueDelJob = 0;
  # DEBUG BEGIN_STMT
  _1->lockMainProcessJob = 0;
  # DEBUG BEGIN_STMT
  _1->currentSize = 0;
  # DEBUG BEGIN_STMT
  _1->head = 0B;
  # DEBUG BEGIN_STMT
  # DEBUG j => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = _1->data;
  _3 = j_7 * 8;
  _4 = _2 + _3;
  _4->job = 0B;
  # DEBUG BEGIN_STMT
  _4->next = 0B;
  # DEBUG BEGIN_STMT
  j_34 = j_7 + 1;
  # DEBUG j => j_34

  <bb 5> [local count: 1073741824]:
  # j_7 = PHI <0(3), j_34(4)>
  # DEBUG j => j_7
  # DEBUG BEGIN_STMT
  _5 = _1->maxSize;
  if (_5 > j_7)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  Csm_JobExtraData[i_6].csmQueueLevel = 0;
  # DEBUG BEGIN_STMT
  i_31 = i_6 + 1;
  # DEBUG i => i_31

  <bb 7> [local count: 177158543]:
  # i_6 = PHI <0(2), i_31(6)>
  # DEBUG i => i_6
  # DEBUG BEGIN_STMT
  if (i_6 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 8>; [33.33%]

  <bb 8> [local count: 59046942]:
  # DEBUG BEGIN_STMT
  Csm_Initialized = 1;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Csm_KeyCopy (Csm_KeyCopy, funcdef_no=5, decl_uid=5742, cgraph_uid=6, symbol_order=6)

Modification phase of node Csm_KeyCopy/6
Csm_KeyCopy (uint32 keyId, uint32 targetKeyId)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.5_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.5_1 = Csm_Initialized;
  if (Csm_Initialized.5_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 115, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_7(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 115, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (targetKeyId_8(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 248388223]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 115, 4);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 172608766]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_7(D)];
  _3 = Csm_Keys[targetKeyId_8(D)];
  result_10 = CryIf_KeyCopy (_2, _3);
  # DEBUG result => result_10

  <bb 9> [local count: 1073741824]:
  # result_4 = PHI <1(3), 1(5), 1(7), result_10(8)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function Csm_KeyDerive (Csm_KeyDerive, funcdef_no=6, decl_uid=5745, cgraph_uid=7, symbol_order=7)

Modification phase of node Csm_KeyDerive/7
Csm_KeyDerive (uint32 keyId, uint32 targetKeyId)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.6_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.6_1 = Csm_Initialized;
  if (Csm_Initialized.6_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 107, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_7(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 107, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (targetKeyId_8(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 248388223]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 107, 4);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 172608766]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_7(D)];
  _3 = Csm_Keys[targetKeyId_8(D)];
  result_10 = CryIf_KeyDerive (_2, _3);
  # DEBUG result => result_10

  <bb 9> [local count: 1073741824]:
  # result_4 = PHI <1(3), 1(5), 1(7), result_10(8)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function Csm_KeyElementCopy (Csm_KeyElementCopy, funcdef_no=7, decl_uid=5750, cgraph_uid=8, symbol_order=8)

Modification phase of node Csm_KeyElementCopy/8
Csm_KeyElementCopy (uint32 keyId, uint32 keyElementId, uint32 targetKeyId, uint32 targetKeyElementId)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.7_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.7_1 = Csm_Initialized;
  if (Csm_Initialized.7_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 113, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_7(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 113, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (targetKeyId_8(D) > 1)
    goto <bb 7>; [59.00%]
  else
    goto <bb 8>; [41.00%]

  <bb 7> [local count: 248388223]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 113, 4);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 172608766]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_7(D)];
  _3 = Csm_Keys[targetKeyId_8(D)];
  result_12 = CryIf_KeyElementCopy (_2, keyElementId_9(D), _3, targetKeyElementId_10(D));
  # DEBUG result => result_12

  <bb 9> [local count: 1073741824]:
  # result_4 = PHI <1(3), 1(5), 1(7), result_12(8)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function Csm_KeyElementGet (Csm_KeyElementGet, funcdef_no=8, decl_uid=5755, cgraph_uid=9, symbol_order=9)

Modification phase of node Csm_KeyElementGet/9
Csm_KeyElementGet (uint32 keyId, uint32 keyElementId, uint8 * keyPtr, uint32 * keyLengthPtr)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.8_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.8_1 = Csm_Initialized;
  if (Csm_Initialized.8_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 104, 5);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_5(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 104, 4);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (keyPtr_6(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 73379775]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 104, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 347617214]:
  # DEBUG BEGIN_STMT
  if (keyLengthPtr_7(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 104285164]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 104, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 243332049]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_5(D)];
  result_10 = CryIf_KeyElementGet (_2, keyElementId_8(D), keyPtr_6(D), keyLengthPtr_7(D));
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  if (result_10 == 3)
    goto <bb 11>; [12.02%]
  else
    goto <bb 12>; [87.98%]

  <bb 11> [local count: 29248512]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 104, 3);

  <bb 12> [local count: 1073741824]:
  # result_16 = PHI <result_10(10), 3(11), 1(3), 1(9), 1(7), 1(5)>
  # DEBUG BEGIN_STMT
  return result_16;

}



;; Function Csm_KeyElementSet (Csm_KeyElementSet, funcdef_no=9, decl_uid=5760, cgraph_uid=10, symbol_order=10)

Modification phase of node Csm_KeyElementSet/10
Csm_KeyElementSet (uint32 keyId, uint32 keyElementId, const uint8 * keyPtr, uint32 keyLength)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.9_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.9_1 = Csm_Initialized;
  if (Csm_Initialized.9_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 120, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_6(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 120, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (keyPtr_7(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 126299097]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 120, 1);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 294697892]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_6(D)];
  result_11 = CryIf_KeyElementSet (_2, keyElementId_8(D), keyPtr_7(D), keyLength_9(D));
  # DEBUG result => result_11

  <bb 9> [local count: 1073741824]:
  # result_3 = PHI <1(3), 1(5), 1(7), result_11(8)>
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function Csm_KeyExchangeCalcPubVal (Csm_KeyExchangeCalcPubVal, funcdef_no=10, decl_uid=5764, cgraph_uid=11, symbol_order=11)

Modification phase of node Csm_KeyExchangeCalcPubVal/11
Csm_KeyExchangeCalcPubVal (uint32 keyId, uint8 * publicValuePtr, uint32 * publicValueLengthPtr)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.10_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.10_1 = Csm_Initialized;
  if (Csm_Initialized.10_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 108, 5);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_5(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 108, 4);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (publicValuePtr_6(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 73379775]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 108, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 347617214]:
  # DEBUG BEGIN_STMT
  if (publicValueLengthPtr_7(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 104285164]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 108, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 243332049]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_5(D)];
  result_9 = CryIf_KeyExchangeCalcPubVal (_2, publicValuePtr_6(D), publicValueLengthPtr_7(D));
  # DEBUG result => result_9
  # DEBUG BEGIN_STMT
  if (result_9 == 3)
    goto <bb 11>; [12.02%]
  else
    goto <bb 12>; [87.98%]

  <bb 11> [local count: 29248512]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 108, 3);

  <bb 12> [local count: 1073741824]:
  # result_15 = PHI <result_9(10), 3(11), 1(3), 1(9), 1(7), 1(5)>
  # DEBUG BEGIN_STMT
  return result_15;

}



;; Function Csm_KeyExchangeCalcSecret (Csm_KeyExchangeCalcSecret, funcdef_no=11, decl_uid=5768, cgraph_uid=12, symbol_order=12)

Modification phase of node Csm_KeyExchangeCalcSecret/12
Csm_KeyExchangeCalcSecret (uint32 keyId, const uint8 * partnerPublicValuePtr, uint32 partnerPublicValueLength)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.11_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.11_1 = Csm_Initialized;
  if (Csm_Initialized.11_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 109, 5);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_5(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 109, 4);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (partnerPublicValuePtr_6(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 126299097]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 109, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 294697892]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_5(D)];
  result_9 = CryIf_KeyExchangeCalcSecret (_2, partnerPublicValuePtr_6(D), partnerPublicValueLength_7(D));
  # DEBUG result => result_9
  # DEBUG BEGIN_STMT
  if (result_9 == 3)
    goto <bb 9>; [12.02%]
  else
    goto <bb 10>; [87.98%]

  <bb 9> [local count: 35422687]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 109, 3);

  <bb 10> [local count: 1073741824]:
  # result_14 = PHI <result_9(8), 3(9), 1(3), 1(7), 1(5)>
  # DEBUG BEGIN_STMT
  return result_14;

}



;; Function Csm_KeyGenerate (Csm_KeyGenerate, funcdef_no=12, decl_uid=5770, cgraph_uid=13, symbol_order=13)

Modification phase of node Csm_KeyGenerate/13
Csm_KeyGenerate (uint32 keyId)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.12_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.12_1 = Csm_Initialized;
  if (Csm_Initialized.12_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 106, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_6(D) > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 106, 4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_6(D)];
  result_8 = CryIf_KeyGenerate (_2);
  # DEBUG result => result_8

  <bb 7> [local count: 1073741824]:
  # result_3 = PHI <1(3), 1(5), result_8(6)>
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function Csm_KeySetValid (Csm_KeySetValid, funcdef_no=13, decl_uid=5772, cgraph_uid=14, symbol_order=14)

Modification phase of node Csm_KeySetValid/14
Csm_KeySetValid (uint32 keyId)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.13_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.13_1 = Csm_Initialized;
  if (Csm_Initialized.13_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 103, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_6(D) > 1)
    goto <bb 5>; [59.00%]
  else
    goto <bb 6>; [41.00%]

  <bb 5> [local count: 424450143]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 103, 4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 294956879]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_6(D)];
  result_8 = CryIf_KeySetValid (_2);
  # DEBUG result => result_8

  <bb 7> [local count: 1073741824]:
  # result_3 = PHI <1(3), 1(5), result_8(6)>
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function Csm_RandomSeed (Csm_RandomSeed, funcdef_no=16, decl_uid=5791, cgraph_uid=17, symbol_order=17)

Modification phase of node Csm_RandomSeed/17
Csm_RandomSeed (uint32 keyId, const uint8 * seedPtr, uint32 seedLength)
{
  Std_ReturnType result;
  unsigned char Csm_Initialized.16_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  Csm_Initialized.16_1 = Csm_Initialized;
  if (Csm_Initialized.16_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 105, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (keyId_6(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 105, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  if (seedPtr_7(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 126299097]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 105, 1);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 294697892]:
  # DEBUG BEGIN_STMT
  _2 = Csm_Keys[keyId_6(D)];
  result_10 = CryIf_RandomSeed (_2, seedPtr_7(D), seedLength_8(D));
  # DEBUG result => result_10

  <bb 9> [local count: 1073741824]:
  # result_3 = PHI <1(3), 1(5), 1(7), result_10(8)>
  # DEBUG result => result_3
  # DEBUG BEGIN_STMT
  return result_3;

}



;; Function Csm_Process (Csm_Process, funcdef_no=17, decl_uid=6158, cgraph_uid=18, symbol_order=18)

Modification phase of node Csm_Process/18
Csm_Process (uint32 jobId, struct Crypto_JobPrimitiveInputOutputType * jobPrimitiveInputOutput)
{
  Std_ReturnType result;
  unsigned char _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  # DEBUG run => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = Csm_JobExtraData[jobId_7(D)].csmLockFlag;
  if (_1 == 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 3>; [35.00%]

  <bb 3> [local count: 375809638]:
  # DEBUG run => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Csm_SCHM_CSM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 697932183]:
  result_9 = Csm_Process.part.0 (jobId_7(D), jobPrimitiveInputOutput_8(D));

  <bb 5> [local count: 1073741824]:
  # result_4 = PHI <result_9(4), 2(3)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function Csm_MacGenerate (Csm_MacGenerate, funcdef_no=14, decl_uid=5779, cgraph_uid=15, symbol_order=15)

Modification phase of node Csm_MacGenerate/15
Csm_MacGenerate (uint32 jobId, Crypto_OperationModeType mode, const uint8 * dataPtr, uint32 dataLength, uint8 * macPtr, uint32 * macLengthPtr)
{
  struct Crypto_JobPrimitiveInputOutputType jobPrimitiveInputOutput;
  Std_ReturnType result;
  unsigned char Csm_Initialized.14_1;
  const struct Crypto_JobPrimitiveInfoType * _2;
  const struct Crypto_PrimitiveInfoType * _3;
  unsigned char _4;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput = {};
  jobPrimitiveInputOutput.mode = 7;
  # DEBUG BEGIN_STMT
  Csm_Initialized.14_1 = Csm_Initialized;
  if (Csm_Initialized.14_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 5);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (jobId_10(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 4);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 6> [local count: 420996989]:
  # DEBUG BEGIN_STMT
  _2 = Csm_JobConfigurations[jobId_10(D)].jobPrimitiveInfo;
  _3 = _2->primitiveInfo;
  _4 = _3->service;
  if (_4 != 1)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 205783328]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 225);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 8> [local count: 215213661]:
  # DEBUG BEGIN_STMT
  if (dataPtr_11(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 37511741]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 10> [local count: 177701920]:
  # DEBUG BEGIN_STMT
  if (macPtr_12(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 30973445]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 12> [local count: 146728475]:
  # DEBUG BEGIN_STMT
  if (macLengthPtr_13(D) == 0B)
    goto <bb 13>; [17.43%]
  else
    goto <bb 14>; [82.57%]

  <bb 13> [local count: 25574773]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 1);
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  goto <bb 19>; [100.00%]

  <bb 14> [local count: 121153702]:
  # DEBUG BEGIN_STMT
  _6 = mode_14(D) & 7;
  if (_6 == 5)
    goto <bb 19>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 79961443]:
  if (_6 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 39980722]:
  if (mode_14(D) > 7)
    goto <bb 19>; [67.00%]
  else
    goto <bb 17>; [33.00%]

  <bb 17> [local count: 13193638]:
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.mode = mode_14(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.inputPtr = dataPtr_11(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.inputLength = dataLength_17(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.outputPtr = macPtr_12(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.outputLengthPtr = macLengthPtr_13(D);
  # DEBUG BEGIN_STMT
  result_22 = Csm_Process (jobId_10(D), &jobPrimitiveInputOutput);
  # DEBUG result => result_22
  # DEBUG BEGIN_STMT
  if (result_22 == 3)
    goto <bb 18>; [12.02%]
  else
    goto <bb 19>; [87.98%]

  <bb 18> [local count: 1585875]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 96, 3);

  <bb 19> [local count: 1073741824]:
  # result_31 = PHI <result_22(17), 3(18), 1(3), 1(16), 1(14), 1(15), 1(13), 1(11), 1(9), 1(7), 1(5)>
  # DEBUG result => NULL
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput ={v} {CLOBBER};
  return result_31;

}



;; Function Csm_MacVerify (Csm_MacVerify, funcdef_no=15, decl_uid=5787, cgraph_uid=16, symbol_order=16)

Modification phase of node Csm_MacVerify/16
Csm_MacVerify (uint32 jobId, Crypto_OperationModeType mode, const uint8 * dataPtr, uint32 dataLength, const uint8 * macPtr, uint32 macLength, Crypto_VerifyResultType * verifyPtr)
{
  struct Crypto_JobPrimitiveInputOutputType jobPrimitiveInputOutput;
  Std_ReturnType result;
  unsigned char Csm_Initialized.15_1;
  const struct Crypto_JobPrimitiveInfoType * _2;
  const struct Crypto_PrimitiveInfoType * _3;
  unsigned char _4;
  unsigned char _7;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput = {};
  jobPrimitiveInputOutput.mode = 7;
  # DEBUG BEGIN_STMT
  Csm_Initialized.15_1 = Csm_Initialized;
  if (Csm_Initialized.15_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 97, 5);
  goto <bb 18>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (jobId_11(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 298410032]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 97, 4);
  goto <bb 18>; [100.00%]

  <bb 6> [local count: 420996988]:
  # DEBUG BEGIN_STMT
  _2 = Csm_JobConfigurations[jobId_11(D)].jobPrimitiveInfo;
  _3 = _2->primitiveInfo;
  _4 = _3->service;
  if (_4 != 2)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 205783328]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 97, 225);
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 215213660]:
  # DEBUG BEGIN_STMT
  if (dataPtr_12(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 37511741]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 97, 1);
  goto <bb 18>; [100.00%]

  <bb 10> [local count: 177701920]:
  # DEBUG BEGIN_STMT
  if (macPtr_13(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 30973445]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 97, 1);
  goto <bb 18>; [100.00%]

  <bb 12> [local count: 146728475]:
  # DEBUG BEGIN_STMT
  if (verifyPtr_14(D) == 0B)
    goto <bb 13>; [17.43%]
  else
    goto <bb 14>; [82.57%]

  <bb 13> [local count: 25574773]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (110, 0, 97, 1);
  goto <bb 18>; [100.00%]

  <bb 14> [local count: 121153702]:
  # DEBUG BEGIN_STMT
  _7 = mode_15(D) & 7;
  if (_7 == 5)
    goto <bb 18>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 79961443]:
  if (_7 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 39980722]:
  if (mode_15(D) > 7)
    goto <bb 18>; [67.00%]
  else
    goto <bb 17>; [33.00%]

  <bb 17> [local count: 13193638]:
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.mode = mode_15(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.inputPtr = dataPtr_12(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.inputLength = dataLength_18(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.secondaryInputPtr = macPtr_13(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.secondaryInputLength = macLength_21(D);
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput.verifyPtr = verifyPtr_14(D);
  # DEBUG BEGIN_STMT
  result_25 = Csm_Process (jobId_11(D), &jobPrimitiveInputOutput);
  # DEBUG result => result_25

  <bb 18> [local count: 1073741824]:
  # result_5 = PHI <1(3), 1(5), 1(7), 1(9), 1(11), 1(13), 1(15), result_25(17), 1(14), 1(16)>
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  jobPrimitiveInputOutput ={v} {CLOBBER};
  return result_5;

}


