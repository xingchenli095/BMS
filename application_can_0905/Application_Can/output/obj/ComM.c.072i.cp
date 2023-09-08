
IPA constant propagation start:
Determining dynamic type for call: result_10 = ComM_IsValidConfig.part.0 (voidConfigPtr_6(D));
  Starting walk at: result_10 = ComM_IsValidConfig.part.0 (voidConfigPtr_6(D));
  instance pointer: voidConfigPtr_6(D)  Outer instance pointer: voidConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);
Determining dynamic type for call: ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  Starting walk at: ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  instance pointer: &ComM_RxEiraSignalStatus  Outer instance pointer: ComM_RxEiraSignalStatus offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  Starting walk at: ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  instance pointer: &ComM_RxComSignalEiraCfg  Outer instance pointer: ComM_RxComSignalEiraCfg offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  Starting walk at: ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  instance pointer: &ComM_RxEira  Outer instance pointer: ComM_RxEira offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: _1 = ComM_IsValidConfig (ConfigPtr_14(D));
  Starting walk at: _1 = ComM_IsValidConfig (ConfigPtr_14(D));
  instance pointer: ConfigPtr_14(D)  Outer instance pointer: ConfigPtr_14(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_IsValidConfig.part.0/73:
  Jump functions of caller  ComM_EvaluatePnc.part.0/72:
  Jump functions of caller  TS_PlatformSigIsValid/70:
  Jump functions of caller  Com_ReceiveSignal/68:
  Jump functions of caller  ComM_HsmMainInst/67:
  Jump functions of caller  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64:
  Jump functions of caller  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63:
  Jump functions of caller  CanSM_GetCurrentComMode/62:
  Jump functions of caller  ComM_HsmEmitInst/61:
  Jump functions of caller  ComM_EvaluateChannel/60:
  Jump functions of caller  ComM_RteNotificationDoAction/59:
  Jump functions of caller  ComM_HsmInit/55:
  Jump functions of caller  TS_MemSet32/54:
  Jump functions of caller  Det_ASR40_ReportError/53:
  Jump functions of caller  ComM_PNCWakeUpIndication_ChannelHandle/52:
  Jump functions of caller  ComM_PNCWakeUpIndication_PncHandle/51:
  Jump functions of caller  ComM_IsValidConfig/50:
    callsite  ComM_IsValidConfig/50 -> ComM_IsValidConfig.part.0/73 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  ComM_PncMainFunction/49:
    callsite  ComM_PncMainFunction/49 -> ComM_ProcessPncComSignals/48 : 
       param 0: CONST: &ComM_RxEiraSignalStatus
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: CONST: &ComM_RxComSignalEiraCfg
         value: 0x0, mask: 0xfffffffe
         VR  ~[0, 0]
       param 2: CONST: &ComM_RxEira
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  ComM_ProcessPncComSignals/48:
  Jump functions of caller  ComM_EB_GetPncRequestedComMode/47:
  Jump functions of caller  ComM_BitArrayIsBitSet/46:
  Jump functions of caller  ComM_BitArrayClear/45:
  Jump functions of caller  ComM_BitArraySet/44:
  Jump functions of caller  ComM_EvaluatePnc/43:
    callsite  ComM_EvaluatePnc/43 -> ComM_EvaluatePnc.part.0/72 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_EB_SetRequestedComMode/42:
  Jump functions of caller  ComM_EB_GetUserRequestedComMode/41:
  Jump functions of caller  ComM_BusSM_ModeIndication/40:
  Jump functions of caller  ComM_CommunicationAllowed/39:
  Jump functions of caller  ComM_EcuM_PNCWakeUpIndication/38:
    callsite  ComM_EcuM_PNCWakeUpIndication/38 -> ComM_PNCWakeUpIndication_ChannelHandle/52 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
    callsite  ComM_EcuM_PNCWakeUpIndication/38 -> ComM_PNCWakeUpIndication_PncHandle/51 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
  Jump functions of caller  ComM_EcuM_WakeUpIndication/37:
  Jump functions of caller  ComM_DCM_InactiveDiagnostic/36:
  Jump functions of caller  ComM_DCM_ActiveDiagnostic/35:
  Jump functions of caller  ComM_BusSM_BusSleepMode/34:
  Jump functions of caller  ComM_Nm_RestartIndication/33:
  Jump functions of caller  ComM_Nm_BusSleepMode/32:
  Jump functions of caller  ComM_Nm_PrepareBusSleepMode/31:
  Jump functions of caller  ComM_Nm_NetworkMode/30:
  Jump functions of caller  ComM_Nm_NetworkStartIndication/29:
  Jump functions of caller  ComM_ASR40_GetCurrentPNCComMode/28:
  Jump functions of caller  ComM_ASR40_GetCurrentComMode/27:
  Jump functions of caller  ComM_ASR40_GetRequestedComMode/26:
  Jump functions of caller  ComM_ASR40_GetMaxComMode/25:
  Jump functions of caller  ComM_ASR40_RequestComMode/24:
    callsite  ComM_ASR40_RequestComMode/24 -> ComM_RequestComModeChannel_Helper/23 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  ComM_ASR40_RequestComMode/24 -> ComM_RequestComModePNC_Helper/22 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_RequestComModeChannel_Helper/23:
  Jump functions of caller  ComM_RequestComModePNC_Helper/22:
    callsite  ComM_RequestComModePNC_Helper/22 -> ComM_EvaluatePnc/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_GetStatus/21:
  Jump functions of caller  ComM_GetState/20:
  Jump functions of caller  ComM_DeInit/19:
  Jump functions of caller  ComM_Init/18:
    callsite  ComM_Init/18 -> ComM_IsValidConfig/50 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering ComM_IsValidConfig for cloning; -fipa-cp-clone disabled.
Not considering ComM_PncMainFunction for cloning; -fipa-cp-clone disabled.
Not considering ComM_EB_GetPncRequestedComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_BitArrayIsBitSet for cloning; -fipa-cp-clone disabled.
Not considering ComM_BitArrayClear for cloning; -fipa-cp-clone disabled.
Not considering ComM_BitArraySet for cloning; -fipa-cp-clone disabled.
Not considering ComM_EvaluatePnc for cloning; -fipa-cp-clone disabled.
Not considering ComM_EB_SetRequestedComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_EB_GetUserRequestedComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_BusSM_ModeIndication for cloning; -fipa-cp-clone disabled.
Not considering ComM_CommunicationAllowed for cloning; -fipa-cp-clone disabled.
Not considering ComM_EcuM_PNCWakeUpIndication for cloning; -fipa-cp-clone disabled.
Not considering ComM_EcuM_WakeUpIndication for cloning; -fipa-cp-clone disabled.
Not considering ComM_DCM_InactiveDiagnostic for cloning; -fipa-cp-clone disabled.
Not considering ComM_DCM_ActiveDiagnostic for cloning; -fipa-cp-clone disabled.
Not considering ComM_BusSM_BusSleepMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Nm_RestartIndication for cloning; -fipa-cp-clone disabled.
Not considering ComM_Nm_BusSleepMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Nm_PrepareBusSleepMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Nm_NetworkMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Nm_NetworkStartIndication for cloning; -fipa-cp-clone disabled.
Not considering ComM_ASR40_GetCurrentPNCComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_ASR40_GetCurrentComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_ASR40_GetRequestedComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_ASR40_GetMaxComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_ASR40_RequestComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_GetStatus for cloning; -fipa-cp-clone disabled.
Not considering ComM_GetState for cloning; -fipa-cp-clone disabled.
Not considering ComM_DeInit for cloning; -fipa-cp-clone disabled.
Not considering ComM_Init for cloning; -fipa-cp-clone disabled.

overall_size: 920, max_new_size: 11001
 - context independent values, size: 68, time_benefit: 4.344132
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 16, time_benefit: 1.000000
 - context independent values, size: 26, time_benefit: 58.090909
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 22, time_benefit: 53.545455
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: ComM_IsValidConfig.part.0/73:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_EvaluatePnc.part.0/72:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_PNCWakeUpIndication_ChannelHandle/52:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         PNCHandleType [0, 2]
        AGGS VARIABLE
  Node: ComM_PNCWakeUpIndication_PncHandle/51:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         PNCHandleType [0, 2]
        AGGS VARIABLE
  Node: ComM_IsValidConfig/50:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_PncMainFunction/49:
  Node: ComM_ProcessPncComSignals/48:
    param [0]: &ComM_RxEiraSignalStatus [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         boolean * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: &ComM_RxComSignalEiraCfg [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffe
         const struct ComM_RxSignal_Struct_Type * ~[0B, 0B]
        AGGS VARIABLE
    param [2]: &ComM_RxEira [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [3]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
  Node: ComM_EB_GetPncRequestedComMode/47:
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
  Node: ComM_BitArrayIsBitSet/46:
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
  Node: ComM_BitArrayClear/45:
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
  Node: ComM_BitArraySet/44:
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
  Node: ComM_EvaluatePnc/43:
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
  Node: ComM_EB_SetRequestedComMode/42:
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
  Node: ComM_EB_GetUserRequestedComMode/41:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_BusSM_ModeIndication/40:
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
  Node: ComM_CommunicationAllowed/39:
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
  Node: ComM_EcuM_PNCWakeUpIndication/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_EcuM_WakeUpIndication/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_DCM_InactiveDiagnostic/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_DCM_ActiveDiagnostic/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_BusSM_BusSleepMode/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Nm_RestartIndication/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Nm_BusSleepMode/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Nm_PrepareBusSleepMode/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Nm_NetworkMode/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Nm_NetworkStartIndication/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_ASR40_GetCurrentPNCComMode/28:
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
  Node: ComM_ASR40_GetCurrentComMode/27:
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
  Node: ComM_ASR40_GetRequestedComMode/26:
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
  Node: ComM_ASR40_GetMaxComMode/25:
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
  Node: ComM_ASR40_RequestComMode/24:
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
  Node: ComM_RequestComModeChannel_Helper/23:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         ComM_ASR40_UserHandleType [0, 0]
        AGGS VARIABLE
  Node: ComM_RequestComModePNC_Helper/22:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         ComM_ASR40_UserHandleType [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_GetStatus/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_GetState/20:
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
  Node: ComM_DeInit/19:
  Node: ComM_Init/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of ComM_ProcessPncComSignals/48 for all known contexts.
    replacing param #0 SignalStatusPtr with const &ComM_RxEiraSignalStatus
    replacing param #1 SignalConfigurationPtr with const &ComM_RxComSignalEiraCfg
    replacing param #2 SignalMergedPtr with const &ComM_RxEira
    replacing param #3 SignalKind with const 0
Introduced new external node (__builtin_unreachable/75).
 - Creating a specialized node of ComM_RequestComModeChannel_Helper/23 for all known contexts.
    replacing param #0 User with const 0
 - Creating a specialized node of ComM_RequestComModePNC_Helper/22 for all known contexts.
    replacing param #0 User with const 0
Propagated bits info for function ComM_RequestComModePNC_Helper.constprop/77:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function ComM_RequestComModeChannel_Helper.constprop/76:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function ComM_ProcessPncComSignals.constprop/74:
 param 1: value = 0x0, mask = 0xfffffffe
 param 3: value = 0x0, mask = 0x0
Propagated bits info for function ComM_PNCWakeUpIndication_ChannelHandle/52:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function ComM_PNCWakeUpIndication_PncHandle/51:
 param 0: value = 0x0, mask = 0x3
Propagated bits info for function ComM_ProcessPncComSignals/48:
 param 1: value = 0x0, mask = 0xfffffffe
 param 3: value = 0x0, mask = 0x0
Propagated bits info for function ComM_RequestComModeChannel_Helper/23:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function ComM_RequestComModePNC_Helper/22:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: ComM_ProcessPncComSignals/48 ComM_RequestComModeChannel_Helper/23 ComM_RequestComModePNC_Helper/22
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_RequestComModePNC_Helper.constprop.0/77 (ComM_RequestComModePNC_Helper.constprop) @0700c000
  Type: function definition analyzed
  Visibility:
  References: ComM_ConfigPtr/15 (read)ComM_ConfigPtr/15 (read)
  Referring: 
  Clone of ComM_RequestComModePNC_Helper/22
  Availability: local
  Function flags: count:236223200 (estimated locally) local optimize_size
  Called by: ComM_ASR40_RequestComMode/24 (319359086 (estimated locally),0.30 per call) 
  Calls: ComM_EvaluatePnc/43 (955630223 (estimated locally),4.05 per call) 
ComM_RequestComModeChannel_Helper.constprop.0/76 (ComM_RequestComModeChannel_Helper.constprop) @06e8cc40
  Type: function definition analyzed
  Visibility:
  References: ComM_ConfigPtr/15 (read)ComM_HsmScComM/56 (addr)ComM_ConfigPtr/15 (read)
  Referring: 
  Clone of ComM_RequestComModeChannel_Helper/23
  Availability: local
  Function flags: count:118111602 (estimated locally) local optimize_size
  Called by: ComM_ASR40_RequestComMode/24 (319359086 (estimated locally),0.30 per call) 
  Calls: ComM_EvaluateChannel/60 (955630223 (estimated locally),8.09 per call) ComM_HsmEmitInst/61 (315357973 (estimated locally),2.67 per call) 
__builtin_unreachable/75 (__builtin_unreachable) @06e8c1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ProcessPncComSignals.constprop/74 (0 (precise),0.00 per call) 
  Calls: 
ComM_ProcessPncComSignals.constprop.0/74 (ComM_ProcessPncComSignals.constprop) @06f98d20
  Type: function definition analyzed
  Visibility:
  References: ComM_PncRxEiraMask/69 (read)ComM_PncID/65 (read)ComM_HsmScComMPnc/57 (addr)ComM_HsmScComMPnc/57 (addr)ComM_HsmScComMPnc/57 (addr)ComM_HsmScComMPnc/57 (addr)ComM_RxEiraSignalStatus/12 (addr)ComM_RxComSignalEiraCfg/66 (addr)ComM_RxEira/11 (addr)
  Referring: 
  Clone of ComM_ProcessPncComSignals/48
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: ComM_PncMainFunction/49 (357878150 (estimated locally),0.50 per call) 
  Calls: TS_MemSet32/54 (1073741823 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (217325345 (estimated locally),0.20 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (217325345 (estimated locally),0.20 per call) Com_ReceiveSignal/68 (217325345 (estimated locally),0.20 per call) ComM_HsmEmitInst/61 (24387562 (estimated locally),0.02 per call) __builtin_unreachable/75 (0 (precise),0.00 per call) ComM_HsmEmitInst/61 (15149849 (estimated locally),0.01 per call) ComM_HsmEmitInst/61 (15149849 (estimated locally),0.01 per call) 
ComM_IsValidConfig.part.0/73 (ComM_IsValidConfig.part.0) @06f98c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: ComM_LcfgSignature/71 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: ComM_IsValidConfig/50 (66369400 (estimated locally),0.06 per call) 
  Calls: 
ComM_EvaluatePnc.part.0/72 (ComM_EvaluatePnc.part.0) @06e52460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: ComM_HsmScComMPnc/57 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: ComM_EvaluatePnc/43 (40157945 (estimated locally),0.34 per call) 
  Calls: ComM_HsmEmitInst/61 (1073741824 (estimated locally),1.00 per call) 
ComM_LcfgSignature/71 (ComM_LcfgSignature) @06e63870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_IsValidConfig.part.0/73 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/70 (TS_PlatformSigIsValid) @06e660e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_IsValidConfig/50 (574129754 (estimated locally),0.53 per call) 
  Calls: 
ComM_PncRxEiraMask/69 (ComM_PncRxEiraMask) @06e633f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_ProcessPncComSignals.constprop.0/74 (read)
  Availability: not_available
  Varpool flags: read-only
Com_ReceiveSignal/68 (Com_ReceiveSignal) @06e52e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ProcessPncComSignals.constprop/74 (217325345 (estimated locally),0.20 per call) 
  Calls: 
ComM_HsmMainInst/67 (ComM_HsmMainInst) @06e52a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_PncMainFunction/49 (236235013 (estimated locally),0.33 per call) 
  Calls: 
ComM_RxComSignalEiraCfg/66 (ComM_RxComSignalEiraCfg) @06e5a948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PncMainFunction/49 (addr)ComM_ProcessPncComSignals.constprop.0/74 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_PncID/65 (ComM_PncID) @06e4a900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_EcuM_PNCWakeUpIndication/38 (read)ComM_ProcessPncComSignals.constprop.0/74 (read)ComM_EB_GetPncRequestedComMode/47 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0) @04d709a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ProcessPncComSignals.constprop/74 (217325345 (estimated locally),0.20 per call) ComM_PncMainFunction/49 (357878150 (estimated locally),0.50 per call) ComM_PncMainFunction/49 (357878150 (estimated locally),0.50 per call) ComM_EvaluatePnc/43 (118111601 (estimated locally),1.00 per call) ComM_CommunicationAllowed/39 (242722174 (estimated locally),0.23 per call) ComM_CommunicationAllowed/39 (125038696 (estimated locally),0.12 per call) ComM_DCM_InactiveDiagnostic/36 (274448410 (estimated locally),0.26 per call) ComM_DCM_ActiveDiagnostic/35 (274448410 (estimated locally),0.26 per call) 
  Calls: 
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0) @04d708c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ProcessPncComSignals.constprop/74 (217325345 (estimated locally),0.20 per call) ComM_PncMainFunction/49 (715756301 (estimated locally),1.00 per call) ComM_EvaluatePnc/43 (118111600 (estimated locally),1.00 per call) ComM_CommunicationAllowed/39 (242722174 (estimated locally),0.23 per call) ComM_CommunicationAllowed/39 (125038696 (estimated locally),0.12 per call) ComM_DCM_InactiveDiagnostic/36 (274448410 (estimated locally),0.26 per call) ComM_DCM_ActiveDiagnostic/35 (274448410 (estimated locally),0.26 per call) 
  Calls: 
CanSM_GetCurrentComMode/62 (CanSM_GetCurrentComMode) @06dd70e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ASR40_GetCurrentComMode/27 (1014686025 (estimated locally),2.41 per call) 
  Calls: 
ComM_HsmEmitInst/61 (ComM_HsmEmitInst) @06dd7a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_RequestComModeChannel_Helper.constprop/76 (315357973 (estimated locally),2.67 per call) ComM_ProcessPncComSignals.constprop/74 (24387562 (estimated locally),0.02 per call) ComM_ProcessPncComSignals.constprop/74 (15149849 (estimated locally),0.01 per call) ComM_ProcessPncComSignals.constprop/74 (15149849 (estimated locally),0.01 per call) ComM_EvaluatePnc/43 (77953656 (estimated locally),0.66 per call) ComM_EvaluatePnc.part.0/72 (1073741824 (estimated locally),1.00 per call) ComM_BusSM_ModeIndication/40 (149563954 (estimated locally),0.14 per call) ComM_CommunicationAllowed/39 (367760870 (estimated locally),0.34 per call) ComM_EcuM_WakeUpIndication/37 (367760870 (estimated locally),0.34 per call) ComM_DCM_InactiveDiagnostic/36 (274448410 (estimated locally),0.26 per call) ComM_DCM_ActiveDiagnostic/35 (274448410 (estimated locally),0.26 per call) ComM_Nm_RestartIndication/33 (367760870 (estimated locally),0.34 per call) ComM_Nm_BusSleepMode/32 (274448410 (estimated locally),0.26 per call) ComM_Nm_PrepareBusSleepMode/31 (274448410 (estimated locally),0.26 per call) ComM_Nm_NetworkMode/30 (274448410 (estimated locally),0.26 per call) ComM_Nm_NetworkStartIndication/29 (367760870 (estimated locally),0.34 per call) ComM_PNCWakeUpIndication_ChannelHandle/52 (955630223 (estimated locally),8.09 per call) ComM_PNCWakeUpIndication_PncHandle/51 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_EvaluateChannel/60 (ComM_EvaluateChannel) @06dd78c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_RequestComModeChannel_Helper.constprop/76 (955630223 (estimated locally),8.09 per call) 
  Calls: 
ComM_RteNotificationDoAction/59 (ComM_RteNotificationDoAction) @06dd71c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: ComM_Init/18 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
ComM_RteModeUser/58 (ComM_RteModeUser) @06dd3948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_Init/18 (write)
  Availability: not_available
  Varpool flags:
ComM_HsmScComMPnc/57 (ComM_HsmScComMPnc) @06dd3870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_EvaluatePnc/43 (addr)ComM_PncMainFunction/49 (addr)ComM_EvaluatePnc.part.0/72 (addr)ComM_PNCWakeUpIndication_PncHandle/51 (addr)ComM_ProcessPncComSignals.constprop.0/74 (addr)ComM_ProcessPncComSignals.constprop.0/74 (addr)ComM_ProcessPncComSignals.constprop.0/74 (addr)ComM_ProcessPncComSignals.constprop.0/74 (addr)ComM_PncMainFunction/49 (read)ComM_Init/18 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_HsmScComM/56 (ComM_HsmScComM) @06dd37e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_CommunicationAllowed/39 (addr)ComM_EcuM_WakeUpIndication/37 (addr)ComM_RequestComModeChannel_Helper.constprop.0/76 (addr)ComM_PNCWakeUpIndication_ChannelHandle/52 (addr)ComM_Nm_NetworkStartIndication/29 (addr)ComM_Nm_NetworkMode/30 (addr)ComM_Nm_PrepareBusSleepMode/31 (addr)ComM_Nm_BusSleepMode/32 (addr)ComM_Nm_RestartIndication/33 (addr)ComM_DCM_ActiveDiagnostic/35 (addr)ComM_BusSM_ModeIndication/40 (addr)ComM_DCM_InactiveDiagnostic/36 (addr)ComM_Init/18 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_HsmInit/55 (ComM_HsmInit) @06dd7000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Init/18 (81851339 (estimated locally),0.08 per call) ComM_Init/18 (248034361 (estimated locally),0.23 per call) 
  Calls: 
TS_MemSet32/54 (TS_MemSet32) @06dccee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ProcessPncComSignals.constprop/74 (1073741823 (estimated locally),1.00 per call) ComM_Init/18 (81851340 (estimated locally),0.08 per call) ComM_Init/18 (81851340 (estimated locally),0.08 per call) ComM_Init/18 (248034361 (estimated locally),0.23 per call) 
  Calls: 
Det_ASR40_ReportError/53 (Det_ASR40_ReportError) @06dcce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Init/18 (503584916 (estimated locally),0.47 per call) ComM_Init/18 (322122547 (estimated locally),0.30 per call) ComM_ASR40_RequestComMode/24 (155521489 (estimated locally),0.14 per call) ComM_ASR40_RequestComMode/24 (233896403 (estimated locally),0.22 per call) ComM_ASR40_RequestComMode/24 (364964846 (estimated locally),0.34 per call) ComM_BusSM_ModeIndication/40 (399332866 (estimated locally),0.37 per call) ComM_BusSM_ModeIndication/40 (524845004 (estimated locally),0.49 per call) ComM_CommunicationAllowed/39 (181135951 (estimated locally),0.17 per call) ComM_CommunicationAllowed/39 (524845004 (estimated locally),0.49 per call) ComM_EcuM_PNCWakeUpIndication/38 (41102285 (estimated locally),0.10 per call) ComM_EcuM_PNCWakeUpIndication/38 (194176118 (estimated locally),0.49 per call) ComM_EcuM_WakeUpIndication/37 (181135951 (estimated locally),0.17 per call) ComM_EcuM_WakeUpIndication/37 (524845004 (estimated locally),0.49 per call) ComM_DCM_InactiveDiagnostic/36 (274448410 (estimated locally),0.26 per call) ComM_DCM_InactiveDiagnostic/36 (524845004 (estimated locally),0.49 per call) ComM_DCM_ActiveDiagnostic/35 (274448410 (estimated locally),0.26 per call) ComM_DCM_ActiveDiagnostic/35 (524845004 (estimated locally),0.49 per call) ComM_BusSM_BusSleepMode/34 (365072220 (estimated locally),0.34 per call) ComM_BusSM_BusSleepMode/34 (708669605 (estimated locally),0.66 per call) ComM_Nm_RestartIndication/33 (181135951 (estimated locally),0.17 per call) ComM_Nm_RestartIndication/33 (524845004 (estimated locally),0.49 per call) ComM_Nm_BusSleepMode/32 (274448410 (estimated locally),0.26 per call) ComM_Nm_BusSleepMode/32 (524845004 (estimated locally),0.49 per call) ComM_Nm_PrepareBusSleepMode/31 (274448410 (estimated locally),0.26 per call) ComM_Nm_PrepareBusSleepMode/31 (524845004 (estimated locally),0.49 per call) ComM_Nm_NetworkMode/30 (274448410 (estimated locally),0.26 per call) ComM_Nm_NetworkMode/30 (524845004 (estimated locally),0.49 per call) ComM_Nm_NetworkStartIndication/29 (181135951 (estimated locally),0.17 per call) ComM_Nm_NetworkStartIndication/29 (524845004 (estimated locally),0.49 per call) ComM_ASR40_GetCurrentPNCComMode/28 (82771684 (estimated locally),0.08 per call) ComM_ASR40_GetCurrentPNCComMode/28 (233896403 (estimated locally),0.22 per call) ComM_ASR40_GetCurrentPNCComMode/28 (364964846 (estimated locally),0.34 per call) ComM_ASR40_GetCurrentComMode/27 (163357449 (estimated locally),0.39 per call) ComM_ASR40_GetCurrentComMode/27 (143262099 (estimated locally),0.34 per call) ComM_ASR40_GetRequestedComMode/26 (416158402 (estimated locally),0.39 per call) ComM_ASR40_GetRequestedComMode/26 (364964846 (estimated locally),0.34 per call) ComM_ASR40_GetMaxComMode/25 (116529713 (estimated locally),0.39 per call) ComM_ASR40_GetMaxComMode/25 (102194858 (estimated locally),0.34 per call) ComM_GetStatus/21 (187153200 (estimated locally),0.17 per call) ComM_GetState/20 (416158402 (estimated locally),0.39 per call) ComM_GetState/20 (364964846 (estimated locally),0.34 per call) ComM_DeInit/19 (524845004 (estimated locally),0.49 per call) 
  Calls: 
ComM_PNCWakeUpIndication_ChannelHandle/52 (ComM_PNCWakeUpIndication_ChannelHandle) @06dccc40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_DcmActiveStatus/1 (read)ComM_RequestedComMode/3 (read)ComM_PassiveStartupStatus/4 (write)ComM_HsmScComM/56 (addr)ComM_ConfigPtr/15 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: ComM_EcuM_PNCWakeUpIndication/38 (53450842 (estimated locally),0.13 per call) 
  Calls: ComM_HsmEmitInst/61 (955630223 (estimated locally),8.09 per call) 
ComM_PNCWakeUpIndication_PncHandle/51 (ComM_PNCWakeUpIndication_PncHandle) @06dcc8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_HsmScComMPnc/57 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ComM_EcuM_PNCWakeUpIndication/38 (53450842 (estimated locally),0.13 per call) 
  Calls: ComM_HsmEmitInst/61 (1073741824 (estimated locally),1.00 per call) 
ComM_IsValidConfig/50 (ComM_IsValidConfig) @06dcc620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: ComM_Init/18 (751619278 (estimated locally),0.70 per call) 
  Calls: ComM_IsValidConfig.part.0/73 (66369400 (estimated locally),0.06 per call) TS_PlatformSigIsValid/70 (574129754 (estimated locally),0.53 per call) 
ComM_PncMainFunction/49 (ComM_PncMainFunction) @06dcc460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComMPncMainfunctionRunning/17 (read)ComMPncMainfunctionRunning/17 (write)ComM_RxEiraSignalStatus/12 (addr)ComM_RxComSignalEiraCfg/66 (addr)ComM_RxEira/11 (addr)ComM_HsmScComMPnc/57 (read)ComM_HsmScComMPnc/57 (addr)ComMPncMainfunctionRunning/17 (write)
  Referring: 
  Availability: available
  Function flags: count:715756301 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmMainInst/67 (236235013 (estimated locally),0.33 per call) ComM_ProcessPncComSignals.constprop/74 (357878150 (estimated locally),0.50 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (357878150 (estimated locally),0.50 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (357878150 (estimated locally),0.50 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (715756301 (estimated locally),1.00 per call) 
ComM_ProcessPncComSignals/48 (ComM_ProcessPncComSignals) @06dcc2a0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_EB_GetPncRequestedComMode/47 (ComM_EB_GetPncRequestedComMode) @06dc7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ConfigPtr/15 (read)ComM_PncID/65 (read)ComM_PNCRequestedComMode/8 (read)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_BitArrayIsBitSet/46 (ComM_BitArrayIsBitSet) @06dc7a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_BitArrayClear/45 (ComM_BitArrayClear) @06dc78c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_BitArraySet/44 (ComM_BitArraySet) @06dc7700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_EvaluatePnc/43 (ComM_EvaluatePnc) @06dc7540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ConfigPtr/15 (read)ComM_ConfigPtr/15 (read)ComM_UserRequestedComMode/7 (read)ComM_HsmScComMPnc/57 (addr)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: ComM_RequestComModePNC_Helper.constprop/77 (955630223 (estimated locally),4.05 per call) 
  Calls: ComM_HsmEmitInst/61 (77953656 (estimated locally),0.66 per call) ComM_EvaluatePnc.part.0/72 (40157945 (estimated locally),0.34 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (118111601 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (118111600 (estimated locally),1.00 per call) 
ComM_EB_SetRequestedComMode/42 (ComM_EB_SetRequestedComMode) @06dc70e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_RequestedComMode/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_EB_GetUserRequestedComMode/41 (ComM_EB_GetUserRequestedComMode) @06d9eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_UserRequestedComMode/7 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_BusSM_ModeIndication/40 (ComM_BusSM_ModeIndication) @06d9ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_ChannelMode/5 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (149563954 (estimated locally),0.14 per call) Det_ASR40_ReportError/53 (399332866 (estimated locally),0.37 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_CommunicationAllowed/39 (ComM_CommunicationAllowed) @06d9ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_Communication_Allowed/2 (write)ComM_Communication_Allowed/2 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (367760870 (estimated locally),0.34 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (242722174 (estimated locally),0.23 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (242722174 (estimated locally),0.23 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (125038696 (estimated locally),0.12 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (125038696 (estimated locally),0.12 per call) Det_ASR40_ReportError/53 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_EcuM_PNCWakeUpIndication/38 (ComM_EcuM_PNCWakeUpIndication) @06d9e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncID/65 (read)ComM_InitStatus/14 (read)ComM_ConfigPtr/15 (read)
  Referring: 
  Availability: available
  Function flags: count:397250652 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_PNCWakeUpIndication_ChannelHandle/52 (53450842 (estimated locally),0.13 per call) ComM_PNCWakeUpIndication_PncHandle/51 (53450842 (estimated locally),0.13 per call) Det_ASR40_ReportError/53 (41102285 (estimated locally),0.10 per call) Det_ASR40_ReportError/53 (194176118 (estimated locally),0.49 per call) 
ComM_EcuM_WakeUpIndication/37 (ComM_EcuM_WakeUpIndication) @06d9e620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_DcmActiveStatus/1 (read)ComM_RequestedComMode/3 (read)ComM_PassiveStartupStatus/4 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (367760870 (estimated locally),0.34 per call) Det_ASR40_ReportError/53 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_DCM_InactiveDiagnostic/36 (ComM_DCM_InactiveDiagnostic) @06d9e380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_DcmActiveStatus/1 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (274448410 (estimated locally),0.26 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (274448410 (estimated locally),0.26 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_DCM_ActiveDiagnostic/35 (ComM_DCM_ActiveDiagnostic) @06d9e0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_DcmActiveStatus/1 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (274448410 (estimated locally),0.26 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/64 (274448410 (estimated locally),0.26 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/63 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_BusSM_BusSleepMode/34 (ComM_BusSM_BusSleepMode) @06d97e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (365072220 (estimated locally),0.34 per call) Det_ASR40_ReportError/53 (708669605 (estimated locally),0.66 per call) 
ComM_Nm_RestartIndication/33 (ComM_Nm_RestartIndication) @06d97b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_DcmActiveStatus/1 (read)ComM_RequestedComMode/3 (read)ComM_PassiveStartupStatus/4 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (367760870 (estimated locally),0.34 per call) Det_ASR40_ReportError/53 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_Nm_BusSleepMode/32 (ComM_Nm_BusSleepMode) @06d978c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_Nm_PrepareBusSleepMode/31 (ComM_Nm_PrepareBusSleepMode) @06d97620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_Nm_NetworkMode/30 (ComM_Nm_NetworkMode) @06d97380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (274448410 (estimated locally),0.26 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_Nm_NetworkStartIndication/29 (ComM_Nm_NetworkStartIndication) @06d970e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_DcmActiveStatus/1 (read)ComM_RequestedComMode/3 (read)ComM_PassiveStartupStatus/4 (write)ComM_HsmScComM/56 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/61 (367760870 (estimated locally),0.34 per call) Det_ASR40_ReportError/53 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_ASR40_GetCurrentPNCComMode/28 (ComM_ASR40_GetCurrentPNCComMode) @06d89e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_ConfigPtr/15 (read)ComM_PNCMode/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (82771684 (estimated locally),0.08 per call) Det_ASR40_ReportError/53 (233896403 (estimated locally),0.22 per call) Det_ASR40_ReportError/53 (364964846 (estimated locally),0.34 per call) 
ComM_ASR40_GetCurrentComMode/27 (ComM_ASR40_GetCurrentComMode) @06d89b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_ConfigPtr/15 (read)
  Referring: 
  Availability: available
  Function flags: count:421483080 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_GetCurrentComMode/62 (1014686025 (estimated locally),2.41 per call) Det_ASR40_ReportError/53 (163357449 (estimated locally),0.39 per call) Det_ASR40_ReportError/53 (143262099 (estimated locally),0.34 per call) 
ComM_ASR40_GetRequestedComMode/26 (ComM_ASR40_GetRequestedComMode) @06d897e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_UserRequestedComMode/7 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (416158402 (estimated locally),0.39 per call) Det_ASR40_ReportError/53 (364964846 (estimated locally),0.34 per call) 
ComM_ASR40_GetMaxComMode/25 (ComM_ASR40_GetMaxComMode) @06d89620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_ChanState/6 (read)ComM_Communication_Allowed/2 (read)ComM_ConfigPtr/15 (read)
  Referring: 
  Availability: available
  Function flags: count:300661540 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (116529713 (estimated locally),0.39 per call) Det_ASR40_ReportError/53 (102194858 (estimated locally),0.34 per call) 
ComM_ASR40_RequestComMode/24 (ComM_ASR40_RequestComMode) @06d89380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_UserRequestedComMode/7 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_RequestComModeChannel_Helper.constprop/76 (319359086 (estimated locally),0.30 per call) ComM_RequestComModePNC_Helper.constprop/77 (319359086 (estimated locally),0.30 per call) Det_ASR40_ReportError/53 (155521489 (estimated locally),0.14 per call) Det_ASR40_ReportError/53 (233896403 (estimated locally),0.22 per call) Det_ASR40_ReportError/53 (364964846 (estimated locally),0.34 per call) 
ComM_RequestComModeChannel_Helper/23 (ComM_RequestComModeChannel_Helper) @06d891c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_RequestComModePNC_Helper/22 (ComM_RequestComModePNC_Helper) @06d36e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_GetStatus/21 (ComM_GetStatus) @06d36b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (187153200 (estimated locally),0.17 per call) 
ComM_GetState/20 (ComM_GetState) @06d369a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_ChanState/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (416158402 (estimated locally),0.39 per call) Det_ASR40_ReportError/53 (364964846 (estimated locally),0.34 per call) 
ComM_DeInit/19 (ComM_DeInit) @06d367e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_InitStatus/14 (read)ComM_ChanState/6 (read)ComM_InitStatus/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/53 (524845004 (estimated locally),0.49 per call) 
ComM_Init/18 (ComM_Init) @06d36620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ConfigPtr/15 (write)ComM_RequestedComMode/3 (write)ComM_ChanState/6 (write)ComM_ChannelMode/5 (write)ComM_UserRequestedComMode/7 (addr)ComM_HsmScComM/56 (addr)ComM_Communication_Allowed/2 (write)ComM_DcmActiveStatus/1 (write)ComM_PassiveStartupStatus/4 (write)ComM_ConfigPtr/15 (read)ComM_HsmScComMPnc/57 (addr)ComM_RxEira/11 (write)ComM_TxEiraEraActive/10 (write)ComM_RxEiraSignalStatus/12 (write)ComM_PNCRequestedComMode/8 (addr)ComM_PNCMode/9 (addr)ComMPncMainfunctionRunning/17 (write)ComM_RteNotificationSuccessful/13 (write)ComM_RteModeUser/58 (write)ComM_RteNotificationDoActFkp/16 (write)ComM_RteNotificationDoAction/59 (addr)ComM_InitStatus/14 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemSet32/54 (81851340 (estimated locally),0.08 per call) TS_MemSet32/54 (81851340 (estimated locally),0.08 per call) ComM_HsmInit/55 (81851339 (estimated locally),0.08 per call) ComM_HsmInit/55 (248034361 (estimated locally),0.23 per call) TS_MemSet32/54 (248034361 (estimated locally),0.23 per call) Det_ASR40_ReportError/53 (503584916 (estimated locally),0.47 per call) ComM_IsValidConfig/50 (751619278 (estimated locally),0.70 per call) Det_ASR40_ReportError/53 (322122547 (estimated locally),0.30 per call) 
ComMPncMainfunctionRunning/17 (ComMPncMainfunctionRunning) @06d353f0
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: ComM_PncMainFunction/49 (write)ComM_PncMainFunction/49 (read)ComM_PncMainFunction/49 (write)ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_RteNotificationDoActFkp/16 (ComM_RteNotificationDoActFkp) @06d353a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_ConfigPtr/15 (ComM_ConfigPtr) @06d35360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_RequestComModeChannel_Helper.constprop.0/76 (read)ComM_RequestComModeChannel_Helper.constprop.0/76 (read)ComM_EvaluatePnc/43 (read)ComM_RequestComModePNC_Helper.constprop.0/77 (read)ComM_RequestComModePNC_Helper.constprop.0/77 (read)ComM_ASR40_GetCurrentComMode/27 (read)ComM_EB_GetPncRequestedComMode/47 (read)ComM_EcuM_PNCWakeUpIndication/38 (read)ComM_EvaluatePnc/43 (read)ComM_PNCWakeUpIndication_ChannelHandle/52 (read)ComM_ASR40_GetMaxComMode/25 (read)ComM_ASR40_GetCurrentPNCComMode/28 (read)ComM_Init/18 (write)ComM_Init/18 (read)
  Availability: available
  Varpool flags:
ComM_InitStatus/14 (ComM_InitStatus) @06d35318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_BusSM_ModeIndication/40 (read)ComM_EcuM_WakeUpIndication/37 (read)ComM_EcuM_PNCWakeUpIndication/38 (read)ComM_ASR40_RequestComMode/24 (read)ComM_DeInit/19 (write)ComM_CommunicationAllowed/39 (read)ComM_GetState/20 (read)ComM_GetStatus/21 (read)ComM_ASR40_GetMaxComMode/25 (read)ComM_ASR40_GetRequestedComMode/26 (read)ComM_ASR40_GetCurrentComMode/27 (read)ComM_ASR40_GetCurrentPNCComMode/28 (read)ComM_Nm_NetworkStartIndication/29 (read)ComM_Nm_NetworkMode/30 (read)ComM_Nm_PrepareBusSleepMode/31 (read)ComM_Nm_BusSleepMode/32 (read)ComM_Nm_RestartIndication/33 (read)ComM_BusSM_BusSleepMode/34 (read)ComM_DCM_ActiveDiagnostic/35 (read)ComM_DCM_InactiveDiagnostic/36 (read)ComM_DeInit/19 (read)ComM_Init/18 (write)
  Availability: available
  Varpool flags: initialized
ComM_RteNotificationSuccessful/13 (ComM_RteNotificationSuccessful) @06d352d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_RxEiraSignalStatus/12 (ComM_RxEiraSignalStatus) @06d35288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_PncMainFunction/49 (addr)ComM_Init/18 (write)ComM_ProcessPncComSignals.constprop.0/74 (addr)
  Availability: available
  Varpool flags:
ComM_RxEira/11 (ComM_RxEira) @06d35240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_PncMainFunction/49 (addr)ComM_Init/18 (write)ComM_ProcessPncComSignals.constprop.0/74 (addr)
  Availability: available
  Varpool flags:
ComM_TxEiraEraActive/10 (ComM_TxEiraEraActive) @06d351f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_PNCMode/9 (ComM_PNCMode) @06d351b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_ASR40_GetCurrentPNCComMode/28 (read)ComM_Init/18 (addr)
  Availability: available
  Varpool flags:
ComM_PNCRequestedComMode/8 (ComM_PNCRequestedComMode) @06d35168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_EB_GetPncRequestedComMode/47 (read)ComM_Init/18 (addr)
  Availability: available
  Varpool flags:
ComM_UserRequestedComMode/7 (ComM_UserRequestedComMode) @06d35120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_EvaluatePnc/43 (read)ComM_EB_GetUserRequestedComMode/41 (read)ComM_ASR40_GetRequestedComMode/26 (read)ComM_ASR40_RequestComMode/24 (write)ComM_Init/18 (addr)
  Availability: available
  Varpool flags:
ComM_ChanState/6 (ComM_ChanState) @06d350d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_GetState/20 (read)ComM_DeInit/19 (read)ComM_ASR40_GetMaxComMode/25 (read)ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_ChannelMode/5 (ComM_ChannelMode) @06d35090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_BusSM_ModeIndication/40 (write)ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_PassiveStartupStatus/4 (ComM_PassiveStartupStatus) @06d35048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_Nm_RestartIndication/33 (write)ComM_EcuM_WakeUpIndication/37 (write)ComM_PNCWakeUpIndication_ChannelHandle/52 (write)ComM_Nm_NetworkStartIndication/29 (write)ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_RequestedComMode/3 (ComM_RequestedComMode) @06d35000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_EcuM_WakeUpIndication/37 (read)ComM_EB_SetRequestedComMode/42 (write)ComM_PNCWakeUpIndication_ChannelHandle/52 (read)ComM_Nm_NetworkStartIndication/29 (read)ComM_Nm_RestartIndication/33 (read)ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_Communication_Allowed/2 (ComM_Communication_Allowed) @06ceef78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_ASR40_GetMaxComMode/25 (read)ComM_CommunicationAllowed/39 (write)ComM_CommunicationAllowed/39 (write)ComM_Init/18 (write)
  Availability: available
  Varpool flags:
ComM_DcmActiveStatus/1 (ComM_DcmActiveStatus) @06ceef30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: ComM_DCM_InactiveDiagnostic/36 (write)ComM_EcuM_WakeUpIndication/37 (read)ComM_PNCWakeUpIndication_ChannelHandle/52 (read)ComM_Nm_NetworkStartIndication/29 (read)ComM_Nm_RestartIndication/33 (read)ComM_DCM_ActiveDiagnostic/35 (write)ComM_Init/18 (write)
  Availability: available
  Varpool flags:

;; Function ComM_DeInit (ComM_DeInit, funcdef_no=1, decl_uid=6233, cgraph_uid=2, symbol_order=19)

Modification phase of node ComM_DeInit/19
ComM_DeInit ()
{
  uint8_least i;
  unsigned char ComM_InitStatus.1_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.1_1 = ComM_InitStatus;
  if (ComM_InitStatus.1_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 9> [local count: 548896821]:
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 2, 1);
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 520281345]:
  # DEBUG BEGIN_STMT
  _2 = ComM_ChanState[0];
  if (_2 != 0)
    goto <bb 6>; [5.50%]
  else
    goto <bb 10>; [94.50%]

  <bb 10> [local count: 491665871]:

  <bb 5> [local count: 1040562691]:
  # i_3 = PHI <0(9), 1(10)>
  # DEBUG i => i_3
  # DEBUG BEGIN_STMT
  if (i_3 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 548896820]:
  # i_6 = PHI <0(4), i_3(5)>
  # DEBUG BEGIN_STMT
  if (i_6 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 186624919]:
  # DEBUG BEGIN_STMT
  ComM_InitStatus = 0;

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_GetState (ComM_GetState, funcdef_no=2, decl_uid=6236, cgraph_uid=3, symbol_order=20)

Modification phase of node ComM_GetState/20
ComM_GetState (NetworkHandleType Channel, ComM_StateType * State)
{
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.2_1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.2_1 = ComM_InitStatus;
  if (ComM_InitStatus.2_1 != 1)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 364964846]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 52, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 708776978]:
  # DEBUG BEGIN_STMT
  if (State_6(D) == 0B)
    goto <bb 6>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 585237151]:
  if (Channel_7(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 416158402]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 52, 2);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 292618575]:
  # DEBUG BEGIN_STMT
  _2 = ComM_ChanState[0];
  *State_6(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 8> [local count: 1073741824]:
  # RetVal_3 = PHI <3(3), 1(6), 0(7)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function ComM_GetStatus (ComM_GetStatus, funcdef_no=3, decl_uid=6238, cgraph_uid=4, symbol_order=21)

Modification phase of node ComM_GetStatus/21
ComM_GetStatus (ComM_InitStatusType * Status)
{
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.3_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Status_4(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 3, 2);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  ComM_InitStatus.3_1 = ComM_InitStatus;
  *Status_4(D) = ComM_InitStatus.3_1;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 5> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), 0(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function ComM_ASR40_GetMaxComMode (ComM_ASR40_GetMaxComMode, funcdef_no=7, decl_uid=6244, cgraph_uid=8, symbol_order=25)

Modification phase of node ComM_ASR40_GetMaxComMode/25
ComM_ASR40_GetMaxComMode (ComM_ASR40_UserHandleType User, ComM_ASR40_ModeType * ComMode)
{
  ComM_StateType ComM_ChanState_local;
  boolean comAllowed;
  uint8 Channel;
  uint8_least i;
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.19_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  sizetype _5;
  const uint8 * _6;
  int _7;
  const struct ComM_ConfigType * ComM_ConfigPtr.23_8;
  short unsigned int _9;
  unsigned char _10;
  short unsigned int _11;
  unsigned char _12;
  unsigned char _13;
  long unsigned int _14;

  <bb 2> [local count: 300661540]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG comAllowed => 0
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.19_1 = ComM_InitStatus;
  if (ComM_InitStatus.19_1 != 1)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 102194858]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 6, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 198466683]:
  # DEBUG BEGIN_STMT
  if (ComMode_20(D) == 0B)
    goto <bb 6>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 163873940]:
  if (User_21(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 116529713]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 6, 2);
  goto <bb 14>; [100.00%]

  <bb 7> [local count: 81936970]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *ComMode_20(D) = 2;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  # DEBUG NoComInhibitionStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG WkUpInhibitionStatus => 0
  # DEBUG BEGIN_STMT
  _2 = ComM_ConfigPtr.23_8->pChannelsOfAllUser;
  _3 = (long unsigned int) _11;
  _4 = _3 + i_16;
  _5 = _2 + _4;
  _6 = ComM_ConfigPtr.23_8 + _5;
  Channel_23 = *_6;
  # DEBUG Channel => Channel_23
  # DEBUG BEGIN_STMT
  _7 = (int) Channel_23;
  ComM_ChanState_local_24 = ComM_ChanState[_7];
  # DEBUG ComM_ChanState_local => ComM_ChanState_local_24
  # DEBUG BEGIN_STMT
  comAllowed_25 = ComM_Communication_Allowed[_7];
  # DEBUG comAllowed => comAllowed_25
  # DEBUG BEGIN_STMT
  if (ComM_ChanState_local_24 <= 1)
    goto <bb 9>; [41.00%]
  else
    goto <bb 11>; [59.00%]

  <bb 9> [local count: 416021270]:
  if (comAllowed_25 == 0)
    goto <bb 10>; [5.50%]
  else
    goto <bb 11>; [94.50%]

  <bb 10> [local count: 22881170]:
  # DEBUG BEGIN_STMT
  *ComMode_20(D) = 0;
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 11> [local count: 991804855]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  i_27 = i_16 + 1;
  # DEBUG i => i_27

  <bb 12> [local count: 1073741824]:
  # i_16 = PHI <0(7), i_27(11)>
  # DEBUG i => i_16
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.23_8 = ComM_ConfigPtr;
  _9 = ComM_ConfigPtr.23_8->NumChannelsOfAllUser[1];
  _10 = (unsigned char) _9;
  _11 = ComM_ConfigPtr.23_8->NumChannelsOfAllUser[0];
  _12 = (unsigned char) _11;
  _13 = _10 - _12;
  _14 = (long unsigned int) _13;
  if (_14 > i_16)
    goto <bb 8>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 300661541]:
  # RetVal_15 = PHI <3(3), 1(6), 0(12), 0(10)>
  # DEBUG RetVal => RetVal_15
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_15;

}



;; Function ComM_ASR40_GetRequestedComMode (ComM_ASR40_GetRequestedComMode, funcdef_no=8, decl_uid=6247, cgraph_uid=9, symbol_order=26)

Modification phase of node ComM_ASR40_GetRequestedComMode/26
ComM_ASR40_GetRequestedComMode (ComM_ASR40_UserHandleType User, ComM_ASR40_ModeType * ComMode)
{
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.25_1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.25_1 = ComM_InitStatus;
  if (ComM_InitStatus.25_1 != 1)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 364964846]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 7, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 708776978]:
  # DEBUG BEGIN_STMT
  if (ComMode_6(D) == 0B)
    goto <bb 6>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 585237151]:
  if (User_7(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 416158402]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 7, 2);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 292618575]:
  # DEBUG BEGIN_STMT
  _2 = ComM_UserRequestedComMode[0];
  *ComMode_6(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 8> [local count: 1073741824]:
  # RetVal_3 = PHI <3(3), 1(6), 0(7)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function ComM_ASR40_GetCurrentComMode (ComM_ASR40_GetCurrentComMode, funcdef_no=9, decl_uid=6250, cgraph_uid=10, symbol_order=27)

Modification phase of node ComM_ASR40_GetCurrentComMode/27
ComM_ASR40_GetCurrentComMode (ComM_ASR40_UserHandleType User, ComM_ASR40_ModeType * ComMode)
{
  const uint8 channel;
  ComM_ASR40_ModeType ResultComMode;
  ComM_ASR40_ModeType localComMode;
  uint8_least i;
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.26_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  sizetype _5;
  const uint8 * _6;
  unsigned char localComMode.30_7;
  const struct ComM_ConfigType * ComM_ConfigPtr.31_8;
  short unsigned int _10;
  unsigned char _11;
  short unsigned int _13;
  unsigned char _14;
  unsigned char _15;
  long unsigned int _16;

  <bb 2> [local count: 421483080]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.26_1 = ComM_InitStatus;
  if (ComM_InitStatus.26_1 != 1)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 143262099]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 8, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 13>; [100.00%]

  <bb 4> [local count: 278220981]:
  # DEBUG BEGIN_STMT
  if (ComMode_27(D) == 0B)
    goto <bb 6>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 229727064]:
  if (User_28(D) != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 14> [local count: 114863532]:
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 163357449]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 8, 2);
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _2 = ComM_ConfigPtr.31_8->pChannelsOfAllUser;
  _3 = (long unsigned int) _13;
  _4 = _3 + i_20;
  _5 = _2 + _4;
  _6 = ComM_ConfigPtr.31_8 + _5;
  channel_29 = *_6;
  # DEBUG channel => channel_29
  # DEBUG BEGIN_STMT
  RetVal_31 = CanSM_GetCurrentComMode (channel_29, &localComMode);
  # DEBUG RetVal => RetVal_31
  # DEBUG BEGIN_STMT
  if (RetVal_31 != 0)
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  localComMode.30_7 = localComMode;
  ResultComMode_9 = MIN_EXPR <localComMode.30_7, ResultComMode_21>;
  # DEBUG ResultComMode => ResultComMode_9
  # DEBUG BEGIN_STMT
  i_32 = i_20 + 1;
  # DEBUG i => i_32

  <bb 9> [local count: 1073741824]:
  # RetVal_17 = PHI <0(8), 1(14)>
  # i_20 = PHI <i_32(8), 0(14)>
  # ResultComMode_21 = PHI <ResultComMode_9(8), 2(14)>
  # DEBUG ResultComMode => ResultComMode_21
  # DEBUG i => i_20
  # DEBUG RetVal => RetVal_17
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.31_8 = ComM_ConfigPtr;
  _10 = ComM_ConfigPtr.31_8->NumChannelsOfAllUser[1];
  _11 = (unsigned char) _10;
  _13 = ComM_ConfigPtr.31_8->NumChannelsOfAllUser[0];
  _14 = (unsigned char) _13;
  _15 = _11 - _14;
  _16 = (long unsigned int) _15;
  if (_16 > i_20)
    goto <bb 7>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863532]:
  # RetVal_18 = PHI <RetVal_31(7), RetVal_17(9)>
  # ResultComMode_12 = PHI <ResultComMode_21(7), ResultComMode_21(9)>
  # DEBUG RetVal => RetVal_18
  # DEBUG BEGIN_STMT
  if (RetVal_18 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 57431766]:
  # DEBUG BEGIN_STMT
  *ComMode_27(D) = ResultComMode_12;

  <bb 12> [local count: 114863532]:
  localComMode ={v} {CLOBBER};

  <bb 13> [local count: 421483080]:
  # RetVal_19 = PHI <3(3), 1(6), RetVal_18(12)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_19;

}



;; Function ComM_ASR40_GetCurrentPNCComMode (ComM_ASR40_GetCurrentPNCComMode, funcdef_no=10, decl_uid=6253, cgraph_uid=11, symbol_order=28)

Modification phase of node ComM_ASR40_GetCurrentPNCComMode/28
ComM_ASR40_GetCurrentPNCComMode (ComM_ASR40_UserHandleType User, ComM_ASR40_ModeType * ComMode)
{
  PNCHandleType numPncs;
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.33_1;
  const struct ComM_ConfigType * ComM_ConfigPtr.34_2;
  short unsigned int _3;
  short unsigned int _4;
  long unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  sizetype _8;
  const uint16 * _9;
  short unsigned int _10;
  int _11;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.33_1 = ComM_InitStatus;
  if (ComM_InitStatus.33_1 != 1)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 364964846]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 254, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 708776979]:
  # DEBUG BEGIN_STMT
  if (User_16(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 233896403]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 254, 2);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 474880575]:
  # DEBUG BEGIN_STMT
  if (ComMode_17(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 82771684]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 254, 2);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 392108891]:
  # DEBUG BEGIN_STMT
  # DEBUG numPncs => 0
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.34_2 = ComM_ConfigPtr;
  _3 = ComM_ConfigPtr.34_2->NumPncOfAllUser[1];
  _4 = ComM_ConfigPtr.34_2->NumPncOfAllUser[0];
  numPncs_18 = _3 - _4;
  # DEBUG numPncs => numPncs_18
  # DEBUG BEGIN_STMT
  if (numPncs_18 == 0)
    goto <bb 11>; [35.00%]
  else
    goto <bb 9>; [65.00%]

  <bb 9> [local count: 254870779]:
  # DEBUG BEGIN_STMT
  if (numPncs_18 != 1)
    goto <bb 11>; [51.11%]
  else
    goto <bb 10>; [48.89%]

  <bb 10> [local count: 124606324]:
  # DEBUG BEGIN_STMT
  _5 = ComM_ConfigPtr.34_2->pPncOfAllUser;
  _6 = (unsigned int) _4;
  _7 = _6 * 2;
  _8 = _5 + _7;
  _9 = ComM_ConfigPtr.34_2 + _8;
  _10 = *_9;
  _11 = (int) _10;
  _12 = ComM_PNCMode[_11];
  *ComMode_17(D) = _12;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 11> [local count: 1073741824]:
  # RetVal_13 = PHI <3(3), 1(5), 1(7), 4(8), 3(9), 0(10)>
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_13;

}



;; Function ComM_Nm_NetworkStartIndication (ComM_Nm_NetworkStartIndication, funcdef_no=11, decl_uid=6269, cgraph_uid=12, symbol_order=29)

Modification phase of node ComM_Nm_NetworkStartIndication/29
ComM_Nm_NetworkStartIndication (NetworkHandleType Channel)
{
  boolean PassiveStartupStatus;
  unsigned char ComM_InitStatus.39_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PassiveStartupStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.39_1 = ComM_InitStatus;
  if (ComM_InitStatus.39_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 21, 1);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_6(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 21, 2);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  PassiveStartupStatus_7 = ComM_DcmActiveStatus[0];
  # DEBUG PassiveStartupStatus => PassiveStartupStatus_7
  # DEBUG BEGIN_STMT
  _2 = ComM_RequestedComMode[0];
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 183880435]:
  if (PassiveStartupStatus_7 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  ComM_PassiveStartupStatus[0] = 1;

  <bb 9> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 6);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_Nm_NetworkMode (ComM_Nm_NetworkMode, funcdef_no=12, decl_uid=6271, cgraph_uid=13, symbol_order=30)

Modification phase of node ComM_Nm_NetworkMode/30
ComM_Nm_NetworkMode (NetworkHandleType Channel)
{
  unsigned char ComM_InitStatus.40_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.40_1 = ComM_InitStatus;
  if (ComM_InitStatus.40_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 24, 1);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_4(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 24, 2);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 8);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_Nm_PrepareBusSleepMode (ComM_Nm_PrepareBusSleepMode, funcdef_no=13, decl_uid=6273, cgraph_uid=14, symbol_order=31)

Modification phase of node ComM_Nm_PrepareBusSleepMode/31
ComM_Nm_PrepareBusSleepMode (NetworkHandleType Channel)
{
  unsigned char ComM_InitStatus.41_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.41_1 = ComM_InitStatus;
  if (ComM_InitStatus.41_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 25, 1);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_4(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 25, 2);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 8);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_Nm_BusSleepMode (ComM_Nm_BusSleepMode, funcdef_no=14, decl_uid=6275, cgraph_uid=15, symbol_order=32)

Modification phase of node ComM_Nm_BusSleepMode/32
ComM_Nm_BusSleepMode (NetworkHandleType Channel)
{
  unsigned char ComM_InitStatus.42_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.42_1 = ComM_InitStatus;
  if (ComM_InitStatus.42_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 26, 1);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_4(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 26, 2);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 8);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_Nm_RestartIndication (ComM_Nm_RestartIndication, funcdef_no=15, decl_uid=6277, cgraph_uid=16, symbol_order=33)

Modification phase of node ComM_Nm_RestartIndication/33
ComM_Nm_RestartIndication (NetworkHandleType Channel)
{
  boolean PassiveStartupStatus;
  unsigned char ComM_InitStatus.43_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG PassiveStartupStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.43_1 = ComM_InitStatus;
  if (ComM_InitStatus.43_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 27, 1);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_6(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 27, 2);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  PassiveStartupStatus_7 = ComM_DcmActiveStatus[0];
  # DEBUG PassiveStartupStatus => PassiveStartupStatus_7
  # DEBUG BEGIN_STMT
  _2 = ComM_RequestedComMode[0];
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 183880435]:
  if (PassiveStartupStatus_7 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  ComM_PassiveStartupStatus[0] = 1;

  <bb 9> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 6);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_BusSM_BusSleepMode (ComM_BusSM_BusSleepMode, funcdef_no=16, decl_uid=6405, cgraph_uid=17, symbol_order=34)

Modification phase of node ComM_BusSM_BusSleepMode/34
ComM_BusSM_BusSleepMode (NetworkHandleType Channel)
{
  unsigned char ComM_InitStatus.44_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.44_1 = ComM_InitStatus;
  if (ComM_InitStatus.44_1 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 246, 1);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 246, 2);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_DCM_ActiveDiagnostic (ComM_DCM_ActiveDiagnostic, funcdef_no=17, decl_uid=6391, cgraph_uid=18, symbol_order=35)

Modification phase of node ComM_DCM_ActiveDiagnostic/35
ComM_DCM_ActiveDiagnostic (NetworkHandleType Channel)
{
  unsigned char ComM_InitStatus.45_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.45_1 = ComM_InitStatus;
  if (ComM_InitStatus.45_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 31, 1);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_4(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 31, 2);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_DcmActiveStatus[0] = 1;
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 9);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_DCM_InactiveDiagnostic (ComM_DCM_InactiveDiagnostic, funcdef_no=18, decl_uid=6393, cgraph_uid=19, symbol_order=36)

Modification phase of node ComM_DCM_InactiveDiagnostic/36
ComM_DCM_InactiveDiagnostic (NetworkHandleType Channel)
{
  unsigned char ComM_InitStatus.46_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.46_1 = ComM_InitStatus;
  if (ComM_InitStatus.46_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 32, 1);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_4(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 32, 2);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 274448410]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_DcmActiveStatus[0] = 0;
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 9);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_EcuM_WakeUpIndication (ComM_EcuM_WakeUpIndication, funcdef_no=19, decl_uid=6395, cgraph_uid=20, symbol_order=37)

Modification phase of node ComM_EcuM_WakeUpIndication/37
ComM_EcuM_WakeUpIndication (NetworkHandleType Channel)
{
  boolean PassiveStartupStatus;
  unsigned char ComM_InitStatus.47_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PassiveStartupStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.47_1 = ComM_InitStatus;
  if (ComM_InitStatus.47_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 42, 1);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_6(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 42, 2);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  PassiveStartupStatus_7 = ComM_DcmActiveStatus[0];
  # DEBUG PassiveStartupStatus => PassiveStartupStatus_7
  # DEBUG BEGIN_STMT
  _2 = ComM_RequestedComMode[0];
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 7> [local count: 183880435]:
  if (PassiveStartupStatus_7 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 91940217]:
  # DEBUG BEGIN_STMT
  ComM_PassiveStartupStatus[0] = 1;

  <bb 9> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 6);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_EcuM_PNCWakeUpIndication (ComM_EcuM_PNCWakeUpIndication, funcdef_no=20, decl_uid=6397, cgraph_uid=21, symbol_order=38)

Modification phase of node ComM_EcuM_PNCWakeUpIndication/38
ComM_EcuM_PNCWakeUpIndication (PNCHandleType PNCid)
{
  PNCHandleType PncIDIdx;
  int _1;
  short unsigned int _2;
  unsigned char ComM_InitStatus.49_4;
  const struct ComM_ConfigType * ComM_ConfigPtr.50_5;
  unsigned char _6;

  <bb 2> [local count: 397250652]:
  # DEBUG BEGIN_STMT
  # DEBUG PncIDIdx => 0
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PncIDIdx => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = (int) PncIDIdx_7;
  _2 = ComM_PncID[_1];
  if (_2 == PNCid_10(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 676491173]:
  # DEBUG BEGIN_STMT
  PncIDIdx_11 = PncIDIdx_7 + 1;
  # DEBUG PncIDIdx => PncIDIdx_11

  <bb 5> [local count: 1073741824]:
  # PncIDIdx_7 = PHI <0(2), PncIDIdx_11(4)>
  # DEBUG PncIDIdx => PncIDIdx_7
  # DEBUG BEGIN_STMT
  if (PncIDIdx_7 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 6>; [33.33%]

  <bb 6> [local count: 397250652]:
  # PncIDIdx_3 = PHI <PncIDIdx_7(3), PncIDIdx_7(5)>
  # DEBUG BEGIN_STMT
  ComM_InitStatus.49_4 = ComM_InitStatus;
  if (ComM_InitStatus.49_4 != 1)
    goto <bb 7>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 7> [local count: 194176118]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 55, 1);
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 203074533]:
  # DEBUG BEGIN_STMT
  if (PncIDIdx_3 == 2)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 41102285]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 55, 2);
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 161972247]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.50_5 = ComM_ConfigPtr;
  _6 = ComM_ConfigPtr.50_5->ComMPncEnabled;
  if (_6 != 0)
    goto <bb 11>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 11> [local count: 53450842]:
  # DEBUG BEGIN_STMT
  ComM_PNCWakeUpIndication_PncHandle (PncIDIdx_3);
  # DEBUG BEGIN_STMT
  ComM_PNCWakeUpIndication_ChannelHandle (PncIDIdx_3);

  <bb 12> [local count: 397250652]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_CommunicationAllowed (ComM_CommunicationAllowed, funcdef_no=21, decl_uid=6400, cgraph_uid=22, symbol_order=39)

Modification phase of node ComM_CommunicationAllowed/39
ComM_CommunicationAllowed (NetworkHandleType Channel, boolean Allowed)
{
  unsigned char ComM_InitStatus.57_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.57_1 = ComM_InitStatus;
  if (ComM_InitStatus.57_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 53, 1);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Channel_5(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 53, 2);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (Allowed_6(D) == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 125038696]:
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_Communication_Allowed[0] = 1;
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 242722174]:
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComM_Communication_Allowed[0] = 0;
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();

  <bb 9> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 4);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_BusSM_ModeIndication (ComM_BusSM_ModeIndication, funcdef_no=22, decl_uid=6403, cgraph_uid=23, symbol_order=40)

Modification phase of node ComM_BusSM_ModeIndication/40
ComM_BusSM_ModeIndication (NetworkHandleType Channel, ComM_ASR40_ModeType * ComMode)
{
  unsigned char ComM_InitStatus.58_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.58_1 = ComM_InitStatus;
  if (ComM_InitStatus.58_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 51, 1);
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (ComMode_5(D) == 0B)
    goto <bb 6>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 453224104]:
  if (Channel_6(D) != 0)
    goto <bb 6>; [67.00%]
  else
    goto <bb 7>; [33.00%]

  <bb 6> [local count: 399332866]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 51, 2);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 149563954]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = *ComMode_5(D);
  ComM_ChannelMode[0] = _2;
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, 0, 0);

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_EB_GetUserRequestedComMode (ComM_EB_GetUserRequestedComMode, funcdef_no=23, decl_uid=6702, cgraph_uid=24, symbol_order=41)

