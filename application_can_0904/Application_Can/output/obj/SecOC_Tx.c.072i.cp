
IPA constant propagation start:
Determining dynamic type for call: SecOC_Tx_ShiftLeft (authPtr_62, authBitsLen_61, _34);
  Starting walk at: SecOC_Tx_ShiftLeft (authPtr_62, authBitsLen_61, _34);
  instance pointer: authPtr_62  Outer instance pointer: authPtr_62 offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: SecOC_Tx_ShiftLeft (_19, _21, _23);
  Starting walk at: SecOC_Tx_ShiftLeft (_19, _21, _23);
  instance pointer: _19  Outer instance pointer: _19 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/27:
  Jump functions of caller  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/26:
  Jump functions of caller  SecOC_Tx_Get_Freshness/25:
  Jump functions of caller  Csm_MacGenerate/24:
  Jump functions of caller  TS_MemCpy32/22:
  Jump functions of caller  TS_MemBZero32/21:
  Jump functions of caller  SecOC_Tx_SPDU_Confirmation/20:
  Jump functions of caller  PduR_SecOCTransmit/19:
  Jump functions of caller  SecOC_Tx_ShiftLeft/14:
  Jump functions of caller  SecOC_Tx_CopyMacToSecuredPdu/13:
    callsite  SecOC_Tx_CopyMacToSecuredPdu/13 -> SecOC_Tx_ShiftLeft/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         VR  [0, 65535]
       param 2: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [1, 7]
  Jump functions of caller  SecOC_Tx_CopyFreshnessToSecuredPdu/12:
    callsite  SecOC_Tx_CopyFreshnessToSecuredPdu/12 -> SecOC_Tx_ShiftLeft/14 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 7]
  Jump functions of caller  SecOC_Tx_CheckForCsmRetry/11:
    callsite  SecOC_Tx_CheckForCsmRetry/11 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Tx_ResetSm/10:
  Jump functions of caller  SecOC_Tx_StateWaitForConfirmation/9:
  Jump functions of caller  SecOC_Tx_StateBroadcastPdu/8:
    callsite  SecOC_Tx_StateBroadcastPdu/8 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Tx_StateBroadcastPdu/8 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Tx_StateConstructPdu/7:
    callsite  SecOC_Tx_StateConstructPdu/7 -> SecOC_Tx_CopyMacToSecuredPdu/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Tx_StateConstructPdu/7 -> SecOC_Tx_CopyFreshnessToSecuredPdu/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Tx_StateConstructPdu/7 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Tx_StateAuthentication/6:
    callsite  SecOC_Tx_StateAuthentication/6 -> SecOC_Tx_CheckForCsmRetry/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Tx_StateAuthentication/6 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Tx_StateGetFreshness/5:
    callsite  SecOC_Tx_StateGetFreshness/5 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  SecOC_Tx_StateGetFreshness/5 -> SecOC_Tx_ResetSm/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Tx_StateIdle/4:
  Jump functions of caller  SecOC_Tx_ProcessPduStates/3:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (pduIdx_8(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  SecOC_Tx_DeInit/2:
  Jump functions of caller  SecOC_Tx_Init/1:

 Propagating constants:

Not considering SecOC_Tx_StateWaitForConfirmation for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_StateBroadcastPdu for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_StateConstructPdu for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_StateAuthentication for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_StateGetFreshness for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_StateIdle for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_ProcessPduStates for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_DeInit for cloning; -fipa-cp-clone disabled.
Not considering SecOC_Tx_Init for cloning; -fipa-cp-clone disabled.

overall_size: 470, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SecOC_Tx_ShiftLeft/14:
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
         Bits: value = 0x0, mask = 0x7
         uint8 [0, 7]
        AGGS VARIABLE
  Node: SecOC_Tx_CopyMacToSecuredPdu/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Tx_CopyFreshnessToSecuredPdu/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Tx_CheckForCsmRetry/11:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Tx_ResetSm/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: SecOC_Tx_StateWaitForConfirmation/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_StateBroadcastPdu/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_StateConstructPdu/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_StateAuthentication/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_StateGetFreshness/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_StateIdle/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_ProcessPduStates/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: SecOC_Tx_DeInit/2:
  Node: SecOC_Tx_Init/1:

IPA decision stage:

Propagated bits info for function SecOC_Tx_ShiftLeft/14:
 param 2: value = 0x0, mask = 0x7

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/27 (SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1) @06c1e2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateIdle/4 (273804165 (estimated locally),0.25 per call) 
  Calls: 
SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/26 (SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1) @06c1e0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateIdle/4 (273804165 (estimated locally),0.25 per call) 
  Calls: 
SecOC_Tx_Get_Freshness/25 (SecOC_Tx_Get_Freshness) @06be0d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateGetFreshness/5 (141308719 (estimated locally),0.13 per call) 
  Calls: 
Csm_MacGenerate/24 (Csm_MacGenerate) @06be0380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateAuthentication/6 (428208239 (estimated locally),0.40 per call) 
  Calls: 
SecOC_TxConfig/23 (SecOC_TxConfig) @06c135e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_CheckForCsmRetry/11 (read)SecOC_Tx_StateGetFreshness/5 (read)SecOC_Tx_StateGetFreshness/5 (read)
  Availability: not_available
  Varpool flags: read-only
TS_MemCpy32/22 (TS_MemCpy32) @06be0e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateIdle/4 (273804165 (estimated locally),0.25 per call) SecOC_Tx_StateIdle/4 (273804165 (estimated locally),0.25 per call) SecOC_Tx_CopyMacToSecuredPdu/13 (177167401 (estimated locally),0.17 per call) SecOC_Tx_CopyMacToSecuredPdu/13 (536870913 (estimated locally),0.50 per call) SecOC_Tx_CopyFreshnessToSecuredPdu/12 (536870913 (estimated locally),0.50 per call) 
  Calls: 
TS_MemBZero32/21 (TS_MemBZero32) @06be08c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_ResetSm/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_Tx_SPDU_Confirmation/20 (SecOC_Tx_SPDU_Confirmation) @06be0700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateBroadcastPdu/8 (156686850 (estimated locally),0.15 per call) 
  Calls: 
PduR_SecOCTransmit/19 (PduR_SecOCTransmit) @06be0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: SecOC_Tx_StateBroadcastPdu/8 (708669605 (estimated locally),0.66 per call) 
  Calls: 
SecOC_PB_IntBuffer/18 (SecOC_PB_IntBuffer) @06bab5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Tx_Init/1 (addr)SecOC_Tx_Init/1 (addr)
  Availability: not_available
  Varpool flags:
SecOC_PB_PduBuffer/17 (SecOC_PB_PduBuffer) @06bab558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Tx_Init/1 (addr)SecOC_Tx_Init/1 (addr)
  Availability: not_available
  Varpool flags:
SecOC_ConfigPtr/16 (SecOC_ConfigPtr) @06bab510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Tx_StateIdle/4 (read)SecOC_Tx_CopyFreshnessToSecuredPdu/12 (read)SecOC_Tx_StateBroadcastPdu/8 (read)SecOC_Tx_StateBroadcastPdu/8 (read)SecOC_Tx_ResetSm/10 (read)SecOC_Tx_CopyMacToSecuredPdu/13 (read)SecOC_Tx_StateWaitForConfirmation/9 (read)SecOC_Tx_StateGetFreshness/5 (read)SecOC_Tx_CopyMacToSecuredPdu/13 (read)SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_StateConstructPdu/7 (read)SecOC_Tx_Init/1 (read)
  Availability: not_available
  Varpool flags:
SecOC_TxData/15 (SecOC_TxData) @06bab4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: SecOC_Tx_StateConstructPdu/7 (write)SecOC_Tx_StateConstructPdu/7 (read)SecOC_Tx_StateConstructPdu/7 (write)SecOC_Tx_StateConstructPdu/7 (read)SecOC_Tx_StateConstructPdu/7 (write)SecOC_Tx_StateGetFreshness/5 (read)SecOC_Tx_StateGetFreshness/5 (write)SecOC_Tx_StateGetFreshness/5 (read)SecOC_Tx_StateGetFreshness/5 (read)SecOC_Tx_StateGetFreshness/5 (read)SecOC_Tx_StateGetFreshness/5 (write)SecOC_Tx_StateGetFreshness/5 (write)SecOC_Tx_StateGetFreshness/5 (write)SecOC_Tx_StateIdle/4 (write)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (write)SecOC_Tx_StateIdle/4 (write)SecOC_Tx_StateIdle/4 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_StateAuthentication/6 (write)SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_StateAuthentication/6 (write)SecOC_Tx_StateAuthentication/6 (write)SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_StateAuthentication/6 (read)SecOC_Tx_StateAuthentication/6 (addr)SecOC_Tx_StateWaitForConfirmation/9 (write)SecOC_Tx_StateWaitForConfirmation/9 (write)SecOC_Tx_StateWaitForConfirmation/9 (write)SecOC_Tx_StateWaitForConfirmation/9 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_StateWaitForConfirmation/9 (read)SecOC_Tx_CopyFreshnessToSecuredPdu/12 (read)SecOC_Tx_CopyFreshnessToSecuredPdu/12 (read)SecOC_Tx_CopyFreshnessToSecuredPdu/12 (read)SecOC_Tx_CopyFreshnessToSecuredPdu/12 (read)SecOC_Tx_StateWaitForConfirmation/9 (read)SecOC_Tx_StateBroadcastPdu/8 (read)SecOC_Tx_StateBroadcastPdu/8 (write)SecOC_Tx_StateBroadcastPdu/8 (write)SecOC_Tx_StateBroadcastPdu/8 (addr)SecOC_Tx_CheckForCsmRetry/11 (read)SecOC_Tx_CheckForCsmRetry/11 (write)SecOC_Tx_CheckForCsmRetry/11 (write)SecOC_Tx_CheckForCsmRetry/11 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_StateIdle/4 (write)SecOC_Tx_CopyMacToSecuredPdu/13 (read)SecOC_Tx_CopyMacToSecuredPdu/13 (read)SecOC_Tx_CopyMacToSecuredPdu/13 (read)SecOC_Tx_CopyMacToSecuredPdu/13 (read)SecOC_Tx_Init/1 (write)SecOC_Tx_ResetSm/10 (write)SecOC_Tx_ResetSm/10 (write)SecOC_Tx_ResetSm/10 (read)SecOC_Tx_ResetSm/10 (write)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (write)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_StateIdle/4 (read)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_Init/1 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_DeInit/2 (write)SecOC_Tx_ProcessPduStates/3 (write)SecOC_Tx_ProcessPduStates/3 (read)SecOC_Tx_ProcessPduStates/3 (read)
  Availability: not_available
  Varpool flags:
SecOC_Tx_ShiftLeft/14 (SecOC_Tx_ShiftLeft) @06bbdd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: SecOC_Tx_CopyMacToSecuredPdu/13 (177167401 (estimated locally),0.17 per call) SecOC_Tx_CopyFreshnessToSecuredPdu/12 (177167401 (estimated locally),0.17 per call) 
  Calls: 
SecOC_Tx_CopyMacToSecuredPdu/13 (SecOC_Tx_CopyMacToSecuredPdu) @06bbdb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_ConfigPtr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Tx_StateConstructPdu/7 (708669605 (estimated locally),0.66 per call) 
  Calls: TS_MemCpy32/22 (177167401 (estimated locally),0.17 per call) SecOC_Tx_ShiftLeft/14 (177167401 (estimated locally),0.17 per call) TS_MemCpy32/22 (536870913 (estimated locally),0.50 per call) 
SecOC_Tx_CopyFreshnessToSecuredPdu/12 (SecOC_Tx_CopyFreshnessToSecuredPdu) @06bbd620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Tx_StateConstructPdu/7 (708669605 (estimated locally),0.66 per call) 
  Calls: TS_MemCpy32/22 (536870913 (estimated locally),0.50 per call) SecOC_Tx_ShiftLeft/14 (177167401 (estimated locally),0.17 per call) 
SecOC_Tx_CheckForCsmRetry/11 (SecOC_Tx_CheckForCsmRetry) @06bbd1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_TxConfig/23 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Tx_StateAuthentication/6 (642312360 (estimated locally),0.60 per call) 
  Calls: SecOC_Tx_ResetSm/10 (354334802 (estimated locally),0.33 per call) 
SecOC_Tx_ResetSm/10 (SecOC_Tx_ResetSm) @06bbd000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (read)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: SecOC_Tx_StateGetFreshness/5 (117992780 (estimated locally),0.11 per call) SecOC_Tx_StateGetFreshness/5 (217325345 (estimated locally),0.20 per call) SecOC_Tx_StateAuthentication/6 (217325345 (estimated locally),0.20 per call) SecOC_Tx_StateConstructPdu/7 (365072220 (estimated locally),0.34 per call) SecOC_Tx_CheckForCsmRetry/11 (354334802 (estimated locally),0.33 per call) SecOC_Tx_StateBroadcastPdu/8 (233860969 (estimated locally),0.22 per call) SecOC_Tx_StateBroadcastPdu/8 (365072220 (estimated locally),0.34 per call) 
  Calls: TS_MemBZero32/21 (1073741824 (estimated locally),1.00 per call) 
SecOC_Tx_StateWaitForConfirmation/9 (SecOC_Tx_StateWaitForConfirmation) @06bb0d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)
  Referring: SecOC_Tx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_Tx_StateBroadcastPdu/8 (SecOC_Tx_StateBroadcastPdu) @06bb0a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (addr)SecOC_ConfigPtr/16 (read)
  Referring: SecOC_Tx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_ResetSm/10 (233860969 (estimated locally),0.22 per call) SecOC_Tx_SPDU_Confirmation/20 (156686850 (estimated locally),0.15 per call) PduR_SecOCTransmit/19 (708669605 (estimated locally),0.66 per call) SecOC_Tx_ResetSm/10 (365072220 (estimated locally),0.34 per call) 
SecOC_Tx_StateConstructPdu/7 (SecOC_Tx_StateConstructPdu) @06bb0620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (read)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (write)
  Referring: SecOC_Tx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_CopyMacToSecuredPdu/13 (708669605 (estimated locally),0.66 per call) SecOC_Tx_CopyFreshnessToSecuredPdu/12 (708669605 (estimated locally),0.66 per call) SecOC_Tx_ResetSm/10 (365072220 (estimated locally),0.34 per call) 
SecOC_Tx_StateAuthentication/6 (SecOC_Tx_StateAuthentication) @06bb00e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (read)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxConfig/23 (read)SecOC_TxConfig/23 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (addr)
  Referring: SecOC_Tx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_CheckForCsmRetry/11 (642312360 (estimated locally),0.60 per call) Csm_MacGenerate/24 (428208239 (estimated locally),0.40 per call) SecOC_Tx_ResetSm/10 (217325345 (estimated locally),0.20 per call) 
SecOC_Tx_StateGetFreshness/5 (SecOC_Tx_StateGetFreshness) @06b68d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxConfig/23 (read)SecOC_TxConfig/23 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)
  Referring: SecOC_Tx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Tx_ResetSm/10 (117992780 (estimated locally),0.11 per call) SecOC_Tx_Get_Freshness/25 (141308719 (estimated locally),0.13 per call) SecOC_Tx_ResetSm/10 (217325345 (estimated locally),0.20 per call) 
