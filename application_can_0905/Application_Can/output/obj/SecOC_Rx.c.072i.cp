
IPA constant propagation start:
Determining dynamic type for call: SecOC_Rx_ShiftLeft (_27, _34, _47);
  Starting walk at: SecOC_Rx_ShiftLeft (_27, _34, _47);
  instance pointer: _27  Outer instance pointer: _27 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_13, _20, _26);
Determining dynamic type for call: SecOC_Rx_RenewStatusOverride (instId_25(D), &passPdu);
  Starting walk at: SecOC_Rx_RenewStatusOverride (instId_25(D), &passPdu);
  instance pointer: &passPdu  Outer instance pointer: passPdu offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SecOC_Rx_ResetSm.isra.0/34:
    callsite  SecOC_Rx_ResetSm.isra.0/34 -> SecOC_Rx_CheckStatusOverridePostVerify/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  TS_MemCpy32/32:
  Jump functions of caller  Csm_MacVerify/31:
  Jump functions of caller  PduR_SecOCRxIndication/30:
  Jump functions of caller  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29:
  Jump functions of caller  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28:
  Jump functions of caller  SecOC_Rx_Get_Freshness/27:
  Jump functions of caller  SecOC_Rx_ShiftLeft/21:
  Jump functions of caller  SecOC_Rx_CheckStatusOverridePostVerify/20:
  Jump functions of caller  SecOC_Rx_RenewStatusOverride/19:
  Jump functions of caller  SecOC_Rx_CheckStatusOverridePreVerify/18:
  Jump functions of caller  SecOC_Rx_CheckFreshnessFuncResult/17:
    callsite  SecOC_Rx_CheckFreshnessFuncResult/17 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  SecOC_Rx_CheckFreshnessFuncResult/17 -> SecOC_Rx_ShiftLeft/21 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1ffff
         VR  [1, 65542]
       param 2: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 7]
    callsite  SecOC_Rx_CheckFreshnessFuncResult/17 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_ExtractAuthenticDataLen/16:
  Jump functions of caller  SecOC_Rx_CheckSecPduContent/15:
  Jump functions of caller  SecOC_Rx_PrepareSecuredPdu/13:
  Jump functions of caller  SecOC_Rx_CheckForCsmRetry/12:
    callsite  SecOC_Rx_CheckForCsmRetry/12 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_StateRetryToObtainFreshness/10:
    callsite  SecOC_Rx_StateRetryToObtainFreshness/10 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  SecOC_Rx_StateRetryToObtainFreshness/10 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  SecOC_Rx_StateRetryToObtainFreshness/10 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_StateBroadcastPdu/9:
    callsite  SecOC_Rx_StateBroadcastPdu/9 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  SecOC_Rx_StateBroadcastPdu/9 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_StateCheckVerificationResult/8:
    callsite  SecOC_Rx_StateCheckVerificationResult/8 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  SecOC_Rx_StateCheckVerificationResult/8 -> SecOC_Rx_RenewStatusOverride/19 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  SecOC_Rx_StateCheckVerificationResult/8 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_StateVerification/7:
    callsite  SecOC_Rx_StateVerification/7 -> SecOC_Rx_CheckForCsmRetry/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Rx_StateVerification/7 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_StateConstructDataToAuthenticator/6:
    callsite  SecOC_Rx_StateConstructDataToAuthenticator/6 -> SecOC_Rx_CheckFreshnessFuncResult/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  SecOC_Rx_StateConstructDataToAuthenticator/6 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  SecOC_Rx_StateIdle/5:
    callsite  SecOC_Rx_StateIdle/5 -> SecOC_Rx_ResetSm.isra.0/34 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  SecOC_Rx_StateIdle/5 -> SecOC_Rx_CheckStatusOverridePreVerify/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Rx_StateIdle/5 -> SecOC_Rx_ExtractAuthenticDataLen/16 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Rx_StateIdle/5 -> SecOC_Rx_PrepareSecuredPdu/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Rx_StateIdle/5 -> SecOC_Rx_CheckSecPduContent/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Rx_VerifyStatusOverride_43/4:
  Jump functions of caller  SecOC_Rx_ProcessPduStates/3:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (pduIdx_8(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Rx_DeInit/2:
  Jump functions of caller  SecOC_Rx_Init/1:

 Propagating constants:

Not considering SecOC_Rx_StateRetryToObtainFreshness for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_StateBroadcastPdu for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_StateCheckVerificationResult for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_StateVerification for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_StateConstructDataToAuthenticator for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_StateIdle for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_VerifyStatusOverride_43 for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_ProcessPduStates for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_DeInit for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Rx_Init for cloning; -fipa-cp-clone disabled.

overall_size: 634, max_new_size: 11001
 - context independent values, size: 25, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: SecOC_Rx_ResetSm.isra.0/34:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 3, loc_size: 18, prop_time: 0, prop_size: 0]
               0 [loc_time: 3, loc_size: 18, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         boolean [0, 1]
        AGGS VARIABLE
  Node: SecOC_Rx_ShiftLeft/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1ffff
         uint32 [1, 65542]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x7
         uint8 [0, 7]
        AGGS VARIABLE
  Node: SecOC_Rx_CheckStatusOverridePostVerify/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Rx_RenewStatusOverride/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
  Node: SecOC_Rx_CheckStatusOverridePreVerify/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Rx_CheckFreshnessFuncResult/17:
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
  Node: SecOC_Rx_ExtractAuthenticDataLen/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Rx_CheckSecPduContent/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Rx_PrepareSecuredPdu/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Rx_CheckForCsmRetry/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Rx_StateRetryToObtainFreshness/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_StateBroadcastPdu/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_StateCheckVerificationResult/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_StateVerification/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_StateConstructDataToAuthenticator/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_StateIdle/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_VerifyStatusOverride_43/4:
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
  Node: SecOC_Rx_ProcessPduStates/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Rx_DeInit/2:
  Node: SecOC_Rx_Init/1:

IPA decision stage:

Propagated bits info for function SecOC_Rx_ResetSm.isra.0/34:
 param 1: value = 0x0, mask = 0x1
Propagated bits info for function SecOC_Rx_ShiftLeft/21:
 param 1: value = 0x0, mask = 0x1ffff
 param 2: value = 0x0, mask = 0x7

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SecOC_Rx_ResetSm.isra.0/34 (SecOC_Rx_ResetSm.isra.0) @06d90380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateIdle/5 (71717364 (estimated locally),0.07 per call) SecOC_Rx_StateConstructDataToAuthenticator/6 (52895545 (estimated locally),0.07 per call) SecOC_Rx_CheckFreshnessFuncResult/17 (233860969 (estimated locally),0.22 per call) SecOC_Rx_CheckFreshnessFuncResult/17 (120473833 (estimated locally),0.11 per call) SecOC_Rx_StateVerification/7 (73890617 (estimated locally),0.07 per call) SecOC_Rx_StateBroadcastPdu/9 (962645108 (estimated locally),0.90 per call) SecOC_Rx_StateBroadcastPdu/9 (111096716 (estimated locally),0.10 per call) SecOC_Rx_StateCheckVerificationResult/8 (584738982 (estimated locally),0.54 per call) SecOC_Rx_StateCheckVerificationResult/8 (73890617 (estimated locally),0.07 per call) SecOC_Rx_CheckForCsmRetry/12 (354334802 (estimated locally),0.33 per call) SecOC_Rx_StateRetryToObtainFreshness/10 (292930407 (estimated locally),0.27 per call) SecOC_Rx_StateRetryToObtainFreshness/10 (37020491 (estimated locally),0.03 per call) SecOC_Rx_StateRetryToObtainFreshness/10 (73890617 (estimated locally),0.07 per call) 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_CheckStatusOverridePostVerify/20 (217325345 (estimated locally),0.20 per call) 
SecOC_InitStatus/33 (SecOC_InitStatus) @06d6f288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Rx_VerifyStatusOverride_43/4 (read)
  Availability: not_available
  Varpool flags:
TS_MemCpy32/32 (TS_MemCpy32) @06d2d8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_PrepareSecuredPdu/13 (217325345 (estimated locally),0.20 per call) SecOC_Rx_StateConstructDataToAuthenticator/6 (357878150 (estimated locally),0.47 per call) SecOC_Rx_CheckFreshnessFuncResult/17 (474808635 (estimated locally),0.44 per call) 
  Calls: 
Csm_MacVerify/31 (Csm_MacVerify) @06d2d460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_StateVerification/7 (499925603 (estimated locally),0.47 per call) 
  Calls: 
PduR_SecOCRxIndication/30 (PduR_SecOCRxIndication) @06d057e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_StateBroadcastPdu/9 (962645108 (estimated locally),0.90 per call) 
  Calls: 
SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0) @06d05d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_VerifyStatusOverride_43/4 (36945309 (estimated locally),0.03 per call) SecOC_Rx_StateIdle/5 (217325345 (estimated locally),0.20 per call) SecOC_Rx_PrepareSecuredPdu/13 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_ExtractAuthenticDataLen/16 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_RenewStatusOverride/19 (679839637 (estimated locally),2.58 per call) SecOC_Rx_ResetSm.isra.0/34 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_CheckStatusOverridePostVerify/20 (679839637 (estimated locally),1.96 per call) 
  Calls: 
SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0) @06d05c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_VerifyStatusOverride_43/4 (36945309 (estimated locally),0.03 per call) SecOC_Rx_StateIdle/5 (217325345 (estimated locally),0.20 per call) SecOC_Rx_PrepareSecuredPdu/13 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_ExtractAuthenticDataLen/16 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_RenewStatusOverride/19 (679839637 (estimated locally),2.58 per call) SecOC_Rx_ResetSm.isra.0/34 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_CheckStatusOverridePostVerify/20 (679839637 (estimated locally),1.96 per call) 
  Calls: 
