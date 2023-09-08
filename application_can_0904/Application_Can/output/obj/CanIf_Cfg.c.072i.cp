
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  PduR_CanIfTxConfirmation/21:
  Jump functions of caller  PduR_CanIfRxIndication/20:
  Jump functions of caller  CanTp_TxConfirmation/19:
  Jump functions of caller  CanTp_RxIndication/18:
  Jump functions of caller  CanNm_TxConfirmation/17:
  Jump functions of caller  CanNm_RxIndication/16:
  Jump functions of caller  CanIf_CheckWakeFlag_HlpNoPn/15:
  Jump functions of caller  CanIf_ClearTrcvWufFlag_HlpNoPn/14:
  Jump functions of caller  CanTrcv_CheckWakeup/13:
  Jump functions of caller  CanTrcv_SetWakeupMode/12:
  Jump functions of caller  CanTrcv_GetBusWuReason/11:
  Jump functions of caller  CanTrcv_GetOpMode/10:
  Jump functions of caller  CanTrcv_SetOpMode/9:
  Jump functions of caller  Can_SetControllerMode/8:
  Jump functions of caller  Can_Write/7:

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

PduR_CanIfTxConfirmation/21 (PduR_CanIfTxConfirmation) @07ff4e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CbkFctPtrTbl/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
PduR_CanIfRxIndication/20 (PduR_CanIfRxIndication) @07ff4d20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CbkFctPtrTbl/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTp_TxConfirmation/19 (CanTp_TxConfirmation) @07ff4c40
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CbkFctPtrTbl/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTp_RxIndication/18 (CanTp_RxIndication) @07ff4b60
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CbkFctPtrTbl/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanNm_TxConfirmation/17 (CanNm_TxConfirmation) @07ff4a80
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CbkFctPtrTbl/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanNm_RxIndication/16 (CanNm_RxIndication) @07ff49a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CbkFctPtrTbl/2 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanIf_CheckWakeFlag_HlpNoPn/15 (CanIf_CheckWakeFlag_HlpNoPn) @07ff48c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanIf_ClearTrcvWufFlag_HlpNoPn/14 (CanIf_ClearTrcvWufFlag_HlpNoPn) @07ff4700
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTrcv_CheckWakeup/13 (CanTrcv_CheckWakeup) @07ff4620
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTrcv_SetWakeupMode/12 (CanTrcv_SetWakeupMode) @07ff4540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTrcv_GetBusWuReason/11 (CanTrcv_GetBusWuReason) @07ff4460
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTrcv_GetOpMode/10 (CanTrcv_GetOpMode) @07ff4380
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanTrcv_SetOpMode/9 (CanTrcv_SetOpMode) @07ff42a0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanTrcvConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Can_SetControllerMode/8 (Can_SetControllerMode) @07ff41c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanDrvFctConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Can_Write/7 (Can_Write) @07ff40e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: CanIf_CanDrvFctConfig/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
CanIf_DynamicTxLPduCanIds/6 (CanIf_DynamicTxLPduCanIds) @07ff3090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
CanIf_PduMode/5 (CanIf_PduMode) @07ff3048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
CanIf_CanControllerMode/4 (CanIf_CanControllerMode) @07ff3000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
CanIf_CanControllerFlags/3 (CanIf_CanControllerFlags) @06e72f78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
CanIf_CbkFctPtrTbl/2 (CanIf_CbkFctPtrTbl) @06e72f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: CanNm_RxIndication/16 (addr)CanNm_TxConfirmation/17 (addr)CanTp_RxIndication/18 (addr)CanTp_TxConfirmation/19 (addr)PduR_CanIfRxIndication/20 (addr)PduR_CanIfTxConfirmation/21 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
CanIf_CanTrcvConfig/1 (CanIf_CanTrcvConfig) @06e72ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_SetOpMode/9 (addr)CanTrcv_GetOpMode/10 (addr)CanTrcv_GetBusWuReason/11 (addr)CanTrcv_SetWakeupMode/12 (addr)CanTrcv_CheckWakeup/13 (addr)CanIf_ClearTrcvWufFlag_HlpNoPn/14 (addr)CanIf_CheckWakeFlag_HlpNoPn/15 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
CanIf_CanDrvFctConfig/0 (CanIf_CanDrvFctConfig) @06e72e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Can_Write/7 (addr)Can_SetControllerMode/8 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