SecOC_Tx_StateIdle/4 (SecOC_Tx_StateIdle) @06b688c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_ConfigPtr/16 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (read)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)
  Referring: SecOC_Tx_StateMachine/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/22 (273804165 (estimated locally),0.25 per call) SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/27 (273804165 (estimated locally),0.25 per call) TS_MemCpy32/22 (273804165 (estimated locally),0.25 per call) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1/26 (273804165 (estimated locally),0.25 per call) 
SecOC_Tx_ProcessPduStates/3 (SecOC_Tx_ProcessPduStates) @06b68620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_TxData/15 (write)SecOC_TxData/15 (read)SecOC_Tx_StateMachine/0 (read)SecOC_TxData/15 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),9.09 per call) 
SecOC_Tx_DeInit/2 (SecOC_Tx_DeInit) @06b68460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_Tx_Init/1 (SecOC_Tx_Init) @06b682a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_ConfigPtr/16 (read)SecOC_PB_PduBuffer/17 (addr)SecOC_TxData/15 (write)SecOC_PB_PduBuffer/17 (addr)SecOC_TxData/15 (write)SecOC_PB_IntBuffer/18 (addr)SecOC_TxData/15 (write)SecOC_PB_IntBuffer/18 (addr)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)SecOC_TxData/15 (write)
  Referring: 
  Availability: available
  Function flags: count:536870913 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SecOC_Tx_StateMachine/0 (SecOC_Tx_StateMachine) @06aeee10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: SecOC_Tx_StateIdle/4 (addr)SecOC_Tx_StateGetFreshness/5 (addr)SecOC_Tx_StateAuthentication/6 (addr)SecOC_Tx_StateConstructPdu/7 (addr)SecOC_Tx_StateBroadcastPdu/8 (addr)SecOC_Tx_StateWaitForConfirmation/9 (addr)
  Referring: SecOC_Tx_ProcessPduStates/3 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function SecOC_Tx_StateWaitForConfirmation (SecOC_Tx_StateWaitForConfirmation, funcdef_no=8, decl_uid=6069, cgraph_uid=9, symbol_order=9)

