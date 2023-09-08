
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/44:
  Jump functions of caller  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/43:
  Jump functions of caller  TS_AtomicClearBit_8/42:
  Jump functions of caller  Com_SendSignal/40:
  Jump functions of caller  TS_AtomicSetBit_8/36:
  Jump functions of caller  ComM_HsmEmitInst/32:
  Jump functions of caller  ComM_EvaluateChannel/31:
  Jump functions of caller  BswM_ComM_CurrentPNCMode/27:
  Jump functions of caller  ComM_PncProcessTimers/24:
  Jump functions of caller  ComM_PncSendSignal/23:
  Jump functions of caller  ComM_PncGetEIRA/22:
  Jump functions of caller  ComM_PNC_RequestComMode/21:
  Jump functions of caller  ComM_NmNwReqAllChOfPnc/20:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComNotifyEntry/19:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComAction4/18:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComAction3/17:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComGuard3/16:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComAction1/15:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComGuard1/14:
  Jump functions of caller  ComM_HsmComMPncSfPncNoComEntry/13:
  Jump functions of caller  ComM_HsmComMPncSfPncRequestedAction1/12:
    callsite  ComM_HsmComMPncSfPncRequestedAction1/12 -> ComM_PncSendSignal/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  ComM_HsmComMPncSfPncRequestedGuard1/11:
  Jump functions of caller  ComM_HsmComMPncSfPncRequestedEntry/10:
    callsite  ComM_HsmComMPncSfPncRequestedEntry/10 -> ComM_NmNwReqAllChOfPnc/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  ComM_HsmComMPncSfPncRequestedEntry/10 -> ComM_PncSendSignal/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  ComM_HsmComMPncSfPncRequestedEntry/10 -> ComM_PNC_RequestComMode/21 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  ComM_HsmComMPncSfPncReadySleepGuard1/9:
    callsite  ComM_HsmComMPncSfPncReadySleepGuard1/9 -> ComM_PncGetEIRA/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_HsmComMPncSfPncReadySleepEntry/8:
  Jump functions of caller  ComM_HsmComMPncSfPncPrepareSleepAction3/7:
    callsite  ComM_HsmComMPncSfPncPrepareSleepAction3/7 -> ComM_PNC_RequestComMode/21 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  ComM_HsmComMPncSfPncPrepareSleepAction2/6:
  Jump functions of caller  ComM_HsmComMPncSfPncPrepareSleepAction1/5:
  Jump functions of caller  ComM_HsmComMPncSfPncPrepareSleepGuard1/4:
    callsite  ComM_HsmComMPncSfPncPrepareSleepGuard1/4 -> ComM_PncGetEIRA/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_HsmComMPncSfPncPrepareSleepEntry/3:
  Jump functions of caller  ComM_HsmComMPncSfPncFullComEntry/2:
  Jump functions of caller  ComM_HsmComMPncSfPncTopAction1/1:

 Propagating constants:

Not considering ComM_PncProcessTimers for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncNoComNotifyEntry for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMPncSfPncNoComAction4/18 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMPncSfPncNoComAction3/17 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMPncSfPncNoComGuard3 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncNoComAction1 for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMPncSfPncNoComGuard1/14 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMPncSfPncNoComEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncRequestedAction1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncRequestedGuard1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncRequestedEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncReadySleepGuard1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncReadySleepEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncPrepareSleepAction3 for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMPncSfPncPrepareSleepAction2/6 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMPncSfPncPrepareSleepAction1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncPrepareSleepGuard1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncPrepareSleepEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncFullComEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMPncSfPncTopAction1 for cloning; -fipa-cp-clone disabled.

overall_size: 235, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 25, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ComM_PncProcessTimers/24:
  Node: ComM_PncSendSignal/23:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint8 [0, 0]
        AGGS VARIABLE
  Node: ComM_PncGetEIRA/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_PNC_RequestComMode/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 1, loc_size: 23, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 23, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x2, mask = 0x2
         ComM_ModeType [0, 2]
        AGGS VARIABLE
  Node: ComM_NmNwReqAllChOfPnc/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_HsmComMPncSfPncNoComNotifyEntry/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncNoComAction4/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncNoComAction3/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncNoComGuard3/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncNoComAction1/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncNoComGuard1/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncNoComEntry/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncRequestedAction1/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncRequestedGuard1/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncRequestedEntry/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncReadySleepGuard1/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncReadySleepEntry/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncPrepareSleepAction3/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncPrepareSleepAction2/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncPrepareSleepAction1/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncPrepareSleepGuard1/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncPrepareSleepEntry/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncFullComEntry/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMPncSfPncTopAction1/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of ComM_PncSendSignal/23 for all known contexts.
    replacing param #1 signalKind with const 0
