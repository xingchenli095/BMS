
IPA constant propagation start:
Determining dynamic type for call: _3 = SecOC_RxCheckForPduIdx (&pduIdx, &pduType);
  Starting walk at: _3 = SecOC_RxCheckForPduIdx (&pduIdx, &pduType);
  instance pointer: &pduIdx  Outer instance pointer: pduIdx offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _3 = SecOC_RxCheckForPduIdx (&pduIdx, &pduType);
  Starting walk at: _3 = SecOC_RxCheckForPduIdx (&pduIdx, &pduType);
  instance pointer: &pduType  Outer instance pointer: pduType offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: bufReqRetVal_30 = SecOC_RxCheckIncomingIfPdu (&pduLength, pduIdx.16_4, pduType.19_8);
  Starting walk at: bufReqRetVal_30 = SecOC_RxCheckIncomingIfPdu (&pduLength, pduIdx.16_4, pduType.19_8);
  instance pointer: &pduLength  Outer instance pointer: pduLength offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:_3 = SecOC_RxCheckForPduIdx (&pduIdx, &pduType);
Determining dynamic type for call: retVal_10 = SecOC_IsValidConfig.part.0 (voidConfigPtr_6(D));
  Starting walk at: retVal_10 = SecOC_IsValidConfig.part.0 (voidConfigPtr_6(D));
  instance pointer: voidConfigPtr_6(D)  Outer instance pointer: voidConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);