SecOC_Rx_Get_Freshness/27 (SecOC_Rx_Get_Freshness) @06d059a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_StateConstructDataToAuthenticator/6 (118099790 (estimated locally),0.15 per call) SecOC_Rx_StateRetryToObtainFreshness/10 (329950898 (estimated locally),0.31 per call) 
  Calls: 
SecOC_RxConfig/26 (SecOC_RxConfig) @06920048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateBroadcastPdu/9 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_CheckForCsmRetry/12 (read)SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_PrepareSecuredPdu/13 (read)
  Availability: not_available
  Varpool flags: read-only
SecOC_PB_IntBuffer/25 (SecOC_PB_IntBuffer) @06cbe750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Rx_Init/1 (addr)SecOC_Rx_Init/1 (addr)
  Availability: not_available
  Varpool flags:
SecOC_PB_PduBuffer/24 (SecOC_PB_PduBuffer) @06cbe708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Rx_Init/1 (addr)SecOC_Rx_Init/1 (addr)
  Availability: not_available
  Varpool flags:
SecOC_ConfigPtr/23 (SecOC_ConfigPtr) @06cbe6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Rx_StateVerification/7 (read)SecOC_Rx_RenewStatusOverride/19 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_CheckStatusOverridePostVerify/20 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_ExtractAuthenticDataLen/16 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_CheckSecPduContent/15 (read)SecOC_Rx_Init/1 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateBroadcastPdu/9 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_VerifyStatusOverride_43/4 (read)
  Availability: not_available
  Varpool flags:
SecOC_RxData/22 (SecOC_RxData) @06cbe678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_PrepareSecuredPdu/13 (read)SecOC_Rx_PrepareSecuredPdu/13 (read)SecOC_Rx_PrepareSecuredPdu/13 (read)SecOC_Rx_PrepareSecuredPdu/13 (read)SecOC_Rx_PrepareSecuredPdu/13 (write)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateIdle/5 (read)SecOC_Rx_StateIdle/5 (write)SecOC_Rx_StateIdle/5 (write)SecOC_Rx_StateIdle/5 (write)SecOC_Rx_StateIdle/5 (write)SecOC_Rx_StateIdle/5 (read)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_DeInit/2 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_CheckStatusOverridePostVerify/20 (read)SecOC_Rx_CheckStatusOverridePostVerify/20 (read)SecOC_Rx_CheckStatusOverridePostVerify/20 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_CheckFreshnessFuncResult/17 (write)SecOC_Rx_RenewStatusOverride/19 (read)SecOC_Rx_RenewStatusOverride/19 (write)SecOC_Rx_ProcessPduStates/3 (read)SecOC_Rx_DeInit/2 (write)SecOC_Rx_CheckStatusOverridePreVerify/18 (read)SecOC_Rx_CheckStatusOverridePreVerify/18 (write)SecOC_Rx_CheckStatusOverridePreVerify/18 (write)SecOC_Rx_DeInit/2 (write)SecOC_Rx_ProcessPduStates/3 (read)SecOC_Rx_CheckSecPduContent/15 (read)SecOC_Rx_RenewStatusOverride/19 (write)SecOC_Rx_StateCheckVerificationResult/8 (write)SecOC_Rx_StateCheckVerificationResult/8 (write)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_DeInit/2 (write)SecOC_Rx_ProcessPduStates/3 (write)SecOC_Rx_VerifyStatusOverride_43/4 (write)SecOC_Rx_VerifyStatusOverride_43/4 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (write)SecOC_Rx_CheckForCsmRetry/12 (write)SecOC_Rx_CheckForCsmRetry/12 (write)SecOC_Rx_CheckForCsmRetry/12 (read)SecOC_Rx_CheckForCsmRetry/12 (write)SecOC_Rx_CheckForCsmRetry/12 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (write)SecOC_Rx_RenewStatusOverride/19 (read)SecOC_Rx_RenewStatusOverride/19 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_ExtractAuthenticDataLen/16 (read)SecOC_Rx_ExtractAuthenticDataLen/16 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (read)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_ResetSm.isra.0/34 (write)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateCheckVerificationResult/8 (write)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateCheckVerificationResult/8 (write)SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateVerification/7 (write)SecOC_Rx_StateVerification/7 (write)SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateVerification/7 (read)SecOC_Rx_StateVerification/7 (addr)SecOC_Rx_DeInit/2 (write)SecOC_Rx_DeInit/2 (write)SecOC_Rx_DeInit/2 (write)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateRetryToObtainFreshness/10 (read)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateCheckVerificationResult/8 (write)SecOC_Rx_StateCheckVerificationResult/8 (write)SecOC_Rx_StateCheckVerificationResult/8 (read)SecOC_Rx_StateBroadcastPdu/9 (read)SecOC_Rx_StateBroadcastPdu/9 (read)SecOC_Rx_StateBroadcastPdu/9 (read)SecOC_Rx_CheckFreshnessFuncResult/17 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_StateConstructDataToAuthenticator/6 (read)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)SecOC_Rx_Init/1 (write)
  Availability: not_available
  Varpool flags:
SecOC_Rx_ShiftLeft/21 (SecOC_Rx_ShiftLeft) @06d051c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_CheckFreshnessFuncResult/17 (156686850 (estimated locally),0.15 per call) 
  Calls: 
