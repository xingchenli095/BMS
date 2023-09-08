
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EcuM_ValidateWakeupEvent/26:
  Jump functions of caller  Mcu_PerformReset/25:
  Jump functions of caller  EcuM_DefaultInitListOne/23:
  Jump functions of caller  EcuM_DefaultInitListZero/22:
  Jump functions of caller  EcuM_PostHalt/21:
  Jump functions of caller  EcuM_PreHalt/20:
  Jump functions of caller  EcuM_CheckWakeup/19:
  Jump functions of caller  EcuM_SleepActivity/18:
  Jump functions of caller  EcuM_DriverRestartList/17:
  Jump functions of caller  EcuM_StopWakeupSources/16:
  Jump functions of caller  EcuM_CheckValidation/15:
  Jump functions of caller  EcuM_StartWakeupSources/14:
  Jump functions of caller  EcuM_DisableWakeupSources/13:
  Jump functions of caller  EcuM_CheckRamHash/12:
  Jump functions of caller  EcuM_AL_Reset/11:
  Jump functions of caller  EcuM_AL_SwitchOff/10:
  Jump functions of caller  EcuM_GenerateRamHash/9:
  Jump functions of caller  EcuM_EnableWakeupSources/8:
  Jump functions of caller  EcuM_OnGoOffTwo/7:
  Jump functions of caller  EcuM_OnGoOffOne/6:
  Jump functions of caller  EcuM_DeterminePbConfiguration/5:
  Jump functions of caller  EcuM_AL_SetProgrammableInterrupts/4:
  Jump functions of caller  EcuM_ErrorHook/3:
  Jump functions of caller  EcuM_AL_DriverInitOne/2:
  Jump functions of caller  EcuM_DriverInitListOne/1:
  Jump functions of caller  EcuM_AL_DriverInitZero/0:

 Propagating constants:

Function EcuM_PostHalt/21 is not versionable, reason: not a tree_versionable_function.
Function EcuM_PreHalt/20 is not versionable, reason: not a tree_versionable_function.
Function EcuM_CheckWakeup/19 is not versionable, reason: not a tree_versionable_function.
Function EcuM_SleepActivity/18 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_DriverRestartList for cloning; -fipa-cp-clone disabled.
Function EcuM_StopWakeupSources/16 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_CheckValidation for cloning; -fipa-cp-clone disabled.
Function EcuM_StartWakeupSources/14 is not versionable, reason: not a tree_versionable_function.
Function EcuM_DisableWakeupSources/13 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_CheckRamHash for cloning; -fipa-cp-clone disabled.
Not considering EcuM_AL_Reset for cloning; -fipa-cp-clone disabled.
Function EcuM_AL_SwitchOff/10 is not versionable, reason: not a tree_versionable_function.
Function EcuM_GenerateRamHash/9 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_EnableWakeupSources for cloning; -fipa-cp-clone disabled.
Function EcuM_OnGoOffTwo/7 is not versionable, reason: not a tree_versionable_function.
Function EcuM_OnGoOffOne/6 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_DeterminePbConfiguration for cloning; -fipa-cp-clone disabled.
Not considering EcuM_AL_SetProgrammableInterrupts for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ErrorHook for cloning; -fipa-cp-clone disabled.
Function EcuM_AL_DriverInitOne/2 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_DriverInitListOne for cloning; -fipa-cp-clone disabled.
Not considering EcuM_AL_DriverInitZero for cloning; -fipa-cp-clone disabled.

overall_size: 90, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: -1, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: EcuM_PostHalt/21:
  Node: EcuM_PreHalt/20:
  Node: EcuM_CheckWakeup/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_SleepActivity/18:
  Node: EcuM_DriverRestartList/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_StopWakeupSources/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_CheckValidation/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_StartWakeupSources/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_DisableWakeupSources/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_CheckRamHash/12:
  Node: EcuM_AL_Reset/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_AL_SwitchOff/10:
  Node: EcuM_GenerateRamHash/9:
  Node: EcuM_EnableWakeupSources/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_OnGoOffTwo/7:
  Node: EcuM_OnGoOffOne/6:
  Node: EcuM_DeterminePbConfiguration/5:
  Node: EcuM_AL_SetProgrammableInterrupts/4:
  Node: EcuM_ErrorHook/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_AL_DriverInitOne/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_DriverInitListOne/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_AL_DriverInitZero/0:

IPA decision stage:

 - Creating a specialized node of EcuM_EnableWakeupSources/8 for all known contexts.

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

EcuM_EnableWakeupSources.constprop.0/28 (EcuM_EnableWakeupSources.constprop) @07292c40
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of EcuM_EnableWakeupSources/8
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: EcuM_DisableWakeupSources/13 (1073741824 (estimated locally),1.00 per call) EcuM_StartWakeupSources/14 (1073741824 (estimated locally),1.00 per call) EcuM_StopWakeupSources/16 (1073741824 (estimated locally),1.00 per call) EcuM_CheckWakeup/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ValidateWakeupEvent/26 (EcuM_ValidateWakeupEvent) @072168c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_CheckValidation/15 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_PerformReset/25 (Mcu_PerformReset) @07216460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_AL_Reset/11 (354334802 (estimated locally),0.33 per call) 
  Calls: 
EcuM_Configuration/24 (EcuM_Configuration) @072145e8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_DeterminePbConfiguration/5 (addr)
  Availability: not_available
  Varpool flags: read-only
EcuM_DefaultInitListOne/23 (EcuM_DefaultInitListOne) @07211a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOne/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_DefaultInitListZero/22 (EcuM_DefaultInitListZero) @072118c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_AL_DriverInitZero/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_PostHalt/21 (EcuM_PostHalt) @07211700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_PreHalt/20 (EcuM_PreHalt) @07211540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_CheckWakeup/19 (EcuM_CheckWakeup) @07211380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_EnableWakeupSources.constprop/28 (1073741824 (estimated locally),1.00 per call) 
EcuM_SleepActivity/18 (EcuM_SleepActivity) @072111c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_DriverRestartList/17 (EcuM_DriverRestartList) @07211000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuM_StopWakeupSources/16 (EcuM_StopWakeupSources) @0720ee00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_EnableWakeupSources.constprop/28 (1073741824 (estimated locally),1.00 per call) 
EcuM_CheckValidation/15 (EcuM_CheckValidation) @0720ec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ValidateWakeupEvent/26 (1073741824 (estimated locally),1.00 per call) 
EcuM_StartWakeupSources/14 (EcuM_StartWakeupSources) @0720ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_EnableWakeupSources.constprop/28 (1073741824 (estimated locally),1.00 per call) 
EcuM_DisableWakeupSources/13 (EcuM_DisableWakeupSources) @0720e8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_EnableWakeupSources.constprop/28 (1073741824 (estimated locally),1.00 per call) 
EcuM_CheckRamHash/12 (EcuM_CheckRamHash) @0720e700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuM_AL_Reset/11 (EcuM_AL_Reset) @0720e540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_PerformReset/25 (354334802 (estimated locally),0.33 per call) 
EcuM_AL_SwitchOff/10 (EcuM_AL_SwitchOff) @0720e380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_GenerateRamHash/9 (EcuM_GenerateRamHash) @0720e1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_EnableWakeupSources/8 (EcuM_EnableWakeupSources) @0720e000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
EcuM_OnGoOffTwo/7 (EcuM_OnGoOffTwo) @071f0ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_OnGoOffOne/6 (EcuM_OnGoOffOne) @071f0d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_AL_SetProgrammableInterrupts/4 (1073741824 (estimated locally),1.00 per call) 
EcuM_DeterminePbConfiguration/5 (EcuM_DeterminePbConfiguration) @071f0b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_Configuration/24 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuM_AL_SetProgrammableInterrupts/4 (EcuM_AL_SetProgrammableInterrupts) @071f09a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: EcuM_PostHalt/21 (1073741824 (estimated locally),1.00 per call) EcuM_PreHalt/20 (1073741824 (estimated locally),1.00 per call) EcuM_SleepActivity/18 (1073741824 (estimated locally),1.00 per call) EcuM_AL_SwitchOff/10 (1073741824 (estimated locally),1.00 per call) EcuM_GenerateRamHash/9 (1073741824 (estimated locally),1.00 per call) EcuM_OnGoOffTwo/7 (1073741824 (estimated locally),1.00 per call) EcuM_OnGoOffOne/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ErrorHook/3 (EcuM_ErrorHook) @071f07e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuM_AL_DriverInitOne/2 (EcuM_AL_DriverInitOne) @071f0620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_DriverInitListOne/1 (1073741824 (estimated locally),1.00 per call) 
EcuM_DriverInitListOne/1 (EcuM_DriverInitListOne) @071f0460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: EcuM_AL_DriverInitOne/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: EcuM_DefaultInitListOne/23 (1073741824 (estimated locally),1.00 per call) 
EcuM_AL_DriverInitZero/0 (EcuM_AL_DriverInitZero) @071f02a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_DefaultInitListZero/22 (1073741824 (estimated locally),1.00 per call) 

