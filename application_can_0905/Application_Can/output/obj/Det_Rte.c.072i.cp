
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Det_ASR40_ReportError/5:
  Jump functions of caller  SchM_Exit_Det_SCHM_DET_EXCLUSIVE_AREA_0/4:
  Jump functions of caller  SchM_Enter_Det_SCHM_DET_EXCLUSIVE_AREA_0/3:
  Jump functions of caller  Det_Rte_ReportError/2:
  Jump functions of caller  Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/1:
  Jump functions of caller  Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/0:

 Propagating constants:

Not considering Det_Rte_ReportError for cloning; -fipa-cp-clone disabled.
Not considering Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0 for cloning; -fipa-cp-clone disabled.
Not considering Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0 for cloning; -fipa-cp-clone disabled.

overall_size: 17, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Det_Rte_ReportError/2:
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
  Node: Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/1:
  Node: Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Det_ASR40_ReportError/5 (Det_ASR40_ReportError) @06b56e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_Rte_ReportError/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Det_SCHM_DET_EXCLUSIVE_AREA_0/4 (SchM_Exit_Det_SCHM_DET_EXCLUSIVE_AREA_0) @06b56c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Det_SCHM_DET_EXCLUSIVE_AREA_0/3 (SchM_Enter_Det_SCHM_DET_EXCLUSIVE_AREA_0) @06b56a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_Rte_ReportError/2 (Det_Rte_ReportError) @06b568c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/5 (1073741824 (estimated locally),1.00 per call) 
Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/1 (Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0) @06b56700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Det_SCHM_DET_EXCLUSIVE_AREA_0/4 (1073741824 (estimated locally),1.00 per call) 
Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/0 (Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0) @06b56540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Enter_Det_SCHM_DET_EXCLUSIVE_AREA_0/3 (1073741824 (estimated locally),1.00 per call) 

;; Function Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0 (Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0, funcdef_no=0, decl_uid=5384, cgraph_uid=1, symbol_order=0)

Modification phase of node Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0/0
Det_Enter_SCHM_DET_EXCLUSIVE_AREA_0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Det_SCHM_DET_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0 (Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0, funcdef_no=1, decl_uid=5386, cgraph_uid=2, symbol_order=1)

Modification phase of node Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0/1
Det_Exit_SCHM_DET_EXCLUSIVE_AREA_0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_Det_SCHM_DET_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function Det_Rte_ReportError (Det_Rte_ReportError, funcdef_no=2, decl_uid=5746, cgraph_uid=3, symbol_order=2)

Modification phase of node Det_Rte_ReportError/2
Det_Rte_ReportError (uint16 pdav0, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  Std_ReturnType _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _7 = Det_ASR40_ReportError (pdav0_2(D), InstanceId_3(D), ApiId_4(D), ErrorId_5(D));
  return _7;

}


