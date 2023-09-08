
IPA constant propagation start:
Determining dynamic type for call: EcuM_SwitchWakeupStatus (wksCleared_17, 0, CoreInstance_12);
  Starting walk at: EcuM_SwitchWakeupStatus (wksCleared_17, 0, CoreInstance_12);
  instance pointer: CoreInstance_12  Outer instance pointer: CoreInstance_12 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:BswM_EcuM_CurrentState (73);
  Function call may change dynamic type:CoreInstance_12 = EcuM_GetCoreInstance ();
Determining dynamic type for call: result_10 = EcuM_IsValidConfig.part.0 (voidConfigPtr_6(D));
  Starting walk at: result_10 = EcuM_IsValidConfig.part.0 (voidConfigPtr_6(D));
  instance pointer: voidConfigPtr_6(D)  Outer instance pointer: voidConfigPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);
Determining dynamic type for call: EcuM_SwitchWakeupStatus (sources_5, 2, CoreInstance_9);
  Starting walk at: EcuM_SwitchWakeupStatus (sources_5, 2, CoreInstance_9);
  instance pointer: CoreInstance_9  Outer instance pointer: CoreInstance_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:CoreInstance_9 = EcuM_GetCoreInstance ();
Determining dynamic type for call: EcuM_SwitchWakeupStatus (wksPendingNew_29, 1, CoreInstance_25);
  Starting walk at: EcuM_SwitchWakeupStatus (wksPendingNew_29, 1, CoreInstance_25);
  instance pointer: CoreInstance_25  Outer instance pointer: CoreInstance_25 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:CoreInstance_25 = EcuM_GetCoreInstance ();
Determining dynamic type for call: EcuM_SwitchWakeupStatus (_9, 2, CoreInstance_25);
  Starting walk at: EcuM_SwitchWakeupStatus (_9, 2, CoreInstance_25);
  instance pointer: CoreInstance_25  Outer instance pointer: CoreInstance_25 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EcuM_SwitchWakeupStatus (wksPendingNew_29, 1, CoreInstance_25);
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:CoreInstance_25 = EcuM_GetCoreInstance ();
Determining dynamic type for call: EcuM_SwitchWakeupStatus (wksPending_31, 3, CoreInstance_27);
  Starting walk at: EcuM_SwitchWakeupStatus (wksPending_31, 3, CoreInstance_27);
  instance pointer: CoreInstance_27  Outer instance pointer: CoreInstance_27 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:EcuM_WksIndicateStatus ();
  Function call may change dynamic type:EcuM_ExitExclusiveArea ();
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:CoreInstance_27 = EcuM_GetCoreInstance ();
  Function call may change dynamic type:BswM_EcuM_CurrentState (48);
Determining dynamic type for call: EcuM_SwitchWakeupStatus (sources_9(D), 0, CoreInstance_7);
  Starting walk at: EcuM_SwitchWakeupStatus (sources_9(D), 0, CoreInstance_7);
  instance pointer: CoreInstance_7  Outer instance pointer: CoreInstance_7 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:EcuM_EnterExclusiveArea ();
  Function call may change dynamic type:CoreInstance_7 = EcuM_GetCoreInstance ();
