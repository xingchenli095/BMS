
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_RteNotify/68:
  Jump functions of caller  ComM_ASR40_GetCurrentComMode/67:
  Jump functions of caller  Dcm_ComM_NoComModeEntered/66:
  Jump functions of caller  Dcm_ComM_SilentComModeEntered/65:
  Jump functions of caller  Dcm_ComM_FullComModeEntered/64:
  Jump functions of caller  BswM_ComM_CurrentMode/63:
  Jump functions of caller  ComM_HsmEmitToSelfInst/59:
  Jump functions of caller  Nm_NetworkRelease/58:
  Jump functions of caller  ComM_HsmEmitInst/56:
  Jump functions of caller  Nm_NetworkRequest/53:
  Jump functions of caller  Nm_PassiveStartUp/51:
  Jump functions of caller  Nm_GetState/49:
  Jump functions of caller  CanSM_RequestComMode/48:
  Jump functions of caller  ComM_RteNotificationDoAction/46:
    callsite  ComM_RteNotificationDoAction/46 -> ComM_SwitchCurrentRteMode/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_IsNotRequested/45:
  Jump functions of caller  ComM_IsFullComAllowed/41:
  Jump functions of caller  ComM_SwitchCurrentRteMode/40:
  Jump functions of caller  ComM_Notify2Arg/39:
    callsite  ComM_Notify2Arg/39 -> ComM_SwitchCurrentRteMode/40 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_ProcessTimers/38:
  Jump functions of caller  ComM_HsmComMSfSILENT_COMMUNICATIONGuard3/37:
  Jump functions of caller  ComM_HsmComMSfSILENT_COMMUNICATIONGuard2/36:
  Jump functions of caller  ComM_HsmComMSfSILENT_COMMUNICATIONGuard1/35:
  Jump functions of caller  ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34:
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5/33:
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4/32:
    callsite  ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4/32 -> ComM_IsNotRequested/45 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3/31:
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2/30:
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2/29:
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1/28:
  Jump functions of caller  ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27:
  Jump functions of caller  ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2/26:
  Jump functions of caller  ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1/25:
  Jump functions of caller  ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry/24:
  Jump functions of caller  ComM_HsmComMSfNO_COMMUNICATIONEntry/23:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_READY_SLEEPAction3/22:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21:
    callsite  ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21 -> ComM_IsFullComAllowed/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1/20:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_READY_SLEEPExit/19:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1/17:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4/16:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3/15:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2/14:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13:
    callsite  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13 -> ComM_IsFullComAllowed/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit/12:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry/11:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3/10:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9:
    callsite  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9 -> ComM_IsFullComAllowed/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1/8:
  Jump functions of caller  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7:
    callsite  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 -> ComM_IsFullComAllowed/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmComMSfFULL_COMMUNICATIONGuard2/6:
  Jump functions of caller  ComM_HsmComMSfFULL_COMMUNICATIONEntry/5:
  Jump functions of caller  ComM_HsmComMSfTOPAction1/4:
    callsite  ComM_HsmComMSfTOPAction1/4 -> ComM_Notify2Arg/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering ComM_RteNotificationDoAction for cloning; -fipa-cp-clone disabled.
Not considering ComM_SwitchCurrentRteMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Notify2Arg for cloning; -fipa-cp-clone disabled.
Not considering ComM_ProcessTimers for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfSILENT_COMMUNICATIONGuard3/37 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMSfSILENT_COMMUNICATIONGuard2/36 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfSILENT_COMMUNICATIONGuard1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfSILENT_COMMUNICATIONEntry for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5/33 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4 for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3/31 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2/30 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2/26 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfNO_COMMUNICATIONEntry for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfFULL_COM_READY_SLEEPAction3/22 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2 for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1/20 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMSfFULL_COM_READY_SLEEPExit/19 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfFULL_COM_READY_SLEEPEntry for cloning; -fipa-cp-clone disabled.
Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1/17 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4/16 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3/15 is not versionable, reason: not a tree_versionable_function.
Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2/14 is not versionable, reason: not a tree_versionable_function.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COMMUNICATIONGuard2 for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfFULL_COMMUNICATIONEntry for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmComMSfTOPAction1 for cloning; -fipa-cp-clone disabled.

overall_size: 342, max_new_size: 11001
 - context independent values, size: 10, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 0, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 9, time_benefit: 1.000000
 - context independent values, size: 5, time_benefit: 1.000000
 - context independent values, size: 9, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ComM_RteNotificationDoAction/46:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_IsNotRequested/45:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_IsFullComAllowed/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: ComM_SwitchCurrentRteMode/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Notify2Arg/39:
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
  Node: ComM_ProcessTimers/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfSILENT_COMMUNICATIONGuard3/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfSILENT_COMMUNICATIONGuard2/36:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfSILENT_COMMUNICATIONGuard1/35:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5/33:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3/31:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2/30:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2/29:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1/25:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry/24:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfNO_COMMUNICATIONEntry/23:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_READY_SLEEPAction3/22:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_READY_SLEEPExit/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COMMUNICATIONGuard2/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfFULL_COMMUNICATIONEntry/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_HsmComMSfTOPAction1/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit/12 for all known contexts.

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit.constprop.0/71 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit.constprop) @06dbe700
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit/12
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: ComM_HsmComMSfFULL_COM_READY_SLEEPExit/19 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_READY_SLEEPAction3/22 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2/30 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_RteNotify/68 (ComM_RteNotify) @06e040e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_SwitchCurrentRteMode/40 (104068131 (estimated locally),0.88 per call) 
  Calls: 
ComM_ASR40_GetCurrentComMode/67 (ComM_ASR40_GetCurrentComMode) @06e04000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_SwitchCurrentRteMode/40 (315357973 (estimated locally),2.67 per call) 
  Calls: 
Dcm_ComM_NoComModeEntered/66 (Dcm_ComM_NoComModeEntered) @06df3e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Notify2Arg/39 (62175836 (estimated locally),0.53 per call) 
  Calls: 
Dcm_ComM_SilentComModeEntered/65 (Dcm_ComM_SilentComModeEntered) @06df3d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Notify2Arg/39 (32029976 (estimated locally),0.27 per call) 
  Calls: 
Dcm_ComM_FullComModeEntered/64 (Dcm_ComM_FullComModeEntered) @06df3c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Notify2Arg/39 (23905788 (estimated locally),0.20 per call) 
  Calls: 
BswM_ComM_CurrentMode/63 (BswM_ComM_CurrentMode) @06df3b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Notify2Arg/39 (118111601 (estimated locally),1.00 per call) 
  Calls: 
ComM_RteNotificationSuccessful/62 (ComM_RteNotificationSuccessful) @06dfaea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_SwitchCurrentRteMode/40 (read)ComM_Notify2Arg/39 (write)
  Availability: not_available
  Varpool flags:
ComM_ConfigPtr/61 (ComM_ConfigPtr) @06dfae58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_SwitchCurrentRteMode/40 (read)ComM_Notify2Arg/39 (read)
  Availability: not_available
  Varpool flags:
ComM_Communication_Allowed/60 (ComM_Communication_Allowed) @06df12d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1/28 (read)
  Availability: not_available
  Varpool flags:
ComM_HsmEmitToSelfInst/59 (ComM_HsmEmitToSelfInst) @06de6b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Nm_NetworkRelease/58 (Nm_NetworkRelease) @06de61c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMSfNO_COMMUNICATIONEntry/23 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_HsmScComM/57 (ComM_HsmScComM) @06de3318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMSfNO_COMMUNICATIONEntry/23 (addr)ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27 (addr)ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry/11 (addr)ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18 (addr)ComM_ProcessTimers/38 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_HsmEmitInst/56 (ComM_HsmEmitInst) @06dcca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_ProcessTimers/38 (177167401 (estimated locally),0.17 per call) ComM_HsmComMSfNO_COMMUNICATIONEntry/23 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_DcmActiveStatus/55 (ComM_DcmActiveStatus) @06dcbb88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_IsFullComAllowed/41 (read)ComM_IsNotRequested/45 (read)
  Availability: not_available
  Varpool flags:
ComM_RequestedComMode/54 (ComM_RequestedComMode) @06dcbb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_IsFullComAllowed/41 (read)ComM_IsNotRequested/45 (read)
  Availability: not_available
  Varpool flags:
Nm_NetworkRequest/53 (Nm_NetworkRequest) @06dcc540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1/8 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (365072220 (estimated locally),0.34 per call) 
  Calls: 
ComM_PassiveStartupStatus/52 (ComM_PassiveStartupStatus) @06dcb828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (read)ComM_HsmComMSfNO_COMMUNICATIONEntry/23 (write)ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34 (write)
  Availability: not_available
  Varpool flags:
Nm_PassiveStartUp/51 (Nm_PassiveStartUp) @06dcc460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (73890617 (estimated locally),0.07 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
ComM_ChanState/50 (ComM_ChanState) @06dcb798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry/24 (write)ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27 (write)ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (write)ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18 (write)ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34 (write)
  Availability: not_available
  Varpool flags:
Nm_GetState/49 (Nm_GetState) @06dcc2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMSfSILENT_COMMUNICATIONGuard1/35 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3/10 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COMMUNICATIONGuard2/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanSM_RequestComMode/48 (CanSM_RequestComMode) @06dcc0e0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfNO_COMMUNICATIONEntry/23 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COMMUNICATIONEntry/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_ChannelMode/47 (ComM_ChannelMode) @06d63318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_Notify2Arg/39 (read)ComM_HsmComMSfTOPAction1/4 (read)
  Availability: not_available
  Varpool flags:
ComM_RteNotificationDoAction/46 (ComM_RteNotificationDoAction) @06dbee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_SwitchCurrentRteMode/40 (1073741824 (estimated locally),1.00 per call) 
ComM_IsNotRequested/45 (ComM_IsNotRequested) @06dbec40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_RequestedComMode/54 (read)ComM_ChannelPassiveWakeup/3 (read)ComM_DcmActiveStatus/55 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4/32 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_IsFullComAllowed/41 (ComM_IsFullComAllowed) @06dbe540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: ComM_RequestedComMode/54 (read)ComM_DcmActiveStatus/55 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local icf_merged optimize_size
  Called by: ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_SwitchCurrentRteMode/40 (ComM_SwitchCurrentRteMode) @06dbe380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_RteNotificationSuccessful/62 (read)ComM_ConfigPtr/61 (read)
  Referring: 
  Availability: available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: ComM_RteNotificationDoAction/46 (1073741824 (estimated locally),1.00 per call) ComM_Notify2Arg/39 (118111601 (estimated locally),1.00 per call) 
  Calls: ComM_RteNotify/68 (104068131 (estimated locally),0.88 per call) ComM_ASR40_GetCurrentComMode/67 (315357973 (estimated locally),2.67 per call) 
ComM_Notify2Arg/39 (ComM_Notify2Arg) @06dbe0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_RteNotificationSuccessful/62 (write)ComM_ConfigPtr/61 (read)ComM_ChannelMode/47 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: ComM_HsmComMSfTOPAction1/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_ComM_NoComModeEntered/66 (62175836 (estimated locally),0.53 per call) Dcm_ComM_SilentComModeEntered/65 (32029976 (estimated locally),0.27 per call) Dcm_ComM_FullComModeEntered/64 (23905788 (estimated locally),0.20 per call) BswM_ComM_CurrentMode/63 (118111601 (estimated locally),1.00 per call) ComM_SwitchCurrentRteMode/40 (118111601 (estimated locally),1.00 per call) 
ComM_ProcessTimers/38 (ComM_ProcessTimers) @06db9e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_Timer/1 (read)ComM_Timer/1 (write)ComM_TimeoutEvent/2 (read)ComM_HsmScComM/57 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/56 (177167401 (estimated locally),0.17 per call) 
ComM_HsmComMSfSILENT_COMMUNICATIONGuard3/37 (ComM_HsmComMSfSILENT_COMMUNICATIONGuard3) @06db9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfSILENT_COMMUNICATIONGuard2/36 (ComM_HsmComMSfSILENT_COMMUNICATIONGuard2) @06db9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COMMUNICATIONGuard2/6 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfSILENT_COMMUNICATIONGuard1/35 (ComM_HsmComMSfSILENT_COMMUNICATIONGuard1) @06db98c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Nm_GetState/49 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34 (ComM_HsmComMSfSILENT_COMMUNICATIONEntry) @06db9700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChanState/50 (write)ComM_PassiveStartupStatus/52 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_RequestComMode/48 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5/33 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5) @06db9540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2/29 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4/32 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4) @06db9380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_IsNotRequested/45 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3/31 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3) @06db91c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1/25 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2/30 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2) @06db9000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit.constprop/71 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2/29 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2) @06db7e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5/33 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1/28 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1) @06db7c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_Communication_Allowed/60 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry) @06db7a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChanState/50 (write)ComM_HsmScComM/57 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitToSelfInst/59 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2/26 (ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2) @06db77e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1/25 (ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1) @06db7620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChannelPassiveWakeup/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3/31 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry/24 (ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry) @06db7460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChanState/50 (write)ComM_ChannelPassiveWakeup/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_HsmComMSfNO_COMMUNICATIONEntry/23 (ComM_HsmComMSfNO_COMMUNICATIONEntry) @06db72a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_PassiveStartupStatus/52 (write)ComM_HsmScComM/57 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_RequestComMode/48 (1073741824 (estimated locally),1.00 per call) ComM_HsmEmitInst/56 (1073741824 (estimated locally),1.00 per call) Nm_NetworkRelease/58 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_READY_SLEEPAction3/22 (ComM_HsmComMSfFULL_COM_READY_SLEEPAction3) @06db2ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit.constprop/71 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21 (ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2) @06db2d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfSILENT_COMMUNICATIONGuard3/37 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2/26 (1073741824 (estimated locally),1.00 per call) 
  Calls: ComM_IsFullComAllowed/41 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1/20 (ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1) @06db2b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3/10 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_READY_SLEEPExit/19 (ComM_HsmComMSfFULL_COM_READY_SLEEPExit) @06db29a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit.constprop/71 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18 (ComM_HsmComMSfFULL_COM_READY_SLEEPEntry) @06db27e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChanState/50 (write)ComM_HsmScComM/57 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/56 (1073741824 (estimated locally),1.00 per call) Nm_NetworkRelease/58 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1/17 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1) @06db2460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4/16 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4) @06db22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3/15 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3) @06db20e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2/14 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2) @06d6cee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1) @06d6cd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: ComM_IsFullComAllowed/41 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit/12 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit) @06d6cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry/11 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry) @06d6c9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_HsmScComM/57 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/56 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3/10 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3) @06d6c700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: Nm_GetState/49 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2) @06d6c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1/17 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3/15 (1073741824 (estimated locally),1.00 per call) ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: ComM_IsFullComAllowed/41 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1/8 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1) @06d6c380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Nm_NetworkRequest/53 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry) @06d6c0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChanState/50 (write)ComM_PassiveStartupStatus/52 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Nm_NetworkRequest/53 (365072220 (estimated locally),0.34 per call) Nm_PassiveStartUp/51 (73890617 (estimated locally),0.07 per call) Nm_PassiveStartUp/51 (354334802 (estimated locally),0.33 per call) ComM_IsFullComAllowed/41 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COMMUNICATIONGuard2/6 (ComM_HsmComMSfFULL_COMMUNICATIONGuard2) @06d68c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ComM_HsmComMSfSILENT_COMMUNICATIONGuard2/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: Nm_GetState/49 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfFULL_COMMUNICATIONEntry/5 (ComM_HsmComMSfFULL_COMMUNICATIONEntry) @06d68a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanSM_RequestComMode/48 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmComMSfTOPAction1/4 (ComM_HsmComMSfTOPAction1) @06d688c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ChannelMode/47 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_Notify2Arg/39 (1073741824 (estimated locally),1.00 per call) 
