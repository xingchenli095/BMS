
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_TxConnectionInit/4:
  Jump functions of caller  Dcm_Dsl_RxConnectionInit/3:
  Jump functions of caller  Dcm_Dsl_BufferInit/2:
  Jump functions of caller  Dcm_Dsl_GetDemClientId/1:
  Jump functions of caller  Dcm_Dsl_Init/0:

 Propagating constants:

Not considering Dcm_Dsl_GetDemClientId for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_Init for cloning; -fipa-cp-clone disabled.

overall_size: 11, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_GetDemClientId/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_Init/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_ProtocolConfig/6 (Dcm_ProtocolConfig) @06db15e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_GetDemClientId/1 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_ProcessTxConnectionsOnMainFunction/5 (Dcm_ProcessTxConnectionsOnMainFunction) @06db1480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_Init/0 (write)
  Availability: not_available
  Varpool flags:
Dcm_Dsl_TxConnectionInit/4 (Dcm_Dsl_TxConnectionInit) @06db4620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RxConnectionInit/3 (Dcm_Dsl_RxConnectionInit) @06db4540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferInit/2 (Dcm_Dsl_BufferInit) @06db4460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_GetDemClientId/1 (Dcm_Dsl_GetDemClientId) @06db42a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_Init/0 (Dcm_Dsl_Init) @06db40e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProcessTxConnectionsOnMainFunction/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionInit/4 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RxConnectionInit/3 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferInit/2 (1073741824 (estimated locally),1.00 per call) 

;; Function Dcm_Dsl_Init (Dcm_Dsl_Init, funcdef_no=0, decl_uid=5978, cgraph_uid=1, symbol_order=0)

Modification phase of node Dcm_Dsl_Init/0
Dcm_Dsl_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferInit ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionInit ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInit ();
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_GetDemClientId (Dcm_Dsl_GetDemClientId, funcdef_no=1, decl_uid=5980, cgraph_uid=2, symbol_order=1)

Modification phase of node Dcm_Dsl_GetDemClientId/1
Dcm_Dsl_GetDemClientId (Dcm_ProtocolIndexType ProtocolIndex)
{
  Dcm_DemClientIdType ClientId;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ClientId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) ProtocolIndex_2(D);
  ClientId_4 = Dcm_ProtocolConfig[_1].DemClientId;
  # DEBUG ClientId => ClientId_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ClientId_4;

}


