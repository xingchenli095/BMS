
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

ComM_COMCbk_SGCanNmPnEiraRxNSdu/15 (ComM_COMCbk_SGCanNmPnEiraRxNSdu) @06afe0e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R/14 (Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R) @06afe000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_SGSecuredDataIn_281R/13 (Rte_COMCbk_SGSecuredDataIn_281R) @06afcee0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_SGCounterIn_CAN_FD_257R/12 (Rte_COMCbk_SGCounterIn_CAN_FD_257R) @06afce00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_COMCbk_SGCounterIn_256R/11 (Rte_COMCbk_SGCounterIn_256R) @06afcd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkRxAck_Array/7 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Com_EB_TxDMDummyCbk/10 (Com_EB_TxDMDummyCbk) @06afcc40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Com_CbkTxTOut_Array/5 (addr)Com_CbkTxErr_Array/6 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Com_LcfgSignature/9 (Com_LcfgSignature) @06b493a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkRxTOut_Array/8 (Com_CbkRxTOut_Array) @06b49360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkRxAck_Array/7 (Com_CbkRxAck_Array) @06b49318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_COMCbk_SGCounterIn_256R/11 (addr)Rte_COMCbk_SGCounterIn_CAN_FD_257R/12 (addr)Rte_COMCbk_SGSecuredDataIn_281R/13 (addr)Rte_COMCbk_GRsigGroup_E2EProt_DataIn_280R/14 (addr)ComM_COMCbk_SGCanNmPnEiraRxNSdu/15 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkTxErr_Array/6 (Com_CbkTxErr_Array) @06b49288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Com_EB_TxDMDummyCbk/10 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkTxTOut_Array/5 (Com_CbkTxTOut_Array) @06b49240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Com_EB_TxDMDummyCbk/10 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_CbkTxAck_Array/4 (Com_CbkTxAck_Array) @06b491f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_RxCallouts/3 (Com_RxCallouts) @06b491b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_TxCallouts/2 (Com_TxCallouts) @06b49168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_gDataMemPtr/1 (Com_gDataMemPtr) @06b49120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Com_DataMem/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Com_DataMem/0 (Com_DataMem) @06b490d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Com_gDataMemPtr/1 (addr)
  Availability: available
  Varpool flags:
