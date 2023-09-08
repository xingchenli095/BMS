
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CanNm_RmsTimerStart.part.0/82:
  Jump functions of caller  CanNm_MsgCycleTimerStart.part.0/76:
  Jump functions of caller  CanNm_HandleRxIndicationCommon.part.0/73:
  Jump functions of caller  CanIf_Transmit/71:
  Jump functions of caller  CanNm_GetPduUserData/70:
  Jump functions of caller  TS_AtomicClearBit_8/69:
  Jump functions of caller  Nm_PrepareBusSleepMode/68:
  Jump functions of caller  CanSM_TxTimeoutException/67:
  Jump functions of caller  Nm_TxTimeoutException/66:
  Jump functions of caller  CanNm_HsmEmitToSelfInst/64:
  Jump functions of caller  TS_AtomicSetBit_8/63:
  Jump functions of caller  Nm_NetworkMode/62:
  Jump functions of caller  Det_ASR40_ReportError/61:
  Jump functions of caller  Nm_NetworkStartIndication/60:
  Jump functions of caller  Nm_BusSleepMode/59:
  Jump functions of caller  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/58:
  Jump functions of caller  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/57:
  Jump functions of caller  TS_MemSet32/56:
  Jump functions of caller  CanNm_HandleTransmit/52:
    callsite  CanNm_HandleTransmit/52 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  CanNm_HandleTransmit/52 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  CanNm_HandleTransmit/52 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  CanNm_HandleTransmit/52 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  CanNm_HandleTransmit/52 -> CanNm_RmsTimerStart/44 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanNm_HandleComControl/51:
    callsite  CanNm_HandleComControl/51 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanNm_HandleTxConfirmation/50:
  Jump functions of caller  CanNm_HandleRxIndicationCommon/47:
    callsite  CanNm_HandleRxIndicationCommon/47 -> CanNm_HandleRxIndicationCommon.part.0/73 : 
  Jump functions of caller  CanNm_MsgCycleTimerStart/45:
    callsite  CanNm_MsgCycleTimerStart/45 -> CanNm_MsgCycleTimerStart.part.0/76 : 
  Jump functions of caller  CanNm_RmsTimerStart/44:
    callsite  CanNm_RmsTimerStart/44 -> CanNm_RmsTimerStart.part.0/82 : 
  Jump functions of caller  CanNm_InitIntVar/39:
  Jump functions of caller  CanNm_HsmCanNmSfPrepareBusSleepModeAction3/38:
  Jump functions of caller  CanNm_HsmCanNmSfPrepareBusSleepModeGuard2/37:
  Jump functions of caller  CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36:
  Jump functions of caller  CanNm_HsmCanNmSfRepeatMessageStateGuard2/35:
  Jump functions of caller  CanNm_HsmCanNmSfRepeatMessageStateGuard1/34:
  Jump functions of caller  CanNm_HsmCanNmSfRepeatMessageStateExit/33:
  Jump functions of caller  CanNm_HsmCanNmSfRepeatMessageStateEntry/32:
    callsite  CanNm_HsmCanNmSfRepeatMessageStateEntry/32 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  CanNm_HsmCanNmSfRepeatMessageStateEntry/32 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  CanNm_HsmCanNmSfRepeatMessageStateEntry/32 -> CanNm_MsgCycleTimerStart.part.0/76 : 
    callsite  CanNm_HsmCanNmSfRepeatMessageStateEntry/32 -> CanNm_RmsTimerStart/44 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3/31:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2/30:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1/29:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry/28:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4/27:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4/26:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2/25:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1/24:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry/23:
  Jump functions of caller  CanNm_HsmCanNmSfNormalOperationStateEntry/22:
  Jump functions of caller  CanNm_HsmCanNmSfSendingSubModeAction3/21:
  Jump functions of caller  CanNm_HsmCanNmSfSendingSubModeAction2/20:
    callsite  CanNm_HsmCanNmSfSendingSubModeAction2/20 -> CanNm_HandleTransmit/52 : 
  Jump functions of caller  CanNm_HsmCanNmSfSendingSubModeAction1/19:
  Jump functions of caller  CanNm_HsmCanNmSfSendingSubModeExit/18:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteSleepAction3/17:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteSleepAction2/16:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteSleepAction1/15:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1/14:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13:
    callsite  CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13 -> CanNm_MsgCycleTimerStart/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepStateGuard1/10:
  Jump functions of caller  CanNm_HsmCanNmSfReadySleepStateEntry/9:
  Jump functions of caller  CanNm_HsmCanNmSfNetworkModeGuard4/8:
  Jump functions of caller  CanNm_HsmCanNmSfNetworkModeAction3/7:
    callsite  CanNm_HsmCanNmSfNetworkModeAction3/7 -> CanNm_HandleTxConfirmation/50 : 
  Jump functions of caller  CanNm_HsmCanNmSfNetworkModeAction2/6:
    callsite  CanNm_HsmCanNmSfNetworkModeAction2/6 -> CanNm_HandleRxIndicationCommon/47 : 
  Jump functions of caller  CanNm_HsmCanNmSfNetworkModeAction1/5:
    callsite  CanNm_HsmCanNmSfNetworkModeAction1/5 -> CanNm_HandleComControl/51 : 
  Jump functions of caller  CanNm_HsmCanNmSfNetworkModeEntry/4:
  Jump functions of caller  CanNm_HsmCanNmSfBusSleepModeGuard3/3:
  Jump functions of caller  CanNm_HsmCanNmSfBusSleepModeAction1/2:
  Jump functions of caller  CanNm_HsmCanNmSfBusSleepModeEntry/1:
  Jump functions of caller  CanNm_HsmCanNmSfTOPEntry/0:
    callsite  CanNm_HsmCanNmSfTOPEntry/0 -> CanNm_InitIntVar/39 : 

 Propagating constants:

Not considering CanNm_HandleTransmit for cloning; -fipa-cp-clone disabled.
Function CanNm_HsmCanNmSfPrepareBusSleepModeAction3/38 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfPrepareBusSleepModeGuard2/37 is not versionable, reason: not a tree_versionable_function.
Not considering CanNm_HsmCanNmSfPrepareBusSleepModeEntry for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfRepeatMessageStateGuard2 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfRepeatMessageStateGuard1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfRepeatMessageStateExit for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfRepeatMessageStateEntry for cloning; -fipa-cp-clone disabled.
Function CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3/31 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2/30 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1/29 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry/28 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4/27 is not versionable, reason: not a tree_versionable_function.
Not considering CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2 for cloning; -fipa-cp-clone disabled.
Function CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1/24 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry/23 is not versionable, reason: not a tree_versionable_function.
Not considering CanNm_HsmCanNmSfNormalOperationStateEntry for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfSendingSubModeAction3 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfSendingSubModeAction2 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfSendingSubModeAction1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfSendingSubModeExit for cloning; -fipa-cp-clone disabled.
Function CanNm_HsmCanNmSfReadySleepRemoteSleepAction3/17 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfReadySleepRemoteSleepAction2/16 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfReadySleepRemoteSleepAction1/15 is not versionable, reason: not a tree_versionable_function.
Function CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1/14 is not versionable, reason: not a tree_versionable_function.
Not considering CanNm_HsmCanNmSfReadySleepRemoteActivityAction1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfReadySleepRemoteActivityEntry for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfReadySleepStateGuard1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfReadySleepStateEntry for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfNetworkModeGuard4 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfNetworkModeAction3 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfNetworkModeAction2 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfNetworkModeAction1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfNetworkModeEntry for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfBusSleepModeGuard3 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfBusSleepModeAction1 for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfBusSleepModeEntry for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HsmCanNmSfTOPEntry for cloning; -fipa-cp-clone disabled.