Determining dynamic type for call: _1 = SecOC_IsValidConfig (config_5(D));
  Starting walk at: _1 = SecOC_IsValidConfig (config_5(D));
  instance pointer: config_5(D)  Outer instance pointer: config_5(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SecOC_IsValidConfig.part.0/35:
  Jump functions of caller  SecOC_Tx_ProcessPduStates/34:
  Jump functions of caller  SecOC_Rx_ProcessPduStates/33:
  Jump functions of caller  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/32:
  Jump functions of caller  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29:
  Jump functions of caller  PduR_SecOCTxConfirmation/28:
  Jump functions of caller  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/27:
  Jump functions of caller  TS_MemCpy32/26:
  Jump functions of caller  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/23:
  Jump functions of caller  TS_PlatformSigIsValid/21:
  Jump functions of caller  SecOC_Tx_DeInit/20:
  Jump functions of caller  SecOC_Rx_DeInit/19:
  Jump functions of caller  SecOC_Tx_Init/18:
  Jump functions of caller  SecOC_Rx_Init/17:
  Jump functions of caller  TS_MemBZero32/16:
  Jump functions of caller  SecOC_RxCheckIncomingIfPdu/15:
  Jump functions of caller  SecOC_RxCheckForPduIdx/14:
  Jump functions of caller  SecOC_MainFunctionTx/13:
  Jump functions of caller  SecOC_MainFunctionRx/12:
  Jump functions of caller  SecOC_RxIndication/11:
    callsite  SecOC_RxIndication/11 -> SecOC_RxCheckIncomingIfPdu/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  SecOC_RxIndication/11 -> SecOC_RxCheckForPduIdx/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 1: UNKNOWN
         Aggregate passed by reference:
           offset: 0, cst: 0
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  SecOC_TxConfirmation/10:
  Jump functions of caller  SecOC_TriggerTransmit/9:
  Jump functions of caller  SecOC_CancelTransmit/8:
  Jump functions of caller  SecOC_Transmit/7:
  Jump functions of caller  SecOC_IsValidConfig/6:
    callsite  SecOC_IsValidConfig/6 -> SecOC_IsValidConfig.part.0/35 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  SecOC_DeInit/5:
  Jump functions of caller  SecOC_Init/4:
    callsite  SecOC_Init/4 -> SecOC_IsValidConfig/6 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering SecOC_MainFunctionTx for cloning; -fipa-cp-clone disabled.
Not considering SecOC_MainFunctionRx for cloning; -fipa-cp-clone disabled.
Not considering SecOC_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering SecOC_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering SecOC_TriggerTransmit for cloning; -fipa-cp-clone disabled.
Not considering SecOC_CancelTransmit for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Transmit for cloning; -fipa-cp-clone disabled.
Not considering SecOC_IsValidConfig for cloning; -fipa-cp-clone disabled.
Not considering SecOC_DeInit for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Init for cloning; -fipa-cp-clone disabled.

overall_size: 275, max_new_size: 11001
 - context independent values, size: 16, time_benefit: 0.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: SecOC_IsValidConfig.part.0/35:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_RxCheckIncomingIfPdu/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         PduLengthType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_RxCheckForPduIdx/14:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         uint16 * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        ref offset 0: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
  Node: SecOC_MainFunctionTx/13:
  Node: SecOC_MainFunctionRx/12:
  Node: SecOC_RxIndication/11:
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
  Node: SecOC_TxConfirmation/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_TriggerTransmit/9:
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
  Node: SecOC_CancelTransmit/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Transmit/7:
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
  Node: SecOC_IsValidConfig/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_DeInit/5:
  Node: SecOC_Init/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of SecOC_RxCheckForPduIdx/14 for all known contexts.
Propagated bits info for function SecOC_RxCheckForPduIdx.constprop/36:
 param 0: value = 0x0, mask = 0xfffffffe
Propagated bits info for function SecOC_RxCheckIncomingIfPdu/15:
 param 0: value = 0x0, mask = 0xfffffffe
Propagated bits info for function SecOC_RxCheckForPduIdx/14:
 param 0: value = 0x0, mask = 0xfffffffe

IPA constant propagation end

Reclaiming functions: SecOC_RxCheckForPduIdx/14
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SecOC_RxCheckForPduIdx.constprop.0/36 (SecOC_RxCheckForPduIdx.constprop) @06d5d2a0
  Type: function definition analyzed
  Visibility:
  References: SecOC_RxConfig/31 (read)
  Referring: 
  Clone of SecOC_RxCheckForPduIdx/14
  Availability: local
  Function flags: count:77159559 (estimated locally) local optimize_size
  Called by: SecOC_RxIndication/11 (195204116 (estimated locally),0.18 per call) 
  Calls: 
SecOC_IsValidConfig.part.0/35 (SecOC_IsValidConfig.part.0) @06c647e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: SecOC_LcfgSignature/22 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: SecOC_IsValidConfig/6 (66369400 (estimated locally),0.06 per call) 
  Calls: 
SecOC_Tx_ProcessPduStates/34 (SecOC_Tx_ProcessPduStates) @06c4e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_MainFunctionTx/13 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SecOC_Rx_ProcessPduStates/33 (SecOC_Rx_ProcessPduStates) @06c4e620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_MainFunctionRx/12 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/32 (SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0) @06c4e1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_RxIndication/11 (39509313 (estimated locally),0.04 per call) 
  Calls: 
SecOC_RxConfig/31 (SecOC_RxConfig) @06c4d1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_RxCheckForPduIdx.constprop.0/36 (read)SecOC_RxCheckIncomingIfPdu/15 (read)SecOC_RxIndication/11 (read)
  Availability: not_available
  Varpool flags: read-only
SecOC_RxData/30 (SecOC_RxData) @06c4d168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_RxIndication/11 (read)SecOC_RxIndication/11 (write)SecOC_RxIndication/11 (write)SecOC_RxIndication/11 (read)
  Availability: not_available
  Varpool flags:
SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0) @06c4e000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_RxIndication/11 (39509313 (estimated locally),0.04 per call) 
  Calls: 
PduR_SecOCTxConfirmation/28 (PduR_SecOCTxConfirmation) @06c1cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_TxConfirmation/10 (146466100 (estimated locally),0.14 per call) 
  Calls: 
SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/27 (SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1) @06c1cb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Transmit/7 (42165841 (estimated locally),0.04 per call) 
  Calls: 
TS_MemCpy32/26 (TS_MemCpy32) @06c1ca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_RxIndication/11 (13136847 (estimated locally),0.01 per call) SecOC_TriggerTransmit/9 (11503448 (estimated locally),0.01 per call) SecOC_Transmit/7 (13117793 (estimated locally),0.01 per call) 
  Calls: 