Modification phase of node ComM_EB_GetUserRequestedComMode/41
ComM_EB_GetUserRequestedComMode (uint8 User)
{
  ComM_ASR40_ModeType ret;
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) User_2(D);
  ret_4 = ComM_UserRequestedComMode[_1];
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  return ret_4;

}



;; Function ComM_EB_SetRequestedComMode (ComM_EB_SetRequestedComMode, funcdef_no=24, decl_uid=6705, cgraph_uid=25, symbol_order=42)

Modification phase of node ComM_EB_SetRequestedComMode/42
ComM_EB_SetRequestedComMode (uint8 Channel, ComM_ASR40_ModeType ComMode)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_2(D);
  ComM_RequestedComMode[_1] = ComMode_4(D);
  return;

}



;; Function ComM_EvaluatePnc (ComM_EvaluatePnc, funcdef_no=25, decl_uid=6736, cgraph_uid=26, symbol_order=43)

Modification phase of node ComM_EvaluatePnc/43
ComM_EvaluatePnc (PNCHandleType Pnc, ComM_ASR40_ModeType ComMode)
{
  const uint8 UserOfPnc;
  uint8_least UserPos;
  const uint8_least NumUser;
  const struct ComM_ConfigType * ComM_ConfigPtr.59_1;
  unsigned int _2;
  unsigned int _3;
  short unsigned int _4;
  unsigned char _5;
  int _7;
  short unsigned int _8;
  unsigned char _9;
  unsigned char _10;
  const struct ComM_ConfigType * ComM_ConfigPtr.61_11;
  long unsigned int _13;
  short unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  sizetype _18;
  const uint8 * _19;
  int _20;
  unsigned char _21;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.59_1 = ComM_ConfigPtr;
  _2 = (unsigned int) Pnc_26(D);
  _3 = _2 + 1;
  _4 = ComM_ConfigPtr.59_1->NumUsersOfAllPnc[_3];
  _5 = (unsigned char) _4;
  _7 = (int) Pnc_26(D);
  _8 = ComM_ConfigPtr.59_1->NumUsersOfAllPnc[_7];
  _9 = (unsigned char) _8;
  _10 = _5 - _9;
  NumUser_27 = (const uint8_least) _10;
  # DEBUG NumUser => NumUser_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG UserPos => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.61_11 = ComM_ConfigPtr;
  _13 = ComM_ConfigPtr.61_11->pUsersOfAllPnc;
  _15 = ComM_ConfigPtr.61_11->NumUsersOfAllPnc[_7];
  _16 = (long unsigned int) _15;
  _17 = _16 + UserPos_24;
  _18 = _13 + _17;
  _19 = ComM_ConfigPtr.61_11 + _18;
  UserOfPnc_32 = *_19;
  # DEBUG UserOfPnc => UserOfPnc_32
  # DEBUG BEGIN_STMT
  _20 = (int) UserOfPnc_32;
  _21 = ComM_UserRequestedComMode[_20];
  ComMode_12 = MAX_EXPR <_21, ComMode_23>;
  # DEBUG ComMode => ComMode_12
  # DEBUG BEGIN_STMT
  UserPos_33 = UserPos_24 + 1;
  # DEBUG UserPos => UserPos_33

  <bb 4> [local count: 1073741824]:
  # ComMode_23 = PHI <ComMode_29(D)(2), ComMode_12(3)>
  # UserPos_24 = PHI <0(2), UserPos_33(3)>
  # DEBUG UserPos => UserPos_24
  # DEBUG ComMode => ComMode_23
  # DEBUG BEGIN_STMT
  if (UserPos_24 < NumUser_27)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # ComMode_6 = PHI <ComMode_23(4)>
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (ComMode_6 == 2)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 40157945]:
  # DEBUG D#1 => ComMode_29(D)
  ComM_EvaluatePnc.part.0 (Pnc_26(D));
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 77953656]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComMPnc, Pnc_26(D), 2);

  <bb 8> [local count: 118111601]:
  return;

}