ComM_ChannelPassiveWakeup/3 (ComM_ChannelPassiveWakeup) @06d631b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1/25 (write)ComM_IsNotRequested/45 (read)ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry/24 (write)
  Availability: available
  Varpool flags:
ComM_TimeoutEvent/2 (ComM_TimeoutEvent) @06d63168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: ComM_ProcessTimers/38 (read)
  Availability: available
  Varpool flags: read-only const-value-known
ComM_Timer/1 (ComM_Timer) @06d63120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: ComM_ProcessTimers/38 (read)ComM_ProcessTimers/38 (write)
  Availability: available
  Varpool flags:

;; Function ComM_IsFullComAllowed (ComM_IsFullComAllowed, funcdef_no=37, decl_uid=6775, cgraph_uid=38, symbol_order=41)

Modification phase of node ComM_IsFullComAllowed/41
ComM_IsFullComAllowed (uint8 Channel)
{
  int _1;
  unsigned char _2;
  unsigned char _3;
  boolean iftmp.2_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_5(D);
  _2 = ComM_RequestedComMode[_1];
  if (_2 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  _3 = ComM_DcmActiveStatus[_1];
  if (_3 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 467721939]:

  <bb 5> [local count: 1073741824]:
  # iftmp.2_4 = PHI <1(3), 0(4), 1(2)>
  # DEBUG ret => iftmp.2_4
  # DEBUG BEGIN_STMT
  return iftmp.2_4;

}



;; Function ComM_HsmComMSfFULL_COMMUNICATIONEntry (ComM_HsmComMSfFULL_COMMUNICATIONEntry, funcdef_no=1, decl_uid=6315, cgraph_uid=2, symbol_order=5)

Modification phase of node ComM_HsmComMSfFULL_COMMUNICATIONEntry/5
ComM_HsmComMSfFULL_COMMUNICATIONEntry (const uint16 instIdx)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_2(D);
  CanSM_RequestComMode (_1, 2);
  return;

}



;; Function ComM_HsmComMSfFULL_COMMUNICATIONGuard2 (ComM_HsmComMSfFULL_COMMUNICATIONGuard2, funcdef_no=2, decl_uid=6317, cgraph_uid=3, symbol_order=6)