SecOC_TxData/25 (SecOC_TxData) @06c23168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Transmit/7 (read)SecOC_Transmit/7 (write)SecOC_CancelTransmit/8 (write)SecOC_CancelTransmit/8 (write)SecOC_TriggerTransmit/9 (read)SecOC_Transmit/7 (write)SecOC_TriggerTransmit/9 (read)SecOC_TriggerTransmit/9 (read)SecOC_TxConfirmation/10 (write)
  Availability: not_available
  Varpool flags:
SecOC_TxConfig/24 (SecOC_TxConfig) @06c23120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_TriggerTransmit/9 (read)SecOC_Transmit/7 (read)SecOC_TxConfirmation/10 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/23 (SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1) @06c1c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Transmit/7 (42165841 (estimated locally),0.04 per call) 
  Calls: 
SecOC_LcfgSignature/22 (SecOC_LcfgSignature) @06c0bbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_IsValidConfig.part.0/35 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/21 (TS_PlatformSigIsValid) @06c1c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_IsValidConfig/6 (574129754 (estimated locally),0.53 per call) 
  Calls: 
SecOC_Tx_DeInit/20 (SecOC_Tx_DeInit) @06c1c540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_DeInit/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_Rx_DeInit/19 (SecOC_Rx_DeInit) @06c1c460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_DeInit/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_Tx_Init/18 (SecOC_Tx_Init) @06c1c2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Init/4 (88583700 (estimated locally),0.08 per call) 
  Calls: 
SecOC_Rx_Init/17 (SecOC_Rx_Init) @06c1c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Init/4 (88583700 (estimated locally),0.08 per call) 
  Calls: 
TS_MemBZero32/16 (TS_MemBZero32) @06c1c0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Init/4 (88583700 (estimated locally),0.08 per call) SecOC_Init/4 (88583700 (estimated locally),0.08 per call) 
  Calls: 
SecOC_RxCheckIncomingIfPdu/15 (SecOC_RxCheckIncomingIfPdu) @06c11ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_RxConfig/31 (read)SecOC_ConfigPtr/2 (read)SecOC_ConfigPtr/2 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_RxIndication/11 (26273693 (estimated locally),0.02 per call) 
  Calls: 
