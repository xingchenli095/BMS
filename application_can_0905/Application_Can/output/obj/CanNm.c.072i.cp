
IPA constant propagation start:
Determining dynamic type for call: CanNm_HandlePnTimers.part.0 (pPnStatus_23(D), PduId_24(D));
  Starting walk at: CanNm_HandlePnTimers.part.0 (pPnStatus_23(D), PduId_24(D));
  instance pointer: pPnStatus_23(D)  Outer instance pointer: pPnStatus_23(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: CanNm_AggregatePnInfo (_13, &CanNm_EiraStatus);
  Starting walk at: CanNm_AggregatePnInfo (_13, &CanNm_EiraStatus);
  instance pointer: _13  Outer instance pointer: _13 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:PduR_CanNmTriggerTransmit (_9, &PduUserInfo);
Determining dynamic type for call: CanNm_AggregatePnInfo (_13, &CanNm_EiraStatus);
  Starting walk at: CanNm_AggregatePnInfo (_13, &CanNm_EiraStatus);
  instance pointer: &CanNm_EiraStatus  Outer instance pointer: CanNm_EiraStatus offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:PduR_CanNmTriggerTransmit (_9, &PduUserInfo);
Determining dynamic type for call: CanNm_AggregatePnInfo (_14, &CanNm_EiraStatus);
  Starting walk at: CanNm_AggregatePnInfo (_14, &CanNm_EiraStatus);
  instance pointer: _14  Outer instance pointer: _14 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_7, _8, _10);
  Function call may change dynamic type:SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanNm_AggregatePnInfo (_14, &CanNm_EiraStatus);
  Starting walk at: CanNm_AggregatePnInfo (_14, &CanNm_EiraStatus);
  instance pointer: &CanNm_EiraStatus  Outer instance pointer: CanNm_EiraStatus offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TS_MemCpy32 (_7, _8, _10);
  Function call may change dynamic type:SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: CanNm_HandlePnInfo (&CanNm_EiraStatus, 1);
  Starting walk at: CanNm_HandlePnInfo (&CanNm_EiraStatus, 1);
  instance pointer: &CanNm_EiraStatus  Outer instance pointer: CanNm_EiraStatus offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanNm_HsmMainInst (&CanNm_HsmScCanNm);
  Function call may change dynamic type:CanNm_HandleTimerTick ();
Determining dynamic type for call: CanNm_HandlePnTimers (&CanNm_EiraStatus, 1);
  Starting walk at: CanNm_HandlePnTimers (&CanNm_EiraStatus, 1);
  instance pointer: &CanNm_EiraStatus  Outer instance pointer: CanNm_EiraStatus offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CanNm_HandlePnInfo (&CanNm_EiraStatus, 1);
  Function call may change dynamic type:CanNm_HsmMainInst (&CanNm_HsmScCanNm);
  Function call may change dynamic type:CanNm_HandleTimerTick ();
Determining dynamic type for call: _1 = CanNm_IsValidConfig (cannmConfigPtr_14(D));
  Starting walk at: _1 = CanNm_IsValidConfig (cannmConfigPtr_14(D));
  instance pointer: cannmConfigPtr_14(D)  Outer instance pointer: cannmConfigPtr_14(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_10 = CanNm_IsValidConfig.part.0 (voidConfigPtr_6(D));
  Starting walk at: RetVal_10 = CanNm_IsValidConfig.part.0 (voidConfigPtr_6(D));
  instance pointer: voidConfigPtr_6(D)  Outer instance pointer: voidConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CanNm_HandlePnTimers.part.0/48:
  Jump functions of caller  CanNm_IsValidConfig.part.0/47:
  Jump functions of caller  PduR_CanNmTriggerTransmit/46:
  Jump functions of caller  CanIf_Transmit/45:
  Jump functions of caller  PduR_CanNmRxIndication/44:
  Jump functions of caller  PduR_CanNmTxConfirmation/43:
  Jump functions of caller  CanNm_HsmMainInst/42:
  Jump functions of caller  TS_MemCpy32/41:
  Jump functions of caller  CanNm_HsmEmitInst/39:
  Jump functions of caller  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38:
  Jump functions of caller  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37:
  Jump functions of caller  TS_MemSet32/35:
  Jump functions of caller  CanNm_HsmInitInst/33:
  Jump functions of caller  Det_ASR40_ReportError/31:
  Jump functions of caller  TS_PlatformSigIsValid/29:
  Jump functions of caller  CanNm_AggregatePnInfo/28:
  Jump functions of caller  CanNm_HandlePnInfo/27:
  Jump functions of caller  CanNm_HandlePnTimers/26:
    callsite  CanNm_HandlePnTimers/26 -> CanNm_HandlePnTimers.part.0/48 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  CanNm_HandleTimerTick/25:
  Jump functions of caller  CanNm_IsValidPnMessage/24:
  Jump functions of caller  CanNm_RequestSynchronizedPncShutdown/23:
  Jump functions of caller  CanNm_ConfirmPnAvailability/22:
  Jump functions of caller  CanNm_GetPduUserData/21:
    callsite  CanNm_GetPduUserData/21 -> CanNm_AggregatePnInfo/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: &CanNm_EiraStatus
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
  Jump functions of caller  CanNm_Transmit/20:
  Jump functions of caller  CanNm_RxIndication/19:
    callsite  CanNm_RxIndication/19 -> CanNm_AggregatePnInfo/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: &CanNm_EiraStatus
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
    callsite  CanNm_RxIndication/19 -> CanNm_IsValidPnMessage/24 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  CanNm_TxConfirmation/18:
  Jump functions of caller  CanNm_MainFunction/17:
    callsite  CanNm_MainFunction/17 -> CanNm_HandlePnTimers/26 : 
       param 0: CONST: &CanNm_EiraStatus
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanNm_MainFunction/17 -> CanNm_HandlePnInfo/27 : 
       param 0: CONST: &CanNm_EiraStatus
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  CanNm_MainFunction/17 -> CanNm_HandleTimerTick/25 : 
  Jump functions of caller  CanNm_GetState/16:
  Jump functions of caller  CanNm_GetPduData/15:
  Jump functions of caller  CanNm_GetLocalNodeIdentifier/14:
  Jump functions of caller  CanNm_GetNodeIdentifier/13:
  Jump functions of caller  CanNm_GetUserData/12:
  Jump functions of caller  CanNm_EnableCommunication/11:
  Jump functions of caller  CanNm_DisableCommunication/10:
  Jump functions of caller  CanNm_NetworkRelease/9:
  Jump functions of caller  CanNm_NetworkGwEraRequest/8:
  Jump functions of caller  CanNm_NetworkRequest/7:
  Jump functions of caller  CanNm_PassiveStartUp/6:
  Jump functions of caller  CanNm_Init/5:
    callsite  CanNm_Init/5 -> CanNm_IsValidConfig/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  CanNm_IsValidConfig/4:
    callsite  CanNm_IsValidConfig/4 -> CanNm_IsValidConfig.part.0/47 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering CanNm_AggregatePnInfo for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HandlePnInfo for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HandlePnTimers for cloning; -fipa-cp-clone disabled.
Not considering CanNm_HandleTimerTick for cloning; -fipa-cp-clone disabled.
Not considering CanNm_IsValidPnMessage for cloning; -fipa-cp-clone disabled.
Not considering CanNm_RequestSynchronizedPncShutdown for cloning; -fipa-cp-clone disabled.
Not considering CanNm_ConfirmPnAvailability for cloning; -fipa-cp-clone disabled.
Not considering CanNm_GetPduUserData for cloning; -fipa-cp-clone disabled.
Not considering CanNm_Transmit for cloning; -fipa-cp-clone disabled.
Not considering CanNm_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering CanNm_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering CanNm_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering CanNm_GetState for cloning; -fipa-cp-clone disabled.
Not considering CanNm_GetPduData for cloning; -fipa-cp-clone disabled.
Not considering CanNm_GetLocalNodeIdentifier for cloning; -fipa-cp-clone disabled.
Not considering CanNm_GetNodeIdentifier for cloning; -fipa-cp-clone disabled.
Not considering CanNm_GetUserData for cloning; -fipa-cp-clone disabled.
Not considering CanNm_EnableCommunication for cloning; -fipa-cp-clone disabled.
Not considering CanNm_DisableCommunication for cloning; -fipa-cp-clone disabled.
Not considering CanNm_NetworkRelease for cloning; -fipa-cp-clone disabled.
Not considering CanNm_NetworkGwEraRequest for cloning; -fipa-cp-clone disabled.
Not considering CanNm_NetworkRequest for cloning; -fipa-cp-clone disabled.
Not considering CanNm_PassiveStartUp for cloning; -fipa-cp-clone disabled.
Not considering CanNm_Init for cloning; -fipa-cp-clone disabled.
Not considering CanNm_IsValidConfig for cloning; -fipa-cp-clone disabled.

overall_size: 989, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 29, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: CanNm_HandlePnTimers.part.0/48:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanNm_IsValidConfig.part.0/47:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: CanNm_AggregatePnInfo/28:
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
  Node: CanNm_HandlePnInfo/27:
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
  Node: CanNm_HandlePnTimers/26:
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
  Node: CanNm_HandleTimerTick/25:
  Node: CanNm_IsValidPnMessage/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_RequestSynchronizedPncShutdown/23:
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
  Node: CanNm_ConfirmPnAvailability/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_GetPduUserData/21:
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
  Node: CanNm_Transmit/20:
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
  Node: CanNm_RxIndication/19:
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
  Node: CanNm_TxConfirmation/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_MainFunction/17:
  Node: CanNm_GetState/16:
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
  Node: CanNm_GetPduData/15:
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
  Node: CanNm_GetLocalNodeIdentifier/14:
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
  Node: CanNm_GetNodeIdentifier/13:
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
  Node: CanNm_GetUserData/12:
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
  Node: CanNm_EnableCommunication/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_DisableCommunication/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_NetworkRelease/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_NetworkGwEraRequest/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_NetworkRequest/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_PassiveStartUp/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_Init/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanNm_IsValidConfig/4:
    param [0]: BOTTOM
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

CanNm_HandlePnTimers.part.0/48 (CanNm_HandlePnTimers.part.0) @070ab620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanNm_HandlePnTimers/26 (4433437 (estimated locally),0.20 per call) 
  Calls: PduR_CanNmRxIndication/44 (1073741824 (estimated locally),1.00 per call) 
CanNm_IsValidConfig.part.0/47 (CanNm_IsValidConfig.part.0) @06f9e700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: CanNm_LcfgSignature/30 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: CanNm_IsValidConfig/4 (97602059 (estimated locally),0.09 per call) 
  Calls: 
PduR_CanNmTriggerTransmit/46 (PduR_CanNmTriggerTransmit) @06f9e9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_GetPduUserData/21 (354334802 (estimated locally),0.33 per call) 
  Calls: 
CanIf_Transmit/45 (CanIf_Transmit) @06f9e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_Transmit/20 (12553859 (estimated locally),0.02 per call) 
  Calls: 
PduR_CanNmRxIndication/44 (PduR_CanNmRxIndication) @06f9e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_RxIndication/19 (16071125 (estimated locally),0.01 per call) CanNm_HandlePnInfo/27 (14909443 (estimated locally),0.20 per call) CanNm_HandlePnTimers.part.0/48 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanNmTxConfirmation/43 (PduR_CanNmTxConfirmation) @06f9e0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_TxConfirmation/18 (125230777 (estimated locally),0.15 per call) 
  Calls: 
CanNm_HsmMainInst/42 (CanNm_HsmMainInst) @06f64ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_MainFunction/17 (217325345 (estimated locally),0.20 per call) 
  Calls: 
TS_MemCpy32/41 (TS_MemCpy32) @06f648c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_RxIndication/19 (91935605 (estimated locally),0.09 per call) CanNm_HandlePnInfo/27 (73663256 (estimated locally),1.00 per call) CanNm_Transmit/20 (12553859 (estimated locally),0.02 per call) CanNm_GetPduData/15 (168700946 (estimated locally),0.16 per call) CanNm_GetUserData/12 (99497408 (estimated locally),0.09 per call) 
  Calls: 
CanNm_ChanConfig/40 (CanNm_ChanConfig) @06f6e750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_TxConfirmation/18 (read)CanNm_GetLocalNodeIdentifier/14 (read)CanNm_IsValidPnMessage/24 (read)CanNm_RxIndication/19 (read)CanNm_Transmit/20 (read)CanNm_GetUserData/12 (read)CanNm_GetNodeIdentifier/13 (read)CanNm_Transmit/20 (read)CanNm_GetNodeIdentifier/13 (read)CanNm_Transmit/20 (read)CanNm_Transmit/20 (read)CanNm_Transmit/20 (read)CanNm_RxIndication/19 (read)CanNm_RxIndication/19 (read)CanNm_GetPduUserData/21 (read)
  Availability: not_available
  Varpool flags: read-only
CanNm_HsmEmitInst/39 (CanNm_HsmEmitInst) @06f1fe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_RxIndication/19 (79402789 (estimated locally),0.07 per call) CanNm_HandleTimerTick/25 (177167401 (estimated locally),0.17 per call) CanNm_HandleTimerTick/25 (177167401 (estimated locally),0.17 per call) CanNm_HandleTimerTick/25 (116930485 (estimated locally),0.11 per call) CanNm_HandleTimerTick/25 (177167401 (estimated locally),0.17 per call) CanNm_HandleTimerTick/25 (177167401 (estimated locally),0.17 per call) CanNm_TxConfirmation/18 (379487205 (estimated locally),0.45 per call) CanNm_EnableCommunication/11 (32193925 (estimated locally),0.03 per call) CanNm_DisableCommunication/10 (32193925 (estimated locally),0.03 per call) CanNm_NetworkRelease/9 (159060892 (estimated locally),0.15 per call) CanNm_NetworkGwEraRequest/8 (159060892 (estimated locally),0.15 per call) CanNm_NetworkRequest/7 (159060892 (estimated locally),0.15 per call) CanNm_PassiveStartUp/6 (32193925 (estimated locally),0.03 per call) 
  Calls: 
SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0) @06f1fd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_GetPduUserData/21 (217325345 (estimated locally),0.20 per call) CanNm_RxIndication/19 (46997481 (estimated locally),0.04 per call) CanNm_RxIndication/19 (44938124 (estimated locally),0.04 per call) CanNm_HandlePnInfo/27 (73663256 (estimated locally),1.00 per call) CanNm_HandleTimerTick/25 (354334802 (estimated locally),0.33 per call) CanNm_Transmit/20 (4142774 (estimated locally),0.01 per call) CanNm_Transmit/20 (12553859 (estimated locally),0.02 per call) CanNm_GetPduData/15 (168700946 (estimated locally),0.16 per call) CanNm_GetUserData/12 (99497408 (estimated locally),0.09 per call) CanNm_EnableCommunication/11 (159060892 (estimated locally),0.15 per call) CanNm_DisableCommunication/10 (159060892 (estimated locally),0.15 per call) CanNm_NetworkRelease/9 (159060892 (estimated locally),0.15 per call) CanNm_NetworkGwEraRequest/8 (159060892 (estimated locally),0.15 per call) CanNm_NetworkRequest/7 (159060892 (estimated locally),0.15 per call) CanNm_PassiveStartUp/6 (159060893 (estimated locally),0.15 per call) 
  Calls: 
SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0) @06f1fb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_GetPduUserData/21 (217325345 (estimated locally),0.20 per call) CanNm_RxIndication/19 (91935605 (estimated locally),0.09 per call) CanNm_HandlePnInfo/27 (73663256 (estimated locally),1.00 per call) CanNm_HandleTimerTick/25 (354334802 (estimated locally),0.33 per call) CanNm_Transmit/20 (4142774 (estimated locally),0.01 per call) CanNm_Transmit/20 (12553859 (estimated locally),0.02 per call) CanNm_GetPduData/15 (168700946 (estimated locally),0.16 per call) CanNm_GetUserData/12 (99497408 (estimated locally),0.09 per call) CanNm_EnableCommunication/11 (159060892 (estimated locally),0.15 per call) CanNm_DisableCommunication/10 (159060892 (estimated locally),0.15 per call) CanNm_NetworkRelease/9 (159060892 (estimated locally),0.15 per call) CanNm_NetworkGwEraRequest/8 (159060892 (estimated locally),0.15 per call) CanNm_NetworkRequest/7 (159060892 (estimated locally),0.15 per call) CanNm_PassiveStartUp/6 (159060892 (estimated locally),0.15 per call) 
  Calls: 
CanNm_IndexFromNmChannelHandle/36 (CanNm_IndexFromNmChannelHandle) @06f271f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_GetPduData/15 (read)CanNm_GetState/16 (read)CanNm_PassiveStartUp/6 (read)CanNm_NetworkRequest/7 (read)CanNm_NetworkGwEraRequest/8 (read)CanNm_NetworkRelease/9 (read)CanNm_DisableCommunication/10 (read)CanNm_EnableCommunication/11 (read)CanNm_GetUserData/12 (read)CanNm_GetNodeIdentifier/13 (read)CanNm_GetLocalNodeIdentifier/14 (read)CanNm_ConfirmPnAvailability/22 (read)
  Availability: not_available
  Varpool flags: read-only
TS_MemSet32/35 (TS_MemSet32) @06f1f9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_HandlePnInfo/27 (73663256 (estimated locally),1.00 per call) CanNm_Init/5 (83091511 (estimated locally),0.15 per call) CanNm_Init/5 (83091511 (estimated locally),0.15 per call) CanNm_Init/5 (83091511 (estimated locally),0.15 per call) CanNm_Init/5 (83091511 (estimated locally),0.15 per call) 
  Calls: 
CanNm_HsmScCanNm/34 (CanNm_HsmScCanNm) @06f1cab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_EnableCommunication/11 (addr)CanNm_MainFunction/17 (addr)CanNm_Init/5 (addr)CanNm_PassiveStartUp/6 (addr)CanNm_NetworkRequest/7 (addr)CanNm_NetworkGwEraRequest/8 (addr)CanNm_NetworkRelease/9 (addr)CanNm_TxConfirmation/18 (addr)CanNm_DisableCommunication/10 (addr)CanNm_HandleTimerTick/25 (addr)CanNm_HandleTimerTick/25 (addr)CanNm_HandleTimerTick/25 (addr)CanNm_HandleTimerTick/25 (addr)CanNm_HandleTimerTick/25 (addr)CanNm_RxIndication/19 (addr)
  Availability: not_available
  Varpool flags: read-only
CanNm_HsmInitInst/33 (CanNm_HsmInitInst) @06f1f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_Init/5 (83091511 (estimated locally),0.15 per call) 
  Calls: 
CanNm_Rx_Tx_Buffer/32 (CanNm_Rx_Tx_Buffer) @06f1ca20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_Init/5 (read)
  Availability: not_available
  Varpool flags: read-only
Det_ASR40_ReportError/31 (Det_ASR40_ReportError) @06f1f700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_RxIndication/19 (390067099 (estimated locally),0.36 per call) CanNm_RxIndication/19 (237404317 (estimated locally),0.22 per call) CanNm_RxIndication/19 (354334802 (estimated locally),0.33 per call) CanNm_ConfirmPnAvailability/22 (478405669 (estimated locally),0.45 per call) CanNm_ConfirmPnAvailability/22 (354334802 (estimated locally),0.33 per call) CanNm_Transmit/20 (97726852 (estimated locally),0.17 per call) CanNm_Transmit/20 (107298755 (estimated locally),0.19 per call) CanNm_Transmit/20 (125230777 (estimated locally),0.22 per call) CanNm_Transmit/20 (186911608 (estimated locally),0.33 per call) CanNm_TxConfirmation/18 (186911608 (estimated locally),0.22 per call) CanNm_TxConfirmation/18 (278972549 (estimated locally),0.33 per call) CanNm_GetState/16 (34684797 (estimated locally),0.03 per call) CanNm_GetState/16 (42006536 (estimated locally),0.04 per call) CanNm_GetState/16 (478405670 (estimated locally),0.45 per call) CanNm_GetState/16 (354334802 (estimated locally),0.33 per call) CanNm_GetPduData/15 (72300406 (estimated locally),0.07 per call) CanNm_GetPduData/15 (478405669 (estimated locally),0.45 per call) CanNm_GetPduData/15 (354334802 (estimated locally),0.33 per call) CanNm_GetLocalNodeIdentifier/14 (21003268 (estimated locally),0.02 per call) CanNm_GetLocalNodeIdentifier/14 (598906347 (estimated locally),0.56 per call) CanNm_GetLocalNodeIdentifier/14 (354334802 (estimated locally),0.33 per call) CanNm_GetNodeIdentifier/13 (21003268 (estimated locally),0.02 per call) CanNm_GetNodeIdentifier/13 (598906347 (estimated locally),0.56 per call) CanNm_GetNodeIdentifier/13 (354334802 (estimated locally),0.33 per call) CanNm_GetUserData/12 (99497408 (estimated locally),0.09 per call) CanNm_GetUserData/12 (42006536 (estimated locally),0.04 per call) CanNm_GetUserData/12 (478405670 (estimated locally),0.45 per call) CanNm_GetUserData/12 (354334802 (estimated locally),0.33 per call) CanNm_EnableCommunication/11 (560346130 (estimated locally),0.52 per call) CanNm_EnableCommunication/11 (354334802 (estimated locally),0.33 per call) CanNm_DisableCommunication/10 (560346130 (estimated locally),0.52 per call) CanNm_DisableCommunication/10 (354334802 (estimated locally),0.33 per call) CanNm_NetworkRelease/9 (560346130 (estimated locally),0.52 per call) CanNm_NetworkRelease/9 (354334802 (estimated locally),0.33 per call) CanNm_NetworkGwEraRequest/8 (560346130 (estimated locally),0.52 per call) CanNm_NetworkGwEraRequest/8 (354334802 (estimated locally),0.33 per call) CanNm_NetworkRequest/7 (560346130 (estimated locally),0.52 per call) CanNm_NetworkRequest/7 (354334802 (estimated locally),0.33 per call) CanNm_PassiveStartUp/6 (560346130 (estimated locally),0.52 per call) CanNm_PassiveStartUp/6 (354334802 (estimated locally),0.33 per call) CanNm_Init/5 (168700947 (estimated locally),0.31 per call) CanNm_Init/5 (124017181 (estimated locally),0.23 per call) CanNm_Init/5 (161061274 (estimated locally),0.30 per call) 
  Calls: 
CanNm_LcfgSignature/30 (CanNm_LcfgSignature) @06f1c438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: CanNm_IsValidConfig.part.0/47 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/29 (TS_PlatformSigIsValid) @06f1f540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanNm_IsValidConfig/4 (574129754 (estimated locally),0.53 per call) 
  Calls: 
CanNm_AggregatePnInfo/28 (CanNm_AggregatePnInfo) @06f1f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:153437706 (estimated locally) body optimize_size
  Called by: CanNm_GetPduUserData/21 (217325345 (estimated locally),0.20 per call) CanNm_RxIndication/19 (9512290 (estimated locally),0.01 per call) 
  Calls: 