Modification phase of node ComM_HsmComMSfFULL_COMMUNICATIONGuard2/6
ComM_HsmComMSfFULL_COMMUNICATIONGuard2 (const uint16 instIdx)
{
  Nm_ModeType nmMode;
  Nm_StateType nmState;
  unsigned char nmMode.1_1;
  boolean iftmp.0_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Nm_GetState (0, &nmState, &nmMode);
  # DEBUG BEGIN_STMT
  nmMode.1_1 = nmMode;
  if (nmMode.1_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.0_2 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.0_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  nmState ={v} {CLOBBER};
  nmMode ={v} {CLOBBER};
  return iftmp.0_2;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry, funcdef_no=3, decl_uid=6319, cgraph_uid=4, symbol_order=7)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry/7
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDEntry (const uint16 instIdx)
{
  boolean IsFullComAllowed;
  unsigned char _1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG IsFullComAllowed => 0
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_7(D);
  IsFullComAllowed_9 = ComM_IsFullComAllowed (_1);
  # DEBUG IsFullComAllowed => IsFullComAllowed_9
  # DEBUG BEGIN_STMT
  _2 = (int) instIdx_7(D);
  ComM_ChanState[_2] = 2;
  # DEBUG BEGIN_STMT
  if (IsFullComAllowed_9 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Nm_PassiveStartUp (0);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (IsFullComAllowed_9 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 5> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = ComM_PassiveStartupStatus[_2];
  if (_3 == 1)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  Nm_PassiveStartUp (0);

  <bb 7> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Nm_NetworkRequest (0);

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1, funcdef_no=4, decl_uid=6321, cgraph_uid=5, symbol_order=8)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1/8
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDAction1 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Nm_NetworkRequest (0);
  return;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2, funcdef_no=5, decl_uid=6323, cgraph_uid=6, symbol_order=9)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2/9
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2 (const uint16 instIdx)
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.3_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_4(D);
  _2 = ComM_IsFullComAllowed (_1);
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.3_3 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.3_3
  # DEBUG BEGIN_STMT
  return iftmp.3_3;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3, funcdef_no=6, decl_uid=6325, cgraph_uid=7, symbol_order=10)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3/10
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3 (const uint16 instIdx)
{
  Nm_ModeType nmMode;
  Nm_StateType nmState;
  unsigned char nmMode.5_1;
  boolean iftmp.4_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Nm_GetState (0, &nmState, &nmMode);
  # DEBUG BEGIN_STMT
  nmMode.5_1 = nmMode;
  if (nmMode.5_1 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.4_2 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.4_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  nmState ={v} {CLOBBER};
  nmMode ={v} {CLOBBER};
  return iftmp.4_2;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry, funcdef_no=7, decl_uid=6327, cgraph_uid=8, symbol_order=11)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry/11
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYEntry (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, instIdx_2(D), 9);
  return;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit, funcdef_no=8, decl_uid=6329, cgraph_uid=9, symbol_order=12)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit/12
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1, funcdef_no=9, decl_uid=6331, cgraph_uid=10, symbol_order=13)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1/13
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1 (const uint16 instIdx)
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.6_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_4(D);
  _2 = ComM_IsFullComAllowed (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.6_3 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.6_3
  # DEBUG BEGIN_STMT
  return iftmp.6_3;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2, funcdef_no=48, decl_uid=6333, cgraph_uid=11, symbol_order=14)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2/14
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard2 (const uint16 instIdx)
{
  boolean retval.80;

  <bb 2> [local count: 1073741824]:
  retval.80_3 = ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2 (instIdx_2(D)); [tail call]
  return retval.80_3;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3, funcdef_no=50, decl_uid=6335, cgraph_uid=12, symbol_order=15)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3/15
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard3 (const uint16 instIdx)
{
  boolean retval.81;

  <bb 2> [local count: 1073741824]:
  retval.81_3 = ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2 (instIdx_2(D)); [tail call]
  return retval.81_3;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4, funcdef_no=66, decl_uid=6337, cgraph_uid=13, symbol_order=16)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4/16
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard4 (const uint16 instIdx)
{
  boolean retval.86;

  <bb 2> [local count: 1073741824]:
  retval.86_3 = ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYGuard1 (instIdx_2(D)); [tail call]
  return retval.86_3;

}



;; Function ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1 (ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1, funcdef_no=52, decl_uid=6339, cgraph_uid=14, symbol_order=17)

Modification phase of node ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1/17
ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_PENDINGGuard1 (const uint16 instIdx)
{
  boolean retval.82;

  <bb 2> [local count: 1073741824]:
  retval.82_3 = ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard2 (instIdx_2(D)); [tail call]
  return retval.82_3;

}



;; Function ComM_HsmComMSfFULL_COM_READY_SLEEPEntry (ComM_HsmComMSfFULL_COM_READY_SLEEPEntry, funcdef_no=14, decl_uid=6341, cgraph_uid=15, symbol_order=18)

Modification phase of node ComM_HsmComMSfFULL_COM_READY_SLEEPEntry/18
ComM_HsmComMSfFULL_COM_READY_SLEEPEntry (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_ChanState[_1] = 3;
  # DEBUG BEGIN_STMT
  Nm_NetworkRelease (0);
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, instIdx_2(D), 9);
  return;

}



;; Function ComM_HsmComMSfFULL_COM_READY_SLEEPExit (ComM_HsmComMSfFULL_COM_READY_SLEEPExit, funcdef_no=60, decl_uid=6343, cgraph_uid=16, symbol_order=19)

Modification phase of node ComM_HsmComMSfFULL_COM_READY_SLEEPExit/19
ComM_HsmComMSfFULL_COM_READY_SLEEPExit (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit (instIdx_1(D)); [tail call]
  return;

}



;; Function ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1 (ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1, funcdef_no=58, decl_uid=6345, cgraph_uid=17, symbol_order=20)

Modification phase of node ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1/20
ComM_HsmComMSfFULL_COM_READY_SLEEPGuard1 (const uint16 instIdx)
{
  boolean retval.85;

  <bb 2> [local count: 1073741824]:
  retval.85_4 = ComM_HsmComMSfFULL_COM_NETWORK_REQUESTEDGuard3 (instIdx_2(D)); [tail call]
  return retval.85_4;

}



;; Function ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2 (ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2, funcdef_no=17, decl_uid=6347, cgraph_uid=18, symbol_order=21)

Modification phase of node ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2/21
ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2 (const uint16 instIdx)
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.13_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_4(D);
  _2 = ComM_IsFullComAllowed (_1);
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.13_3 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.13_3
  # DEBUG BEGIN_STMT
  return iftmp.13_3;

}



