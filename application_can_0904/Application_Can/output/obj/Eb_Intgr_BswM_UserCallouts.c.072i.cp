
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EcuM_GoDown/56:
  Jump functions of caller  CanTrcv_Callout_SimulatedShutDown/55:
  Jump functions of caller  BswM_RequestMode/54:
  Jump functions of caller  Rte_Stop/53:
  Jump functions of caller  EcuM_ASR40_GetShutdownTarget/52:
  Jump functions of caller  Fee_GetStatus/51:
  Jump functions of caller  Fls_MainFunction/50:
  Jump functions of caller  Fee_MainFunction/49:
  Jump functions of caller  OS_UserActivateTask/48:
  Jump functions of caller  NvM_WriteAll/47:
  Jump functions of caller  SecOC_Init/45:
  Jump functions of caller  Csm_Init/44:
  Jump functions of caller  CryIf_Init/43:
  Jump functions of caller  Crypto_Init/42:
  Jump functions of caller  NvM_ASR40_WriteBlock/41:
  Jump functions of caller  NvM_ASR40_SetBlockProtection/40:
  Jump functions of caller  NvM_ASR40_GetErrorStatus/39:
  Jump functions of caller  NvM_ReadAll/38:
  Jump functions of caller  E2EXf_PartitionInit/37:
  Jump functions of caller  Dem_Init/36:
  Jump functions of caller  CanTrcv_Callout_SimulatedWakeup/34:
  Jump functions of caller  ComM_Init/32:
  Jump functions of caller  Dcm_Init/30:
  Jump functions of caller  Com_Init/28:
  Jump functions of caller  CanSM_Init/26:
  Jump functions of caller  CanNm_Init/24:
  Jump functions of caller  Nm_Init/23:
  Jump functions of caller  PduR_Init/21:
  Jump functions of caller  CanTp_Init/19:
  Jump functions of caller  CanIf_Init/17:
  Jump functions of caller  Can_Init/15:
  Jump functions of caller  CanTrcv_Init/14:
  Jump functions of caller  NvM_Init/13:
  Jump functions of caller  Fee_Init/12:
  Jump functions of caller  Fls_Init/10:
  Jump functions of caller  Eb_Intgr_BswM_RunTwo/9:
  Jump functions of caller  Eb_Intgr_BswM_GoOffOneB/8:
  Jump functions of caller  Eb_Intgr_BswM_GoOffOneA/7:
    callsite  Eb_Intgr_BswM_GoOffOneA/7 -> Eb_Intgr_BswM_DeInitNvMWriteAll/4 : 
  Jump functions of caller  Eb_Intgr_BswM_WaitMemDriverReady/6:
  Jump functions of caller  Eb_Intgr_BswM_TriggerMemoryStack/5:
  Jump functions of caller  Eb_Intgr_BswM_DeInitNvMWriteAll/4:
    callsite  Eb_Intgr_BswM_DeInitNvMWriteAll/4 -> Eb_Intgr_BswM_TriggerMemoryStack/5 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Eb_Intgr_BswM_InitNvMReadAll/3:
    callsite  Eb_Intgr_BswM_InitNvMReadAll/3 -> Eb_Intgr_BswM_TriggerMemoryStack/5 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Eb_Intgr_BswM_DriverInitThree/2:
  Jump functions of caller  Eb_Intgr_BswM_DriverInitTwo/1:
    callsite  Eb_Intgr_BswM_DriverInitTwo/1 -> Eb_Intgr_BswM_WaitMemDriverReady/6 : 

 Propagating constants:

Not considering Eb_Intgr_BswM_RunTwo for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_GoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_GoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_WaitMemDriverReady for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_TriggerMemoryStack for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_DeInitNvMWriteAll for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_InitNvMReadAll for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_DriverInitThree for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_DriverInitTwo for cloning; -fipa-cp-clone disabled.

overall_size: 126, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Eb_Intgr_BswM_RunTwo/9:
  Node: Eb_Intgr_BswM_GoOffOneB/8:
  Node: Eb_Intgr_BswM_GoOffOneA/7:
  Node: Eb_Intgr_BswM_WaitMemDriverReady/6:
  Node: Eb_Intgr_BswM_TriggerMemoryStack/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Eb_Intgr_BswM_DeInitNvMWriteAll/4:
  Node: Eb_Intgr_BswM_InitNvMReadAll/3:
  Node: Eb_Intgr_BswM_DriverInitThree/2:
  Node: Eb_Intgr_BswM_DriverInitTwo/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