CanNm_HandlePnInfo/27 (CanNm_HandlePnInfo) @06f1f1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:73663256 (estimated locally) body optimize_size
  Called by: CanNm_MainFunction/17 (217325345 (estimated locally),0.20 per call) 
  Calls: PduR_CanNmRxIndication/44 (14909443 (estimated locally),0.20 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (73663256 (estimated locally),1.00 per call) TS_MemSet32/35 (73663256 (estimated locally),1.00 per call) TS_MemCpy32/41 (73663256 (estimated locally),1.00 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (73663256 (estimated locally),1.00 per call) 
CanNm_HandlePnTimers/26 (CanNm_HandlePnTimers) @06f11e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:21904332 (estimated locally) body optimize_size
  Called by: CanNm_MainFunction/17 (217325345 (estimated locally),0.20 per call) 
  Calls: CanNm_HandlePnTimers.part.0/48 (4433437 (estimated locally),0.20 per call) 
CanNm_HandleTimerTick/25 (CanNm_HandleTimerTick) @06f11c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (read)CanNm_HsmScCanNm/34 (addr)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanNm_MainFunction/17 (217325345 (estimated locally),0.20 per call) 
  Calls: CanNm_HsmEmitInst/39 (177167401 (estimated locally),0.17 per call) CanNm_HsmEmitInst/39 (177167401 (estimated locally),0.17 per call) CanNm_HsmEmitInst/39 (116930485 (estimated locally),0.11 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (354334802 (estimated locally),0.33 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (354334802 (estimated locally),0.33 per call) CanNm_HsmEmitInst/39 (177167401 (estimated locally),0.17 per call) CanNm_HsmEmitInst/39 (177167401 (estimated locally),0.17 per call) 
CanNm_IsValidPnMessage/24 (CanNm_IsValidPnMessage) @06f11620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/0 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (read)CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanNm_RxIndication/19 (46997481 (estimated locally),0.04 per call) 
  Calls: 
CanNm_RequestSynchronizedPncShutdown/23 (CanNm_RequestSynchronizedPncShutdown) @06f11460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanNm_ConfirmPnAvailability/22 (CanNm_ConfirmPnAvailability) @06f112a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_RootPtr/1 (read)CanNm_ChanStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/31 (478405669 (estimated locally),0.45 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_GetPduUserData/21 (CanNm_GetPduUserData) @06f110e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_RootPtr/1 (read)CanNm_ChanConfig/40 (read)CanNm_RootPtr/1 (read)CanNm_EiraStatus/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (217325345 (estimated locally),0.20 per call) CanNm_AggregatePnInfo/28 (217325345 (estimated locally),0.20 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (217325345 (estimated locally),0.20 per call) PduR_CanNmTriggerTransmit/46 (354334802 (estimated locally),0.33 per call) 
CanNm_Transmit/20 (CanNm_Transmit) @06f03ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanConfig/40 (read)CanNm_Initialized/3 (read)CanNm_ChanConfig/40 (read)CanNm_RootPtr/1 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (read)CanNm_RootPtr/1 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:566398813 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (4142774 (estimated locally),0.01 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (4142774 (estimated locally),0.01 per call) CanIf_Transmit/45 (12553859 (estimated locally),0.02 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (12553859 (estimated locally),0.02 per call) TS_MemCpy32/41 (12553859 (estimated locally),0.02 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (12553859 (estimated locally),0.02 per call) Det_ASR40_ReportError/31 (97726852 (estimated locally),0.17 per call) Det_ASR40_ReportError/31 (107298755 (estimated locally),0.19 per call) Det_ASR40_ReportError/31 (125230777 (estimated locally),0.22 per call) Det_ASR40_ReportError/31 (186911608 (estimated locally),0.33 per call) 
CanNm_RxIndication/19 (CanNm_RxIndication) @06f03d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_RootPtr/1 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (read)CanNm_RootPtr/1 (read)CanNm_ChanStatus/0 (read)CanNm_EiraStatus/2 (addr)CanNm_RootPtr/1 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (read)CanNm_RootPtr/1 (read)CanNm_ChanStatus/0 (read)CanNm_ChanConfig/40 (read)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (79402789 (estimated locally),0.07 per call) PduR_CanNmRxIndication/44 (16071125 (estimated locally),0.01 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (46997481 (estimated locally),0.04 per call) CanNm_AggregatePnInfo/28 (9512290 (estimated locally),0.01 per call) CanNm_IsValidPnMessage/24 (46997481 (estimated locally),0.04 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (44938124 (estimated locally),0.04 per call) TS_MemCpy32/41 (91935605 (estimated locally),0.09 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (91935605 (estimated locally),0.09 per call) Det_ASR40_ReportError/31 (390067099 (estimated locally),0.36 per call) Det_ASR40_ReportError/31 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_TxConfirmation/18 (CanNm_TxConfirmation) @06f039a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_ChanConfig/40 (read)CanNm_RootPtr/1 (read)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:845371362 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (379487205 (estimated locally),0.45 per call) PduR_CanNmTxConfirmation/43 (125230777 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (186911608 (estimated locally),0.22 per call) Det_ASR40_ReportError/31 (278972549 (estimated locally),0.33 per call) 
CanNm_MainFunction/17 (CanNm_MainFunction) @06f03620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)CanNm_EiraStatus/2 (addr)CanNm_EiraStatus/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HandlePnTimers/26 (217325345 (estimated locally),0.20 per call) CanNm_HandlePnInfo/27 (217325345 (estimated locally),0.20 per call) CanNm_HsmMainInst/42 (217325345 (estimated locally),0.20 per call) CanNm_HandleTimerTick/25 (217325345 (estimated locally),0.20 per call) 
CanNm_GetState/16 (CanNm_GetState) @06f03460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/31 (34684797 (estimated locally),0.03 per call) Det_ASR40_ReportError/31 (42006536 (estimated locally),0.04 per call) Det_ASR40_ReportError/31 (478405670 (estimated locally),0.45 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_GetPduData/15 (CanNm_GetPduData) @06f032a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_IndexFromNmChannelHandle/36 (read)CanNm_Initialized/3 (read)CanNm_ChanStatus/0 (read)CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (168700946 (estimated locally),0.16 per call) TS_MemCpy32/41 (168700946 (estimated locally),0.16 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (168700946 (estimated locally),0.16 per call) Det_ASR40_ReportError/31 (72300406 (estimated locally),0.07 per call) Det_ASR40_ReportError/31 (478405669 (estimated locally),0.45 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_GetLocalNodeIdentifier/14 (CanNm_GetLocalNodeIdentifier) @06f030e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_IndexFromNmChannelHandle/36 (read)CanNm_Initialized/3 (read)CanNm_ChanConfig/40 (read)CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/31 (21003268 (estimated locally),0.02 per call) Det_ASR40_ReportError/31 (598906347 (estimated locally),0.56 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_GetNodeIdentifier/13 (CanNm_GetNodeIdentifier) @06ee7ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_IndexFromNmChannelHandle/36 (read)CanNm_Initialized/3 (read)CanNm_ChanConfig/40 (read)CanNm_ChanStatus/0 (read)CanNm_ChanConfig/40 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/31 (21003268 (estimated locally),0.02 per call) Det_ASR40_ReportError/31 (598906347 (estimated locally),0.56 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_GetUserData/12 (CanNm_GetUserData) @06ee7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_RootPtr/1 (read)CanNm_ChanStatus/0 (read)CanNm_ChanConfig/40 (read)CanNm_RootPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (99497408 (estimated locally),0.09 per call) TS_MemCpy32/41 (99497408 (estimated locally),0.09 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (99497408 (estimated locally),0.09 per call) Det_ASR40_ReportError/31 (99497408 (estimated locally),0.09 per call) Det_ASR40_ReportError/31 (42006536 (estimated locally),0.04 per call) Det_ASR40_ReportError/31 (478405670 (estimated locally),0.45 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_EnableCommunication/11 (CanNm_EnableCommunication) @06ee7b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (32193925 (estimated locally),0.03 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (159060892 (estimated locally),0.15 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (560346130 (estimated locally),0.52 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_DisableCommunication/10 (CanNm_DisableCommunication) @06ee77e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (32193925 (estimated locally),0.03 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (159060892 (estimated locally),0.15 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (560346130 (estimated locally),0.52 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_NetworkRelease/9 (CanNm_NetworkRelease) @06ee7460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (159060892 (estimated locally),0.15 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (159060892 (estimated locally),0.15 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (560346130 (estimated locally),0.52 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_NetworkGwEraRequest/8 (CanNm_NetworkGwEraRequest) @06ee70e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (159060892 (estimated locally),0.15 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (159060892 (estimated locally),0.15 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (560346130 (estimated locally),0.52 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_NetworkRequest/7 (CanNm_NetworkRequest) @06edcd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (159060892 (estimated locally),0.15 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (159060892 (estimated locally),0.15 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (560346130 (estimated locally),0.52 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_PassiveStartUp/6 (CanNm_PassiveStartUp) @06edc9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_Initialized/3 (read)CanNm_IndexFromNmChannelHandle/36 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanNm_HsmEmitInst/39 (32193925 (estimated locally),0.03 per call) SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/38 (159060893 (estimated locally),0.15 per call) SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0/37 (159060892 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (560346130 (estimated locally),0.52 per call) Det_ASR40_ReportError/31 (354334802 (estimated locally),0.33 per call) 
CanNm_Init/5 (CanNm_Init) @06edc620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanNm_ChanStatus/0 (write)CanNm_Initialized/3 (write)CanNm_RootPtr/1 (write)CanNm_Rx_Tx_Buffer/32 (read)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_ChanStatus/0 (write)CanNm_HsmScCanNm/34 (addr)CanNm_EiraStatus/2 (addr)CanNm_EiraStatus/2 (addr)CanNm_EiraStatus/2 (addr)CanNm_EiraStatus/2 (addr)CanNm_Initialized/3 (write)
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemSet32/35 (83091511 (estimated locally),0.15 per call) TS_MemSet32/35 (83091511 (estimated locally),0.15 per call) TS_MemSet32/35 (83091511 (estimated locally),0.15 per call) TS_MemSet32/35 (83091511 (estimated locally),0.15 per call) CanNm_HsmInitInst/33 (83091511 (estimated locally),0.15 per call) Det_ASR40_ReportError/31 (168700947 (estimated locally),0.31 per call) Det_ASR40_ReportError/31 (124017181 (estimated locally),0.23 per call) CanNm_IsValidConfig/4 (375809639 (estimated locally),0.70 per call) Det_ASR40_ReportError/31 (161061274 (estimated locally),0.30 per call) 
CanNm_IsValidConfig/4 (CanNm_IsValidConfig) @06edc1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: CanNm_Init/5 (375809639 (estimated locally),0.70 per call) 
  Calls: CanNm_IsValidConfig.part.0/47 (97602059 (estimated locally),0.09 per call) TS_PlatformSigIsValid/29 (574129754 (estimated locally),0.53 per call) 
CanNm_Initialized/3 (CanNm_Initialized) @06869900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanNm_GetState/16 (read)CanNm_TxConfirmation/18 (read)CanNm_MainFunction/17 (read)CanNm_Init/5 (write)CanNm_PassiveStartUp/6 (read)CanNm_NetworkRequest/7 (read)CanNm_NetworkGwEraRequest/8 (read)CanNm_NetworkRelease/9 (read)CanNm_DisableCommunication/10 (read)CanNm_EnableCommunication/11 (read)CanNm_GetUserData/12 (read)CanNm_GetNodeIdentifier/13 (read)CanNm_GetLocalNodeIdentifier/14 (read)CanNm_Transmit/20 (read)CanNm_GetPduData/15 (read)CanNm_ConfirmPnAvailability/22 (read)CanNm_Init/5 (write)CanNm_RxIndication/19 (read)
  Availability: available
  Varpool flags: initialized
CanNm_EiraStatus/2 (CanNm_EiraStatus) @068698b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanNm_Init/5 (addr)CanNm_RxIndication/19 (addr)CanNm_Init/5 (addr)CanNm_MainFunction/17 (addr)CanNm_Init/5 (addr)CanNm_Init/5 (addr)CanNm_MainFunction/17 (addr)CanNm_GetPduUserData/21 (addr)
  Availability: available
  Varpool flags:
CanNm_RootPtr/1 (CanNm_RootPtr) @06869870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanNm_TxConfirmation/18 (read)CanNm_RxIndication/19 (read)CanNm_IsValidPnMessage/24 (read)CanNm_HandlePnTimers/26 (read)CanNm_RxIndication/19 (read)CanNm_RxIndication/19 (read)CanNm_Init/5 (write)CanNm_GetUserData/12 (read)CanNm_GetUserData/12 (read)CanNm_GetLocalNodeIdentifier/14 (read)CanNm_Transmit/20 (read)CanNm_ConfirmPnAvailability/22 (read)CanNm_GetPduData/15 (read)CanNm_AggregatePnInfo/28 (read)CanNm_Transmit/20 (read)CanNm_HandlePnInfo/27 (read)CanNm_RxIndication/19 (read)CanNm_GetPduUserData/21 (read)CanNm_GetPduUserData/21 (read)
  Availability: available
  Varpool flags:
CanNm_ChanStatus/0 (CanNm_ChanStatus) @06869828
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanNm_Transmit/20 (write)CanNm_GetState/16 (read)CanNm_EnableCommunication/11 (read)CanNm_EnableCommunication/11 (read)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_NetworkRelease/9 (write)CanNm_Transmit/20 (read)CanNm_Transmit/20 (read)CanNm_ConfirmPnAvailability/22 (write)CanNm_HandleTimerTick/25 (write)CanNm_HandleTimerTick/25 (read)CanNm_MainFunction/17 (read)CanNm_MainFunction/17 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_PassiveStartUp/6 (read)CanNm_PassiveStartUp/6 (read)CanNm_PassiveStartUp/6 (write)CanNm_PassiveStartUp/6 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_Init/5 (write)CanNm_NetworkRequest/7 (read)CanNm_NetworkRequest/7 (write)CanNm_NetworkRequest/7 (read)CanNm_NetworkRequest/7 (write)CanNm_NetworkGwEraRequest/8 (read)CanNm_NetworkGwEraRequest/8 (write)CanNm_NetworkGwEraRequest/8 (read)CanNm_NetworkGwEraRequest/8 (write)CanNm_NetworkRelease/9 (read)CanNm_NetworkRelease/9 (read)CanNm_NetworkRelease/9 (write)CanNm_NetworkRelease/9 (write)CanNm_DisableCommunication/10 (write)CanNm_EnableCommunication/11 (write)CanNm_GetUserData/12 (read)CanNm_GetNodeIdentifier/13 (read)CanNm_IsValidPnMessage/24 (read)CanNm_IsValidPnMessage/24 (read)CanNm_Init/5 (write)CanNm_NetworkRelease/9 (read)CanNm_HandleTimerTick/25 (write)CanNm_HandleTimerTick/25 (write)CanNm_DisableCommunication/10 (read)CanNm_DisableCommunication/10 (read)CanNm_GetPduData/15 (read)CanNm_HandleTimerTick/25 (read)CanNm_HandleTimerTick/25 (write)CanNm_HandleTimerTick/25 (read)CanNm_HandleTimerTick/25 (write)CanNm_HandleTimerTick/25 (read)CanNm_HandleTimerTick/25 (read)CanNm_HandleTimerTick/25 (write)CanNm_HandleTimerTick/25 (read)CanNm_HandleTimerTick/25 (read)CanNm_RxIndication/19 (read)CanNm_RxIndication/19 (read)CanNm_RxIndication/19 (read)CanNm_RxIndication/19 (read)
  Availability: available
  Varpool flags:

;; Function CanNm_IsValidConfig (CanNm_IsValidConfig, funcdef_no=0, decl_uid=5750, cgraph_uid=1, symbol_order=4)

Modification phase of node CanNm_IsValidConfig/4
CanNm_IsValidConfig (const void * voidConfigPtr)
{
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG ConfigPtr => voidConfigPtr_6(D)
  # DEBUG BEGIN_STMT
  if (voidConfigPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct CanNm_ConfigType *)voidConfigPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 287064877]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct CanNm_ConfigType *)voidConfigPtr_6(D)].CfgSignature;
  if (_3 == 4148416505)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 97602059]:
  RetVal_10 = CanNm_IsValidConfig.part.0 (voidConfigPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # RetVal_4 = PHI <1(2), 1(3), 1(4), RetVal_10(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function CanNm_Init (CanNm_Init, funcdef_no=1, decl_uid=5768, cgraph_uid=2, symbol_order=5)

Modification phase of node CanNm_Init/5
CanNm_Init (const struct CanNm_ConfigType * const cannmConfigPtr)
{
  NetworkHandleType ChIdx;
  uint8 instIdx;
  unsigned char _1;
  long unsigned int _2;
  uint8 * CanNm_Rx_Tx_Buffer.1_3;
  long unsigned int _4;
  uint8 * _5;
  long unsigned int _6;
  long unsigned int _7;
  uint8 * _8;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LocalConfigPtr => cannmConfigPtr_14(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 0;
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => 1

  <bb 4> [local count: 1073741824]:
  # instIdx_9 = PHI <0(2), 1(3)>
  # DEBUG instIdx => instIdx_9
  # DEBUG BEGIN_STMT
  if (instIdx_9 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanNm_Initialized = 0;
  # DEBUG BEGIN_STMT
  if (cannmConfigPtr_14(D) == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 161061274]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 0, 18);
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_IsValidConfig (cannmConfigPtr_14(D));
  if (_1 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 124017181]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 0, 5);
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 251792458]:
  # DEBUG BEGIN_STMT
  _2 = cannmConfigPtr_14(D)->PbRequiredCfgRamSize;
  if (_2 > 96)
    goto <bb 10>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 10> [local count: 168700947]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 0, 5);
  goto <bb 15>; [100.00%]

  <bb 11> [local count: 83091511]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr = cannmConfigPtr_14(D);
  # DEBUG BEGIN_STMT
  # DEBUG ChIdx => 0
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 83091511]:
  # DEBUG BEGIN_STMT
  CanNm_Rx_Tx_Buffer.1_3 = CanNm_Rx_Tx_Buffer;
  _4 = cannmConfigPtr_14(D)->BufferOffsets[0];
  _5 = CanNm_Rx_Tx_Buffer.1_3 + _4;
  CanNm_ChanStatus[0].RxPduPtr = _5;
  # DEBUG BEGIN_STMT
  _6 = cannmConfigPtr_14(D)->TxBufferOffset;
  _7 = _4 + _6;
  _8 = CanNm_Rx_Tx_Buffer.1_3 + _7;
  CanNm_ChanStatus[0].TxPduPtr = _8;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MessageFlags = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CurState = 1;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].CanNmTimer = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].UniversalTimer = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].RmsTimer = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ImmediateNmTransmissionCounter = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].MsgCycleTimer = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].TimeoutTimer = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ChanStatus = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].PnFilterEnabled = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp1 = 0;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp2 = 0;
  # DEBUG BEGIN_STMT
  # DEBUG ChIdx => 1

  <bb 13> [local count: 166183022]:
  # ChIdx_10 = PHI <0(11), 1(12)>
  # DEBUG ChIdx => ChIdx_10
  # DEBUG BEGIN_STMT
  if (ChIdx_10 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 83091511]:
  # DEBUG BEGIN_STMT
  CanNm_HsmInitInst (&CanNm_HsmScCanNm);
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&CanNm_EiraStatus.PnValue, 0, 6);
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&CanNm_EiraStatus.PnInfo, 0, 6);
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&CanNm_EiraStatus.PnTempInfo, 0, 6);
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&CanNm_EiraStatus.PnTimer, 0, 96);
  # DEBUG BEGIN_STMT
  CanNm_Initialized = 1;

  <bb 15> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanNm_PassiveStartUp (CanNm_PassiveStartUp, funcdef_no=2, decl_uid=5752, cgraph_uid=3, symbol_order=6)

Modification phase of node CanNm_PassiveStartUp/6
CanNm_PassiveStartUp (NetworkHandleType nmChannelHandle)
{
  boolean emitComControlEv;
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.7_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.7_1 = CanNm_Initialized;
  if (CanNm_Initialized.7_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_12(D), 1, 1);
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_12(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 560346130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_12(D), 1, 2);
  goto <bb 14>; [100.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  # DEBUG emitComControlEv => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].CurState;
  _4 = _3 + 255;
  if (_4 <= 1)
    goto <bb 8>; [41.00%]
  else
    goto <bb 12>; [59.00%]

  <bb 8> [local count: 65214966]:
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].ActiveWakeUp1;
  if (_5 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 32607483]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp1 = 2;
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 32607483]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp2 = 2;

  <bb 12> [local count: 159060893]:
  # retVal_6 = PHI <0(10), 1(7), 0(9)>
  # emitComControlEv_8 = PHI <1(10), 0(7), 1(9)>
  # DEBUG emitComControlEv => emitComControlEv_8
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (emitComControlEv_8 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 32193925]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 7);

  <bb 14> [local count: 1073741824]:
  # retVal_7 = PHI <1(3), 1(6), retVal_6(12), retVal_6(13)>
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_7;

}



;; Function CanNm_NetworkRequest (CanNm_NetworkRequest, funcdef_no=3, decl_uid=5754, cgraph_uid=4, symbol_order=7)

Modification phase of node CanNm_NetworkRequest/7
CanNm_NetworkRequest (NetworkHandleType nmChannelHandle)
{
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.8_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.8_1 = CanNm_Initialized;
  if (CanNm_Initialized.8_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_10(D), 2, 1);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_10(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 560346130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_10(D), 2, 2);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].ChanStatus;
  _4 = _3 | 2;
  CanNm_ChanStatus[0].ChanStatus = _4;
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].ActiveWakeUp1;
  if (_5 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 79530446]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp1 = 1;

  <bb 9> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 8);
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 10> [local count: 1073741824]:
  # retVal_6 = PHI <1(3), 1(6), 0(9)>
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_6;

}



;; Function CanNm_NetworkGwEraRequest (CanNm_NetworkGwEraRequest, funcdef_no=4, decl_uid=5756, cgraph_uid=5, symbol_order=8)

Modification phase of node CanNm_NetworkGwEraRequest/8
CanNm_NetworkGwEraRequest (NetworkHandleType nmChannelHandle)
{
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.9_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.9_1 = CanNm_Initialized;
  if (CanNm_Initialized.9_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_10(D), 254, 1);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_10(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 560346130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_10(D), 254, 2);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].ChanStatus;
  _4 = _3 | 2;
  CanNm_ChanStatus[0].ChanStatus = _4;
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].ActiveWakeUp1;
  if (_5 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 79530446]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp1 = 3;

  <bb 9> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 8);
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 10> [local count: 1073741824]:
  # retVal_6 = PHI <1(3), 1(6), 0(9)>
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_6;

}



;; Function CanNm_NetworkRelease (CanNm_NetworkRelease, funcdef_no=5, decl_uid=5758, cgraph_uid=6, symbol_order=9)

Modification phase of node CanNm_NetworkRelease/9
CanNm_NetworkRelease (NetworkHandleType nmChannelHandle)
{
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.10_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.10_1 = CanNm_Initialized;
  if (CanNm_Initialized.10_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_11(D), 3, 1);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_11(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 560346130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_11(D), 3, 2);
  goto <bb 11>; [100.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].ChanStatus;
  _4 = _3 & 253;
  CanNm_ChanStatus[0].ChanStatus = _4;
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].ActiveWakeUp1;
  if (_5 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 8> [local count: 104980189]:
  if (_5 == 3)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 89773968]:
  # DEBUG BEGIN_STMT
  _6 = CanNm_ChanStatus[0].ActiveWakeUp2;
  CanNm_ChanStatus[0].ActiveWakeUp1 = _6;
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].ActiveWakeUp2 = 0;

  <bb 10> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 8);
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 11> [local count: 1073741824]:
  # retVal_7 = PHI <1(3), 1(6), 0(10)>
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_7;

}



;; Function CanNm_DisableCommunication (CanNm_DisableCommunication, funcdef_no=6, decl_uid=5760, cgraph_uid=7, symbol_order=10)

Modification phase of node CanNm_DisableCommunication/10
CanNm_DisableCommunication (NetworkHandleType nmChannelHandle)
{
  boolean emitComControlEv;
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.11_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.11_1 = CanNm_Initialized;
  if (CanNm_Initialized.11_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_14(D), 12, 1);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_14(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 560346130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_14(D), 12, 2);
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  # DEBUG emitComControlEv => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].CurState;
  _4 = _3 + 253;
  if (_4 <= 2)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 79530446]:
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].ChanStatus;
  _12 = _5 & 1;
  if (_12 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 39765223]:
  # DEBUG BEGIN_STMT
  _6 = _5 | 1;
  CanNm_ChanStatus[0].ChanStatus = _6;
  # DEBUG BEGIN_STMT
  # DEBUG emitComControlEv => 1
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 10> [local count: 159060892]:
  # retVal_7 = PHI <1(8), 1(7), 0(9)>
  # emitComControlEv_9 = PHI <0(8), 0(7), 1(9)>
  # DEBUG emitComControlEv => emitComControlEv_9
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (emitComControlEv_9 == 1)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 32193925]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 0);

  <bb 12> [local count: 1073741824]:
  # retVal_8 = PHI <1(3), 1(6), retVal_7(10), retVal_7(11)>
  # DEBUG retVal => retVal_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_8;

}



;; Function CanNm_EnableCommunication (CanNm_EnableCommunication, funcdef_no=7, decl_uid=5762, cgraph_uid=8, symbol_order=11)

Modification phase of node CanNm_EnableCommunication/11
CanNm_EnableCommunication (NetworkHandleType nmChannelHandle)
{
  boolean emitComControlEv;
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.12_1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.12_1 = CanNm_Initialized;
  if (CanNm_Initialized.12_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_14(D), 13, 1);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_14(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 560346130]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_14(D), 13, 2);
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  # DEBUG emitComControlEv => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].CurState;
  _4 = _3 + 253;
  if (_4 <= 2)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 79530446]:
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].ChanStatus;
  _12 = _5 & 1;
  if (_12 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 39765223]:
  # DEBUG BEGIN_STMT
  _6 = _5 & 254;
  CanNm_ChanStatus[0].ChanStatus = _6;
  # DEBUG BEGIN_STMT
  # DEBUG emitComControlEv => 1
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 10> [local count: 159060892]:
  # retVal_7 = PHI <1(8), 1(7), 0(9)>
  # emitComControlEv_9 = PHI <0(8), 0(7), 1(9)>
  # DEBUG emitComControlEv => emitComControlEv_9
  # DEBUG retVal => retVal_7
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (emitComControlEv_9 == 1)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 32193925]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 0);

  <bb 12> [local count: 1073741824]:
  # retVal_8 = PHI <1(3), 1(6), retVal_7(10), retVal_7(11)>
  # DEBUG retVal => retVal_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_8;

}



;; Function CanNm_GetUserData (CanNm_GetUserData, funcdef_no=8, decl_uid=5779, cgraph_uid=9, symbol_order=12)

Modification phase of node CanNm_GetUserData/12
CanNm_GetUserData (NetworkHandleType nmChannelHandle, uint8 * nmUserDataPtr)
{
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.13_1;
  unsigned char _2;
  const struct CanNm_ConfigType * CanNm_RootPtr.14_3;
  long unsigned int _4;
  uint8 * _5;
  unsigned char _6;
  sizetype _7;
  uint8 * _8;
  const struct CanNm_ConfigType * CanNm_RootPtr.15_9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.13_1 = CanNm_Initialized;
  if (CanNm_Initialized.13_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_14(D), 5, 1);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_14(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002705]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 478405670]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_14(D), 5, 2);
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 241001352]:
  # DEBUG BEGIN_STMT
  if (nmUserDataPtr_15(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 9>; [82.57%]

  <bb 8> [local count: 42006536]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 5, 18);
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 198994817]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.14_3 = CanNm_RootPtr;
  _4 = CanNm_RootPtr.14_3->CanNm_ChannelData[0].UserDataLength;
  if (_4 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 99497408]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 5, 35);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 99497408]:
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].RxPduPtr;
  _6 = CanNm_ChanConfig[0].UDFBPos;
  _7 = (sizetype) _6;
  _8 = _5 + _7;
  CanNm_RootPtr.15_9 = CanNm_RootPtr;
  _10 = CanNm_RootPtr.15_9->CanNm_ChannelData[0].UserDataLength;
  TS_MemCpy32 (nmUserDataPtr_15(D), _8, _10);
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 12> [local count: 1073741824]:
  # retVal_11 = PHI <1(3), 1(6), 1(8), 1(10), 0(11)>
  # DEBUG retVal => retVal_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_11;

}