;; Function EcuM_AL_DriverInitZero (EcuM_AL_DriverInitZero, funcdef_no=0, decl_uid=7843, cgraph_uid=1, symbol_order=0)

Modification phase of node EcuM_AL_DriverInitZero/0
EcuM_AL_DriverInitZero ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuM_DefaultInitListZero ();
  return;

}



;; Function EcuM_DriverInitListOne (EcuM_DriverInitListOne, funcdef_no=1, decl_uid=7810, cgraph_uid=2, symbol_order=1)

Modification phase of node EcuM_DriverInitListOne/1
EcuM_DriverInitListOne (const struct EcuM_ConfigType * ConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EcuM_DefaultInitListOne ();
  return;

}



;; Function EcuM_AL_DriverInitOne (EcuM_AL_DriverInitOne, funcdef_no=23, decl_uid=7849, cgraph_uid=3, symbol_order=2)

Modification phase of node EcuM_AL_DriverInitOne/2
EcuM_AL_DriverInitOne (const struct EcuM_ConfigType * ConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  EcuM_DriverInitListOne (ConfigPtr_2(D)); [tail call]
  return;

}



;; Function EcuM_ErrorHook (EcuM_ErrorHook, funcdef_no=3, decl_uid=7839, cgraph_uid=4, symbol_order=3)

Modification phase of node EcuM_ErrorHook/3
EcuM_ErrorHook (Std_ReturnType reason)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_AL_SetProgrammableInterrupts (EcuM_AL_SetProgrammableInterrupts, funcdef_no=4, decl_uid=7841, cgraph_uid=5, symbol_order=4)

Modification phase of node EcuM_AL_SetProgrammableInterrupts/4
EcuM_AL_SetProgrammableInterrupts ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_DeterminePbConfiguration (EcuM_DeterminePbConfiguration, funcdef_no=5, decl_uid=7847, cgraph_uid=6, symbol_order=5)

Modification phase of node EcuM_DeterminePbConfiguration/5
EcuM_DeterminePbConfiguration ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PbConfig => &EcuM_Configuration.RootCfg
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return &EcuM_Configuration.RootCfg;

}



;; Function EcuM_OnGoOffOne (EcuM_OnGoOffOne, funcdef_no=33, decl_uid=7853, cgraph_uid=7, symbol_order=6)

Modification phase of node EcuM_OnGoOffOne/6
EcuM_OnGoOffOne ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}



;; Function EcuM_OnGoOffTwo (EcuM_OnGoOffTwo, funcdef_no=35, decl_uid=7855, cgraph_uid=8, symbol_order=7)

Modification phase of node EcuM_OnGoOffTwo/7
EcuM_OnGoOffTwo ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}



;; Function EcuM_EnableWakeupSources (EcuM_EnableWakeupSources, funcdef_no=8, decl_uid=7857, cgraph_uid=9, symbol_order=8)

Modification phase of node EcuM_EnableWakeupSources/8
EcuM_EnableWakeupSources (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_GenerateRamHash (EcuM_GenerateRamHash, funcdef_no=37, decl_uid=7859, cgraph_uid=10, symbol_order=9)

Modification phase of node EcuM_GenerateRamHash/9
EcuM_GenerateRamHash ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}



