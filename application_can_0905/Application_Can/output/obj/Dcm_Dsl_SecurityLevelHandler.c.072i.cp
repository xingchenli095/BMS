
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/5:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_SessionChange/4:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/3:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/2:
  Jump functions of caller  Dcm_Dsl_SecurityLevelHandler_Init/1:

 Propagating constants:

Not considering Dcm_Dsl_SecurityLevelHandler_SessionChange for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_SecurityLevelHandler_Init for cloning; -fipa-cp-clone disabled.

overall_size: 22, max_new_size: 11001
 - context independent values, size: 10, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_SecurityLevelHandler_SessionChange/4:
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
  Node: Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/3:
  Node: Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_SecurityLevelHandler_Init/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/5 (Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured) @06cc79a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_SecurityLevelHandler_SessionChange/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_SessionChange/4 (Dcm_Dsl_SecurityLevelHandler_SessionChange) @06cc7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CurrentSecurityLevel/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured/5 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/3 (Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel) @06cc7380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CurrentSecurityLevel/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/2 (Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel) @06cc71c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CurrentSecurityLevel/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_SecurityLevelHandler_Init/1 (Dcm_Dsl_SecurityLevelHandler_Init) @06cc7000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_CurrentSecurityLevel/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_CurrentSecurityLevel/0 (Dcm_CurrentSecurityLevel) @06c9d870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_SecurityLevelHandler_Init/1 (write)Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/2 (write)Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/3 (read)Dcm_Dsl_SecurityLevelHandler_SessionChange/4 (write)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_SecurityLevelHandler_Init (Dcm_Dsl_SecurityLevelHandler_Init, funcdef_no=0, decl_uid=6559, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_Dsl_SecurityLevelHandler_Init/1
Dcm_Dsl_SecurityLevelHandler_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_CurrentSecurityLevel = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel (Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel, funcdef_no=1, decl_uid=6561, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel/2
Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel (Dcm_SecLevelType newSecLevel)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_CurrentSecurityLevel = newSecLevel_2(D);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel (Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel, funcdef_no=2, decl_uid=6563, cgraph_uid=3, symbol_order=3)

Modification phase of node Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel/3
Dcm_Dsl_SecurityLevelHandler_GetSecurityLevel ()
{
  Dcm_SecLevelType CurrentSecurityLevel;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurrentSecurityLevel_2 = Dcm_CurrentSecurityLevel;
  # DEBUG CurrentSecurityLevel => CurrentSecurityLevel_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return CurrentSecurityLevel_2;

}



;; Function Dcm_Dsl_SecurityLevelHandler_SessionChange (Dcm_Dsl_SecurityLevelHandler_SessionChange, funcdef_no=3, decl_uid=6566, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_Dsl_SecurityLevelHandler_SessionChange/4
Dcm_Dsl_SecurityLevelHandler_SessionChange (Dcm_SesCtrlType OldSession, Dcm_SesCtrlType NewSession)
{
  boolean PreemptionOccured;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PreemptionOccured_4 = Dcm_Dsl_DiagnosticSessionHandler_GetPreemptionOccured ();
  # DEBUG PreemptionOccured => PreemptionOccured_4
  # DEBUG BEGIN_STMT
  if (OldSession_5(D) != 1)
    goto <bb 4>; [66.00%]
  else
    goto <bb 3>; [34.00%]

  <bb 3> [local count: 365072220]:
  if (PreemptionOccured_4 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 832794160]:
  # DEBUG BEGIN_STMT
  # DEBUG newSecLevel => 0
  # DEBUG INLINE_ENTRY Dcm_Dsl_SecurityLevelHandler_SetSecurityLevel
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_CurrentSecurityLevel = 0;
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073741824]:
  # DEBUG newSecLevel => NULL
  # DEBUG BEGIN_STMT
  return;

}