;; Function CanNm_GetNodeIdentifier (CanNm_GetNodeIdentifier, funcdef_no=9, decl_uid=5773, cgraph_uid=10, symbol_order=13)

Modification phase of node CanNm_GetNodeIdentifier/13
CanNm_GetNodeIdentifier (NetworkHandleType nmChannelHandle, uint8 * nmNodeIdPtr)
{
  NetworkHandleType index;
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.16_1;
  unsigned char _2;
  uint8 * _3;
  unsigned char _4;
  sizetype _5;
  uint8 * _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_11(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  index_13 = CanNm_IndexFromNmChannelHandle[0];
  # DEBUG index => index_13

  <bb 4> [local count: 1073741824]:
  # index_9 = PHI <0(2), index_13(3)>
  # DEBUG index => index_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.16_1 = CanNm_Initialized;
  if (CanNm_Initialized.16_1 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_11(D), 6, 1);
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_11(D) != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 482002705]:
  if (index_9 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 241001352]:
  _2 = CanNm_ChanConfig[0].CanNmNodeIdEnabled;
  if (_2 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 598906347]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_11(D), 6, 2);
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 120500676]:
  # DEBUG BEGIN_STMT
  if (nmNodeIdPtr_14(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 21003268]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 6, 18);
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 99497408]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 33829119]:
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].RxPduPtr;
  _4 = CanNm_ChanConfig[0].NidPos;
  _5 = (sizetype) _4;
  _6 = _3 + _5;
  _7 = *_6;
  *nmNodeIdPtr_14(D) = _7;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 14> [local count: 1073741824]:
  # retVal_8 = PHI <1(5), 1(9), 1(11), 0(13), 1(12)>
  # DEBUG retVal => retVal_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_8;

}