SecOC_Rx_CheckStatusOverridePostVerify/20 (SecOC_Rx_CheckStatusOverridePostVerify) @06d05000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:347387058 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_ResetSm.isra.0/34 (217325345 (estimated locally),0.20 per call) 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (679839637 (estimated locally),1.96 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (679839637 (estimated locally),1.96 per call) 
SecOC_Rx_RenewStatusOverride/19 (SecOC_Rx_RenewStatusOverride) @06cd6c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:263172014 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateCheckVerificationResult/8 (329950898 (estimated locally),0.31 per call) 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (679839637 (estimated locally),2.58 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (679839637 (estimated locally),2.58 per call) 
SecOC_Rx_CheckStatusOverridePreVerify/18 (SecOC_Rx_CheckStatusOverridePreVerify) @06cd68c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateIdle/5 (71717364 (estimated locally),0.07 per call) 
  Calls: 
SecOC_Rx_CheckFreshnessFuncResult/17 (SecOC_Rx_CheckFreshnessFuncResult) @06cd6700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxData/22 (write)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateConstructDataToAuthenticator/6 (715756300 (estimated locally),0.93 per call) 
  Calls: SecOC_Rx_ResetSm.isra.0/34 (233860969 (estimated locally),0.22 per call) SecOC_Rx_ShiftLeft/21 (156686850 (estimated locally),0.15 per call) TS_MemCpy32/32 (474808635 (estimated locally),0.44 per call) SecOC_Rx_ResetSm.isra.0/34 (120473833 (estimated locally),0.11 per call) 
SecOC_Rx_ExtractAuthenticDataLen/16 (SecOC_Rx_ExtractAuthenticDataLen) @06cd61c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateIdle/5 (71717364 (estimated locally),0.07 per call) 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (1073741824 (estimated locally),1.00 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (1073741824 (estimated locally),1.00 per call) 
SecOC_Rx_CheckSecPduContent/15 (SecOC_Rx_CheckSecPduContent) @06cd1c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateIdle/5 (217325345 (estimated locally),0.20 per call) 
  Calls: 
SecOC_Rx_PrepareSecuredPdu/13 (SecOC_Rx_PrepareSecuredPdu) @06cd1540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateIdle/5 (71717364 (estimated locally),0.07 per call) 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (1073741824 (estimated locally),1.00 per call) TS_MemCpy32/32 (217325345 (estimated locally),0.20 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (1073741824 (estimated locally),1.00 per call) 
SecOC_Rx_CheckForCsmRetry/12 (SecOC_Rx_CheckForCsmRetry) @06cd1380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Rx_StateVerification/7 (749888406 (estimated locally),0.70 per call) 
  Calls: SecOC_Rx_ResetSm.isra.0/34 (354334802 (estimated locally),0.33 per call) 
SecOC_Rx_StateRetryToObtainFreshness/10 (SecOC_Rx_StateRetryToObtainFreshness) @06cd1000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_RxData/22 (read)SecOC_RxConfig/26 (read)SecOC_ConfigPtr/23 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: SecOC_Rx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_ResetSm.isra.0/34 (292930407 (estimated locally),0.27 per call) SecOC_Rx_ResetSm.isra.0/34 (37020491 (estimated locally),0.03 per call) SecOC_Rx_Get_Freshness/27 (329950898 (estimated locally),0.31 per call) SecOC_Rx_ResetSm.isra.0/34 (73890617 (estimated locally),0.07 per call) 
SecOC_Rx_StateBroadcastPdu/9 (SecOC_Rx_StateBroadcastPdu) @06cc3b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_RxData/22 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)
  Referring: SecOC_Rx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_ResetSm.isra.0/34 (962645108 (estimated locally),0.90 per call) PduR_SecOCRxIndication/30 (962645108 (estimated locally),0.90 per call) SecOC_Rx_ResetSm.isra.0/34 (111096716 (estimated locally),0.10 per call) 
SecOC_Rx_StateCheckVerificationResult/8 (SecOC_Rx_StateCheckVerificationResult) @06cc38c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_RxData/22 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: SecOC_Rx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_ResetSm.isra.0/34 (584738982 (estimated locally),0.54 per call) SecOC_Rx_RenewStatusOverride/19 (329950898 (estimated locally),0.31 per call) SecOC_Rx_ResetSm.isra.0/34 (73890617 (estimated locally),0.07 per call) 
SecOC_Rx_StateVerification/7 (SecOC_Rx_StateVerification) @06cc3620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_RxData/22 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxConfig/26 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (addr)
  Referring: SecOC_Rx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_CheckForCsmRetry/12 (749888406 (estimated locally),0.70 per call) Csm_MacVerify/31 (499925603 (estimated locally),0.47 per call) SecOC_Rx_ResetSm.isra.0/34 (73890617 (estimated locally),0.07 per call) 
SecOC_Rx_StateConstructDataToAuthenticator/6 (SecOC_Rx_StateConstructDataToAuthenticator) @06cc32a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_RxData/22 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_ConfigPtr/23 (read)SecOC_RxConfig/26 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)SecOC_RxData/22 (read)
  Referring: SecOC_Rx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:768651847 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_CheckFreshnessFuncResult/17 (715756300 (estimated locally),0.93 per call) SecOC_Rx_Get_Freshness/27 (118099790 (estimated locally),0.15 per call) TS_MemCpy32/32 (357878150 (estimated locally),0.47 per call) SecOC_Rx_ResetSm.isra.0/34 (52895545 (estimated locally),0.07 per call) 
SecOC_Rx_StateIdle/5 (SecOC_Rx_StateIdle) @06c7ac40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_RxData/22 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (read)
  Referring: SecOC_Rx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_ResetSm.isra.0/34 (71717364 (estimated locally),0.07 per call) SecOC_Rx_CheckStatusOverridePreVerify/18 (71717364 (estimated locally),0.07 per call) SecOC_Rx_ExtractAuthenticDataLen/16 (71717364 (estimated locally),0.07 per call) SecOC_Rx_PrepareSecuredPdu/13 (71717364 (estimated locally),0.07 per call) SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (217325345 (estimated locally),0.20 per call) SecOC_Rx_CheckSecPduContent/15 (217325345 (estimated locally),0.20 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (217325345 (estimated locally),0.20 per call) 
SecOC_Rx_VerifyStatusOverride_43/4 (SecOC_Rx_VerifyStatusOverride_43) @06c7aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/33 (read)SecOC_ConfigPtr/23 (read)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (36945309 (estimated locally),0.03 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/28 (36945309 (estimated locally),0.03 per call) 
SecOC_Rx_ProcessPduStates/3 (SecOC_Rx_ProcessPduStates) @06c7a7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_RxData/22 (write)SecOC_RxData/22 (read)SecOC_Rx_StateMachine/0 (read)SecOC_RxData/22 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),9.09 per call) 
SecOC_Rx_DeInit/2 (SecOC_Rx_DeInit) @06c7a620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_Rx_Init/1 (SecOC_Rx_Init) @06c7a460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_ConfigPtr/23 (read)SecOC_PB_PduBuffer/24 (addr)SecOC_RxData/22 (write)SecOC_PB_PduBuffer/24 (addr)SecOC_RxData/22 (write)SecOC_PB_IntBuffer/25 (addr)SecOC_RxData/22 (write)SecOC_PB_IntBuffer/25 (addr)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)SecOC_RxData/22 (write)
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_Rx_StateMachine/0 (SecOC_Rx_StateMachine) @06bfcdc8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_Rx_StateIdle/5 (addr)SecOC_Rx_StateConstructDataToAuthenticator/6 (addr)SecOC_Rx_StateVerification/7 (addr)SecOC_Rx_StateCheckVerificationResult/8 (addr)SecOC_Rx_StateBroadcastPdu/9 (addr)SecOC_Rx_StateRetryToObtainFreshness/10 (addr)
  Referring: SecOC_Rx_ProcessPduStates/3 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function SecOC_Rx_ResetSm.isra.0 (SecOC_Rx_ResetSm.isra.0, funcdef_no=21, decl_uid=6399, cgraph_uid=28, symbol_order=34)

Modification phase of node SecOC_Rx_ResetSm.isra.0/34
Adjusting mask for param 1 to 0x1
Setting value range of param 1 [0, 1]
SecOC_Rx_ResetSm.isra.0 (uint16 instId, boolean continueExec)
{
  int _2;
  unsigned char _3;

  <bb 8> [local count: 1073741824]:
  # DEBUG notifyUpperLayer s=> notifyUpperLayer

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = (int) instId_1(D);
  SecOC_RxData[_2].State = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].AuthAttempts = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].FVSyncAttempts = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].VerificationResult = 4;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].CsmVerificationResult = 1;
  # DEBUG BEGIN_STMT
  _3 = SecOC_RxData[_2].RenewedVerStatus;
  if (_3 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  SecOC_Rx_CheckStatusOverridePostVerify (instId_1(D));
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].RenewedVerStatus = 0;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (continueExec_4(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].ProcessingVerification = 1;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].ProcessingVerification = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_2].PduInProcess = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function SecOC_Rx_StateRetryToObtainFreshness (SecOC_Rx_StateRetryToObtainFreshness, funcdef_no=9, decl_uid=6075, cgraph_uid=10, symbol_order=10)