;; Function ComM_HsmComMSfFULL_COM_READY_SLEEPAction3 (ComM_HsmComMSfFULL_COM_READY_SLEEPAction3, funcdef_no=62, decl_uid=6349, cgraph_uid=19, symbol_order=22)

Modification phase of node ComM_HsmComMSfFULL_COM_READY_SLEEPAction3/22
ComM_HsmComMSfFULL_COM_READY_SLEEPAction3 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit (instIdx_1(D)); [tail call]
  return;

}



;; Function ComM_HsmComMSfNO_COMMUNICATIONEntry (ComM_HsmComMSfNO_COMMUNICATIONEntry, funcdef_no=19, decl_uid=6351, cgraph_uid=20, symbol_order=23)

Modification phase of node ComM_HsmComMSfNO_COMMUNICATIONEntry/23
ComM_HsmComMSfNO_COMMUNICATIONEntry (const uint16 instIdx)
{
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_3(D);
  ComM_PassiveStartupStatus[_1] = 0;
  # DEBUG BEGIN_STMT
  Nm_NetworkRelease (0);
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (&ComM_HsmScComM, instIdx_3(D), 9);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) instIdx_3(D);
  CanSM_RequestComMode (_2, 0);
  return;

}



;; Function ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry (ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry, funcdef_no=20, decl_uid=6353, cgraph_uid=21, symbol_order=24)

Modification phase of node ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry/24
ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTEntry (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_ChanState[_1] = 0;
  # DEBUG BEGIN_STMT
  ComM_ChannelPassiveWakeup[_1] = 0;
  return;

}



;; Function ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1 (ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1, funcdef_no=21, decl_uid=6355, cgraph_uid=22, symbol_order=25)

Modification phase of node ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1/25
ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1 (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_ChannelPassiveWakeup[_1] = 1;
  return;

}



;; Function ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2 (ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2, funcdef_no=54, decl_uid=6357, cgraph_uid=23, symbol_order=26)

Modification phase of node ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2/26
ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTGuard2 (const uint16 instIdx)
{
  boolean retval.83;

  <bb 2> [local count: 1073741824]:
  retval.83_3 = ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2 (instIdx_2(D)); [tail call]
  return retval.83_3;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry (ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry, funcdef_no=23, decl_uid=6359, cgraph_uid=24, symbol_order=27)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry/27
ComM_HsmComMSfNO_COM_REQUEST_PENDINGEntry (const uint16 instIdx)
{
  int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  ComM_ChanState[_1] = 1;
  # DEBUG BEGIN_STMT
  ComM_HsmEmitToSelfInst (&ComM_HsmScComM, instIdx_2(D), 4);
  return;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1, funcdef_no=24, decl_uid=6361, cgraph_uid=25, symbol_order=28)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1/28
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard1 (const uint16 instIdx)
{
  int _1;
  boolean _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_2(D);
  _4 = ComM_Communication_Allowed[_1];
  return _4;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2, funcdef_no=25, decl_uid=6363, cgraph_uid=26, symbol_order=29)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2/29
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => (unsigned char) instIdx_1(D)
  # DEBUG INLINE_ENTRY NULL
  # DEBUG Channel => D#1
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2, funcdef_no=64, decl_uid=6365, cgraph_uid=27, symbol_order=30)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2/30
ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction2 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMSfFULL_COM_NETWORK_REQUESTED_ENTRYExit (instIdx_1(D)); [tail call]
  return;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3, funcdef_no=68, decl_uid=6367, cgraph_uid=28, symbol_order=31)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3/31
ComM_HsmComMSfNO_COM_REQUEST_PENDINGAction3 (const uint16 instIdx)
{
  <bb 2> [local count: 1073741824]:
  ComM_HsmComMSfNO_COM_NO_PENDING_REQUESTAction1 (instIdx_2(D)); [tail call]
  return;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4, funcdef_no=28, decl_uid=6369, cgraph_uid=29, symbol_order=32)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4/32
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard4 (const uint16 instIdx)
{
  unsigned char _1;
  unsigned char _2;
  boolean iftmp.17_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_4(D);
  _2 = ComM_IsNotRequested (_1);
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:

  <bb 4> [local count: 1073741824]:
  # iftmp.17_3 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.17_3
  # DEBUG BEGIN_STMT
  return iftmp.17_3;

}



;; Function ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5 (ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5, funcdef_no=70, decl_uid=6371, cgraph_uid=30, symbol_order=33)

Modification phase of node ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5/33
ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard5 (const uint16 instIdx)
{
  boolean retval.87;

  <bb 2> [local count: 1073741824]:
  retval.87_2 = ComM_HsmComMSfNO_COM_REQUEST_PENDINGGuard2 (instIdx_1(D)); [tail call]
  return retval.87_2;

}



;; Function ComM_HsmComMSfSILENT_COMMUNICATIONEntry (ComM_HsmComMSfSILENT_COMMUNICATIONEntry, funcdef_no=30, decl_uid=6373, cgraph_uid=31, symbol_order=34)