Modification phase of node SecOC_Tx_StateWaitForConfirmation/9
SecOC_Tx_StateWaitForConfirmation (uint16 instId)
{
  int _1;
  unsigned char _2;
  unsigned char _3;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.10_4;
  long unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  sizetype _8;
  const struct SecOC_TxPduConfigType * _9;
  unsigned char _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_13(D);
  _2 = SecOC_TxData[_1].PduREvent;
  if (_2 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669604]:
  if (_2 == 5)
    goto <bb 4>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 4> [local count: 606019886]:
  # DEBUG BEGIN_STMT
  _3 = SecOC_TxData[_1].TransmitEvent;
  if (_3 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 206046761]:
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 1;
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 399973125]:
  # DEBUG BEGIN_STMT
  if (_2 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 135990862]:
  SecOC_ConfigPtr.10_4 = SecOC_ConfigPtr;
  _5 = SecOC_ConfigPtr.10_4->TxPduConfigPtr;
  _6 = (unsigned int) instId_13(D);
  _7 = _6 * 36;
  _8 = _5 + _7;
  _9 = SecOC_ConfigPtr.10_4 + _8;
  _10 = _9->UseReAuthenticate;
  if (_10 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 46236893]:
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].TransmitEvent = 2;

  <bb 9> [local count: 606019886]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].State = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].PduREvent = 0;

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function SecOC_Tx_ShiftLeft (SecOC_Tx_ShiftLeft, funcdef_no=13, decl_uid=6081, cgraph_uid=14, symbol_order=14)