;; Function CanNm_GetLocalNodeIdentifier (CanNm_GetLocalNodeIdentifier, funcdef_no=10, decl_uid=5776, cgraph_uid=11, symbol_order=14)

Modification phase of node CanNm_GetLocalNodeIdentifier/14
CanNm_GetLocalNodeIdentifier (NetworkHandleType nmChannelHandle, uint8 * nmNodeIdPtr)
{
  NetworkHandleType index;
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.17_1;
  unsigned char _2;
  const struct CanNm_ConfigType * CanNm_RootPtr.18_3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_8(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  index_10 = CanNm_IndexFromNmChannelHandle[0];
  # DEBUG index => index_10

  <bb 4> [local count: 1073741824]:
  # index_6 = PHI <0(2), index_10(3)>
  # DEBUG index => index_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.17_1 = CanNm_Initialized;
  if (CanNm_Initialized.17_1 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_8(D), 7, 1);
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_8(D) != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 482002705]:
  if (index_6 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 241001352]:
  _2 = CanNm_ChanConfig[0].CanNmNodeIdEnabled;
  if (_2 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 598906347]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_8(D), 7, 2);
  goto <bb 14>; [100.00%]

  <bb 10> [local count: 120500676]:
  # DEBUG BEGIN_STMT
  if (nmNodeIdPtr_11(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 21003268]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 7, 18);
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 99497408]:
  # DEBUG BEGIN_STMT
  if (_2 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 33829119]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.18_3 = CanNm_RootPtr;
  _4 = CanNm_RootPtr.18_3->CanNm_ChannelData[0].CanNmNodeId;
  *nmNodeIdPtr_11(D) = _4;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 14> [local count: 1073741824]:
  # retVal_5 = PHI <1(5), 1(9), 1(11), 0(13), 1(12)>
  # DEBUG retVal => retVal_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_5;

}



;; Function CanNm_GetPduData (CanNm_GetPduData, funcdef_no=11, decl_uid=5785, cgraph_uid=12, symbol_order=15)

Modification phase of node CanNm_GetPduData/15
CanNm_GetPduData (NetworkHandleType nmChannelHandle, uint8 * nmPduDataPtr)
{
  NetworkHandleType index;
  Std_ReturnType retVal;
  unsigned char CanNm_Initialized.19_1;
  uint8 * _2;
  const struct CanNm_ConfigType * CanNm_RootPtr.20_3;
  short unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_9(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  index_11 = CanNm_IndexFromNmChannelHandle[0];
  # DEBUG index => index_11

  <bb 4> [local count: 1073741823]:
  # index_7 = PHI <0(2), index_11(3)>
  # DEBUG index => index_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.19_1 = CanNm_Initialized;
  if (CanNm_Initialized.19_1 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_9(D), 10, 1);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_9(D) != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 482002704]:
  if (index_7 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 478405669]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_9(D), 10, 2);
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 241001352]:
  # DEBUG BEGIN_STMT
  if (nmPduDataPtr_12(D) == 0B)
    goto <bb 10>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 10> [local count: 72300406]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 10, 18);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 168700946]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanStatus[0].RxPduPtr;
  CanNm_RootPtr.20_3 = CanNm_RootPtr;
  _4 = CanNm_RootPtr.20_3->CanNm_ChannelData[0].RxPduLength;
  _5 = (long unsigned int) _4;
  TS_MemCpy32 (nmPduDataPtr_12(D), _2, _5);
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 12> [local count: 1073741824]:
  # retVal_6 = PHI <1(5), 1(8), 1(10), 0(11)>
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_6;

}



;; Function CanNm_GetState (CanNm_GetState, funcdef_no=12, decl_uid=5766, cgraph_uid=13, symbol_order=16)