;; Function ComM_ASR40_RequestComMode (ComM_ASR40_RequestComMode, funcdef_no=6, decl_uid=6241, cgraph_uid=7, symbol_order=24)

Modification phase of node ComM_ASR40_RequestComMode/24
ComM_ASR40_RequestComMode (ComM_ASR40_UserHandleType User, ComM_ASR40_ModeType ComMode)
{
  Std_ReturnType RetVal;
  unsigned char ComM_InitStatus.4_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG InstanceID => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_InitStatus.4_1 = ComM_InitStatus;
  if (ComM_InitStatus.4_1 != 1)
    goto <bb 3>; [33.99%]
  else
    goto <bb 4>; [66.01%]

  <bb 3> [local count: 364964846]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 5, 1);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 708776978]:
  # DEBUG BEGIN_STMT
  if (User_5(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 233896403]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 5, 2);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 474880574]:
  # DEBUG BEGIN_STMT
  if (ComMode_6(D) != 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 7> [local count: 318169985]:
  if (ComMode_6(D) != 2)
    goto <bb 8>; [48.88%]
  else
    goto <bb 9>; [51.12%]

  <bb 8> [local count: 155521489]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 5, 2);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 319359086]:
  # DEBUG BEGIN_STMT
  ComM_UserRequestedComMode[0] = ComMode_6(D);
  # DEBUG BEGIN_STMT
  ComM_RequestComModePNC_Helper (0, ComMode_6(D));
  # DEBUG BEGIN_STMT
  RetVal_11 = ComM_RequestComModeChannel_Helper (0);
  # DEBUG RetVal => RetVal_11

  <bb 10> [local count: 1073741824]:
  # RetVal_2 = PHI <3(3), 1(5), 1(8), RetVal_11(9)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function ComM_BitArraySet (ComM_BitArraySet, funcdef_no=26, decl_uid=6723, cgraph_uid=27, symbol_order=44)