Modification phase of node SecOC_Tx_ShiftLeft/14
Adjusting mask for param 2 to 0x7
Setting value range of param 2 [0, 7]
SecOC_Tx_ShiftLeft (uint8 * array, uint32 bitLength, uint8 shift)
{
  const uint32 byteLength_shifted;
  uint16 arrayIdx;
  long unsigned int _1;
  long unsigned int _2;
  uint8 * _3;
  unsigned char _4;
  int _5;
  int _6;
  int _7;
  unsigned char _8;
  sizetype _9;
  uint8 * _10;
  unsigned char _11;
  int _12;
  unsigned int _13;
  int _14;
  unsigned char _15;
  unsigned char _16;
  long unsigned int _17;
  long unsigned int _18;
  uint8 * _19;
  unsigned char _20;
  int _21;
  int _22;
  int _23;
  unsigned char _24;
  uint8 * _25;
  unsigned char _26;
  int _27;
  int _28;
  int _29;
  signed char _30;
  sizetype _31;
  uint8 * _32;
  unsigned char _33;
  int _34;
  unsigned int _35;
  int _36;
  signed char _37;
  signed char _38;
  unsigned char _39;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) shift_43(D);
  _2 = bitLength_44(D) - _1;
  byteLength_shifted_45 = _2 >> 3;
  # DEBUG byteLength_shifted => byteLength_shifted_45
  # DEBUG BEGIN_STMT
  # DEBUG arrayIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _3 = array_47(D) + _17;
  _4 = *_3;
  _5 = (int) _4;
  _6 = (int) shift_43(D);
  _7 = _5 << _6;
  _8 = (unsigned char) _7;
  _9 = _17 + 1;
  _10 = array_47(D) + _9;
  _11 = *_10;
  _12 = (int) _11;
  _13 = 8 - _1;
  _14 = _12 >> _13;
  _15 = (unsigned char) _14;
  _16 = _8 | _15;
  *_3 = _16;
  # DEBUG BEGIN_STMT
  arrayIdx_51 = arrayIdx_40 + 1;
  # DEBUG arrayIdx => arrayIdx_51

  <bb 4> [local count: 1073741824]:
  # arrayIdx_40 = PHI <0(2), arrayIdx_51(3)>
  # DEBUG arrayIdx => arrayIdx_40
  # DEBUG BEGIN_STMT
  _17 = (long unsigned int) arrayIdx_40;
  if (_17 < byteLength_shifted_45)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _18 = bitLength_44(D) & 7;
  if (_1 <= _18)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 59055800]:
  if (_18 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  _19 = array_47(D) + byteLength_shifted_45;
  _20 = *_19;
  _21 = (int) _20;
  _22 = (int) shift_43(D);
  _23 = _21 << _22;
  _24 = (unsigned char) _23;
  *_19 = _24;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 29527900]:
  # DEBUG BEGIN_STMT
  _25 = array_47(D) + byteLength_shifted_45;
  _26 = *_25;
  _27 = (int) _26;
  _28 = (int) shift_43(D);
  _29 = _27 << _28;
  _30 = (signed char) _29;
  _31 = byteLength_shifted_45 + 1;
  _32 = array_47(D) + _31;
  _33 = *_32;
  _34 = (int) _33;
  _35 = 8 - _1;
  _36 = _34 >> _35;
  _37 = (signed char) _36;
  _38 = _30 | _37;
  _39 = (unsigned char) _38;
  *_25 = _39;

  <bb 9> [local count: 118111601]:
  return;

}