overall_size: 508, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: CanNm_RmsTimerStart.part.0/82:
  Node: CanNm_MsgCycleTimerStart.part.0/76:
  Node: CanNm_HandleRxIndicationCommon.part.0/73:
  Node: CanNm_HandleTransmit/52:
  Node: CanNm_HandleComControl/51:
  Node: CanNm_HandleTxConfirmation/50:
  Node: CanNm_HandleRxIndicationCommon/47:
  Node: CanNm_MsgCycleTimerStart/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanNm_RmsTimerStart/44:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanNm_InitIntVar/39:
  Node: CanNm_HsmCanNmSfPrepareBusSleepModeAction3/38:
  Node: CanNm_HsmCanNmSfPrepareBusSleepModeGuard2/37:
  Node: CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36:
  Node: CanNm_HsmCanNmSfRepeatMessageStateGuard2/35:
  Node: CanNm_HsmCanNmSfRepeatMessageStateGuard1/34:
  Node: CanNm_HsmCanNmSfRepeatMessageStateExit/33:
  Node: CanNm_HsmCanNmSfRepeatMessageStateEntry/32:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3/31:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2/30:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1/29:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry/28:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4/27:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4/26:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2/25:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1/24:
  Node: CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry/23:
  Node: CanNm_HsmCanNmSfNormalOperationStateEntry/22:
  Node: CanNm_HsmCanNmSfSendingSubModeAction3/21:
  Node: CanNm_HsmCanNmSfSendingSubModeAction2/20:
  Node: CanNm_HsmCanNmSfSendingSubModeAction1/19:
  Node: CanNm_HsmCanNmSfSendingSubModeExit/18:
  Node: CanNm_HsmCanNmSfReadySleepRemoteSleepAction3/17:
  Node: CanNm_HsmCanNmSfReadySleepRemoteSleepAction2/16:
  Node: CanNm_HsmCanNmSfReadySleepRemoteSleepAction1/15:
  Node: CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1/14:
  Node: CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13:
  Node: CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12:
  Node: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11:
  Node: CanNm_HsmCanNmSfReadySleepStateGuard1/10:
  Node: CanNm_HsmCanNmSfReadySleepStateEntry/9:
  Node: CanNm_HsmCanNmSfNetworkModeGuard4/8:
  Node: CanNm_HsmCanNmSfNetworkModeAction3/7:
  Node: CanNm_HsmCanNmSfNetworkModeAction2/6:
  Node: CanNm_HsmCanNmSfNetworkModeAction1/5:
  Node: CanNm_HsmCanNmSfNetworkModeEntry/4:
  Node: CanNm_HsmCanNmSfBusSleepModeGuard3/3:
  Node: CanNm_HsmCanNmSfBusSleepModeAction1/2:
  Node: CanNm_HsmCanNmSfBusSleepModeEntry/1:
  Node: CanNm_HsmCanNmSfTOPEntry/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CanNm_RmsTimerStart.part.0/82 (CanNm_RmsTimerStart.part.0) @0709b0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanNm_HsmScCanNm/65 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanNm_RmsTimerStart/44 (354334800 (estimated locally),0.33 per call) 
  Calls: CanNm_HsmEmitToSelfInst/64 (1073741824 (estimated locally),1.00 per call) 
CanNm_MsgCycleTimerStart.part.0/76 (CanNm_MsgCycleTimerStart.part.0) @070510e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanNm_HsmScCanNm/65 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (79530446 (estimated locally),0.07 per call) CanNm_MsgCycleTimerStart/45 (354334800 (estimated locally),0.33 per call) 
  Calls: CanNm_HsmEmitToSelfInst/64 (1073741824 (estimated locally),1.00 per call) 
CanNm_HandleRxIndicationCommon.part.0/73 (CanNm_HandleRxIndicationCommon.part.0) @070320e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanNm_HandleRxIndicationCommon/47 (536870912 (estimated locally),0.50 per call) 
  Calls: 
CanIf_Transmit/71 (CanIf_Transmit) @07032380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HandleTransmit/52 (354334802 (estimated locally),0.33 per call) 
  Calls: 
CanNm_GetPduUserData/70 (CanNm_GetPduUserData) @070322a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HandleTransmit/52 (354334802 (estimated locally),0.33 per call) 
  Calls: 
TS_AtomicClearBit_8/69 (TS_AtomicClearBit_8) @07025ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Nm_PrepareBusSleepMode/68 (Nm_PrepareBusSleepMode) @07025d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanSM_TxTimeoutException/67 (CanSM_TxTimeoutException) @070189a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfSendingSubModeAction1/19 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Nm_TxTimeoutException/66 (Nm_TxTimeoutException) @070188c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfSendingSubModeAction1/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_HsmScCanNm/65 (CanNm_HsmScCanNm) @07014168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_MsgCycleTimerStart.part.0/76 (addr)CanNm_RmsTimerStart.part.0/82 (addr)
  Availability: not_available
  Varpool flags: read-only
CanNm_HsmEmitToSelfInst/64 (CanNm_HsmEmitToSelfInst) @0700f9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_RmsTimerStart.part.0/82 (1073741824 (estimated locally),1.00 per call) CanNm_MsgCycleTimerStart.part.0/76 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_AtomicSetBit_8/63 (TS_AtomicSetBit_8) @0700f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfNetworkModeEntry/4 (93093416 (estimated locally),0.09 per call) 
  Calls: 
Nm_NetworkMode/62 (Nm_NetworkMode) @0700f380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfNetworkModeEntry/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/61 (Det_ASR40_ReportError) @0700f0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfSendingSubModeAction3/21 (177167401 (estimated locally),0.17 per call) CanNm_HsmCanNmSfBusSleepModeAction1/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Nm_NetworkStartIndication/60 (Nm_NetworkStartIndication) @0700f000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfBusSleepModeAction1/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Nm_BusSleepMode/59 (Nm_BusSleepMode) @06fe3ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HsmCanNmSfBusSleepModeEntry/1 (217325345 (estimated locally),0.20 per call) 
  Calls: 
SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/58 (SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0) @06fe3e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HandleTransmit/52 (116930485 (estimated locally),0.11 per call) CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfBusSleepModeEntry/1 (1073741824 (estimated locally),1.00 per call) CanNm_HandleTxConfirmation/50 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/57 (SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0) @06fe3d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HandleTransmit/52 (116930485 (estimated locally),0.11 per call) CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfBusSleepModeEntry/1 (1073741824 (estimated locally),1.00 per call) CanNm_HandleTxConfirmation/50 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_MemSet32/56 (TS_MemSet32) @06fe38c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_InitIntVar/39 (1073741824 (estimated locally),1.00 per call) CanNm_InitIntVar/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_RootPtr/55 (CanNm_RootPtr) @06ea4cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HandleTransmit/52 (read)CanNm_InitIntVar/39 (read)CanNm_HsmCanNmSfSendingSubModeAction1/19 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_InitIntVar/39 (read)CanNm_HandleComControl/51 (read)CanNm_HsmCanNmSfNetworkModeGuard4/8 (read)CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12 (read)CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13 (read)CanNm_HandleTransmit/52 (read)CanNm_InitIntVar/39 (read)CanNm_InitIntVar/39 (read)
  Availability: not_available
  Varpool flags:
CanNm_ChanConfig/54 (CanNm_ChanConfig) @06ea4ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_HsmCanNmSfSendingSubModeAction1/19 (read)CanNm_HsmCanNmSfSendingSubModeAction3/21 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (read)CanNm_HandleTxConfirmation/50 (read)CanNm_HandleComControl/51 (read)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (read)CanNm_InitIntVar/39 (read)CanNm_HsmCanNmSfBusSleepModeEntry/1 (read)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (read)CanNm_InitIntVar/39 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HandleRxIndicationCommon.part.0/73 (read)CanNm_HandleComControl/51 (read)CanNm_HsmCanNmSfBusSleepModeAction1/2 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_InitIntVar/39 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)
  Availability: not_available
  Varpool flags: read-only
CanNm_ChanStatus/53 (CanNm_ChanStatus) @06ea4a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_HandleComControl/51 (write)CanNm_HandleTxConfirmation/50 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (write)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfRepeatMessageStateExit/33 (write)CanNm_HsmCanNmSfRepeatMessageStateExit/33 (read)CanNm_HsmCanNmSfRepeatMessageStateGuard2/35 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (write)CanNm_HandleComControl/51 (write)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (write)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (write)CanNm_HandleTxConfirmation/50 (write)CanNm_RmsTimerStart/44 (write)CanNm_HsmCanNmSfTOPEntry/0 (write)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (write)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (write)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (write)CanNm_HsmCanNmSfTOPEntry/0 (write)CanNm_HsmCanNmSfTOPEntry/0 (write)CanNm_HsmCanNmSfTOPEntry/0 (write)CanNm_HsmCanNmSfBusSleepModeEntry/1 (write)CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (read)CanNm_InitIntVar/39 (read)CanNm_HandleTxConfirmation/50 (write)CanNm_InitIntVar/39 (write)CanNm_HsmCanNmSfNetworkModeEntry/4 (write)CanNm_HandleComControl/51 (write)CanNm_HandleRxIndicationCommon.part.0/73 (write)CanNm_HandleRxIndicationCommon/47 (read)CanNm_HsmCanNmSfBusSleepModeGuard3/3 (read)CanNm_HsmCanNmSfNetworkModeEntry/4 (write)CanNm_HsmCanNmSfNetworkModeGuard4/8 (read)CanNm_HsmCanNmSfReadySleepStateEntry/9 (write)CanNm_HsmCanNmSfReadySleepStateGuard1/10 (read)CanNm_HsmCanNmSfSendingSubModeAction2/20 (read)CanNm_HsmCanNmSfBusSleepModeEntry/1 (write)CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12 (read)CanNm_HsmCanNmSfSendingSubModeExit/18 (write)CanNm_HsmCanNmSfSendingSubModeAction3/21 (write)CanNm_HsmCanNmSfNormalOperationStateEntry/22 (write)CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2/25 (read)CanNm_InitIntVar/39 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (write)CanNm_HandleComControl/51 (read)CanNm_HandleComControl/51 (write)CanNm_HandleComControl/51 (write)CanNm_HandleComControl/51 (write)CanNm_HsmCanNmSfBusSleepModeEntry/1 (read)CanNm_HsmCanNmSfBusSleepModeEntry/1 (write)CanNm_HsmCanNmSfNetworkModeEntry/4 (read)CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4/26 (read)CanNm_MsgCycleTimerStart/45 (write)CanNm_HsmCanNmSfNetworkModeEntry/4 (write)CanNm_HsmCanNmSfSendingSubModeAction3/21 (read)CanNm_HsmCanNmSfSendingSubModeAction3/21 (read)CanNm_HandleTransmit/52 (write)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (write)CanNm_HsmCanNmSfRepeatMessageStateExit/33 (write)CanNm_HsmCanNmSfRepeatMessageStateExit/33 (write)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (write)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (write)CanNm_HsmCanNmSfRepeatMessageStateGuard1/34 (read)CanNm_HsmCanNmSfRepeatMessageStateGuard1/34 (read)CanNm_HsmCanNmSfRepeatMessageStateGuard2/35 (read)CanNm_InitIntVar/39 (read)CanNm_InitIntVar/39 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (read)CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (write)CanNm_InitIntVar/39 (write)CanNm_InitIntVar/39 (write)CanNm_InitIntVar/39 (write)CanNm_InitIntVar/39 (write)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (write)CanNm_HandleTransmit/52 (write)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (write)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (read)CanNm_HandleTransmit/52 (write)CanNm_HandleTransmit/52 (read)
  Availability: not_available
  Varpool flags:
CanNm_HandleTransmit/52 (CanNm_HandleTransmit) @06fe3540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)CanNm_RootPtr/55 (read)CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanConfig/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanNm_HsmCanNmSfSendingSubModeAction2/20 (354334802 (estimated locally),0.33 per call) 
  Calls: CanNm_MsgCycleTimerStart/45 (177167401 (estimated locally),0.17 per call) CanNm_MsgCycleTimerStart/45 (59351079 (estimated locally),0.06 per call) CanNm_MsgCycleTimerStart/45 (89925878 (estimated locally),0.08 per call) CanNm_MsgCycleTimerStart/45 (89925878 (estimated locally),0.08 per call) CanNm_RmsTimerStart/44 (177167401 (estimated locally),0.17 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/58 (116930485 (estimated locally),0.11 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/57 (116930485 (estimated locally),0.11 per call) CanIf_Transmit/71 (354334802 (estimated locally),0.33 per call) CanNm_GetPduUserData/70 (354334802 (estimated locally),0.33 per call) 
CanNm_HandleComControl/51 (CanNm_HandleComControl) @06fe3380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanNm_ChanStatus/53 (read)CanNm_RootPtr/55 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanNm_HsmCanNmSfNetworkModeAction1/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: CanNm_MsgCycleTimerStart/45 (354334802 (estimated locally),0.33 per call) 
CanNm_HandleTxConfirmation/50 (CanNm_HandleTxConfirmation) @06fe31c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanNm_HsmCanNmSfNetworkModeAction3/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/57 (1073741824 (estimated locally),1.00 per call) 
CanNm_HandleRxIndicationCommon/47 (CanNm_HandleRxIndicationCommon) @06fe2b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanNm_HsmCanNmSfNetworkModeAction2/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: CanNm_HandleRxIndicationCommon.part.0/73 (536870912 (estimated locally),0.50 per call) 
CanNm_MsgCycleTimerStart/45 (CanNm_MsgCycleTimerStart) @06fe27e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanNm_HandleTransmit/52 (177167401 (estimated locally),0.17 per call) CanNm_HandleTransmit/52 (59351079 (estimated locally),0.06 per call) CanNm_HandleTransmit/52 (89925878 (estimated locally),0.08 per call) CanNm_HandleTransmit/52 (89925878 (estimated locally),0.08 per call) CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (177167401 (estimated locally),0.17 per call) CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (280173065 (estimated locally),0.26 per call) CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13 (1073741824 (estimated locally),1.00 per call) CanNm_HandleComControl/51 (354334802 (estimated locally),0.33 per call) 
  Calls: CanNm_MsgCycleTimerStart.part.0/76 (354334800 (estimated locally),0.33 per call) 
CanNm_RmsTimerStart/44 (CanNm_RmsTimerStart) @06fe2620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanNm_HandleTransmit/52 (177167401 (estimated locally),0.17 per call) CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: CanNm_RmsTimerStart.part.0/82 (354334800 (estimated locally),0.33 per call) 
CanNm_InitIntVar/39 (CanNm_InitIntVar) @06ea8d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (read)CanNm_RootPtr/55 (read)CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: CanNm_HsmCanNmSfTOPEntry/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_MemSet32/56 (1073741824 (estimated locally),1.00 per call) TS_MemSet32/56 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfPrepareBusSleepModeAction3/38 (CanNm_HsmCanNmSfPrepareBusSleepModeAction3) @06ea8b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfPrepareBusSleepModeGuard2/37 (CanNm_HsmCanNmSfPrepareBusSleepModeGuard2) @06ea89a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfBusSleepModeGuard3/3 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36 (CanNm_HsmCanNmSfPrepareBusSleepModeEntry) @06ea87e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_AtomicClearBit_8/69 (1073741824 (estimated locally),1.00 per call) Nm_PrepareBusSleepMode/68 (1073741824 (estimated locally),1.00 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/57 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfRepeatMessageStateGuard2/35 (CanNm_HsmCanNmSfRepeatMessageStateGuard2) @06ea8620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfRepeatMessageStateGuard1/34 (CanNm_HsmCanNmSfRepeatMessageStateGuard1) @06ea8460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfRepeatMessageStateExit/33 (CanNm_HsmCanNmSfRepeatMessageStateExit) @06ea82a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfRepeatMessageStateEntry/32 (CanNm_HsmCanNmSfRepeatMessageStateEntry) @06ea80e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_RootPtr/55 (read)CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_MsgCycleTimerStart/45 (177167401 (estimated locally),0.17 per call) CanNm_MsgCycleTimerStart/45 (280173065 (estimated locally),0.26 per call) CanNm_MsgCycleTimerStart.part.0/76 (79530446 (estimated locally),0.07 per call) CanNm_RmsTimerStart/44 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3/31 (CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3) @06ea3ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfNetworkModeAction2/6 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2/30 (CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2) @06ea3d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1/29 (CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1) @06ea3b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2/25 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry/28 (CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry) @06ea39a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4/27 (CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4) @06ea37e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4/26 (CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4) @06ea3620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2/25 (CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2) @06ea3460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1/29 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1/24 (CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1) @06ea32a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfNetworkModeAction2/6 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry/23 (CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry) @06ea30e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNormalOperationStateEntry/22 (CanNm_HsmCanNmSfNormalOperationStateEntry) @06e9eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfSendingSubModeAction3/21 (CanNm_HsmCanNmSfSendingSubModeAction3) @06e9ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/61 (177167401 (estimated locally),0.17 per call) 
CanNm_HsmCanNmSfSendingSubModeAction2/20 (CanNm_HsmCanNmSfSendingSubModeAction2) @06e9eb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HandleTransmit/52 (354334802 (estimated locally),0.33 per call) 
CanNm_HsmCanNmSfSendingSubModeAction1/19 (CanNm_HsmCanNmSfSendingSubModeAction1) @06e9e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanConfig/54 (read)CanNm_RootPtr/55 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_TxTimeoutException/67 (217325345 (estimated locally),0.20 per call) Nm_TxTimeoutException/66 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfSendingSubModeExit/18 (CanNm_HsmCanNmSfSendingSubModeExit) @06e9e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfReadySleepRemoteSleepAction3/17 (CanNm_HsmCanNmSfReadySleepRemoteSleepAction3) @06e9e620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfNetworkModeAction2/6 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfReadySleepRemoteSleepAction2/16 (CanNm_HsmCanNmSfReadySleepRemoteSleepAction2) @06e9e460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfReadySleepRemoteSleepAction1/15 (CanNm_HsmCanNmSfReadySleepRemoteSleepAction1) @06e9e2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1/14 (CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1) @06e9e0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13 (CanNm_HsmCanNmSfReadySleepRemoteActivityAction1) @06f1fee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/55 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: CanNm_HsmCanNmSfReadySleepRemoteSleepAction1/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: CanNm_MsgCycleTimerStart/45 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12 (CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1) @06f1fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11 (CanNm_HsmCanNmSfReadySleepRemoteActivityEntry) @06f1fb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: CanNm_HsmCanNmSfPrepareBusSleepModeAction3/38 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2/30 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry/28 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4/27 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry/23 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfReadySleepRemoteSleepAction2/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_HsmCanNmSfReadySleepStateGuard1/10 (CanNm_HsmCanNmSfReadySleepStateGuard1) @06f1f9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfReadySleepStateEntry/9 (CanNm_HsmCanNmSfReadySleepStateEntry) @06f1f7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfNetworkModeGuard4/8 (CanNm_HsmCanNmSfNetworkModeGuard4) @06f1f620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/55 (read)CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_HsmCanNmSfNetworkModeAction3/7 (CanNm_HsmCanNmSfNetworkModeAction3) @06f1f460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HandleTxConfirmation/50 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNetworkModeAction2/6 (CanNm_HsmCanNmSfNetworkModeAction2) @06f1f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3/31 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1/24 (1073741824 (estimated locally),1.00 per call) CanNm_HsmCanNmSfReadySleepRemoteSleepAction3/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: CanNm_HandleRxIndicationCommon/47 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNetworkModeAction1/5 (CanNm_HsmCanNmSfNetworkModeAction1) @06f1f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HandleComControl/51 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfNetworkModeEntry/4 (CanNm_HsmCanNmSfNetworkModeEntry) @06f167e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (read)CanNm_ChanConfig/54 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_AtomicSetBit_8/63 (93093416 (estimated locally),0.09 per call) Nm_NetworkMode/62 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfBusSleepModeGuard3/3 (CanNm_HsmCanNmSfBusSleepModeGuard3) @06f16380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: CanNm_HsmCanNmSfPrepareBusSleepModeGuard2/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_HsmCanNmSfBusSleepModeAction1/2 (CanNm_HsmCanNmSfBusSleepModeAction1) @06f16e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanConfig/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/61 (1073741824 (estimated locally),1.00 per call) Nm_NetworkStartIndication/60 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfBusSleepModeEntry/1 (CanNm_HsmCanNmSfBusSleepModeEntry) @06f16c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (read)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanConfig/54 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Nm_BusSleepMode/59 (217325345 (estimated locally),0.20 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/58 (1073741824 (estimated locally),1.00 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/57 (1073741824 (estimated locally),1.00 per call) 
CanNm_HsmCanNmSfTOPEntry/0 (CanNm_HsmCanNmSfTOPEntry) @06f16a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)CanNm_ChanStatus/53 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_InitIntVar/39 (1073741824 (estimated locally),1.00 per call) 

;; Function CanNm_HandleRxIndicationCommon (CanNm_HandleRxIndicationCommon, funcdef_no=47, decl_uid=9882, cgraph_uid=48, symbol_order=47)

Modification phase of node CanNm_HandleRxIndicationCommon/47
CanNm_HandleRxIndicationCommon ()
{
  unsigned char _1;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _5 = _1 & 1;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  CanNm_HandleRxIndicationCommon.part.0 ();

  <bb 4> [local count: 1073741824]:
  # DEBUG CanNmTime => NULL
  return;

}



;; Function CanNm_MsgCycleTimerStart (CanNm_MsgCycleTimerStart, funcdef_no=45, decl_uid=9878, cgraph_uid=46, symbol_order=45)

Modification phase of node CanNm_MsgCycleTimerStart/45
CanNm_MsgCycleTimerStart (CanNm_TimeType MsgCycleTimer)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = MsgCycleTimer_2(D);
  # DEBUG BEGIN_STMT
  if (MsgCycleTimer_2(D) == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334800]:
  # DEBUG D#1 => MsgCycleTimer_2(D)
  CanNm_MsgCycleTimerStart.part.0 ();

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function CanNm_HsmCanNmSfTOPEntry (CanNm_HsmCanNmSfTOPEntry, funcdef_no=0, decl_uid=5574, cgraph_uid=1, symbol_order=0)

Modification phase of node CanNm_HsmCanNmSfTOPEntry/0
CanNm_HsmCanNmSfTOPEntry ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_InitIntVar ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].TimeoutTimer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY CanNm_NmTimerStop
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CanNmTimer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY CanNm_UniTimerStop
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].UniversalTimer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY CanNm_MsgCycleTimerStop
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = 0;
  return;

}



;; Function CanNm_HsmCanNmSfBusSleepModeEntry (CanNm_HsmCanNmSfBusSleepModeEntry, funcdef_no=1, decl_uid=5576, cgraph_uid=2, symbol_order=1)

Modification phase of node CanNm_HsmCanNmSfBusSleepModeEntry/1
CanNm_HsmCanNmSfBusSleepModeEntry ()
{
  Nm_StateType PrevState;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PrevState_4 = CanNm_ChanStatus[0].CurState;
  # DEBUG PrevState => PrevState_4
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp1 = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp2 = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 1;
  # DEBUG BEGIN_STMT
  if (PrevState_4 == 2)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanConfig[0].nmChannelId;
  Nm_BusSleepMode (_1);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function CanNm_HsmCanNmSfBusSleepModeAction1 (CanNm_HsmCanNmSfBusSleepModeAction1, funcdef_no=2, decl_uid=5578, cgraph_uid=3, symbol_order=2)

Modification phase of node CanNm_HsmCanNmSfBusSleepModeAction1/2
CanNm_HsmCanNmSfBusSleepModeAction1 ()
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanConfig[0].nmChannelId;
  Nm_NetworkStartIndication (_1);
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 16, 4);
  return;

}