Modification phase of node SecOC_Rx_StateRetryToObtainFreshness/10
SecOC_Rx_StateRetryToObtainFreshness (uint16 instId)
{
  uint32 freshnessValueLength;
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  unsigned char _3;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.10_4;
  long unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  sizetype _8;
  const struct SecOC_RxPduConfigType * _9;
  unsigned char _10;
  long unsigned int _11;
  unsigned char _12;
  short unsigned int _13;
  uint8 * _14;
  short unsigned int _15;
  sizetype _16;
  uint8 * _17;
  unsigned char _18;
  long unsigned int _19;
  short unsigned int _20;
  short unsigned int _21;
  uint8 * _22;
  short unsigned int _23;
  short unsigned int _24;
  short unsigned int _26;
  short unsigned int _27;
  short unsigned int _28;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_31(D);
  _2 = SecOC_RxData[_1].PduREvent;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = SecOC_RxConfig[_1].ReceptionStrategy;
  if (_3 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_31(D), 1);
  goto <bb 14>; [100.00%]

  <bb 5> [local count: 999851208]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.10_4 = SecOC_ConfigPtr;
  _5 = SecOC_ConfigPtr.10_4->RxPduConfigPtr;
  _6 = (unsigned int) instId_31(D);
  _7 = _6 * 32;
  _8 = _5 + _7;
  _9 = SecOC_ConfigPtr.10_4 + _8;
  _10 = _9->FreshnessValueLength;
  _11 = (long unsigned int) _10;
  freshnessValueLength = _11;
  # DEBUG BEGIN_STMT
  _12 = SecOC_RxConfig[_1].GetRxFreshnessFuncType;
  if (_12 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 6> [local count: 329950898]:
<L3>:
  # DEBUG BEGIN_STMT
  _13 = _9->FreshnessValueId;
  _14 = SecOC_RxData[_1].SecuredPdu.SduDataPtr;
  _15 = SecOC_RxData[_1].DataLength;
  _16 = (sizetype) _15;
  _17 = _14 + _16;
  _18 = _9->FreshnessValueTxLength;
  _19 = (long unsigned int) _18;
  _20 = SecOC_RxData[_1].FVSyncAttempts;
  _21 = _20 + 1;
  _22 = SecOC_RxData[_1].FreshnessVerifyValue;
  retVal_36 = SecOC_Rx_Get_Freshness (instId_31(D), _13, _17, _19, _21, _22, &freshnessValueLength);
  # DEBUG retVal => retVal_36
  # DEBUG BEGIN_STMT
  # DEBUG retVal => retVal_36
  # DEBUG BEGIN_STMT
  if (retVal_36 == 2)
    goto <bb 7>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 7> [local count: 112183305]:
  # DEBUG BEGIN_STMT
  _23 = SecOC_RxConfig[_1].MaxAuthAttempts;
  _24 = SecOC_RxData[_1].AuthAttempts;
  if (_23 > _24)
    goto <bb 8>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 8> [local count: 75162815]:
  # DEBUG BEGIN_STMT
  _26 = _24 + 1;
  SecOC_RxData[_1].AuthAttempts = _26;
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 37020491]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].VerificationResult = 2;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_31(D), 0);
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 887667902]:
  # retVal_25 = PHI <retVal_36(6), 1(5)>
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  if (retVal_25 == 0)
    goto <bb 11>; [67.00%]
  else
    goto <bb 12>; [33.00%]

  <bb 11> [local count: 594737494]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].State = 2;
  # DEBUG BEGIN_STMT
  _27 = SecOC_RxData[_1].FVSyncAttempts;
  _28 = _27 + 1;
  SecOC_RxData[_1].FVSyncAttempts = _28;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].AuthAttempts = 0;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 292930407]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].VerificationResult = 2;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_31(D), 0);

  <bb 13> [local count: 999851207]:
  freshnessValueLength ={v} {CLOBBER};

  <bb 14> [local count: 1073741824]:
  return;

}



;; Function SecOC_Rx_StateCheckVerificationResult (SecOC_Rx_StateCheckVerificationResult, funcdef_no=7, decl_uid=6071, cgraph_uid=8, symbol_order=8)

Modification phase of node SecOC_Rx_StateCheckVerificationResult/8
SecOC_Rx_StateCheckVerificationResult (uint16 instId)
{
  boolean passPdu;
  int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char passPdu.25_8;
  short unsigned int _9;
  short unsigned int _10;
  unsigned char _11;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.26_12;
  long unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  sizetype _16;
  const struct SecOC_RxPduConfigType * _17;
  unsigned char _18;
  SecOC_VerificationResultType iftmp.23_19;
  SecOC_VerificationResultType iftmp.24_20;
  SecOC_VerificationResultType iftmp.24_28;
  SecOC_VerificationResultType iftmp.23_31;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_25(D);
  _2 = SecOC_RxData[_1].PduREvent;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = SecOC_RxConfig[_1].ReceptionStrategy;
  if (_3 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_25(D), 1);
  goto <bb 22>; [100.00%]

  <bb 5> [local count: 999851208]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = SecOC_RxData[_1].CsmVerificationResult;
  if (_4 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 499925603]:
  # DEBUG BEGIN_STMT
  _5 = SecOC_RxData[_1].RenewedVerStatus;
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 249962802]:
  iftmp.23_31 = SecOC_RxData[_1].VerificationResult;

  <bb 8> [local count: 499925603]:
  # iftmp.23_19 = PHI <iftmp.23_31(7), 0(6)>
  SecOC_RxData[_1].VerificationResult = iftmp.23_19;
  # DEBUG BEGIN_STMT
  passPdu = 1;
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 499925603]:
  # DEBUG BEGIN_STMT
  _6 = SecOC_RxData[_1].RenewedVerStatus;
  if (_6 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 249962802]:
  iftmp.24_28 = SecOC_RxData[_1].VerificationResult;

  <bb 11> [local count: 499925603]:
  # iftmp.24_20 = PHI <iftmp.24_28(10), 1(9)>
  SecOC_RxData[_1].VerificationResult = iftmp.24_20;
  # DEBUG BEGIN_STMT
  passPdu = 0;

  <bb 12> [local count: 999851207]:
  # DEBUG BEGIN_STMT
  _7 = SecOC_RxData[_1].RenewedVerStatus;
  if (_7 == 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 329950898]:
  # DEBUG BEGIN_STMT
  SecOC_Rx_RenewStatusOverride (instId_25(D), &passPdu);

  <bb 14> [local count: 999851206]:
  # DEBUG BEGIN_STMT
  passPdu.25_8 = passPdu;
  if (passPdu.25_8 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 339949410]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].ProcessingVerification = 1;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].State = 4;
  goto <bb 21>; [100.00%]

  <bb 16> [local count: 659901796]:
  # DEBUG BEGIN_STMT
  _9 = SecOC_RxConfig[_1].MaxFVSyncAttempts;
  _10 = SecOC_RxData[_1].FVSyncAttempts;
  if (_9 > _10)
    goto <bb 17>; [67.00%]
  else
    goto <bb 20>; [33.00%]

  <bb 17> [local count: 442134203]:
  _11 = SecOC_RxData[_1].VerifyStatusOverride;
  if (_11 == 2)
    goto <bb 18>; [34.00%]
  else
    goto <bb 20>; [66.00%]

  <bb 18> [local count: 150325629]:
  SecOC_ConfigPtr.26_12 = SecOC_ConfigPtr;
  _13 = SecOC_ConfigPtr.26_12->RxPduConfigPtr;
  _14 = (unsigned int) instId_25(D);
  _15 = _14 * 32;
  _16 = _13 + _15;
  _17 = SecOC_ConfigPtr.26_12 + _16;
  _18 = _17->FreshnessValueLength;
  if (_18 != 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 19> [local count: 75162815]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].ProcessingVerification = 1;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].State = 5;
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 584738982]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_25(D), 0);

  <bb 21> [local count: 999851207]:
  passPdu ={v} {CLOBBER};

  <bb 22> [local count: 1073741824]:
  return;

}



