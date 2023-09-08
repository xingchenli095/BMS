
IPA constant propagation start:
Determining dynamic type for call: Dcm_Dsl_SetupTxConnection.isra.0 (TxConnectionIndex_15, ContextComMChannelIdIndex_31, Requester_18(D), SuppressTransmission_10(D), AmountToTransmit_17(D), TransmissionTimeout_22(D), Buffer$FilledLength_12, Buffer$BufferId_6, _32);
  Starting walk at: Dcm_Dsl_SetupTxConnection.isra.0 (TxConnectionIndex_15, ContextComMChannelIdIndex_31, Requester_18(D), SuppressTransmission_10(D), AmountToTransmit_17(D), TransmissionTimeout_22(D), Buffer$FilledLength_12, Buffer$BufferId_6, _32);
  instance pointer: _32  Outer instance pointer: _32 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  Starting walk at: RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  instance pointer: RetryInfoPtr_56(D)  Outer instance pointer: RetryInfoPtr_56(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  Starting walk at: RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  instance pointer: _8  Outer instance pointer: &Dcm_TxConnections[_5].BufferDataMark offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  Starting walk at: RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  instance pointer: _9  Outer instance pointer: &Dcm_TxConnections[_5].BufferConfirmedDataMark offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_SetupTxConnection.isra.0/36:
  Jump functions of caller  Dcm_Dsl_Supervisor_TransmissionFinished/35:
  Jump functions of caller  Dcm_Dsp_ProtocolTransmissionFinished/34:
  Jump functions of caller  Dcm_Dsp_ProtocolProvideNextTxBuffer/33:
  Jump functions of caller  Dcm_Dsp_ProtocolTransmissionTimedOutWaitingForData/32:
  Jump functions of caller  PduR_DcmTransmit/31:
  Jump functions of caller  Dcm_Dsl_ComMChannelStateManager_GetTxState/30:
  Jump functions of caller  Dcm_Dsl_BufferChangeState/29:
  Jump functions of caller  PduR_DcmCancelTransmit/26:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25:
  Jump functions of caller  Dcm_Dsl_BufferGive/24:
  Jump functions of caller  TS_MemCpy32/23:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22:
  Jump functions of caller  Det_ASR40_ReportError/21:
  Jump functions of caller  Dcm_Dsl_ProcessRetryInformation/19:
  Jump functions of caller  Dcm_Dsl_TxConnectionInitSingleTxConnection/18:
  Jump functions of caller  Dcm_Dsl_TxConnectionInit/17:
    callsite  Dcm_Dsl_TxConnectionInit/17 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 5]
  Jump functions of caller  Dcm_Dsl_ConfirmTransmissionToRequester/15:
  Jump functions of caller  Dcm_Dsl_ProvideNextTxBuffer/14:
  Jump functions of caller  Dcm_Dsl_TxConnectionStart/13:
    callsite  Dcm_Dsl_TxConnectionStart/13 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionStart/13 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op plus_expr 6
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionStart/13 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionStart/13 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op plus_expr 6
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionStart/13 -> Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11:
  Jump functions of caller  Dcm_Dsl_TxConnectionProcessNextTxBuffer/10:
  Jump functions of caller  Dcm_Dsl_TxConnectionGive/9:
  Jump functions of caller  Dcm_Dsl_TxConnectionProcessTxConnections/8:
    callsite  Dcm_Dsl_TxConnectionProcessTxConnections/8 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 5]
    callsite  Dcm_Dsl_TxConnectionProcessTxConnections/8 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [6, 11]
    callsite  Dcm_Dsl_TxConnectionProcessTxConnections/8 -> Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 5]
    callsite  Dcm_Dsl_TxConnectionProcessTxConnections/8 -> Dcm_Dsl_TxConnectionStart/13 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 5]
  Jump functions of caller  Dcm_Dsl_TxConnectionTransmit/7:
    callsite  Dcm_Dsl_TxConnectionTransmit/7 -> Dcm_Dsl_TxConnectionStart/13 : 
       param 0: PASS THROUGH: 0, op plus_expr 65530
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionTransmit/7 -> Dcm_Dsl_SetupTxConnection.isra.0/36 : 
       param 0: PASS THROUGH: 0, op plus_expr 65530
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 4: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 5: PASS THROUGH: 5, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 6: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 7: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 8: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionTransmit/7 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionTransmit/7 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_TxConnectionCancelTransmit/6:
    callsite  Dcm_Dsl_TxConnectionCancelTransmit/6 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: PASS THROUGH: 0, op plus_expr 65530
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionCancelTransmit/6 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_TxConnectionCancelTransmit/6 -> Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 : 
       param 0: PASS THROUGH: 0, op plus_expr 65530
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_TxConnectionGetState/5:
  Jump functions of caller  Dcm_TxConfirmation/4:
    callsite  Dcm_TxConfirmation/4 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_TxConfirmation/4 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: PASS THROUGH: 0, op plus_expr 6
         value: 0x0, mask: 0xf
         VR  [6, 11]
  Jump functions of caller  Dcm_TpTxConfirmation/3:
    callsite  Dcm_TpTxConfirmation/3 -> Dcm_Dsl_TxConnectionInitSingleTxConnection/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_TpTxConfirmation/3 -> Dcm_Dsl_ConfirmTransmissionToRequester/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0x1
         VR  [0, 1]
       param 2: PASS THROUGH: 0, op plus_expr 6
         value: 0x0, mask: 0xf
         VR  [6, 11]
  Jump functions of caller  Dcm_CopyTxData/2:
    callsite  Dcm_CopyTxData/2 -> Dcm_Dsl_ProcessRetryInformation/19 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x2, mask: 0xfffffffc
         VR  ~[0, 0]
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]

 Propagating constants:

Not considering Dcm_Dsl_ProcessRetryInformation for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionInitSingleTxConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionInit for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ConfirmTransmissionToRequester for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_ProvideNextTxBuffer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionProcessNextTxBuffer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionGive for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionProcessTxConnections for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionTransmit for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionCancelTransmit for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_TxConnectionGetState for cloning; -fipa-cp-clone disabled.
Not considering Dcm_TxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering Dcm_TpTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering Dcm_CopyTxData for cloning; -fipa-cp-clone disabled.

overall_size: 611, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_SetupTxConnection.isra.0/36:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [5]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [6]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [7]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [8]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_ProcessRetryInformation/19:
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
  Node: Dcm_Dsl_TxConnectionInitSingleTxConnection/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_TxConnectionInit/17:
  Node: Dcm_Dsl_ConfirmTransmissionToRequester/15:
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
  Node: Dcm_Dsl_ProvideNextTxBuffer/14:
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
  Node: Dcm_Dsl_TxConnectionStart/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_TxConnectionProcessNextTxBuffer/10:
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
  Node: Dcm_Dsl_TxConnectionGive/9:
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
  Node: Dcm_Dsl_TxConnectionProcessTxConnections/8:
  Node: Dcm_Dsl_TxConnectionTransmit/7:
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
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [6]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_TxConnectionCancelTransmit/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_TxConnectionGetState/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_TxConfirmation/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_TpTxConfirmation/3:
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
  Node: Dcm_CopyTxData/2:
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

Dcm_Dsl_SetupTxConnection.isra.0/36 (Dcm_Dsl_SetupTxConnection.isra.0) @06e8ed20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_TxConnectionTransmit/7 (77159560 (estimated locally),0.62 per call) 
  Calls: Dcm_Dsl_BufferChangeState/29 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_Supervisor_TransmissionFinished/35 (Dcm_Dsl_Supervisor_TransmissionFinished) @06e6a2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ConfirmTransmissionToRequester/15 (633507677 (estimated locally),0.59 per call) 
  Calls: 
Dcm_Dsp_ProtocolTransmissionFinished/34 (Dcm_Dsp_ProtocolTransmissionFinished) @06e6a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_ConfirmTransmissionToRequester/15 (440234148 (estimated locally),0.41 per call) 
  Calls: 
Dcm_Dsp_ProtocolProvideNextTxBuffer/33 (Dcm_Dsp_ProtocolProvideNextTxBuffer) @06e6a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyTxData/2 (508681 (estimated locally),0.00 per call) Dcm_Dsl_TxConnectionProcessTxConnections/8 (115038015 (estimated locally),0.25 per call) Dcm_Dsl_ProvideNextTxBuffer/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ProtocolTransmissionTimedOutWaitingForData/32 (Dcm_Dsp_ProtocolTransmissionTimedOutWaitingForData) @06e13ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_TxConnectionProcessTxConnections/8 (25814531 (estimated locally),0.06 per call) 
  Calls: 
