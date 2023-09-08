
IPA constant propagation start:
Determining dynamic type for call: CheckStatus_21 = Mcu_CheckInit (ConfigPtr_19(D));
  Starting walk at: CheckStatus_21 = Mcu_CheckInit (ConfigPtr_19(D));
  instance pointer: ConfigPtr_19(D)  Outer instance pointer: ConfigPtr_19(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:CheckStatus_18 = Mcu_HLDChecksEntry (0);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Mcu_HLDChecksEntry.part.0/36:
  Jump functions of caller  Mcu_HLDChecksExit.part.0/35:
  Jump functions of caller  Mcu_Ipw_SleepOnExit/34:
  Jump functions of caller  MCU_Ipw_GetClockFrequency/33:
  Jump functions of caller  Mcu_Ipw_PerformReset/32:
  Jump functions of caller  Mcu_Ipw_GetResetRawValue/31:
  Jump functions of caller  Mcu_Ipw_GetResetReason/30:
  Jump functions of caller  Mcu_Ipw_GetPllStatus/29:
  Jump functions of caller  Mcu_Ipw_DistributePllClock/28:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/27:
  Jump functions of caller  Mcu_Ipw_SetMode/26:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/25:
  Jump functions of caller  Mcu_Ipw_InitClock/24:
  Jump functions of caller  Det_ASR40_ReportError/23:
  Jump functions of caller  Mcu_Ipw_Init/22:
  Jump functions of caller  Mcu_SleepOnExit/21:
    callsite  Mcu_SleepOnExit/21 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 26
         value: 0x1a, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_GetClockFrequency/20:
    callsite  Mcu_GetClockFrequency/20 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 25
         value: 0x19, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_PerformReset/19:
    callsite  Mcu_PerformReset/19 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 7
         value: 0x7, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_GetResetRawValue/18:
    callsite  Mcu_GetResetRawValue/18 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 6
         value: 0x6, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_GetResetReason/17:
    callsite  Mcu_GetResetReason/17 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_GetPllStatus/16:
    callsite  Mcu_GetPllStatus/16 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_DistributePllClock/15:
    callsite  Mcu_DistributePllClock/15 -> Mcu_CheckDistributePllClock/7 : 
    callsite  Mcu_DistributePllClock/15 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_SetMode/14:
    callsite  Mcu_SetMode/14 -> Mcu_CheckSetMode/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mcu_SetMode/14 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_InitClock/13:
    callsite  Mcu_InitClock/13 -> Mcu_CheckInitClock/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mcu_InitClock/13 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_InitRamSection/12:
    callsite  Mcu_InitRamSection/12 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_Init/11:
    callsite  Mcu_Init/11 -> Mcu_HLDChecksExit.part.0/35 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Mcu_Init/11 -> Mcu_CheckInit/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Mcu_Init/11 -> Mcu_HLDChecksEntry/9 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Mcu_HLDChecksEntry/9:
    callsite  Mcu_HLDChecksEntry/9 -> Mcu_HLDChecksEntry.part.0/36 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Mcu_CheckDistributePllClock/7:
  Jump functions of caller  Mcu_CheckSetMode/6:
  Jump functions of caller  Mcu_CheckInitClock/5:
  Jump functions of caller  Mcu_CheckInit/4:

 Propagating constants:

Not considering Mcu_SleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetClockFrequency for cloning; -fipa-cp-clone disabled.
Not considering Mcu_PerformReset for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Mcu_GetPllStatus for cloning; -fipa-cp-clone disabled.
Not considering Mcu_DistributePllClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Mcu_InitClock for cloning; -fipa-cp-clone disabled.
Not considering Mcu_InitRamSection for cloning; -fipa-cp-clone disabled.
Not considering Mcu_Init for cloning; -fipa-cp-clone disabled.

overall_size: 247, max_new_size: 11001
 - context independent values, size: 9, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Mcu_HLDChecksEntry.part.0/36:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x1a, mask = 0x1f
         uint8 [0, 26]
        AGGS VARIABLE
  Node: Mcu_HLDChecksExit.part.0/35:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Mcu_SleepOnExit/21:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_GetClockFrequency/20:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_PerformReset/19:
  Node: Mcu_GetResetRawValue/18:
  Node: Mcu_GetResetReason/17:
  Node: Mcu_GetPllStatus/16:
  Node: Mcu_DistributePllClock/15:
  Node: Mcu_SetMode/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_InitClock/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_InitRamSection/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_Init/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Mcu_HLDChecksEntry/9:
    param [0]: BOTTOM
         ctxs: VARIABLE
         Bits: value = 0x1a, mask = 0x1f
         uint8 [0, 26]
        AGGS VARIABLE
  Node: Mcu_CheckDistributePllClock/7:
  Node: Mcu_CheckSetMode/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Mcu_CheckInitClock/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Mcu_CheckInit/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Mcu_HLDChecksEntry.part.0/36:
 param 0: value = 0x1a, mask = 0x1f
Propagated bits info for function Mcu_HLDChecksEntry/9:
 param 0: value = 0x1a, mask = 0x1f

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Mcu_HLDChecksEntry.part.0/36 (Mcu_HLDChecksEntry.part.0) @0724b460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Mcu_HLDChecksEntry/9 (108662672 (estimated locally),0.10 per call) 
  Calls: Det_ASR40_ReportError/23 (1073741824 (estimated locally),1.00 per call) 
Mcu_HLDChecksExit.part.0/35 (Mcu_HLDChecksExit.part.0) @07216e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Mcu_eStatus/2 (write)Mcu_eStatus/2 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Mcu_Init/11 (236223200 (estimated locally),0.33 per call) 
  Calls: 
Mcu_Ipw_SleepOnExit/34 (Mcu_Ipw_SleepOnExit) @072069a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SleepOnExit/21 (354334802 (estimated locally),0.33 per call) 
  Calls: 
MCU_Ipw_GetClockFrequency/33 (MCU_Ipw_GetClockFrequency) @072067e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetClockFrequency/20 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Mcu_Ipw_PerformReset/32 (Mcu_Ipw_PerformReset) @07206540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_PerformReset/19 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Mcu_Ipw_GetResetRawValue/31 (Mcu_Ipw_GetResetRawValue) @07206380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetResetRawValue/18 (512926469 (estimated locally),0.48 per call) 
  Calls: 
Mcu_Ipw_GetResetReason/30 (Mcu_Ipw_GetResetReason) @072061c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetResetReason/17 (512926469 (estimated locally),0.48 per call) 
  Calls: 
Mcu_Ipw_GetPllStatus/29 (Mcu_Ipw_GetPllStatus) @071c9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_GetPllStatus/16 (512926469 (estimated locally),0.48 per call) Mcu_CheckDistributePllClock/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_DistributePllClock/28 (Mcu_Ipw_DistributePllClock) @071c9d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_DistributePllClock/15 (116930485 (estimated locally),0.11 per call) 
  Calls: 
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/27 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00) @071c9a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SetMode/14 (116930485 (estimated locally),0.11 per call) 
  Calls: 