;; Function SecOC_Rx_StateBroadcastPdu (SecOC_Rx_StateBroadcastPdu, funcdef_no=8, decl_uid=6073, cgraph_uid=9, symbol_order=9)

Modification phase of node SecOC_Rx_StateBroadcastPdu/9
SecOC_Rx_StateBroadcastPdu (uint16 instId)
{
  struct PduInfoType SecOC_RxPduInfo;
  int _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  uint8 * _5;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.21_6;
  long unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  sizetype _10;
  const struct SecOC_RxPduConfigType * _11;
  short unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_14(D);
  _2 = SecOC_RxData[_1].PduREvent;
  if (_2 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 5>; [48.88%]

  <bb 3> [local count: 548896821]:
  _3 = SecOC_RxConfig[_1].ReceptionStrategy;
  if (_3 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 111096716]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_14(D), 1);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 962645108]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = SecOC_RxData[_1].DataLength;
  SecOC_RxPduInfo.SduLength = _4;
  # DEBUG BEGIN_STMT
  _5 = SecOC_RxData[_1].SecuredPdu.SduDataPtr;
  SecOC_RxPduInfo.SduDataPtr = _5;
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.21_6 = SecOC_ConfigPtr;
  _7 = SecOC_ConfigPtr.21_6->RxPduConfigPtr;
  _8 = (unsigned int) instId_14(D);
  _9 = _8 * 32;
  _10 = _7 + _9;
  _11 = SecOC_ConfigPtr.21_6 + _10;
  _12 = _11->AuthenticLayerPduIdAtPduR;
  PduR_SecOCRxIndication (_12, &SecOC_RxPduInfo);
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 0
  SecOC_Rx_ResetSm.isra.0 (instId_14(D), 0);
  SecOC_RxPduInfo ={v} {CLOBBER};

  <bb 6> [local count: 1073741823]:
  return;

}



;; Function SecOC_Rx_StateVerification (SecOC_Rx_StateVerification, funcdef_no=6, decl_uid=6069, cgraph_uid=7, symbol_order=7)

Modification phase of node SecOC_Rx_StateVerification/7
SecOC_Rx_StateVerification (uint16 instId)
{
  uint32 dataLength;
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  long unsigned int _5;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.33_6;
  long unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  sizetype _10;
  const struct SecOC_RxPduConfigType * _11;
  unsigned char _12;
  unsigned char _13;
  long unsigned int _14;
  unsigned char _15;
  long unsigned int _16;
  long unsigned int _17;
  unsigned char _18;
  long unsigned int _19;
  uint8 * _20;
  uint8 * _21;
  short unsigned int _22;
  long unsigned int _23;
  Crypto_VerifyResultType * _24;
  long unsigned int iftmp.35_25;
  long unsigned int _30;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_27(D);
  _2 = SecOC_RxData[_1].PduREvent;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = SecOC_RxConfig[_1].ReceptionStrategy;
  if (_3 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_27(D), 1);
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 999851208]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = SecOC_RxData[_1].DataLength;
  _5 = (long unsigned int) _4;
  SecOC_ConfigPtr.33_6 = SecOC_ConfigPtr;
  _7 = SecOC_ConfigPtr.33_6->RxPduConfigPtr;
  _8 = (unsigned int) instId_27(D);
  _9 = _8 * 32;
  _10 = _7 + _9;
  _11 = SecOC_ConfigPtr.33_6 + _10;
  _12 = _11->FreshnessValueLength;
  _13 = _12 >> 3;
  _14 = (long unsigned int) _13;
  _15 = _12 & 7;
  if (_15 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 499925603]:

  <bb 7> [local count: 999851207]:
  # iftmp.35_25 = PHI <1(5), 0(6)>
  _16 = _14 + iftmp.35_25;
  _17 = _5 + _16;
  dataLength_31 = _17 + 2;
  # DEBUG dataLength => dataLength_31
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].State = 3;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].ProcessingVerification = 1;
  # DEBUG BEGIN_STMT
  _18 = SecOC_RxConfig[_1].CsmFuncType;
  if (_18 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 499925603]:
<L6>:
  # DEBUG BEGIN_STMT
  _19 = SecOC_RxConfig[_1].CsmJobId;
  _30 = _19 & 65535;
  _20 = SecOC_RxData[_1].DataToAuthenticator;
  _21 = SecOC_RxData[_1].Authenticator;
  _22 = _11->AuthInfoTxLength;
  _23 = (long unsigned int) _22;
  _24 = &SecOC_RxData[_1].CsmVerificationResult;
  retVal_35 = Csm_MacVerify (_30, 7, _20, dataLength_31, _21, _23, _24);
  # DEBUG retVal => retVal_35
  # DEBUG BEGIN_STMT
  # DEBUG retVal => retVal_35
  # DEBUG BEGIN_STMT
  if (retVal_35 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 749888406]:
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  SecOC_Rx_CheckForCsmRetry (instId_27(D));

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function SecOC_Rx_StateConstructDataToAuthenticator (SecOC_Rx_StateConstructDataToAuthenticator, funcdef_no=5, decl_uid=6067, cgraph_uid=6, symbol_order=6)

