
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24:
  Jump functions of caller  Dcm_Dsl_BufferGetId.part.0/22:
  Jump functions of caller  TS_MemSet32/21:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/19:
  Jump functions of caller  Dcm_Dsl_BufferInitSingleBuffer/15:
  Jump functions of caller  Dcm_Dsl_BufferInitializeSingleBuffer/14:
    callsite  Dcm_Dsl_BufferInitializeSingleBuffer/14 -> Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_BufferAllocationPermission/13:
  Jump functions of caller  Dcm_Dsl_BufferGetId/12:
    callsite  Dcm_Dsl_BufferGetId/12 -> Dcm_Dsl_BufferGetId.part.0/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Dcm_Dsl_BufferGetId/12 -> Dcm_Dsl_BufferUseValidForRequester/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_BufferUseValidForRequester/11:
  Jump functions of caller  Dcm_Dsl_BufferFreeRxTxNRC/10:
    callsite  Dcm_Dsl_BufferFreeRxTxNRC/10 -> Dcm_Dsl_BufferInitializeSingleBuffer/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_BufferFreeRxTxNRC/10 -> Dcm_Dsl_BufferInitializeSingleBuffer/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_BufferFreeRxTxNRC/10 -> Dcm_Dsl_BufferInitializeSingleBuffer/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_BufferInit/9:
    callsite  Dcm_Dsl_BufferInit/9 -> Dcm_Dsl_BufferInitSingleBuffer/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 5]
  Jump functions of caller  Dcm_Dsl_BufferGive/8:
  Jump functions of caller  Dcm_Dsl_BufferChangeState/7:
  Jump functions of caller  Dcm_Dsl_BufferFree/6:
    callsite  Dcm_Dsl_BufferFree/6 -> Dcm_Dsl_BufferInitializeSingleBuffer/14 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_BufferAllocate/5:
    callsite  Dcm_Dsl_BufferAllocate/5 -> Dcm_Dsl_BufferAllocationPermission/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_Dsl_BufferAllocate/5 -> Dcm_Dsl_BufferGetId/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_BufferGetInfo/4:
    callsite  Dcm_Dsl_BufferGetInfo/4 -> Dcm_Dsl_BufferGetId/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering Dcm_Dsl_BufferInitializeSingleBuffer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferFreeRxTxNRC for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferInit for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferGive for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferChangeState for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferFree for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferAllocate for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_BufferGetInfo for cloning; -fipa-cp-clone disabled.

overall_size: 244, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24:
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
  Node: Dcm_Dsl_BufferGetId.part.0/22:
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
  Node: Dcm_Dsl_BufferInitSingleBuffer/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x7
         Dcm_BufferIndexType [0, 5]
        AGGS VARIABLE
  Node: Dcm_Dsl_BufferInitializeSingleBuffer/14:
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
  Node: Dcm_Dsl_BufferAllocationPermission/13:
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
  Node: Dcm_Dsl_BufferGetId/12:
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
  Node: Dcm_Dsl_BufferUseValidForRequester/11:
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
  Node: Dcm_Dsl_BufferFreeRxTxNRC/10:
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
  Node: Dcm_Dsl_BufferInit/9:
  Node: Dcm_Dsl_BufferGive/8:
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
  Node: Dcm_Dsl_BufferChangeState/7:
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
  Node: Dcm_Dsl_BufferFree/6:
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
  Node: Dcm_Dsl_BufferAllocate/5:
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
  Node: Dcm_Dsl_BufferGetInfo/4:
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

IPA decision stage:

Propagated bits info for function Dcm_Dsl_BufferInitSingleBuffer/15:
 param 0: value = 0x0, mask = 0x7

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24 (Dcm_Dsl_BufferInitializeSingleBuffer.part.0) @06ddbb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (write)Dcm_BufferInfo/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsl_BufferInitializeSingleBuffer/14 (536870912 (estimated locally),0.50 per call) 
  Calls: 
CSWTCH.6/23 (CSWTCH.6) @06dce828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Dcm_Dsl_BufferAllocate/5 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_Dsl_BufferGetId.part.0/22 (Dcm_Dsl_BufferGetId.part.0) @06ddb620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Dcm_RxPduIdConfig/17 (read)Dcm_ProtocolConfig/18 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsl_BufferGetId/12 (697932184 (estimated locally),0.65 per call) 
  Calls: 