PduR_DcmTransmit/31 (PduR_DcmTransmit) @06e139a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_TxConnectionStart/13 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Dcm_Dsl_ComMChannelStateManager_GetTxState/30 (Dcm_Dsl_ComMChannelStateManager_GetTxState) @06e138c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_TxConnectionStart/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferChangeState/29 (Dcm_Dsl_BufferChangeState) @06e13620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (106228629 (estimated locally),0.10 per call) Dcm_Dsl_SetupTxConnection.isra.0/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_RxComMChannelIDs/28 (Dcm_RxComMChannelIDs) @06e1a6c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionTransmit/7 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_MainConnectionConfig/27 (Dcm_MainConnectionConfig) @06df0f30
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 (read)Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_DcmCancelTransmit/26 (PduR_DcmCancelTransmit) @06e130e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_TxConnectionCancelTransmit/6 (319015138 (estimated locally),0.30 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06de0ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyTxData/2 (159231290 (estimated locally),0.15 per call) Dcm_Dsl_TxConnectionProcessTxConnections/8 (230076030 (estimated locally),0.51 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (161907382 (estimated locally),0.15 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (273804165 (estimated locally),0.26 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (319015138 (estimated locally),0.30 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (319015138 (estimated locally),0.30 per call) Dcm_TxConfirmation/4 (183880435 (estimated locally),0.17 per call) Dcm_TpTxConfirmation/3 (91940217 (estimated locally),0.09 per call) Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Dsl_BufferGive/24 (Dcm_Dsl_BufferGive) @06de0e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyTxData/2 (508681 (estimated locally),0.00 per call) Dcm_Dsl_TxConnectionProcessTxConnections/8 (230076030 (estimated locally),0.51 per call) Dcm_Dsl_TxConnectionProcessTxConnections/8 (25814531 (estimated locally),0.06 per call) Dcm_Dsl_TxConnectionTransmit/7 (5702216 (estimated locally),0.05 per call) Dcm_Dsl_TxConnectionTransmit/7 (40812516 (estimated locally),0.33 per call) Dcm_Dsl_TxConnectionStart/13 (409110152 (estimated locally),0.38 per call) Dcm_Dsl_TxConnectionStart/13 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (754726686 (estimated locally),0.70 per call) Dcm_TxConfirmation/4 (183880435 (estimated locally),0.17 per call) Dcm_TpTxConfirmation/3 (91940217 (estimated locally),0.09 per call) Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (138143404 (estimated locally),0.13 per call) 
  Calls: 
TS_MemCpy32/23 (TS_MemCpy32) @06de0d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyTxData/2 (748060 (estimated locally),0.00 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06de0b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyTxData/2 (159232650 (estimated locally),0.15 per call) Dcm_Dsl_TxConnectionProcessTxConnections/8 (230076030 (estimated locally),0.51 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (1073741823 (estimated locally),1.00 per call) Dcm_TxConfirmation/4 (183880435 (estimated locally),0.17 per call) Dcm_TpTxConfirmation/3 (91940217 (estimated locally),0.09 per call) Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Det_ASR40_ReportError/21 (Det_ASR40_ReportError) @06de0a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyTxData/2 (6699714 (estimated locally),0.01 per call) Dcm_CopyTxData/2 (60298777 (estimated locally),0.06 per call) Dcm_CopyTxData/2 (21445139 (estimated locally),0.02 per call) Dcm_CopyTxData/2 (187083080 (estimated locally),0.17 per call) Dcm_CopyTxData/2 (181135951 (estimated locally),0.17 per call) Dcm_CopyTxData/2 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_ProcessRetryInformation/19 (62008590 (estimated locally),0.06 per call) Dcm_Dsl_TxConnectionStart/13 (35055447 (estimated locally),0.03 per call) Dcm_TxConfirmation/4 (183880435 (estimated locally),0.17 per call) Dcm_TxConfirmation/4 (181135951 (estimated locally),0.17 per call) Dcm_TxConfirmation/4 (524845004 (estimated locally),0.49 per call) Dcm_TpTxConfirmation/3 (91940217 (estimated locally),0.09 per call) Dcm_TpTxConfirmation/3 (365016386 (estimated locally),0.34 per call) Dcm_TpTxConfirmation/3 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Initialized/20 (Dcm_Initialized) @06dea5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_TpTxConfirmation/3 (read)Dcm_TxConfirmation/4 (read)Dcm_CopyTxData/2 (read)
  Availability: not_available
  Varpool flags:
Dcm_Dsl_ProcessRetryInformation/19 (Dcm_Dsl_ProcessRetryInformation) @06de0700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_CopyTxData/2 (40604326 (estimated locally),0.04 per call) 
  Calls: Det_ASR40_ReportError/21 (62008590 (estimated locally),0.06 per call) 
Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (Dcm_Dsl_TxConnectionInitSingleTxConnection) @06de0460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_TxConnectionInit/17 (920304118 (estimated locally),6.00 per call) Dcm_Dsl_TxConnectionProcessTxConnections/8 (115038015 (estimated locally),0.25 per call) Dcm_Dsl_TxConnectionStart/13 (409110152 (estimated locally),0.38 per call) Dcm_Dsl_TxConnectionStart/13 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (754726686 (estimated locally),0.70 per call) Dcm_TxConfirmation/4 (183880435 (estimated locally),0.17 per call) Dcm_TpTxConfirmation/3 (91940217 (estimated locally),0.09 per call) 
  Calls: 
Dcm_Dsl_TxConnectionInit/17 (Dcm_Dsl_TxConnectionInit) @06ddaee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:153437706 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (920304118 (estimated locally),6.00 per call) 
Dcm_Dsl_ConfirmTransmissionToRequester/15 (Dcm_Dsl_ConfirmTransmissionToRequester) @06ddab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_TxConnectionProcessTxConnections/8 (115038015 (estimated locally),0.25 per call) Dcm_Dsl_TxConnectionTransmit/7 (5702216 (estimated locally),0.05 per call) Dcm_Dsl_TxConnectionTransmit/7 (40812516 (estimated locally),0.33 per call) Dcm_Dsl_TxConnectionStart/13 (409110152 (estimated locally),0.38 per call) Dcm_Dsl_TxConnectionStart/13 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (754726686 (estimated locally),0.70 per call) Dcm_TxConfirmation/4 (183880435 (estimated locally),0.17 per call) Dcm_TpTxConfirmation/3 (91940217 (estimated locally),0.09 per call) 
  Calls: Dcm_Dsl_Supervisor_TransmissionFinished/35 (633507677 (estimated locally),0.59 per call) Dcm_Dsp_ProtocolTransmissionFinished/34 (440234148 (estimated locally),0.41 per call) 
Dcm_Dsl_ProvideNextTxBuffer/14 (Dcm_Dsl_ProvideNextTxBuffer) @06dda620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ProtocolProvideNextTxBuffer/33 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_TxConnectionStart/13 (Dcm_Dsl_TxConnectionStart) @06dda460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_TxConnections/0 (read)Dcm_RxComMChannelIDs/28 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (addr)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_TxConnectionProcessTxConnections/8 (230076030 (estimated locally),0.51 per call) Dcm_Dsl_TxConnectionTransmit/7 (25462655 (estimated locally),0.21 per call) 
  Calls: Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (409110152 (estimated locally),0.38 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (409110152 (estimated locally),0.38 per call) Dcm_Dsl_BufferGive/24 (409110152 (estimated locally),0.38 per call) Det_ASR40_ReportError/21 (35055447 (estimated locally),0.03 per call) Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (71717364 (estimated locally),0.07 per call) Dcm_Dsl_BufferGive/24 (71717364 (estimated locally),0.07 per call) PduR_DcmTransmit/31 (217325345 (estimated locally),0.20 per call) Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 (217325345 (estimated locally),0.20 per call) Dcm_Dsl_ComMChannelStateManager_GetTxState/30 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 (Dcm_Dsl_GetTxPduIdFromTxConnectionIndex) @06dda000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_MainConnectionConfig/27 (read)Dcm_MainConnectionConfig/27 (read)
  Referring: 
  Availability: local
  Function flags: count:312727306 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_TxConnectionProcessTxConnections/8 (25814531 (estimated locally),0.06 per call) Dcm_Dsl_TxConnectionStart/13 (217325345 (estimated locally),0.20 per call) Dcm_Dsl_TxConnectionCancelTransmit/6 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (Dcm_Dsl_TxConnectionProcessNextTxBuffer) @06d7ee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_ProcessTxConnectionsOnMainFunction/1 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_BufferGive/24 (138143404 (estimated locally),0.13 per call) Dcm_Dsl_BufferChangeState/29 (106228629 (estimated locally),0.10 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (524845004 (estimated locally),0.49 per call) 
Dcm_Dsl_TxConnectionGive/9 (Dcm_Dsl_TxConnectionGive) @06d7ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_TxConnectionProcessTxConnections/8 (Dcm_Dsl_TxConnectionProcessTxConnections) @06d7ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProcessTxConnectionsOnMainFunction/1 (read)Dcm_ProcessTxConnectionsOnMainFunction/1 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_ProcessTxConnectionsOnMainFunction/1 (write)
  Referring: 
  Availability: available
  Function flags: count:451287371 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ProtocolProvideNextTxBuffer/33 (115038015 (estimated locally),0.25 per call) Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (115038015 (estimated locally),0.25 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (115038015 (estimated locally),0.25 per call) Dcm_Dsl_BufferGive/24 (230076030 (estimated locally),0.51 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (230076030 (estimated locally),0.51 per call) Dcm_Dsp_ProtocolTransmissionTimedOutWaitingForData/32 (25814531 (estimated locally),0.06 per call) Dcm_Dsl_BufferGive/24 (25814531 (estimated locally),0.06 per call) Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 (25814531 (estimated locally),0.06 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (230076030 (estimated locally),0.51 per call) Dcm_Dsl_TxConnectionStart/13 (230076030 (estimated locally),0.51 per call) 
Dcm_Dsl_TxConnectionTransmit/7 (Dcm_Dsl_TxConnectionTransmit) @06d7e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TxConnections/0 (read)Dcm_RxComMChannelIDs/28 (read)Dcm_ProcessTxConnectionsOnMainFunction/1 (write)Dcm_TxConnections/0 (write)Dcm_ProcessTxConnectionsOnMainFunction/1 (write)
  Referring: 
  Availability: available
  Function flags: count:123674290 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionStart/13 (25462655 (estimated locally),0.21 per call) Dcm_Dsl_SetupTxConnection.isra.0/36 (77159560 (estimated locally),0.62 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (5702216 (estimated locally),0.05 per call) Dcm_Dsl_BufferGive/24 (5702216 (estimated locally),0.05 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (40812516 (estimated locally),0.33 per call) Dcm_Dsl_BufferGive/24 (40812516 (estimated locally),0.33 per call) 
Dcm_Dsl_TxConnectionCancelTransmit/6 (Dcm_Dsl_TxConnectionCancelTransmit) @06d7e620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (754726686 (estimated locally),0.70 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (754726686 (estimated locally),0.70 per call) Dcm_Dsl_BufferGive/24 (754726686 (estimated locally),0.70 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (161907382 (estimated locally),0.15 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (273804165 (estimated locally),0.26 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (319015138 (estimated locally),0.30 per call) PduR_DcmCancelTransmit/26 (319015138 (estimated locally),0.30 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (319015138 (estimated locally),0.30 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (1073741823 (estimated locally),1.00 per call) Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11 (1073741823 (estimated locally),1.00 per call) 
Dcm_Dsl_TxConnectionGetState/5 (Dcm_Dsl_TxConnectionGetState) @06d7e460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_TxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_TxConfirmation/4 (Dcm_TxConfirmation) @06d7e2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/20 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (183880435 (estimated locally),0.17 per call) Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (183880435 (estimated locally),0.17 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (183880435 (estimated locally),0.17 per call) Dcm_Dsl_BufferGive/24 (183880435 (estimated locally),0.17 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/21 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/21 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/21 (524845004 (estimated locally),0.49 per call) 
Dcm_TpTxConfirmation/3 (Dcm_TpTxConfirmation) @06dd0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/20 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (91940217 (estimated locally),0.09 per call) Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (91940217 (estimated locally),0.09 per call) Dcm_Dsl_ConfirmTransmissionToRequester/15 (91940217 (estimated locally),0.09 per call) Dcm_Dsl_BufferGive/24 (91940217 (estimated locally),0.09 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (91940217 (estimated locally),0.09 per call) Det_ASR40_ReportError/21 (91940217 (estimated locally),0.09 per call) Det_ASR40_ReportError/21 (365016386 (estimated locally),0.34 per call) Det_ASR40_ReportError/21 (524845004 (estimated locally),0.49 per call) 
Dcm_CopyTxData/2 (Dcm_CopyTxData) @06dd09a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/20 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (addr)Dcm_TxConnections/0 (addr)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (read)Dcm_TxConnections/0 (write)Dcm_TxConnections/0 (write)Dcm_ProcessTxConnectionsOnMainFunction/1 (write)Dcm_TxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/25 (159231290 (estimated locally),0.15 per call) Det_ASR40_ReportError/21 (6699714 (estimated locally),0.01 per call) Dcm_Dsp_ProtocolProvideNextTxBuffer/33 (508681 (estimated locally),0.00 per call) Dcm_Dsl_BufferGive/24 (508681 (estimated locally),0.00 per call) TS_MemCpy32/23 (748060 (estimated locally),0.00 per call) Dcm_Dsl_ProcessRetryInformation/19 (40604326 (estimated locally),0.04 per call) Det_ASR40_ReportError/21 (60298777 (estimated locally),0.06 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/22 (159232650 (estimated locally),0.15 per call) Det_ASR40_ReportError/21 (21445139 (estimated locally),0.02 per call) Det_ASR40_ReportError/21 (187083080 (estimated locally),0.17 per call) Det_ASR40_ReportError/21 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/21 (524845004 (estimated locally),0.49 per call) 
Dcm_ProcessTxConnectionsOnMainFunction/1 (Dcm_ProcessTxConnectionsOnMainFunction) @06dcc090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_TxConnectionTransmit/7 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_Dsl_TxConnectionTransmit/7 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_CopyTxData/2 (write)
  Availability: available
  Varpool flags: initialized
Dcm_TxConnections/0 (Dcm_TxConnections) @06dcc048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_TxConnectionCancelTransmit/6 (read)Dcm_Dsl_TxConnectionCancelTransmit/6 (write)Dcm_Dsl_TxConnectionCancelTransmit/6 (read)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (write)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (write)Dcm_Dsl_TxConnectionStart/13 (addr)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionStart/13 (read)Dcm_Dsl_TxConnectionTransmit/7 (read)Dcm_Dsl_TxConnectionTransmit/7 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (read)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (read)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_TpTxConfirmation/3 (read)Dcm_TpTxConfirmation/3 (read)Dcm_TpTxConfirmation/3 (read)Dcm_TpTxConfirmation/3 (read)Dcm_Dsl_TxConnectionCancelTransmit/6 (read)Dcm_Dsl_TxConnectionCancelTransmit/6 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_TxConnectionGetState/5 (read)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_TxConnectionGive/9 (read)Dcm_Dsl_TxConnectionGive/9 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_SetupTxConnection.isra.0/36 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (read)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_TxConfirmation/4 (read)Dcm_TxConfirmation/4 (read)Dcm_TxConfirmation/4 (read)Dcm_TxConfirmation/4 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_CopyTxData/2 (write)Dcm_CopyTxData/2 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (read)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionProcessNextTxBuffer/10 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionInitSingleTxConnection/18 (write)Dcm_Dsl_TxConnectionCancelTransmit/6 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (write)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (read)Dcm_Dsl_TxConnectionProcessTxConnections/8 (write)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (addr)Dcm_CopyTxData/2 (addr)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (write)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)Dcm_CopyTxData/2 (read)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_GetTxPduIdFromTxConnectionIndex (Dcm_Dsl_GetTxPduIdFromTxConnectionIndex, funcdef_no=9, decl_uid=7212, cgraph_uid=10, symbol_order=11)

Modification phase of node Dcm_Dsl_GetTxPduIdFromTxConnectionIndex/11
Dcm_Dsl_GetTxPduIdFromTxConnectionIndex (Dcm_TxConnectionIndexType TxConnectionIndex)
{
  PduIdType TxPduId;
  uint16_least ConnectionIndex;
  short unsigned int _1;

  <bb 2> [local count: 312727306]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TxPduId => 0
  # DEBUG BEGIN_STMT
  # DEBUG ConnectionIndex => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 805306368]:
  # DEBUG BEGIN_STMT
  _1 = Dcm_MainConnectionConfig[ConnectionIndex_2].ConfirmationTxPduId;
  if (_1 == TxConnectionIndex_6(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 44291850]:
  # ConnectionIndex_4 = PHI <ConnectionIndex_2(3)>
  # DEBUG BEGIN_STMT
  TxPduId_8 = Dcm_MainConnectionConfig[ConnectionIndex_4].TxPduId;
  # DEBUG TxPduId => TxPduId_8
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 761014519]:
  # DEBUG BEGIN_STMT
  ConnectionIndex_7 = ConnectionIndex_2 + 1;
  # DEBUG ConnectionIndex => ConnectionIndex_7

  <bb 6> [local count: 1073741824]:
  # ConnectionIndex_2 = PHI <0(2), ConnectionIndex_7(5)>
  # DEBUG ConnectionIndex => ConnectionIndex_2
  # DEBUG BEGIN_STMT
  if (ConnectionIndex_2 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 7>; [25.00%]

  <bb 7> [local count: 312727306]:
  # TxPduId_3 = PHI <TxPduId_8(4), 0(6)>
  # DEBUG TxPduId => TxPduId_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return TxPduId_3;

}



;; Function Dcm_Dsl_TxConnectionGetState (Dcm_Dsl_TxConnectionGetState, funcdef_no=3, decl_uid=6077, cgraph_uid=4, symbol_order=5)

Modification phase of node Dcm_Dsl_TxConnectionGetState/5
Dcm_Dsl_TxConnectionGetState (Dcm_BufferUserType TxConnectionId)
{
  Dcm_TxConnectionStatusType TxConnectionStatus;
  Dcm_TxConnectionIndexType TxConnectionIndex;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  TxConnectionIndex_3 = TxConnectionId_2(D) + 65530;
  # DEBUG TxConnectionIndex => TxConnectionIndex_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_3;
  TxConnectionStatus_5 = Dcm_TxConnections[_1].Status;
  # DEBUG TxConnectionStatus => TxConnectionStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return TxConnectionStatus_5;

}



;; Function Dcm_Dsl_TxConnectionGive (Dcm_Dsl_TxConnectionGive, funcdef_no=7, decl_uid=6075, cgraph_uid=8, symbol_order=9)

Modification phase of node Dcm_Dsl_TxConnectionGive/9
Dcm_Dsl_TxConnectionGive (Dcm_BufferUserType Provider, Dcm_BufferUserType Receiver, Dcm_BufferUserType TxConnectionId)
{
  Dcm_TxConnectionIndexType TxConnectionIndex;
  Std_ReturnType OwnerTransferResult;
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG OwnerTransferResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TxConnectionIndex_6 = TxConnectionId_5(D) + 65530;
  # DEBUG TxConnectionIndex => TxConnectionIndex_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_6;
  _2 = Dcm_TxConnections[_1].Requester;
  if (_2 == Provider_8(D))
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Requester = Receiver_9(D);
  # DEBUG BEGIN_STMT
  # DEBUG OwnerTransferResult => 0

  <bb 4> [local count: 1073741824]:
  # OwnerTransferResult_3 = PHI <0(3), 1(2)>
  # DEBUG OwnerTransferResult => OwnerTransferResult_3
  # DEBUG BEGIN_STMT
  return OwnerTransferResult_3;

}



;; Function Dcm_Dsl_TxConnectionProcessNextTxBuffer (Dcm_Dsl_TxConnectionProcessNextTxBuffer, funcdef_no=8, decl_uid=6069, cgraph_uid=9, symbol_order=10)

Modification phase of node Dcm_Dsl_TxConnectionProcessNextTxBuffer/10
Dcm_Dsl_TxConnectionProcessNextTxBuffer (Dcm_BufferUserType TxConnectionId, struct Dcm_BufferType Buffer)
{
  short unsigned int Buffer$BufferId;
  long unsigned int Buffer$FilledLength;
  Dcm_TxConnectionIndexType TxConnectionIndex;
  int _1;
  unsigned char _2;
  unsigned char _3;
  Dcm_MsgItemType * _5;
  short unsigned int _7;
  short unsigned int _8;

  <bb 2> [local count: 1073741824]:
  Buffer$FilledLength_6 = MEM[(struct  *)&Buffer + 4B];
  # DEBUG Buffer$FilledLength => Buffer$FilledLength_6
  Buffer$BufferId_4 = MEM[(struct  *)&Buffer + 8B];
  # DEBUG Buffer$BufferId => Buffer$BufferId_4
  # DEBUG BEGIN_STMT
  TxConnectionIndex_12 = TxConnectionId_11(D) + 65530;
  # DEBUG TxConnectionIndex => TxConnectionIndex_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_12;
  _2 = Dcm_TxConnections[_1].SimulateTransmission;
  if (_2 == 1)
    goto <bb 3>; [51.12%]
  else
    goto <bb 4>; [48.88%]

  <bb 3> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Status = 4;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Buffer.FilledLength = Buffer$FilledLength_6;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Buffer.BufferId = Buffer$BufferId_4;
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 1;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _3 = Dcm_TxConnections[_1].Status;
  if (_3 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 106228629]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferChangeState (TxConnectionId_11(D), 19, Buffer$BufferId_4);
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Status = 3;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Buffer.FilledLength = Buffer$FilledLength_6;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Buffer.BufferId = Buffer$BufferId_4;
  # DEBUG BEGIN_STMT
  _5 = Buffer.BufferPtr;
  Dcm_TxConnections[_1].Buffer.BufferPtr = _5;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].BufferDataMark = 0;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].BufferConfirmedDataMark = 0;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 418616375]:
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 138143404]:
  # DEBUG BEGIN_STMT
  _7 = Dcm_TxConnections[_1].Requester;
  _8 = Dcm_TxConnections[_1].Buffer.BufferId;
  Dcm_Dsl_BufferGive (TxConnectionId_11(D), _7, _8);

  <bb 8> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_ProvideNextTxBuffer (Dcm_Dsl_ProvideNextTxBuffer, funcdef_no=12, decl_uid=6086, cgraph_uid=13, symbol_order=14)

Modification phase of node Dcm_Dsl_ProvideNextTxBuffer/14
Dcm_Dsl_ProvideNextTxBuffer (Dcm_BufferUserType Requester, Dcm_BufferUserType TxConnectionId)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolProvideNextTxBuffer (Requester_2(D), TxConnectionId_3(D));
  return;

}



;; Function Dcm_Dsl_ConfirmTransmissionToRequester (Dcm_Dsl_ConfirmTransmissionToRequester, funcdef_no=13, decl_uid=6081, cgraph_uid=14, symbol_order=15)

Modification phase of node Dcm_Dsl_ConfirmTransmissionToRequester/15
Dcm_Dsl_ConfirmTransmissionToRequester (Dcm_BufferUserType Requester, NotifResultType Result, Dcm_BufferUserType TxConnectionId)
{
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Requester_3(D) + 65524;
  if (_1 <= 1)
    goto <bb 3>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 3> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolTransmissionFinished (Requester_3(D), Result_6(D), TxConnectionId_5(D));
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 633507677]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_TransmissionFinished (TxConnectionId_5(D), Result_6(D));

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_TxConnectionInitSingleTxConnection (Dcm_Dsl_TxConnectionInitSingleTxConnection, funcdef_no=16, decl_uid=6083, cgraph_uid=17, symbol_order=18)

Modification phase of node Dcm_Dsl_TxConnectionInitSingleTxConnection/18
Dcm_Dsl_TxConnectionInitSingleTxConnection (Dcm_TxConnectionIndexType TxConnectionIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_2(D);
  Dcm_TxConnections[_1].Buffer.BufferId = 18;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Buffer.BufferPtr = 0B;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Buffer.FilledLength = 0;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Requester = 15;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].AmountLeftToCopy = 0;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].BufferDataMark = 0;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].BufferConfirmedDataMark = 0;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].SimulateTransmission = 0;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Status = 0;
  return;

}



;; Function Dcm_TpTxConfirmation (Dcm_TpTxConfirmation, funcdef_no=1, decl_uid=7208, cgraph_uid=2, symbol_order=3)

Modification phase of node Dcm_TpTxConfirmation/3
Dcm_TpTxConfirmation (PduIdType DcmTxPduId, NotifResultType Result)
{
  Dcm_TxResultType TransmissionResult;
  unsigned char Dcm_Initialized.1_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.1_1 = Dcm_Initialized;
  if (Dcm_Initialized.1_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 5, 5);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DcmTxPduId_11(D) > 5)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 367760870]:
  if (Result_12(D) > 120)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 365016386]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 5, 6);
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  _2 = (int) DcmTxPduId_11(D);
  _3 = Dcm_TxConnections[_2].Status;
  if (_3 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 5, 6);
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = DcmTxPduId_11(D) + 6;
  _5 = Dcm_TxConnections[_2].Requester;
  _6 = Dcm_TxConnections[_2].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_4, _5, _6);
  # DEBUG BEGIN_STMT
  if (Result_12(D) == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 10> [local count: 45970109]:
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionResult => 0

  <bb 11> [local count: 91940217]:
  # TransmissionResult_8 = PHI <1(9), 0(10)>
  # DEBUG TransmissionResult => TransmissionResult_8
  # DEBUG BEGIN_STMT
  _7 = Dcm_TxConnections[_2].Requester;
  Dcm_Dsl_ConfirmTransmissionToRequester (_7, TransmissionResult_8, _4);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInitSingleTxConnection (DcmTxPduId_11(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 12> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_TxConfirmation (Dcm_TxConfirmation, funcdef_no=2, decl_uid=7210, cgraph_uid=3, symbol_order=4)

Modification phase of node Dcm_TxConfirmation/4
Dcm_TxConfirmation (PduIdType DcmTxPduId)
{
  unsigned char Dcm_Initialized.2_1;
  int _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.2_1 = Dcm_Initialized;
  if (Dcm_Initialized.2_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 64, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DcmTxPduId_10(D) > 5)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 64, 6);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  _2 = (int) DcmTxPduId_10(D);
  _3 = Dcm_TxConnections[_2].Status;
  if (_3 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 64, 6);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = DcmTxPduId_10(D) + 6;
  _5 = Dcm_TxConnections[_2].Requester;
  _6 = Dcm_TxConnections[_2].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_4, _5, _6);
  # DEBUG BEGIN_STMT
  _7 = Dcm_TxConnections[_2].Requester;
  Dcm_Dsl_ConfirmTransmissionToRequester (_7, 1, _4);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInitSingleTxConnection (DcmTxPduId_10(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_TxConnectionCancelTransmit (Dcm_Dsl_TxConnectionCancelTransmit, funcdef_no=4, decl_uid=6066, cgraph_uid=5, symbol_order=6)

Modification phase of node Dcm_Dsl_TxConnectionCancelTransmit/6
Dcm_Dsl_TxConnectionCancelTransmit (Dcm_BufferUserType TxConnectionId)
{
  PduIdType TxPduId;
  Dcm_TxConnectionIndexType TxConnectionIndex;
  int _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;
  short unsigned int _6;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TxConnectionIndex_9 = TxConnectionId_8(D) + 65530;
  # DEBUG TxConnectionIndex => TxConnectionIndex_9
  # DEBUG BEGIN_STMT
  TxPduId_12 = Dcm_Dsl_GetTxPduIdFromTxConnectionIndex (TxConnectionIndex_9);
  # DEBUG TxPduId => TxPduId_12
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_9;
  _2 = Dcm_TxConnections[_1].Status;
  if (_2 > 1)
    goto <bb 3>; [74.50%]
  else
    goto <bb 7>; [25.50%]

  <bb 3> [local count: 799937659]:
  if (_2 != 5)
    goto <bb 4>; [79.76%]
  else
    goto <bb 8>; [20.24%]

  <bb 4> [local count: 638030277]:
  _3 = Dcm_TxConnections[_1].SimulateTransmission;
  if (_3 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 319015138]:
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Status = 5;
  # DEBUG BEGIN_STMT
  # DEBUG PduRCancelTransmitCallNecessary => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_DcmCancelTransmit (TxPduId_12);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 319015138]:
  # DEBUG PduRCancelTransmitCallNecessary => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 273804165]:
  # DEBUG PduRCancelTransmitCallNecessary => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 161907382]:
  # DEBUG PduRCancelTransmitCallNecessary => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 754726686]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_TxConnections[_1].Requester;
  _5 = Dcm_TxConnections[_1].Buffer.BufferId;
  Dcm_Dsl_BufferGive (TxConnectionId_8(D), _4, _5);
  # DEBUG BEGIN_STMT
  _6 = Dcm_TxConnections[_1].Requester;
  Dcm_Dsl_ConfirmTransmissionToRequester (_6, 0, TxConnectionId_8(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInitSingleTxConnection (TxConnectionIndex_9);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_TxConnectionStart (Dcm_Dsl_TxConnectionStart, funcdef_no=11, decl_uid=7222, cgraph_uid=12, symbol_order=13)

Modification phase of node Dcm_Dsl_TxConnectionStart/13
Dcm_Dsl_TxConnectionStart (Dcm_TxConnectionIndexType TxConnectionIndex)
{
  Std_ReturnType PduRTransmitResult;
  PduIdType TxPduId;
  Dcm_ComMChannelOperationStateType ComMChnTxState;
  NetworkHandleType ComMChannelId;
  Dcm_TxResultType TransmissionStartStatus;
  int _1;
  unsigned char _2;
  int _3;
  struct PduInfoType * _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  long unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;
  short unsigned int _13;
  long unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionStartStatus => 0
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_17(D);
  _2 = Dcm_TxConnections[_1].ContextComMChannelIdIndex;
  _3 = (int) _2;
  ComMChannelId_19 = Dcm_RxComMChannelIDs[_3];
  # DEBUG ComMChannelId => ComMChannelId_19
  # DEBUG BEGIN_STMT
  ComMChnTxState_21 = Dcm_Dsl_ComMChannelStateManager_GetTxState (ComMChannelId_19);
  # DEBUG ComMChnTxState => ComMChnTxState_21
  # DEBUG BEGIN_STMT
  if (ComMChnTxState_21 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TxPduId_26 = Dcm_Dsl_GetTxPduIdFromTxConnectionIndex (TxConnectionIndex_17(D));
  # DEBUG TxPduId => TxPduId_26
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Status = 3;
  # DEBUG BEGIN_STMT
  _4 = &Dcm_TxConnections[_1].TxPduInfo;
  PduRTransmitResult_29 = PduR_DcmTransmit (TxPduId_26, _4);
  # DEBUG PduRTransmitResult => PduRTransmitResult_29
  # DEBUG BEGIN_STMT
  if (PduRTransmitResult_29 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 4> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionStartStatus => 0
  # DEBUG BEGIN_STMT
  _5 = TxConnectionIndex_17(D) + 6;
  _6 = Dcm_TxConnections[_1].Requester;
  _7 = Dcm_TxConnections[_1].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_5, _6, _7);
  # DEBUG BEGIN_STMT
  _8 = Dcm_TxConnections[_1].Requester;
  Dcm_Dsl_ConfirmTransmissionToRequester (_8, 0, _5);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInitSingleTxConnection (TxConnectionIndex_17(D));
  # DEBUG BEGIN_STMT
  if (PduRTransmitResult_29 != 1)
    goto <bb 5>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 5> [local count: 35055447]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 165, 2);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  _9 = Dcm_TxConnections[_1].TransmissionTimeout;
  if (_9 == 0)
    goto <bb 7>; [47.77%]
  else
    goto <bb 8>; [52.23%]

  <bb 7> [local count: 409110152]:
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionStartStatus => 0
  # DEBUG BEGIN_STMT
  _10 = TxConnectionIndex_17(D) + 6;
  _11 = Dcm_TxConnections[_1].Requester;
  _12 = Dcm_TxConnections[_1].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_10, _11, _12);
  # DEBUG BEGIN_STMT
  _13 = Dcm_TxConnections[_1].Requester;
  Dcm_Dsl_ConfirmTransmissionToRequester (_13, 0, _10);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInitSingleTxConnection (TxConnectionIndex_17(D));
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 447306327]:
  # DEBUG BEGIN_STMT
  _14 = _9 + 4294967295;
  Dcm_TxConnections[_1].TransmissionTimeout = _14;
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionStartStatus => 2

  <bb 9> [local count: 1073741824]:
  # TransmissionStartStatus_15 = PHI <1(3), 0(7), 2(8), 0(5), 0(4)>
  # DEBUG TransmissionStartStatus => TransmissionStartStatus_15
  # DEBUG BEGIN_STMT
  return TransmissionStartStatus_15;

}



;; Function Dcm_Dsl_TxConnectionTransmit (Dcm_Dsl_TxConnectionTransmit, funcdef_no=5, decl_uid=6064, cgraph_uid=6, symbol_order=7)

Modification phase of node Dcm_Dsl_TxConnectionTransmit/7
Dcm_Dsl_TxConnectionTransmit (Dcm_BufferUserType TxConnectionId, NetworkHandleType ContextComMChannelId, Dcm_BufferUserType Requester, boolean SuppressTransmission, Dcm_MsgLenType AmountToTransmit, Dcm_TransmissionTimeoutType TransmissionTimeout, struct Dcm_BufferType Buffer)
{
  short unsigned int Buffer$BufferId;
  long unsigned int Buffer$FilledLength;
  Dcm_TxResultType TransmissionStartStatus;
  boolean ComMChannelFound;
  Dcm_RxComMChannelIDsIndexType ContextComMChannelIdIndex;
  Dcm_TxConnectionIndexType TxConnectionIndex;
  int _1;
  unsigned char _2;
  unsigned char _5;
  Dcm_MsgItemType * _32;

  <bb 2> [local count: 123674290]:
  Buffer$FilledLength_12 = MEM[(struct  *)&Buffer + 4B];
  # DEBUG Buffer$FilledLength => Buffer$FilledLength_12
  Buffer$BufferId_6 = MEM[(struct  *)&Buffer + 8B];
  # DEBUG Buffer$BufferId => Buffer$BufferId_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG isSuppressTransmission => SuppressTransmission_10(D)
  # DEBUG BEGIN_STMT
  # DEBUG TransmissionIsVirtual => 0
  # DEBUG BEGIN_STMT
  # DEBUG isSuppressTransmission => SuppressTransmission_10(D)
  # DEBUG BEGIN_STMT
  TxConnectionIndex_15 = TxConnectionId_14(D) + 65530;
  # DEBUG TxConnectionIndex => TxConnectionIndex_15
  # DEBUG BEGIN_STMT
  _1 = (int) TxConnectionIndex_15;
  _2 = Dcm_TxConnections[_1].Status;
  if (_2 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 40812516]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferGive (TxConnectionId_14(D), Requester_18(D), Buffer$BufferId_6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ConfirmTransmissionToRequester (Requester_18(D), 0, TxConnectionId_14(D));
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 82861774]:
  # DEBUG BEGIN_STMT
  if (SuppressTransmission_10(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 5> [local count: 28173003]:
  if (Buffer$FilledLength_12 == AmountToTransmit_17(D))
    goto <bb 6>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 6> [local count: 5702216]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferGive (TxConnectionId_14(D), Requester_18(D), Buffer$BufferId_6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_ConfirmTransmissionToRequester (Requester_18(D), 1, TxConnectionId_14(D));
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 996582263]:
  # DEBUG BEGIN_STMT
  _5 = Dcm_RxComMChannelIDs[0];
  if (_5 == ContextComMChannelId_21(D))
    goto <bb 18>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 18> [local count: 328872147]:
  goto <bb 9>; [100.00%]

  <bb 17> [local count: 667710116]:
  goto <bb 16>; [100.00%]

  <bb 8> [local count: 77159559]:
  # ContextComMChannelIdIndex_13 = PHI <0(5), 0(4)>
  # ComMChannelFound_11 = PHI <0(5), 0(4)>

  <bb 16> [local count: 744869677]:
  # ContextComMChannelIdIndex_3 = PHI <ContextComMChannelIdIndex_13(8), 1(17)>
  # ComMChannelFound_4 = PHI <ComMChannelFound_11(8), 0(17)>
  # DEBUG ContextComMChannelIdIndex => NULL

  <bb 9> [local count: 1073741824]:
  # ContextComMChannelIdIndex_7 = PHI <ContextComMChannelIdIndex_3(16), 0(18)>
  # ComMChannelFound_8 = PHI <ComMChannelFound_4(16), 1(18)>
  # DEBUG ComMChannelFound => ComMChannelFound_8
  # DEBUG ContextComMChannelIdIndex => ContextComMChannelIdIndex_7
  # DEBUG BEGIN_STMT
  if (ContextComMChannelIdIndex_7 == 0)
    goto <bb 10>; [96.34%]
  else
    goto <bb 11>; [3.66%]

  <bb 10> [local count: 1034442873]:
  if (ComMChannelFound_8 == 0)
    goto <bb 7>; [96.34%]
  else
    goto <bb 11>; [3.66%]

  <bb 11> [local count: 77159560]:
  # ContextComMChannelIdIndex_31 = PHI <ContextComMChannelIdIndex_7(9), 0(10)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => Buffer
  # DEBUG D#1 => Buffer
  _32 = MEM[(Dcm_MsgItemType * *)&Buffer + 12B];
  # DEBUG D#1 => Buffer
  Dcm_Dsl_SetupTxConnection.isra.0 (TxConnectionIndex_15, ContextComMChannelIdIndex_31, Requester_18(D), SuppressTransmission_10(D), AmountToTransmit_17(D), TransmissionTimeout_22(D), Buffer$FilledLength_12, Buffer$BufferId_6, _32);
  # DEBUG BEGIN_STMT
  if (SuppressTransmission_10(D) == 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 12> [local count: 25462655]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TransmissionStartStatus_27 = Dcm_Dsl_TxConnectionStart (TxConnectionIndex_15);
  # DEBUG TransmissionStartStatus => TransmissionStartStatus_27
  # DEBUG BEGIN_STMT
  if (TransmissionStartStatus_27 == 2)
    goto <bb 13>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 13> [local count: 8657303]:
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 1;
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 51696905]:
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_1].Status = 4;
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 1;

  <bb 15> [local count: 123674292]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_TxConnectionProcessTxConnections (Dcm_Dsl_TxConnectionProcessTxConnections, funcdef_no=6, decl_uid=6071, cgraph_uid=7, symbol_order=8)

Modification phase of node Dcm_Dsl_TxConnectionProcessTxConnections/8
Dcm_Dsl_TxConnectionProcessTxConnections ()
{
  PduIdType CurrentTxPduId;
  Dcm_TxResultType TransmissionStartStatus;
  boolean WaitingConnectionsPresent;
  uint16_least TxConnectionIndex;
  unsigned char Dcm_ProcessTxConnectionsOnMainFunction.4_1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  long unsigned int _11;
  short unsigned int _12;
  long unsigned int _13;
  short unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  short unsigned int _19;
  short unsigned int _20;
  short unsigned int _21;
  short unsigned int _22;

  <bb 2> [local count: 451287371]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG WaitingConnectionsPresent => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction.4_1 = Dcm_ProcessTxConnectionsOnMainFunction;
  if (Dcm_ProcessTxConnectionsOnMainFunction.4_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 3> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 0;
  # DEBUG BEGIN_STMT
  # DEBUG TxConnectionIndex => 0
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 920304119]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_TxConnections[TxConnectionIndex_23].Status;
  switch (_2) <default: <L22> [25.00%], case 1: <L2> [25.00%], case 2: <L5> [25.00%], case 4: <L11> [25.00%]>

  <bb 5> [local count: 230076030]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (short unsigned int) TxConnectionIndex_23;
  TransmissionStartStatus_48 = Dcm_Dsl_TxConnectionStart (_3);
  # DEBUG TransmissionStartStatus => TransmissionStartStatus_48
  # DEBUG BEGIN_STMT
  if (TransmissionStartStatus_48 == 2)
    goto <bb 6>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 6> [local count: 78225850]:
  # DEBUG BEGIN_STMT
  # DEBUG WaitingConnectionsPresent => 1
  goto <bb 15>; [100.00%]

  <bb 7> [local count: 230076030]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = Dcm_TxConnections[TxConnectionIndex_23].Status;
  if (_4 == 2)
    goto <bb 8>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 8> [local count: 78225850]:
  # DEBUG BEGIN_STMT
  _5 = Dcm_TxConnections[TxConnectionIndex_23].TransmissionTimeout;
  if (_5 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 25814531]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) TxConnectionIndex_23;
  CurrentTxPduId_43 = Dcm_Dsl_GetTxPduIdFromTxConnectionIndex (_6);
  # DEBUG CurrentTxPduId => CurrentTxPduId_43
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[TxConnectionIndex_23].Status = 7;
  # DEBUG BEGIN_STMT
  _7 = _6 + 6;
  _8 = Dcm_TxConnections[TxConnectionIndex_23].Requester;
  _9 = Dcm_TxConnections[TxConnectionIndex_23].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_7, _8, _9);
  # DEBUG BEGIN_STMT
  _10 = Dcm_TxConnections[TxConnectionIndex_23].Requester;
  # DEBUG Requester => _10
  # DEBUG TxConnectionId => CurrentTxPduId_43
  # DEBUG INLINE_ENTRY Dcm_Dsl_NotifyTransmissionTimeoutToRequester
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolTransmissionTimedOutWaitingForData (_10, CurrentTxPduId_43);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 52411320]:
  # DEBUG BEGIN_STMT
  _11 = _5 + 4294967295;
  Dcm_TxConnections[TxConnectionIndex_23].TransmissionTimeout = _11;
  # DEBUG BEGIN_STMT
  # DEBUG WaitingConnectionsPresent => 1

  <bb 11> [local count: 230076030]:
  # WaitingConnectionsPresent_24 = PHI <WaitingConnectionsPresent_26(7), WaitingConnectionsPresent_26(9), 1(10)>
  # DEBUG Requester => NULL
  # DEBUG TxConnectionId => NULL
  # DEBUG WaitingConnectionsPresent => WaitingConnectionsPresent_24
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 230076030]:
<L11>:
  # DEBUG BEGIN_STMT
  _12 = Dcm_TxConnections[TxConnectionIndex_23].AmountLeftToCopy;
  _13 = Dcm_TxConnections[TxConnectionIndex_23].Buffer.FilledLength;
  _14 = (short unsigned int) _13;
  _15 = _12 - _14;
  Dcm_TxConnections[TxConnectionIndex_23].AmountLeftToCopy = _15;
  # DEBUG BEGIN_STMT
  _16 = (short unsigned int) TxConnectionIndex_23;
  _17 = _16 + 6;
  _18 = Dcm_TxConnections[TxConnectionIndex_23].Requester;
  _19 = Dcm_TxConnections[TxConnectionIndex_23].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_17, _18, _19);
  # DEBUG BEGIN_STMT
  _20 = Dcm_TxConnections[TxConnectionIndex_23].AmountLeftToCopy;
  if (_20 == 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 115038015]:
  # DEBUG BEGIN_STMT
  _21 = Dcm_TxConnections[TxConnectionIndex_23].Requester;
  Dcm_Dsl_ConfirmTransmissionToRequester (_21, 1, _17);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_TxConnectionInitSingleTxConnection (_16);
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 115038015]:
  # DEBUG BEGIN_STMT
  _22 = Dcm_TxConnections[TxConnectionIndex_23].Requester;
  # DEBUG Requester => _22
  # DEBUG TxConnectionId => _17
  # DEBUG INLINE_ENTRY Dcm_Dsl_ProvideNextTxBuffer
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolProvideNextTxBuffer (_22, _17);
  # DEBUG Requester => NULL
  # DEBUG TxConnectionId => NULL
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[TxConnectionIndex_23].Status = 2;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[TxConnectionIndex_23].TransmissionTimeout = 0;
  # DEBUG BEGIN_STMT
  # DEBUG WaitingConnectionsPresent => 1

  <bb 15> [local count: 920304121]:
  # WaitingConnectionsPresent_25 = PHI <1(6), WaitingConnectionsPresent_24(11), 1(14), WaitingConnectionsPresent_26(4), WaitingConnectionsPresent_26(5), WaitingConnectionsPresent_26(13)>
<L22>:
  # DEBUG WaitingConnectionsPresent => WaitingConnectionsPresent_25
  # DEBUG BEGIN_STMT
  TxConnectionIndex_49 = TxConnectionIndex_23 + 1;
  # DEBUG TxConnectionIndex => TxConnectionIndex_49

  <bb 16> [local count: 1073741824]:
  # TxConnectionIndex_23 = PHI <0(3), TxConnectionIndex_49(15)>
  # WaitingConnectionsPresent_26 = PHI <0(3), WaitingConnectionsPresent_25(15)>
  # DEBUG WaitingConnectionsPresent => WaitingConnectionsPresent_26
  # DEBUG TxConnectionIndex => TxConnectionIndex_23
  # DEBUG BEGIN_STMT
  if (TxConnectionIndex_23 != 6)
    goto <bb 4>; [85.71%]
  else
    goto <bb 17>; [14.29%]

  <bb 17> [local count: 153437707]:
  # WaitingConnectionsPresent_31 = PHI <WaitingConnectionsPresent_26(16)>
  # DEBUG WaitingConnectionsPresent => WaitingConnectionsPresent_31
  # DEBUG BEGIN_STMT
  if (WaitingConnectionsPresent_31 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 18> [local count: 52168820]:
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 1;

  <bb 19> [local count: 451287372]:
  # DEBUG WaitingConnectionsPresent => NULL
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_TxConnectionInit (Dcm_Dsl_TxConnectionInit, funcdef_no=15, decl_uid=6088, cgraph_uid=16, symbol_order=17)

Modification phase of node Dcm_Dsl_TxConnectionInit/17
Dcm_Dsl_TxConnectionInit ()
{
  uint16_least TxConnectionIndex;
  short unsigned int _1;

  <bb 2> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TxConnectionIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) TxConnectionIndex_2;
  Dcm_Dsl_TxConnectionInitSingleTxConnection (_1);
  # DEBUG BEGIN_STMT
  TxConnectionIndex_6 = TxConnectionIndex_2 + 1;
  # DEBUG TxConnectionIndex => TxConnectionIndex_6

  <bb 4> [local count: 1073741824]:
  # TxConnectionIndex_2 = PHI <0(2), TxConnectionIndex_6(3)>
  # DEBUG TxConnectionIndex => TxConnectionIndex_2
  # DEBUG BEGIN_STMT
  if (TxConnectionIndex_2 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 5>; [14.29%]

  <bb 5> [local count: 153437707]:
  return;

}



;; Function Dcm_Dsl_ProcessRetryInformation (Dcm_Dsl_ProcessRetryInformation, funcdef_no=17, decl_uid=6092, cgraph_uid=18, symbol_order=19)

Modification phase of node Dcm_Dsl_ProcessRetryInformation/19
Dcm_Dsl_ProcessRetryInformation (struct RetryInfoType * RetryInfoPtr, PduLengthType * BufferDataMark, PduLengthType * BufferConfirmedDataMark)
{
  PduLengthType LocalBufferConfirmedDataMark;
  PduLengthType LocalBufferDataMark;
  Std_ReturnType RetryInformationProcessing;
  <unnamed type> _1;
  short unsigned int _2;
  int _3;
  int _4;
  int _5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetryInformationProcessing => 1
  # DEBUG BEGIN_STMT
  LocalBufferDataMark_15 = *BufferDataMark_14(D);
  # DEBUG LocalBufferDataMark => LocalBufferDataMark_15
  # DEBUG BEGIN_STMT
  LocalBufferConfirmedDataMark_17 = *BufferConfirmedDataMark_16(D);
  # DEBUG LocalBufferConfirmedDataMark => LocalBufferConfirmedDataMark_17
  # DEBUG BEGIN_STMT
  if (RetryInfoPtr_18(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _1 = RetryInfoPtr_18(D)->TpDataState;
  switch (_1) <default: <L12> [25.00%], case 0: <L5> [25.00%], case 1: <L1> [25.00%], case 2: <L6> [25.00%]>

  <bb 4> [local count: 187904819]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = RetryInfoPtr_18(D)->TxTpDataCnt;
  _3 = (int) _2;
  _4 = (int) LocalBufferDataMark_15;
  _5 = (int) LocalBufferConfirmedDataMark_17;
  _6 = _4 - _5;
  if (_3 > _6)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 62008590]:
  # DEBUG BEGIN_STMT
  # DEBUG RetryInformationProcessing => 1
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 6);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 125896229]:
  # DEBUG BEGIN_STMT
  LocalBufferDataMark_20 = LocalBufferDataMark_15 - _2;
  # DEBUG LocalBufferDataMark => LocalBufferDataMark_20
  # DEBUG BEGIN_STMT
  # DEBUG LocalBufferConfirmedDataMark => LocalBufferDataMark_20
  # DEBUG BEGIN_STMT
  # DEBUG RetryInformationProcessing => 0
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 187904819]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG LocalBufferConfirmedDataMark => LocalBufferDataMark_15
  # DEBUG BEGIN_STMT
  # DEBUG RetryInformationProcessing => 0
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 187904819]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG RetryInformationProcessing => 0
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 751619279]:
  # RetryInformationProcessing_7 = PHI <0(6), 0(7), 0(8), 1(3), 1(5)>
  # LocalBufferDataMark_9 = PHI <LocalBufferDataMark_20(6), LocalBufferDataMark_15(7), LocalBufferDataMark_15(8), LocalBufferDataMark_15(3), LocalBufferDataMark_15(5)>
  # LocalBufferConfirmedDataMark_10 = PHI <LocalBufferDataMark_20(6), LocalBufferDataMark_15(7), LocalBufferConfirmedDataMark_17(8), LocalBufferConfirmedDataMark_17(3), LocalBufferConfirmedDataMark_17(5)>
<L12>:
  # DEBUG LocalBufferConfirmedDataMark => LocalBufferConfirmedDataMark_10
  # DEBUG LocalBufferDataMark => LocalBufferDataMark_9
  # DEBUG RetryInformationProcessing => RetryInformationProcessing_7
  # DEBUG BEGIN_STMT
  *BufferDataMark_14(D) = LocalBufferDataMark_9;
  # DEBUG BEGIN_STMT
  *BufferConfirmedDataMark_16(D) = LocalBufferConfirmedDataMark_10;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  *BufferConfirmedDataMark_16(D) = LocalBufferDataMark_15;
  # DEBUG BEGIN_STMT
  # DEBUG RetryInformationProcessing => 0

  <bb 11> [local count: 1073741824]:
  # RetryInformationProcessing_8 = PHI <RetryInformationProcessing_7(9), 0(10)>
  # DEBUG RetryInformationProcessing => RetryInformationProcessing_8
  # DEBUG BEGIN_STMT
  return RetryInformationProcessing_8;

}



;; Function Dcm_CopyTxData (Dcm_CopyTxData, funcdef_no=0, decl_uid=7205, cgraph_uid=1, symbol_order=2)

Modification phase of node Dcm_CopyTxData/2
Dcm_CopyTxData (PduIdType DcmTxPduId, struct PduInfoType * PduInfoPtr, struct RetryInfoType * RetryInfoPtr, PduLengthType * TxDataCntPtr)
{
  uint8 * SourcePtr;
  PduLengthType PreviousBufferConfirmedDataMark;
  Std_ReturnType RetryInformationProcessing;
  BufReq_ReturnType DataCopyResult;
  unsigned char Dcm_Initialized.0_1;
  uint8 * _2;
  short unsigned int _3;
  <unnamed type> _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  PduLengthType * _8;
  PduLengthType * _9;
  short unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;
  short unsigned int _13;
  short unsigned int _14;
  int _15;
  short unsigned int _16;
  int _17;
  int _18;
  short unsigned int _19;
  int _20;
  int _21;
  int _22;
  unsigned char _23;
  short unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  Dcm_MsgItemType * _29;
  uint8 * _30;
  short unsigned int _31;
  short unsigned int _32;
  short unsigned int _33;
  long unsigned int _34;
  short unsigned int _35;
  short unsigned int _36;
  short unsigned int _37;
  short unsigned int _38;
  long unsigned int _39;
  short unsigned int _40;
  short unsigned int _41;
  short unsigned int _42;
  short unsigned int _43;
  short unsigned int _44;
  short unsigned int _45;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DataCopyResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.0_1 = Dcm_Initialized;
  if (Dcm_Initialized.0_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 5);
  goto <bb 35>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DcmTxPduId_53(D) > 5)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 6);
  goto <bb 35>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_54(D) == 0B)
    goto <bb 10>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 303660150]:
  if (TxDataCntPtr_55(D) == 0B)
    goto <bb 10>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 8> [local count: 212562105]:
  _2 = PduInfoPtr_54(D)->SduDataPtr;
  if (_2 == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 9> [local count: 63768632]:
  _3 = PduInfoPtr_54(D)->SduLength;
  if (_3 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 187083080]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 7);
  goto <bb 35>; [100.00%]

  <bb 11> [local count: 180677789]:
  # DEBUG BEGIN_STMT
  if (RetryInfoPtr_56(D) != 0B)
    goto <bb 12>; [82.57%]
  else
    goto <bb 16>; [17.43%]

  <bb 12> [local count: 149185651]:
  _4 = RetryInfoPtr_56(D)->TpDataState;
  if (_4 != 2)
    goto <bb 13>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 13> [local count: 98462529]:
  if (_4 != 1)
    goto <bb 14>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 14> [local count: 64985269]:
  if (_4 != 0)
    goto <bb 15>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 15> [local count: 21445139]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 6);
  goto <bb 35>; [100.00%]

  <bb 16> [local count: 159232650]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _5 = (int) DcmTxPduId_53(D);
  _6 = Dcm_TxConnections[_5].Status;
  _7 = _6 + 254;
  if (_7 > 1)
    goto <bb 17>; [74.50%]
  else
    goto <bb 20>; [25.50%]

  <bb 17> [local count: 118628324]:
  # DEBUG BEGIN_STMT
  if (_6 <= 1)
    goto <bb 19>; [25.50%]
  else
    goto <bb 18>; [74.50%]

  <bb 18> [local count: 88378102]:
  if (_6 == 4)
    goto <bb 19>; [34.00%]
  else
    goto <bb 34>; [66.00%]

  <bb 19> [local count: 60298777]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 6);
  goto <bb 34>; [100.00%]

  <bb 20> [local count: 40604326]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PreviousBufferConfirmedDataMark_59 = Dcm_TxConnections[_5].BufferConfirmedDataMark;
  # DEBUG PreviousBufferConfirmedDataMark => PreviousBufferConfirmedDataMark_59
  # DEBUG BEGIN_STMT
  _8 = &Dcm_TxConnections[_5].BufferDataMark;
  _9 = &Dcm_TxConnections[_5].BufferConfirmedDataMark;
  RetryInformationProcessing_61 = Dcm_Dsl_ProcessRetryInformation (RetryInfoPtr_56(D), _8, _9);
  # DEBUG RetryInformationProcessing => RetryInformationProcessing_61
  # DEBUG BEGIN_STMT
  if (RetryInformationProcessing_61 == 0)
    goto <bb 21>; [50.00%]
  else
    goto <bb 33>; [50.00%]

  <bb 21> [local count: 20302163]:
  # DEBUG BEGIN_STMT
  _10 = Dcm_TxConnections[_5].AmountLeftToCopy;
  _11 = Dcm_TxConnections[_5].BufferConfirmedDataMark;
  _12 = PreviousBufferConfirmedDataMark_59 - _11;
  _13 = _10 + _12;
  Dcm_TxConnections[_5].AmountLeftToCopy = _13;
  # DEBUG BEGIN_STMT
  _14 = Dcm_TxConnections[_5].BufferDataMark;
  _15 = (int) _14;
  _16 = Dcm_TxConnections[_5].BufferConfirmedDataMark;
  _17 = (int) _16;
  _18 = _15 - _17;
  _19 = PduInfoPtr_54(D)->SduLength;
  _20 = (int) _19;
  _21 = _18 + _20;
  _22 = (int) _13;
  if (_21 <= _22)
    goto <bb 22>; [67.00%]
  else
    goto <bb 30>; [33.00%]

  <bb 22> [local count: 13602449]:
  # DEBUG BEGIN_STMT
  _23 = Dcm_TxConnections[_5].Status;
  switch (_23) <default: <L57> [33.33%], case 2: <L21> [33.33%], case 3: <L25> [33.33%]>

  <bb 23> [local count: 4533696]:
<L21>:
  # DEBUG BEGIN_STMT
  *TxDataCntPtr_55(D) = 0;
  # DEBUG BEGIN_STMT
  _24 = PduInfoPtr_54(D)->SduLength;
  if (_24 != 0)
    goto <bb 34>; [50.00%]
  else
    goto <bb 31>; [50.00%]

  <bb 24> [local count: 4533696]:
<L25>:
  # DEBUG BEGIN_STMT
  _25 = Dcm_TxConnections[_5].Buffer.FilledLength;
  _26 = (long unsigned int) _14;
  _27 = _25 - _26;
  _28 = (long unsigned int) _19;
  if (_27 < _28)
    goto <bb 27>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 25> [local count: 2266848]:
  # DEBUG BEGIN_STMT
  # DEBUG SourceIndex => _14
  # DEBUG BEGIN_STMT
  _29 = Dcm_TxConnections[_5].Buffer.BufferPtr;
  SourcePtr_64 = _29 + _26;
  # DEBUG SourcePtr => SourcePtr_64
  # DEBUG BEGIN_STMT
  if (_19 != 0)
    goto <bb 26>; [33.00%]
  else
    goto <bb 27>; [67.00%]

  <bb 26> [local count: 748060]:
  # DEBUG BEGIN_STMT
  _30 = PduInfoPtr_54(D)->SduDataPtr;
  TS_MemCpy32 (_30, SourcePtr_64, _28);
  # DEBUG BEGIN_STMT
  _31 = Dcm_TxConnections[_5].BufferDataMark;
  _32 = PduInfoPtr_54(D)->SduLength;
  _33 = _31 + _32;
  Dcm_TxConnections[_5].BufferDataMark = _33;

  <bb 27> [local count: 4533696]:
  # DataCopyResult_46 = PHI <2(24), 0(26), 0(25)>
  # DEBUG DataCopyResult => DataCopyResult_46
  # DEBUG BEGIN_STMT
  _34 = Dcm_TxConnections[_5].Buffer.FilledLength;
  _35 = (short unsigned int) _34;
  _36 = Dcm_TxConnections[_5].BufferDataMark;
  _37 = _35 - _36;
  *TxDataCntPtr_55(D) = _37;
  # DEBUG BEGIN_STMT
  _38 = Dcm_TxConnections[_5].BufferConfirmedDataMark;
  _39 = (long unsigned int) _38;
  if (_34 == _39)
    goto <bb 28>; [34.00%]
  else
    goto <bb 34>; [66.00%]

  <bb 28> [local count: 1541457]:
  # DEBUG BEGIN_STMT
  _40 = Dcm_TxConnections[_5].AmountLeftToCopy;
  if (_40 == 0)
    goto <bb 34>; [67.00%]
  else
    goto <bb 29>; [33.00%]

  <bb 29> [local count: 508681]:
  # DEBUG BEGIN_STMT
  _41 = DcmTxPduId_53(D) + 6;
  _42 = Dcm_TxConnections[_5].Requester;
  _43 = Dcm_TxConnections[_5].Buffer.BufferId;
  Dcm_Dsl_BufferGive (_41, _42, _43);
  # DEBUG BEGIN_STMT
  _44 = Dcm_TxConnections[_5].Requester;
  # DEBUG Requester => _44
  # DEBUG TxConnectionId => _41
  # DEBUG INLINE_ENTRY Dcm_Dsl_ProvideNextTxBuffer
  # DEBUG BEGIN_STMT
  Dcm_Dsp_ProtocolProvideNextTxBuffer (_44, _41);
  # DEBUG Requester => NULL
  # DEBUG TxConnectionId => NULL
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_5].Status = 2;
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_5].TransmissionTimeout = 0;
  # DEBUG BEGIN_STMT
  Dcm_ProcessTxConnectionsOnMainFunction = 1;
  # DEBUG BEGIN_STMT
  _45 = PduInfoPtr_54(D)->SduLength;
  if (_45 != 0)
    goto <bb 32>; [50.00%]
  else
    goto <bb 34>; [50.00%]

  <bb 30> [local count: 6699714]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 4, 6);
  # DEBUG BEGIN_STMT
  # DEBUG DataCopyResult => 1
  # DEBUG BEGIN_STMT
  goto <bb 33>; [100.00%]

  <bb 31> [local count: 2266848]:
  goto <bb 34>; [100.00%]

  <bb 32> [local count: 254340]:
  goto <bb 34>; [100.00%]

  <bb 33> [local count: 31535573]:
<L57>:
  # DEBUG DataCopyResult => NULL
  # DEBUG BEGIN_STMT
  Dcm_TxConnections[_5].Status = 6;

  <bb 34> [local count: 159231290]:
  # DataCopyResult_47 = PHI <1(19), DataCopyResult_46(27), 1(33), 0(31), 2(32), 0(29), 2(23), 0(28), 1(18)>
  # DEBUG DataCopyResult => DataCopyResult_47
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 35> [local count: 1073740464]:
  # DataCopyResult_48 = PHI <1(3), 1(5), 1(10), 1(15), DataCopyResult_47(34)>
  # DEBUG DataCopyResult => DataCopyResult_48
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DataCopyResult_48;

}