Modification phase of node SecOC_Rx_StateConstructDataToAuthenticator/6
SecOC_Rx_StateConstructDataToAuthenticator (uint16 instId)
{
  uint32 freshnessValueLength;
  uint8 index;
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.40_5;
  long unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  sizetype _9;
  const struct SecOC_RxPduConfigType * _10;
  short unsigned int _11;
  int _12;
  unsigned int _13;
  unsigned int _14;
  int _15;
  uint8 * _16;
  sizetype _17;
  uint8 * _18;
  unsigned char _19;
  uint8 * _20;
  uint8 * _21;
  uint8 * _22;
  short unsigned int _23;
  long unsigned int _24;
  uint8 * _25;
  short unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  uint8 * _29;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.43_30;
  long unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  sizetype _34;
  const struct SecOC_RxPduConfigType * _35;
  unsigned char _36;
  long unsigned int _37;
  unsigned char _38;
  short unsigned int _39;
  uint8 * _40;
  short unsigned int _41;
  sizetype _42;
  uint8 * _43;
  unsigned char _44;
  long unsigned int _45;
  short unsigned int _46;
  uint8 * _47;

  <bb 2> [local count: 768651847]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_56(D);
  _2 = SecOC_RxData[_1].PduREvent;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 261341628]:
  _3 = SecOC_RxConfig[_1].ReceptionStrategy;
  if (_3 == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 52895545]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 1
  SecOC_Rx_ResetSm.isra.0 (instId_56(D), 1);
  goto <bb 14>; [100.00%]

  <bb 5> [local count: 715756302]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  _4 = SecOC_RxData[_1].AuthAttempts;
  if (_4 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 15> [local count: 357878150]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.40_5 = SecOC_ConfigPtr;
  _6 = SecOC_ConfigPtr.40_5->RxPduConfigPtr;
  _7 = (unsigned int) instId_56(D);
  _8 = _7 * 32;
  _9 = _6 + _8;
  _10 = SecOC_ConfigPtr.40_5 + _9;
  _11 = _10->DataId;
  _12 = (int) _11;
  _13 = (unsigned int) index_50;
  _14 = _13 * 8;
  _15 = _12 >> _14;
  _16 = SecOC_RxData[_1].DataToAuthenticator;
  _17 = 1 - _13;
  _18 = _16 + _17;
  _19 = (unsigned char) _15;
  *_18 = _19;
  # DEBUG BEGIN_STMT
  index_63 = index_50 + 1;
  # DEBUG index => index_63

  <bb 7> [local count: 1073741824]:
  # index_50 = PHI <index_63(6), 0(15)>
  # DEBUG index => index_50
  # DEBUG BEGIN_STMT
  if (index_50 != 2)
    goto <bb 6>; [66.67%]
  else
    goto <bb 8>; [33.33%]

  <bb 8> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  _20 = SecOC_RxData[_1].DataToAuthenticator;
  _21 = _20 + 2;
  _22 = SecOC_RxData[_1].SecuredPdu.SduDataPtr;
  _23 = SecOC_RxData[_1].DataLength;
  _24 = (long unsigned int) _23;
  TS_MemCpy32 (_21, _22, _24);
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].FVSyncAttempts = 0;
  # DEBUG BEGIN_STMT
  _25 = SecOC_RxData[_1].DataToAuthenticator;
  _26 = SecOC_RxData[_1].DataLength;
  _27 = (unsigned int) _26;
  _28 = _27 + 2;
  _29 = _25 + _28;
  SecOC_RxData[_1].FreshnessVerifyValue = _29;

  <bb 9> [local count: 715756301]:
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.43_30 = SecOC_ConfigPtr;
  _31 = SecOC_ConfigPtr.43_30->RxPduConfigPtr;
  _32 = (unsigned int) instId_56(D);
  _33 = _32 * 32;
  _34 = _31 + _33;
  _35 = SecOC_ConfigPtr.43_30 + _34;
  _36 = _35->FreshnessValueLength;
  if (_36 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 10> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  _37 = (long unsigned int) _36;
  freshnessValueLength = _37;
  # DEBUG BEGIN_STMT
  _38 = SecOC_RxConfig[_1].GetRxFreshnessFuncType;
  if (_38 == 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 118099790]:
<L9>:
  # DEBUG BEGIN_STMT
  _39 = _35->FreshnessValueId;
  _40 = SecOC_RxData[_1].SecuredPdu.SduDataPtr;
  _41 = SecOC_RxData[_1].DataLength;
  _42 = (sizetype) _41;
  _43 = _40 + _42;
  _44 = _35->FreshnessValueTxLength;
  _45 = (long unsigned int) _44;
  _46 = SecOC_RxData[_1].FVSyncAttempts;
  _47 = SecOC_RxData[_1].FreshnessVerifyValue;
  retVal_66 = SecOC_Rx_Get_Freshness (instId_56(D), _39, _43, _45, _46, _47, &freshnessValueLength);
  # DEBUG retVal => retVal_66
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 357878150]:
  # retVal_48 = PHI <retVal_66(11), 1(10)>
  # DEBUG retVal => retVal_48
  freshnessValueLength ={v} {CLOBBER};

  <bb 13> [local count: 715756300]:
  # retVal_49 = PHI <retVal_48(12), 0(9)>
  # DEBUG retVal => retVal_49
  # DEBUG BEGIN_STMT
  SecOC_Rx_CheckFreshnessFuncResult (instId_56(D), retVal_49);

  <bb 14> [local count: 768651845]:
  return;

}



;; Function SecOC_Rx_StateIdle (SecOC_Rx_StateIdle, funcdef_no=4, decl_uid=6065, cgraph_uid=5, symbol_order=5)

Modification phase of node SecOC_Rx_StateIdle/5
SecOC_Rx_StateIdle (uint16 instId)
{
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_6(D);
  _2 = SecOC_RxData[_1].PduREvent;
  if (_2 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG operationResult => 1
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].ProcessingVerification = 1;
  # DEBUG BEGIN_STMT
  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].PduInProcess = 1;
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].PduREvent = 0;
  # DEBUG BEGIN_STMT
  # DEBUG instId => instId_6(D)
  # DEBUG INLINE_ENTRY SecOC_Rx_CheckPduContent
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  retVal_12 = SecOC_Rx_CheckSecPduContent (instId_6(D));
  # DEBUG retVal => retVal_12
  # DEBUG BEGIN_STMT
  # DEBUG instId => NULL
  # DEBUG retVal => NULL
  # DEBUG operationResult => retVal_12
  # DEBUG BEGIN_STMT
  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (retVal_12 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  SecOC_Rx_PrepareSecuredPdu (instId_6(D));
  # DEBUG BEGIN_STMT
  SecOC_Rx_ExtractAuthenticDataLen (instId_6(D));
  # DEBUG BEGIN_STMT
  SecOC_RxData[_1].State = 1;
  # DEBUG BEGIN_STMT
  SecOC_Rx_CheckStatusOverridePreVerify (instId_6(D));

  <bb 5> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _3 = SecOC_RxData[_1].State;
  if (_3 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 0
  SecOC_Rx_ResetSm.isra.0 (instId_6(D), 0);

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function SecOC_Rx_Init (SecOC_Rx_Init, funcdef_no=0, decl_uid=6039, cgraph_uid=1, symbol_order=1)

Modification phase of node SecOC_Rx_Init/1
SecOC_Rx_Init ()
{
  uint16 pduIdx;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.0_1;
  long unsigned int _2;
  sizetype _3;
  const struct SecOC_RxPduConfigType * _4;
  long unsigned int _5;
  uint8 * _6;
  long unsigned int _7;
  uint8 * _8;
  long unsigned int _9;
  uint8 * _10;
  long unsigned int _11;
  uint8 * _12;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].State = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].PduREvent = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].PduInProcess = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].ProcessingVerification = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].CsmVerificationResult = 1;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].AuthAttempts = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].FVSyncAttempts = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].VerificationResult = 1;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].VerifyStatusOverride = 2;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].NumMsgToOverride = 0;
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.0_1 = SecOC_ConfigPtr;
  _2 = SecOC_ConfigPtr.0_1->RxPduConfigPtr;
  _3 = _2;
  _4 = SecOC_ConfigPtr.0_1 + _3;
  _5 = _4->BuffersConfig.ReceivedSecuredPduBufferIndex;
  _6 = &SecOC_PB_PduBuffer[_5];
  SecOC_RxData[0].ReceivedSecuredPdu.SduDataPtr = _6;
  # DEBUG BEGIN_STMT
  _7 = _4->BuffersConfig.SecuredPduBufferIndex;
  _8 = &SecOC_PB_PduBuffer[_7];
  SecOC_RxData[0].SecuredPdu.SduDataPtr = _8;
  # DEBUG BEGIN_STMT
  _9 = _4->BuffersConfig.AuthenticatorIndex;
  _10 = &SecOC_PB_IntBuffer[_9];
  SecOC_RxData[0].Authenticator = _10;
  # DEBUG BEGIN_STMT
  _11 = _4->BuffersConfig.DataToAuthenticatorIndex;
  _12 = &SecOC_PB_IntBuffer[_11];
  SecOC_RxData[0].DataToAuthenticator = _12;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].SecuredPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].DataLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].ReceivedSecuredPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 1

  <bb 4> [local count: 1073741824]:
  # pduIdx_13 = PHI <0(2), 1(3)>
  # DEBUG pduIdx => pduIdx_13
  # DEBUG BEGIN_STMT
  if (pduIdx_13 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  return;

}