;; Function CanNm_HsmCanNmSfBusSleepModeGuard3 (CanNm_HsmCanNmSfBusSleepModeGuard3, funcdef_no=3, decl_uid=5580, cgraph_uid=4, symbol_order=3)

Modification phase of node CanNm_HsmCanNmSfBusSleepModeGuard3/3
CanNm_HsmCanNmSfBusSleepModeGuard3 ()
{
  boolean ret;
  unsigned char _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _2 = (unsigned int) _1;
  _3 = _2 >> 1;
  _4 = (unsigned char) _3;
  ret_6 = _4 & 1;
  # DEBUG ret => ret_6
  # DEBUG BEGIN_STMT
  return ret_6;

}



;; Function CanNm_HsmCanNmSfNetworkModeEntry (CanNm_HsmCanNmSfNetworkModeEntry, funcdef_no=4, decl_uid=5582, cgraph_uid=5, symbol_order=4)

Modification phase of node CanNm_HsmCanNmSfNetworkModeEntry/4
CanNm_HsmCanNmSfNetworkModeEntry ()
{
  unsigned char _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  uint8 * _7;
  unsigned char _8;
  sizetype _9;
  uint8 * _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _16 = _1 & 1;
  if (_16 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanConfig[0].CanNmTime;
  # DEBUG CanNmTime => _2
  # DEBUG INLINE_ENTRY CanNm_NmTimerStart
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CanNmTimer = _2;

  <bb 4> [local count: 1073741824]:
  # DEBUG CanNmTime => NULL
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanConfig[0].nmChannelId;
  Nm_NetworkMode (_3);
  # DEBUG BEGIN_STMT
  _4 = CanNm_ChanStatus[0].ActiveWakeUp1;
  if (_4 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 365072220]:
  _5 = CanNm_ChanStatus[0].CurState;
  _6 = _5 + 255;
  if (_6 <= 1)
    goto <bb 6>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 6> [local count: 93093416]:
  # DEBUG BEGIN_STMT
  _7 = CanNm_ChanStatus[0].TxPduPtr;
  _8 = CanNm_ChanConfig[0].CbvPos;
  _9 = (sizetype) _8;
  _10 = _7 + _9;
  TS_AtomicSetBit_8 (_10, 4);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].NmTimerExpired = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].FirstCanIfTransmitOk = 0;
  # DEBUG BEGIN_STMT
  _11 = CanNm_ChanStatus[0].MessageFlags;
  _12 = _11 | 1;
  CanNm_ChanStatus[0].MessageFlags = _12;
  return;

}



;; Function CanNm_HsmCanNmSfNetworkModeAction1 (CanNm_HsmCanNmSfNetworkModeAction1, funcdef_no=5, decl_uid=5584, cgraph_uid=6, symbol_order=5)

Modification phase of node CanNm_HsmCanNmSfNetworkModeAction1/5
CanNm_HsmCanNmSfNetworkModeAction1 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_HandleComControl ();
  return;

}



;; Function CanNm_HsmCanNmSfNetworkModeAction2 (CanNm_HsmCanNmSfNetworkModeAction2, funcdef_no=6, decl_uid=5586, cgraph_uid=7, symbol_order=6)

Modification phase of node CanNm_HsmCanNmSfNetworkModeAction2/6
CanNm_HsmCanNmSfNetworkModeAction2 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_HandleRxIndicationCommon ();
  return;

}



;; Function CanNm_HsmCanNmSfNetworkModeAction3 (CanNm_HsmCanNmSfNetworkModeAction3, funcdef_no=7, decl_uid=5588, cgraph_uid=8, symbol_order=7)

Modification phase of node CanNm_HsmCanNmSfNetworkModeAction3/7
CanNm_HsmCanNmSfNetworkModeAction3 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_HandleTxConfirmation ();
  return;

}



;; Function CanNm_HsmCanNmSfNetworkModeGuard4 (CanNm_HsmCanNmSfNetworkModeGuard4, funcdef_no=8, decl_uid=5590, cgraph_uid=9, symbol_order=8)

Modification phase of node CanNm_HsmCanNmSfNetworkModeGuard4/8
CanNm_HsmCanNmSfNetworkModeGuard4 ()
{
  boolean ret;
  const struct CanNm_ConfigType * CanNm_RootPtr.5_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.5_1 = CanNm_RootPtr;
  _2 = CanNm_RootPtr.5_1->CanNm_ChannelData[0].PnHandleMultipleNetworkRequests;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = CanNm_ChanStatus[0].ChanStatus;
  _5 = _3 & 2;
  if (_5 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 891205715]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0

  <bb 5> [local count: 1073741824]:
  # ret_4 = PHI <1(3), 0(4)>
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  return ret_4;

}