TS_MemSet32/21 (TS_MemSet32) @06dca460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_BufferInitSingleBuffer/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06d8bb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_BufferFreeRxTxNRC/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFree/6 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferAllocate/5 (524845004 (estimated locally),0.49 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/19 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06d8b9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_BufferFreeRxTxNRC/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFree/6 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferAllocate/5 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_ProtocolConfig/18 (Dcm_ProtocolConfig) @06d83ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_BufferGetId.part.0/22 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_RxPduIdConfig/17 (Dcm_RxPduIdConfig) @06d83c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_BufferGetId.part.0/22 (read)Dcm_Dsl_BufferAllocate/5 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_BufferConfig/16 (Dcm_BufferConfig) @06d83870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferGetInfo/4 (read)Dcm_Dsl_BufferInitSingleBuffer/15 (read)Dcm_Dsl_BufferInitSingleBuffer/15 (read)Dcm_Dsl_BufferAllocate/5 (read)Dcm_Dsl_BufferAllocate/5 (read)Dcm_Dsl_BufferAllocate/5 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_BufferInitSingleBuffer/15 (Dcm_Dsl_BufferInitSingleBuffer) @06d8b460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_BufferInfo/1 (write)Dcm_BufferInfo/1 (write)Dcm_BufferConfig/16 (read)Dcm_BufferConfig/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_BufferInit/9 (920304118 (estimated locally),6.00 per call) 
  Calls: TS_MemSet32/21 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_BufferInitializeSingleBuffer/14 (Dcm_Dsl_BufferInitializeSingleBuffer) @06d8b0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_BufferFreeRxTxNRC/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFreeRxTxNRC/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFreeRxTxNRC/10 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferFree/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24 (536870912 (estimated locally),0.50 per call) 
Dcm_Dsl_BufferAllocationPermission/13 (Dcm_Dsl_BufferAllocationPermission) @06d33d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_BufferConfig/16 (read)Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073419800 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_BufferAllocate/5 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Dsl_BufferGetId/12 (Dcm_Dsl_BufferGetId) @06d33b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_BufferAllocate/5 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferGetInfo/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_BufferGetId.part.0/22 (697932184 (estimated locally),0.65 per call) Dcm_Dsl_BufferUseValidForRequester/11 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_BufferUseValidForRequester/11 (Dcm_Dsl_BufferUseValidForRequester) @06d33540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_BufferGetId/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferFreeRxTxNRC/10 (Dcm_Dsl_BufferFreeRxTxNRC) @06d2ee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferInitializeSingleBuffer/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferInitializeSingleBuffer/14 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferInitializeSingleBuffer/14 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_BufferInit/9 (Dcm_Dsl_BufferInit) @06d2ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:153437706 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_BufferInitSingleBuffer/15 (920304118 (estimated locally),6.00 per call) 
Dcm_Dsl_BufferGive/8 (Dcm_Dsl_BufferGive) @06d2ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_BufferChangeState/7 (Dcm_Dsl_BufferChangeState) @06d2e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_BufferInfo/1 (read)Dcm_BufferInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_BufferFree/6 (Dcm_Dsl_BufferFree) @06d2e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferInitializeSingleBuffer/14 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_BufferAllocate/5 (Dcm_Dsl_BufferAllocate) @06d2e540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CSWTCH.6/23 (read)Dcm_BufferInfo/1 (write)Dcm_BufferInfo/1 (write)Dcm_BufferConfig/16 (read)Dcm_BufferConfig/16 (read)Dcm_RxPduIdConfig/17 (read)Dcm_DefaultBuffers/3 (addr)Dcm_BufferConfig/16 (read)Dcm_NRCBuffers/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/20 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_BufferAllocationPermission/13 (524845004 (estimated locally),0.49 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/19 (524845004 (estimated locally),0.49 per call) Dcm_Dsl_BufferGetId/12 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_BufferGetInfo/4 (Dcm_Dsl_BufferGetInfo) @06d87d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_BufferConfig/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_BufferGetId/12 (1073741824 (estimated locally),1.00 per call) 
Dcm_DefaultBuffers/3 (Dcm_DefaultBuffers) @06d83120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_BufferAllocate/5 (addr)
  Availability: available
  Varpool flags:
Dcm_NRCBuffers/2 (Dcm_NRCBuffers) @06d830d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_BufferAllocate/5 (addr)
  Availability: available
  Varpool flags:
Dcm_BufferInfo/1 (Dcm_BufferInfo) @06d83090
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferInitSingleBuffer/15 (write)Dcm_Dsl_BufferAllocate/5 (write)Dcm_Dsl_BufferAllocate/5 (write)Dcm_Dsl_BufferGive/8 (read)Dcm_Dsl_BufferGive/8 (write)Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferChangeState/7 (read)Dcm_Dsl_BufferChangeState/7 (write)Dcm_Dsl_BufferInitSingleBuffer/15 (write)Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferAllocationPermission/13 (read)Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24 (read)Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24 (write)Dcm_Dsl_BufferInitializeSingleBuffer.part.0/24 (write)
  Availability: available
  Varpool flags:
Dcm_Buffers/0 (Dcm_Buffers) @06d83048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_BufferUseValidForRequester (Dcm_Dsl_BufferUseValidForRequester, funcdef_no=7, decl_uid=7220, cgraph_uid=8, symbol_order=11)

Modification phase of node Dcm_Dsl_BufferUseValidForRequester/11
Dcm_Dsl_BufferUseValidForRequester (Dcm_BufferUserType Requester, Dcm_BufferUsageType Use)
{
  boolean UseIsValid;
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG UseIsValid => 0
  # DEBUG BEGIN_STMT
  _1 = Use_6(D) + 255;
  if (_1 <= 2)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  if (Requester_7(D) <= 5)
    goto <bb 8>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 805306368]:
  _2 = Use_6(D) + 252;
  if (_2 <= 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 402653184]:
  _3 = Requester_7(D) + 65524;
  if (_3 <= 1)
    goto <bb 8>; [41.00%]
  else
    goto <bb 6>; [59.00%]

  <bb 6> [local count: 640218563]:
  if (Use_6(D) == 7)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 217674311]:
  _4 = Requester_7(D) + 65530;
  if (_4 <= 5)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 542360418]:
  # DEBUG BEGIN_STMT
  # DEBUG UseIsValid => 1

  <bb 9> [local count: 1073741824]:
  # UseIsValid_5 = PHI <0(6), 0(7), 1(8)>
  # DEBUG UseIsValid => UseIsValid_5
  # DEBUG BEGIN_STMT
  return UseIsValid_5;

}



;; Function Dcm_Dsl_BufferGetId.part.0 (Dcm_Dsl_BufferGetId.part.0, funcdef_no=12, decl_uid=7431, cgraph_uid=16, symbol_order=22)

Modification phase of node Dcm_Dsl_BufferGetId.part.0/22
Dcm_Dsl_BufferGetId.part.0 (Dcm_BufferUserType Requester, Dcm_BufferUsageType Use)
{
  Dcm_BufferIdType BufferId;
  int _3;
  unsigned char _4;
  unsigned char _7;
  unsigned char _8;
  int _9;
  unsigned char _10;

  <bb 8> [local count: 1073741823]:

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  switch (Use_1(D)) <default: <L4> [20.00%], case 1 ... 2: <L0> [20.00%], case 3: <L1> [20.00%], case 4 ... 6: <L2> [20.00%], case 7: <L3> [20.00%]>

  <bb 3> [local count: 214748364]:
<L0>:
  # DEBUG BEGIN_STMT
  _3 = (int) Requester_2(D);
  _4 = Dcm_RxPduIdConfig[_3].BufferIndex;
  BufferId_5 = (Dcm_BufferIdType) _4;
  # DEBUG BufferId => BufferId_5
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  BufferId_6 = Requester_2(D) + 6;
  # DEBUG BufferId => BufferId_6
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L2>:
  # DEBUG BEGIN_STMT
  _7 = (unsigned char) Requester_2(D);
  _8 = _7 + 244;
  _9 = (int) _8;
  _10 = Dcm_ProtocolConfig[_9].TxBufferIndex;
  BufferId_11 = (Dcm_BufferIdType) _10;
  # DEBUG BufferId => BufferId_11
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  BufferId_12 = Requester_2(D) + 6;
  # DEBUG BufferId => BufferId_12
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # BufferId_13 = PHI <18(2), BufferId_5(3), BufferId_6(4), BufferId_11(5), BufferId_12(6)>
<L4>:
  # DEBUG BufferId => BufferId_13
  # DEBUG BEGIN_STMT
  return BufferId_13;

}



;; Function Dcm_Dsl_BufferGetInfo (Dcm_Dsl_BufferGetInfo, funcdef_no=0, decl_uid=5903, cgraph_uid=1, symbol_order=4)

Modification phase of node Dcm_Dsl_BufferGetInfo/4
Dcm_Dsl_BufferGetInfo (Dcm_BufferUserType Requester, Dcm_BufferUsageType Use, struct Dcm_BufferType * Buffer)
{
  Dcm_BufferIdType BufferId;
  int _1;
  long unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Buffer_7(D)->BufferPtr = 0B;
  # DEBUG BEGIN_STMT
  BufferId_11 = Dcm_Dsl_BufferGetId (Requester_9(D), Use_10(D));
  # DEBUG BufferId => BufferId_11
  # DEBUG BEGIN_STMT
  if (BufferId_11 <= 5)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = (int) BufferId_11;
  _2 = Dcm_BufferConfig[_1].Size;
  Buffer_7(D)->Size = _2;
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = BufferId_11 + 65530;
  if (_3 <= 5)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  Buffer_7(D)->Size = 2;
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _4 = BufferId_11 + 65524;
  if (_4 <= 5)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  Buffer_7(D)->Size = 3;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  Buffer_7(D)->Size = 0;

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Buffer_7(D)->BufferId = BufferId_11;
  # DEBUG BEGIN_STMT
  Buffer_7(D)->FilledLength = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_BufferAllocate (Dcm_Dsl_BufferAllocate, funcdef_no=1, decl_uid=5886, cgraph_uid=2, symbol_order=5)

Modification phase of node Dcm_Dsl_BufferAllocate/5
Dcm_Dsl_BufferAllocate (Dcm_BufferUserType Requester, Dcm_BufferUsageType Use, Dcm_BufferSizeType Size, struct Dcm_BufferType * Buffer)
{
  Dcm_BufferIdType BufferId;
  Dcm_BufferStateType BufferState;
  BufReq_ReturnType AllocationPermission;
  unsigned char _1;
  int _2;
  unsigned char _3;
  Dcm_MsgItemType * _5;
  long unsigned int _6;
  short unsigned int _7;
  int _8;
  unsigned char _9;
  int _10;
  int _11;
  unsigned int _12;
  unsigned int _13;
  uint8 * _14;
  int _15;
  long unsigned int _16;
  int _17;
  int _18;
  unsigned int _19;
  unsigned int _20;
  uint8 * _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG AllocationPermission => 1
  # DEBUG BEGIN_STMT
  # DEBUG BufferState => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BufferId_30 = Dcm_Dsl_BufferGetId (Requester_28(D), Use_29(D));
  # DEBUG BufferId => BufferId_30
  # DEBUG BEGIN_STMT
  if (BufferId_30 != 18)
    goto <bb 3>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  AllocationPermission_37 = Dcm_Dsl_BufferAllocationPermission (Requester_28(D), Use_29(D), Size_36(D), BufferId_30);
  # DEBUG AllocationPermission => AllocationPermission_37
  # DEBUG BEGIN_STMT
  if (AllocationPermission_37 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 4> [local count: 262422502]:
  # DEBUG BEGIN_STMT
  _1 = Use_29(D) + 255;
  if (_1 <= 5)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 131211251]:
<L22>:
  BufferState_4 = 0;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 131211251]:
<L23>:
  _3 = CSWTCH.6[_1];
  BufferState_40 = _3;

  <bb 7> [local count: 262422502]:
  # BufferState_23 = PHI <BufferState_40(6), BufferState_4(5)>
<L24>:
<L21>:
  # DEBUG BufferState => BufferState_23
  # DEBUG BEGIN_STMT
  if (BufferId_30 <= 5)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 131211251]:
  # DEBUG BEGIN_STMT
  _2 = (int) BufferId_30;
  Dcm_BufferInfo[_2].State = BufferState_23;
  # DEBUG BEGIN_STMT
  Dcm_BufferInfo[_2].User = Requester_28(D);
  # DEBUG BEGIN_STMT
  _5 = Dcm_BufferConfig[_2].BufferPtr;
  Buffer_31(D)->BufferPtr = _5;
  # DEBUG BEGIN_STMT
  _6 = Dcm_BufferConfig[_2].Size;
  Buffer_31(D)->Size = _6;
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 131211251]:
  # DEBUG BEGIN_STMT
  _7 = BufferId_30 + 65530;
  if (_7 <= 5)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 65605625]:
  # DEBUG BEGIN_STMT
  _8 = (int) Requester_28(D);
  _9 = Dcm_RxPduIdConfig[_8].BufferIndex;
  # DEBUG RegularRxBufferId => (const Dcm_BufferIdType) _9
  # DEBUG BEGIN_STMT
  _10 = (int) BufferId_30;
  _11 = _10 + -6;
  _12 = (unsigned int) _11;
  _13 = _12 * 2;
  _14 = &Dcm_DefaultBuffers[_13];
  Buffer_31(D)->BufferPtr = _14;
  # DEBUG BEGIN_STMT
  _15 = (int) _9;
  _16 = Dcm_BufferConfig[_15].Size;
  Buffer_31(D)->Size = _16;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 65605625]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _17 = (int) BufferId_30;
  _18 = _17 + -12;
  _19 = (unsigned int) _18;
  _20 = _19 * 3;
  _21 = &Dcm_NRCBuffers[_20];
  Buffer_31(D)->BufferPtr = _21;
  # DEBUG BEGIN_STMT
  Buffer_31(D)->Size = 3;

  <bb 12> [local count: 262422502]:
  # DEBUG BEGIN_STMT
  Buffer_31(D)->BufferId = BufferId_30;

  <bb 13> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  Buffer_31(D)->BufferId = 18;
  # DEBUG BEGIN_STMT
  Buffer_31(D)->Size = 0;
  # DEBUG BEGIN_STMT
  Buffer_31(D)->BufferPtr = 0B;

  <bb 15> [local count: 1073741824]:
  # AllocationPermission_22 = PHI <AllocationPermission_37(13), 1(14)>
  # DEBUG AllocationPermission => AllocationPermission_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return AllocationPermission_22;

}



;; Function Dcm_Dsl_BufferChangeState (Dcm_Dsl_BufferChangeState, funcdef_no=3, decl_uid=5893, cgraph_uid=4, symbol_order=7)

Modification phase of node Dcm_Dsl_BufferChangeState/7
Dcm_Dsl_BufferChangeState (Dcm_BufferUserType CurrentUser, Dcm_BufferStateType NewState, Dcm_BufferIdType BufferId)
{
  BufReq_ReturnType StateChangeResult;
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG StateChangeResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (BufferId_5(D) <= 5)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _1 = (int) BufferId_5(D);
  _2 = Dcm_BufferInfo[_1].User;
  if (_2 == CurrentUser_7(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Dcm_BufferInfo[_1].State = NewState_8(D);
  # DEBUG BEGIN_STMT
  # DEBUG StateChangeResult => 0

  <bb 5> [local count: 1073741824]:
  # StateChangeResult_3 = PHI <0(4), 1(3), 1(2)>
  # DEBUG StateChangeResult => StateChangeResult_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return StateChangeResult_3;

}



;; Function Dcm_Dsl_BufferGive (Dcm_Dsl_BufferGive, funcdef_no=4, decl_uid=5897, cgraph_uid=5, symbol_order=8)

Modification phase of node Dcm_Dsl_BufferGive/8
Dcm_Dsl_BufferGive (Dcm_BufferUserType Provider, Dcm_BufferUserType Receiver, Dcm_BufferIdType BufferId)
{
  BufReq_ReturnType OwnerTransferResult;
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG OwnerTransferResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (BufferId_5(D) <= 5)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  _1 = (int) BufferId_5(D);
  _2 = Dcm_BufferInfo[_1].User;
  if (_2 == Provider_7(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Dcm_BufferInfo[_1].User = Receiver_8(D);
  # DEBUG BEGIN_STMT
  # DEBUG OwnerTransferResult => 0

  <bb 5> [local count: 1073741824]:
  # OwnerTransferResult_3 = PHI <0(4), 1(3), 1(2)>
  # DEBUG OwnerTransferResult => OwnerTransferResult_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return OwnerTransferResult_3;

}



;; Function Dcm_Dsl_BufferInit (Dcm_Dsl_BufferInit, funcdef_no=5, decl_uid=5899, cgraph_uid=6, symbol_order=9)

Modification phase of node Dcm_Dsl_BufferInit/9
Dcm_Dsl_BufferInit ()
{
  uint16_least NormalBufferIndex;
  unsigned char _1;

  <bb 2> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NormalBufferIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) NormalBufferIndex_2;
  Dcm_Dsl_BufferInitSingleBuffer (_1);
  # DEBUG BEGIN_STMT
  NormalBufferIndex_6 = NormalBufferIndex_2 + 1;
  # DEBUG NormalBufferIndex => NormalBufferIndex_6

  <bb 4> [local count: 1073741824]:
  # NormalBufferIndex_2 = PHI <0(2), NormalBufferIndex_6(3)>
  # DEBUG NormalBufferIndex => NormalBufferIndex_2
  # DEBUG BEGIN_STMT
  if (NormalBufferIndex_2 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 5>; [14.29%]

  <bb 5> [local count: 153437707]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_BufferInitializeSingleBuffer (Dcm_Dsl_BufferInitializeSingleBuffer, funcdef_no=10, decl_uid=5911, cgraph_uid=11, symbol_order=14)

Modification phase of node Dcm_Dsl_BufferInitializeSingleBuffer/14
Dcm_Dsl_BufferInitializeSingleBuffer (Dcm_BufferUserType Requester, Dcm_BufferIdType BufferId)
{
  BufReq_ReturnType FreeResult;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG FreeResult => 1
  # DEBUG BEGIN_STMT
  if (BufferId_4(D) <= 5)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  FreeResult_1 = Dcm_Dsl_BufferInitializeSingleBuffer.part.0 (Requester_6(D), BufferId_4(D));

  <bb 4> [local count: 1073741824]:
  # FreeResult_3 = PHI <FreeResult_1(3), 0(2)>
  # DEBUG FreeResult => FreeResult_3
  # DEBUG BEGIN_STMT
  return FreeResult_3;

}



;; Function Dcm_Dsl_BufferFree (Dcm_Dsl_BufferFree, funcdef_no=2, decl_uid=5889, cgraph_uid=3, symbol_order=6)

Modification phase of node Dcm_Dsl_BufferFree/6
Dcm_Dsl_BufferFree (Dcm_BufferUserType Requester, Dcm_BufferIdType BufferId)
{
  BufReq_ReturnType FreeResult;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG FreeResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  FreeResult_6 = Dcm_Dsl_BufferInitializeSingleBuffer (Requester_3(D), BufferId_4(D));
  # DEBUG FreeResult => FreeResult_6
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return FreeResult_6;

}



;; Function Dcm_Dsl_BufferFreeRxTxNRC (Dcm_Dsl_BufferFreeRxTxNRC, funcdef_no=6, decl_uid=5908, cgraph_uid=7, symbol_order=10)

Modification phase of node Dcm_Dsl_BufferFreeRxTxNRC/10
Dcm_Dsl_BufferFreeRxTxNRC (Dcm_BufferUserType Requester, Dcm_BufferIdType BufferIdRx, Dcm_BufferIdType BufferIdTx, Dcm_BufferIdType BufferIdNRC)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferInitializeSingleBuffer (Requester_3(D), BufferIdRx_4(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferInitializeSingleBuffer (Requester_3(D), BufferIdTx_6(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferInitializeSingleBuffer (Requester_3(D), BufferIdNRC_8(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}