Determining dynamic type for call: _2 = EcuM_IsValidConfig (_1);
  Starting walk at: _2 = EcuM_IsValidConfig (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = EcuM_DeterminePbConfiguration ();
  Function call may change dynamic type:EcuM_AL_DriverInitZero ();
  Function call may change dynamic type:CoreInstance_6 = EcuM_GetCoreInstance ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EcuM_IsValidConfig.part.0/103:
  Jump functions of caller  TS_PlatformSigIsValid/99:
  Jump functions of caller  Dem_ReportErrorStatus/97:
  Jump functions of caller  ComM_EcuM_WakeUpIndication/95:
  Jump functions of caller  ComM_GetStatus/93:
  Jump functions of caller  EcuM_CheckValidation/92:
  Jump functions of caller  EcuM_StartWakeupSources/91:
  Jump functions of caller  EcuM_StopWakeupSources/90:
  Jump functions of caller  EcuM_AL_SwitchOff/88:
  Jump functions of caller  EcuM_AL_Reset/87:
  Jump functions of caller  EcuM_OnGoOffTwo/86:
  Jump functions of caller  BswM_Init/85:
  Jump functions of caller  EcuM_SchM_Init/84:
  Jump functions of caller  Mcu_GetResetReason/82:
  Jump functions of caller  EcuM_AL_DriverInitOne/80:
  Jump functions of caller  EcuM_AL_SetProgrammableInterrupts/79:
  Jump functions of caller  OS_UserStartOs/78:
  Jump functions of caller  EcuM_DeterminePbConfiguration/77:
  Jump functions of caller  EcuM_AL_DriverInitZero/76:
  Jump functions of caller  EcuM_CheckWakeup/74:
  Jump functions of caller  EcuM_SleepActivity/73:
  Jump functions of caller  OS_UserReleaseResource/72:
  Jump functions of caller  EcuM_DisableWakeupSources/71:
  Jump functions of caller  EcuM_ErrorHook/70:
  Jump functions of caller  EcuM_CheckRamHash/69:
  Jump functions of caller  EcuM_PostHalt/68:
  Jump functions of caller  Mcu_SetMode/67:
  Jump functions of caller  EcuM_GenerateRamHash/66:
  Jump functions of caller  EcuM_PreHalt/65:
  Jump functions of caller  BswM_EcuM_CurrentWakeup/64:
  Jump functions of caller  OS_UserGetResource/63:
  Jump functions of caller  EcuM_EnableWakeupSources/62:
  Jump functions of caller  EcuM_ExitExclusiveArea/61:
  Jump functions of caller  EcuM_EnterExclusiveArea/60:
  Jump functions of caller  BswM_EcuM_CurrentState/59:
  Jump functions of caller  OS_UserShutdownOs/57:
  Jump functions of caller  EcuM_GetMasterCoreInstance/56:
  Jump functions of caller  EcuM_SchM_Deinit/54:
  Jump functions of caller  BswM_Deinit/53:
  Jump functions of caller  EcuM_OnGoOffOne/52:
  Jump functions of caller  Det_ASR40_ReportError/51:
  Jump functions of caller  EcuM_GetCoreInstance/50:
  Jump functions of caller  EcuM_ComMWakeupIndication/49:
  Jump functions of caller  EcuM_WksIndicateStatus_NONE/48:
  Jump functions of caller  EcuM_WksIndicateStatus_EXPIRED/47:
  Jump functions of caller  EcuM_WksIndicateStatus_VALIDATED/46:
    callsite  EcuM_WksIndicateStatus_VALIDATED/46 -> EcuM_ComMWakeupIndication/49 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x20
         VR  [0, 32]
  Jump functions of caller  EcuM_WksIndicateStatus_PENDING/45:
  Jump functions of caller  EcuM_WksIndicateStatus_DISABLED/44:
  Jump functions of caller  EcuM_SwitchWakeupStatus/43:
  Jump functions of caller  EcuM_WakeupRestart/42:
  Jump functions of caller  EcuM_GoSleep/41:
    callsite  EcuM_GoSleep/41 -> EcuM_WksIndicateStatus_NONE/48 : 
    callsite  EcuM_GoSleep/41 -> EcuM_SwitchWakeupStatus/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_WksIndicateStatus/40:
    callsite  EcuM_WksIndicateStatus/40 -> EcuM_WksIndicateStatus_DISABLED/44 : 
    callsite  EcuM_WksIndicateStatus/40 -> EcuM_WksIndicateStatus_VALIDATED/46 : 
    callsite  EcuM_WksIndicateStatus/40 -> EcuM_WksIndicateStatus_PENDING/45 : 
    callsite  EcuM_WksIndicateStatus/40 -> EcuM_WksIndicateStatus_NONE/48 : 
  Jump functions of caller  EcuM_IsValidConfig/39:
    callsite  EcuM_IsValidConfig/39 -> EcuM_IsValidConfig.part.0/103 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_ValidateWakeupEvent/38:
    callsite  EcuM_ValidateWakeupEvent/38 -> EcuM_SwitchWakeupStatus/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_SetWakeupEvent/37:
    callsite  EcuM_SetWakeupEvent/37 -> EcuM_SwitchWakeupStatus/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3f
         VR  [0, 63]
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  EcuM_SetWakeupEvent/37 -> EcuM_SwitchWakeupStatus/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffc0
         VR  [0, -64]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_ReportRamCheckResult/36:
  Jump functions of caller  EcuM_MainFunction/35:
    callsite  EcuM_MainFunction/35 -> EcuM_ReportRamCheckResult/36 : 
    callsite  EcuM_MainFunction/35 -> EcuM_WksIndicateStatus_EXPIRED/47 : 
    callsite  EcuM_MainFunction/35 -> EcuM_SwitchWakeupStatus/43 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  EcuM_MainFunction/35 -> EcuM_WksIndicateStatus/40 : 
  Jump functions of caller  EcuM_GetExpiredWakeupEvents/34:
  Jump functions of caller  EcuM_GetValidatedWakeupEvents/33:
  Jump functions of caller  EcuM_ClearWakeupEvent/32:
    callsite  EcuM_ClearWakeupEvent/32 -> EcuM_SwitchWakeupStatus/43 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_GetPendingWakeupEvents/31:
  Jump functions of caller  EcuM_ASR40_GetNextRecentShutdown/30:
  Jump functions of caller  EcuM_ASR40_GetMostRecentShutdown/29:
  Jump functions of caller  EcuM_ASR40_GetShutdownCause/28:
  Jump functions of caller  EcuM_ASR40_SelectShutdownCause/27:
  Jump functions of caller  EcuM_ASR40_GetLastShutdownTarget/26:
  Jump functions of caller  EcuM_ASR40_GetShutdownTarget/25:
  Jump functions of caller  EcuM_ASR40_SelectShutdownTarget/24:
    callsite  EcuM_ASR40_SelectShutdownTarget/24 -> EcuM_SelectShutdownTargetSequence/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  EcuM_SelectShutdownTargetSequence/23:
  Jump functions of caller  EcuM_Shutdown/22:
  Jump functions of caller  EcuM_StartupTwo/21:
  Jump functions of caller  EcuM_Init/20:
    callsite  EcuM_Init/20 -> EcuM_Init_SingleCore/19 : 
    callsite  EcuM_Init/20 -> EcuM_IsValidConfig/39 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_Init_SingleCore/19:
    callsite  EcuM_Init_SingleCore/19 -> EcuM_StartPreOS/18 : 
  Jump functions of caller  EcuM_StartPreOS/18:
    callsite  EcuM_StartPreOS/18 -> EcuM_SetSleepOrResetMode/16 : 
    callsite  EcuM_StartPreOS/18 -> EcuM_SearchResetReason/17 : 
  Jump functions of caller  EcuM_SearchResetReason/17:
    callsite  EcuM_SearchResetReason/17 -> EcuM_SetWakeupEvent/37 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuM_SetSleepOrResetMode/16:
  Jump functions of caller  EcuM_GoPoll/15:
    callsite  EcuM_GoPoll/15 -> EcuM_WakeupRestart/42 : 
    callsite  EcuM_GoPoll/15 -> EcuM_GoSleep/41 : 
  Jump functions of caller  EcuM_HaltSequence/14:
  Jump functions of caller  EcuM_GoHalt/13:
    callsite  EcuM_GoHalt/13 -> EcuM_WakeupRestart/42 : 
    callsite  EcuM_GoHalt/13 -> EcuM_HaltSequence/14 : 
    callsite  EcuM_GoHalt/13 -> EcuM_GoSleep/41 : 
  Jump functions of caller  EcuM_GoDownMaster/12:
  Jump functions of caller  EcuM_GoDown/11:
    callsite  EcuM_GoDown/11 -> EcuM_GoDownMaster/12 : 

 Propagating constants:

Not considering EcuM_IsValidConfig for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ValidateWakeupEvent for cloning; -fipa-cp-clone disabled.
Not considering EcuM_SetWakeupEvent for cloning; -fipa-cp-clone disabled.
Not considering EcuM_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering EcuM_GetExpiredWakeupEvents for cloning; -fipa-cp-clone disabled.
Not considering EcuM_GetValidatedWakeupEvents for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ClearWakeupEvent for cloning; -fipa-cp-clone disabled.
Not considering EcuM_GetPendingWakeupEvents for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_GetNextRecentShutdown for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_GetMostRecentShutdown for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_GetShutdownCause for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_SelectShutdownCause for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_GetLastShutdownTarget for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_GetShutdownTarget for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_SelectShutdownTarget for cloning; -fipa-cp-clone disabled.
Not considering EcuM_Shutdown for cloning; -fipa-cp-clone disabled.
Not considering EcuM_StartupTwo for cloning; -fipa-cp-clone disabled.
Not considering EcuM_Init for cloning; -fipa-cp-clone disabled.
Not considering EcuM_GoPoll for cloning; -fipa-cp-clone disabled.
Not considering EcuM_GoHalt for cloning; -fipa-cp-clone disabled.
Not considering EcuM_GoDown for cloning; -fipa-cp-clone disabled.

overall_size: 1083, max_new_size: 11001
 - context independent values, size: 15, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: EcuM_IsValidConfig.part.0/103:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EcuM_ComMWakeupIndication/49:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x20
         EcuM_WakeupSourceType [0, 32]
        AGGS VARIABLE
  Node: EcuM_WksIndicateStatus_NONE/48:
  Node: EcuM_WksIndicateStatus_EXPIRED/47:
  Node: EcuM_WksIndicateStatus_VALIDATED/46:
  Node: EcuM_WksIndicateStatus_PENDING/45:
  Node: EcuM_WksIndicateStatus_DISABLED/44:
  Node: EcuM_SwitchWakeupStatus/43:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 1 [loc_time: 5, loc_size: 19, prop_time: 0, prop_size: 0]
               0 [loc_time: 5, loc_size: 19, prop_time: 0, prop_size: 0]
               3 [loc_time: 5, loc_size: 19, prop_time: 0, prop_size: 0]
               2 [loc_time: 5, loc_size: 19, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x2, mask = 0x3
         EcuM_WakeupStatusType [0, 3]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EcuM_WakeupRestart/42:
  Node: EcuM_GoSleep/41:
  Node: EcuM_WksIndicateStatus/40:
  Node: EcuM_IsValidConfig/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_ValidateWakeupEvent/38:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_SetWakeupEvent/37:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_ReportRamCheckResult/36:
  Node: EcuM_MainFunction/35:
  Node: EcuM_GetExpiredWakeupEvents/34:
  Node: EcuM_GetValidatedWakeupEvents/33:
  Node: EcuM_ClearWakeupEvent/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_GetPendingWakeupEvents/31:
  Node: EcuM_ASR40_GetNextRecentShutdown/30:
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
  Node: EcuM_ASR40_GetMostRecentShutdown/29:
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
  Node: EcuM_ASR40_GetShutdownCause/28:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_ASR40_SelectShutdownCause/27:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_ASR40_GetLastShutdownTarget/26:
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
  Node: EcuM_ASR40_GetShutdownTarget/25:
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
  Node: EcuM_ASR40_SelectShutdownTarget/24:
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
  Node: EcuM_SelectShutdownTargetSequence/23:
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
  Node: EcuM_Shutdown/22:
  Node: EcuM_StartupTwo/21:
  Node: EcuM_Init/20:
  Node: EcuM_Init_SingleCore/19:
  Node: EcuM_StartPreOS/18:
  Node: EcuM_SearchResetReason/17:
  Node: EcuM_SetSleepOrResetMode/16:
  Node: EcuM_GoPoll/15:
  Node: EcuM_HaltSequence/14:
  Node: EcuM_GoHalt/13:
  Node: EcuM_GoDownMaster/12:
  Node: EcuM_GoDown/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

Propagated bits info for function EcuM_ComMWakeupIndication/49:
 param 0: value = 0x0, mask = 0x20
Propagated bits info for function EcuM_SwitchWakeupStatus/43:
 param 1: value = 0x2, mask = 0x3

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

EcuM_IsValidConfig.part.0/103 (EcuM_IsValidConfig.part.0) @072fe0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: EcuM_LcfgSignature/100 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: EcuM_IsValidConfig/39 (124124556 (estimated locally),0.12 per call) 
  Calls: 
EcuM_LcfgSignature/100 (EcuM_LcfgSignature) @0735ad38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_IsValidConfig.part.0/103 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/99 (TS_PlatformSigIsValid) @07351a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_IsValidConfig/39 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_WksValTimeout/98 (EcuM_WksValTimeout) @0735a438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_SetWakeupEvent/37 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_ReportErrorStatus/97 (Dem_ReportErrorStatus) @07351700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ReportRamCheckResult/36 (536870913 (estimated locally),0.50 per call) 
  Calls: 
EcuM_DemErrRamChkFailed/96 (EcuM_DemErrRamChkFailed) @07354b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_ReportRamCheckResult/36 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_EcuM_WakeUpIndication/95 (ComM_EcuM_WakeUpIndication) @07351380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ComMWakeupIndication/49 (303700359 (estimated locally),0.34 per call) 
  Calls: 
EcuM_WksMapping/94 (EcuM_WksMapping) @07354288
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_ComMWakeupIndication/49 (read)EcuM_SetWakeupEvent/37 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_GetStatus/93 (ComM_GetStatus) @073512a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ComMWakeupIndication/49 (902574743 (estimated locally),1.00 per call) 
  Calls: 
EcuM_CheckValidation/92 (EcuM_CheckValidation) @07333700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_MainFunction/35 (98475311 (estimated locally),0.09 per call) 
  Calls: 
EcuM_StartWakeupSources/91 (EcuM_StartWakeupSources) @07333ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_MainFunction/35 (98475311 (estimated locally),0.09 per call) 
  Calls: 
EcuM_StopWakeupSources/90 (EcuM_StopWakeupSources) @07333e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_MainFunction/35 (49237655 (estimated locally),0.05 per call) 
  Calls: 
EcuM_ValidShutdownCause/89 (EcuM_ValidShutdownCause) @0733c3a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_ASR40_SelectShutdownCause/27 (read)
  Availability: not_available
  Varpool flags: read-only
EcuM_AL_SwitchOff/88 (EcuM_AL_SwitchOff) @0732bee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Shutdown/22 (354334802 (estimated locally),0.33 per call) 
  Calls: 
EcuM_AL_Reset/87 (EcuM_AL_Reset) @0732be00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Shutdown/22 (182536110 (estimated locally),0.17 per call) 
  Calls: 
EcuM_OnGoOffTwo/86 (EcuM_OnGoOffTwo) @0732bd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Shutdown/22 (536870913 (estimated locally),0.50 per call) 
  Calls: 
BswM_Init/85 (BswM_Init) @0732bb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_StartupTwo/21 (536870913 (estimated locally),0.50 per call) 
  Calls: 
EcuM_SchM_Init/84 (EcuM_SchM_Init) @0732ba80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_StartupTwo/21 (536870913 (estimated locally),0.50 per call) 
  Calls: 
EcuM_WksConfigList/83 (EcuM_WksConfigList) @0732aa68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_ComMWakeupIndication/49 (read)EcuM_SearchResetReason/17 (read)EcuM_SearchResetReason/17 (read)
  Availability: not_available
  Varpool flags: read-only
Mcu_GetResetReason/82 (Mcu_GetResetReason) @0732b700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_SearchResetReason/17 (204054434 (estimated locally),1.00 per call) 
  Calls: 
EcuM_BootTarget/81 (EcuM_BootTarget) @0732a630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_StartPreOS/18 (write)EcuM_StartPreOS/18 (write)
  Availability: not_available
  Varpool flags:
EcuM_AL_DriverInitOne/80 (EcuM_AL_DriverInitOne) @0732b540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_StartPreOS/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_AL_SetProgrammableInterrupts/79 (EcuM_AL_SetProgrammableInterrupts) @0732b460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_StartPreOS/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_UserStartOs/78 (OS_UserStartOs) @0732b2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Init_SingleCore/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_DeterminePbConfiguration/77 (EcuM_DeterminePbConfiguration) @0732b0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Init/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
EcuM_AL_DriverInitZero/76 (EcuM_AL_DriverInitZero) @0732b000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Init/20 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
EcuM_InitialContext/75 (EcuM_InitialContext) @0732a048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_Init/20 (read)
  Availability: not_available
  Varpool flags: read-only
EcuM_CheckWakeup/74 (EcuM_CheckWakeup) @072feee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoPoll/15 (958878293 (estimated locally),4.17 per call) 
  Calls: 
EcuM_SleepActivity/73 (EcuM_SleepActivity) @072fee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoPoll/15 (958878293 (estimated locally),4.17 per call) 
  Calls: 
OS_UserReleaseResource/72 (OS_UserReleaseResource) @072fec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_WakeupRestart/42 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_DisableWakeupSources/71 (EcuM_DisableWakeupSources) @072feb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_WakeupRestart/42 (714038314 (estimated locally),0.67 per call) 
  Calls: 
EcuM_ErrorHook/70 (EcuM_ErrorHook) @072fe9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_HaltSequence/14 (354334802 (estimated locally),0.33 per call) 
  Calls: 
EcuM_CheckRamHash/69 (EcuM_CheckRamHash) @072fe8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_HaltSequence/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_PostHalt/68 (EcuM_PostHalt) @072fe7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_HaltSequence/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_SetMode/67 (Mcu_SetMode) @072fe700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoPoll/15 (114863532 (estimated locally),0.50 per call) EcuM_WakeupRestart/42 (1073741824 (estimated locally),1.00 per call) EcuM_HaltSequence/14 (177167401 (estimated locally),0.17 per call) 
  Calls: 
EcuM_GenerateRamHash/66 (EcuM_GenerateRamHash) @072fe620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_HaltSequence/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_PreHalt/65 (EcuM_PreHalt) @072fe540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_HaltSequence/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_EcuM_CurrentWakeup/64 (BswM_EcuM_CurrentWakeup) @072fe2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_WksIndicateStatus_VALIDATED/46 (354334802 (estimated locally),0.33 per call) EcuM_WksIndicateStatus_EXPIRED/47 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_DISABLED/44 (354334802 (estimated locally),0.33 per call) EcuM_WksIndicateStatus_PENDING/45 (354334802 (estimated locally),0.33 per call) EcuM_WksIndicateStatus_NONE/48 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_UserGetResource/63 (OS_UserGetResource) @072fe000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_EnableWakeupSources/62 (EcuM_EnableWakeupSources) @072f18c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ExitExclusiveArea/61 (EcuM_ExitExclusiveArea) @072f1ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ValidateWakeupEvent/38 (482002704 (estimated locally),0.45 per call) EcuM_SetWakeupEvent/37 (153437707 (estimated locally),0.34 per call) EcuM_SetWakeupEvent/37 (153437706 (estimated locally),0.33 per call) EcuM_MainFunction/35 (298410033 (estimated locally),0.28 per call) EcuM_MainFunction/35 (49237655 (estimated locally),0.05 per call) EcuM_MainFunction/35 (298410033 (estimated locally),0.28 per call) EcuM_GetExpiredWakeupEvents/34 (536870913 (estimated locally),0.50 per call) EcuM_GetValidatedWakeupEvents/33 (536870913 (estimated locally),0.50 per call) EcuM_ClearWakeupEvent/32 (536870913 (estimated locally),0.50 per call) EcuM_GetPendingWakeupEvents/31 (536870913 (estimated locally),0.50 per call) EcuM_ASR40_GetNextRecentShutdown/30 (108662672 (estimated locally),0.10 per call) EcuM_ASR40_GetNextRecentShutdown/30 (92636805 (estimated locally),0.09 per call) EcuM_ASR40_GetNextRecentShutdown/30 (335571434 (estimated locally),0.31 per call) EcuM_ASR40_GetMostRecentShutdown/29 (155633549 (estimated locally),0.14 per call) EcuM_WksIndicateStatus_VALIDATED/46 (1073741824 (estimated locally),1.00 per call) EcuM_WakeupRestart/42 (714038314 (estimated locally),0.67 per call) EcuM_WksIndicateStatus_EXPIRED/47 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_DISABLED/44 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_PENDING/45 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_NONE/48 (1073741824 (estimated locally),1.00 per call) EcuM_SelectShutdownTargetSequence/23 (470709230 (estimated locally),0.44 per call) 
  Calls: 
EcuM_EnterExclusiveArea/60 (EcuM_EnterExclusiveArea) @072f1e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ValidateWakeupEvent/38 (482002704 (estimated locally),0.45 per call) EcuM_SetWakeupEvent/37 (153437707 (estimated locally),0.34 per call) EcuM_SetWakeupEvent/37 (153437706 (estimated locally),0.33 per call) EcuM_MainFunction/35 (298410033 (estimated locally),0.28 per call) EcuM_MainFunction/35 (49237655 (estimated locally),0.05 per call) EcuM_MainFunction/35 (298410033 (estimated locally),0.28 per call) EcuM_GetExpiredWakeupEvents/34 (536870913 (estimated locally),0.50 per call) EcuM_GetValidatedWakeupEvents/33 (536870913 (estimated locally),0.50 per call) EcuM_ClearWakeupEvent/32 (536870913 (estimated locally),0.50 per call) EcuM_GetPendingWakeupEvents/31 (536870913 (estimated locally),0.50 per call) EcuM_ASR40_GetNextRecentShutdown/30 (536870911 (estimated locally),0.50 per call) EcuM_ASR40_GetMostRecentShutdown/29 (155633549 (estimated locally),0.14 per call) EcuM_WksIndicateStatus_VALIDATED/46 (1073741824 (estimated locally),1.00 per call) EcuM_WakeupRestart/42 (714038314 (estimated locally),0.67 per call) EcuM_WksIndicateStatus_EXPIRED/47 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_DISABLED/44 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_PENDING/45 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_NONE/48 (1073741824 (estimated locally),1.00 per call) EcuM_SelectShutdownTargetSequence/23 (470709229 (estimated locally),0.44 per call) 
  Calls: 
BswM_EcuM_CurrentState/59 (BswM_EcuM_CurrentState) @072f1d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_MainFunction/35 (33481606 (estimated locally),0.03 per call) EcuM_StartupTwo/21 (536870913 (estimated locally),0.50 per call) EcuM_WakeupRestart/42 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_SleepModeConfigList/58 (EcuM_SleepModeConfigList) @072fb168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_HaltSequence/14 (read)EcuM_GoPoll/15 (read)EcuM_GoSleep/41 (read)EcuM_GoPoll/15 (read)EcuM_SetWakeupEvent/37 (read)
  Availability: not_available
  Varpool flags: read-only
OS_UserShutdownOs/57 (OS_UserShutdownOs) @072f1a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoDownMaster/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_GetMasterCoreInstance/56 (EcuM_GetMasterCoreInstance) @072f19a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ASR40_GetNextRecentShutdown/30 (1073741823 (estimated locally),1.00 per call) EcuM_ASR40_GetMostRecentShutdown/29 (1073741824 (estimated locally),1.00 per call) EcuM_ASR40_GetShutdownCause/28 (1073741824 (estimated locally),1.00 per call) EcuM_ASR40_SelectShutdownCause/27 (261993005 (estimated locally),1.00 per call) EcuM_ASR40_GetLastShutdownTarget/26 (1073741824 (estimated locally),1.00 per call) EcuM_ASR40_GetShutdownTarget/25 (120228510 (estimated locally),0.11 per call) EcuM_ASR40_GetShutdownTarget/25 (1073741824 (estimated locally),1.00 per call) EcuM_Shutdown/22 (1073741824 (estimated locally),1.00 per call) EcuM_SelectShutdownTargetSequence/23 (1073741823 (estimated locally),1.00 per call) EcuM_GoDownMaster/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ShutdownInfo/55 (EcuM_ShutdownInfo) @072f5900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_ASR40_GetMostRecentShutdown/29 (read)EcuM_GoDownMaster/12 (write)EcuM_GoDownMaster/12 (write)EcuM_GoDownMaster/12 (write)EcuM_GoDownMaster/12 (write)EcuM_ASR40_GetMostRecentShutdown/29 (read)EcuM_ASR40_GetMostRecentShutdown/29 (read)EcuM_ASR40_GetMostRecentShutdown/29 (read)EcuM_GoDownMaster/12 (write)EcuM_ASR40_GetNextRecentShutdown/30 (read)EcuM_ASR40_GetNextRecentShutdown/30 (read)EcuM_ASR40_GetNextRecentShutdown/30 (read)EcuM_ASR40_GetNextRecentShutdown/30 (read)
  Availability: not_available
  Varpool flags:
EcuM_SchM_Deinit/54 (EcuM_SchM_Deinit) @072f17e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoDownMaster/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_Deinit/53 (BswM_Deinit) @072f1700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoDownMaster/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_OnGoOffOne/52 (EcuM_OnGoOffOne) @072f1620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_GoDownMaster/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/51 (Det_ASR40_ReportError) @072f1460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Init/20 (375809638 (estimated locally),0.35 per call) EcuM_Init/20 (322122547 (estimated locally),0.30 per call) EcuM_ValidateWakeupEvent/38 (237404317 (estimated locally),0.22 per call) EcuM_ValidateWakeupEvent/38 (354334802 (estimated locally),0.33 per call) EcuM_SetWakeupEvent/37 (153437706 (estimated locally),0.33 per call) EcuM_SetWakeupEvent/37 (151147591 (estimated locally),0.33 per call) EcuM_MainFunction/35 (354334802 (estimated locally),0.33 per call) EcuM_GetExpiredWakeupEvents/34 (536870913 (estimated locally),0.50 per call) EcuM_GetValidatedWakeupEvents/33 (536870913 (estimated locally),0.50 per call) EcuM_ClearWakeupEvent/32 (536870913 (estimated locally),0.50 per call) EcuM_GetPendingWakeupEvents/31 (536870913 (estimated locally),0.50 per call) EcuM_ASR40_GetNextRecentShutdown/30 (335571434 (estimated locally),0.31 per call) EcuM_ASR40_GetNextRecentShutdown/30 (536870911 (estimated locally),0.50 per call) EcuM_ASR40_GetMostRecentShutdown/29 (563773474 (estimated locally),0.53 per call) EcuM_ASR40_GetMostRecentShutdown/29 (354334802 (estimated locally),0.33 per call) EcuM_ASR40_GetShutdownCause/28 (125392644 (estimated locally),0.12 per call) EcuM_ASR40_GetShutdownCause/28 (354334802 (estimated locally),0.33 per call) EcuM_ASR40_SelectShutdownCause/27 (35528347 (estimated locally),0.14 per call) EcuM_ASR40_SelectShutdownCause/27 (86457692 (estimated locally),0.33 per call) EcuM_ASR40_GetLastShutdownTarget/26 (125392644 (estimated locally),0.12 per call) EcuM_ASR40_GetLastShutdownTarget/26 (125392644 (estimated locally),0.12 per call) EcuM_ASR40_GetLastShutdownTarget/26 (354334802 (estimated locally),0.33 per call) EcuM_ASR40_GetShutdownTarget/25 (125392644 (estimated locally),0.12 per call) EcuM_ASR40_GetShutdownTarget/25 (125392644 (estimated locally),0.12 per call) EcuM_ASR40_GetShutdownTarget/25 (354334802 (estimated locally),0.33 per call) EcuM_Shutdown/22 (536870913 (estimated locally),0.50 per call) EcuM_StartupTwo/21 (536870913 (estimated locally),0.50 per call) EcuM_GoPoll/15 (114863532 (estimated locally),0.50 per call) EcuM_GoHalt/13 (536870913 (estimated locally),0.50 per call) EcuM_GoDown/11 (536870913 (estimated locally),0.50 per call) EcuM_SelectShutdownTargetSequence/23 (95520729 (estimated locally),0.09 per call) EcuM_SelectShutdownTargetSequence/23 (153177064 (estimated locally),0.14 per call) EcuM_SelectShutdownTargetSequence/23 (354334802 (estimated locally),0.33 per call) 
  Calls: 
EcuM_GetCoreInstance/50 (EcuM_GetCoreInstance) @072f1380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_Init/20 (1073741823 (estimated locally),1.00 per call) EcuM_ValidateWakeupEvent/38 (1073741823 (estimated locally),1.00 per call) EcuM_SetWakeupEvent/37 (458023003 (estimated locally),1.00 per call) EcuM_MainFunction/35 (1073741824 (estimated locally),1.00 per call) EcuM_GetExpiredWakeupEvents/34 (1073741824 (estimated locally),1.00 per call) EcuM_GetValidatedWakeupEvents/33 (1073741824 (estimated locally),1.00 per call) EcuM_ClearWakeupEvent/32 (1073741824 (estimated locally),1.00 per call) EcuM_GetPendingWakeupEvents/31 (1073741824 (estimated locally),1.00 per call) EcuM_StartupTwo/21 (1073741824 (estimated locally),1.00 per call) EcuM_GoPoll/15 (229727064 (estimated locally),1.00 per call) EcuM_GoHalt/13 (1073741824 (estimated locally),1.00 per call) EcuM_GoDown/11 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_VALIDATED/46 (1073741824 (estimated locally),1.00 per call) EcuM_WakeupRestart/42 (1073741824 (estimated locally),1.00 per call) EcuM_HaltSequence/14 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_EXPIRED/47 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_DISABLED/44 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_PENDING/45 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_NONE/48 (1073741824 (estimated locally),1.00 per call) EcuM_SelectShutdownTargetSequence/23 (95271548 (estimated locally),0.09 per call) EcuM_GoDownMaster/12 (1073741824 (estimated locally),1.00 per call) EcuM_SetSleepOrResetMode/16 (217325345 (estimated locally),0.20 per call) 
  Calls: 
EcuM_ComMWakeupIndication/49 (EcuM_ComMWakeupIndication) @072f11c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_WksMapping/94 (read)EcuM_WksConfigList/83 (read)
  Referring: 
  Availability: local
  Function flags: count:902574743 (estimated locally) body local optimize_size
  Called by: EcuM_WksIndicateStatus_VALIDATED/46 (354334802 (estimated locally),0.33 per call) 
  Calls: ComM_EcuM_WakeUpIndication/95 (303700359 (estimated locally),0.34 per call) ComM_GetStatus/93 (902574743 (estimated locally),1.00 per call) 
EcuM_WksIndicateStatus_NONE/48 (EcuM_WksIndicateStatus_NONE) @072f1000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_WksIndicateStatus/40 (1073741824 (estimated locally),1.00 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: BswM_EcuM_CurrentWakeup/64 (354334802 (estimated locally),0.33 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_WksIndicateStatus_EXPIRED/47 (EcuM_WksIndicateStatus_EXPIRED) @072c7e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_MainFunction/35 (49237655 (estimated locally),0.05 per call) 
  Calls: BswM_EcuM_CurrentWakeup/64 (1073741824 (estimated locally),1.00 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_WksIndicateStatus_VALIDATED/46 (EcuM_WksIndicateStatus_VALIDATED) @072c7c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_WksIndicateStatus/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: EcuM_ComMWakeupIndication/49 (354334802 (estimated locally),0.33 per call) BswM_EcuM_CurrentWakeup/64 (354334802 (estimated locally),0.33 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_WksIndicateStatus_PENDING/45 (EcuM_WksIndicateStatus_PENDING) @072c7a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_WksIndicateStatus/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: BswM_EcuM_CurrentWakeup/64 (354334802 (estimated locally),0.33 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_WksIndicateStatus_DISABLED/44 (EcuM_WksIndicateStatus_DISABLED) @072c78c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_WksIndicateStatus/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: BswM_EcuM_CurrentWakeup/64 (354334802 (estimated locally),0.33 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_SwitchWakeupStatus/43 (EcuM_SwitchWakeupStatus) @072c7700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073419798 (estimated locally) body local optimize_size
  Called by: EcuM_ValidateWakeupEvent/38 (482002704 (estimated locally),0.45 per call) EcuM_SetWakeupEvent/37 (153437706 (estimated locally),0.33 per call) EcuM_SetWakeupEvent/37 (153437706 (estimated locally),0.33 per call) EcuM_MainFunction/35 (49237655 (estimated locally),0.05 per call) EcuM_ClearWakeupEvent/32 (536870913 (estimated locally),0.50 per call) EcuM_GoSleep/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_WakeupRestart/42 (EcuM_WakeupRestart) @072c7540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_GoPoll/15 (114863532 (estimated locally),0.50 per call) EcuM_GoHalt/13 (536870913 (estimated locally),0.50 per call) 
  Calls: OS_UserReleaseResource/72 (1073741824 (estimated locally),1.00 per call) BswM_EcuM_CurrentState/59 (1073741824 (estimated locally),1.00 per call) EcuM_ExitExclusiveArea/61 (714038314 (estimated locally),0.67 per call) EcuM_EnterExclusiveArea/60 (714038314 (estimated locally),0.67 per call) EcuM_DisableWakeupSources/71 (714038314 (estimated locally),0.67 per call) Mcu_SetMode/67 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GoSleep/41 (EcuM_GoSleep) @072c7380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_SleepModeConfigList/58 (read)EcuM_ShutdownTarget/9 (read)EcuM_LastShutdownTarget/1 (write)EcuM_LastSleepMode/2 (write)EcuM_ResetMode/8 (read)EcuM_LastResetMode/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_GoPoll/15 (114863532 (estimated locally),0.50 per call) EcuM_GoHalt/13 (536870913 (estimated locally),0.50 per call) 
  Calls: BswM_EcuM_CurrentState/59 (1073741824 (estimated locally),1.00 per call) OS_UserGetResource/63 (1073741824 (estimated locally),1.00 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) EcuM_EnableWakeupSources/62 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_NONE/48 (1073741824 (estimated locally),1.00 per call) EcuM_ExitExclusiveArea/61 (1073741824 (estimated locally),1.00 per call) EcuM_SwitchWakeupStatus/43 (1073741824 (estimated locally),1.00 per call) EcuM_EnterExclusiveArea/60 (1073741824 (estimated locally),1.00 per call) BswM_EcuM_CurrentState/59 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_WksIndicateStatus/40 (EcuM_WksIndicateStatus) @072c71c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_MainFunction/35 (298410033 (estimated locally),0.28 per call) 
  Calls: EcuM_WksIndicateStatus_DISABLED/44 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_VALIDATED/46 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_PENDING/45 (1073741824 (estimated locally),1.00 per call) EcuM_WksIndicateStatus_NONE/48 (1073741824 (estimated locally),1.00 per call) 
EcuM_IsValidConfig/39 (EcuM_IsValidConfig) @072c7000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: EcuM_Init/20 (751619277 (estimated locally),0.70 per call) 
  Calls: EcuM_IsValidConfig.part.0/103 (124124556 (estimated locally),0.12 per call) TS_PlatformSigIsValid/99 (1073741824 (estimated locally),1.00 per call) 
EcuM_ValidateWakeupEvent/38 (EcuM_ValidateWakeupEvent) @072c0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (482002704 (estimated locally),0.45 per call) EcuM_SwitchWakeupStatus/43 (482002704 (estimated locally),0.45 per call) EcuM_EnterExclusiveArea/60 (482002704 (estimated locally),0.45 per call) Det_ASR40_ReportError/51 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetCoreInstance/50 (1073741823 (estimated locally),1.00 per call) 
EcuM_SetWakeupEvent/37 (EcuM_SetWakeupEvent) @072c0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_SleepModeConfigList/58 (read)EcuM_WksMapping/94 (read)EcuM_WksValTimeout/98 (read)
  Referring: 
  Availability: available
  Function flags: count:458023003 (estimated locally) body optimize_size
  Called by: EcuM_SearchResetReason/17 (116176320 (estimated locally),0.57 per call) 
  Calls: EcuM_ExitExclusiveArea/61 (153437707 (estimated locally),0.34 per call) EcuM_EnterExclusiveArea/60 (153437707 (estimated locally),0.34 per call) EcuM_ExitExclusiveArea/61 (153437706 (estimated locally),0.33 per call) EcuM_SwitchWakeupStatus/43 (153437706 (estimated locally),0.33 per call) EcuM_SwitchWakeupStatus/43 (153437706 (estimated locally),0.33 per call) EcuM_EnterExclusiveArea/60 (153437706 (estimated locally),0.33 per call) Det_ASR40_ReportError/51 (153437706 (estimated locally),0.33 per call) Det_ASR40_ReportError/51 (151147591 (estimated locally),0.33 per call) EcuM_GetCoreInstance/50 (458023003 (estimated locally),1.00 per call) 
EcuM_ReportRamCheckResult/36 (EcuM_ReportRamCheckResult) @072c0700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_RamCheckStatus/7 (read)EcuM_DemErrRamChkFailed/96 (read)EcuM_RamCheckStatus/7 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_MainFunction/35 (298410033 (estimated locally),0.28 per call) 
  Calls: Dem_ReportErrorStatus/97 (536870913 (estimated locally),0.50 per call) 
EcuM_MainFunction/35 (EcuM_MainFunction) @072c0540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ReportRamCheckResult/36 (298410033 (estimated locally),0.28 per call) EcuM_ExitExclusiveArea/61 (298410033 (estimated locally),0.28 per call) EcuM_EnterExclusiveArea/60 (298410033 (estimated locally),0.28 per call) EcuM_CheckValidation/92 (98475311 (estimated locally),0.09 per call) EcuM_StartWakeupSources/91 (98475311 (estimated locally),0.09 per call) EcuM_WksIndicateStatus_EXPIRED/47 (49237655 (estimated locally),0.05 per call) EcuM_StopWakeupSources/90 (49237655 (estimated locally),0.05 per call) EcuM_ExitExclusiveArea/61 (49237655 (estimated locally),0.05 per call) EcuM_SwitchWakeupStatus/43 (49237655 (estimated locally),0.05 per call) EcuM_EnterExclusiveArea/60 (49237655 (estimated locally),0.05 per call) EcuM_WksIndicateStatus/40 (298410033 (estimated locally),0.28 per call) BswM_EcuM_CurrentState/59 (33481606 (estimated locally),0.03 per call) EcuM_ExitExclusiveArea/61 (298410033 (estimated locally),0.28 per call) EcuM_EnterExclusiveArea/60 (298410033 (estimated locally),0.28 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GetExpiredWakeupEvents/34 (EcuM_GetExpiredWakeupEvents) @072c02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (536870913 (estimated locally),0.50 per call) EcuM_EnterExclusiveArea/60 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GetValidatedWakeupEvents/33 (EcuM_GetValidatedWakeupEvents) @072c0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (536870913 (estimated locally),0.50 per call) EcuM_EnterExclusiveArea/60 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_ClearWakeupEvent/32 (EcuM_ClearWakeupEvent) @06de7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (536870913 (estimated locally),0.50 per call) EcuM_SwitchWakeupStatus/43 (536870913 (estimated locally),0.50 per call) EcuM_EnterExclusiveArea/60 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GetPendingWakeupEvents/31 (EcuM_GetPendingWakeupEvents) @06de7a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (536870913 (estimated locally),0.50 per call) EcuM_EnterExclusiveArea/60 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_ASR40_GetNextRecentShutdown/30 (EcuM_ASR40_GetNextRecentShutdown) @06de77e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_NextShutdownInfoIdx/6 (read)EcuM_NextShutdownInfoIdx/6 (write)EcuM_NextShutdownInfoIdx/6 (write)EcuM_NextShutdownInfoIdx/6 (read)EcuM_ShutdownInfoStartIdx/4 (read)EcuM_ShutdownInfo/55 (read)EcuM_ShutdownInfo/55 (read)EcuM_ShutdownInfo/55 (read)EcuM_ShutdownInfo/55 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (108662672 (estimated locally),0.10 per call) EcuM_ExitExclusiveArea/61 (92636805 (estimated locally),0.09 per call) Det_ASR40_ReportError/51 (335571434 (estimated locally),0.31 per call) EcuM_ExitExclusiveArea/61 (335571434 (estimated locally),0.31 per call) EcuM_EnterExclusiveArea/60 (536870911 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870911 (estimated locally),0.50 per call) EcuM_GetMasterCoreInstance/56 (1073741823 (estimated locally),1.00 per call) 
EcuM_ASR40_GetMostRecentShutdown/29 (EcuM_ASR40_GetMostRecentShutdown) @06de7460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_ShutdownInfoCurrentIdx/5 (read)EcuM_NextShutdownInfoIdx/6 (write)EcuM_ShutdownInfoStartIdx/4 (read)EcuM_NextShutdownInfoIdx/6 (write)EcuM_NextShutdownInfoIdx/6 (write)EcuM_NextShutdownInfoIdx/6 (read)EcuM_ShutdownInfo/55 (read)EcuM_ShutdownInfo/55 (read)EcuM_ShutdownInfo/55 (read)EcuM_ShutdownInfo/55 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/61 (155633549 (estimated locally),0.14 per call) EcuM_EnterExclusiveArea/60 (155633549 (estimated locally),0.14 per call) Det_ASR40_ReportError/51 (563773474 (estimated locally),0.53 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/56 (1073741824 (estimated locally),1.00 per call) 
EcuM_ASR40_GetShutdownCause/28 (EcuM_ASR40_GetShutdownCause) @06de70e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_ShutdownCause/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/51 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/56 (1073741824 (estimated locally),1.00 per call) 
EcuM_ASR40_SelectShutdownCause/27 (EcuM_ASR40_SelectShutdownCause) @06de2d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_ValidShutdownCause/89 (read)EcuM_ShutdownCause/10 (write)
  Referring: 
  Availability: available
  Function flags: count:261993004 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/51 (35528347 (estimated locally),0.14 per call) Det_ASR40_ReportError/51 (86457692 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/56 (261993005 (estimated locally),1.00 per call) 
EcuM_ASR40_GetLastShutdownTarget/26 (EcuM_ASR40_GetLastShutdownTarget) @06de29a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_LastShutdownTarget/1 (read)EcuM_LastShutdownTarget/1 (read)EcuM_LastSleepMode/2 (read)EcuM_LastResetMode/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/51 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/51 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/56 (1073741824 (estimated locally),1.00 per call) 
EcuM_ASR40_GetShutdownTarget/25 (EcuM_ASR40_GetShutdownTarget) @06de2540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_ShutdownTarget/9 (read)EcuM_ShutdownTarget/9 (read)EcuM_ResetMode/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/51 (125392644 (estimated locally),0.12 per call) EcuM_GetMasterCoreInstance/56 (120228510 (estimated locally),0.11 per call) Det_ASR40_ReportError/51 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/56 (1073741824 (estimated locally),1.00 per call) 
EcuM_ASR40_SelectShutdownTarget/24 (EcuM_ASR40_SelectShutdownTarget) @06de20e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_SelectShutdownTargetSequence/23 (1073741824 (estimated locally),1.00 per call) 
EcuM_SelectShutdownTargetSequence/23 (EcuM_SelectShutdownTargetSequence) @0726cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_ShutdownTarget/9 (write)EcuM_ShutdownTarget/9 (write)EcuM_ResetMode/8 (write)EcuM_ShutdownTarget/9 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: EcuM_ASR40_SelectShutdownTarget/24 (1073741824 (estimated locally),1.00 per call) 
  Calls: EcuM_ExitExclusiveArea/61 (470709230 (estimated locally),0.44 per call) EcuM_GetCoreInstance/50 (95271548 (estimated locally),0.09 per call) EcuM_EnterExclusiveArea/60 (470709229 (estimated locally),0.44 per call) Det_ASR40_ReportError/51 (95520729 (estimated locally),0.09 per call) Det_ASR40_ReportError/51 (153177064 (estimated locally),0.14 per call) Det_ASR40_ReportError/51 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/56 (1073741823 (estimated locally),1.00 per call) 
EcuM_Shutdown/22 (EcuM_Shutdown) @0726ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_ShutdownTarget/9 (read)EcuM_LastShutdownTarget/1 (write)EcuM_ResetMode/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_AL_SwitchOff/88 (354334802 (estimated locally),0.33 per call) EcuM_AL_Reset/87 (182536110 (estimated locally),0.17 per call) EcuM_OnGoOffTwo/86 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetMasterCoreInstance/56 (1073741824 (estimated locally),1.00 per call) 
EcuM_StartupTwo/21 (EcuM_StartupTwo) @0726c7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_EcuM_CurrentState/59 (536870913 (estimated locally),0.50 per call) BswM_Init/85 (536870913 (estimated locally),0.50 per call) EcuM_SchM_Init/84 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_Init/20 (EcuM_Init) @0726c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_InitialContext/75 (read)EcuM_ConfigPtr/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_Init_SingleCore/19 (375809638 (estimated locally),0.35 per call) Det_ASR40_ReportError/51 (375809638 (estimated locally),0.35 per call) EcuM_IsValidConfig/39 (751619277 (estimated locally),0.70 per call) Det_ASR40_ReportError/51 (322122547 (estimated locally),0.30 per call) EcuM_DeterminePbConfiguration/77 (1073741823 (estimated locally),1.00 per call) EcuM_AL_DriverInitZero/76 (1073741823 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741823 (estimated locally),1.00 per call) 
EcuM_Init_SingleCore/19 (EcuM_Init_SingleCore) @0726c1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_ConfigPtr/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_Init/20 (375809638 (estimated locally),0.35 per call) 
  Calls: OS_UserStartOs/78 (1073741824 (estimated locally),1.00 per call) EcuM_StartPreOS/18 (1073741824 (estimated locally),1.00 per call) 
EcuM_StartPreOS/18 (EcuM_StartPreOS) @0726c000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_ConfigPtr/0 (read)EcuM_BootTarget/81 (write)EcuM_BootTarget/81 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_Init_SingleCore/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: EcuM_SetSleepOrResetMode/16 (1073741824 (estimated locally),1.00 per call) EcuM_SearchResetReason/17 (1073741824 (estimated locally),1.00 per call) EcuM_AL_DriverInitOne/80 (1073741824 (estimated locally),1.00 per call) EcuM_AL_SetProgrammableInterrupts/79 (1073741824 (estimated locally),1.00 per call) 
EcuM_SearchResetReason/17 (EcuM_SearchResetReason) @07264e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_WksConfigList/83 (read)EcuM_WksConfigList/83 (read)
  Referring: 
  Availability: local
  Function flags: count:204054434 (estimated locally) body local optimize_size
  Called by: EcuM_StartPreOS/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: EcuM_SetWakeupEvent/37 (116176320 (estimated locally),0.57 per call) Mcu_GetResetReason/82 (204054434 (estimated locally),1.00 per call) 
EcuM_SetSleepOrResetMode/16 (EcuM_SetSleepOrResetMode) @07264c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_ConfigPtr/0 (read)EcuM_ShutdownTarget/9 (write)EcuM_ResetMode/8 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_StartPreOS/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: EcuM_GetCoreInstance/50 (217325345 (estimated locally),0.20 per call) 
EcuM_GoPoll/15 (EcuM_GoPoll) @07264a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_SleepModeConfigList/58 (read)EcuM_SleepModeConfigList/58 (read)
  Referring: 
  Availability: available
  Function flags: count:229727064 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_WakeupRestart/42 (114863532 (estimated locally),0.50 per call) EcuM_CheckWakeup/74 (958878293 (estimated locally),4.17 per call) EcuM_SleepActivity/73 (958878293 (estimated locally),4.17 per call) Mcu_SetMode/67 (114863532 (estimated locally),0.50 per call) EcuM_GoSleep/41 (114863532 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (114863532 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (229727064 (estimated locally),1.00 per call) 
EcuM_HaltSequence/14 (EcuM_HaltSequence) @072647e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_SleepModeConfigList/58 (read)EcuM_RamCheckStatus/7 (write)EcuM_RamCheckStatus/7 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_GoHalt/13 (536870913 (estimated locally),0.50 per call) 
  Calls: EcuM_ErrorHook/70 (354334802 (estimated locally),0.33 per call) EcuM_CheckRamHash/69 (1073741824 (estimated locally),1.00 per call) EcuM_PostHalt/68 (1073741824 (estimated locally),1.00 per call) Mcu_SetMode/67 (177167401 (estimated locally),0.17 per call) EcuM_GenerateRamHash/66 (1073741824 (estimated locally),1.00 per call) EcuM_PreHalt/65 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GoHalt/13 (EcuM_GoHalt) @07264620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_WakeupRestart/42 (536870913 (estimated locally),0.50 per call) EcuM_HaltSequence/14 (536870913 (estimated locally),0.50 per call) EcuM_GoSleep/41 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GoDownMaster/12 (EcuM_GoDownMaster) @07264380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: EcuM_ShutdownTarget/9 (write)EcuM_ShutdownInfoCurrentIdx/5 (read)EcuM_ShutdownTarget/9 (read)EcuM_ShutdownInfo/55 (write)EcuM_ResetMode/8 (read)EcuM_ShutdownInfo/55 (write)EcuM_ShutdownInfo/55 (write)EcuM_ShutdownCause/10 (read)EcuM_ShutdownInfo/55 (write)EcuM_ShutdownInfo/55 (write)EcuM_ShutdownInfoCurrentIdx/5 (write)EcuM_ShutdownInfoCurrentIdx/5 (write)EcuM_ShutdownInfoCurrentIdx/5 (read)EcuM_ShutdownInfoStartIdx/4 (read)EcuM_ShutdownInfoStartIdx/4 (write)EcuM_ShutdownInfoStartIdx/4 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_GoDown/11 (536870913 (estimated locally),0.50 per call) 
  Calls: OS_UserShutdownOs/57 (1073741824 (estimated locally),1.00 per call) EcuM_GetMasterCoreInstance/56 (1073741824 (estimated locally),1.00 per call) EcuM_SchM_Deinit/54 (1073741824 (estimated locally),1.00 per call) BswM_Deinit/53 (1073741824 (estimated locally),1.00 per call) EcuM_OnGoOffOne/52 (1073741824 (estimated locally),1.00 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_GoDown/11 (EcuM_GoDown) @072641c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_GoDownMaster/12 (536870913 (estimated locally),0.50 per call) Det_ASR40_ReportError/51 (536870913 (estimated locally),0.50 per call) EcuM_GetCoreInstance/50 (1073741824 (estimated locally),1.00 per call) 
EcuM_ShutdownCause/10 (EcuM_ShutdownCause) @07261288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GoDownMaster/12 (read)EcuM_ASR40_SelectShutdownCause/27 (write)EcuM_ASR40_GetShutdownCause/28 (read)
  Availability: available
  Varpool flags:
EcuM_ShutdownTarget/9 (EcuM_ShutdownTarget) @07261240
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_SelectShutdownTargetSequence/23 (write)EcuM_SelectShutdownTargetSequence/23 (write)EcuM_Shutdown/22 (read)EcuM_GoDownMaster/12 (read)EcuM_SetSleepOrResetMode/16 (write)EcuM_SelectShutdownTargetSequence/23 (write)EcuM_GoSleep/41 (read)EcuM_GoDownMaster/12 (write)EcuM_ASR40_GetShutdownTarget/25 (read)EcuM_ASR40_GetShutdownTarget/25 (read)
  Availability: available
  Varpool flags:
EcuM_ResetMode/8 (EcuM_ResetMode) @072611f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_Shutdown/22 (read)EcuM_GoDownMaster/12 (read)EcuM_GoSleep/41 (read)EcuM_SelectShutdownTargetSequence/23 (write)EcuM_SetSleepOrResetMode/16 (write)EcuM_ASR40_GetShutdownTarget/25 (read)
  Availability: available
  Varpool flags:
EcuM_RamCheckStatus/7 (EcuM_RamCheckStatus) @072611b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_HaltSequence/14 (write)EcuM_HaltSequence/14 (write)EcuM_ReportRamCheckResult/36 (read)EcuM_ReportRamCheckResult/36 (write)
  Availability: available
  Varpool flags: initialized
EcuM_NextShutdownInfoIdx/6 (EcuM_NextShutdownInfoIdx) @07261168
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_ASR40_GetMostRecentShutdown/29 (read)EcuM_ASR40_GetMostRecentShutdown/29 (write)EcuM_ASR40_GetMostRecentShutdown/29 (write)EcuM_ASR40_GetMostRecentShutdown/29 (write)EcuM_ASR40_GetNextRecentShutdown/30 (read)EcuM_ASR40_GetNextRecentShutdown/30 (write)EcuM_ASR40_GetNextRecentShutdown/30 (write)EcuM_ASR40_GetNextRecentShutdown/30 (read)
  Availability: available
  Varpool flags: initialized
EcuM_ShutdownInfoCurrentIdx/5 (EcuM_ShutdownInfoCurrentIdx) @07261120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GoDownMaster/12 (read)EcuM_GoDownMaster/12 (read)EcuM_GoDownMaster/12 (write)EcuM_GoDownMaster/12 (write)EcuM_ASR40_GetMostRecentShutdown/29 (read)
  Availability: available
  Varpool flags: initialized
EcuM_ShutdownInfoStartIdx/4 (EcuM_ShutdownInfoStartIdx) @072610d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GoDownMaster/12 (write)EcuM_ASR40_GetMostRecentShutdown/29 (read)EcuM_GoDownMaster/12 (read)EcuM_GoDownMaster/12 (write)EcuM_ASR40_GetNextRecentShutdown/30 (read)
  Availability: available
  Varpool flags: initialized
EcuM_LastResetMode/3 (EcuM_LastResetMode) @07261090
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GoSleep/41 (write)EcuM_ASR40_GetLastShutdownTarget/26 (read)
  Availability: available
  Varpool flags: initialized
EcuM_LastSleepMode/2 (EcuM_LastSleepMode) @07261048
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GoSleep/41 (write)EcuM_ASR40_GetLastShutdownTarget/26 (read)
  Availability: available
  Varpool flags: initialized
EcuM_LastShutdownTarget/1 (EcuM_LastShutdownTarget) @07261000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GoSleep/41 (write)EcuM_Shutdown/22 (write)EcuM_ASR40_GetLastShutdownTarget/26 (read)EcuM_ASR40_GetLastShutdownTarget/26 (read)
  Availability: available
  Varpool flags: initialized
EcuM_ConfigPtr/0 (EcuM_ConfigPtr) @0713cf78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: EcuM_SetSleepOrResetMode/16 (read)EcuM_Init_SingleCore/19 (read)EcuM_StartPreOS/18 (read)EcuM_Init/20 (write)
  Availability: available
  Varpool flags: initialized

;; Function EcuM_WksIndicateStatus_NONE (EcuM_WksIndicateStatus_NONE, funcdef_no=37, decl_uid=10545, cgraph_uid=38, symbol_order=48)

Modification phase of node EcuM_WksIndicateStatus_NONE/48
EcuM_WksIndicateStatus_NONE ()
{
  struct EcuM_CoreContextType * CoreInstance;
  EcuM_WakeupSourceType wksNone;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CoreInstance_4 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_4
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  wksNone_6 = CoreInstance_4->WakeupIndication.None;
  # DEBUG wksNone => wksNone_6
  # DEBUG BEGIN_STMT
  CoreInstance_4->WakeupIndication.None = 0;
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  if (wksNone_6 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  BswM_EcuM_CurrentWakeup (wksNone_6, 0);

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function EcuM_WakeupRestart (EcuM_WakeupRestart, funcdef_no=31, decl_uid=10519, cgraph_uid=32, symbol_order=42)

Modification phase of node EcuM_WakeupRestart/42
EcuM_WakeupRestart ()
{
  EcuM_WakeupSourceType wksDisable;
  struct EcuM_CoreContextType * CoreInstance;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CoreInstance_7 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_7
  # DEBUG BEGIN_STMT
  Mcu_SetMode (0);
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_7->WakeupStatus.Pending;
  if (_1 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 3>; [67.00%]

  <bb 3> [local count: 719407023]:
  _2 = CoreInstance_7->WakeupStatus.Validated;
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 714038314]:
  # DEBUG BEGIN_STMT
  _3 = CoreInstance_7->WakeupStatus.Validated;
  wksDisable_9 = _1 | _3;
  # DEBUG wksDisable => wksDisable_9
  # DEBUG BEGIN_STMT
  EcuM_DisableWakeupSources (wksDisable_9);
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  # DEBUG sources => wksDisable_9
  # DEBUG status => 4
  # DEBUG CoreInstance => CoreInstance_7
  # DEBUG INLINE_ENTRY EcuM_SwitchWakeupStatus
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 = CoreInstance_7->WakeupIndication.Disabled;
  _17 = wksDisable_9 | _16;
  CoreInstance_7->WakeupIndication.Disabled = _17;
  # DEBUG BEGIN_STMT
  _18 = CoreInstance_7->WakeupStatus.Disabled;
  _19 = wksDisable_9 | _18;
  CoreInstance_7->WakeupStatus.Disabled = _19;
  # DEBUG BEGIN_STMT
  # DEBUG sources => NULL
  # DEBUG status => NULL
  # DEBUG CoreInstance => NULL
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CoreInstance_7->State = 34;
  # DEBUG BEGIN_STMT
  BswM_EcuM_CurrentState (34);
  # DEBUG BEGIN_STMT
  OS_UserReleaseResource (0);
  return;

}



;; Function EcuM_GoSleep (EcuM_GoSleep, funcdef_no=30, decl_uid=10517, cgraph_uid=31, symbol_order=41)

Modification phase of node EcuM_GoSleep/41
EcuM_GoSleep ()
{
  EcuM_WakeupSourceType wksCleared;
  EcuM_WakeupSourceType wksSleepMode;
  struct EcuM_CoreContextType * CoreInstance;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char EcuM_ShutdownTarget.17_7;
  unsigned char _8;
  unsigned char EcuM_ResetMode.18_9;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CoreInstance_12 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_12
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_12->SleepMode;
  _2 = (int) _1;
  wksSleepMode_13 = EcuM_SleepModeConfigList[_2].wakeupSource;
  # DEBUG wksSleepMode => wksSleepMode_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CoreInstance_12->State = 73;
  # DEBUG BEGIN_STMT
  BswM_EcuM_CurrentState (73);
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  _3 = CoreInstance_12->WakeupStatus.Pending;
  _4 = CoreInstance_12->WakeupStatus.Validated;
  _5 = _3 | _4;
  _6 = ~_5;
  wksCleared_17 = _6 & wksSleepMode_13;
  # DEBUG wksCleared => wksCleared_17
  # DEBUG BEGIN_STMT
  EcuM_SwitchWakeupStatus (wksCleared_17, 0, CoreInstance_12);
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_WksIndicateStatus_NONE ();
  # DEBUG BEGIN_STMT
  EcuM_EnableWakeupSources (wksSleepMode_13);
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  # DEBUG sources => wksSleepMode_13
  # DEBUG status => 6
  # DEBUG CoreInstance => CoreInstance_12
  # DEBUG INLINE_ENTRY EcuM_SwitchWakeupStatus
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _30 = CoreInstance_12->WakeupStatus.Disabled;
  _31 = ~wksSleepMode_13;
  _32 = _30 & _31;
  CoreInstance_12->WakeupStatus.Disabled = _32;
  # DEBUG BEGIN_STMT
  # DEBUG sources => NULL
  # DEBUG status => NULL
  # DEBUG CoreInstance => NULL
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  OS_UserGetResource (0);
  # DEBUG BEGIN_STMT
  EcuM_ShutdownTarget.17_7 = EcuM_ShutdownTarget;
  EcuM_LastShutdownTarget = EcuM_ShutdownTarget.17_7;
  # DEBUG BEGIN_STMT
  _8 = CoreInstance_12->SleepMode;
  EcuM_LastSleepMode = _8;
  # DEBUG BEGIN_STMT
  EcuM_ResetMode.18_9 = EcuM_ResetMode;
  EcuM_LastResetMode = EcuM_ResetMode.18_9;
  # DEBUG BEGIN_STMT
  CoreInstance_12->State = 80;
  # DEBUG BEGIN_STMT
  BswM_EcuM_CurrentState (80);
  return;

}



;; Function EcuM_GoDown (EcuM_GoDown, funcdef_no=0, decl_uid=9028, cgraph_uid=1, symbol_order=11)

Modification phase of node EcuM_GoDown/11
EcuM_GoDown (uint16 caller)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 31, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_8 = EcuM_GoDownMaster ();
  # DEBUG ret => ret_8

  <bb 5> [local count: 1073741824]:
  # ret_3 = PHI <0(3), ret_8(4)>
  # DEBUG ret => ret_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_3;

}



;; Function EcuM_GoHalt (EcuM_GoHalt, funcdef_no=2, decl_uid=9030, cgraph_uid=3, symbol_order=13)

Modification phase of node EcuM_GoHalt/13
EcuM_GoHalt ()
{
  struct EcuM_CoreContextType * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 32, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  EcuM_GoSleep ();
  # DEBUG BEGIN_STMT
  EcuM_HaltSequence ();
  # DEBUG BEGIN_STMT
  EcuM_WakeupRestart ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function EcuM_GoPoll (EcuM_GoPoll, funcdef_no=4, decl_uid=9032, cgraph_uid=5, symbol_order=15)

Modification phase of node EcuM_GoPoll/15
EcuM_GoPoll ()
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * CoreInstance;
  unsigned char _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned char _6;
  int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;

  <bb 2> [local count: 229727064]:
  # DEBUG BEGIN_STMT
  CoreInstance_17 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_17
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_17->State;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 33, 16);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  EcuM_GoSleep ();
  # DEBUG BEGIN_STMT
  _2 = CoreInstance_17->SleepMode;
  _3 = (int) _2;
  _4 = EcuM_SleepModeConfigList[_3].mcuMode;
  _5 = (long unsigned int) _4;
  Mcu_SetMode (_5);
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  EcuM_SleepActivity ();
  # DEBUG BEGIN_STMT
  _6 = CoreInstance_17->SleepMode;
  _7 = (int) _6;
  _8 = EcuM_SleepModeConfigList[_7].wakeupSource;
  _9 = _8 & 63;
  EcuM_CheckWakeup (_9);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _10 = CoreInstance_17->WakeupStatus.Pending;
  if (_10 == 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 7> [local count: 1014686025]:
  _11 = CoreInstance_17->WakeupStatus.Validated;
  if (_11 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  EcuM_WakeupRestart ();
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0

  <bb 9> [local count: 229727064]:
  # ret_12 = PHI <1(3), 0(8)>
  # DEBUG ret => ret_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_12;

}



;; Function EcuM_StartupTwo (EcuM_StartupTwo, funcdef_no=10, decl_uid=9036, cgraph_uid=11, symbol_order=21)

Modification phase of node EcuM_StartupTwo/21
EcuM_StartupTwo ()
{
  struct EcuM_CoreContextType * CoreInstance;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CoreInstance_5 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_5->State;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 26, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CoreInstance_5->State = 18;
  # DEBUG BEGIN_STMT
  EcuM_SchM_Init ();
  # DEBUG BEGIN_STMT
  BswM_Init (0B);
  # DEBUG BEGIN_STMT
  CoreInstance_5->State = 48;
  # DEBUG BEGIN_STMT
  BswM_EcuM_CurrentState (48);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_Shutdown (EcuM_Shutdown, funcdef_no=11, decl_uid=9038, cgraph_uid=12, symbol_order=22)

Modification phase of node EcuM_Shutdown/22
EcuM_Shutdown ()
{
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  unsigned char EcuM_ShutdownTarget.28_3;
  unsigned char EcuM_ResetMode.30_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 2, 16);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  EcuM_OnGoOffTwo ();
  # DEBUG BEGIN_STMT
  EcuM_ShutdownTarget.28_3 = EcuM_ShutdownTarget;
  EcuM_LastShutdownTarget = EcuM_ShutdownTarget.28_3;
  # DEBUG BEGIN_STMT
  if (EcuM_ShutdownTarget.28_3 == 144)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  EcuM_ResetMode.30_4 = EcuM_ResetMode;
  EcuM_AL_Reset (EcuM_ResetMode.30_4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  EcuM_AL_SwitchOff ();

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_ASR40_SelectShutdownTarget (EcuM_ASR40_SelectShutdownTarget, funcdef_no=13, decl_uid=9041, cgraph_uid=14, symbol_order=24)

Modification phase of node EcuM_ASR40_SelectShutdownTarget/24
EcuM_ASR40_SelectShutdownTarget (EcuM_ASR40_StateType target, uint8 mode)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  ret_5 = EcuM_SelectShutdownTargetSequence (target_2(D), mode_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function EcuM_ASR40_GetShutdownTarget (EcuM_ASR40_GetShutdownTarget, funcdef_no=14, decl_uid=9044, cgraph_uid=15, symbol_order=25)

Modification phase of node EcuM_ASR40_GetShutdownTarget/25
EcuM_ASR40_GetShutdownTarget (EcuM_ASR40_StateType * shutdownTarget, uint8 * sleepMode)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  unsigned char EcuM_ShutdownTarget.31_3;
  unsigned char EcuM_ShutdownTarget.32_4;
  struct EcuM_CoreContextType * _5;
  unsigned char _6;
  unsigned char EcuM_ResetMode.34_7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 9, 16);
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (shutdownTarget_14(D) != 0B)
    goto <bb 5>; [82.57%]
  else
    goto <bb 6>; [17.43%]

  <bb 5> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  EcuM_ShutdownTarget.31_3 = EcuM_ShutdownTarget;
  *shutdownTarget_14(D) = EcuM_ShutdownTarget.31_3;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 9, 18);

  <bb 7> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (sleepMode_17(D) != 0B)
    goto <bb 8>; [82.57%]
  else
    goto <bb 12>; [17.43%]

  <bb 8> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  EcuM_ShutdownTarget.32_4 = EcuM_ShutdownTarget;
  if (EcuM_ShutdownTarget.32_4 == 80)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 120228510]:
  # DEBUG BEGIN_STMT
  _5 = EcuM_GetMasterCoreInstance ();
  _6 = _5->SleepMode;
  *sleepMode_17(D) = _6;
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 473785868]:
  # DEBUG BEGIN_STMT
  if (EcuM_ShutdownTarget.32_4 == 144)
    goto <bb 11>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 11> [local count: 161087195]:
  # DEBUG BEGIN_STMT
  EcuM_ResetMode.34_7 = EcuM_ResetMode;
  *sleepMode_17(D) = EcuM_ResetMode.34_7;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 9, 18);

  <bb 13> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (sleepMode_17(D) != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 15>; [30.00%]

  <bb 14> [local count: 503584916]:
  if (shutdownTarget_14(D) != 0B)
    goto <bb 16>; [70.00%]
  else
    goto <bb 15>; [30.00%]

  <bb 15> [local count: 366897581]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1

  <bb 16> [local count: 1073741824]:
  # ret_8 = PHI <1(3), 0(14), 1(15)>
  # DEBUG ret => ret_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_8;

}



;; Function EcuM_ASR40_GetLastShutdownTarget (EcuM_ASR40_GetLastShutdownTarget, funcdef_no=15, decl_uid=9047, cgraph_uid=16, symbol_order=26)

Modification phase of node EcuM_ASR40_GetLastShutdownTarget/26
EcuM_ASR40_GetLastShutdownTarget (EcuM_ASR40_StateType * shutdownTarget, uint8 * sleepMode)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  unsigned char EcuM_LastShutdownTarget.35_3;
  unsigned char EcuM_LastShutdownTarget.36_4;
  unsigned char EcuM_LastSleepMode.37_5;
  unsigned char EcuM_LastResetMode.39_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 8, 16);
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (shutdownTarget_13(D) != 0B)
    goto <bb 5>; [82.57%]
  else
    goto <bb 6>; [17.43%]

  <bb 5> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  EcuM_LastShutdownTarget.35_3 = EcuM_LastShutdownTarget;
  *shutdownTarget_13(D) = EcuM_LastShutdownTarget.35_3;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 8, 18);

  <bb 7> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (sleepMode_16(D) != 0B)
    goto <bb 8>; [82.57%]
  else
    goto <bb 12>; [17.43%]

  <bb 8> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  EcuM_LastShutdownTarget.36_4 = EcuM_LastShutdownTarget;
  if (EcuM_LastShutdownTarget.36_4 == 80)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 201964889]:
  # DEBUG BEGIN_STMT
  EcuM_LastSleepMode.37_5 = EcuM_LastSleepMode;
  *sleepMode_16(D) = EcuM_LastSleepMode.37_5;
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 392049490]:
  # DEBUG BEGIN_STMT
  if (EcuM_LastShutdownTarget.36_4 == 144)
    goto <bb 11>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 11> [local count: 133296826]:
  # DEBUG BEGIN_STMT
  EcuM_LastResetMode.39_6 = EcuM_LastResetMode;
  *sleepMode_16(D) = EcuM_LastResetMode.39_6;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 8, 18);

  <bb 13> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (shutdownTarget_13(D) != 0B)
    goto <bb 14>; [70.00%]
  else
    goto <bb 15>; [30.00%]

  <bb 14> [local count: 503584916]:
  if (sleepMode_16(D) != 0B)
    goto <bb 16>; [70.00%]
  else
    goto <bb 15>; [30.00%]

  <bb 15> [local count: 366897581]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1

  <bb 16> [local count: 1073741824]:
  # ret_7 = PHI <1(3), 0(14), 1(15)>
  # DEBUG ret => ret_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_7;

}



;; Function EcuM_ASR40_SelectShutdownCause (EcuM_ASR40_SelectShutdownCause, funcdef_no=16, decl_uid=9049, cgraph_uid=17, symbol_order=27)

Modification phase of node EcuM_ASR40_SelectShutdownCause/27
EcuM_ASR40_SelectShutdownCause (EcuM_ASR40_ShutdownCauseType target)
{
  uint8_least idx;
  Std_ReturnType ret;
  unsigned char _1;
  struct EcuM_CoreContextType * _2;
  unsigned char _3;

  <bb 2> [local count: 261993004]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG detOk => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG idx => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = EcuM_ValidShutdownCause[idx_5];
  if (_1 == target_8(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 811748819]:
  # DEBUG BEGIN_STMT
  idx_9 = idx_5 + 1;
  # DEBUG idx => idx_9

  <bb 5> [local count: 1073741824]:
  # idx_5 = PHI <0(2), idx_9(4)>
  # DEBUG idx => idx_5
  # DEBUG BEGIN_STMT
  if (idx_5 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 6>; [20.00%]

  <bb 6> [local count: 261993005]:
  # idx_12 = PHI <idx_5(3), idx_5(5)>
  # DEBUG BEGIN_STMT
  _2 = EcuM_GetMasterCoreInstance ();
  _3 = _2->State;
  if (_3 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 86457692]:
  # DEBUG BEGIN_STMT
  # DEBUG detOk => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 27, 16);
  # DEBUG detOk => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 175535313]:
  # DEBUG BEGIN_STMT
  if (idx_12 == 4)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 35528347]:
  # DEBUG BEGIN_STMT
  # DEBUG detOk => 0
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 27, 19);
  # DEBUG detOk => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 140006966]:
  # DEBUG detOk => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  EcuM_ShutdownCause = target_8(D);

  <bb 11> [local count: 261993005]:
  # ret_4 = PHI <0(10), 1(9), 1(7)>
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_4;

}



;; Function EcuM_ASR40_GetShutdownCause (EcuM_ASR40_GetShutdownCause, funcdef_no=17, decl_uid=9051, cgraph_uid=18, symbol_order=28)

Modification phase of node EcuM_ASR40_GetShutdownCause/28
EcuM_ASR40_GetShutdownCause (EcuM_ASR40_ShutdownCauseType * shutdownCause)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  unsigned char EcuM_ShutdownCause.40_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 28, 16);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (shutdownCause_8(D) != 0B)
    goto <bb 5>; [82.57%]
  else
    goto <bb 6>; [17.43%]

  <bb 5> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  EcuM_ShutdownCause.40_3 = EcuM_ShutdownCause;
  *shutdownCause_8(D) = EcuM_ShutdownCause.40_3;
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 28, 18);

  <bb 7> [local count: 1073741824]:
  # ret_4 = PHI <1(3), 0(5), 1(6)>
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_4;

}



;; Function EcuM_ASR40_GetMostRecentShutdown (EcuM_ASR40_GetMostRecentShutdown, funcdef_no=18, decl_uid=9056, cgraph_uid=19, symbol_order=29)

Modification phase of node EcuM_ASR40_GetMostRecentShutdown/29
EcuM_ASR40_GetMostRecentShutdown (EcuM_ASR40_StateType * target, uint8 * mode, EcuM_ASR40_ShutdownCauseType * cause, uint32 * time)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  unsigned char EcuM_ShutdownInfoCurrentIdx.41_3;
  unsigned char EcuM_ShutdownInfoStartIdx.43_4;
  unsigned char _5;
  unsigned char EcuM_NextShutdownInfoIdx.47_6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 29, 16);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (target_19(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 594014379]:
  if (mode_20(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 6> [local count: 415810065]:
  if (cause_21(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 7> [local count: 291067045]:
  if (time_22(D) == 0B)
    goto <bb 8>; [46.53%]
  else
    goto <bb 9>; [53.47%]

  <bb 8> [local count: 563773474]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 29, 18);
  goto <bb 15>; [100.00%]

  <bb 9> [local count: 155633549]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_ShutdownInfoCurrentIdx.41_3 = EcuM_ShutdownInfoCurrentIdx;
  EcuM_NextShutdownInfoIdx = EcuM_ShutdownInfoCurrentIdx.41_3;
  # DEBUG BEGIN_STMT
  EcuM_ShutdownInfoStartIdx.43_4 = EcuM_ShutdownInfoStartIdx;
  if (EcuM_ShutdownInfoCurrentIdx.41_3 != EcuM_ShutdownInfoStartIdx.43_4)
    goto <bb 10>; [66.00%]
  else
    goto <bb 14>; [34.00%]

  <bb 10> [local count: 102718142]:
  # DEBUG BEGIN_STMT
  if (EcuM_ShutdownInfoCurrentIdx.41_3 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 51359071]:
  # DEBUG BEGIN_STMT
  EcuM_NextShutdownInfoIdx = 0;
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 51359071]:
  # DEBUG BEGIN_STMT
  _5 = EcuM_ShutdownInfoCurrentIdx.41_3 + 255;
  EcuM_NextShutdownInfoIdx = _5;

  <bb 13> [local count: 102718142]:
  # DEBUG BEGIN_STMT
  EcuM_NextShutdownInfoIdx.47_6 = EcuM_NextShutdownInfoIdx;
  _7 = (int) EcuM_NextShutdownInfoIdx.47_6;
  _8 = EcuM_ShutdownInfo[_7].target;
  *target_19(D) = _8;
  # DEBUG BEGIN_STMT
  _9 = EcuM_ShutdownInfo[_7].mode;
  *mode_20(D) = _9;
  # DEBUG BEGIN_STMT
  _10 = EcuM_ShutdownInfo[_7].cause;
  *cause_21(D) = _10;
  # DEBUG BEGIN_STMT
  _11 = EcuM_ShutdownInfo[_7].sdTime;
  *time_22(D) = _11;
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0

  <bb 14> [local count: 155633549]:
  # ret_12 = PHI <1(9), 0(13)>
  # DEBUG ret => ret_12
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 15> [local count: 1073741824]:
  # ret_13 = PHI <1(3), 1(8), ret_12(14)>
  # DEBUG ret => ret_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_13;

}



;; Function EcuM_ASR40_GetNextRecentShutdown (EcuM_ASR40_GetNextRecentShutdown, funcdef_no=19, decl_uid=9061, cgraph_uid=20, symbol_order=30)

Modification phase of node EcuM_ASR40_GetNextRecentShutdown/30
EcuM_ASR40_GetNextRecentShutdown (EcuM_ASR40_StateType * target, uint8 * mode, EcuM_ASR40_ShutdownCauseType * cause, uint32 * time)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  unsigned char EcuM_NextShutdownInfoIdx.51_3;
  unsigned char _4;
  unsigned char EcuM_NextShutdownInfoIdx.54_5;
  unsigned char EcuM_ShutdownInfoStartIdx.55_6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  long unsigned int _11;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 30, 16);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_NextShutdownInfoIdx.51_3 = EcuM_NextShutdownInfoIdx;
  if (EcuM_NextShutdownInfoIdx.51_3 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _4 = EcuM_NextShutdownInfoIdx.51_3 + 255;
  EcuM_NextShutdownInfoIdx = _4;
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  EcuM_NextShutdownInfoIdx = 0;

  <bb 7> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  EcuM_NextShutdownInfoIdx.54_5 = EcuM_NextShutdownInfoIdx;
  EcuM_ShutdownInfoStartIdx.55_6 = EcuM_ShutdownInfoStartIdx;
  if (EcuM_NextShutdownInfoIdx.54_5 != EcuM_ShutdownInfoStartIdx.55_6)
    goto <bb 8>; [79.76%]
  else
    goto <bb 14>; [20.24%]

  <bb 8> [local count: 428208239]:
  # DEBUG BEGIN_STMT
  if (target_21(D) == 0B)
    goto <bb 12>; [17.43%]
  else
    goto <bb 9>; [82.57%]

  <bb 9> [local count: 353571543]:
  if (mode_22(D) == 0B)
    goto <bb 12>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 10> [local count: 247500080]:
  if (cause_23(D) == 0B)
    goto <bb 12>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 11> [local count: 173250056]:
  if (time_24(D) == 0B)
    goto <bb 12>; [46.53%]
  else
    goto <bb 13>; [53.47%]

  <bb 12> [local count: 335571434]:
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 30, 18);
  goto <bb 15>; [100.00%]

  <bb 13> [local count: 92636805]:
  # DEBUG BEGIN_STMT
  _7 = (int) EcuM_NextShutdownInfoIdx.54_5;
  _8 = EcuM_ShutdownInfo[_7].target;
  *target_21(D) = _8;
  # DEBUG BEGIN_STMT
  _9 = EcuM_ShutdownInfo[_7].mode;
  *mode_22(D) = _9;
  # DEBUG BEGIN_STMT
  _10 = EcuM_ShutdownInfo[_7].cause;
  *cause_23(D) = _10;
  # DEBUG BEGIN_STMT
  _11 = EcuM_ShutdownInfo[_7].sdTime;
  *time_24(D) = _11;
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 108662672]:
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 15> [local count: 1073741824]:
  # ret_12 = PHI <1(3), 0(13), 1(14), 1(12)>
  # DEBUG ret => ret_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_12;

}



;; Function EcuM_GetPendingWakeupEvents (EcuM_GetPendingWakeupEvents, funcdef_no=20, decl_uid=9063, cgraph_uid=21, symbol_order=31)

Modification phase of node EcuM_GetPendingWakeupEvents/31
EcuM_GetPendingWakeupEvents ()
{
  struct EcuM_CoreContextType * CoreInstance;
  EcuM_WakeupSourceType ret;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  CoreInstance_6 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_6->State;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 13, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  ret_8 = CoreInstance_6->WakeupStatus.Pending;
  # DEBUG ret => ret_8
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 5> [local count: 1073741824]:
  # ret_2 = PHI <0(3), ret_8(4)>
  # DEBUG ret => ret_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_2;

}



;; Function EcuM_ClearWakeupEvent (EcuM_ClearWakeupEvent, funcdef_no=21, decl_uid=9065, cgraph_uid=22, symbol_order=32)

Modification phase of node EcuM_ClearWakeupEvent/32
EcuM_ClearWakeupEvent (EcuM_WakeupSourceType sources)
{
  struct EcuM_CoreContextType * CoreInstance;
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CoreInstance_7 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_7->State;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 22, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_SwitchWakeupStatus (sources_9(D), 0, CoreInstance_7);
  # DEBUG BEGIN_STMT
  _2 = CoreInstance_7->WakeupStatus.Stopped;
  _3 = _2 | sources_9(D);
  CoreInstance_7->WakeupStatus.Stopped = _3;
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_GetValidatedWakeupEvents (EcuM_GetValidatedWakeupEvents, funcdef_no=22, decl_uid=9067, cgraph_uid=23, symbol_order=33)

Modification phase of node EcuM_GetValidatedWakeupEvents/33
EcuM_GetValidatedWakeupEvents ()
{
  struct EcuM_CoreContextType * CoreInstance;
  EcuM_WakeupSourceType ret;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  CoreInstance_6 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_6->State;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 21, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  ret_8 = CoreInstance_6->WakeupStatus.Validated;
  # DEBUG ret => ret_8
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 5> [local count: 1073741824]:
  # ret_2 = PHI <0(3), ret_8(4)>
  # DEBUG ret => ret_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_2;

}



;; Function EcuM_GetExpiredWakeupEvents (EcuM_GetExpiredWakeupEvents, funcdef_no=23, decl_uid=9069, cgraph_uid=24, symbol_order=34)

Modification phase of node EcuM_GetExpiredWakeupEvents/34
EcuM_GetExpiredWakeupEvents ()
{
  struct EcuM_CoreContextType * CoreInstance;
  EcuM_WakeupSourceType ret;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  CoreInstance_6 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_6->State;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 25, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  ret_8 = CoreInstance_6->WakeupStatus.Expired;
  # DEBUG ret => ret_8
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 5> [local count: 1073741824]:
  # ret_2 = PHI <0(3), ret_8(4)>
  # DEBUG ret => ret_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_2;

}



;; Function EcuM_MainFunction (EcuM_MainFunction, funcdef_no=24, decl_uid=9928, cgraph_uid=25, symbol_order=35)

Modification phase of node EcuM_MainFunction/35
EcuM_MainFunction ()
{
  struct EcuM_CoreContextType * CoreInstance;
  uint16 wksValCounter;
  EcuM_WakeupSourceType wksStopped;
  EcuM_WakeupSourceType wksStarted;
  EcuM_WakeupSourceType wksValidated;
  EcuM_WakeupSourceType wksPending;
  unsigned char _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  long unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG wksPending => 0
  # DEBUG BEGIN_STMT
  # DEBUG wksValidated => 0
  # DEBUG BEGIN_STMT
  # DEBUG wksStarted => 0
  # DEBUG BEGIN_STMT
  # DEBUG wksStopped => 0
  # DEBUG BEGIN_STMT
  # DEBUG wksValCounter => 0
  # DEBUG BEGIN_STMT
  CoreInstance_27 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_27->State;
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 24, 16);
  goto <bb 18>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _2 = _1 + 239;
  if (_2 > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 18>; [58.52%]

  <bb 5> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  _3 = CoreInstance_27->WakeupStatus.Started;
  _4 = CoreInstance_27->WakeupStatus.Stopped;
  _5 = ~_4;
  _6 = _3 & _5;
  CoreInstance_27->WakeupStatus.Started = _6;
  # DEBUG BEGIN_STMT
  CoreInstance_27->WakeupStatus.Stopped = 0;
  # DEBUG BEGIN_STMT
  wksPending_31 = CoreInstance_27->WakeupStatus.Pending;
  # DEBUG wksPending => wksPending_31
  # DEBUG BEGIN_STMT
  wksValidated_32 = CoreInstance_27->WakeupStatus.Validated;
  # DEBUG wksValidated => wksValidated_32
  # DEBUG BEGIN_STMT
  # DEBUG wksStarted => _6
  # DEBUG BEGIN_STMT
  wksValCounter_33 = CoreInstance_27->ValidationCounter;
  # DEBUG wksValCounter => wksValCounter_33
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  _7 = CoreInstance_27->State;
  if (_7 == 34)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 101459411]:
  if (wksValidated_32 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 33481606]:
  # DEBUG BEGIN_STMT
  CoreInstance_27->State = 48;
  # DEBUG BEGIN_STMT
  BswM_EcuM_CurrentState (48);

  <bb 8> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  EcuM_WksIndicateStatus ();
  # DEBUG BEGIN_STMT
  if (wksPending_31 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 149205016]:
  if (wksValCounter_33 == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 10> [local count: 49237655]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_SwitchWakeupStatus (wksPending_31, 3, CoreInstance_27);
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_StopWakeupSources (wksPending_31);
  # DEBUG BEGIN_STMT
  # DEBUG wksStopped => wksPending_31
  # DEBUG BEGIN_STMT
  # DEBUG wksPending => 0
  # DEBUG BEGIN_STMT
  EcuM_WksIndicateStatus_EXPIRED ();

  <bb 11> [local count: 298410033]:
  # wksPending_16 = PHI <wksPending_31(8), wksPending_31(9), 0(10)>
  # wksStopped_18 = PHI <0(8), 0(9), wksPending_31(10)>
  # DEBUG wksStopped => wksStopped_18
  # DEBUG wksPending => wksPending_16
  # DEBUG BEGIN_STMT
  _8 = ~_6;
  _9 = _8 & wksPending_16;
  if (_9 != 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 12> [local count: 98475311]:
  # DEBUG BEGIN_STMT
  EcuM_StartWakeupSources (_9);
  # DEBUG BEGIN_STMT
  # DEBUG wksStarted => wksPending_16

  <bb 13> [local count: 298410033]:
  # wksStarted_17 = PHI <_6(11), wksPending_16(12)>
  # DEBUG wksStarted => wksStarted_17
  # DEBUG BEGIN_STMT
  if (wksPending_16 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 14> [local count: 98475311]:
  # DEBUG BEGIN_STMT
  EcuM_CheckValidation (wksPending_16);

  <bb 15> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  _10 = CoreInstance_27->ValidationCounter;
  if (_10 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 16> [local count: 149205016]:
  # DEBUG BEGIN_STMT
  _11 = _10 + 65535;
  CoreInstance_27->ValidationCounter = _11;

  <bb 17> [local count: 298410033]:
  # DEBUG BEGIN_STMT
  _12 = CoreInstance_27->WakeupStatus.Started;
  _13 = _12 | wksStarted_17;
  # DEBUG BEGIN_STMT
  _14 = ~wksStopped_18;
  _15 = _13 & _14;
  CoreInstance_27->WakeupStatus.Started = _15;
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_ReportRamCheckResult ();

  <bb 18> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_SetWakeupEvent (EcuM_SetWakeupEvent, funcdef_no=26, decl_uid=9072, cgraph_uid=27, symbol_order=37)

Modification phase of node EcuM_SetWakeupEvent/37
EcuM_SetWakeupEvent (EcuM_WakeupSourceType sources)
{
  uint16 maxTimeout;
  EcuM_WakeupSourceType wksPendingNew;
  uint8_least wks;
  struct EcuM_CoreContextType * CoreInstance;
  unsigned char _1;
  long unsigned int _2;
  unsigned char _3;
  int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  int _12;
  short unsigned int _13;
  short unsigned int _15;
  short unsigned int _16;

  <bb 2> [local count: 458023003]:
  # DEBUG BEGIN_STMT
  CoreInstance_25 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = CoreInstance_25->State;
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 151147591]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 12, 16);
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 306875412]:
  # DEBUG BEGIN_STMT
  _2 = sources_26(D) & 63;
  if (_2 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 12, 23);
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 153437706]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG wksPendingNew => 0
  # DEBUG BEGIN_STMT
  # DEBUG maxTimeout => 0
  # DEBUG BEGIN_STMT
  _3 = CoreInstance_25->SleepMode;
  _4 = (int) _3;
  _5 = EcuM_SleepModeConfigList[_4].wakeupSource;
  sources_27 = _5 & sources_26(D);
  # DEBUG sources => sources_27
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  _6 = CoreInstance_25->WakeupStatus.Pending;
  _7 = _6 | 63;
  _8 = ~_7;
  wksPendingNew_29 = _8 & sources_27;
  # DEBUG wksPendingNew => wksPendingNew_29
  # DEBUG BEGIN_STMT
  EcuM_SwitchWakeupStatus (wksPendingNew_29, 1, CoreInstance_25);
  # DEBUG BEGIN_STMT
  _9 = sources_27 & 63;
  EcuM_SwitchWakeupStatus (_9, 2, CoreInstance_25);
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();
  # DEBUG BEGIN_STMT
  # DEBUG wks => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 920304118]:
  # DEBUG BEGIN_STMT
  _10 = wksPendingNew_18 & 1;
  if (_10 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 460152059]:
  # DEBUG BEGIN_STMT
  _11 = EcuM_WksMapping[wks_17];
  _12 = (int) _11;
  _13 = EcuM_WksValTimeout[_12];
  _15 = MAX_EXPR <_13, maxTimeout_20>;

  <bb 9> [local count: 920304118]:
  # maxTimeout_19 = PHI <maxTimeout_20(7), _15(8)>
  # DEBUG maxTimeout => maxTimeout_19
  # DEBUG BEGIN_STMT
  wksPendingNew_36 = wksPendingNew_18 >> 1;
  # DEBUG wksPendingNew => wksPendingNew_36
  # DEBUG BEGIN_STMT
  wks_37 = wks_17 + 1;
  # DEBUG wks => wks_37

  <bb 10> [local count: 1073741824]:
  # wks_17 = PHI <0(6), wks_37(9)>
  # wksPendingNew_18 = PHI <wksPendingNew_29(6), wksPendingNew_36(9)>
  # maxTimeout_20 = PHI <0(6), maxTimeout_19(9)>
  # DEBUG maxTimeout => maxTimeout_20
  # DEBUG wksPendingNew => wksPendingNew_18
  # DEBUG wks => wks_17
  # DEBUG BEGIN_STMT
  if (wksPendingNew_18 != 0)
    goto <bb 7>; [85.71%]
  else
    goto <bb 11>; [14.29%]

  <bb 11> [local count: 153437707]:
  # maxTimeout_14 = PHI <maxTimeout_20(10)>
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  _16 = CoreInstance_25->ValidationCounter;
  if (maxTimeout_14 > _16)
    goto <bb 12>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 12> [local count: 76718853]:
  # DEBUG BEGIN_STMT
  CoreInstance_25->ValidationCounter = maxTimeout_14;

  <bb 13> [local count: 153437707]:
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 14> [local count: 458023004]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_ValidateWakeupEvent (EcuM_ValidateWakeupEvent, funcdef_no=27, decl_uid=9074, cgraph_uid=28, symbol_order=38)

Modification phase of node EcuM_ValidateWakeupEvent/38
EcuM_ValidateWakeupEvent (EcuM_WakeupSourceType sources)
{
  const EcuM_ASR40_StateType state;
  struct EcuM_CoreContextType * CoreInstance;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _20;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  CoreInstance_9 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_9
  # DEBUG BEGIN_STMT
  state_10 = CoreInstance_9->State;
  # DEBUG state => state_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (state_10 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 20, 16);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  _1 = sources_11(D) & 63;
  if (_1 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 20, 23);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _2 = CoreInstance_9->WakeupStatus.Pending;
  sources_12 = _2 & sources_11(D);
  # DEBUG sources => sources_12
  # DEBUG BEGIN_STMT
  _20 = state_10 & 240;
  if (_20 == 48)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 163880919]:
  # DEBUG BEGIN_STMT
  sources_13 = sources_12 & 32;
  # DEBUG sources => sources_13

  <bb 8> [local count: 482002704]:
  # sources_5 = PHI <sources_12(6), sources_13(7)>
  # DEBUG sources => sources_5
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  EcuM_SwitchWakeupStatus (sources_5, 2, CoreInstance_9);
  # DEBUG BEGIN_STMT
  _3 = CoreInstance_9->WakeupStatus.Stopped;
  _4 = _3 | sources_5;
  CoreInstance_9->WakeupStatus.Stopped = _4;
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_IsValidConfig (EcuM_IsValidConfig, funcdef_no=28, decl_uid=9121, cgraph_uid=29, symbol_order=39)

Modification phase of node EcuM_IsValidConfig/39
EcuM_IsValidConfig (const void * voidConfigPtr)
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
  _1 = MEM[(const struct EcuM_ConfigType *)voidConfigPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct EcuM_ConfigType *)voidConfigPtr_6(D)].CfgSignature;
  if (_3 == 29041840)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 124124556]:
  result_10 = EcuM_IsValidConfig.part.0 (voidConfigPtr_6(D));

  <bb 5> [local count: 1073741824]:
  # result_4 = PHI <1(2), 1(3), result_10(4)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function EcuM_Init (EcuM_Init, funcdef_no=9, decl_uid=9034, cgraph_uid=10, symbol_order=20)

Modification phase of node EcuM_Init/20
EcuM_Init ()
{
  struct EcuM_CoreContextType * CoreInstance;
  const struct EcuM_ConfigType * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  CoreInstance_6 = EcuM_GetCoreInstance ();
  # DEBUG CoreInstance => CoreInstance_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *CoreInstance_6 = EcuM_InitialContext;
  # DEBUG BEGIN_STMT
  CoreInstance_6->State = 17;
  # DEBUG BEGIN_STMT
  EcuM_AL_DriverInitZero ();
  # DEBUG BEGIN_STMT
  _1 = EcuM_DeterminePbConfiguration ();
  EcuM_ConfigPtr = _1;
  # DEBUG BEGIN_STMT
  if (_1 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 1, 18);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _2 = EcuM_IsValidConfig (_1);
  if (_2 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 1, 27);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  EcuM_Init_SingleCore ();

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