EcuM_GoDown/56 (EcuM_GoDown) @084b0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_GoOffOneB/8 (114403539 (estimated locally),0.11 per call) 
  Calls: 
CanTrcv_Callout_SimulatedShutDown/55 (CanTrcv_Callout_SimulatedShutDown) @084b0540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_GoOffOneB/8 (508506948 (estimated locally),0.47 per call) 
  Calls: 
BswM_RequestMode/54 (BswM_RequestMode) @084b0380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_GoOffOneA/7 (700686807 (estimated locally),0.65 per call) 
  Calls: 
Rte_Stop/53 (Rte_Stop) @084b02a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_GoOffOneA/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ASR40_GetShutdownTarget/52 (EcuM_ASR40_GetShutdownTarget) @084b01c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_GoOffOneB/8 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_GoOffOneA/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_GetStatus/51 (Fee_GetStatus) @084b0000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_WaitMemDriverReady/6 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
Fls_MainFunction/50 (Fls_MainFunction) @084aeee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_WaitMemDriverReady/6 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
Fee_MainFunction/49 (Fee_MainFunction) @084aee00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_WaitMemDriverReady/6 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
OS_UserActivateTask/48 (OS_UserActivateTask) @084aec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_TriggerMemoryStack/5 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
NvM_WriteAll/47 (NvM_WriteAll) @084aea80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DeInitNvMWriteAll/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SecOC_ConfigLayout/46 (SecOC_ConfigLayout) @084ad708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_InitNvMReadAll/3 (addr)
  Availability: not_available
  Varpool flags: read-only
SecOC_Init/45 (SecOC_Init) @084ae8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Csm_Init/44 (Csm_Init) @084ae7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CryIf_Init/43 (CryIf_Init) @084ae700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_Init/42 (Crypto_Init) @084ae620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_ASR40_WriteBlock/41 (NvM_ASR40_WriteBlock) @084ae540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_ASR40_SetBlockProtection/40 (NvM_ASR40_SetBlockProtection) @084ae460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (354334802 (estimated locally),0.33 per call) 
  Calls: 
NvM_ASR40_GetErrorStatus/39 (NvM_ASR40_GetErrorStatus) @084ae380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_TriggerMemoryStack/5 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
NvM_ReadAll/38 (NvM_ReadAll) @084ae2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2EXf_PartitionInit/37 (E2EXf_PartitionInit) @084ae0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitThree/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dem_Init/36 (Dem_Init) @084ae000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitThree/2 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dem_InitializationState/35 (Dem_InitializationState) @084ad120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitThree/2 (read)
  Availability: not_available
  Varpool flags:
CanTrcv_Callout_SimulatedWakeup/34 (CanTrcv_Callout_SimulatedWakeup) @084aaee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitThree/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_Configuration/33 (ComM_Configuration) @084ad090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitThree/2 (addr)
  Availability: not_available
  Varpool flags: read-only
ComM_Init/32 (ComM_Init) @084aae00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitThree/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
DcmConfigSet/31 (DcmConfigSet) @0843dd80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
Dcm_Init/30 (Dcm_Init) @084aac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Com_ConfigLayout/29 (Com_ConfigLayout) @0843dcf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
Com_Init/28 (Com_Init) @084aab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanSM_ConfigLayout/27 (CanSM_ConfigLayout) @0843dc60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
CanSM_Init/26 (CanSM_Init) @084aaa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanNm_ConfigLayout/25 (CanNm_ConfigLayout) @0843dbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
CanNm_Init/24 (CanNm_Init) @084aa8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Nm_Init/23 (Nm_Init) @084aa7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_ConfigLayout/22 (PduR_ConfigLayout) @0843daf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
PduR_Init/21 (PduR_Init) @084aa700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanTp_ConfigLayout/20 (CanTp_ConfigLayout) @0843da68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
CanTp_Init/19 (CanTp_Init) @084aa620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanIf_ConfigLayout/18 (CanIf_ConfigLayout) @0843d9d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
CanIf_Init/17 (CanIf_Init) @084aa540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Config/16 (Can_Config) @0843d948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
Can_Init/15 (Can_Init) @084aa460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
CanTrcv_Init/14 (CanTrcv_Init) @084aa380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_Init/13 (NvM_Init) @084aa2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fee_Init/12 (Fee_Init) @084aa1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_Config/11 (Fls_Config) @0843d798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Eb_Intgr_BswM_DriverInitTwo/1 (addr)
  Availability: not_available
  Varpool flags: read-only