SecOC_RxCheckForPduIdx/14 (SecOC_RxCheckForPduIdx) @06c119a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:77159559 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_MainFunctionTx/13 (SecOC_MainFunctionTx) @06c117e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_ProcessPduStates/34 (354334802 (estimated locally),0.33 per call) 
SecOC_MainFunctionRx/12 (SecOC_MainFunctionRx) @06c11620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Rx_ProcessPduStates/33 (354334802 (estimated locally),0.33 per call) 
SecOC_RxIndication/11 (SecOC_RxIndication) @06c11460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)SecOC_RxData/30 (read)SecOC_RxConfig/31 (read)SecOC_RxData/30 (write)SecOC_RxData/30 (write)SecOC_RxData/30 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/32 (39509313 (estimated locally),0.04 per call) TS_MemCpy32/26 (13136847 (estimated locally),0.01 per call) SecOC_RxCheckIncomingIfPdu/15 (26273693 (estimated locally),0.02 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0/29 (39509313 (estimated locally),0.04 per call) SecOC_RxCheckForPduIdx.constprop/36 (195204116 (estimated locally),0.18 per call) 
SecOC_TxConfirmation/10 (SecOC_TxConfirmation) @06c111c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)SecOC_TxConfig/24 (read)SecOC_ConfigPtr/2 (read)SecOC_TxData/25 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_SecOCTxConfirmation/28 (146466100 (estimated locally),0.14 per call) 
SecOC_TriggerTransmit/9 (SecOC_TriggerTransmit) @06be4ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)SecOC_TxConfig/24 (read)SecOC_TxData/25 (read)SecOC_TxData/25 (read)SecOC_TxData/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/26 (11503448 (estimated locally),0.01 per call) 
SecOC_CancelTransmit/8 (SecOC_CancelTransmit) @06be4c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)SecOC_TxData/25 (write)SecOC_TxData/25 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_Transmit/7 (SecOC_Transmit) @06be4a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (read)SecOC_ConfigPtr/2 (read)SecOC_TxConfig/24 (read)SecOC_ConfigPtr/2 (read)SecOC_ConfigPtr/2 (read)SecOC_TxData/25 (write)SecOC_TxData/25 (read)SecOC_TxData/25 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/27 (42165841 (estimated locally),0.04 per call) TS_MemCpy32/26 (13117793 (estimated locally),0.01 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/23 (42165841 (estimated locally),0.04 per call) 
SecOC_IsValidConfig/6 (SecOC_IsValidConfig) @06be4620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: SecOC_Init/4 (1073741823 (estimated locally),1.00 per call) 
  Calls: SecOC_IsValidConfig.part.0/35 (66369400 (estimated locally),0.06 per call) TS_PlatformSigIsValid/21 (574129754 (estimated locally),0.53 per call) 
SecOC_DeInit/5 (SecOC_DeInit) @06be4460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_InitStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_DeInit/20 (1073741824 (estimated locally),1.00 per call) SecOC_Rx_DeInit/19 (1073741824 (estimated locally),1.00 per call) 
SecOC_Init/4 (SecOC_Init) @06be42a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_ConfigPtr/2 (write)SecOC_PB_PduBuffer/0 (addr)SecOC_PB_IntBuffer/1 (addr)SecOC_InitStatus/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_Init/18 (88583700 (estimated locally),0.08 per call) SecOC_Rx_Init/17 (88583700 (estimated locally),0.08 per call) TS_MemBZero32/16 (88583700 (estimated locally),0.08 per call) TS_MemBZero32/16 (88583700 (estimated locally),0.08 per call) SecOC_IsValidConfig/6 (1073741823 (estimated locally),1.00 per call) 
SecOC_InitStatus/3 (SecOC_InitStatus) @06b60e58
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: SecOC_MainFunctionRx/12 (read)SecOC_RxIndication/11 (read)SecOC_DeInit/5 (write)SecOC_Init/4 (write)SecOC_Transmit/7 (read)SecOC_CancelTransmit/8 (read)SecOC_TriggerTransmit/9 (read)SecOC_TxConfirmation/10 (read)SecOC_MainFunctionTx/13 (read)
  Availability: available
  Varpool flags: initialized
SecOC_ConfigPtr/2 (SecOC_ConfigPtr) @06b60e10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: SecOC_Transmit/7 (read)SecOC_Transmit/7 (read)SecOC_RxCheckIncomingIfPdu/15 (read)SecOC_RxCheckIncomingIfPdu/15 (read)SecOC_Init/4 (write)SecOC_Transmit/7 (read)SecOC_TxConfirmation/10 (read)
  Availability: available
  Varpool flags:
SecOC_PB_IntBuffer/1 (SecOC_PB_IntBuffer) @06b60dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: SecOC_Init/4 (addr)
  Availability: available
  Varpool flags:
SecOC_PB_PduBuffer/0 (SecOC_PB_PduBuffer) @06b60d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: SecOC_Init/4 (addr)
  Availability: available
  Varpool flags:

;; Function SecOC_DeInit (SecOC_DeInit, funcdef_no=1, decl_uid=5927, cgraph_uid=2, symbol_order=5)

Modification phase of node SecOC_DeInit/5
SecOC_DeInit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SecOC_InitStatus ={v} 0;
  # DEBUG BEGIN_STMT
  SecOC_Rx_DeInit ();
  # DEBUG BEGIN_STMT
  SecOC_Tx_DeInit ();
  return;

}



;; Function SecOC_IsValidConfig (SecOC_IsValidConfig, funcdef_no=2, decl_uid=5923, cgraph_uid=3, symbol_order=6)

Modification phase of node SecOC_IsValidConfig/6
SecOC_IsValidConfig (const void * voidConfigPtr)
{
  Std_ReturnType retVal;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG ConfigPtr => voidConfigPtr_6(D)
  # DEBUG BEGIN_STMT
  if (voidConfigPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct SecOC_ConfigType *)voidConfigPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct SecOC_ConfigType *)voidConfigPtr_6(D)].CfgSignature;
  if (_3 == 1275670664)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 66369400]:
  retVal_10 = SecOC_IsValidConfig.part.0 (voidConfigPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # retVal_4 = PHI <1(2), 1(3), 1(4), retVal_10(5)>
  # DEBUG retVal => retVal_4
  # DEBUG BEGIN_STMT
  return retVal_4;

}



