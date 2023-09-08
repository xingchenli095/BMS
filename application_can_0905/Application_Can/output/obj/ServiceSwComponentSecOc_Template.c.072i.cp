
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness/2:
  Jump functions of caller  ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation/1:
  Jump functions of caller  ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness/0:

 Propagating constants:

Not considering ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness for cloning; -fipa-cp-clone disabled.

overall_size: 9, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 6.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 3.000000

IPA lattices after all propagation:

Lattices:
  Node: ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness/2:
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
  Node: ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness/0:
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

ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness/2 (ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness) @06b7c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation/1 (ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation) @06b7c700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness/0 (ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness) @06b7c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness (ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness, funcdef_no=0, decl_uid=5727, cgraph_uid=1, symbol_order=0)

Modification phase of node ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness/0
ServiceSwComponentSecOC_PS_TxFreshnessManagement_GetTxFreshness (uint16 freshnessValueId, uint8 * freshnessValue, uint32 * freshnessValueLength)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation (ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation, funcdef_no=1, decl_uid=5729, cgraph_uid=2, symbol_order=1)

Modification phase of node ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation/1
ServiceSwComponentSecOC_PS_TxFreshnessManagement_SPduTxConfirmation (uint16 freshnessValueId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness (ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness, funcdef_no=2, decl_uid=5723, cgraph_uid=3, symbol_order=2)

Modification phase of node ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness/2
ServiceSwComponentSecOC_PS_RxFreshnessManagement_GetRxFreshness (uint16 freshnessValueId, const uint8 * truncatedFreshnessValue, uint32 truncatedFreshnessLength, uint16 authVerifyAttempts, uint8 * freshnessValue, uint32 * freshnessValueLength)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


