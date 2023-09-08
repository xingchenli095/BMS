
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_COMCbk_SGCanNmPnEiraRxNSdu/15:
  Jump functions of caller  Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R/14:
  Jump functions of caller  Rte_COMCbk_SGSecuredDataIn_281R/13:
  Jump functions of caller  Rte_COMCbk_SGCounterIn_CAN_FD_257R/12:
  Jump functions of caller  Rte_COMCbk_SGCounterIn_256R/11:
  Jump functions of caller  Com_EB_TxDMDummyCbk/10:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_COMCbk_SGCanNmPnEiraRxNSdu/15 (ComM_COMCbk_SGCanNmPnEiraRxNSdu) @06afd0e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R/14 (Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R) @06afd000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_SGSecuredDataIn_281R/13 (Rte_COMCbk_SGSecuredDataIn_281R) @06afbee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_SGCounterIn_CAN_FD_257R/12 (Rte_COMCbk_SGCounterIn_CAN_FD_257R) @06afbe00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_SGCounterIn_256R/11 (Rte_COMCbk_SGCounterIn_256R) @06afbd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Com_EB_TxDMDummyCbk/10 (Com_EB_TxDMDummyCbk) @06afbc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkTxTOut_Array/5 (addr)Com_CbkTxErr_Array/6 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Com_LcfgSignature/9 (Com_LcfgSignature) @06b7c360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkRxTOut_Array/8 (Com_CbkRxTOut_Array) @06b7c318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkRxAck_Array/7 (Com_CbkRxAck_Array) @06b7c2d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_COMCbk_SGCounterIn_256R/11 (addr)Rte_COMCbk_SGCounterIn_CAN_FD_257R/12 (addr)Rte_COMCbk_SGSecuredDataIn_281R/13 (addr)Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R/14 (addr)ComM_COMCbk_SGCanNmPnEiraRxNSdu/15 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkTxErr_Array/6 (Com_CbkTxErr_Array) @06b7c240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Com_EB_TxDMDummyCbk/10 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkTxTOut_Array/5 (Com_CbkTxTOut_Array) @06b7c1f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Com_EB_TxDMDummyCbk/10 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkTxAck_Array/4 (Com_CbkTxAck_Array) @06b7c1b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_RxCallouts/3 (Com_RxCallouts) @06b7c168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_TxCallouts/2 (Com_TxCallouts) @06b7c120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_gDataMemPtr/1 (Com_gDataMemPtr) @06b7c0d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Com_DataMem/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_DataMem/0 (Com_DataMem) @06b7c090
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Com_gDataMemPtr/1 (addr)
  Availability: available
  Varpool flags:
