
IPA constant propagation start:
Determining dynamic type for call: BufferAllocationResult_30 = Dcm_Dsl_AllocateRxBuffer (DcmRxPduId_19(D), TpSduLength_21(D), &AcceptAs, &RxBuffer);
  Starting walk at: BufferAllocationResult_30 = Dcm_Dsl_AllocateRxBuffer (DcmRxPduId_19(D), TpSduLength_21(D), &AcceptAs, &RxBuffer);
  instance pointer: &AcceptAs  Outer instance pointer: AcceptAs offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dcm_Dsl_Supervisor_RequestRxPermission (DcmRxPduId_19(D), TpSduLength_21(D), 1);
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: BufferAllocationResult_30 = Dcm_Dsl_AllocateRxBuffer (DcmRxPduId_19(D), TpSduLength_21(D), &AcceptAs, &RxBuffer);
  Starting walk at: BufferAllocationResult_30 = Dcm_Dsl_AllocateRxBuffer (DcmRxPduId_19(D), TpSduLength_21(D), &AcceptAs, &RxBuffer);
  instance pointer: &RxBuffer  Outer instance pointer: RxBuffer offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = Dcm_Dsl_Supervisor_RequestRxPermission (DcmRxPduId_19(D), TpSduLength_21(D), 1);
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_BufferAllocate/31:
  Jump functions of caller  PduR_DcmCancelReceive/30:
  Jump functions of caller  Dcm_Dsl_Supervisor_ProcessRequest/29:
  Jump functions of caller  Dcm_Dsl_BufferGive/28:
  Jump functions of caller  Dcm_Dsl_BufferChangeState/23:
  Jump functions of caller  Dcm_Dsl_Supervisor_IncomingReceptionFinished/22:
  Jump functions of caller  Dcm_Dsl_BufferInitializeSingleBuffer/21:
  Jump functions of caller  TS_MemCpy32/20:
  Jump functions of caller  Dcm_Dsl_BufferGetInfo/19:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18:
  Jump functions of caller  Dcm_Dsl_Supervisor_IncomingReception/17:
  Jump functions of caller  Dcm_Dsl_Supervisor_RequestRxPermission/16:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15:
  Jump functions of caller  Det_ASR40_ReportError/14:
  Jump functions of caller  Dcm_Dsl_RxConnectionInit/12:
    callsite  Dcm_Dsl_RxConnectionInit/12 -> Dcm_Dsl_RxConnectionInitSingleRxConnection/11 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x7
         VR  [0, 5]
  Jump functions of caller  Dcm_Dsl_RxConnectionInitSingleRxConnection/11:
  Jump functions of caller  Dcm_Dsl_AllocateRxBuffer/10:
  Jump functions of caller  Dcm_Dsl_SetupRxConnection/9:
  Jump functions of caller  Dcm_Dsl_RxConnectionCancelReceive/8:
  Jump functions of caller  Dcm_Dsl_RxConnectionRxIndication/7:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/6:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetState/5:
  Jump functions of caller  Dcm_TpRxIndication/4:
    callsite  Dcm_TpRxIndication/4 -> Dcm_Dsl_RxConnectionInitSingleRxConnection/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Dcm_TpRxIndication/4 -> Dcm_Dsl_RxConnectionRxIndication/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         Unknown bits
         Unknown VR
    callsite  Dcm_TpRxIndication/4 -> Dcm_Dsl_RxConnectionInitSingleRxConnection/11 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_RxIndication/3:
  Jump functions of caller  Dcm_CopyRxData/2:
  Jump functions of caller  Dcm_StartOfReception/1:
    callsite  Dcm_StartOfReception/1 -> Dcm_Dsl_AllocateRxBuffer/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]

 Propagating constants:

Not considering Dcm_Dsl_RxConnectionInit for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RxConnectionInitSingleRxConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_AllocateRxBuffer for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_SetupRxConnection for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RxConnectionCancelReceive for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RxConnectionRxIndication for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RxConnectionGetRxPduIdInformation for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RxConnectionGetState for cloning; -fipa-cp-clone disabled.
Not considering Dcm_TpRxIndication for cloning; -fipa-cp-clone disabled.
Not considering Dcm_RxIndication for cloning; -fipa-cp-clone disabled.
Not considering Dcm_CopyRxData for cloning; -fipa-cp-clone disabled.
Not considering Dcm_StartOfReception for cloning; -fipa-cp-clone disabled.

overall_size: 381, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_RxConnectionInit/12:
  Node: Dcm_Dsl_RxConnectionInitSingleRxConnection/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_AllocateRxBuffer/10:
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
  Node: Dcm_Dsl_SetupRxConnection/9:
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
  Node: Dcm_Dsl_RxConnectionCancelReceive/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_RxConnectionRxIndication/7:
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
  Node: Dcm_Dsl_RxConnectionGetRxPduIdInformation/6:
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
  Node: Dcm_Dsl_RxConnectionGetState/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_TpRxIndication/4:
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
  Node: Dcm_RxIndication/3:
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
  Node: Dcm_CopyRxData/2:
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
  Node: Dcm_StartOfReception/1:
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


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_BufferAllocate/31 (Dcm_Dsl_BufferAllocate) @06dd41c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_AllocateRxBuffer/10 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_AllocateRxBuffer/10 (36217269 (estimated locally),0.03 per call) Dcm_Dsl_AllocateRxBuffer/10 (357878150 (estimated locally),0.33 per call) 
  Calls: 
PduR_DcmCancelReceive/30 (PduR_DcmCancelReceive) @06d4c0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RxConnectionCancelReceive/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_Dsl_Supervisor_ProcessRequest/29 (Dcm_Dsl_Supervisor_ProcessRequest) @06d4ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RxConnectionRxIndication/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_BufferGive/28 (Dcm_Dsl_BufferGive) @06d4cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RxConnectionRxIndication/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_RxComMChannelIDs/27 (Dcm_RxComMChannelIDs) @06dccd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_BufferConfig/26 (Dcm_BufferConfig) @06dccd38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_MainConnectionConfig/25 (Dcm_MainConnectionConfig) @06dcccf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_RxPduIdConfig/24 (Dcm_RxPduIdConfig) @06dccca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsl_BufferChangeState/23 (Dcm_Dsl_BufferChangeState) @06d4c8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TpRxIndication/4 (15402021 (estimated locally),0.01 per call) 
  Calls: 
Dcm_Dsl_Supervisor_IncomingReceptionFinished/22 (Dcm_Dsl_Supervisor_IncomingReceptionFinished) @06d4c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TpRxIndication/4 (58874001 (estimated locally),0.05 per call) Dcm_TpRxIndication/4 (44940378 (estimated locally),0.04 per call) 
  Calls: 
Dcm_Dsl_BufferInitializeSingleBuffer/21 (Dcm_Dsl_BufferInitializeSingleBuffer) @06d4c620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TpRxIndication/4 (58874001 (estimated locally),0.05 per call) Dcm_TpRxIndication/4 (44940378 (estimated locally),0.04 per call) 
  Calls: 
TS_MemCpy32/20 (TS_MemCpy32) @06d4c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_CopyRxData/2 (5077694 (estimated locally),0.00 per call) 
  Calls: 
Dcm_Dsl_BufferGetInfo/19 (Dcm_Dsl_BufferGetInfo) @06d41e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_StartOfReception/1 (101726150 (estimated locally),0.09 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06d41d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TpRxIndication/4 (105546792 (estimated locally),0.10 per call) Dcm_TpRxIndication/4 (44940378 (estimated locally),0.04 per call) Dcm_StartOfReception/1 (101726150 (estimated locally),0.09 per call) Dcm_Dsl_RxConnectionCancelReceive/8 (536870913 (estimated locally),0.50 per call) Dcm_Dsl_RxConnectionCancelReceive/8 (536870913 (estimated locally),0.50 per call) Dcm_CopyRxData/2 (162367082 (estimated locally),0.15 per call) 
  Calls: 
Dcm_Dsl_Supervisor_IncomingReception/17 (Dcm_Dsl_Supervisor_IncomingReception) @06d41c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_StartOfReception/1 (16408835 (estimated locally),0.02 per call) 
  Calls: 
Dcm_Dsl_Supervisor_RequestRxPermission/16 (Dcm_Dsl_Supervisor_RequestRxPermission) @06d41b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_StartOfReception/1 (101726150 (estimated locally),0.09 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06d41a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TpRxIndication/4 (105546792 (estimated locally),0.10 per call) Dcm_TpRxIndication/4 (44940378 (estimated locally),0.04 per call) Dcm_StartOfReception/1 (101726150 (estimated locally),0.09 per call) Dcm_Dsl_RxConnectionCancelReceive/8 (1073741824 (estimated locally),1.00 per call) Dcm_CopyRxData/2 (162367082 (estimated locally),0.15 per call) 
  Calls: 
Det_ASR40_ReportError/14 (Det_ASR40_ReportError) @06d419a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_TpRxIndication/4 (33393264 (estimated locally),0.03 per call) Dcm_TpRxIndication/4 (44940378 (estimated locally),0.04 per call) Dcm_TpRxIndication/4 (365016386 (estimated locally),0.34 per call) Dcm_TpRxIndication/4 (524845004 (estimated locally),0.49 per call) Dcm_StartOfReception/1 (100207849 (estimated locally),0.09 per call) Dcm_StartOfReception/1 (64100719 (estimated locally),0.06 per call) Dcm_StartOfReception/1 (181135950 (estimated locally),0.17 per call) Dcm_StartOfReception/1 (524845003 (estimated locally),0.49 per call) Dcm_CopyRxData/2 (205393787 (estimated locally),0.19 per call) Dcm_CopyRxData/2 (181135951 (estimated locally),0.17 per call) Dcm_CopyRxData/2 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dcm_Initialized/13 (Dcm_Initialized) @06d91b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_StartOfReception/1 (read)Dcm_CopyRxData/2 (read)Dcm_TpRxIndication/4 (read)
  Availability: not_available
  Varpool flags:
Dcm_Dsl_RxConnectionInit/12 (Dcm_Dsl_RxConnectionInit) @06d41700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:153437706 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (920304118 (estimated locally),6.00 per call) 
Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (Dcm_Dsl_RxConnectionInitSingleRxConnection) @06d41540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_RxConnectionInit/12 (920304118 (estimated locally),6.00 per call) Dcm_TpRxIndication/4 (105546792 (estimated locally),0.10 per call) Dcm_TpRxIndication/4 (44940378 (estimated locally),0.04 per call) 
  Calls: 
Dcm_Dsl_AllocateRxBuffer/10 (Dcm_Dsl_AllocateRxBuffer) @06d411c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_StartOfReception/1 (49723742 (estimated locally),0.05 per call) 
  Calls: Dcm_Dsl_BufferAllocate/31 (357878150 (estimated locally),0.33 per call) Dcm_Dsl_BufferAllocate/31 (36217269 (estimated locally),0.03 per call) Dcm_Dsl_BufferAllocate/31 (357878150 (estimated locally),0.33 per call) 
Dcm_Dsl_SetupRxConnection/9 (Dcm_Dsl_SetupRxConnection) @06d41000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RxConnectionCancelReceive/8 (Dcm_Dsl_RxConnectionCancelReceive) @06d39e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_DcmCancelReceive/30 (536870913 (estimated locally),0.50 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (536870913 (estimated locally),0.50 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (536870913 (estimated locally),0.50 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_RxConnectionRxIndication/7 (Dcm_Dsl_RxConnectionRxIndication) @06d39c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Dcm_TpRxIndication/4 (46672791 (estimated locally),0.04 per call) 
  Calls: Dcm_Dsl_Supervisor_ProcessRequest/29 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_BufferGive/28 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/6 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06d398c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxPduIdConfig/24 (read)Dcm_MainConnectionConfig/25 (read)Dcm_RxPduIdConfig/24 (read)Dcm_RxPduIdConfig/24 (read)Dcm_RxPduIdConfig/24 (read)Dcm_BufferConfig/26 (read)Dcm_RxComMChannelIDs/27 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RxConnectionGetState/5 (Dcm_Dsl_RxConnectionGetState) @06d39540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_RxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_TpRxIndication/4 (Dcm_TpRxIndication) @06d39380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/13 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (105546792 (estimated locally),0.10 per call) Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (105546792 (estimated locally),0.10 per call) Dcm_Dsl_Supervisor_IncomingReceptionFinished/22 (58874001 (estimated locally),0.05 per call) Dcm_Dsl_BufferInitializeSingleBuffer/21 (58874001 (estimated locally),0.05 per call) Dcm_Dsl_RxConnectionRxIndication/7 (46672791 (estimated locally),0.04 per call) Dcm_Dsl_BufferChangeState/23 (15402021 (estimated locally),0.01 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (105546792 (estimated locally),0.10 per call) Det_ASR40_ReportError/14 (33393264 (estimated locally),0.03 per call) Det_ASR40_ReportError/14 (44940378 (estimated locally),0.04 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (44940378 (estimated locally),0.04 per call) Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (44940378 (estimated locally),0.04 per call) Dcm_Dsl_Supervisor_IncomingReceptionFinished/22 (44940378 (estimated locally),0.04 per call) Dcm_Dsl_BufferInitializeSingleBuffer/21 (44940378 (estimated locally),0.04 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (44940378 (estimated locally),0.04 per call) Det_ASR40_ReportError/14 (365016386 (estimated locally),0.34 per call) Det_ASR40_ReportError/14 (524845004 (estimated locally),0.49 per call) 
Dcm_RxIndication/3 (Dcm_RxIndication) @06d95e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_CopyRxData/2 (Dcm_CopyRxData) @06d95c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/13 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (162367082 (estimated locally),0.15 per call) TS_MemCpy32/20 (5077694 (estimated locally),0.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (162367082 (estimated locally),0.15 per call) Det_ASR40_ReportError/14 (205393787 (estimated locally),0.19 per call) Det_ASR40_ReportError/14 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/14 (524845004 (estimated locally),0.49 per call) 
Dcm_StartOfReception/1 (Dcm_StartOfReception) @06d95700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Initialized/13 (read)Dcm_RxConnections/0 (read)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (write)Dcm_RxConnections/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_BufferGetInfo/19 (101726150 (estimated locally),0.09 per call) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/18 (101726150 (estimated locally),0.09 per call) Dcm_Dsl_Supervisor_IncomingReception/17 (16408835 (estimated locally),0.02 per call) Dcm_Dsl_AllocateRxBuffer/10 (49723742 (estimated locally),0.05 per call) Dcm_Dsl_Supervisor_RequestRxPermission/16 (101726150 (estimated locally),0.09 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/15 (101726150 (estimated locally),0.09 per call) Det_ASR40_ReportError/14 (100207849 (estimated locally),0.09 per call) Det_ASR40_ReportError/14 (64100719 (estimated locally),0.06 per call) Det_ASR40_ReportError/14 (181135950 (estimated locally),0.17 per call) Det_ASR40_ReportError/14 (524845003 (estimated locally),0.49 per call) 
Dcm_RxConnections/0 (Dcm_RxConnections) @06d91090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_RxConnectionCancelReceive/8 (read)Dcm_Dsl_RxConnectionCancelReceive/8 (write)Dcm_StartOfReception/1 (write)Dcm_StartOfReception/1 (write)Dcm_StartOfReception/1 (read)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_CopyRxData/2 (write)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_Dsl_RxConnectionInitSingleRxConnection/11 (write)Dcm_CopyRxData/2 (read)Dcm_Dsl_RxConnectionGetState/5 (read)Dcm_CopyRxData/2 (read)Dcm_CopyRxData/2 (read)Dcm_CopyRxData/2 (read)Dcm_CopyRxData/2 (read)Dcm_CopyRxData/2 (write)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_CopyRxData/2 (read)Dcm_CopyRxData/2 (read)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_Dsl_SetupRxConnection/9 (write)Dcm_StartOfReception/1 (read)Dcm_StartOfReception/1 (write)Dcm_StartOfReception/1 (write)Dcm_StartOfReception/1 (write)Dcm_StartOfReception/1 (write)Dcm_StartOfReception/1 (write)Dcm_CopyRxData/2 (read)Dcm_CopyRxData/2 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)Dcm_TpRxIndication/4 (read)
  Availability: available
  Varpool flags:

;; Function Dcm_CopyRxData (Dcm_CopyRxData, funcdef_no=1, decl_uid=7194, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_CopyRxData/2
Dcm_CopyRxData (PduIdType DcmRxPduId, const struct PduInfoType * PduInfoPtr, PduLengthType * RxBufferSizePtr)
{
  PduLengthType AmountToCopy;
  BufReq_ReturnType DataCopyResult;
  unsigned char Dcm_Initialized.3_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  short unsigned int _6;
  uint8 * _7;
  long unsigned int _8;
  short unsigned int _9;
  long unsigned int _10;
  short unsigned int _11;
  short unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  short unsigned int _16;
  long unsigned int _17;
  unsigned char _18;
  long unsigned int _19;
  short unsigned int _20;
  Dcm_MsgItemType * _21;
  Dcm_MsgItemType * _22;
  long unsigned int _23;
  long unsigned int _24;
  short unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  short unsigned int _29;
  short unsigned int _30;
  short unsigned int _31;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG DataCopyResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.3_1 = Dcm_Initialized;
  if (Dcm_Initialized.3_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 2, 5);
  goto <bb 29>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DcmRxPduId_38(D) > 5)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 2, 6);
  goto <bb 29>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_39(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 303660150]:
  if (RxBufferSizePtr_40(D) == 0B)
    goto <bb 8>; [46.53%]
  else
    goto <bb 9>; [53.47%]

  <bb 8> [local count: 205393787]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 2, 7);
  goto <bb 29>; [100.00%]

  <bb 9> [local count: 162367082]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = (int) DcmRxPduId_38(D);
  _3 = Dcm_RxConnections[_2].Status;
  if (_3 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 10> [local count: 55204808]:
  _4 = Dcm_RxConnections[_2].RequestType;
  _5 = _4 + 255;
  if (_5 <= 1)
    goto <bb 13>; [41.00%]
  else
    goto <bb 11>; [59.00%]

  <bb 11> [local count: 32570837]:
  if (_4 == 6)
    goto <bb 13>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 12> [local count: 21496752]:
  if (_4 == 7)
    goto <bb 13>; [34.00%]
  else
    goto <bb 26>; [66.00%]

  <bb 13> [local count: 41016952]:
  # DEBUG BEGIN_STMT
  _6 = PduInfoPtr_39(D)->SduLength;
  if (_6 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 20508476]:
  _7 = PduInfoPtr_39(D)->SduDataPtr;
  if (_7 == 0B)
    goto <bb 15>; [30.00%]
  else
    goto <bb 16>; [70.00%]

  <bb 15> [local count: 26661019]:
  # DEBUG BEGIN_STMT
  # DEBUG DataCopyResult => 0
  # DEBUG BEGIN_STMT
  _8 = Dcm_RxConnections[_2].Buffer.Size;
  _9 = (short unsigned int) _8;
  _10 = Dcm_RxConnections[_2].Buffer.FilledLength;
  _11 = (short unsigned int) _10;
  _12 = _9 - _11;
  *RxBufferSizePtr_40(D) = _12;
  # DEBUG DataCopyResult => 0
  # DEBUG BEGIN_STMT
  goto <bb 28>; [100.00%]

  <bb 16> [local count: 14355933]:
  # DEBUG BEGIN_STMT
  _13 = Dcm_RxConnections[_2].Buffer.FilledLength;
  _14 = (long unsigned int) _6;
  _15 = _13 + _14;
  _16 = Dcm_RxConnections[_2].ExpectedRxLength;
  _17 = (long unsigned int) _16;
  if (_15 <= _17)
    goto <bb 18>; [50.00%]
  else
    goto <bb 27>; [50.00%]

  <bb 18> [local count: 7177967]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _18 = _4 + 250;
  if (_18 <= 1)
    goto <bb 19>; [41.00%]
  else
    goto <bb 22>; [59.00%]

  <bb 19> [local count: 2942966]:
  # DEBUG BEGIN_STMT
  if (_13 <= 1)
    goto <bb 20>; [41.00%]
  else
    goto <bb 22>; [59.00%]

  <bb 20> [local count: 1206616]:
  # DEBUG BEGIN_STMT
  _19 = _13 == 0 ? 2 : 1;
  if (_14 > _19)
    goto <bb 21>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 21> [local count: 603308]:
  # DEBUG BEGIN_STMT
  _20 = (short unsigned int) _13;
  AmountToCopy_42 = 2 - _20;
  # DEBUG AmountToCopy => AmountToCopy_42

  <bb 22> [local count: 7177967]:
  # AmountToCopy_33 = PHI <0(19), _6(18), _6(20), AmountToCopy_42(21)>
  # DEBUG AmountToCopy => AmountToCopy_33
  # DEBUG BEGIN_STMT
  if (_18 > 1)
    goto <bb 24>; [41.48%]
  else
    goto <bb 23>; [58.52%]

  <bb 23> [local count: 4200546]:
  if (AmountToCopy_33 != 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 25>; [50.00%]

  <bb 24> [local count: 5077694]:
  # DEBUG BEGIN_STMT
  _21 = Dcm_RxConnections[_2].Buffer.BufferPtr;
  _22 = _21 + _13;
  _23 = (long unsigned int) AmountToCopy_33;
  TS_MemCpy32 (_22, _7, _23);

  <bb 25> [local count: 7177967]:
  # DEBUG BEGIN_STMT
  _24 = Dcm_RxConnections[_2].Buffer.FilledLength;
  _25 = PduInfoPtr_39(D)->SduLength;
  _26 = (long unsigned int) _25;
  _27 = _24 + _26;
  Dcm_RxConnections[_2].Buffer.FilledLength = _27;
  # DEBUG BEGIN_STMT
  _28 = Dcm_RxConnections[_2].Buffer.Size;
  _29 = (short unsigned int) _28;
  _30 = (short unsigned int) _27;
  _31 = _29 - _30;
  *RxBufferSizePtr_40(D) = _31;
  # DEBUG BEGIN_STMT
  # DEBUG DataCopyResult => 0
  # DEBUG BEGIN_STMT
  goto <bb 28>; [100.00%]

  <bb 26> [local count: 121350131]:
  # DEBUG BEGIN_STMT
  *RxBufferSizePtr_40(D) = 0;
  # DEBUG DataCopyResult => 1
  # DEBUG BEGIN_STMT

  <bb 27> [local count: 128528097]:
  # DEBUG DataCopyResult => NULL
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].Status = 2;

  <bb 28> [local count: 162367082]:
  # DataCopyResult_53 = PHI <0(15), 1(27), 0(25)>
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 29> [local count: 1073741824]:
  # DataCopyResult_32 = PHI <1(3), 1(5), 1(8), DataCopyResult_53(28)>
  # DEBUG DataCopyResult => DataCopyResult_32
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return DataCopyResult_32;

}



;; Function Dcm_RxIndication (Dcm_RxIndication, funcdef_no=2, decl_uid=7200, cgraph_uid=3, symbol_order=3)

Modification phase of node Dcm_RxIndication/3
Dcm_RxIndication (PduIdType DcmRxPduId, struct PduInfoType * PduInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RxConnectionGetState (Dcm_Dsl_RxConnectionGetState, funcdef_no=4, decl_uid=6024, cgraph_uid=5, symbol_order=5)

Modification phase of node Dcm_Dsl_RxConnectionGetState/5
Dcm_Dsl_RxConnectionGetState (Dcm_BufferUserType RxConnectionId)
{
  Dcm_RxConnectionStatusType RxConnectionStatus;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => RxConnectionId_2(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_2(D);
  RxConnectionStatus_4 = Dcm_RxConnections[_1].Status;
  # DEBUG RxConnectionStatus => RxConnectionStatus_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RxConnectionStatus_4;

}



;; Function Dcm_Dsl_RxConnectionGetRxPduIdInformation (Dcm_Dsl_RxConnectionGetRxPduIdInformation, funcdef_no=5, decl_uid=6020, cgraph_uid=6, symbol_order=6)

Modification phase of node Dcm_Dsl_RxConnectionGetRxPduIdInformation/6
Dcm_Dsl_RxConnectionGetRxPduIdInformation (PduIdType RxPduId, struct Dcm_RxPduIdInfoType * RxPduIdInfo)
{
  int _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  short unsigned int _5;
  short unsigned int _6;
  unsigned char _7;
  short unsigned int _8;
  short unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  int _12;
  long unsigned int _13;
  int _14;
  unsigned char _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RxPduIdInfo_17(D)->RxConnectionIndex = RxPduId_18(D);
  # DEBUG BEGIN_STMT
  RxPduIdInfo_17(D)->RxConnectionId = RxPduId_18(D);
  # DEBUG BEGIN_STMT
  _1 = (int) RxPduId_18(D);
  _2 = Dcm_RxPduIdConfig[_1].MainConnectionIndex;
  RxPduIdInfo_17(D)->MainConnectionIndex = _2;
  # DEBUG BEGIN_STMT
  _3 = (int) _2;
  _4 = Dcm_MainConnectionConfig[_3].ProtocolIndex;
  RxPduIdInfo_17(D)->ProtocolIndex = _4;
  # DEBUG BEGIN_STMT
  _5 = (short unsigned int) _4;
  _6 = _5 + 12;
  RxPduIdInfo_17(D)->ProtocolId = _6;
  # DEBUG BEGIN_STMT
  _7 = Dcm_RxPduIdConfig[_1].BufferIndex;
  _8 = (short unsigned int) _7;
  RxPduIdInfo_17(D)->RxBufferId = _8;
  # DEBUG BEGIN_STMT
  _9 = RxPduId_18(D) + 6;
  RxPduIdInfo_17(D)->DefaultRxBufferId = _9;
  # DEBUG BEGIN_STMT
  _10 = Dcm_RxPduIdConfig[_1].AddressingType;
  RxPduIdInfo_17(D)->AddressingType = _10;
  # DEBUG BEGIN_STMT
  _11 = Dcm_RxPduIdConfig[_1].ChannelIdIndex;
  RxPduIdInfo_17(D)->ChannelIdIndex = _11;
  # DEBUG BEGIN_STMT
  _12 = (int) _7;
  _13 = Dcm_BufferConfig[_12].Size;
  RxPduIdInfo_17(D)->RxBufferSize = _13;
  # DEBUG BEGIN_STMT
  _14 = (int) _11;
  _15 = Dcm_RxComMChannelIDs[_14];
  RxPduIdInfo_17(D)->ComMChannelId = _15;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RxConnectionRxIndication (Dcm_Dsl_RxConnectionRxIndication, funcdef_no=6, decl_uid=6017, cgraph_uid=7, symbol_order=7)

Modification phase of node Dcm_Dsl_RxConnectionRxIndication/7
Dcm_Dsl_RxConnectionRxIndication (Dcm_BufferUserType RxConnectionId, Dcm_RequestTypeType RequestType, struct Dcm_BufferType RequestBuffer)
{
  short unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = RequestBuffer.BufferId;
  Dcm_Dsl_BufferGive (RxConnectionId_3(D), 14, _1);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_ProcessRequest (RxConnectionId_3(D), RequestType_5(D), RequestBuffer);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RxConnectionCancelReceive (Dcm_Dsl_RxConnectionCancelReceive, funcdef_no=7, decl_uid=6022, cgraph_uid=8, symbol_order=8)

Modification phase of node Dcm_Dsl_RxConnectionCancelReceive/8
Dcm_Dsl_RxConnectionCancelReceive (Dcm_BufferUserType RxConnectionId)
{
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PduRCancelReceiveCallNecessary => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionId_6(D);
  _2 = Dcm_RxConnections[_1].Status;
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG PduRCancelReceiveCallNecessary => 0
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Status = 2;
  # DEBUG BEGIN_STMT
  # DEBUG PduRCancelReceiveCallNecessary => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_DcmCancelReceive (RxConnectionId_6(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_SetupRxConnection (Dcm_Dsl_SetupRxConnection, funcdef_no=8, decl_uid=6031, cgraph_uid=9, symbol_order=9)

Modification phase of node Dcm_Dsl_SetupRxConnection/9
Dcm_Dsl_SetupRxConnection (Dcm_RxConnectionIndexType RxConnectionIndex, Dcm_RequestTypeType RequestType, struct Dcm_BufferType Buffer, PduLengthType ExpectedRxLength)
{
  int _1;
  short unsigned int _2;
  Dcm_MsgItemType * _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionIndex_5(D);
  Dcm_RxConnections[_1].RequestType = RequestType_7(D);
  # DEBUG BEGIN_STMT
  _2 = Buffer.BufferId;
  Dcm_RxConnections[_1].Buffer.BufferId = _2;
  # DEBUG BEGIN_STMT
  _3 = Buffer.BufferPtr;
  Dcm_RxConnections[_1].Buffer.BufferPtr = _3;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].ExpectedRxLength = ExpectedRxLength_11(D);
  # DEBUG BEGIN_STMT
  _4 = Buffer.Size;
  Dcm_RxConnections[_1].Buffer.Size = _4;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Buffer.FilledLength = 0;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Status = 1;
  return;

}



;; Function Dcm_Dsl_AllocateRxBuffer (Dcm_Dsl_AllocateRxBuffer, funcdef_no=9, decl_uid=6038, cgraph_uid=10, symbol_order=10)

Modification phase of node Dcm_Dsl_AllocateRxBuffer/10
Dcm_Dsl_AllocateRxBuffer (Dcm_BufferUserType RxConnectionId, PduLengthType RequestedSize, Dcm_RequestTypeType * RequestType, struct Dcm_BufferType * Buffer)
{
  Dcm_RequestTypeType LocalRequestType;
  BufReq_ReturnType BufferAllocationResult;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BufferAllocationResult => 1
  # DEBUG BEGIN_STMT
  LocalRequestType_7 = *RequestType_6(D);
  # DEBUG LocalRequestType => LocalRequestType_7
  # DEBUG BEGIN_STMT
  switch (LocalRequestType_7) <default: <L13> [33.33%], case 1 ... 2: <L0> [33.33%], case 6 ... 7: <L8> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) RequestedSize_12(D);
  BufferAllocationResult_14 = Dcm_Dsl_BufferAllocate (RxConnectionId_8(D), 1, _1, Buffer_9(D));
  # DEBUG BufferAllocationResult => BufferAllocationResult_14
  # DEBUG BEGIN_STMT
  if (BufferAllocationResult_14 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 178939075]:
  # DEBUG BEGIN_STMT
  if (BufferAllocationResult_14 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 5> [local count: 36217269]:
  # DEBUG BEGIN_STMT
  BufferAllocationResult_16 = Dcm_Dsl_BufferAllocate (RxConnectionId_8(D), 3, 2, Buffer_9(D));
  # DEBUG BufferAllocationResult => BufferAllocationResult_16
  # DEBUG BEGIN_STMT
  # DEBUG LocalRequestType => 6
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 357878150]:
<L8>:
  # DEBUG BEGIN_STMT
  BufferAllocationResult_11 = Dcm_Dsl_BufferAllocate (RxConnectionId_8(D), 3, 2, Buffer_9(D));
  # DEBUG BufferAllocationResult => BufferAllocationResult_11
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073634451]:
  # BufferAllocationResult_2 = PHI <BufferAllocationResult_16(5), BufferAllocationResult_11(6), 1(2), BufferAllocationResult_14(3), BufferAllocationResult_14(4)>
  # LocalRequestType_3 = PHI <6(5), LocalRequestType_7(6), LocalRequestType_7(2), LocalRequestType_7(3), 17(4)>
<L13>:
  # DEBUG LocalRequestType => LocalRequestType_3
  # DEBUG BufferAllocationResult => BufferAllocationResult_2
  # DEBUG BEGIN_STMT
  *RequestType_6(D) = LocalRequestType_3;
  # DEBUG BEGIN_STMT
  return BufferAllocationResult_2;

}



;; Function Dcm_StartOfReception (Dcm_StartOfReception, funcdef_no=0, decl_uid=7190, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_StartOfReception/1
Dcm_StartOfReception (PduIdType DcmRxPduId, PduLengthType TpSduLength, PduLengthType * RxBufferSizePtr)
{
  Dcm_MsgItemType * Buffer$BufferPtr;
  short unsigned int Buffer$BufferId;
  long unsigned int Buffer$Size;
  Dcm_RequestTypeType AcceptAs;
  struct Dcm_BufferType RxBuffer;
  BufReq_ReturnType BufferAllocationResult;
  unsigned char Dcm_Initialized.0_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char AcceptAs.2_5;
  unsigned char _6;
  long unsigned int _7;
  short unsigned int _8;
  long unsigned int _9;
  short unsigned int _10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BufferAllocationResult => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.0_1 = Dcm_Initialized;
  if (Dcm_Initialized.0_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845003]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 0, 5);
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 548896820]:
  # DEBUG BEGIN_STMT
  if (DcmRxPduId_19(D) > 5)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135950]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 0, 6);
  goto <bb 17>; [100.00%]

  <bb 6> [local count: 367760869]:
  # DEBUG BEGIN_STMT
  if (RxBufferSizePtr_20(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 64100719]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 0, 7);
  goto <bb 17>; [100.00%]

  <bb 8> [local count: 303660150]:
  # DEBUG BEGIN_STMT
  _2 = (int) DcmRxPduId_19(D);
  _3 = Dcm_RxConnections[_2].Status;
  if (_3 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 100207849]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 0, 6);
  goto <bb 17>; [100.00%]

  <bb 10> [local count: 203452300]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (TpSduLength_21(D) != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 11> [local count: 101726150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsl_Supervisor_RequestRxPermission (DcmRxPduId_19(D), TpSduLength_21(D), 1);
  AcceptAs = _4;
  # DEBUG BEGIN_STMT
  if (_4 != 17)
    goto <bb 12>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 12> [local count: 49723742]:
  # DEBUG BEGIN_STMT
  BufferAllocationResult_30 = Dcm_Dsl_AllocateRxBuffer (DcmRxPduId_19(D), TpSduLength_21(D), &AcceptAs, &RxBuffer);
  # DEBUG BufferAllocationResult => BufferAllocationResult_30
  # DEBUG BEGIN_STMT
  if (BufferAllocationResult_30 == 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 16408835]:
  # DEBUG BEGIN_STMT
  AcceptAs.2_5 = AcceptAs;
  # DEBUG RxConnectionIndex => DcmRxPduId_19(D)
  # DEBUG RequestType => AcceptAs.2_5
  Buffer$Size_17 = MEM[(struct  *)&RxBuffer];
  # DEBUG Buffer$Size => Buffer$Size_17
  Buffer$BufferId_22 = MEM[(struct  *)&RxBuffer + 8B];
  # DEBUG Buffer$BufferId => Buffer$BufferId_22
  Buffer$BufferPtr_28 = MEM[(struct  *)&RxBuffer + 12B];
  # DEBUG Buffer$BufferPtr => Buffer$BufferPtr_28
  # DEBUG ExpectedRxLength => TpSduLength_21(D)
  # DEBUG INLINE_ENTRY Dcm_Dsl_SetupRxConnection
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].RequestType = AcceptAs.2_5;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].Buffer.BufferId = Buffer$BufferId_22;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].Buffer.BufferPtr = Buffer$BufferPtr_28;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].ExpectedRxLength = TpSduLength_21(D);
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].Buffer.Size = Buffer$Size_17;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].Buffer.FilledLength = 0;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_2].Status = 1;
  # DEBUG RxConnectionIndex => NULL
  # DEBUG RequestType => NULL
  # DEBUG ExpectedRxLength => NULL
  # DEBUG D#1 => {CLOBBER}
  # DEBUG Buffer$Size => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG Buffer$BufferId => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG Buffer$BufferPtr => D#3
  # DEBUG BEGIN_STMT
  _6 = Dcm_RxConnections[_2].RequestType;
  Dcm_Dsl_Supervisor_IncomingReception (DcmRxPduId_19(D), _6);
  # DEBUG BEGIN_STMT
  _7 = RxBuffer.Size;
  _8 = (short unsigned int) _7;
  *RxBufferSizePtr_20(D) = _8;

  <bb 14> [local count: 101726150]:
  # BufferAllocationResult_11 = PHI <0(13), 1(11), BufferAllocationResult_30(12)>
  # DEBUG BufferAllocationResult => BufferAllocationResult_11
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  AcceptAs ={v} {CLOBBER};
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 101726150]:
  # DEBUG BEGIN_STMT
  # DEBUG BufferAllocationResult => 0
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferGetInfo (DcmRxPduId_19(D), 1, &RxBuffer);
  # DEBUG BEGIN_STMT
  _9 = RxBuffer.Size;
  _10 = (short unsigned int) _9;
  *RxBufferSizePtr_20(D) = _10;

  <bb 16> [local count: 203452300]:
  # BufferAllocationResult_12 = PHI <BufferAllocationResult_11(14), 0(15)>
  # DEBUG BufferAllocationResult => BufferAllocationResult_12
  RxBuffer ={v} {CLOBBER};

  <bb 17> [local count: 1073741824]:
  # BufferAllocationResult_13 = PHI <1(3), 1(5), 1(7), 1(9), BufferAllocationResult_12(16)>
  # DEBUG BufferAllocationResult => BufferAllocationResult_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return BufferAllocationResult_13;

}



;; Function Dcm_Dsl_RxConnectionInitSingleRxConnection (Dcm_Dsl_RxConnectionInitSingleRxConnection, funcdef_no=10, decl_uid=6033, cgraph_uid=11, symbol_order=11)

Modification phase of node Dcm_Dsl_RxConnectionInitSingleRxConnection/11
Dcm_Dsl_RxConnectionInitSingleRxConnection (Dcm_RxConnectionIndexType RxConnectionIndex)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) RxConnectionIndex_2(D);
  Dcm_RxConnections[_1].RequestType = 0;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Buffer.BufferId = 18;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Buffer.BufferPtr = 0B;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].ExpectedRxLength = 0;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Buffer.Size = 0;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Buffer.FilledLength = 0;
  # DEBUG BEGIN_STMT
  Dcm_RxConnections[_1].Status = 0;
  return;

}



;; Function Dcm_TpRxIndication (Dcm_TpRxIndication, funcdef_no=3, decl_uid=7197, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_TpRxIndication/4
Dcm_TpRxIndication (PduIdType DcmRxPduId, NotifResultType Result)
{
  struct Dcm_BufferType ReceivedBuffer;
  unsigned char Dcm_Initialized.4_1;
  int _2;
  short unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  short unsigned int _6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  unsigned char _11;
  unsigned char _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  Dcm_MsgItemType * _16;
  short unsigned int _17;
  unsigned char _18;
  short unsigned int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Initialized.4_1 = Dcm_Initialized;
  if (Dcm_Initialized.4_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 3, 5);
  goto <bb 26>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DcmRxPduId_25(D) > 5)
    goto <bb 6>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 5> [local count: 367760870]:
  if (Result_26(D) > 120)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 365016386]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 3, 6);
  goto <bb 26>; [100.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  if (Result_26(D) == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 8> [local count: 91940217]:
  _2 = (int) DcmRxPduId_25(D);
  _3 = Dcm_RxConnections[_2].ExpectedRxLength;
  _4 = (long unsigned int) _3;
  _5 = Dcm_RxConnections[_2].Buffer.FilledLength;
  if (_4 != _5)
    goto <bb 9>; [48.88%]
  else
    goto <bb 10>; [51.12%]

  <bb 9> [local count: 44940378]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _6 = Dcm_RxConnections[_2].Buffer.BufferId;
  Dcm_Dsl_BufferInitializeSingleBuffer (DcmRxPduId_25(D), _6);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_IncomingReceptionFinished (DcmRxPduId_25(D));
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionInitSingleRxConnection (DcmRxPduId_25(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 3, 10);
  goto <bb 26>; [100.00%]

  <bb 10> [local count: 138940057]:
  # DEBUG BEGIN_STMT
  _7 = (int) DcmRxPduId_25(D);
  _8 = Dcm_RxConnections[_7].RequestType;
  _9 = _8 + 255;
  if (_9 > 1)
    goto <bb 11>; [74.50%]
  else
    goto <bb 14>; [25.50%]

  <bb 11> [local count: 103510342]:
  if (_8 != 6)
    goto <bb 12>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 12> [local count: 68316826]:
  if (_8 != 7)
    goto <bb 13>; [48.88%]
  else
    goto <bb 14>; [51.12%]

  <bb 13> [local count: 33393264]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (53, 0, 3, 6);
  goto <bb 26>; [100.00%]

  <bb 14> [local count: 105546792]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (Result_26(D) == 0)
    goto <bb 15>; [67.00%]
  else
    goto <bb 24>; [33.00%]

  <bb 15> [local count: 70716351]:
  _10 = Dcm_RxConnections[_7].Status;
  if (_10 != 2)
    goto <bb 16>; [66.00%]
  else
    goto <bb 24>; [34.00%]

  <bb 16> [local count: 46672791]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 = Dcm_RxConnections[_7].RequestType;
  _12 = _11 + 250;
  if (_12 <= 1)
    goto <bb 17>; [41.00%]
  else
    goto <bb 20>; [59.00%]

  <bb 17> [local count: 19135844]:
  # DEBUG BEGIN_STMT
  ReceivedBuffer.Size = 2;
  # DEBUG BEGIN_STMT
  _13 = Dcm_RxConnections[_7].Buffer.FilledLength;
  if (_13 > 2)
    goto <bb 18>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 18> [local count: 9567922]:
  # DEBUG BEGIN_STMT
  ReceivedBuffer.FilledLength = 2;
  goto <bb 21>; [100.00%]

  <bb 19> [local count: 9567922]:
  # DEBUG BEGIN_STMT
  ReceivedBuffer.FilledLength = _13;
  goto <bb 21>; [100.00%]

  <bb 20> [local count: 27536947]:
  # DEBUG BEGIN_STMT
  _14 = Dcm_RxConnections[_7].Buffer.Size;
  ReceivedBuffer.Size = _14;
  # DEBUG BEGIN_STMT
  _15 = Dcm_RxConnections[_7].Buffer.FilledLength;
  ReceivedBuffer.FilledLength = _15;

  <bb 21> [local count: 46672791]:
  # DEBUG BEGIN_STMT
  _16 = Dcm_RxConnections[_7].Buffer.BufferPtr;
  ReceivedBuffer.BufferPtr = _16;
  # DEBUG BEGIN_STMT
  _17 = Dcm_RxConnections[_7].Buffer.BufferId;
  # DEBUG ReceivedBuffer$BufferId => _17
  # DEBUG BEGIN_STMT
  if (_17 <= 5)
    goto <bb 22>; [33.00%]
  else
    goto <bb 23>; [67.00%]

  <bb 22> [local count: 15402021]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_BufferChangeState (DcmRxPduId_25(D), 2, _17);

  <bb 23> [local count: 46672791]:
  # DEBUG BEGIN_STMT
  _18 = Dcm_RxConnections[_7].RequestType;
  MEM[(struct  *)&ReceivedBuffer + 8B] = _17;
  Dcm_Dsl_RxConnectionRxIndication (DcmRxPduId_25(D), _18, ReceivedBuffer);
  ReceivedBuffer ={v} {CLOBBER};
  # DEBUG D#4 => {CLOBBER}
  # DEBUG ReceivedBuffer$BufferId => D#4
  goto <bb 25>; [100.00%]

  <bb 24> [local count: 58874001]:
  # DEBUG BEGIN_STMT
  _19 = Dcm_RxConnections[_7].Buffer.BufferId;
  Dcm_Dsl_BufferInitializeSingleBuffer (DcmRxPduId_25(D), _19);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_Supervisor_IncomingReceptionFinished (DcmRxPduId_25(D));

  <bb 25> [local count: 105546792]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RxConnectionInitSingleRxConnection (DcmRxPduId_25(D));
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 26> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RxConnectionInit (Dcm_Dsl_RxConnectionInit, funcdef_no=11, decl_uid=6026, cgraph_uid=12, symbol_order=12)

Modification phase of node Dcm_Dsl_RxConnectionInit/12
Dcm_Dsl_RxConnectionInit ()
{
  uint16_least RxConnectionIndex;
  short unsigned int _1;

  <bb 2> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RxConnectionIndex => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) RxConnectionIndex_2;
  Dcm_Dsl_RxConnectionInitSingleRxConnection (_1);
  # DEBUG BEGIN_STMT
  RxConnectionIndex_6 = RxConnectionIndex_2 + 1;
  # DEBUG RxConnectionIndex => RxConnectionIndex_6

  <bb 4> [local count: 1073741824]:
  # RxConnectionIndex_2 = PHI <0(2), RxConnectionIndex_6(3)>
  # DEBUG RxConnectionIndex => RxConnectionIndex_2
  # DEBUG BEGIN_STMT
  if (RxConnectionIndex_2 != 6)
    goto <bb 3>; [85.71%]
  else
    goto <bb 5>; [14.29%]

  <bb 5> [local count: 153437707]:
  return;

}