Propagated bits info for function ComM_PncSendSignal.constprop/45:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function ComM_PncSendSignal/23:
 param 1: value = 0x0, mask = 0x0
Propagated bits info for function ComM_PNC_RequestComMode/21:
 param 1: value = 0x2, mask = 0x2

IPA constant propagation end

Reclaiming functions: ComM_PncSendSignal/23
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_PncSendSignal.constprop.0/45 (ComM_PncSendSignal.constprop) @06e59700
  Type: function definition analyzed
  Visibility:
  References: ComM_PncTxSignalMap/37 (read)ComM_TxComSignalCfg/38 (read)ComM_TxEiraEraActive/35 (addr)ComM_PncTxMask/39 (read)ComM_TxComSignalCfg/38 (read)ComM_PncTxSignalMap/37 (read)
  Referring: 
  Clone of ComM_PncSendSignal/23
  Availability: local
  Function flags: count:118111600 (estimated locally) local optimize_size
  Called by: ComM_HsmComMPncSfPncRequestedEntry/10 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncRequestedAction1/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: Com_SendSignal/40 (152900836 (estimated locally),1.29 per call) 
ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/44 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0) @06d3b9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_PncProcessTimers/24 (239814331 (estimated locally),0.67 per call) ComM_PncProcessTimers/24 (239814331 (estimated locally),0.67 per call) ComM_PncProcessTimers/24 (236235013 (estimated locally),0.66 per call) 
  Calls: 
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/43 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0) @06d3b8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_PncProcessTimers/24 (715863676 (estimated locally),2.00 per call) 
  Calls: 
TS_AtomicClearBit_8/42 (TS_AtomicClearBit_8) @06d3b0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMPncSfPncRequestedAction1/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_PncNmRequest/41 (ComM_PncNmRequest) @06d32ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_NmNwReqAllChOfPnc/20 (read)
  Availability: not_available
  Varpool flags: read-only
Com_SendSignal/40 (Com_SendSignal) @06d30b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_PncSendSignal.constprop/45 (152900836 (estimated locally),1.29 per call) 
  Calls: 
ComM_PncTxMask/39 (ComM_PncTxMask) @06d32bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PncSendSignal.constprop.0/45 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_TxComSignalCfg/38 (ComM_TxComSignalCfg) @06d32b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PncSendSignal.constprop.0/45 (read)ComM_PncSendSignal.constprop.0/45 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_PncTxSignalMap/37 (ComM_PncTxSignalMap) @06d32b40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PncSendSignal.constprop.0/45 (read)ComM_PncSendSignal.constprop.0/45 (read)
  Availability: not_available
  Varpool flags: read-only
TS_AtomicSetBit_8/36 (TS_AtomicSetBit_8) @06d309a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMPncSfPncRequestedEntry/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_TxEiraEraActive/35 (ComM_TxEiraEraActive) @06d32708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMPncSfPncRequestedEntry/10 (addr)ComM_PncSendSignal.constprop.0/45 (addr)ComM_HsmComMPncSfPncRequestedAction1/12 (addr)
  Availability: not_available
  Varpool flags:
ComM_HsmScComMPnc/34 (ComM_HsmScComMPnc) @06d322d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMPncSfPncReadySleepEntry/8 (addr)ComM_PncProcessTimers/24 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_HsmScComM/33 (ComM_HsmScComM) @06d32168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PNC_RequestComMode/21 (addr)ComM_NmNwReqAllChOfPnc/20 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_HsmEmitInst/32 (ComM_HsmEmitInst) @06d30540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_PncProcessTimers/24 (239814331 (estimated locally),0.67 per call) ComM_HsmComMPncSfPncReadySleepEntry/8 (1073741824 (estimated locally),1.00 per call) ComM_NmNwReqAllChOfPnc/20 (193419557 (estimated locally),1.64 per call) ComM_PNC_RequestComMode/21 (955630223 (estimated locally),8.09 per call) 
  Calls: 
ComM_EvaluateChannel/31 (ComM_EvaluateChannel) @06d30460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_PNC_RequestComMode/21 (955630223 (estimated locally),8.09 per call) 
  Calls: 
ComM_ConfigPtr/30 (ComM_ConfigPtr) @06d32090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PNC_RequestComMode/21 (read)ComM_NmNwReqAllChOfPnc/20 (read)
  Availability: not_available
  Varpool flags:
ComM_PNCRequestedComMode/29 (ComM_PNCRequestedComMode) @06d32048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PNC_RequestComMode/21 (write)
  Availability: not_available
  Varpool flags:
ComM_RxEira/28 (ComM_RxEira) @06cefb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_PncGetEIRA/22 (read)
  Availability: not_available
  Varpool flags:
BswM_ComM_CurrentPNCMode/27 (BswM_ComM_CurrentPNCMode) @06cf5e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMPncSfPncNoComNotifyEntry/19 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncNoComAction1/15 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncRequestedEntry/10 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncReadySleepEntry/8 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncPrepareSleepEntry/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_PncID/26 (ComM_PncID) @06cef750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMPncSfPncRequestedEntry/10 (read)ComM_HsmComMPncSfPncNoComAction1/15 (read)ComM_HsmComMPncSfPncNoComNotifyEntry/19 (read)ComM_PncGetEIRA/22 (read)ComM_HsmComMPncSfPncRequestedAction1/12 (read)ComM_HsmComMPncSfPncReadySleepEntry/8 (read)ComM_HsmComMPncSfPncPrepareSleepEntry/3 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_PNCMode/25 (ComM_PNCMode) @06cef630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMPncSfPncFullComEntry/2 (write)ComM_HsmComMPncSfPncNoComEntry/13 (write)
  Availability: not_available
  Varpool flags:
ComM_PncProcessTimers/24 (ComM_PncProcessTimers) @06cf5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncTimer/0 (read)ComM_PncTimer/0 (write)ComM_HsmScComMPnc/34 (addr)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/44 (239814331 (estimated locally),0.67 per call) ComM_HsmEmitInst/32 (239814331 (estimated locally),0.67 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/44 (239814331 (estimated locally),0.67 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/44 (236235013 (estimated locally),0.66 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/43 (715863676 (estimated locally),2.00 per call) 
ComM_PncSendSignal/23 (ComM_PncSendSignal) @06cf57e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_PncGetEIRA/22 (ComM_PncGetEIRA) @06cf5620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_PncID/26 (read)ComM_RxEira/28 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ComM_HsmComMPncSfPncReadySleepGuard1/9 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncPrepareSleepGuard1/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_PNC_RequestComMode/21 (ComM_PNC_RequestComMode) @06cf5460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_PNCRequestedComMode/29 (write)ComM_HsmScComM/33 (addr)ComM_ConfigPtr/30 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: ComM_HsmComMPncSfPncRequestedEntry/10 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncPrepareSleepAction3/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: ComM_HsmEmitInst/32 (955630223 (estimated locally),8.09 per call) ComM_EvaluateChannel/31 (955630223 (estimated locally),8.09 per call) 
ComM_NmNwReqAllChOfPnc/20 (ComM_NmNwReqAllChOfPnc) @06cf50e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_PncNmRequest/41 (read)ComM_HsmScComM/33 (addr)ComM_ConfigPtr/30 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: ComM_HsmComMPncSfPncRequestedEntry/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: ComM_HsmEmitInst/32 (193419557 (estimated locally),1.64 per call) 
ComM_HsmComMPncSfPncNoComNotifyEntry/19 (ComM_HsmComMPncSfPncNoComNotifyEntry) @06cf0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncID/26 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ComM_CurrentPNCMode/27 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncNoComAction4/18 (ComM_HsmComMPncSfPncNoComAction4) @06cf0b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMPncSfPncNoComAction1/15 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncNoComAction3/17 (ComM_HsmComMPncSfPncNoComAction3) @06cf09a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMPncSfPncNoComAction1/15 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncNoComGuard3/16 (ComM_HsmComMPncSfPncNoComGuard3) @06cf07e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_HsmComMPncSfPncNoComAction1/15 (ComM_HsmComMPncSfPncNoComAction1) @06cf0620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncID/26 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMPncSfPncNoComAction4/18 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMPncSfPncNoComAction3/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: BswM_ComM_CurrentPNCMode/27 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncNoComGuard1/14 (ComM_HsmComMPncSfPncNoComGuard1) @06cf0460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMPncSfPncPrepareSleepGuard1/4 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncNoComEntry/13 (ComM_HsmComMPncSfPncNoComEntry) @06cf02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PNCMode/25 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_HsmComMPncSfPncRequestedAction1/12 (ComM_HsmComMPncSfPncRequestedAction1) @06cf0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncID/26 (read)ComM_TxEiraEraActive/35 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_PncSendSignal.constprop/45 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_8/42 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncRequestedGuard1/11 (ComM_HsmComMPncSfPncRequestedGuard1) @06cdbe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_HsmComMPncSfPncRequestedEntry/10 (ComM_HsmComMPncSfPncRequestedEntry) @06cdbc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncID/26 (read)ComM_TxEiraEraActive/35 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_NmNwReqAllChOfPnc/20 (1073741824 (estimated locally),1.00 per call) ComM_PncSendSignal.constprop/45 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_8/36 (1073741824 (estimated locally),1.00 per call) ComM_PNC_RequestComMode/21 (1073741824 (estimated locally),1.00 per call) BswM_ComM_CurrentPNCMode/27 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncReadySleepGuard1/9 (ComM_HsmComMPncSfPncReadySleepGuard1) @06cdba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_PncGetEIRA/22 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncReadySleepEntry/8 (ComM_HsmComMPncSfPncReadySleepEntry) @06cdb8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_HsmScComMPnc/34 (addr)ComM_PncID/26 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ComM_CurrentPNCMode/27 (1073741824 (estimated locally),1.00 per call) ComM_HsmEmitInst/32 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncPrepareSleepAction3/7 (ComM_HsmComMPncSfPncPrepareSleepAction3) @06cdb620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_PNC_RequestComMode/21 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncPrepareSleepAction2/6 (ComM_HsmComMPncSfPncPrepareSleepAction2) @06cdb460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMPncSfPncPrepareSleepAction1/5 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncPrepareSleepAction1/5 (ComM_HsmComMPncSfPncPrepareSleepAction1) @06cdb1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncTimer/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMPncSfPncPrepareSleepAction2/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_HsmComMPncSfPncPrepareSleepGuard1/4 (ComM_HsmComMPncSfPncPrepareSleepGuard1) @06cd02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMPncSfPncNoComGuard1/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: ComM_PncGetEIRA/22 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncPrepareSleepEntry/3 (ComM_HsmComMPncSfPncPrepareSleepEntry) @06cd0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PncID/26 (read)ComM_PncTimer/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ComM_CurrentPNCMode/27 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMPncSfPncFullComEntry/2 (ComM_HsmComMPncSfPncFullComEntry) @06cd0b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PNCMode/25 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_HsmComMPncSfPncTopAction1/1 (ComM_HsmComMPncSfPncTopAction1) @06cd08c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_PncTimer/0 (ComM_PncTimer) @06c49ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: ComM_HsmComMPncSfPncPrepareSleepAction1/5 (write)ComM_PncProcessTimers/24 (write)ComM_HsmComMPncSfPncPrepareSleepEntry/3 (write)ComM_PncProcessTimers/24 (read)
  Availability: available
  Varpool flags:

;; Function ComM_PNC_RequestComMode (ComM_PNC_RequestComMode, funcdef_no=20, decl_uid=6741, cgraph_uid=21, symbol_order=21)

Modification phase of node ComM_PNC_RequestComMode/21
Adjusting mask for param 1 to 0x2
Setting value range of param 1 [0, 2]
ComM_PNC_RequestComMode (uint16 pncIdx, ComM_ModeType Mode)
{
  const uint8 Channel;
  uint8_least chIdx;
  int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  sizetype _5;
  const uint8 * _6;
  short unsigned int _7;
  const struct ComM_ConfigType * ComM_ConfigPtr.4_8;
  unsigned int _9;
  unsigned int _10;
  short unsigned int _11;
  unsigned char _12;
  short unsigned int _13;
  unsigned char _14;
  unsigned char _15;
  long unsigned int _16;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) pncIdx_19(D);
  ComM_PNCRequestedComMode[_1] = Mode_21(D);
  # DEBUG BEGIN_STMT
  # DEBUG chIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = ComM_ConfigPtr.4_8->pChannelsOfAllPnc;
  _3 = (long unsigned int) _13;
  _4 = _3 + chIdx_17;
  _5 = _2 + _4;
  _6 = ComM_ConfigPtr.4_8 + _5;
  Channel_23 = *_6;
  # DEBUG Channel => Channel_23
  # DEBUG BEGIN_STMT
  ComM_EvaluateChannel (Channel_23);
  # DEBUG BEGIN_STMT
  _7 = (short unsigned int) Channel_23;
  ComM_HsmEmitInst (&ComM_HsmScComM, _7, 9);
  # DEBUG BEGIN_STMT
  chIdx_26 = chIdx_17 + 1;
  # DEBUG chIdx => chIdx_26

  <bb 4> [local count: 1073741824]:
  # chIdx_17 = PHI <0(2), chIdx_26(3)>
  # DEBUG chIdx => chIdx_17
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.4_8 = ComM_ConfigPtr;
  _9 = (unsigned int) pncIdx_19(D);
  _10 = _9 + 1;
  _11 = ComM_ConfigPtr.4_8->NumChannelsOfAllPnc[_10];
  _12 = (unsigned char) _11;
  _13 = ComM_ConfigPtr.4_8->NumChannelsOfAllPnc[_1];
  _14 = (unsigned char) _13;
  _15 = _12 - _14;
  _16 = (long unsigned int) _15;
  if (_16 > chIdx_17)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}



;; Function ComM_PncSendSignal.constprop (ComM_PncSendSignal.constprop.0, funcdef_no=32, decl_uid=6951, cgraph_uid=33, symbol_order=45)

Modification phase of node ComM_PncSendSignal.constprop/45
ComM_PncSendSignal.constprop (uint16 instIdx)
{
  uint8 i;
  uint8 TxEiraEra[6];
  const uint8 SigIndex;
  uint8 j;
  uint8 signalKind;
  int _1;
  const uint8 * _2;
  sizetype _4;
  const uint8 * _5;
  int _7;
  unsigned char _8;
  sizetype _10;
  uint8 * _11;
  unsigned char _12;
  const uint8 * _13;
  const uint8 * _14;
  unsigned char _15;
  int _16;
  unsigned char _17;
  short unsigned int _19;
  unsigned char _22;

  <bb 11> [local count: 118111600]:
  # DEBUG signalKind => 0

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TxBufferPtr => &ComM_TxEiraEraActive
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = ComM_PncTxSignalMap[_1].TxSignalList;
  _4 = (sizetype) i_3;
  _5 = _2 + _4;
  SigIndex_6 = *_5;
  # DEBUG SigIndex => SigIndex_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = (int) SigIndex_6;
  _8 = ComM_TxComSignalCfg[_7].TxSignalKind;
  if (_8 == 0)
    goto <bb 4>; [16.00%]
  else
    goto <bb 8>; [84.00%]

  <bb 4> [local count: 152900836]:
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 917084023]:
  # DEBUG BEGIN_STMT
  _10 = (sizetype) j_9;
  _11 = &ComM_TxEiraEraActive + _10;
  _12 = *_11;
  _13 = ComM_PncTxMask[_7];
  _14 = _13 + _10;
  _15 = *_14;
  _16 = (int) j_9;
  _17 = _12 & _15;
  TxEiraEra[_16] = _17;
  # DEBUG BEGIN_STMT
  j_18 = j_9 + 1;
  # DEBUG j => j_18

  <bb 6> [local count: 1069984860]:
  # j_9 = PHI <0(4), j_18(5)>
  # DEBUG j => j_9
  # DEBUG BEGIN_STMT
  if (j_9 != 6)
    goto <bb 5>; [85.71%]
  else
    goto <bb 7>; [14.29%]

  <bb 7> [local count: 152900836]:
  # DEBUG BEGIN_STMT
  _19 = ComM_TxComSignalCfg[_7].ComHandleId;
  Com_SendSignal (_19, &TxEiraEra);

  <bb 8> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  i_20 = i_3 + 1;
  # DEBUG i => i_20

  <bb 9> [local count: 1073741824]:
  # i_3 = PHI <0(2), i_20(8)>
  # DEBUG i => i_3
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_21(D);
  _22 = ComM_PncTxSignalMap[_1].NumTxSignal;
  if (i_3 < _22)
    goto <bb 3>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 118111601]:
  TxEiraEra ={v} {CLOBBER};
  return;

}



