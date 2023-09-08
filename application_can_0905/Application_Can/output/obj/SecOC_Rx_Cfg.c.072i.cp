
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_SecOC_PS_RxFreshnessManagement_GetRxFreshness/5:
  Jump functions of caller  SecOC_Rx_VerifyStatusOverride_43/4:
  Jump functions of caller  SecOC_Rx_Get_Freshness/3:
  Jump functions of caller  SecOC_VerifyStatusOverride/2:

 Propagating constants:

Not considering SecOC_Rx_Get_Freshness for cloning; -fipa-cp-clone disabled.
Not considering SecOC_VerifyStatusOverride for cloning; -fipa-cp-clone disabled.

overall_size: 21, max_new_size: 11001
 - context independent values, size: 11, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: SecOC_Rx_Get_Freshness/3:
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
  Node: SecOC_VerifyStatusOverride/2:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Call_SecOC_PS_RxFreshnessManagement_GetRxFreshness/5 (Rte_Call_SecOC_PS_RxFreshnessManagement_GetRxFreshness) @06b5b540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Rx_Get_Freshness/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_Rx_VerifyStatusOverride_43/4 (SecOC_Rx_VerifyStatusOverride_43) @06b5b380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_VerifyStatusOverride/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_Rx_Get_Freshness/3 (SecOC_Rx_Get_Freshness) @06b5b1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_SecOC_PS_RxFreshnessManagement_GetRxFreshness/5 (1073741824 (estimated locally),1.00 per call) 
SecOC_VerifyStatusOverride/2 (SecOC_VerifyStatusOverride) @06b5b000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_VerifyStatusOverride_43/4 (1073741824 (estimated locally),1.00 per call) 
SecOC_RxData/1 (SecOC_RxData) @06adee58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
SecOC_RxConfig/0 (SecOC_RxConfig) @06adedc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function SecOC_VerifyStatusOverride (SecOC_VerifyStatusOverride, funcdef_no=0, decl_uid=6050, cgraph_uid=1, symbol_order=2)

Modification phase of node SecOC_VerifyStatusOverride/2
SecOC_VerifyStatusOverride (uint16 freshnessValueId, uint8 overrideStatus, uint8 numberOfMessagesToOverride)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  retVal_6 = SecOC_Rx_VerifyStatusOverride_43 (0B, 1, freshnessValueId_2(D), overrideStatus_3(D), numberOfMessagesToOverride_4(D));
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  return retVal_6;

}



;; Function SecOC_Rx_Get_Freshness (SecOC_Rx_Get_Freshness, funcdef_no=1, decl_uid=5861, cgraph_uid=2, symbol_order=3)

Modification phase of node SecOC_Rx_Get_Freshness/3
SecOC_Rx_Get_Freshness (uint16 instId, uint16 SecOCFreshnessValueID, const uint8 * SecOCTruncatedFreshnessValue, uint32 SecOCTruncatedFreshnessValueLength, uint16 SecOCCounterSyncAttempts, uint8 * SecOCFreshnessValue, uint32 * SecOCFreshnessValueLength)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_9 = Rte_Call_SecOC_PS_RxFreshnessManagement_GetRxFreshness (SecOCFreshnessValueID_2(D), SecOCTruncatedFreshnessValue_3(D), SecOCTruncatedFreshnessValueLength_4(D), SecOCCounterSyncAttempts_5(D), SecOCFreshnessValue_6(D), SecOCFreshnessValueLength_7(D));
  # DEBUG retVal => retVal_9
  # DEBUG BEGIN_STMT
  return retVal_9;

}