Modification phase of node ComM_BitArraySet/44
ComM_BitArraySet (uint8 * arr, uint16 idx)
{
  sizetype _1;
  uint8 * _2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  short unsigned int _9;
  short unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _9 = idx_8(D) >> 3;
  _1 = (sizetype) _9;
  _2 = arr_10(D) + _1;
  _3 = *_2;
  _13 = idx_8(D) & 7;
  _4 = (unsigned int) _13;
  _5 = 1 << _4;
  _6 = (unsigned char) _5;
  _7 = _3 | _6;
  *_2 = _7;
  return;

}



;; Function ComM_BitArrayClear (ComM_BitArrayClear, funcdef_no=27, decl_uid=6726, cgraph_uid=28, symbol_order=45)

Modification phase of node ComM_BitArrayClear/45
ComM_BitArrayClear (uint8 * arr, uint16 idx)
{
  sizetype _1;
  uint8 * _2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;
  short unsigned int _10;
  short unsigned int _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _10 = idx_9(D) >> 3;
  _1 = (sizetype) _10;
  _2 = arr_11(D) + _1;
  _3 = *_2;
  _14 = idx_9(D) & 7;
  _4 = (unsigned int) _14;
  _5 = 1 << _4;
  _6 = (unsigned char) _5;
  _7 = ~_6;
  _8 = _3 & _7;
  *_2 = _8;
  return;

}