Modification phase of node CanNm_GetState/16
CanNm_GetState (NetworkHandleType nmChannelHandle, Nm_StateType * nmStatePtr, Nm_ModeType * nmModePtr)
{
  Std_ReturnType retVal;
  Nm_StateType CurState;
  unsigned char CanNm_Initialized.21_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.21_1 = CanNm_Initialized;
  if (CanNm_Initialized.21_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_6(D), 11, 1);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_6(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002705]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 478405670]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_6(D), 11, 2);
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 241001352]:
  # DEBUG BEGIN_STMT
  if (nmStatePtr_7(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 9>; [82.57%]

  <bb 8> [local count: 42006536]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 11, 18);
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 198994817]:
  # DEBUG BEGIN_STMT
  if (nmModePtr_8(D) == 0B)
    goto <bb 10>; [17.43%]
  else
    goto <bb 11>; [82.57%]

  <bb 10> [local count: 34684797]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 11, 18);
  goto <bb 15>; [100.00%]

  <bb 11> [local count: 164310020]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurState_9 = CanNm_ChanStatus[0].CurState;
  # DEBUG CurState => CurState_9
  # DEBUG BEGIN_STMT
  switch (CurState_9) <default: <L13> [33.33%], case 2: <L12> [33.33%], case 3 ... 5: <L9> [33.33%]>

  <bb 12> [local count: 54764530]:
<L9>:
  # DEBUG BEGIN_STMT
  *nmModePtr_8(D) = 3;
  # DEBUG BEGIN_STMT
  *nmStatePtr_7(D) = CurState_9;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 54764530]:
<L12>:
  # DEBUG BEGIN_STMT
  *nmModePtr_8(D) = 1;
  # DEBUG BEGIN_STMT
  *nmStatePtr_7(D) = CurState_9;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 54764530]:
<L13>:
  # DEBUG BEGIN_STMT
  *nmModePtr_8(D) = 0;
  # DEBUG BEGIN_STMT
  *nmStatePtr_7(D) = CurState_9;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073725396]:
  # retVal_3 = PHI <1(3), 1(6), 1(8), 1(10), 0(12), 0(13), 0(14)>
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_3;

}



;; Function CanNm_TxConfirmation (CanNm_TxConfirmation, funcdef_no=14, decl_uid=5922, cgraph_uid=15, symbol_order=18)

Modification phase of node CanNm_TxConfirmation/18
CanNm_TxConfirmation (PduIdType TxPduId)
{
  NetworkHandleType index;
  unsigned char CanNm_Initialized.23_1;
  short unsigned int _2;
  const struct CanNm_ConfigType * CanNm_RootPtr.24_3;
  long unsigned int _4;
  short unsigned int _6;

  <bb 2> [local count: 845371362]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.23_1 = CanNm_Initialized;
  if (CanNm_Initialized.23_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 12> [local count: 566398813]:
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 278972549]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 15, 1);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanConfig[0].TxConfPduId;
  if (_2 == TxPduId_11(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 13>; [94.50%]

  <bb 13> [local count: 507343013]:

  <bb 5> [local count: 1073741824]:
  # index_7 = PHI <0(12), 1(13)>
  # DEBUG index => index_7
  # DEBUG BEGIN_STMT
  if (index_7 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 566398814]:
  # index_5 = PHI <0(4), index_7(5)>
  # DEBUG BEGIN_STMT
  if (index_5 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 186911608]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 255, 15, 3);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 379487205]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.24_3 = CanNm_RootPtr;
  _4 = CanNm_RootPtr.24_3->CanNm_ChannelData[0].UserDataLength;
  if (_4 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 125230777]:
  # DEBUG BEGIN_STMT
  _6 = CanNm_RootPtr.24_3->CanNm_ChannelData[0].UserTxConfPduId;
  PduR_CanNmTxConfirmation (_6);

  <bb 10> [local count: 379487205]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 1);

  <bb 11> [local count: 845371364]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanNm_Transmit (CanNm_Transmit, funcdef_no=16, decl_uid=5782, cgraph_uid=17, symbol_order=20)

Modification phase of node CanNm_Transmit/20
CanNm_Transmit (PduIdType CanTxPduId, const struct PduInfoType * PduInfoPtr)
{
  uint8 UDFBPos;
  struct PduInfoType pduInfoLocal;
  Nm_StateType CurState;
  uint8 index;
  Std_ReturnType retVal;
  short unsigned int _1;
  unsigned char CanNm_Initialized.34_3;
  uint8 * _4;
  unsigned char _5;
  short unsigned int _6;
  const struct CanNm_ConfigType * CanNm_RootPtr.35_7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  uint8 * _12;
  short unsigned int _13;
  uint8 * _14;
  sizetype _15;
  uint8 * _16;
  uint8 * _17;
  short unsigned int _18;
  long unsigned int _19;
  const struct CanNm_ConfigType * CanNm_RootPtr.37_20;
  short unsigned int _21;
  unsigned char _22;
  short unsigned int _23;

  <bb 2> [local count: 566398813]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanConfig[0].UserTxPduId;
  if (_1 == CanTxPduId_30(D))
    goto <bb 5>; [5.50%]
  else
    goto <bb 20>; [94.50%]

  <bb 20> [local count: 507343012]:

  <bb 4> [local count: 1073741824]:
  # index_26 = PHI <0(2), 1(20)>
  # DEBUG index => index_26
  # DEBUG BEGIN_STMT
  if (index_26 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 566398813]:
  # index_2 = PHI <0(3), index_26(4)>
  # DEBUG BEGIN_STMT
  CanNm_Initialized.34_3 = CanNm_Initialized;
  if (CanNm_Initialized.34_3 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 186911608]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 20, 1);
  goto <bb 19>; [100.00%]

  <bb 7> [local count: 379487204]:
  # DEBUG BEGIN_STMT
  if (index_2 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 125230777]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 255, 20, 3);
  goto <bb 19>; [100.00%]

  <bb 9> [local count: 254256427]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_31(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 10> [local count: 209939531]:
  _4 = PduInfoPtr_31(D)->SduDataPtr;
  if (_4 == 0B)
    goto <bb 11>; [30.00%]
  else
    goto <bb 12>; [70.00%]

  <bb 11> [local count: 107298755]:
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanConfig[0].nmChannelId;
  Det_ASR40_ReportError (31, _5, 20, 18);
  goto <bb 19>; [100.00%]

  <bb 12> [local count: 146957672]:
  # DEBUG BEGIN_STMT
  _6 = PduInfoPtr_31(D)->SduLength;
  if (_6 == 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 13> [local count: 98461640]:
  CanNm_RootPtr.35_7 = CanNm_RootPtr;
  _8 = CanNm_RootPtr.35_7->CanNm_ChannelData[0].UserDataLength;
  _9 = (long unsigned int) _6;
  if (_8 < _9)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 97726852]:
  # DEBUG BEGIN_STMT
  _10 = CanNm_ChanConfig[0].nmChannelId;
  Det_ASR40_ReportError (31, _10, 20, 35);
  goto <bb 19>; [100.00%]

  <bb 15> [local count: 49230820]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CurState_32 = CanNm_ChanStatus[0].CurState;
  # DEBUG CurState => CurState_32
  # DEBUG BEGIN_STMT
  _11 = CurState_32 + 252;
  if (_11 <= 1)
    goto <bb 16>; [25.50%]
  else
    goto <bb 19>; [74.50%]

  <bb 16> [local count: 12553859]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  UDFBPos_33 = CanNm_ChanConfig[0].UDFBPos;
  # DEBUG UDFBPos => UDFBPos_33
  # DEBUG BEGIN_STMT
  _12 = CanNm_ChanStatus[0].TxPduPtr;
  pduInfoLocal.SduDataPtr = _12;
  # DEBUG BEGIN_STMT
  _13 = CanNm_RootPtr.35_7->CanNm_ChannelData[0].RxPduLength;
  pduInfoLocal.SduLength = _13;
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _14 = pduInfoLocal.SduDataPtr;
  _15 = (sizetype) UDFBPos_33;
  _16 = _14 + _15;
  _17 = PduInfoPtr_31(D)->SduDataPtr;
  _18 = PduInfoPtr_31(D)->SduLength;
  _19 = (long unsigned int) _18;
  TS_MemCpy32 (_16, _17, _19);
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.37_20 = CanNm_RootPtr;
  _21 = CanNm_RootPtr.37_20->CanNm_ChannelData[0].TxPduId;
  _22 = CanIf_Transmit (_21, &pduInfoLocal);
  if (_22 == 0)
    goto <bb 17>; [33.00%]
  else
    goto <bb 18>; [67.00%]

  <bb 17> [local count: 4142774]:
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _23 = CanNm_ChanConfig[0].MsgTimeoutTime;
  CanNm_ChanStatus[0].TimeoutTimer = _23;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 18> [local count: 12553859]:
  # retVal_24 = PHI <1(16), 0(17)>
  # DEBUG retVal => retVal_24
  pduInfoLocal ={v} {CLOBBER};

  <bb 19> [local count: 566398813]:
  # retVal_25 = PHI <1(6), 1(8), 1(11), 1(14), 1(15), retVal_24(18)>
  # DEBUG retVal => retVal_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_25;

}



;; Function CanNm_ConfirmPnAvailability (CanNm_ConfirmPnAvailability, funcdef_no=18, decl_uid=5787, cgraph_uid=19, symbol_order=22)

Modification phase of node CanNm_ConfirmPnAvailability/22
CanNm_ConfirmPnAvailability (NetworkHandleType nmChannelHandle)
{
  unsigned char CanNm_Initialized.41_1;
  unsigned char _2;
  const struct CanNm_ConfigType * CanNm_RootPtr.42_3;
  unsigned char _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.41_1 = CanNm_Initialized;
  if (CanNm_Initialized.41_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 22, 1);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (nmChannelHandle_7(D) != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 482002704]:
  _2 = CanNm_IndexFromNmChannelHandle[0];
  if (_2 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 478405669]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, nmChannelHandle_7(D), 22, 2);
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 241001352]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.42_3 = CanNm_RootPtr;
  _4 = CanNm_RootPtr.42_3->CanNm_ChannelData[0].PnEnabled;
  if (_4 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 81940460]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].PnFilterEnabled = 1;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanNm_RequestSynchronizedPncShutdown (CanNm_RequestSynchronizedPncShutdown, funcdef_no=19, decl_uid=5790, cgraph_uid=20, symbol_order=23)