;; Function SecOC_Tx_ResetSm (SecOC_Tx_ResetSm, funcdef_no=9, decl_uid=6071, cgraph_uid=10, symbol_order=10)

Modification phase of node SecOC_Tx_ResetSm/10
SecOC_Tx_ResetSm (uint16 instId)
{
  int _1;
  uint8 * _2;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.18_3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct SecOC_TxPduConfigType * _8;
  short unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_11(D);
  SecOC_TxData[_1].State = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].PduREvent = 0;
  # DEBUG BEGIN_STMT
  _2 = SecOC_TxData[_1].SecuredPdu.SduDataPtr;
  SecOC_ConfigPtr.18_3 = SecOC_ConfigPtr;
  _4 = SecOC_ConfigPtr.18_3->TxPduConfigPtr;
  _5 = (unsigned int) instId_11(D);
  _6 = _5 * 36;
  _7 = _4 + _6;
  _8 = SecOC_ConfigPtr.18_3 + _7;
  _9 = _8->BuffersConfig.SecuredPduBufferLength;
  _10 = (long unsigned int) _9;
  TS_MemBZero32 (_2, _10);
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 0;
  return;

}



;; Function SecOC_Tx_StateBroadcastPdu (SecOC_Tx_StateBroadcastPdu, funcdef_no=7, decl_uid=6067, cgraph_uid=8, symbol_order=8)