;; Function ComM_BitArrayIsBitSet (ComM_BitArrayIsBitSet, funcdef_no=28, decl_uid=6729, cgraph_uid=29, symbol_order=46)

Modification phase of node ComM_BitArrayIsBitSet/46
ComM_BitArrayIsBitSet (const uint8 * arr, uint16 idx)
{
  boolean RetVal;
  short unsigned int _1;
  sizetype _2;
  const uint8 * _3;
  unsigned char _4;
  int _5;
  unsigned int _6;
  int _7;
  unsigned char _8;
  short unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = idx_9(D) >> 3;
  _2 = (sizetype) _1;
  _3 = arr_10(D) + _2;
  _4 = *_3;
  _5 = (int) _4;
  _13 = idx_9(D) & 7;
  _6 = (unsigned int) _13;
  _7 = _5 >> _6;
  _8 = (unsigned char) _7;
  RetVal_12 = _8 & 1;
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function ComM_EB_GetPncRequestedComMode (ComM_EB_GetPncRequestedComMode, funcdef_no=29, decl_uid=6711, cgraph_uid=30, symbol_order=47)

Modification phase of node ComM_EB_GetPncRequestedComMode/47
ComM_EB_GetPncRequestedComMode (uint8 Channel, PNCHandleType PncPos)
{
  PNCHandleType PncIDIdx;
  PNCHandleType Idx;
  ComM_ASR40_ModeType reqMode;
  const struct ComM_ConfigType * ComM_ConfigPtr.64_1;
  long unsigned int _3;
  int _4;
  short unsigned int _5;
  int _6;
  int _7;
  int _8;
  unsigned int _9;
  unsigned int _10;
  sizetype _11;
  const uint16 * _12;
  short unsigned int _13;
  int _14;
  short unsigned int _15;
  int _16;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PncIDIdx => 0
  # DEBUG BEGIN_STMT
  # DEBUG Idx => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.64_1 = ComM_ConfigPtr;
  _3 = ComM_ConfigPtr.64_1->pPNCsOfAllChannel;
  _4 = (int) Channel_22(D);
  _5 = ComM_ConfigPtr.64_1->NumPncOfAllCh[_4];
  _6 = (int) _5;
  _7 = (int) PncPos_23(D);
  _8 = _6 + _7;
  _9 = (unsigned int) _8;
  _10 = _9 * 2;
  _11 = _3 + _10;
  _12 = ComM_ConfigPtr.64_1 + _11;
  _13 = *_12;
  _14 = (int) Idx_17;
  _15 = ComM_PncID[_14];
  if (_13 == _15)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 243393649]:
  # DEBUG BEGIN_STMT
  # DEBUG PncIDIdx => Idx_17

  <bb 5> [local count: 715863676]:
  # PncIDIdx_18 = PHI <PncIDIdx_19(3), Idx_17(4)>
  # DEBUG PncIDIdx => PncIDIdx_18
  # DEBUG BEGIN_STMT
  Idx_24 = Idx_17 + 1;
  # DEBUG Idx => Idx_24

  <bb 6> [local count: 1073741824]:
  # Idx_17 = PHI <0(2), Idx_24(5)>
  # PncIDIdx_19 = PHI <0(2), PncIDIdx_18(5)>
  # DEBUG PncIDIdx => PncIDIdx_19
  # DEBUG Idx => Idx_17
  # DEBUG BEGIN_STMT
  if (Idx_17 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 7>; [33.33%]

  <bb 7> [local count: 357878150]:
  # PncIDIdx_2 = PHI <PncIDIdx_19(6)>
  # DEBUG BEGIN_STMT
  _16 = (int) PncIDIdx_2;
  reqMode_21 = ComM_PNCRequestedComMode[_16];
  # DEBUG reqMode => reqMode_21
  # DEBUG BEGIN_STMT
  return reqMode_21;

}



;; Function ComM_PncMainFunction (ComM_PncMainFunction, funcdef_no=31, decl_uid=6731, cgraph_uid=32, symbol_order=49)

Modification phase of node ComM_PncMainFunction/49
ComM_PncMainFunction ()
{
  PNCHandleType PncIdx;
  unsigned char ComMPncMainfunctionRunning.67_1;
  struct ComM_HsmInstType * _2;
  unsigned int _3;
  unsigned int _4;
  struct ComM_HsmInstType * _5;
  unsigned char _6;

  <bb 2> [local count: 715756301]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ComMExecutePncMainFunction => 0
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  ComMPncMainfunctionRunning.67_1 ={v} ComMPncMainfunctionRunning;
  if (ComMPncMainfunctionRunning.67_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 357878150]:
  # DEBUG ComMExecutePncMainFunction => 0
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  ComMPncMainfunctionRunning ={v} 1;
  # DEBUG BEGIN_STMT
  # DEBUG ComMExecutePncMainFunction => 1
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_ProcessPncComSignals (&ComM_RxEiraSignalStatus, &ComM_RxComSignalEiraCfg, &ComM_RxEira, 0);
  # DEBUG BEGIN_STMT
  # DEBUG PncIdx => 0
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _2 = ComM_HsmScComMPnc.instances;
  _3 = (unsigned int) PncIdx_7;
  _4 = _3 * 4;
  _5 = _2 + _4;
  _6 = _5->evQueueFill;
  if (_6 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 236235013]:
  # DEBUG BEGIN_STMT
  ComM_HsmMainInst (&ComM_HsmScComMPnc, PncIdx_7);

  <bb 7> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  PncIdx_18 = PncIdx_7 + 1;
  # DEBUG PncIdx => PncIdx_18

  <bb 8> [local count: 1073741824]:
  # PncIdx_7 = PHI <0(4), PncIdx_18(7)>
  # DEBUG PncIdx => PncIdx_7
  # DEBUG BEGIN_STMT
  if (PncIdx_7 != 2)
    goto <bb 5>; [66.67%]
  else
    goto <bb 9>; [33.33%]

  <bb 9> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  ComMPncMainfunctionRunning ={v} 0;

  <bb 10> [local count: 715756301]:
  return;

}



;; Function ComM_IsValidConfig (ComM_IsValidConfig, funcdef_no=32, decl_uid=6267, cgraph_uid=33, symbol_order=50)

Modification phase of node ComM_IsValidConfig/50
ComM_IsValidConfig (const void * voidConfigPtr)
{
  Std_ReturnType result;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  # DEBUG ConfigPtr => voidConfigPtr_6(D)
  # DEBUG BEGIN_STMT
  if (voidConfigPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct ComM_ConfigType *)voidConfigPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct ComM_ConfigType *)voidConfigPtr_6(D)].CfgSignature;
  if (_3 == 4283348280)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 66369400]:
  result_10 = ComM_IsValidConfig.part.0 (voidConfigPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # result_4 = PHI <1(2), 1(3), 1(4), result_10(5)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function ComM_Init (ComM_Init, funcdef_no=0, decl_uid=6231, cgraph_uid=1, symbol_order=18)

Modification phase of node ComM_Init/18
ComM_Init (const struct ComM_ConfigType * ConfigPtr)
{
  uint8_least i;
  unsigned char _1;
  const struct ComM_ConfigType * ComM_ConfigPtr.0_2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG LocalConfigPtr => ConfigPtr_14(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ConfigPtr_14(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 1, 2);
  goto <bb 21>; [100.00%]

  <bb 4> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _1 = ComM_IsValidConfig (ConfigPtr_14(D));
  if (_1 != 0)
    goto <bb 5>; [67.00%]
  else
    goto <bb 6>; [33.00%]

  <bb 5> [local count: 503584916]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (12, 0, 1, 2);
  goto <bb 21>; [100.00%]

  <bb 6> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr = ConfigPtr_14(D);
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  ComM_RequestedComMode[0] = 0;
  # DEBUG BEGIN_STMT
  ComM_ChanState[0] = 0;
  # DEBUG BEGIN_STMT
  ComM_ChannelMode[0] = 0;
  # DEBUG BEGIN_STMT
  # DEBUG i => 1

  <bb 8> [local count: 496068723]:
  # i_4 = PHI <0(6), 1(7)>
  # DEBUG i => i_4
  # DEBUG BEGIN_STMT
  if (i_4 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 9> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&ComM_UserRequestedComMode, 0, 1);
  # DEBUG BEGIN_STMT
  ComM_HsmInit (&ComM_HsmScComM);
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  ComM_Communication_Allowed[0] = 0;
  # DEBUG BEGIN_STMT
  ComM_DcmActiveStatus[0] = 0;
  # DEBUG BEGIN_STMT
  ComM_PassiveStartupStatus[0] = 0;
  # DEBUG BEGIN_STMT
  # DEBUG i => 1

  <bb 11> [local count: 496068723]:
  # i_5 = PHI <0(9), 1(10)>
  # DEBUG i => i_5
  # DEBUG BEGIN_STMT
  if (i_5 == 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 12> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.0_2 = ComM_ConfigPtr;
  _3 = ComM_ConfigPtr.0_2->ComMPncEnabled;
  if (_3 != 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 13> [local count: 81851339]:
  # DEBUG BEGIN_STMT
  ComM_HsmInit (&ComM_HsmScComMPnc);
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 490936201]:
  # DEBUG BEGIN_STMT
  ComM_RxEira[i_6] = 0;
  # DEBUG BEGIN_STMT
  ComM_TxEiraEraActive[i_6] = 0;
  # DEBUG BEGIN_STMT
  i_26 = i_6 + 1;
  # DEBUG i => i_26

  <bb 15> [local count: 572787541]:
  # i_6 = PHI <0(13), i_26(14)>
  # DEBUG i => i_6
  # DEBUG BEGIN_STMT
  if (i_6 != 6)
    goto <bb 14>; [85.71%]
  else
    goto <bb 16>; [14.29%]

  <bb 16> [local count: 81851340]:
  # DEBUG BEGIN_STMT
  ComM_RxEiraSignalStatus = 0;
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&ComM_PNCRequestedComMode, 0, 2);
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&ComM_PNCMode, 0, 2);

  <bb 17> [local count: 248034362]:
  # DEBUG BEGIN_STMT
  ComMPncMainfunctionRunning ={v} 0;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 19>; [100.00%]

  <bb 18> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  ComM_RteNotificationSuccessful[0] = 1;
  # DEBUG BEGIN_STMT
  ComM_RteModeUser[0] = 0;
  # DEBUG BEGIN_STMT
  # DEBUG i => 1

  <bb 19> [local count: 496068723]:
  # i_7 = PHI <0(17), 1(18)>
  # DEBUG i => i_7
  # DEBUG BEGIN_STMT
  if (i_7 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 20> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  ComM_RteNotificationDoActFkp = ComM_RteNotificationDoAction;
  # DEBUG BEGIN_STMT
  ComM_InitStatus = 1;

  <bb 21> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