Modification phase of node CanNm_RequestSynchronizedPncShutdown/23
CanNm_RequestSynchronizedPncShutdown (NetworkHandleType nmChannelHandle, PNCHandleType pncId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function CanNm_IsValidPnMessage (CanNm_IsValidPnMessage, funcdef_no=20, decl_uid=5900, cgraph_uid=21, symbol_order=24)

Modification phase of node CanNm_IsValidPnMessage/24
CanNm_IsValidPnMessage (PduIdType PduId)
{
  uint8 PnPduId;
  boolean ValidMessage;
  uint8 * _1;
  int _2;
  unsigned char _3;
  sizetype _4;
  uint8 * _5;
  unsigned char _6;
  unsigned char _7;
  sizetype _8;
  const uint8 * _9;
  unsigned char _10;
  const struct CanNm_ConfigType * CanNm_RootPtr.43_11;
  int _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _19;
  sizetype _22;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ValidMessage => 0
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].RxPduPtr;
  # DEBUG PnInfo => _1 + 2
  # DEBUG BEGIN_STMT
  _2 = (int) PduId_21(D);
  _3 = CanNm_ChanConfig[_2].CbvPos;
  _4 = (sizetype) _3;
  _5 = _1 + _4;
  _6 = *_5;
  _19 = _6 & 64;
  if (_19 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = CanNm_ChanStatus[_2].PnFilterEnabled;
  if (_7 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 10> [local count: 182536110]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 777975516]:
  # DEBUG BEGIN_STMT
  _8 = (sizetype) PnPduId_18;
  _22 = _8 + 2;
  _9 = _1 + _22;
  _10 = *_9;
  CanNm_RootPtr.43_11 = CanNm_RootPtr;
  _12 = (int) PnPduId_18;
  _13 = CanNm_RootPtr.43_11->PnFilterMask[_12];
  _14 = _10 & _13;
  if (_14 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 388987758]:
  # DEBUG BEGIN_STMT
  # DEBUG ValidMessage => 1

  <bb 6> [local count: 777975516]:
  # ValidMessage_15 = PHI <0(4), 1(5)>
  # DEBUG ValidMessage => ValidMessage_15
  # DEBUG BEGIN_STMT
  PnPduId_23 = PnPduId_18 + 1;
  # DEBUG PnPduId => PnPduId_23

  <bb 7> [local count: 960511625]:
  # ValidMessage_16 = PHI <ValidMessage_15(6), 0(10)>
  # PnPduId_18 = PHI <PnPduId_23(6), 0(10)>
  # DEBUG PnPduId => PnPduId_18
  # DEBUG ValidMessage => ValidMessage_16
  # DEBUG BEGIN_STMT
  if (PnPduId_18 != 6)
    goto <bb 8>; [85.71%]
  else
    goto <bb 9>; [14.29%]

  <bb 8> [local count: 823254514]:
  if (ValidMessage_16 == 0)
    goto <bb 4>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 1073741824]:
  # ValidMessage_17 = PHI <0(2), ValidMessage_16(8), 1(3), ValidMessage_16(7)>
  # DEBUG ValidMessage => ValidMessage_17
  # DEBUG BEGIN_STMT
  return ValidMessage_17;

}



;; Function CanNm_HandleTimerTick (CanNm_HandleTimerTick, funcdef_no=21, decl_uid=5902, cgraph_uid=22, symbol_order=25)