Modification phase of node SecOC_Tx_StateBroadcastPdu/8
SecOC_Tx_StateBroadcastPdu (uint16 instId)
{
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.12_3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct SecOC_TxPduConfigType * _8;
  short unsigned int _9;
  struct PduInfoType * _10;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.14_11;
  long unsigned int _12;
  sizetype _13;
  const struct SecOC_TxPduConfigType * _14;
  unsigned char _15;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_18(D);
  _2 = SecOC_TxData[_1].PduREvent;
  if (_2 == 5)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ResetSm (instId_18(D));
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].State = 5;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].CopiedDataFromSecLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.12_3 = SecOC_ConfigPtr;
  _4 = SecOC_ConfigPtr.12_3->TxPduConfigPtr;
  _5 = (unsigned int) instId_18(D);
  _6 = _5 * 36;
  _7 = _4 + _6;
  _8 = SecOC_ConfigPtr.12_3 + _7;
  _9 = _8->SecuredLayerPduIdAtPduR;
  _10 = &SecOC_TxData[_1].SecuredPdu;
  retVal_23 = PduR_SecOCTransmit (_9, _10);
  # DEBUG retVal => retVal_23
  # DEBUG BEGIN_STMT
  if (retVal_23 == 0)
    goto <bb 5>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 5> [local count: 474808635]:
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.14_11 = SecOC_ConfigPtr;
  _12 = SecOC_ConfigPtr.14_11->TxPduConfigPtr;
  _13 = _6 + _12;
  _14 = SecOC_ConfigPtr.14_11 + _13;
  _15 = _14->FreshnessValueLength;
  if (_15 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 6> [local count: 156686850]:
  # DEBUG BEGIN_STMT
  _16 = _14->FreshnessValueId;
  SecOC_Tx_SPDU_Confirmation (instId_18(D), _16);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ResetSm (instId_18(D));

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function SecOC_Tx_StateConstructPdu (SecOC_Tx_StateConstructPdu, funcdef_no=6, decl_uid=6065, cgraph_uid=7, symbol_order=7)

Modification phase of node SecOC_Tx_StateConstructPdu/7
SecOC_Tx_StateConstructPdu (uint16 instId)
{
  int _1;
  unsigned char _2;
  short unsigned int _3;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.20_4;
  long unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  sizetype _8;
  const struct SecOC_TxPduConfigType * _9;
  short unsigned int _10;
  long unsigned int _11;
  unsigned char _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  short unsigned int _16;
  long unsigned int _17;
  short unsigned int _18;
  short unsigned int _19;
  short unsigned int iftmp.24_20;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_22(D);
  _2 = SecOC_TxData[_1].PduREvent;
  if (_2 == 5)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ResetSm (instId_22(D));
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 1;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].State = 4;
  # DEBUG BEGIN_STMT
  SecOC_Tx_CopyFreshnessToSecuredPdu (instId_22(D));
  # DEBUG BEGIN_STMT
  SecOC_Tx_CopyMacToSecuredPdu (instId_22(D));
  # DEBUG BEGIN_STMT
  _3 = SecOC_TxData[_1].DataLength;
  SecOC_ConfigPtr.20_4 = SecOC_ConfigPtr;
  _5 = SecOC_ConfigPtr.20_4->TxPduConfigPtr;
  _6 = (unsigned int) instId_22(D);
  _7 = _6 * 36;
  _8 = _5 + _7;
  _9 = SecOC_ConfigPtr.20_4 + _8;
  _10 = _9->AuthInfoTxLength;
  _11 = (long unsigned int) _10;
  _12 = _9->FreshnessValueTxLength;
  _13 = (long unsigned int) _12;
  _14 = _11 + _13;
  _15 = _14 >> 3;
  _16 = (short unsigned int) _15;
  _17 = _14 & 7;
  if (_17 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 354334802]:

  <bb 6> [local count: 708669605]:
  # iftmp.24_20 = PHI <1(4), 0(5)>
  _18 = _16 + iftmp.24_20;
  _19 = _3 + _18;
  SecOC_TxData[_1].SecuredPdu.SduLength = _19;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function SecOC_Tx_StateAuthentication (SecOC_Tx_StateAuthentication, funcdef_no=5, decl_uid=6063, cgraph_uid=6, symbol_order=6)

Modification phase of node SecOC_Tx_StateAuthentication/6
SecOC_Tx_StateAuthentication (uint16 instId)
{
  uint32 dataLength;
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  short unsigned int _3;
  long unsigned int _4;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.50_5;
  long unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  sizetype _9;
  const struct SecOC_TxPduConfigType * _10;
  unsigned char _11;
  unsigned char _12;
  long unsigned int _13;
  unsigned char _14;
  long unsigned int _15;
  long unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  long unsigned int _19;
  short unsigned int _20;
  long unsigned int _21;
  unsigned char _22;
  long unsigned int _23;
  uint8 * _24;
  uint8 * _25;
  uint32 * _26;
  long unsigned int iftmp.52_27;
  long unsigned int iftmp.57_28;
  long unsigned int _32;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_30(D);
  _2 = SecOC_TxData[_1].PduREvent;
  if (_2 == 5)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ResetSm (instId_30(D));
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG dataLength => 0
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 1;
  # DEBUG BEGIN_STMT
  _3 = SecOC_TxData[_1].DataLength;
  _4 = (long unsigned int) _3;
  SecOC_ConfigPtr.50_5 = SecOC_ConfigPtr;
  _6 = SecOC_ConfigPtr.50_5->TxPduConfigPtr;
  _7 = (unsigned int) instId_30(D);
  _8 = _7 * 36;
  _9 = _6 + _8;
  _10 = SecOC_ConfigPtr.50_5 + _9;
  _11 = _10->FreshnessValueLength;
  _12 = _11 >> 3;
  _13 = (long unsigned int) _12;
  _14 = _11 & 7;
  if (_14 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 428208239]:

  <bb 6> [local count: 856416478]:
  # iftmp.52_27 = PHI <1(4), 0(5)>
  _15 = _13 + iftmp.52_27;
  _16 = _4 + _15;
  dataLength_35 = _16 + 2;
  # DEBUG dataLength => dataLength_35
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].State = 3;
  # DEBUG BEGIN_STMT
  _17 = _10->AuthInfoTxLength;
  _18 = _17 >> 3;
  _19 = (long unsigned int) _18;
  _20 = _17 & 7;
  if (_20 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 428208239]:

  <bb 8> [local count: 856416478]:
  # iftmp.57_28 = PHI <1(6), 0(7)>
  _21 = _19 + iftmp.57_28;
  SecOC_TxData[_1].AuthenticatorLength = _21;
  # DEBUG BEGIN_STMT
  _22 = SecOC_TxConfig[_1].CsmFuncType;
  if (_22 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 428208239]:
<L8>:
  # DEBUG BEGIN_STMT
  _23 = SecOC_TxConfig[_1].CsmJobId;
  _32 = _23 & 65535;
  _24 = SecOC_TxData[_1].DataToAuthenticator;
  _25 = SecOC_TxData[_1].Authenticator;
  _26 = &SecOC_TxData[_1].AuthenticatorLength;
  retVal_39 = Csm_MacGenerate (_32, 7, _24, dataLength_35, _25, _26);
  # DEBUG retVal => retVal_39
  # DEBUG BEGIN_STMT
  # DEBUG retVal => retVal_39
  # DEBUG BEGIN_STMT
  if (retVal_39 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 642312360]:
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  SecOC_Tx_CheckForCsmRetry (instId_30(D));

  <bb 11> [local count: 1073741824]:
  return;

}



;; Function SecOC_Tx_StateGetFreshness (SecOC_Tx_StateGetFreshness, funcdef_no=4, decl_uid=6061, cgraph_uid=5, symbol_order=5)