Fls_Init/10 (Fls_Init) @084aa0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_RunTwo/9 (Eb_Intgr_BswM_RunTwo) @07f6bee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Eb_Intgr_BswM_GoOffOneB/8 (Eb_Intgr_BswM_GoOffOneB) @07f6bd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_GoDown/56 (114403539 (estimated locally),0.11 per call) CanTrcv_Callout_SimulatedShutDown/55 (508506948 (estimated locally),0.47 per call) EcuM_ASR40_GetShutdownTarget/52 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_GoOffOneA/7 (Eb_Intgr_BswM_GoOffOneA) @07f6bb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_RequestMode/54 (700686807 (estimated locally),0.65 per call) Eb_Intgr_BswM_DeInitNvMWriteAll/4 (1073741824 (estimated locally),1.00 per call) Rte_Stop/53 (1073741824 (estimated locally),1.00 per call) EcuM_ASR40_GetShutdownTarget/52 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_WaitMemDriverReady/6 (Eb_Intgr_BswM_WaitMemDriverReady) @07f6b9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Eb_Intgr_BswM_DriverInitTwo/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fee_GetStatus/51 (1073741824 (estimated locally),9.09 per call) Fls_MainFunction/50 (1073741824 (estimated locally),9.09 per call) Fee_MainFunction/49 (1073741824 (estimated locally),9.09 per call) 
Eb_Intgr_BswM_TriggerMemoryStack/5 (Eb_Intgr_BswM_TriggerMemoryStack) @07f6b7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Eb_Intgr_BswM_DeInitNvMWriteAll/4 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_InitNvMReadAll/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_ASR40_GetErrorStatus/39 (1073741824 (estimated locally),9.09 per call) OS_UserActivateTask/48 (1073741824 (estimated locally),9.09 per call) 
Eb_Intgr_BswM_DeInitNvMWriteAll/4 (Eb_Intgr_BswM_DeInitNvMWriteAll) @07f6b620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Eb_Intgr_BswM_GoOffOneA/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: Eb_Intgr_BswM_TriggerMemoryStack/5 (1073741824 (estimated locally),1.00 per call) NvM_WriteAll/47 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_InitNvMReadAll/3 (Eb_Intgr_BswM_InitNvMReadAll) @07f6b460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SecOC_ConfigLayout/46 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SecOC_Init/45 (1073741824 (estimated locally),1.00 per call) Csm_Init/44 (1073741824 (estimated locally),1.00 per call) CryIf_Init/43 (1073741824 (estimated locally),1.00 per call) Crypto_Init/42 (1073741824 (estimated locally),1.00 per call) NvM_ASR40_WriteBlock/41 (354334802 (estimated locally),0.33 per call) NvM_ASR40_SetBlockProtection/40 (354334802 (estimated locally),0.33 per call) NvM_ASR40_GetErrorStatus/39 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_TriggerMemoryStack/5 (1073741824 (estimated locally),1.00 per call) NvM_ReadAll/38 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_DriverInitThree/2 (Eb_Intgr_BswM_DriverInitThree) @07f6b2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_Configuration/33 (addr)Dem_InitializationState/35 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_PartitionInit/37 (1073741824 (estimated locally),1.00 per call) Dem_Init/36 (524845004 (estimated locally),0.49 per call) CanTrcv_Callout_SimulatedWakeup/34 (1073741824 (estimated locally),1.00 per call) ComM_Init/32 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_DriverInitTwo/1 (Eb_Intgr_BswM_DriverInitTwo) @07f6b0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_Config/11 (addr)Can_Config/16 (addr)CanIf_ConfigLayout/18 (addr)CanTp_ConfigLayout/20 (addr)PduR_ConfigLayout/22 (addr)CanNm_ConfigLayout/25 (addr)CanSM_ConfigLayout/27 (addr)Com_ConfigLayout/29 (addr)DcmConfigSet/31 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Init/30 (1073741824 (estimated locally),1.00 per call) Com_Init/28 (1073741824 (estimated locally),1.00 per call) CanSM_Init/26 (1073741824 (estimated locally),1.00 per call) CanNm_Init/24 (1073741824 (estimated locally),1.00 per call) Nm_Init/23 (1073741824 (estimated locally),1.00 per call) PduR_Init/21 (1073741824 (estimated locally),1.00 per call) CanTp_Init/19 (1073741824 (estimated locally),1.00 per call) CanIf_Init/17 (1073741824 (estimated locally),1.00 per call) Can_Init/15 (1073741824 (estimated locally),1.00 per call) CanTrcv_Init/14 (1073741824 (estimated locally),1.00 per call) NvM_Init/13 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_WaitMemDriverReady/6 (1073741824 (estimated locally),1.00 per call) Fee_Init/12 (1073741824 (estimated locally),1.00 per call) Fls_Init/10 (1073741824 (estimated locally),1.00 per call) 