Modification phase of node CanNm_HandleTimerTick/25
CanNm_HandleTimerTick ()
{
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CanNm_ChanStatus[0].UniversalTimer;
  if (_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = _1 + 65535;
  CanNm_ChanStatus[0].UniversalTimer = _2;
  # DEBUG BEGIN_STMT
  if (_2 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 10);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = CanNm_ChanStatus[0].RmsTimer;
  if (_3 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = _3 + 65535;
  CanNm_ChanStatus[0].RmsTimer = _4;
  # DEBUG BEGIN_STMT
  if (_4 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 6);

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = CanNm_ChanStatus[0].TimeoutTimer;
  if (_5 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _6 = CanNm_ChanStatus[0].TimeoutTimer;
  _7 = _6 + 65535;
  CanNm_ChanStatus[0].TimeoutTimer = _7;
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _8 = CanNm_ChanStatus[0].TimeoutTimer;
  if (_8 == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 2);

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = CanNm_ChanStatus[0].MsgCycleTimer;
  if (_9 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _10 = _9 + 65535;
  CanNm_ChanStatus[0].MsgCycleTimer = _10;
  # DEBUG BEGIN_STMT
  if (_10 == 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 3);

  <bb 14> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = CanNm_ChanStatus[0].CanNmTimer;
  if (_11 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 15> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  CanNm_ChanStatus[0].NmTimerExpired = 1;

  <bb 16> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (_11 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 17> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _12 = _11 + 65535;
  CanNm_ChanStatus[0].CanNmTimer = _12;
  # DEBUG BEGIN_STMT
  if (_12 == 0)
    goto <bb 18>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 18> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 4);

  <bb 19> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanNm_HandlePnTimers (CanNm_HandlePnTimers, funcdef_no=22, decl_uid=5908, cgraph_uid=23, symbol_order=26)

Modification phase of node CanNm_HandlePnTimers/26
CanNm_HandlePnTimers (struct CanNm_PnStatusType * pPnStatus, PduIdType PduId)
{
  uint16 EiraIndex;
  boolean EiraChanged;
  uint16 PnIndex;
  const struct CanNm_ConfigType * CanNm_RootPtr.45_1;
  int _2;
  int _3;
  short unsigned int _4;
  short unsigned int _7;
  unsigned int _8;
  unsigned char _9;
  unsigned int _11;
  unsigned int _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  short unsigned int _21;
  short unsigned int _27;

  <bb 2> [local count: 21904332]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EiraChanged => 0
  # DEBUG BEGIN_STMT
  # DEBUG PnIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 1051837491]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.45_1 = CanNm_RootPtr;
  _2 = (int) PnIndex_16;
  EiraIndex_25 = CanNm_RootPtr.45_1->EiraTimerMap[_2];
  # DEBUG EiraIndex => EiraIndex_25
  # DEBUG BEGIN_STMT
  if (EiraIndex_25 != 65535)
    goto <bb 4>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 4> [local count: 694212745]:
  # DEBUG BEGIN_STMT
  _3 = (int) EiraIndex_25;
  _4 = pPnStatus_23(D)->PnTimer[_3];
  if (_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 347106372]:
  # DEBUG BEGIN_STMT
  _7 = _4 + 65535;
  pPnStatus_23(D)->PnTimer[_3] = _7;
  # DEBUG BEGIN_STMT
  if (_7 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 173553186]:
  # DEBUG BEGIN_STMT
  _27 = PnIndex_16 >> 3;
  _8 = (unsigned int) _27;
  _9 = pPnStatus_23(D)->PnValue[_8];
  _21 = PnIndex_16 & 7;
  _11 = (unsigned int) _21;
  _12 = 1 << _11;
  _13 = (unsigned char) _12;
  _14 = ~_13;
  _15 = _9 & _14;
  pPnStatus_23(D)->PnValue[_8] = _15;
  # DEBUG BEGIN_STMT
  # DEBUG EiraChanged => 1

  <bb 7> [local count: 1051837491]:
  # EiraChanged_17 = PHI <EiraChanged_18(3), EiraChanged_18(4), EiraChanged_18(5), 1(6)>
  # DEBUG EiraChanged => EiraChanged_17
  # DEBUG BEGIN_STMT
  PnIndex_29 = PnIndex_16 + 1;
  # DEBUG PnIndex => PnIndex_29

  <bb 8> [local count: 1073741824]:
  # PnIndex_16 = PHI <0(2), PnIndex_29(7)>
  # EiraChanged_18 = PHI <0(2), EiraChanged_17(7)>
  # DEBUG EiraChanged => EiraChanged_18
  # DEBUG PnIndex => PnIndex_16
  # DEBUG BEGIN_STMT
  if (PnIndex_16 != 48)
    goto <bb 3>; [97.96%]
  else
    goto <bb 9>; [2.04%]

  <bb 9> [local count: 21904333]:
  # EiraChanged_5 = PHI <EiraChanged_18(8)>
  # DEBUG BEGIN_STMT
  if (EiraChanged_5 == 1)
    goto <bb 10>; [20.24%]
  else
    goto <bb 11>; [79.76%]

  <bb 10> [local count: 4433437]:
  CanNm_HandlePnTimers.part.0 (pPnStatus_23(D), PduId_24(D));

  <bb 11> [local count: 21904333]:
  return;

}



;; Function CanNm_HandlePnInfo (CanNm_HandlePnInfo, funcdef_no=23, decl_uid=5905, cgraph_uid=24, symbol_order=27)

Modification phase of node CanNm_HandlePnInfo/27
CanNm_HandlePnInfo (struct CanNm_PnStatusType * PnStatePtr, PduIdType PduId)
{
  struct PduInfoType pduInfo;
  uint8 PnBitMask;
  uint8 PnBitPos;
  boolean EiraChanged;
  uint8 PnIndex;
  uint8[6] * _1;
  uint8[6] * _2;
  int _4;
  unsigned char _5;
  const struct CanNm_ConfigType * CanNm_RootPtr.47_6;
  unsigned char _7;
  unsigned char _8;
  unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  short unsigned int _13;
  int _14;
  unsigned int _15;
  unsigned char _16;
  unsigned char _17;
  unsigned char _18;
  unsigned char _19;
  int _20;
  uint8[6] * _21;

  <bb 2> [local count: 73663256]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EiraChanged => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = &PnStatePtr_37(D)->PnTempInfo;
  _2 = &PnStatePtr_37(D)->PnInfo;
  TS_MemCpy32 (_1, _2, 6);
  # DEBUG BEGIN_STMT
  TS_MemSet32 (_2, 0, 6);
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG PnIndex => 0
  goto <bb 12>; [100.00%]

  <bb 3> [local count: 441824882]:
  # DEBUG BEGIN_STMT
  _4 = (int) PnIndex_22;
  _5 = PnStatePtr_37(D)->PnTempInfo[_4];
  CanNm_RootPtr.47_6 = CanNm_RootPtr;
  _7 = CanNm_RootPtr.47_6->PnFilterMask[_4];
  _8 = _5 & _7;
  if (_8 != 0)
    goto <bb 16>; [27.00%]
  else
    goto <bb 11>; [73.00%]

  <bb 16> [local count: 119292718]:
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 954449108]:
  # DEBUG BEGIN_STMT
  _9 = (unsigned int) PnIndex_22;
  _10 = _9 * 8;
  _11 = (unsigned int) PnBitPos_28;
  _12 = _10 + _11;
  _13 = CanNm_RootPtr.47_6->EiraTimerMap[_12];
  if (_13 != 65535)
    goto <bb 5>; [66.00%]
  else
    goto <bb 9>; [34.00%]

  <bb 5> [local count: 629936411]:
  # DEBUG BEGIN_STMT
  _14 = (int) PnBitPos_28;
  _15 = 1 << _14;
  PnBitMask_46 = (uint8) _15;
  # DEBUG PnBitMask => PnBitMask_46
  # DEBUG BEGIN_STMT
  _16 = _5 & PnBitMask_46;
  if (_16 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 314968205]:
  # DEBUG BEGIN_STMT
  _17 = PnStatePtr_37(D)->PnValue[_4];
  _18 = _17 & PnBitMask_46;
  if (_18 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 157484103]:
  # DEBUG BEGIN_STMT
  _19 = _17 | PnBitMask_46;
  PnStatePtr_37(D)->PnValue[_4] = _19;
  # DEBUG BEGIN_STMT
  # DEBUG EiraChanged => 1

  <bb 8> [local count: 314968205]:
  # EiraChanged_23 = PHI <EiraChanged_25(6), 1(7)>
  # DEBUG EiraChanged => EiraChanged_23
  # DEBUG BEGIN_STMT
  _20 = (int) _13;
  PnStatePtr_37(D)->PnTimer[_20] = 65;

  <bb 9> [local count: 954449108]:
  # EiraChanged_24 = PHI <EiraChanged_25(4), EiraChanged_25(5), EiraChanged_23(8)>
  # DEBUG EiraChanged => EiraChanged_24
  # DEBUG BEGIN_STMT
  PnBitPos_49 = PnBitPos_28 + 1;
  # DEBUG PnBitPos => PnBitPos_49

  <bb 10> [local count: 1073741824]:
  # EiraChanged_25 = PHI <EiraChanged_24(9), EiraChanged_27(16)>
  # PnBitPos_28 = PHI <PnBitPos_49(9), 0(16)>
  # DEBUG PnBitPos => PnBitPos_28
  # DEBUG EiraChanged => EiraChanged_25
  # DEBUG BEGIN_STMT
  if (PnBitPos_28 != 8)
    goto <bb 4>; [88.89%]
  else
    goto <bb 11>; [11.11%]

  <bb 11> [local count: 441824881]:
  # EiraChanged_26 = PHI <EiraChanged_27(3), EiraChanged_25(10)>
  # DEBUG EiraChanged => EiraChanged_26
  # DEBUG BEGIN_STMT
  PnIndex_50 = PnIndex_22 + 1;
  # DEBUG PnIndex => PnIndex_50

  <bb 12> [local count: 515488136]:
  # PnIndex_22 = PHI <0(2), PnIndex_50(11)>
  # EiraChanged_27 = PHI <0(2), EiraChanged_26(11)>
  # DEBUG EiraChanged => EiraChanged_27
  # DEBUG PnIndex => PnIndex_22
  # DEBUG BEGIN_STMT
  if (PnIndex_22 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 13>; [14.29%]

  <bb 13> [local count: 73663255]:
  # EiraChanged_3 = PHI <EiraChanged_27(12)>
  # DEBUG BEGIN_STMT
  if (EiraChanged_3 == 1)
    goto <bb 14>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 14> [local count: 14909443]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _21 = &PnStatePtr_37(D)->PnValue;
  pduInfo.SduDataPtr = _21;
  # DEBUG BEGIN_STMT
  pduInfo.SduLength = 6;
  # DEBUG BEGIN_STMT
  PduR_CanNmRxIndication (PduId_43(D), &pduInfo);
  pduInfo ={v} {CLOBBER};

  <bb 15> [local count: 73663255]:
  return;

}



;; Function CanNm_MainFunction (CanNm_MainFunction, funcdef_no=13, decl_uid=5770, cgraph_uid=14, symbol_order=17)

Modification phase of node CanNm_MainFunction/17
CanNm_MainFunction ()
{
  unsigned char CanNm_Initialized.22_1;
  unsigned char _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.22_1 = CanNm_Initialized;
  if (CanNm_Initialized.22_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  _2 = CanNm_ChanStatus[0].MessageFlags;
  _3 = _2 & 253;
  CanNm_ChanStatus[0].MessageFlags = _3;
  # DEBUG BEGIN_STMT
  CanNm_HandleTimerTick ();
  # DEBUG BEGIN_STMT
  CanNm_HsmMainInst (&CanNm_HsmScCanNm);
  # DEBUG BEGIN_STMT
  CanNm_HandlePnInfo (&CanNm_EiraStatus, 1);
  # DEBUG BEGIN_STMT
  CanNm_HandlePnTimers (&CanNm_EiraStatus, 1);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanNm_AggregatePnInfo (CanNm_AggregatePnInfo, funcdef_no=24, decl_uid=5911, cgraph_uid=25, symbol_order=28)

Modification phase of node CanNm_AggregatePnInfo/28
CanNm_AggregatePnInfo (const uint8 * PnInfo, struct CanNm_PnStatusType * pPnStatus)
{
  uint8 PnIndex;
  int _1;
  unsigned char _2;
  sizetype _3;
  const uint8 * _4;
  unsigned char _5;
  const struct CanNm_ConfigType * CanNm_RootPtr.52_6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PnIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  _1 = (int) PnIndex_10;
  _2 = pPnStatus_13(D)->PnInfo[_1];
  _3 = (sizetype) PnIndex_10;
  _4 = PnInfo_14(D) + _3;
  _5 = *_4;
  CanNm_RootPtr.52_6 = CanNm_RootPtr;
  _7 = CanNm_RootPtr.52_6->PnFilterMask[_1];
  _8 = _5 & _7;
  _9 = _2 | _8;
  pPnStatus_13(D)->PnInfo[_1] = _9;
  # DEBUG BEGIN_STMT
  PnIndex_16 = PnIndex_10 + 1;
  # DEBUG PnIndex => PnIndex_16

  <bb 4> [local count: 1073741824]:
  # PnIndex_10 = PHI <0(2), PnIndex_16(3)>
  # DEBUG PnIndex => PnIndex_10
  # DEBUG BEGIN_STMT
  if (PnIndex_10 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 5>; [14.29%]

  <bb 5> [local count: 153437707]:
  return;

}



;; Function CanNm_RxIndication (CanNm_RxIndication, funcdef_no=15, decl_uid=5925, cgraph_uid=16, symbol_order=19)

Modification phase of node CanNm_RxIndication/19
CanNm_RxIndication (PduIdType RxPduId, struct PduInfoType * PduInfoPtr)
{
  boolean ValidPnMessage;
  struct PduInfoType UserPdu;
  unsigned char CanNm_Initialized.26_1;
  uint8 * _2;
  short unsigned int _3;
  const struct CanNm_ConfigType * CanNm_RootPtr.27_4;
  short unsigned int _5;
  unsigned char _6;
  uint8 * _7;
  uint8 * _8;
  short unsigned int _9;
  long unsigned int _10;
  const struct CanNm_ConfigType * CanNm_RootPtr.28_11;
  unsigned char _12;
  uint8 * _13;
  uint8 * _14;
  const struct CanNm_ConfigType * CanNm_RootPtr.29_15;
  unsigned char _16;
  unsigned char _17;
  unsigned char _18;
  const struct CanNm_ConfigType * CanNm_RootPtr.30_19;
  unsigned char _20;
  long unsigned int _21;
  short unsigned int _22;
  uint8 * _23;
  unsigned char _24;
  sizetype _25;
  uint8 * _26;
  short unsigned int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_Initialized.26_1 = CanNm_Initialized;
  if (CanNm_Initialized.26_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 0, 16, 1);
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (RxPduId_32(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (31, 255, 16, 3);
  goto <bb 21>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_33(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 397989633]:
  _2 = PduInfoPtr_33(D)->SduDataPtr;
  if (_2 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 8> [local count: 278592743]:
  _3 = PduInfoPtr_33(D)->SduLength;
  CanNm_RootPtr.27_4 = CanNm_RootPtr;
  _5 = CanNm_RootPtr.27_4->CanNm_ChannelData[0].RxPduLength;
  if (_3 > _5)
    goto <bb 9>; [67.00%]
  else
    goto <bb 10>; [33.00%]

  <bb 9> [local count: 390067099]:
  # DEBUG BEGIN_STMT
  _6 = CanNm_ChanConfig[0].nmChannelId;
  Det_ASR40_ReportError (31, _6, 16, 18);
  goto <bb 21>; [100.00%]

  <bb 10> [local count: 91935605]:
  # DEBUG BEGIN_STMT
  # DEBUG ValidPnMessage => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _7 = CanNm_ChanStatus[0].RxPduPtr;
  _8 = PduInfoPtr_33(D)->SduDataPtr;
  _9 = PduInfoPtr_33(D)->SduLength;
  _10 = (long unsigned int) _9;
  TS_MemCpy32 (_7, _8, _10);
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.28_11 = CanNm_RootPtr;
  _12 = CanNm_RootPtr.28_11->CanNm_ChannelData[0].PnEnabled;
  if (_12 == 1)
    goto <bb 12>; [51.12%]
  else
    goto <bb 11>; [48.88%]

  <bb 11> [local count: 44938124]:
  # DEBUG ValidPnMessage => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 46997481]:
  # DEBUG BEGIN_STMT
  ValidPnMessage_36 = CanNm_IsValidPnMessage (0);
  # DEBUG ValidPnMessage => ValidPnMessage_36
  # DEBUG BEGIN_STMT
  if (ValidPnMessage_36 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 14>; [79.76%]

  <bb 13> [local count: 9512290]:
  # DEBUG BEGIN_STMT
  _13 = CanNm_ChanStatus[0].RxPduPtr;
  _14 = _13 + 2;
  CanNm_AggregatePnInfo (_14, &CanNm_EiraStatus);

  <bb 14> [local count: 46997481]:
  # DEBUG ValidPnMessage => ValidPnMessage_36
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (ValidPnMessage_36 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 15> [local count: 75956461]:
  CanNm_RootPtr.29_15 = CanNm_RootPtr;
  _16 = CanNm_RootPtr.29_15->CanNm_ChannelData[0].PnEnabled;
  if (_16 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 37978231]:
  _17 = CanNm_ChanConfig[0].AllNmMessagesKeepAwake;
  if (_17 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 17> [local count: 25065632]:
  _18 = CanNm_ChanStatus[0].PnFilterEnabled;
  if (_18 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 18> [local count: 79402789]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.30_19 = CanNm_RootPtr;
  _20 = CanNm_RootPtr.30_19->CanNm_ChannelData[0].UserRxPduEnabled;
  if (_20 == 1)
    goto <bb 19>; [20.24%]
  else
    goto <bb 20>; [79.76%]

  <bb 19> [local count: 16071125]:
  # DEBUG BEGIN_STMT
  _21 = CanNm_RootPtr.30_19->CanNm_ChannelData[0].UserDataLength;
  _22 = (short unsigned int) _21;
  UserPdu.SduLength = _22;
  # DEBUG BEGIN_STMT
  _23 = CanNm_ChanStatus[0].RxPduPtr;
  _24 = CanNm_ChanConfig[0].UDFBPos;
  _25 = (sizetype) _24;
  _26 = _23 + _25;
  UserPdu.SduDataPtr = _26;
  # DEBUG BEGIN_STMT
  _27 = CanNm_RootPtr.30_19->CanNm_ChannelData[0].UserRxPduId;
  PduR_CanNmRxIndication (_27, &UserPdu);

  <bb 20> [local count: 79402789]:
  # DEBUG BEGIN_STMT
  CanNm_HsmEmitInst (&CanNm_HsmScCanNm, 9);

  <bb 21> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  UserPdu ={v} {CLOBBER};
  return;

}



;; Function CanNm_GetPduUserData (CanNm_GetPduUserData, funcdef_no=17, decl_uid=5914, cgraph_uid=18, symbol_order=21)

Modification phase of node CanNm_GetPduUserData/21
CanNm_GetPduUserData (uint8 instIdx, struct PduInfoType * pduInfo)
{
  struct PduInfoType PduUserInfo;
  uint8 UDFBPos;
  const struct CanNm_ConfigType * CanNm_RootPtr.38_1;
  long unsigned int _2;
  uint8 * _3;
  sizetype _4;
  uint8 * _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  const struct CanNm_ConfigType * CanNm_RootPtr.40_10;
  unsigned char _11;
  uint8 * _12;
  uint8 * _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.38_1 = CanNm_RootPtr;
  _2 = CanNm_RootPtr.38_1->CanNm_ChannelData[0].UserDataLength;
  if (_2 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  UDFBPos_17 = CanNm_ChanConfig[0].UDFBPos;
  # DEBUG UDFBPos => UDFBPos_17
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = pduInfo_18(D)->SduDataPtr;
  _4 = (sizetype) UDFBPos_17;
  _5 = _3 + _4;
  PduUserInfo.SduDataPtr = _5;
  # DEBUG BEGIN_STMT
  _6 = pduInfo_18(D)->SduLength;
  _7 = (short unsigned int) UDFBPos_17;
  _8 = _6 - _7;
  PduUserInfo.SduLength = _8;
  # DEBUG BEGIN_STMT
  _9 = CanNm_RootPtr.38_1->CanNm_ChannelData[0].UserTxConfPduId;
  PduR_CanNmTriggerTransmit (_9, &PduUserInfo);
  PduUserInfo ={v} {CLOBBER};

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanNm_RootPtr.40_10 = CanNm_RootPtr;
  _11 = CanNm_RootPtr.40_10->CanNm_ChannelData[0].PnEnabled;
  if (_11 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  SchM_Enter_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _12 = pduInfo_18(D)->SduDataPtr;
  _13 = _12 + 2;
  CanNm_AggregatePnInfo (_13, &CanNm_EiraStatus);
  # DEBUG BEGIN_STMT
  SchM_Exit_CanNm_SCHM_CANNM_EXCLUSIVE_AREA_0 ();

  <bb 6> [local count: 1073741824]:
  return;

}