Modification phase of node SecOC_Tx_StateGetFreshness/5
SecOC_Tx_StateGetFreshness (uint16 instId)
{
  uint8 * freshnessValuePtr;
  uint32 freshnessValueLength;
  Std_ReturnType retVal;
  int _1;
  unsigned char _2;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.60_3;
  long unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  sizetype _7;
  const struct SecOC_TxPduConfigType * _8;
  unsigned char _9;
  long unsigned int _10;
  uint8 * _11;
  short unsigned int _12;
  unsigned int _13;
  unsigned int _14;
  unsigned char _15;
  short unsigned int _16;
  short unsigned int _17;
  short unsigned int _18;
  short unsigned int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_21(D);
  _2 = SecOC_TxData[_1].PduREvent;
  if (_2 == 5)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ResetSm (instId_21(D));
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 856416480]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 1;
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.60_3 = SecOC_ConfigPtr;
  _4 = SecOC_ConfigPtr.60_3->TxPduConfigPtr;
  _5 = (unsigned int) instId_21(D);
  _6 = _5 * 36;
  _7 = _4 + _6;
  _8 = SecOC_ConfigPtr.60_3 + _7;
  _9 = _8->FreshnessValueLength;
  if (_9 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 5> [local count: 428208240]:
  # DEBUG BEGIN_STMT
  _10 = (long unsigned int) _9;
  freshnessValueLength = _10;
  # DEBUG BEGIN_STMT
  # DEBUG freshnessValuePtr => 0B
  # DEBUG BEGIN_STMT
  _11 = SecOC_TxData[_1].DataToAuthenticator;
  _12 = SecOC_TxData[_1].DataLength;
  _13 = (unsigned int) _12;
  _14 = _13 + 2;
  freshnessValuePtr_26 = _11 + _14;
  # DEBUG freshnessValuePtr => freshnessValuePtr_26
  # DEBUG BEGIN_STMT
  _15 = SecOC_TxConfig[_1].GetTxFreshnessFuncType;
  if (_15 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 6> [local count: 286899520]:
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  freshnessValueLength ={v} {CLOBBER};
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 141308719]:
<L3>:
  # DEBUG BEGIN_STMT
  _16 = _8->FreshnessValueId;
  retVal_28 = SecOC_Tx_Get_Freshness (instId_21(D), _16, freshnessValuePtr_26, &freshnessValueLength);
  # DEBUG retVal => retVal_28
  # DEBUG BEGIN_STMT
  # DEBUG retVal => retVal_28
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  freshnessValueLength ={v} {CLOBBER};
  # DEBUG retVal => retVal_28
  # DEBUG BEGIN_STMT
  if (retVal_28 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 8> [local count: 357553880]:
  # DEBUG BEGIN_STMT
  _17 = SecOC_TxConfig[_1].MaxAuthAttempts;
  _18 = SecOC_TxData[_1].AuthAttempts;
  if (_17 > _18)
    goto <bb 9>; [67.00%]
  else
    goto <bb 10>; [33.00%]

  <bb 9> [local count: 239561099]:
  # DEBUG BEGIN_STMT
  _19 = _18 + 1;
  SecOC_TxData[_1].AuthAttempts = _19;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 0;
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 117992780]:
  # DEBUG BEGIN_STMT
  SecOC_Tx_ResetSm (instId_21(D));
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 498862599]:
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].State = 2;

  <bb 12> [local count: 1073741824]:
  return;

}



;; Function SecOC_Tx_StateIdle (SecOC_Tx_StateIdle, funcdef_no=3, decl_uid=6059, cgraph_uid=4, symbol_order=4)

Modification phase of node SecOC_Tx_StateIdle/4
SecOC_Tx_StateIdle (uint16 instId)
{
  uint8 index;
  int _1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int _4;
  uint8 * _5;
  uint8 * _6;
  long unsigned int _7;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.66_8;
  long unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  sizetype _12;
  const struct SecOC_TxPduConfigType * _13;
  short unsigned int _14;
  int _15;
  unsigned int _16;
  unsigned int _17;
  int _18;
  uint8 * _19;
  sizetype _20;
  uint8 * _21;
  unsigned char _22;
  uint8 * _23;
  uint8 * _24;
  uint8 * _25;
  short unsigned int _26;
  long unsigned int _27;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instId_31(D);
  _2 = SecOC_TxData[_1].TransmitEvent;
  _3 = _2 + 255;
  if (_3 <= 1)
    goto <bb 3>; [25.50%]
  else
    goto <bb 7>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1 ();
  # DEBUG BEGIN_STMT
  _4 = SecOC_TxData[_1].ReceivedAuthPdu.SduLength;
  SecOC_TxData[_1].DataLength = _4;
  # DEBUG BEGIN_STMT
  _5 = SecOC_TxData[_1].SecuredPdu.SduDataPtr;
  _6 = SecOC_TxData[_1].ReceivedAuthPdu.SduDataPtr;
  _7 = (long unsigned int) _4;
  TS_MemCpy32 (_5, _6, _7);
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].TransmitEvent = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].PduREvent = 0;
  # DEBUG BEGIN_STMT
  SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG index => 0
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 547690480]:
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.66_8 = SecOC_ConfigPtr;
  _9 = SecOC_ConfigPtr.66_8->TxPduConfigPtr;
  _10 = (unsigned int) instId_31(D);
  _11 = _10 * 36;
  _12 = _9 + _11;
  _13 = SecOC_ConfigPtr.66_8 + _12;
  _14 = _13->DataId;
  _15 = (int) _14;
  _16 = (unsigned int) index_28;
  _17 = _16 * 8;
  _18 = _15 >> _17;
  _19 = SecOC_TxData[_1].DataToAuthenticator;
  _20 = 1 - _16;
  _21 = _19 + _20;
  _22 = (unsigned char) _18;
  *_21 = _22;
  # DEBUG BEGIN_STMT
  index_44 = index_28 + 1;
  # DEBUG index => index_44

  <bb 5> [local count: 821494645]:
  # index_28 = PHI <0(3), index_44(4)>
  # DEBUG index => index_28
  # DEBUG BEGIN_STMT
  if (index_28 != 2)
    goto <bb 4>; [66.67%]
  else
    goto <bb 6>; [33.33%]

  <bb 6> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  _23 = SecOC_TxData[_1].DataToAuthenticator;
  _24 = _23 + 2;
  _25 = SecOC_TxData[_1].SecuredPdu.SduDataPtr;
  _26 = SecOC_TxData[_1].DataLength;
  _27 = (long unsigned int) _26;
  TS_MemCpy32 (_24, _25, _27);
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].State = 1;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].AuthAttempts = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[_1].ProcessingAuthentication = 1;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function SecOC_Tx_Init (SecOC_Tx_Init, funcdef_no=0, decl_uid=6033, cgraph_uid=1, symbol_order=1)