;; Function CanNm_HsmCanNmSfReadySleepStateEntry (CanNm_HsmCanNmSfReadySleepStateEntry, funcdef_no=9, decl_uid=5592, cgraph_uid=10, symbol_order=9)

Modification phase of node CanNm_HsmCanNmSfReadySleepStateEntry/9
CanNm_HsmCanNmSfReadySleepStateEntry ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 3;
  return;

}



;; Function CanNm_HsmCanNmSfReadySleepStateGuard1 (CanNm_HsmCanNmSfReadySleepStateGuard1, funcdef_no=10, decl_uid=5594, cgraph_uid=11, symbol_order=10)

Modification phase of node CanNm_HsmCanNmSfReadySleepStateGuard1/10
CanNm_HsmCanNmSfReadySleepStateGuard1 ()
{
  short unsigned int _1;
  unsigned char iftmp.6_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].CanNmTimer;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.6_2 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.6_2
  # DEBUG BEGIN_STMT
  return iftmp.6_2;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (CanNm_HsmCanNmSfReadySleepRemoteActivityEntry, funcdef_no=11, decl_uid=5596, cgraph_uid=12, symbol_order=11)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteActivityEntry/11
CanNm_HsmCanNmSfReadySleepRemoteActivityEntry ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1 (CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1, funcdef_no=12, decl_uid=5598, cgraph_uid=13, symbol_order=12)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1/12
CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1 ()
{
  boolean ret;
  const struct CanNm_ConfigType * CanNm_RootPtr.7_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.7_1 = CanNm_RootPtr;
  _2 = CanNm_RootPtr.7_1->CanNm_ChannelData[0].PnHandleMultipleNetworkRequests;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _3 = CanNm_ChanStatus[0].ChanStatus;
  _6 = _3 & 2;
  if (_6 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0

  <bb 5> [local count: 1073741824]:
  # ret_4 = PHI <1(3), 0(4)>
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  return ret_4;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteActivityAction1 (CanNm_HsmCanNmSfReadySleepRemoteActivityAction1, funcdef_no=13, decl_uid=5600, cgraph_uid=14, symbol_order=13)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteActivityAction1/13
CanNm_HsmCanNmSfReadySleepRemoteActivityAction1 ()
{
  const struct CanNm_ConfigType * CanNm_RootPtr.8_1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.8_1 = CanNm_RootPtr;
  _2 = CanNm_RootPtr.8_1->CanNm_ChannelData[0].CanNmMsgCycleOffset;
  CanNm_MsgCycleTimerStart (_2);
  return;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1 (CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1, funcdef_no=77, decl_uid=5602, cgraph_uid=15, symbol_order=14)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1/14
CanNm_HsmCanNmSfReadySleepRemoteSleepGuard1 ()
{
  boolean retval.75;

  <bb 2> [local count: 1073741824]:
  retval.75_2 = CanNm_HsmCanNmSfReadySleepRemoteActivityGuard1 (); [tail call]
  return retval.75_2;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteSleepAction1 (CanNm_HsmCanNmSfReadySleepRemoteSleepAction1, funcdef_no=79, decl_uid=5604, cgraph_uid=16, symbol_order=15)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteSleepAction1/15
CanNm_HsmCanNmSfReadySleepRemoteSleepAction1 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityAction1 (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteSleepAction2 (CanNm_HsmCanNmSfReadySleepRemoteSleepAction2, funcdef_no=65, decl_uid=5606, cgraph_uid=17, symbol_order=16)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteSleepAction2/16
CanNm_HsmCanNmSfReadySleepRemoteSleepAction2 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfReadySleepRemoteSleepAction3 (CanNm_HsmCanNmSfReadySleepRemoteSleepAction3, funcdef_no=59, decl_uid=5608, cgraph_uid=18, symbol_order=17)

Modification phase of node CanNm_HsmCanNmSfReadySleepRemoteSleepAction3/17
CanNm_HsmCanNmSfReadySleepRemoteSleepAction3 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfNetworkModeAction2 (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfSendingSubModeExit (CanNm_HsmCanNmSfSendingSubModeExit, funcdef_no=18, decl_uid=5610, cgraph_uid=19, symbol_order=18)

Modification phase of node CanNm_HsmCanNmSfSendingSubModeExit/18
CanNm_HsmCanNmSfSendingSubModeExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY CanNm_MsgCycleTimerStop
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = 0;
  return;

}



;; Function CanNm_HsmCanNmSfSendingSubModeAction1 (CanNm_HsmCanNmSfSendingSubModeAction1, funcdef_no=19, decl_uid=5612, cgraph_uid=20, symbol_order=19)

Modification phase of node CanNm_HsmCanNmSfSendingSubModeAction1/19
CanNm_HsmCanNmSfSendingSubModeAction1 ()
{
  unsigned char _1;
  const struct CanNm_ConfigType * CanNm_RootPtr.11_2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanConfig[0].nmChannelId;
  Nm_TxTimeoutException (_1);
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.11_2 = CanNm_RootPtr;
  _3 = CanNm_RootPtr.11_2->CanNm_ChannelData[0].PnEnabled;
  if (_3 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  CanSM_TxTimeoutException (_1);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function CanNm_HsmCanNmSfSendingSubModeAction3 (CanNm_HsmCanNmSfSendingSubModeAction3, funcdef_no=21, decl_uid=5616, cgraph_uid=22, symbol_order=21)

Modification phase of node CanNm_HsmCanNmSfSendingSubModeAction3/21
CanNm_HsmCanNmSfSendingSubModeAction3 ()
{
  short unsigned int _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].CanNmTimer;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanStatus[0].ChanStatus;
  _7 = _2 & 1;
  if (_7 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 19, 17);
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanConfig[0].CanNmTime;
  # DEBUG CanNmTime => _3
  # DEBUG INLINE_ENTRY CanNm_NmTimerStart
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CanNmTimer = _3;

  <bb 5> [local count: 1073741824]:
  # DEBUG CanNmTime => NULL
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationStateEntry (CanNm_HsmCanNmSfNormalOperationStateEntry, funcdef_no=22, decl_uid=5618, cgraph_uid=23, symbol_order=22)

Modification phase of node CanNm_HsmCanNmSfNormalOperationStateEntry/22
CanNm_HsmCanNmSfNormalOperationStateEntry ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 4;
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry (CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry, funcdef_no=67, decl_uid=5620, cgraph_uid=24, symbol_order=23)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry/23
CanNm_HsmCanNmSfNormalOperationRemoteActivityEntry ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1 (CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1, funcdef_no=61, decl_uid=5622, cgraph_uid=25, symbol_order=24)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1/24
CanNm_HsmCanNmSfNormalOperationRemoteActivityAction1 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfNetworkModeAction2 (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2 (CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2, funcdef_no=25, decl_uid=5624, cgraph_uid=26, symbol_order=25)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2/25
CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2 ()
{
  unsigned char _1;
  unsigned char iftmp.12_2;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _4 = _1 & 2;
  if (_4 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.12_2 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.12_2
  # DEBUG BEGIN_STMT
  return iftmp.12_2;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4 (CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4, funcdef_no=26, decl_uid=5626, cgraph_uid=27, symbol_order=26)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4/26
CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard4 ()
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _4 = _1 & 1;
  _2 = 1 - _4;
  # DEBUG ret => _2
  # DEBUG BEGIN_STMT
  return _2;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4 (CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4, funcdef_no=69, decl_uid=5628, cgraph_uid=28, symbol_order=27)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4/27
CanNm_HsmCanNmSfNormalOperationRemoteActivityAction4 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry (CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry, funcdef_no=71, decl_uid=5630, cgraph_uid=29, symbol_order=28)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry/28
CanNm_HsmCanNmSfNormalOperationRemoteSleepEntry ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1 (CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1, funcdef_no=81, decl_uid=5632, cgraph_uid=30, symbol_order=29)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1/29
CanNm_HsmCanNmSfNormalOperationRemoteSleepGuard1 ()
{
  boolean retval.76;

  <bb 2> [local count: 1073741824]:
  retval.76_2 = CanNm_HsmCanNmSfNormalOperationRemoteActivityGuard2 (); [tail call]
  return retval.76_2;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2 (CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2, funcdef_no=73, decl_uid=5634, cgraph_uid=31, symbol_order=30)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2/30
CanNm_HsmCanNmSfNormalOperationRemoteSleepAction2 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3 (CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3, funcdef_no=63, decl_uid=5636, cgraph_uid=32, symbol_order=31)

Modification phase of node CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3/31
CanNm_HsmCanNmSfNormalOperationRemoteSleepAction3 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfNetworkModeAction2 (); [tail call]
  return;

}



;; Function CanNm_HsmCanNmSfRepeatMessageStateEntry (CanNm_HsmCanNmSfRepeatMessageStateEntry, funcdef_no=32, decl_uid=5638, cgraph_uid=33, symbol_order=32)

Modification phase of node CanNm_HsmCanNmSfRepeatMessageStateEntry/32
CanNm_HsmCanNmSfRepeatMessageStateEntry ()
{
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  short unsigned int _8;
  const struct CanNm_ConfigType * CanNm_RootPtr.15_9;
  short unsigned int _10;
  const struct CanNm_ConfigType * CanNm_RootPtr.16_11;
  short unsigned int _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _24;
  unsigned char _29;
  unsigned char _30;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].MessageFlags;
  _2 = _1 & 253;
  CanNm_ChanStatus[0].MessageFlags = _2;
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanConfig[0].RMSTime;
  CanNm_RmsTimerStart (_3);
  # DEBUG BEGIN_STMT
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = CanNm_ChanStatus[0].MessageFlags;
  _5 = _4 | 8;
  CanNm_ChanStatus[0].MessageFlags = _5;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 5;
  # DEBUG BEGIN_STMT
  _6 = CanNm_ChanStatus[0].ChanStatus;
  _24 = _6 & 1;
  if (_24 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = CanNm_ChanStatus[0].MessageFlags;
  _29 = _7 & 1;
  if (_29 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 10>; [33.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  _30 = _6 & 2;
  if (_30 != 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 7> [local count: 241001352]:
  _8 = CanNm_ChanConfig[0].ImmediateNmTransmissions;
  if (_8 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 79530446]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ImmediateNmTransmissionCounter = _8;
  # DEBUG BEGIN_STMT
  # DEBUG MsgCycleTimer => 0
  # DEBUG INLINE_ENTRY CanNm_MsgCycleTimerStart
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = 0;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 0
  CanNm_MsgCycleTimerStart.part.0 ();
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 280173065]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.15_9 = CanNm_RootPtr;
  _10 = CanNm_RootPtr.15_9->CanNm_ChannelData[0].CanNmMsgCycleOffset;
  CanNm_MsgCycleTimerStart (_10);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.16_11 = CanNm_RootPtr;
  _12 = CanNm_RootPtr.16_11->CanNm_ChannelData[0].CanNmMsgCycleOffset;
  CanNm_MsgCycleTimerStart (_12);

  <bb 11> [local count: 1073741824]:
  # DEBUG MsgCycleTimer => NULL
  # DEBUG BEGIN_STMT
  _13 = CanNm_ChanStatus[0].MessageFlags;
  _14 = _13 & 254;
  CanNm_ChanStatus[0].MessageFlags = _14;
  return;

}



;; Function CanNm_HsmCanNmSfRepeatMessageStateExit (CanNm_HsmCanNmSfRepeatMessageStateExit, funcdef_no=33, decl_uid=5640, cgraph_uid=34, symbol_order=33)

Modification phase of node CanNm_HsmCanNmSfRepeatMessageStateExit/33
CanNm_HsmCanNmSfRepeatMessageStateExit ()
{
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ImmediateNmTransmissionCounter = 0;
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].MessageFlags;
  _2 = _1 & 247;
  CanNm_ChanStatus[0].MessageFlags = _2;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].RmsTimer = 0;
  return;

}



;; Function CanNm_HsmCanNmSfRepeatMessageStateGuard1 (CanNm_HsmCanNmSfRepeatMessageStateGuard1, funcdef_no=34, decl_uid=5642, cgraph_uid=35, symbol_order=34)

Modification phase of node CanNm_HsmCanNmSfRepeatMessageStateGuard1/34
CanNm_HsmCanNmSfRepeatMessageStateGuard1 ()
{
  unsigned char _1;
  short unsigned int _2;
  unsigned char iftmp.17_3;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _5 = _1 & 2;
  if (_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = CanNm_ChanStatus[0].RmsTimer;
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 805306369]:

  <bb 5> [local count: 1073741824]:
  # iftmp.17_3 = PHI <1(3), 0(4)>
  # DEBUG ret => iftmp.17_3
  # DEBUG BEGIN_STMT
  return iftmp.17_3;

}



;; Function CanNm_HsmCanNmSfRepeatMessageStateGuard2 (CanNm_HsmCanNmSfRepeatMessageStateGuard2, funcdef_no=35, decl_uid=5644, cgraph_uid=36, symbol_order=35)

Modification phase of node CanNm_HsmCanNmSfRepeatMessageStateGuard2/35
CanNm_HsmCanNmSfRepeatMessageStateGuard2 ()
{
  unsigned char _1;
  short unsigned int _2;
  unsigned char iftmp.18_3;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _5 = _1 & 2;
  if (_5 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  _2 = CanNm_ChanStatus[0].RmsTimer;
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 805306369]:

  <bb 5> [local count: 1073741824]:
  # iftmp.18_3 = PHI <1(3), 0(4)>
  # DEBUG ret => iftmp.18_3
  # DEBUG BEGIN_STMT
  return iftmp.18_3;

}



;; Function CanNm_HsmCanNmSfPrepareBusSleepModeEntry (CanNm_HsmCanNmSfPrepareBusSleepModeEntry, funcdef_no=36, decl_uid=5646, cgraph_uid=37, symbol_order=36)

Modification phase of node CanNm_HsmCanNmSfPrepareBusSleepModeEntry/36
CanNm_HsmCanNmSfPrepareBusSleepModeEntry ()
{
  short unsigned int _1;
  unsigned char _2;
  uint8 * _3;
  unsigned char _4;
  sizetype _5;
  uint8 * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp1 = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp2 = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanConfig[0].WBSTime;
  # DEBUG UniTimer => _1
  # DEBUG INLINE_ENTRY CanNm_UniTimerStart
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].UniversalTimer = _1;
  # DEBUG UniTimer => NULL
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 2;
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanConfig[0].nmChannelId;
  Nm_PrepareBusSleepMode (_2);
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].TxPduPtr;
  _4 = CanNm_ChanConfig[0].CbvPos;
  _5 = (sizetype) _4;
  _6 = _3 + _5;
  TS_AtomicClearBit_8 (_6, 4);
  return;

}



;; Function CanNm_HsmCanNmSfPrepareBusSleepModeGuard2 (CanNm_HsmCanNmSfPrepareBusSleepModeGuard2, funcdef_no=57, decl_uid=5648, cgraph_uid=38, symbol_order=37)

Modification phase of node CanNm_HsmCanNmSfPrepareBusSleepModeGuard2/37
CanNm_HsmCanNmSfPrepareBusSleepModeGuard2 ()
{
  boolean retval.74;

  <bb 2> [local count: 1073741824]:
  retval.74_2 = CanNm_HsmCanNmSfBusSleepModeGuard3 (); [tail call]
  return retval.74_2;

}



;; Function CanNm_HsmCanNmSfPrepareBusSleepModeAction3 (CanNm_HsmCanNmSfPrepareBusSleepModeAction3, funcdef_no=75, decl_uid=5650, cgraph_uid=39, symbol_order=38)

Modification phase of node CanNm_HsmCanNmSfPrepareBusSleepModeAction3/38
CanNm_HsmCanNmSfPrepareBusSleepModeAction3 ()
{
  <bb 2> [local count: 1073741824]:
  CanNm_HsmCanNmSfReadySleepRemoteActivityEntry (); [tail call]
  return;

}



;; Function CanNm_HandleTransmit (CanNm_HandleTransmit, funcdef_no=52, decl_uid=9892, cgraph_uid=53, symbol_order=52)

Modification phase of node CanNm_HandleTransmit/52
CanNm_HandleTransmit ()
{
  Std_ReturnType retVal;
  struct PduInfoType pduInfo;
  unsigned char _1;
  uint8 * _2;
  const struct CanNm_ConfigType * CanNm_RootPtr.19_3;
  short unsigned int _4;
  const struct CanNm_ConfigType * CanNm_RootPtr.20_5;
  short unsigned int _6;
  short unsigned int _7;
  unsigned char _8;
  unsigned char _9;
  short unsigned int _10;
  unsigned char _11;
  unsigned char _12;
  short unsigned int _13;
  short unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  unsigned char _19;
  short unsigned int _20;
  short unsigned int _21;
  unsigned char _26;
  unsigned char _40;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].MessageFlags;
  _26 = _1 & 2;
  if (_26 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanStatus[0].TxPduPtr;
  pduInfo.SduDataPtr = _2;
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.19_3 = CanNm_RootPtr;
  _4 = CanNm_RootPtr.19_3->CanNm_ChannelData[0].RxPduLength;
  pduInfo.SduLength = _4;
  # DEBUG BEGIN_STMT
  CanNm_GetPduUserData (0, &pduInfo);
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.20_5 = CanNm_RootPtr;
  _6 = CanNm_RootPtr.20_5->CanNm_ChannelData[0].TxPduId;
  retVal_32 = CanIf_Transmit (_6, &pduInfo);
  # DEBUG retVal => retVal_32
  # DEBUG BEGIN_STMT
  if (retVal_32 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].FirstCanIfTransmitOk = 1;
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = CanNm_ChanConfig[0].MsgTimeoutTime;
  CanNm_ChanStatus[0].TimeoutTimer = _7;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _8 = CanNm_ChanStatus[0].MessageFlags;
  _9 = _8 | 2;
  CanNm_ChanStatus[0].MessageFlags = _9;

  <bb 5> [local count: 1073741824]:
  # retVal_22 = PHI <1(2), retVal_32(3), 0(4)>
  # DEBUG retVal => retVal_22
  # DEBUG BEGIN_STMT
  _10 = BIT_FIELD_REF <MEM[(void *)&CanNm_ChanStatus], 16, 208>;
  if (_10 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _12 = CanNm_ChanStatus[0].MessageFlags;
  _40 = _12 & 8;
  if (_40 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _13 = CanNm_ChanConfig[0].RMSTime;
  _14 = _13 + 1;
  CanNm_RmsTimerStart (_14);

  <bb 8> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG MsgCycleTimer => 1
  # DEBUG INLINE_ENTRY CanNm_MsgCycleTimerStart
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = 1;
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _15 = CanNm_ChanStatus[0].ImmediateNmTransmissionCounter;
  if (_15 != 0)
    goto <bb 10>; [67.00%]
  else
    goto <bb 17>; [33.00%]

  <bb 10> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  if (retVal_22 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 11> [local count: 179851756]:
  # DEBUG BEGIN_STMT
  _16 = _15 + 65535;
  CanNm_ChanStatus[0].ImmediateNmTransmissionCounter = _16;
  # DEBUG BEGIN_STMT
  if (_16 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 89925878]:
  # DEBUG BEGIN_STMT
  _17 = CanNm_ChanConfig[0].ImmediateNmCycleTime;
  CanNm_MsgCycleTimerStart (_17);
  goto <bb 18>; [100.00%]

  <bb 13> [local count: 89925878]:
  # DEBUG BEGIN_STMT
  _18 = CanNm_ChanConfig[0].MsgCycleTime;
  CanNm_MsgCycleTimerStart (_18);
  goto <bb 18>; [100.00%]

  <bb 14> [local count: 179851756]:
  # DEBUG BEGIN_STMT
  _19 = CanNm_ChanStatus[0].MessageFlags;
  _11 = _19 & 2;
  if (_11 == 0)
    goto <bb 15>; [67.00%]
  else
    goto <bb 16>; [33.00%]

  <bb 15> [local count: 120500676]:
  # DEBUG BEGIN_STMT
  # DEBUG MsgCycleTimer => 1
  # DEBUG INLINE_ENTRY CanNm_MsgCycleTimerStart
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = 1;
  # DEBUG BEGIN_STMT
  goto <bb 18>; [100.00%]

  <bb 16> [local count: 59351079]:
  # DEBUG BEGIN_STMT
  _20 = CanNm_ChanConfig[0].ImmediateNmCycleTime;
  CanNm_MsgCycleTimerStart (_20);
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _21 = CanNm_ChanConfig[0].MsgCycleTime;
  CanNm_MsgCycleTimerStart (_21);

  <bb 18> [local count: 1073741824]:
  # DEBUG MsgCycleTimer => NULL
  # DEBUG MsgCycleTimer => NULL
  pduInfo ={v} {CLOBBER};
  return;

}



;; Function CanNm_HsmCanNmSfSendingSubModeAction2 (CanNm_HsmCanNmSfSendingSubModeAction2, funcdef_no=20, decl_uid=5614, cgraph_uid=21, symbol_order=20)

Modification phase of node CanNm_HsmCanNmSfSendingSubModeAction2/20
CanNm_HsmCanNmSfSendingSubModeAction2 ()
{
  unsigned char _1;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].ChanStatus;
  _5 = _1 & 1;
  if (_5 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  CanNm_HandleTransmit ();

  <bb 4> [local count: 1073741824]:
  return;

}