;; Function EcuM_AL_SwitchOff (EcuM_AL_SwitchOff, funcdef_no=39, decl_uid=7861, cgraph_uid=11, symbol_order=10)

Modification phase of node EcuM_AL_SwitchOff/10
EcuM_AL_SwitchOff ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}



;; Function EcuM_AL_Reset (EcuM_AL_Reset, funcdef_no=11, decl_uid=7863, cgraph_uid=12, symbol_order=11)

Modification phase of node EcuM_AL_Reset/11
EcuM_AL_Reset (EcuM_ResetType reset)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (reset_2(D) == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Mcu_PerformReset ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_CheckRamHash (EcuM_CheckRamHash, funcdef_no=12, decl_uid=7865, cgraph_uid=13, symbol_order=12)

Modification phase of node EcuM_CheckRamHash/12
EcuM_CheckRamHash ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function EcuM_DisableWakeupSources (EcuM_DisableWakeupSources, funcdef_no=25, decl_uid=7867, cgraph_uid=14, symbol_order=13)

Modification phase of node EcuM_DisableWakeupSources/13
EcuM_DisableWakeupSources (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  EcuM_EnableWakeupSources (wakeupSource_1(D)); [tail call]
  return;

}



;; Function EcuM_StartWakeupSources (EcuM_StartWakeupSources, funcdef_no=27, decl_uid=7869, cgraph_uid=15, symbol_order=14)

Modification phase of node EcuM_StartWakeupSources/14
EcuM_StartWakeupSources (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  EcuM_EnableWakeupSources (wakeupSource_1(D)); [tail call]
  return;

}



;; Function EcuM_CheckValidation (EcuM_CheckValidation, funcdef_no=15, decl_uid=7871, cgraph_uid=16, symbol_order=15)

Modification phase of node EcuM_CheckValidation/15
EcuM_CheckValidation (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuM_ValidateWakeupEvent (wakeupSource_2(D));
  return;

}



;; Function EcuM_StopWakeupSources (EcuM_StopWakeupSources, funcdef_no=29, decl_uid=7873, cgraph_uid=17, symbol_order=16)

Modification phase of node EcuM_StopWakeupSources/16
EcuM_StopWakeupSources (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  EcuM_EnableWakeupSources (wakeupSource_1(D)); [tail call]
  return;

}



;; Function EcuM_DriverRestartList (EcuM_DriverRestartList, funcdef_no=17, decl_uid=10245, cgraph_uid=18, symbol_order=17)

Modification phase of node EcuM_DriverRestartList/17
EcuM_DriverRestartList (const struct EcuM_ConfigType * ConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function EcuM_SleepActivity (EcuM_SleepActivity, funcdef_no=41, decl_uid=7875, cgraph_uid=19, symbol_order=18)

Modification phase of node EcuM_SleepActivity/18
EcuM_SleepActivity ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}



;; Function EcuM_CheckWakeup (EcuM_CheckWakeup, funcdef_no=31, decl_uid=7877, cgraph_uid=20, symbol_order=19)

Modification phase of node EcuM_CheckWakeup/19
EcuM_CheckWakeup (EcuM_WakeupSourceType wakeupSource)
{
  <bb 2> [local count: 1073741824]:
  EcuM_EnableWakeupSources (wakeupSource_1(D)); [tail call]
  return;

}



;; Function EcuM_PreHalt (EcuM_PreHalt, funcdef_no=43, decl_uid=7879, cgraph_uid=21, symbol_order=20)

Modification phase of node EcuM_PreHalt/20
EcuM_PreHalt ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}



;; Function EcuM_PostHalt (EcuM_PostHalt, funcdef_no=45, decl_uid=7881, cgraph_uid=22, symbol_order=21)

Modification phase of node EcuM_PostHalt/21
EcuM_PostHalt ()
{
  <bb 2> [local count: 1073741824]:
  EcuM_AL_SetProgrammableInterrupts (); [tail call]
  return;

}