;; Function ComM_HsmComMPncSfPncTopAction1 (ComM_HsmComMPncSfPncTopAction1, funcdef_no=0, decl_uid=6466, cgraph_uid=1, symbol_order=1)

Modification phase of node ComM_HsmComMPncSfPncTopAction1/1
ComM_HsmComMPncSfPncTopAction1 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_HsmComMPncSfPncFullComEntry (ComM_HsmComMPncSfPncFullComEntry, funcdef_no=1, decl_uid=6468, cgraph_uid=2, symbol_order=2)

Modification phase of node ComM_HsmComMPncSfPncFullComEntry/2
ComM_HsmComMPncSfPncFullComEntry (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_PNCMode[_1] = 2;
  return;

}



;; Function ComM_HsmComMPncSfPncPrepareSleepEntry (ComM_HsmComMPncSfPncPrepareSleepEntry, funcdef_no=2, decl_uid=6470, cgraph_uid=3, symbol_order=3)

Modification phase of node ComM_HsmComMPncSfPncPrepareSleepEntry/3
ComM_HsmComMPncSfPncPrepareSleepEntry (const uint16 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_3(D);
  _2 = ComM_PncID[_1];
  BswM_ComM_CurrentPNCMode (_2, 2);
  # DEBUG BEGIN_STMT
  ComM_PncTimer[_1] = 32;
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_HsmComMPncSfPncPrepareSleepGuard1 (ComM_HsmComMPncSfPncPrepareSleepGuard1, funcdef_no=3, decl_uid=6472, cgraph_uid=4, symbol_order=4)

Modification phase of node ComM_HsmComMPncSfPncPrepareSleepGuard1/4
ComM_HsmComMPncSfPncPrepareSleepGuard1 (const uint16 instIdx)
{
  unsigned char _1;
  boolean iftmp.0_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = ComM_PncGetEIRA (instIdx_4(D));
  if (_1 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.0_2 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.0_2
  # DEBUG BEGIN_STMT
  return iftmp.0_2;

}



;; Function ComM_HsmComMPncSfPncPrepareSleepAction1 (ComM_HsmComMPncSfPncPrepareSleepAction1, funcdef_no=4, decl_uid=6474, cgraph_uid=5, symbol_order=5)

Modification phase of node ComM_HsmComMPncSfPncPrepareSleepAction1/5
ComM_HsmComMPncSfPncPrepareSleepAction1 (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_PncTimer[_1] = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_HsmComMPncSfPncPrepareSleepAction2 (ComM_HsmComMPncSfPncPrepareSleepAction2, funcdef_no=27, decl_uid=6476, cgraph_uid=6, symbol_order=6)

Modification phase of node ComM_HsmComMPncSfPncPrepareSleepAction2/6
ComM_HsmComMPncSfPncPrepareSleepAction2 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMPncSfPncPrepareSleepAction1 (instIdx_2(D)); [tail call]
  return;

}



;; Function ComM_HsmComMPncSfPncPrepareSleepAction3 (ComM_HsmComMPncSfPncPrepareSleepAction3, funcdef_no=6, decl_uid=6478, cgraph_uid=7, symbol_order=7)

Modification phase of node ComM_HsmComMPncSfPncPrepareSleepAction3/7
ComM_HsmComMPncSfPncPrepareSleepAction3 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_PNC_RequestComMode (instIdx_2(D), 0);
  return;

}



;; Function ComM_HsmComMPncSfPncReadySleepEntry (ComM_HsmComMPncSfPncReadySleepEntry, funcdef_no=7, decl_uid=6480, cgraph_uid=8, symbol_order=8)

Modification phase of node ComM_HsmComMPncSfPncReadySleepEntry/8
ComM_HsmComMPncSfPncReadySleepEntry (const uint16 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComMPnc, instIdx_4(D), 3);
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_4(D);
  _2 = ComM_PncID[_1];
  BswM_ComM_CurrentPNCMode (_2, 1);
  return;

}



;; Function ComM_HsmComMPncSfPncReadySleepGuard1 (ComM_HsmComMPncSfPncReadySleepGuard1, funcdef_no=8, decl_uid=6482, cgraph_uid=9, symbol_order=9)

Modification phase of node ComM_HsmComMPncSfPncReadySleepGuard1/9
ComM_HsmComMPncSfPncReadySleepGuard1 (const uint16 instIdx)
{
  unsigned char _1;
  boolean iftmp.6_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = ComM_PncGetEIRA (instIdx_4(D));
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



;; Function ComM_HsmComMPncSfPncRequestedEntry (ComM_HsmComMPncSfPncRequestedEntry, funcdef_no=9, decl_uid=6484, cgraph_uid=10, symbol_order=10)

Modification phase of node ComM_HsmComMPncSfPncRequestedEntry/10
ComM_HsmComMPncSfPncRequestedEntry (const uint16 instIdx)
{
  const uint8 Index;
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  unsigned char _4;
  int _5;
  uint8 * _6;
  unsigned char _7;
  long unsigned int _8;
  unsigned char _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_9(D);
  _2 = ComM_PncID[_1];
  _3 = _2 >> 3;
  _4 = (unsigned char) _3;
  Index_11 = _4 + 254;
  # DEBUG Index => Index_11
  # DEBUG BEGIN_STMT
  BswM_ComM_CurrentPNCMode (_2, 0);
  # DEBUG BEGIN_STMT
  ComM_PNC_RequestComMode (instIdx_9(D), 2);
  # DEBUG BEGIN_STMT
  _5 = (int) Index_11;
  _6 = &ComM_TxEiraEraActive[_5];
  _7 = (unsigned char) _2;
  _17 = _7 & 7;
  _8 = (long unsigned int) _17;
  TS_AtomicSetBit_8 (_6, _8);
  # DEBUG BEGIN_STMT
  ComM_PncSendSignal (instIdx_9(D), 0);
  # DEBUG BEGIN_STMT
  ComM_NmNwReqAllChOfPnc (instIdx_9(D));
  return;

}



;; Function ComM_HsmComMPncSfPncRequestedGuard1 (ComM_HsmComMPncSfPncRequestedGuard1, funcdef_no=10, decl_uid=6486, cgraph_uid=11, symbol_order=11)

Modification phase of node ComM_HsmComMPncSfPncRequestedGuard1/11
ComM_HsmComMPncSfPncRequestedGuard1 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function ComM_HsmComMPncSfPncRequestedAction1 (ComM_HsmComMPncSfPncRequestedAction1, funcdef_no=11, decl_uid=6488, cgraph_uid=12, symbol_order=12)

Modification phase of node ComM_HsmComMPncSfPncRequestedAction1/12
ComM_HsmComMPncSfPncRequestedAction1 (const uint16 instIdx)
{
  const uint8 Index;
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  unsigned char _4;
  int _5;
  uint8 * _6;
  unsigned char _7;
  long unsigned int _8;
  unsigned char _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_9(D);
  _2 = ComM_PncID[_1];
  _3 = _2 >> 3;
  _4 = (unsigned char) _3;
  Index_11 = _4 + 254;
  # DEBUG Index => Index_11
  # DEBUG BEGIN_STMT
  _5 = (int) Index_11;
  _6 = &ComM_TxEiraEraActive[_5];
  _7 = (unsigned char) _2;
  _14 = _7 & 7;
  _8 = (long unsigned int) _14;
  TS_AtomicClearBit_8 (_6, _8);
  # DEBUG BEGIN_STMT
  ComM_PncSendSignal (instIdx_9(D), 0);
  return;

}



;; Function ComM_HsmComMPncSfPncNoComEntry (ComM_HsmComMPncSfPncNoComEntry, funcdef_no=12, decl_uid=6490, cgraph_uid=13, symbol_order=13)

Modification phase of node ComM_HsmComMPncSfPncNoComEntry/13
ComM_HsmComMPncSfPncNoComEntry (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_PNCMode[_1] = 0;
  return;

}



;; Function ComM_HsmComMPncSfPncNoComGuard1 (ComM_HsmComMPncSfPncNoComGuard1, funcdef_no=25, decl_uid=6492, cgraph_uid=14, symbol_order=14)

Modification phase of node ComM_HsmComMPncSfPncNoComGuard1/14
ComM_HsmComMPncSfPncNoComGuard1 (const uint16 instIdx)
{
  boolean retval.40;

  <bb 2> [local count: 1073741824]:
  retval.40_3 = ComM_HsmComMPncSfPncPrepareSleepGuard1 (instIdx_2(D)); [tail call]
  return retval.40_3;

}



;; Function ComM_HsmComMPncSfPncNoComAction1 (ComM_HsmComMPncSfPncNoComAction1, funcdef_no=14, decl_uid=6494, cgraph_uid=15, symbol_order=15)

Modification phase of node ComM_HsmComMPncSfPncNoComAction1/15
ComM_HsmComMPncSfPncNoComAction1 (const uint16 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_3(D);
  _2 = ComM_PncID[_1];
  BswM_ComM_CurrentPNCMode (_2, 4);
  return;

}



;; Function ComM_HsmComMPncSfPncNoComGuard3 (ComM_HsmComMPncSfPncNoComGuard3, funcdef_no=15, decl_uid=6496, cgraph_uid=16, symbol_order=16)

Modification phase of node ComM_HsmComMPncSfPncNoComGuard3/16
ComM_HsmComMPncSfPncNoComGuard3 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ComM_HsmComMPncSfPncNoComAction3 (ComM_HsmComMPncSfPncNoComAction3, funcdef_no=29, decl_uid=6498, cgraph_uid=17, symbol_order=17)

Modification phase of node ComM_HsmComMPncSfPncNoComAction3/17
ComM_HsmComMPncSfPncNoComAction3 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMPncSfPncNoComAction1 (instIdx_2(D)); [tail call]
  return;

}