;; Function SecOC_Init (SecOC_Init, funcdef_no=0, decl_uid=5925, cgraph_uid=1, symbol_order=4)

Modification phase of node SecOC_Init/4
SecOC_Init (const struct SecOC_ConfigType * config)
{
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG LocalConfigPtr => config_5(D)
  # DEBUG BEGIN_STMT
  _1 = SecOC_IsValidConfig (config_5(D));
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  _2 = config_5(D)->PduBufferSize;
  if (_2 <= 20)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 268435456]:
  _3 = config_5(D)->IntBufferSize;
  if (_3 <= 34)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr = config_5(D);
  # DEBUG BEGIN_STMT
  TS_MemBZero32 (&SecOC_PB_PduBuffer, 20);
  # DEBUG BEGIN_STMT
  TS_MemBZero32 (&SecOC_PB_IntBuffer, 34);
  # DEBUG BEGIN_STMT
  SecOC_Rx_Init ();
  # DEBUG BEGIN_STMT
  SecOC_Tx_Init ();
  # DEBUG BEGIN_STMT
  SecOC_InitStatus ={v} 1;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function SecOC_Transmit (SecOC_Transmit, funcdef_no=3, decl_uid=5933, cgraph_uid=4, symbol_order=7)

Modification phase of node SecOC_Transmit/7
SecOC_Transmit (PduIdType id, const struct PduInfoType * info)
{
  Std_ReturnType retVal;
  long unsigned int SecOC_InitStatus.1_1;
  short unsigned int _2;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.2_3;
  long unsigned int _4;
  sizetype _5;
  const struct SecOC_TxPduConfigType * _6;
  short unsigned int _7;
  unsigned char _8;
  short unsigned int _9;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.4_10;
  long unsigned int _11;
  sizetype _12;
  const struct SecOC_TxPduConfigType * _13;
  short unsigned int _14;
  short unsigned int _15;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.6_16;
  long unsigned int _17;
  sizetype _18;
  const struct SecOC_TxPduConfigType * _19;
  short unsigned int _20;
  short unsigned int _21;
  uint8 * _22;
  uint8 * _23;
  short unsigned int _24;
  long unsigned int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => id_30(D)
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.1_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.1_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (info_32(D) != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 4> [local count: 255550554]:
  if (id_30(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 5> [local count: 127775277]:
  _2 = info_32(D)->SduLength;
  SecOC_ConfigPtr.2_3 = SecOC_ConfigPtr;
  _4 = SecOC_ConfigPtr.2_3->TxPduConfigPtr;
  _5 = _4;
  _6 = SecOC_ConfigPtr.2_3 + _5;
  _7 = _6->BuffersConfig.AuthPduBufferLength;
  if (_2 <= _7)
    goto <bb 6>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 6> [local count: 42165841]:
  # DEBUG BEGIN_STMT
  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1 ();
  # DEBUG BEGIN_STMT
  _8 = SecOC_TxConfig[0].UseDynamicLength;
  if (_8 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 14336386]:
  _9 = info_32(D)->SduLength;
  SecOC_ConfigPtr.4_10 = SecOC_ConfigPtr;
  _11 = SecOC_ConfigPtr.4_10->TxPduConfigPtr;
  _12 = _11;
  _13 = SecOC_ConfigPtr.4_10 + _12;
  _14 = _13->BuffersConfig.AuthPduBufferLength;
  if (_9 <= _14)
    goto <bb 10>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 34997648]:
  if (_8 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 17498824]:
  _15 = info_32(D)->SduLength;
  SecOC_ConfigPtr.6_16 = SecOC_ConfigPtr;
  _17 = SecOC_ConfigPtr.6_16->TxPduConfigPtr;
  _18 = _17;
  _19 = SecOC_ConfigPtr.6_16 + _18;
  _20 = _19->BuffersConfig.AuthPduBufferLength;
  if (_15 == _20)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 13117793]:
  # DEBUG BEGIN_STMT
  _21 = info_32(D)->SduLength;
  SecOC_TxData[0].ReceivedAuthPdu.SduLength = _21;
  # DEBUG BEGIN_STMT
  _22 = SecOC_TxData[0].ReceivedAuthPdu.SduDataPtr;
  _23 = info_32(D)->SduDataPtr;
  _24 = info_32(D)->SduLength;
  _25 = (long unsigned int) _24;
  TS_MemCpy32 (_22, _23, _25);
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].TransmitEvent = 1;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 11> [local count: 42165841]:
  # retVal_26 = PHI <1(8), 1(9), 0(10)>
  # DEBUG retVal => retVal_26
  # DEBUG BEGIN_STMT
  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1 ();

  <bb 12> [local count: 1073741824]:
  # retVal_27 = PHI <1(2), 1(3), 1(4), 1(5), retVal_26(11)>
  # DEBUG retVal => retVal_27
  # DEBUG BEGIN_STMT
  return retVal_27;

}