;; Function Eb_Intgr_BswM_DriverInitThree (Eb_Intgr_BswM_DriverInitThree, funcdef_no=1, decl_uid=5692, cgraph_uid=3, symbol_order=2)

Modification phase of node Eb_Intgr_BswM_DriverInitThree/2
Eb_Intgr_BswM_DriverInitThree ()
{
  <unnamed type> Dem_InitializationState.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_Init (&ComM_Configuration.RootCfg);
  # DEBUG BEGIN_STMT
  CanTrcv_Callout_SimulatedWakeup ();
  # DEBUG BEGIN_STMT
  Dem_InitializationState.0_1 = Dem_InitializationState;
  if (Dem_InitializationState.0_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Dem_Init ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  E2EXf_PartitionInit ();
  return;

}



;; Function Eb_Intgr_BswM_TriggerMemoryStack (Eb_Intgr_BswM_TriggerMemoryStack, funcdef_no=4, decl_uid=5706, cgraph_uid=6, symbol_order=5)

Modification phase of node Eb_Intgr_BswM_TriggerMemoryStack/5
Eb_Intgr_BswM_TriggerMemoryStack (const NvM_BlockIdType BlockId)
{
  NvM_RequestResultType Result;
  unsigned char Result.2_1;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserActivateTask (7);
  # DEBUG BEGIN_STMT
  NvM_ASR40_GetErrorStatus (BlockId_5(D), &Result);
  # DEBUG BEGIN_STMT
  Result.2_1 = Result;
  if (Result.2_1 == 2)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result ={v} {CLOBBER};
  return;

}



;; Function Eb_Intgr_BswM_InitNvMReadAll (Eb_Intgr_BswM_InitNvMReadAll, funcdef_no=2, decl_uid=5700, cgraph_uid=4, symbol_order=3)

Modification phase of node Eb_Intgr_BswM_InitNvMReadAll/3
Eb_Intgr_BswM_InitNvMReadAll ()
{
  NvM_RequestResultType JobResult;
  unsigned char JobResult.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  JobResult = 2;
  # DEBUG BEGIN_STMT
  NvM_ReadAll ();
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_TriggerMemoryStack (0);
  # DEBUG BEGIN_STMT
  NvM_ASR40_GetErrorStatus (1, &JobResult);
  # DEBUG BEGIN_STMT
  JobResult.1_1 = JobResult;
  if (JobResult.1_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  NvM_ASR40_SetBlockProtection (1, 0);
  # DEBUG BEGIN_STMT
  NvM_ASR40_WriteBlock (1, 0B);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_Init ();
  # DEBUG BEGIN_STMT
  CryIf_Init ();
  # DEBUG BEGIN_STMT
  Csm_Init ();
  # DEBUG BEGIN_STMT
  SecOC_Init (&SecOC_ConfigLayout.RootCfg);
  JobResult ={v} {CLOBBER};
  return;

}



;; Function Eb_Intgr_BswM_DeInitNvMWriteAll (Eb_Intgr_BswM_DeInitNvMWriteAll, funcdef_no=3, decl_uid=5702, cgraph_uid=5, symbol_order=4)

Modification phase of node Eb_Intgr_BswM_DeInitNvMWriteAll/4
Eb_Intgr_BswM_DeInitNvMWriteAll ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  NvM_WriteAll ();
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_TriggerMemoryStack (0);
  return;

}



;; Function Eb_Intgr_BswM_WaitMemDriverReady (Eb_Intgr_BswM_WaitMemDriverReady, funcdef_no=5, decl_uid=5704, cgraph_uid=7, symbol_order=6)

Modification phase of node Eb_Intgr_BswM_WaitMemDriverReady/6
Eb_Intgr_BswM_WaitMemDriverReady ()
{
  MemIf_StatusType status;
  unsigned char _1;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fee_MainFunction ();
  # DEBUG BEGIN_STMT
  Fls_MainFunction ();
  # DEBUG BEGIN_STMT
  status_7 = Fee_GetStatus ();
  # DEBUG status => status_7
  # DEBUG BEGIN_STMT
  _1 = status_7 + 254;
  if (_1 <= 1)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  return;

}



;; Function Eb_Intgr_BswM_DriverInitTwo (Eb_Intgr_BswM_DriverInitTwo, funcdef_no=0, decl_uid=5690, cgraph_uid=2, symbol_order=1)

Modification phase of node Eb_Intgr_BswM_DriverInitTwo/1
Eb_Intgr_BswM_DriverInitTwo ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fls_Init (&Fls_Config);
  # DEBUG BEGIN_STMT
  Fee_Init (0B);
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_WaitMemDriverReady ();
  # DEBUG BEGIN_STMT
  NvM_Init ();
  # DEBUG BEGIN_STMT
  CanTrcv_Init ();
  # DEBUG BEGIN_STMT
  Can_Init (&Can_Config);
  # DEBUG BEGIN_STMT
  CanIf_Init (&CanIf_ConfigLayout.RootCfg);
  # DEBUG BEGIN_STMT
  CanTp_Init (&CanTp_ConfigLayout.RootCfg);
  # DEBUG BEGIN_STMT
  PduR_Init (&PduR_ConfigLayout.PduR_RootConfig);
  # DEBUG BEGIN_STMT
  Nm_Init ();
  # DEBUG BEGIN_STMT
  CanNm_Init (&CanNm_ConfigLayout.RootCfg);
  # DEBUG BEGIN_STMT
  CanSM_Init (&CanSM_ConfigLayout.RootCfg);
  # DEBUG BEGIN_STMT
  Com_Init (&Com_ConfigLayout.Com_RootConfig);
  # DEBUG BEGIN_STMT
  Dcm_Init (&DcmConfigSet);
  return;

}