;; Function ComM_HsmComMPncSfPncNoComAction4 (ComM_HsmComMPncSfPncNoComAction4, funcdef_no=31, decl_uid=6500, cgraph_uid=18, symbol_order=18)

Modification phase of node ComM_HsmComMPncSfPncNoComAction4/18
ComM_HsmComMPncSfPncNoComAction4 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMPncSfPncNoComAction1 (instIdx_2(D)); [tail call]
  return;

}



;; Function ComM_HsmComMPncSfPncNoComNotifyEntry (ComM_HsmComMPncSfPncNoComNotifyEntry, funcdef_no=18, decl_uid=6502, cgraph_uid=19, symbol_order=19)

Modification phase of node ComM_HsmComMPncSfPncNoComNotifyEntry/19
ComM_HsmComMPncSfPncNoComNotifyEntry (const uint16 instIdx)
{
  int _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_3(D);
  _2 = ComM_PncID[_1];
  BswM_ComM_CurrentPNCMode (_2, 3);
  return;

}



;; Function ComM_PncProcessTimers (ComM_PncProcessTimers, funcdef_no=23, decl_uid=6517, cgraph_uid=24, symbol_order=24)

Modification phase of node ComM_PncProcessTimers/24
ComM_PncProcessTimers ()
{
  uint16 PncIdx;
  int _1;
  short unsigned int _2;
  short unsigned int _3;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG emitEvent => 0
  # DEBUG BEGIN_STMT
  # DEBUG PncIdx => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  # DEBUG emitEvent => 0
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _1 = (int) PncIdx_4;
  _2 = ComM_PncTimer[_1];
  if (_2 != 0)
    goto <bb 5>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 4> [local count: 236235013]:
  # DEBUG emitEvent => 0
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 479628662]:
  # DEBUG BEGIN_STMT
  _3 = _2 + 65535;
  ComM_PncTimer[_1] = _3;
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 239814331]:
  # DEBUG BEGIN_STMT
  # DEBUG emitEvent => 1
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComMPnc, PncIdx_4, 1);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 239814331]:
  # DEBUG emitEvent => 0
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  PncIdx_12 = PncIdx_4 + 1;
  # DEBUG PncIdx => PncIdx_12

  <bb 9> [local count: 1073741824]:
  # PncIdx_4 = PHI <0(2), PncIdx_12(8)>
  # DEBUG PncIdx => PncIdx_4
  # DEBUG BEGIN_STMT
  if (PncIdx_4 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 10>; [33.33%]

  <bb 10> [local count: 357878150]:
  return;

}