;; Function SecOC_Rx_DeInit (SecOC_Rx_DeInit, funcdef_no=1, decl_uid=6041, cgraph_uid=2, symbol_order=2)

Modification phase of node SecOC_Rx_DeInit/2
SecOC_Rx_DeInit ()
{
  uint16 pduIdx;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].ReceivedSecuredPdu.SduDataPtr = 0B;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].SecuredPdu.SduDataPtr = 0B;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].Authenticator = 0B;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].DataToAuthenticator = 0B;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].SecuredPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].DataLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_RxData[0].ReceivedSecuredPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 1

  <bb 4> [local count: 1073741824]:
  # pduIdx_1 = PHI <0(2), 1(3)>
  # DEBUG pduIdx => pduIdx_1
  # DEBUG BEGIN_STMT
  if (pduIdx_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  return;

}



;; Function SecOC_Rx_ProcessPduStates (SecOC_Rx_ProcessPduStates, funcdef_no=2, decl_uid=6043, cgraph_uid=3, symbol_order=3)

Modification phase of node SecOC_Rx_ProcessPduStates/3
SecOC_Rx_ProcessPduStates (uint16 pduIdx)
{
  int _1;
  unsigned char _2;
  int _3;
  void (*<T586>) (uint16) _4;
  unsigned char _5;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) pduIdx_8(D);
  SecOC_RxData[_1].ProcessingVerification = 0;
  # DEBUG BEGIN_STMT
  _2 = SecOC_RxData[_1].State;
  _3 = (int) _2;
  _4 = SecOC_Rx_StateMachine[_3];
  _4 (pduIdx_8(D));
  # DEBUG BEGIN_STMT
  _5 = SecOC_RxData[_1].ProcessingVerification;
  if (_5 == 1)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  return;

}



;; Function SecOC_Rx_VerifyStatusOverride_43 (SecOC_Rx_VerifyStatusOverride_43, funcdef_no=3, decl_uid=6037, cgraph_uid=4, symbol_order=4)

Modification phase of node SecOC_Rx_VerifyStatusOverride_43/4
SecOC_Rx_VerifyStatusOverride_43 (const uint16 * rxInstIdxList, uint16 numberOfRxPdus, uint16 freshnessValueId, uint8 overrideStatus, uint8 numberOfMessagesToOverride)
{
  Std_ReturnType idFound;
  uint16 i;
  long unsigned int SecOC_InitStatus.81_1;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.82_2;
  long unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  sizetype _6;
  const struct SecOC_RxPduConfigType * _7;
  short unsigned int _8;
  int _9;
  int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  # DEBUG BEGIN_STMT
  # DEBUG idFound => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.81_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.81_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  if (overrideStatus_20(D) <= 2)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 11> [local count: 182536110]:
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => i_11
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.82_2 = SecOC_ConfigPtr;
  _3 = SecOC_ConfigPtr.82_2->RxPduConfigPtr;
  _4 = (unsigned int) i_11;
  _5 = _4 * 32;
  _6 = _3 + _5;
  _7 = SecOC_ConfigPtr.82_2 + _6;
  _8 = _7->FreshnessValueId;
  if (_8 == freshnessValueId_22(D))
    goto <bb 5>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 5> [local count: 36945309]:
  # DEBUG BEGIN_STMT
  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (overrideStatus_20(D) == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 12561405]:
  # DEBUG BEGIN_STMT
  _9 = (int) i_11;
  SecOC_RxData[_9].NumMsgToOverride = numberOfMessagesToOverride_24(D);

  <bb 7> [local count: 36945309]:
  # DEBUG BEGIN_STMT
  _10 = (int) i_11;
  SecOC_RxData[_10].VerifyStatusOverride = overrideStatus_20(D);
  # DEBUG BEGIN_STMT
  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG idFound => 0

  <bb 8> [local count: 182536110]:
  # idFound_12 = PHI <idFound_13(4), 0(7)>
  # DEBUG idFound => idFound_12
  # DEBUG BEGIN_STMT
  i_28 = i_11 + 1;
  # DEBUG i => i_28

  <bb 9> [local count: 365072220]:
  # i_11 = PHI <i_28(8), 0(11)>
  # idFound_13 = PHI <idFound_12(8), 1(11)>
  # DEBUG idFound => idFound_13
  # DEBUG i => i_11
  # DEBUG BEGIN_STMT
  if (i_11 < numberOfRxPdus_21(D))
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 1073741824]:
  # idFound_14 = PHI <1(2), 1(3), idFound_13(9)>
  # DEBUG idFound => idFound_14
  # DEBUG BEGIN_STMT
  return idFound_14;

}