Modification phase of node ComM_HsmComMSfSILENT_COMMUNICATIONEntry/34
ComM_HsmComMSfSILENT_COMMUNICATIONEntry (const uint16 instIdx)
{
  int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) instIdx_3(D);
  ComM_ChanState[_1] = 4;
  # DEBUG BEGIN_STMT
  ComM_PassiveStartupStatus[_1] = 0;
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) instIdx_3(D);
  CanSM_RequestComMode (_2, 1);
  return;

}



;; Function ComM_HsmComMSfSILENT_COMMUNICATIONGuard1 (ComM_HsmComMSfSILENT_COMMUNICATIONGuard1, funcdef_no=31, decl_uid=6375, cgraph_uid=32, symbol_order=35)

Modification phase of node ComM_HsmComMSfSILENT_COMMUNICATIONGuard1/35
ComM_HsmComMSfSILENT_COMMUNICATIONGuard1 (const uint16 instIdx)
{
  Nm_ModeType nmMode;
  Nm_StateType nmState;
  unsigned char nmMode.21_1;
  boolean iftmp.20_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Nm_GetState (0, &nmState, &nmMode);
  # DEBUG BEGIN_STMT
  nmMode.21_1 = nmMode;
  if (nmMode.21_1 == 3)
    goto <bb 4>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:

  <bb 4> [local count: 1073741824]:
  # iftmp.20_2 = PHI <1(2), 0(3)>
  # DEBUG ret => iftmp.20_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  nmState ={v} {CLOBBER};
  nmMode ={v} {CLOBBER};
  return iftmp.20_2;

}



;; Function ComM_HsmComMSfSILENT_COMMUNICATIONGuard2 (ComM_HsmComMSfSILENT_COMMUNICATIONGuard2, funcdef_no=46, decl_uid=6377, cgraph_uid=33, symbol_order=36)

Modification phase of node ComM_HsmComMSfSILENT_COMMUNICATIONGuard2/36
ComM_HsmComMSfSILENT_COMMUNICATIONGuard2 (const uint16 instIdx)
{
  boolean retval.79;

  <bb 2> [local count: 1073741824]:
  retval.79_4 = ComM_HsmComMSfFULL_COMMUNICATIONGuard2 (instIdx_2(D)); [tail call]
  return retval.79_4;

}



;; Function ComM_HsmComMSfSILENT_COMMUNICATIONGuard3 (ComM_HsmComMSfSILENT_COMMUNICATIONGuard3, funcdef_no=56, decl_uid=6379, cgraph_uid=34, symbol_order=37)

Modification phase of node ComM_HsmComMSfSILENT_COMMUNICATIONGuard3/37
ComM_HsmComMSfSILENT_COMMUNICATIONGuard3 (const uint16 instIdx)
{
  boolean retval.84;

  <bb 2> [local count: 1073741824]:
  retval.84_3 = ComM_HsmComMSfFULL_COM_READY_SLEEPGuard2 (instIdx_2(D)); [tail call]
  return retval.84_3;

}



;; Function ComM_ProcessTimers (ComM_ProcessTimers, funcdef_no=34, decl_uid=6504, cgraph_uid=35, symbol_order=38)

Modification phase of node ComM_ProcessTimers/38
ComM_ProcessTimers (uint8 Channel)
{
  int _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) Channel_7(D);
  _2 = ComM_Timer[_1];
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = _2 + 65535;
  ComM_Timer[_1] = _3;
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  _4 = (short unsigned int) Channel_7(D);
  _5 = ComM_TimeoutEvent[_1];
  ComM_HsmEmitInst (&ComM_HsmScComM, _4, _5);

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function ComM_SwitchCurrentRteMode (ComM_SwitchCurrentRteMode, funcdef_no=36, decl_uid=6499, cgraph_uid=37, symbol_order=40)

