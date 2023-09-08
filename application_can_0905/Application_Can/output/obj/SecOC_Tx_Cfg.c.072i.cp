
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_SecOC_PS_TxFreshnessManagement_SPduTxConfirmation/5:
  Jump functions of caller  Rte_Call_SecOC_PS_TxFreshnessManagement_GetTxFreshness/4:
  Jump functions of caller  SecOC_Tx_SPDU_Confirmation/3:
  Jump functions of caller  SecOC_Tx_Get_Freshness/2:

 Propagating constants:

Not considering SecOC_Tx_SPDU_Confirmation for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_Get_Freshness for cloning; -fipa-cp-clone disabled.

overall_size: 13, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: SecOC_Tx_SPDU_Confirmation/3:
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
  Node: SecOC_Tx_Get_Freshness/2:
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

Rte_Call_SecOC_PS_TxFreshnessManagement_SPduTxConfirmation/5 (Rte_Call_SecOC_PS_TxFreshnessManagement_SPduTxConfirmation) @06c0d1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_SPDU_Confirmation/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Call_SecOC_PS_TxFreshnessManagement_GetTxFreshness/4 (Rte_Call_SecOC_PS_TxFreshnessManagement_GetTxFreshness) @06c0d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_Get_Freshness/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_Tx_SPDU_Confirmation/3 (SecOC_Tx_SPDU_Confirmation) @06c05b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_SecOC_PS_TxFreshnessManagement_SPduTxConfirmation/5 (1073741824 (estimated locally),1.00 per call) 
SecOC_Tx_Get_Freshness/2 (SecOC_Tx_Get_Freshness) @06c052a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_SecOC_PS_TxFreshnessManagement_GetTxFreshness/4 (1073741824 (estimated locally),1.00 per call) 
SecOC_TxData/1 (SecOC_TxData) @06b4ce58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
SecOC_TxConfig/0 (SecOC_TxConfig) @06b4cdc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function SecOC_Tx_Get_Freshness (SecOC_Tx_Get_Freshness, funcdef_no=0, decl_uid=5858, cgraph_uid=1, symbol_order=2)

Modification phase of node SecOC_Tx_Get_Freshness/2
SecOC_Tx_Get_Freshness (uint16 instId, uint16 SecOCFreshnessValueID, uint8 * SecOCFreshnessValue, uint32 * SecOCFreshnessValueLength)
{
  Std_ReturnType retVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  retVal_6 = Rte_Call_SecOC_PS_TxFreshnessManagement_GetTxFreshness (SecOCFreshnessValueID_2(D), SecOCFreshnessValue_3(D), SecOCFreshnessValueLength_4(D));
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  return retVal_6;

}



;; Function SecOC_Tx_SPDU_Confirmation (SecOC_Tx_SPDU_Confirmation, funcdef_no=1, decl_uid=5861, cgraph_uid=2, symbol_order=3)

Modification phase of node SecOC_Tx_SPDU_Confirmation/3
SecOC_Tx_SPDU_Confirmation (uint16 instId, uint16 SecOCFreshnessValueID)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Rte_Call_SecOC_PS_TxFreshnessManagement_SPduTxConfirmation (SecOCFreshnessValueID_2(D));
  return;

}