;; Function SecOC_CancelTransmit (SecOC_CancelTransmit, funcdef_no=4, decl_uid=5935, cgraph_uid=5, symbol_order=8)

Modification phase of node SecOC_CancelTransmit/8
SecOC_CancelTransmit (PduIdType id)
{
  Std_ReturnType retVal;
  long unsigned int SecOC_InitStatus.8_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => id_4(D)
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.8_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.8_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (id_4(D) == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].PduREvent = 5;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].TransmitEvent = 0;

  <bb 5> [local count: 1073741824]:
  # retVal_2 = PHI <1(2), 1(3), 0(4)>
  # DEBUG retVal => retVal_2
  # DEBUG BEGIN_STMT
  return retVal_2;

}



;; Function SecOC_TriggerTransmit (SecOC_TriggerTransmit, funcdef_no=5, decl_uid=5938, cgraph_uid=6, symbol_order=9)

Modification phase of node SecOC_TriggerTransmit/9
SecOC_TriggerTransmit (PduIdType TxPduId, struct PduInfoType * PduInfoPtr)
{
  boolean idFound;
  uint16 pduIdx;
  PduLengthType bufferLength;
  uint8 * bufferPtr;
  Std_ReturnType retVal;
  long unsigned int SecOC_InitStatus.9_1;
  short unsigned int _2;
  unsigned char _4;
  short unsigned int _5;
  uint8 * _6;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_18(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 11>; [30.00%]

  <bb 3> [local count: 751619278]:
  SecOC_InitStatus.9_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.9_1 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 4> [local count: 153024284]:
  # DEBUG BEGIN_STMT
  _2 = SecOC_TxConfig[0].PduIdForSecuredPduAtSecOC;
  if (_2 == TxPduId_20(D))
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 52028257]:
  # DEBUG BEGIN_STMT
  bufferPtr_21 = SecOC_TxData[0].SecuredPdu.SduDataPtr;
  # DEBUG bufferPtr => bufferPtr_21
  # DEBUG BEGIN_STMT
  bufferLength_22 = SecOC_TxData[0].SecuredPdu.SduLength;
  # DEBUG bufferLength => bufferLength_22
  # DEBUG BEGIN_STMT
  # DEBUG idFound => 1

  <bb 6> [local count: 153024284]:
  # bufferPtr_10 = PHI <bufferPtr_11(4), bufferPtr_21(5)>
  # bufferLength_12 = PHI <bufferLength_13(4), bufferLength_22(5)>
  # idFound_15 = PHI <idFound_16(4), 1(5)>
  # DEBUG idFound => idFound_15
  # DEBUG bufferLength => bufferLength_12
  # DEBUG bufferPtr => bufferPtr_10
  # DEBUG BEGIN_STMT
  if (idFound_15 == 1)
    goto <bb 7>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 50498014]:
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 102526270]:
  # bufferPtr_3 = PHI <bufferPtr_10(6)>
  # bufferLength_8 = PHI <bufferLength_12(6)>
  # DEBUG BEGIN_STMT
  _4 = SecOC_TxData[0].State;
  if (_4 == 5)
    goto <bb 8>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 8> [local count: 34858932]:
  _5 = PduInfoPtr_18(D)->SduLength;
  if (_5 >= bufferLength_8)
    goto <bb 9>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 9> [local count: 11503448]:
  # DEBUG BEGIN_STMT
  _6 = PduInfoPtr_18(D)->SduDataPtr;
  _7 = (long unsigned int) bufferLength_8;
  TS_MemCpy32 (_6, bufferPtr_3, _7);
  # DEBUG BEGIN_STMT
  PduInfoPtr_18(D)->SduLength = bufferLength_8;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  goto <bb 11>; [100.00%]

  <bb 12> [local count: 255550554]:

  <bb 10> [local count: 306048568]:
  # bufferPtr_11 = PHI <0B(12), bufferPtr_10(13)>
  # bufferLength_13 = PHI <0(12), bufferLength_12(13)>
  # pduIdx_14 = PHI <0(12), 1(13)>
  # idFound_16 = PHI <0(12), idFound_15(13)>
  # DEBUG idFound => idFound_16
  # DEBUG pduIdx => pduIdx_14
  # DEBUG bufferLength => bufferLength_13
  # DEBUG bufferPtr => bufferPtr_11
  # DEBUG BEGIN_STMT
  if (pduIdx_14 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 11> [local count: 1073741824]:
  # retVal_9 = PHI <1(2), 1(3), 1(8), 1(10), 1(7), 0(9)>
  # DEBUG retVal => retVal_9
  # DEBUG BEGIN_STMT
  return retVal_9;

}