Modification phase of node SecOC_Tx_Init/1
SecOC_Tx_Init ()
{
  uint16 pduIdx;
  const struct SecOC_ConfigType * SecOC_ConfigPtr.0_1;
  long unsigned int _2;
  sizetype _3;
  const struct SecOC_TxPduConfigType * _4;
  long unsigned int _5;
  uint8 * _6;
  long unsigned int _7;
  uint8 * _8;
  long unsigned int _9;
  uint8 * _10;
  long unsigned int _11;
  uint8 * _12;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].State = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].PduREvent = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].TransmitEvent = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].ProcessingAuthentication = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].AuthAttempts = 0;
  # DEBUG BEGIN_STMT
  SecOC_ConfigPtr.0_1 = SecOC_ConfigPtr;
  _2 = SecOC_ConfigPtr.0_1->TxPduConfigPtr;
  _3 = _2;
  _4 = SecOC_ConfigPtr.0_1 + _3;
  _5 = _4->BuffersConfig.ULAuthPduBufferIndex;
  _6 = &SecOC_PB_PduBuffer[_5];
  SecOC_TxData[0].ReceivedAuthPdu.SduDataPtr = _6;
  # DEBUG BEGIN_STMT
  _7 = _4->BuffersConfig.SecuredPduBufferIndex;
  _8 = &SecOC_PB_PduBuffer[_7];
  SecOC_TxData[0].SecuredPdu.SduDataPtr = _8;
  # DEBUG BEGIN_STMT
  _9 = _4->BuffersConfig.AuthenticatorIndex;
  _10 = &SecOC_PB_IntBuffer[_9];
  SecOC_TxData[0].Authenticator = _10;
  # DEBUG BEGIN_STMT
  _11 = _4->BuffersConfig.DataToAuthenticatorIndex;
  _12 = &SecOC_PB_IntBuffer[_11];
  SecOC_TxData[0].DataToAuthenticator = _12;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].DataLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].ReceivedAuthPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].SecuredPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].CopiedDataFromSecLength = 0;
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 1

  <bb 4> [local count: 1073741824]:
  # pduIdx_13 = PHI <0(2), 1(3)>
  # DEBUG pduIdx => pduIdx_13
  # DEBUG BEGIN_STMT
  if (pduIdx_13 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  return;

}



;; Function SecOC_Tx_DeInit (SecOC_Tx_DeInit, funcdef_no=1, decl_uid=6035, cgraph_uid=2, symbol_order=2)

Modification phase of node SecOC_Tx_DeInit/2
SecOC_Tx_DeInit ()
{
  uint16 pduIdx;

  <bb 2> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].ReceivedAuthPdu.SduDataPtr = 0B;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].SecuredPdu.SduDataPtr = 0B;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].Authenticator = 0B;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].DataToAuthenticator = 0B;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].DataLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].ReceivedAuthPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].SecuredPdu.SduLength = 0;
  # DEBUG BEGIN_STMT
  SecOC_TxData[0].CopiedDataFromSecLength = 0;
  # DEBUG BEGIN_STMT
  # DEBUG pduIdx => 1

  <bb 4> [local count: 1073741824]:
  # pduIdx_1 = PHI <0(2), 1(3)>
  # DEBUG pduIdx => pduIdx_1
  # DEBUG BEGIN_STMT
  if (pduIdx_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 536870913]:
  return;

}



;; Function SecOC_Tx_ProcessPduStates (SecOC_Tx_ProcessPduStates, funcdef_no=2, decl_uid=6037, cgraph_uid=3, symbol_order=3)

Modification phase of node SecOC_Tx_ProcessPduStates/3
SecOC_Tx_ProcessPduStates (uint16 pduIdx)
{
  int _1;
  unsigned char _2;
  int _3;
  void (*<T586>) (uint16) _4;
  unsigned char _5;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) pduIdx_8(D);
  SecOC_TxData[_1].ProcessingAuthentication = 0;
  # DEBUG BEGIN_STMT
  _2 = SecOC_TxData[_1].State;
  _3 = (int) _2;
  _4 = SecOC_Tx_StateMachine[_3];
  _4 (pduIdx_8(D));
  # DEBUG BEGIN_STMT
  _5 = SecOC_TxData[_1].ProcessingAuthentication;
  if (_5 == 1)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  return;

}