Mcu_Ipw_SetMode/26 (Mcu_Ipw_SetMode) @071c99a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SetMode/14 (116930485 (estimated locally),0.11 per call) 
  Calls: 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/25 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00) @071c98c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_SetMode/14 (116930485 (estimated locally),0.11 per call) 
  Calls: 
Mcu_Ipw_InitClock/24 (Mcu_Ipw_InitClock) @071c9620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_InitClock/13 (116930485 (estimated locally),0.11 per call) 
  Calls: 
Det_ASR40_ReportError/23 (Det_ASR40_ReportError) @071c91c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_CheckDistributePllClock/7 (524845004 (estimated locally),0.49 per call) Mcu_CheckSetMode/6 (354334802 (estimated locally),0.33 per call) Mcu_CheckInitClock/5 (354334802 (estimated locally),0.33 per call) Mcu_CheckInit/4 (187153200 (estimated locally),0.17 per call) Mcu_HLDChecksEntry/9 (262422502 (estimated locally),0.24 per call) Mcu_HLDChecksEntry.part.0/36 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Mcu_Ipw_Init/22 (Mcu_Ipw_Init) @071c9000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Mcu_Init/11 (118111601 (estimated locally),0.17 per call) 
  Calls: 
Mcu_SleepOnExit/21 (Mcu_SleepOnExit) @071bdd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_SleepOnExit/34 (354334802 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetClockFrequency/20 (Mcu_GetClockFrequency) @071bdb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: MCU_Ipw_GetClockFrequency/33 (354334802 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_PerformReset/19 (Mcu_PerformReset) @071bd9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/3 (read)Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_PerformReset/32 (354334802 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetResetRawValue/18 (Mcu_GetResetRawValue) @071bd7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_GetResetRawValue/31 (512926469 (estimated locally),0.48 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetResetReason/17 (Mcu_GetResetReason) @071bd620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_GetResetReason/30 (512926469 (estimated locally),0.48 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_GetPllStatus/16 (Mcu_GetPllStatus) @071bd460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_GetPllStatus/29 (512926469 (estimated locally),0.48 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_DistributePllClock/15 (Mcu_DistributePllClock) @071bd2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_DistributePllClock/28 (116930485 (estimated locally),0.11 per call) Mcu_CheckDistributePllClock/7 (354334802 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_SetMode/14 (Mcu_SetMode) @071bd0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/3 (read)Mcu_au8ModeConfigIds/1 (read)Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00/27 (116930485 (estimated locally),0.11 per call) Mcu_Ipw_SetMode/26 (116930485 (estimated locally),0.11 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00/25 (116930485 (estimated locally),0.11 per call) Mcu_CheckSetMode/6 (354334802 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_InitClock/13 (Mcu_InitClock) @071b6ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/3 (read)Mcu_au8ClockConfigIds/0 (read)Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_Ipw_InitClock/24 (116930485 (estimated locally),0.11 per call) Mcu_CheckInitClock/5 (354334802 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_InitRamSection/12 (Mcu_InitRamSection) @071b6d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_eStatus/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_HLDChecksEntry/9 (1073741824 (estimated locally),1.00 per call) 
Mcu_Init/11 (Mcu_Init) @071b6b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Mcu_pConfigPtr/3 (write)Mcu_au8ModeConfigIds/1 (write)Mcu_au8ClockConfigIds/0 (write)Mcu_pConfigPtr/3 (write)
  Referring: 
  Availability: available
  Function flags: count:715827876 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_HLDChecksExit.part.0/35 (236223200 (estimated locally),0.33 per call) Mcu_Ipw_Init/22 (118111601 (estimated locally),0.17 per call) Mcu_CheckInit/4 (236223199 (estimated locally),0.33 per call) Mcu_HLDChecksEntry/9 (715827876 (estimated locally),1.00 per call) 
Mcu_HLDChecksEntry/9 (Mcu_HLDChecksEntry) @071b67e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Mcu_eStatus/2 (read)Mcu_eStatus/2 (read)Mcu_eStatus/2 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mcu_SleepOnExit/21 (1073741824 (estimated locally),1.00 per call) Mcu_GetClockFrequency/20 (1073741824 (estimated locally),1.00 per call) Mcu_PerformReset/19 (1073741824 (estimated locally),1.00 per call) Mcu_GetResetRawValue/18 (1073741824 (estimated locally),1.00 per call) Mcu_GetResetReason/17 (1073741824 (estimated locally),1.00 per call) Mcu_GetPllStatus/16 (1073741824 (estimated locally),1.00 per call) Mcu_DistributePllClock/15 (1073741824 (estimated locally),1.00 per call) Mcu_SetMode/14 (1073741824 (estimated locally),1.00 per call) Mcu_InitClock/13 (1073741824 (estimated locally),1.00 per call) Mcu_InitRamSection/12 (1073741824 (estimated locally),1.00 per call) Mcu_Init/11 (715827876 (estimated locally),1.00 per call) 
  Calls: Mcu_HLDChecksEntry.part.0/36 (108662672 (estimated locally),0.10 per call) Det_ASR40_ReportError/23 (262422502 (estimated locally),0.24 per call) 
Mcu_CheckDistributePllClock/7 (Mcu_CheckDistributePllClock) @071b6460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mcu_DistributePllClock/15 (354334802 (estimated locally),0.33 per call) 
  Calls: Det_ASR40_ReportError/23 (524845004 (estimated locally),0.49 per call) Mcu_Ipw_GetPllStatus/29 (1073741824 (estimated locally),1.00 per call) 
Mcu_CheckSetMode/6 (Mcu_CheckSetMode) @071b62a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Mcu_pConfigPtr/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mcu_SetMode/14 (354334802 (estimated locally),0.33 per call) 
  Calls: Det_ASR40_ReportError/23 (354334802 (estimated locally),0.33 per call) 
Mcu_CheckInitClock/5 (Mcu_CheckInitClock) @071b60e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Mcu_pConfigPtr/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mcu_InitClock/13 (354334802 (estimated locally),0.33 per call) 
  Calls: Det_ASR40_ReportError/23 (354334802 (estimated locally),0.33 per call) 
Mcu_CheckInit/4 (Mcu_CheckInit) @07199c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Mcu_Init/11 (236223199 (estimated locally),0.33 per call) 
  Calls: Det_ASR40_ReportError/23 (187153200 (estimated locally),0.17 per call) 
Mcu_pConfigPtr/3 (Mcu_pConfigPtr) @071b3000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_SetMode/14 (read)Mcu_CheckInitClock/5 (read)Mcu_CheckSetMode/6 (read)Mcu_InitClock/13 (read)Mcu_Init/11 (write)Mcu_Init/11 (write)Mcu_PerformReset/19 (read)
  Availability: available
  Varpool flags:
Mcu_eStatus/2 (Mcu_eStatus) @07178f78
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_HLDChecksExit.part.0/35 (write)Mcu_HLDChecksExit.part.0/35 (write)Mcu_GetClockFrequency/20 (write)Mcu_HLDChecksEntry/9 (read)Mcu_HLDChecksEntry/9 (read)Mcu_HLDChecksEntry/9 (write)Mcu_InitRamSection/12 (write)Mcu_InitClock/13 (write)Mcu_SetMode/14 (write)Mcu_DistributePllClock/15 (write)Mcu_GetPllStatus/16 (write)Mcu_GetResetReason/17 (write)Mcu_GetResetRawValue/18 (write)Mcu_PerformReset/19 (write)Mcu_SleepOnExit/21 (write)
  Availability: available
  Varpool flags: initialized
Mcu_au8ModeConfigIds/1 (Mcu_au8ModeConfigIds) @07178f30
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_Init/11 (write)Mcu_SetMode/14 (read)
  Availability: available
  Varpool flags:
Mcu_au8ClockConfigIds/0 (Mcu_au8ClockConfigIds) @07178ee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Mcu_Init/11 (write)Mcu_InitClock/13 (read)
  Availability: available
  Varpool flags:

;; Function Mcu_HLDChecksEntry (Mcu_HLDChecksEntry, funcdef_no=5, decl_uid=9287, cgraph_uid=6, symbol_order=9)

Modification phase of node Mcu_HLDChecksEntry/9
Adjusting mask for param 0 to 0x1f
Setting value range of param 0 [0, 26]
Mcu_HLDChecksEntry (uint8 McuServiceID)
{
  Std_ReturnType CheckStatus;
  <unnamed type> Mcu_eStatus.5_1;
  <unnamed type> Mcu_eStatus.6_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CheckStatus => 0
  # DEBUG BEGIN_STMT
  if (McuServiceID_5(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Mcu_eStatus.5_1 = Mcu_eStatus;
  if (Mcu_eStatus.5_1 != 3)
    goto <bb 4>; [48.88%]
  else
    goto <bb 8>; [51.12%]

  <bb 4> [local count: 262422502]:
  # DEBUG BEGIN_STMT
  # DEBUG CheckStatus => 1
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (101, 0, 0, 19);
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Mcu_eStatus.6_2 = Mcu_eStatus;
  if (Mcu_eStatus.6_2 == 3)
    goto <bb 6>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 6> [local count: 108662672]:
  CheckStatus_10 = Mcu_HLDChecksEntry.part.0 (McuServiceID_5(D));
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 428208240]:
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 10;

  <bb 8> [local count: 1073741824]:
  # CheckStatus_3 = PHI <1(4), CheckStatus_10(6), 0(7), 0(3)>
  # DEBUG CheckStatus => CheckStatus_3
  # DEBUG BEGIN_STMT
  return CheckStatus_3;

}



;; Function Mcu_Init (Mcu_Init, funcdef_no=7, decl_uid=8904, cgraph_uid=8, symbol_order=11)

Modification phase of node Mcu_Init/11
Mcu_Init (const struct Mcu_ConfigType * ConfigPtr)
{
  Std_ReturnType CheckStatus;
  uint32 NoConfigs;
  const struct Mcu_ModeConfigType[1] * _1;
  long unsigned int _2;
  unsigned char _3;
  long unsigned int _4;
  const struct Mcu_ClockConfigType[1] * _5;
  long unsigned int _6;
  unsigned char _7;
  long unsigned int _8;
  const struct Mcu_HwIPsConfigType * _9;

  <bb 2> [local count: 715827876]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CheckStatus_18 = Mcu_HLDChecksEntry (0);
  # DEBUG CheckStatus => CheckStatus_18
  # DEBUG BEGIN_STMT
  if (CheckStatus_18 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 3> [local count: 236223199]:
  # DEBUG BEGIN_STMT
  CheckStatus_21 = Mcu_CheckInit (ConfigPtr_19(D));
  # DEBUG CheckStatus => CheckStatus_21
  # DEBUG BEGIN_STMT
  if (CheckStatus_21 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 4> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr = ConfigPtr_19(D);
  # DEBUG BEGIN_STMT
  # DEBUG NoConfigs => 0
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  _1 = ConfigPtr_19(D)->ModeConfigArrayPtr;
  _2 = *_1[NoConfigs_10].ModeConfigId;
  _3 = (unsigned char) NoConfigs_10;
  Mcu_au8ModeConfigIds[_2] = _3;
  # DEBUG BEGIN_STMT
  NoConfigs_28 = NoConfigs_10 + 1;
  # DEBUG NoConfigs => NoConfigs_28

  <bb 6> [local count: 1073741820]:
  # NoConfigs_10 = PHI <0(4), NoConfigs_28(5)>
  # DEBUG NoConfigs => NoConfigs_10
  # DEBUG BEGIN_STMT
  _4 = ConfigPtr_19(D)->NoModeConfigs;
  if (_4 > NoConfigs_10)
    goto <bb 5>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 118111600]:
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _5 = ConfigPtr_19(D)->ClockConfigArrayPtr;
  _6 = *_5[NoConfigs_11].ClkConfigId;
  _7 = (unsigned char) NoConfigs_11;
  Mcu_au8ClockConfigIds[_6] = _7;
  # DEBUG BEGIN_STMT
  NoConfigs_26 = NoConfigs_11 + 1;
  # DEBUG NoConfigs => NoConfigs_26

  <bb 8> [local count: 1073741824]:
  # NoConfigs_11 = PHI <NoConfigs_26(7), 0(13)>
  # DEBUG NoConfigs => NoConfigs_11
  # DEBUG BEGIN_STMT
  _8 = ConfigPtr_19(D)->NoClkConfigs;
  if (_8 > NoConfigs_11)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _9 = ConfigPtr_19(D)->HwIPsConfigPtr;
  Mcu_Ipw_Init (_9);
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr = 0B;

  <bb 11> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => CheckStatus_21
  # DEBUG McuServiceID => 0
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => 0
  Mcu_HLDChecksExit.part.0 (CheckStatus_21);

  <bb 12> [local count: 715827877]:
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  return;

}



;; Function Mcu_InitRamSection (Mcu_InitRamSection, funcdef_no=8, decl_uid=8906, cgraph_uid=9, symbol_order=12)

Modification phase of node Mcu_InitRamSection/12
Mcu_InitRamSection (Mcu_RamSectionType RamSection)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RamStatus => 1
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (1);
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 1
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Mcu_InitClock (Mcu_InitClock, funcdef_no=9, decl_uid=8908, cgraph_uid=10, symbol_order=13)

Modification phase of node Mcu_InitClock/13
Mcu_InitClock (Mcu_ClockType ClockSetting)
{
  Std_ReturnType ClockStatus;
  unsigned char _1;
  unsigned char _2;
  const struct Mcu_ConfigType * Mcu_pConfigPtr.7_3;
  const struct Mcu_ClockConfigType[1] * _4;
  unsigned char _5;
  int _6;
  const struct Mcu_ClockConfigType * _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ClockStatus => 1
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (2);
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _2 = Mcu_CheckInitClock (ClockSetting_14(D));
  if (_2 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr.7_3 = Mcu_pConfigPtr;
  _4 = Mcu_pConfigPtr.7_3->ClockConfigArrayPtr;
  _5 = Mcu_au8ClockConfigIds[ClockSetting_14(D)];
  _6 = (int) _5;
  _7 = &*_4[_6];
  Mcu_Ipw_InitClock (_7);
  # DEBUG BEGIN_STMT
  # DEBUG ClockStatus => 0

  <bb 5> [local count: 354334802]:
  # ClockStatus_8 = PHI <1(3), 0(4)>
  # DEBUG ClockStatus => ClockStatus_8
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 2
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 6> [local count: 1073741824]:
  # ClockStatus_9 = PHI <1(2), ClockStatus_8(5)>
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG ClockStatus => ClockStatus_9
  # DEBUG BEGIN_STMT
  return ClockStatus_9;

}



;; Function Mcu_SetMode (Mcu_SetMode, funcdef_no=10, decl_uid=8910, cgraph_uid=11, symbol_order=14)

Modification phase of node Mcu_SetMode/14
Mcu_SetMode (Mcu_ModeType McuMode)
{
  unsigned char _1;
  unsigned char _2;
  const struct Mcu_ConfigType * Mcu_pConfigPtr.9_3;
  const struct Mcu_ModeConfigType[1] * _4;
  unsigned char _5;
  int _6;
  const struct Mcu_ModeConfigType * _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (8);
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _2 = Mcu_CheckSetMode (McuMode_12(D));
  if (_2 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr.9_3 = Mcu_pConfigPtr;
  _4 = Mcu_pConfigPtr.9_3->ModeConfigArrayPtr;
  _5 = Mcu_au8ModeConfigIds[McuMode_12(D)];
  _6 = (int) _5;
  _7 = &*_4[_6];
  Mcu_Ipw_SetMode (_7);
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00 ();

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 8
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 6> [local count: 1073741824]:
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  return;

}



;; Function Mcu_DistributePllClock (Mcu_DistributePllClock, funcdef_no=11, decl_uid=8912, cgraph_uid=12, symbol_order=15)

Modification phase of node Mcu_DistributePllClock/15
Mcu_DistributePllClock ()
{
  Std_ReturnType PllStatus;
  unsigned char _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 1
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (3);
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _2 = Mcu_CheckDistributePllClock ();
  if (_2 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  Mcu_Ipw_DistributePllClock ();
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 0

  <bb 5> [local count: 354334802]:
  # PllStatus_3 = PHI <1(3), 0(4)>
  # DEBUG PllStatus => PllStatus_3
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 3
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 6> [local count: 1073741824]:
  # PllStatus_4 = PHI <1(2), PllStatus_3(5)>
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG PllStatus => PllStatus_4
  # DEBUG BEGIN_STMT
  return PllStatus_4;

}



;; Function Mcu_GetPllStatus (Mcu_GetPllStatus, funcdef_no=12, decl_uid=8914, cgraph_uid=13, symbol_order=16)

Modification phase of node Mcu_GetPllStatus/16
Mcu_GetPllStatus ()
{
  Mcu_PllStatusType PllStatus;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 90
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (4);
  if (_1 == 0)
    goto <bb 3>; [47.77%]
  else
    goto <bb 4>; [52.23%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  PllStatus_7 = Mcu_Ipw_GetPllStatus ();
  # DEBUG PllStatus => PllStatus_7
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 4
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # PllStatus_2 = PHI <90(2), PllStatus_7(3)>
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG PllStatus => PllStatus_2
  # DEBUG BEGIN_STMT
  return PllStatus_2;

}



;; Function Mcu_GetResetReason (Mcu_GetResetReason, funcdef_no=13, decl_uid=8916, cgraph_uid=14, symbol_order=17)

Modification phase of node Mcu_GetResetReason/17
Mcu_GetResetReason ()
{
  Mcu_ResetType ResetReason;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 27
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (5);
  if (_1 == 0)
    goto <bb 3>; [47.77%]
  else
    goto <bb 4>; [52.23%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  ResetReason_7 = Mcu_Ipw_GetResetReason ();
  # DEBUG ResetReason => ResetReason_7
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 5
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # ResetReason_2 = PHI <27(2), ResetReason_7(3)>
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG ResetReason => ResetReason_2
  # DEBUG BEGIN_STMT
  return ResetReason_2;

}



;; Function Mcu_GetResetRawValue (Mcu_GetResetRawValue, funcdef_no=14, decl_uid=8918, cgraph_uid=15, symbol_order=18)

Modification phase of node Mcu_GetResetRawValue/18
Mcu_GetResetRawValue ()
{
  Mcu_RawResetType RawResetValue;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RawResetValue => 4294967295
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (6);
  if (_1 == 0)
    goto <bb 3>; [47.77%]
  else
    goto <bb 4>; [52.23%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  RawResetValue_7 = Mcu_Ipw_GetResetRawValue ();
  # DEBUG RawResetValue => RawResetValue_7
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 6
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # RawResetValue_2 = PHI <4294967295(2), RawResetValue_7(3)>
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG RawResetValue => RawResetValue_2
  # DEBUG BEGIN_STMT
  return RawResetValue_2;

}



;; Function Mcu_PerformReset (Mcu_PerformReset, funcdef_no=15, decl_uid=8920, cgraph_uid=16, symbol_order=19)

Modification phase of node Mcu_PerformReset/19
Mcu_PerformReset ()
{
  unsigned char _1;
  const struct Mcu_ConfigType * Mcu_pConfigPtr.11_2;
  const struct Mcu_HwIPsConfigType * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (7);
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG CheckStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_pConfigPtr.11_2 = Mcu_pConfigPtr;
  _3 = Mcu_pConfigPtr.11_2->HwIPsConfigPtr;
  Mcu_Ipw_PerformReset (_3);
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 7
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  return;

}



;; Function Mcu_GetClockFrequency (Mcu_GetClockFrequency, funcdef_no=16, decl_uid=8922, cgraph_uid=17, symbol_order=20)

Modification phase of node Mcu_GetClockFrequency/20
Mcu_GetClockFrequency (Clock_Ip_NameType ClockName)
{
  uint32 Frequency;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Frequency => 0
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (25);
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Frequency_8 = MCU_Ipw_GetClockFrequency (ClockName_6(D));
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 25
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # Frequency_2 = PHI <0(2), Frequency_8(3)>
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  # DEBUG Frequency => Frequency_2
  # DEBUG BEGIN_STMT
  return Frequency_2;

}



;; Function Mcu_SleepOnExit (Mcu_SleepOnExit, funcdef_no=17, decl_uid=8924, cgraph_uid=18, symbol_order=21)

Modification phase of node Mcu_SleepOnExit/21
Mcu_SleepOnExit (Mcu_SleepOnExitType SleepOnExit)
{
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Mcu_HLDChecksEntry (26);
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Mcu_Ipw_SleepOnExit (SleepOnExit_5(D));
  # DEBUG BEGIN_STMT
  # DEBUG RetStatus => 0
  # DEBUG McuServiceID => 26
  # DEBUG INLINE_ENTRY Mcu_HLDChecksExit
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Mcu_eStatus = 12;

  <bb 4> [local count: 1073741824]:
  # DEBUG RetStatus => NULL
  # DEBUG McuServiceID => NULL
  return;

}