;; Function Eb_Intgr_BswM_GoOffOneA (Eb_Intgr_BswM_GoOffOneA, funcdef_no=6, decl_uid=5696, cgraph_uid=8, symbol_order=7)

Modification phase of node Eb_Intgr_BswM_GoOffOneA/7
Eb_Intgr_BswM_GoOffOneA ()
{
  uint8 sleepMode;
  EcuM_StateType shutdownTarget;
  unsigned char shutdownTarget.4_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EcuM_ASR40_GetShutdownTarget (&shutdownTarget, &sleepMode);
  # DEBUG BEGIN_STMT
  Rte_Stop ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Eb_Intgr_BswM_DeInitNvMWriteAll ();
  # DEBUG BEGIN_STMT
  shutdownTarget.4_1 = shutdownTarget;
  if (shutdownTarget.4_1 == 80)
    goto <bb 5>; [20.24%]
  else
    goto <bb 3>; [79.76%]

  <bb 3> [local count: 856416480]:
  if (shutdownTarget.4_1 == 128)
    goto <bb 5>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 4> [local count: 565234877]:
  if (shutdownTarget.4_1 == 144)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 700686807]:
  # DEBUG BEGIN_STMT
  BswM_RequestMode (0, 1);

  <bb 6> [local count: 1073741824]:
  shutdownTarget ={v} {CLOBBER};
  sleepMode ={v} {CLOBBER};
  return;

}



;; Function Eb_Intgr_BswM_GoOffOneB (Eb_Intgr_BswM_GoOffOneB, funcdef_no=7, decl_uid=5698, cgraph_uid=9, symbol_order=8)

Modification phase of node Eb_Intgr_BswM_GoOffOneB/8
Eb_Intgr_BswM_GoOffOneB ()
{
  uint8 sleepMode;
  EcuM_StateType shutdownTarget;
  unsigned char shutdownTarget.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EcuM_ASR40_GetShutdownTarget (&shutdownTarget, &sleepMode);
  # DEBUG BEGIN_STMT
  shutdownTarget.7_1 = shutdownTarget;
  if (shutdownTarget.7_1 == 128)
    goto <bb 4>; [20.24%]
  else
    goto <bb 3>; [79.76%]

  <bb 3> [local count: 856416480]:
  if (shutdownTarget.7_1 == 80)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 508506948]:
  # DEBUG BEGIN_STMT
  CanTrcv_Callout_SimulatedShutDown ();
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 565234877]:
  # DEBUG BEGIN_STMT
  if (shutdownTarget.7_1 == 144)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 114403539]:
  # DEBUG BEGIN_STMT
  EcuM_GoDown (42);

  <bb 7> [local count: 1073741824]:
  shutdownTarget ={v} {CLOBBER};
  sleepMode ={v} {CLOBBER};
  return;

}



;; Function Eb_Intgr_BswM_RunTwo (Eb_Intgr_BswM_RunTwo, funcdef_no=8, decl_uid=5694, cgraph_uid=10, symbol_order=9)

Modification phase of node Eb_Intgr_BswM_RunTwo/9
Eb_Intgr_BswM_RunTwo ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