;; Function SecOC_TxConfirmation (SecOC_TxConfirmation, funcdef_no=6, decl_uid=5940, cgraph_uid=7, symbol_order=10)

Modification phase of node SecOC_TxConfirmation/10
SecOC_TxConfirmation (PduIdType id)
{
  uint16 pduIdx;
  long unsigned int SecOC_InitStatus.11_1;
  short unsigned int _2;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.12_3;
  long unsigned int _4;
  sizetype _5;
  const struct SecOC_TxPduConfigType * _6;
  short unsigned int _7;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.11_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.11_1 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 218606120]:
  # DEBUG BEGIN_STMT
  _2 = SecOC_TxConfig[0].PduIdForSecuredPduAtSecOC;
  if (_2 == id_12(D))
    goto <bb 4>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 9> [local count: 72140020]:
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 146466100]:
  # DEBUG BEGIN_STMT
  # DEBUG idFound => 1
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.12_3 = SecOC_ConfigPtr;
  _4 = SecOC_ConfigPtr.12_3->TxPduConfigPtr;
  _5 = _4;
  _6 = SecOC_ConfigPtr.12_3 + _5;
  _7 = _6->ULAuthLayerPduIdAtPduR;
  PduR_SecOCTxConfirmation (_7);
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].PduREvent = 3;
  # DEBUG idFound => 1
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 8> [local count: 365072220]:

  <bb 6> [local count: 437212239]:
  # pduIdx_8 = PHI <0(8), 1(9)>
  # DEBUG idFound => 0
  # DEBUG pduIdx => pduIdx_8
  # DEBUG BEGIN_STMT
  if (pduIdx_8 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function SecOC_RxIndication (SecOC_RxIndication, funcdef_no=7, decl_uid=5930, cgraph_uid=8, symbol_order=11)

Modification phase of node SecOC_RxIndication/11
SecOC_RxIndication (PduIdType id, const struct PduInfoType * info)
{
  uint8 * localBufferPtr;
  BufReq_ReturnType bufReqRetVal;
  uint8 pduType;
  uint16 pduIdx;
  PduLengthType pduLength;
  long unsigned int SecOC_InitStatus.15_1;
  short unsigned int _2;
  unsigned char _3;
  short unsigned int pduIdx.16_4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char pduType.19_8;
  unsigned char pduType.20_9;
  short unsigned int pduIdx.21_10;
  int _11;
  short unsigned int pduLength.23_12;
  uint8 * _13;
  short unsigned int pduLength.25_14;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.15_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.15_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (info_22(D) != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 13>; [46.53%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _2 = info_22(D)->SduLength;
  pduLength = _2;
  # DEBUG BEGIN_STMT
  pduIdx = id_24(D);
  # DEBUG BEGIN_STMT
  pduType = 0;
  # DEBUG BEGIN_STMT
  _3 = SecOC_RxCheckForPduIdx (&pduIdx, &pduType);
  if (_3 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 5> [local count: 39509313]:
  # DEBUG BEGIN_STMT
  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  pduIdx.16_4 = pduIdx;
  _5 = (int) pduIdx.16_4;
  _6 = SecOC_RxData[_5].PduInProcess;
  if (_6 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 6> [local count: 26471240]:
  _7 = SecOC_RxConfig[_5].ReceptionStrategy;
  if (_7 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 7> [local count: 26273693]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  pduType.19_8 = pduType;
  bufReqRetVal_30 = SecOC_RxCheckIncomingIfPdu (&pduLength, pduIdx.16_4, pduType.19_8);
  # DEBUG bufReqRetVal => bufReqRetVal_30
  # DEBUG BEGIN_STMT
  if (bufReqRetVal_30 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 8> [local count: 13136847]:
  # DEBUG BEGIN_STMT
  # DEBUG localBufferPtr => 0B
  # DEBUG BEGIN_STMT
  pduType.20_9 = pduType;
  if (pduType.20_9 == 3)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 4466528]:
  # DEBUG BEGIN_STMT
  pduIdx.21_10 = pduIdx;
  _11 = (int) pduIdx.21_10;
  SecOC_RxData[_11].PduREvent = 1;
  # DEBUG BEGIN_STMT
  pduLength.23_12 = pduLength;
  SecOC_RxData[_11].ReceivedSecuredPdu.SduLength = pduLength.23_12;
  # DEBUG BEGIN_STMT
  localBufferPtr_33 = SecOC_RxData[_11].ReceivedSecuredPdu.SduDataPtr;
  # DEBUG localBufferPtr => localBufferPtr_33

  <bb 10> [local count: 13136847]:
  # localBufferPtr_16 = PHI <0B(8), localBufferPtr_33(9)>
  # DEBUG localBufferPtr => localBufferPtr_16
  # DEBUG BEGIN_STMT
  _13 = info_22(D)->SduDataPtr;
  pduLength.25_14 = pduLength;
  _15 = (long unsigned int) pduLength.25_14;
  TS_MemCpy32 (localBufferPtr_16, _13, _15);

  <bb 11> [local count: 39509313]:
  # DEBUG BEGIN_STMT
  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 ();

  <bb 12> [local count: 195204116]:
  pduLength ={v} {CLOBBER};
  pduIdx ={v} {CLOBBER};
  pduType ={v} {CLOBBER};

  <bb 13> [local count: 1073741824]:
  return;

}



;; Function SecOC_MainFunctionRx (SecOC_MainFunctionRx, funcdef_no=8, decl_uid=6020, cgraph_uid=9, symbol_order=12)

Modification phase of node SecOC_MainFunctionRx/12
SecOC_MainFunctionRx ()
{
  uint16 pduIdx;
  long unsigned int SecOC_InitStatus.35_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.35_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.35_1 == 1)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 6> [local count: 354334802]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SecOC_Rx_ProcessPduStates (0);
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 1

  <bb 4> [local count: 708669605]:
  # pduIdx_2 = PHI <1(3), 0(6)>
  # DEBUG pduIdx => pduIdx_2
  # DEBUG BEGIN_STMT
  if (pduIdx_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function SecOC_MainFunctionTx (SecOC_MainFunctionTx, funcdef_no=9, decl_uid=6022, cgraph_uid=10, symbol_order=13)

Modification phase of node SecOC_MainFunctionTx/13
SecOC_MainFunctionTx ()
{
  uint16 pduIdx;
  long unsigned int SecOC_InitStatus.37_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SecOC_InitStatus.37_1 ={v} SecOC_InitStatus;
  if (SecOC_InitStatus.37_1 == 1)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 6> [local count: 354334802]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ProcessPduStates (0);
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 1

  <bb 4> [local count: 708669605]:
  # pduIdx_2 = PHI <1(3), 0(6)>
  # DEBUG pduIdx => pduIdx_2
  # DEBUG BEGIN_STMT
  if (pduIdx_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 1073741824]:
  return;

}