Modification phase of node ComM_SwitchCurrentRteMode/40
ComM_SwitchCurrentRteMode (uint8 Channel)
{
  ComM_ASR40_ModeType CurComMMode;
  const uint8 User;
  uint8_least i;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  sizetype _4;
  const uint8 * _5;
  int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char CurComMMode.33_9;
  const struct ComM_ConfigType * ComM_ConfigPtr.34_10;
  unsigned int _11;
  unsigned int _12;
  short unsigned int _13;
  unsigned char _14;
  int _15;
  short unsigned int _16;
  unsigned char _17;
  unsigned char _18;
  long unsigned int _19;

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = ComM_ConfigPtr.34_10->pUsersOfAllChannel;
  _2 = (long unsigned int) _16;
  _3 = _2 + i_20;
  _4 = _1 + _3;
  _5 = ComM_ConfigPtr.34_10 + _4;
  User_26 = *_5;
  # DEBUG User => User_26
  # DEBUG BEGIN_STMT
  _6 = (int) User_26;
  _7 = ComM_RteNotificationSuccessful[_6];
  if (_7 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 4> [local count: 315357973]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = ComM_ASR40_GetCurrentComMode (User_26, &CurComMMode);
  if (_8 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 104068131]:
  # DEBUG BEGIN_STMT
  CurComMMode.33_9 = CurComMMode;
  ComM_RteNotify (User_26, CurComMMode.33_9);

  <bb 6> [local count: 315357973]:
  CurComMMode ={v} {CLOBBER};

  <bb 7> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  i_30 = i_20 + 1;
  # DEBUG i => i_30

  <bb 8> [local count: 1073741824]:
  # i_20 = PHI <0(2), i_30(7)>
  # DEBUG i => i_20
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.34_10 = ComM_ConfigPtr;
  _11 = (unsigned int) Channel_25(D);
  _12 = _11 + 1;
  _13 = ComM_ConfigPtr.34_10->NumUsersOfAllChannel[_12];
  _14 = (unsigned char) _13;
  _15 = (int) Channel_25(D);
  _16 = ComM_ConfigPtr.34_10->NumUsersOfAllChannel[_15];
  _17 = (unsigned char) _16;
  _18 = _14 - _17;
  _19 = (long unsigned int) _18;
  if (_19 > i_20)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  return;

}



;; Function ComM_Notify2Arg (ComM_Notify2Arg, funcdef_no=35, decl_uid=6478, cgraph_uid=36, symbol_order=39)

Modification phase of node ComM_Notify2Arg/39
ComM_Notify2Arg (uint8 Channel, ComM_ModeType ComMMode)
{
  const uint8 User;
  uint8_least i;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  sizetype _4;
  const uint8 * _5;
  int _6;
  const struct ComM_ConfigType * ComM_ConfigPtr.28_7;
  unsigned int _8;
  unsigned int _9;
  short unsigned int _10;
  unsigned char _11;
  int _12;
  int _13;
  short unsigned int _14;
  unsigned char _15;
  unsigned char _16;
  long unsigned int _17;
  unsigned char _18;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = ComM_ConfigPtr.28_7->pUsersOfAllChannel;
  _2 = (long unsigned int) _14;
  _3 = _2 + i_19;
  _4 = _1 + _3;
  _5 = ComM_ConfigPtr.28_7 + _4;
  User_30 = *_5;
  # DEBUG User => User_30
  # DEBUG BEGIN_STMT
  _6 = (int) User_30;
  ComM_RteNotificationSuccessful[_6] = 0;
  # DEBUG BEGIN_STMT
  i_32 = i_19 + 1;
  # DEBUG i => i_32

  <bb 4> [local count: 1073741824]:
  # i_19 = PHI <0(2), i_32(3)>
  # DEBUG i => i_19
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.28_7 = ComM_ConfigPtr;
  _8 = (unsigned int) Channel_23(D);
  _9 = _8 + 1;
  _10 = ComM_ConfigPtr.28_7->NumUsersOfAllChannel[_9];
  _11 = (unsigned char) _10;
  _13 = (int) Channel_23(D);
  _14 = ComM_ConfigPtr.28_7->NumUsersOfAllChannel[_13];
  _15 = (unsigned char) _14;
  _16 = _11 - _15;
  _17 = (long unsigned int) _16;
  if (_17 > i_19)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # _12 = PHI <_13(4)>
  # DEBUG BEGIN_STMT
  ComM_SwitchCurrentRteMode (Channel_23(D));
  # DEBUG BEGIN_STMT
  BswM_ComM_CurrentMode (Channel_23(D), ComMMode_25(D));
  # DEBUG BEGIN_STMT
  _18 = ComM_ChannelMode[_12];
  if (_18 == 2)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 23905788]:
  # DEBUG BEGIN_STMT
  Dcm_ComM_FullComModeEntered (Channel_23(D));
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 94205813]:
  # DEBUG BEGIN_STMT
  if (_18 == 1)
    goto <bb 8>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 8> [local count: 32029976]:
  # DEBUG BEGIN_STMT
  Dcm_ComM_SilentComModeEntered (Channel_23(D));
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 62175836]:
  # DEBUG BEGIN_STMT
  Dcm_ComM_NoComModeEntered (Channel_23(D));

  <bb 10> [local count: 118111601]:
  return;

}



;; Function ComM_HsmComMSfTOPAction1 (ComM_HsmComMSfTOPAction1, funcdef_no=0, decl_uid=6313, cgraph_uid=1, symbol_order=4)

Modification phase of node ComM_HsmComMSfTOPAction1/4
ComM_HsmComMSfTOPAction1 (const uint16 instIdx)
{
  unsigned char _1;
  int _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) instIdx_4(D);
  _2 = (int) instIdx_4(D);
  _3 = ComM_ChannelMode[_2];
  ComM_Notify2Arg (_1, _3);
  return;

}



;; Function ComM_RteNotificationDoAction (ComM_RteNotificationDoAction, funcdef_no=42, decl_uid=6497, cgraph_uid=43, symbol_order=46)

Modification phase of node ComM_RteNotificationDoAction/46
ComM_RteNotificationDoAction (uint8 instIdx)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_SwitchCurrentRteMode (instIdx_2(D));
  # DEBUG BEGIN_STMT
  return;

}


