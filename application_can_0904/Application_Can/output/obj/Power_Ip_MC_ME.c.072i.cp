
IPA constant propagation start:
Determining dynamic type for call: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  Starting walk at: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  instance pointer: TempPartitionConfig_12  Outer instance pointer: &*_1[_2] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  Starting walk at: Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
  instance pointer: TempPartitionConfig_12  Outer instance pointer: &*_1[_2] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigureCore (_13, _14);
  Starting walk at: Power_Ip_MC_ME_ConfigureCore (_13, _14);
  instance pointer: _13  Outer instance pointer: &*_10[_11] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCore (_13, _14);
Determining dynamic type for call: Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  Starting walk at: Power_Ip_MC_ME_ConfigureCOFB (_7, _8);
  instance pointer: _7  Outer instance pointer: &*_4[_5] offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCore (_13, _14);
  Function call may change dynamic type:Power_Ip_MC_ME_ConfigureCOFB (_7, _8);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_MC_ME_ConfigurePartitionClock.part.0/16:
  Jump functions of caller  Power_Ip_ReportPowerErrors/15:
  Jump functions of caller  Power_Ip_TimeoutExpired/14:
  Jump functions of caller  Power_Ip_StartTimeout/13:
  Jump functions of caller  Power_Ip_MC_ME_SocTriggerResetEvent/12:
    callsite  Power_Ip_MC_ME_SocTriggerResetEvent/12 -> Power_Ip_MC_ME_TriggerModeUpdate/2 : 
  Jump functions of caller  Power_Ip_MC_ME_DisablePartitionClock/11:
    callsite  Power_Ip_MC_ME_DisablePartitionClock/11 -> Power_Ip_MC_ME_ConfigurePartitionClock/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_EnablePartitionClock/10:
    callsite  Power_Ip_MC_ME_EnablePartitionClock/10 -> Power_Ip_MC_ME_ConfigurePartitionClock/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigCoreCOFBClock/9:
    callsite  Power_Ip_MC_ME_ConfigCoreCOFBClock/9 -> Power_Ip_MC_ME_ConfigureCore/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Power_Ip_MC_ME_ConfigCoreCOFBClock/9 -> Power_Ip_MC_ME_ConfigureCOFB/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigureCore/8:
    callsite  Power_Ip_MC_ME_ConfigureCore/8 -> Power_Ip_MC_ME_TriggerCoreUpdate/5 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigureCOFB/7:
    callsite  Power_Ip_MC_ME_ConfigureCOFB/7 -> Power_Ip_MC_ME_TriggerCofbUpdate/4 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_ConfigurePartitionClock/6:
    callsite  Power_Ip_MC_ME_ConfigurePartitionClock/6 -> Power_Ip_MC_ME_ConfigurePartitionClock.part.0/16 : 
    callsite  Power_Ip_MC_ME_ConfigurePartitionClock/6 -> Power_Ip_MC_ME_TriggerPartitionUpdate/3 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_ME_TriggerCoreUpdate/5:
    callsite  Power_Ip_MC_ME_TriggerCoreUpdate/5 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_TriggerCofbUpdate/4:
    callsite  Power_Ip_MC_ME_TriggerCofbUpdate/4 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_TriggerPartitionUpdate/3:
    callsite  Power_Ip_MC_ME_TriggerPartitionUpdate/3 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_TriggerModeUpdate/2:
    callsite  Power_Ip_MC_ME_TriggerModeUpdate/2 -> Power_Ip_MC_ME_WriteControlKeys/1 : 
  Jump functions of caller  Power_Ip_MC_ME_WriteControlKeys/1:

 Propagating constants:

Not considering Power_Ip_MC_ME_SocTriggerResetEvent for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_DisablePartitionClock for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_EnablePartitionClock for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_ME_ConfigCoreCOFBClock for cloning; -fipa-cp-clone disabled.

overall_size: 262, max_new_size: 11001
 - context independent values, size: 7, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/16:
  Node: Power_Ip_MC_ME_SocTriggerResetEvent/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_DisablePartitionClock/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_EnablePartitionClock/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_ConfigCoreCOFBClock/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_ME_ConfigureCore/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Power_Ip_MC_ME_CoreConfigType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_ConfigureCOFB/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         const struct Power_Ip_MC_ME_CofbConfigType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_ConfigurePartitionClock/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_TriggerCoreUpdate/5:
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
  Node: Power_Ip_MC_ME_TriggerCofbUpdate/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_TriggerPartitionUpdate/3:
    param [0]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         uint32 [1, 1]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Power_Ip_MC_ME_TriggerModeUpdate/2:
  Node: Power_Ip_MC_ME_WriteControlKeys/1:

IPA decision stage:

 - Creating a specialized node of Power_Ip_MC_ME_TriggerPartitionUpdate/3 for all known contexts.
    replacing param #0 TriggerMask with const 1
Propagated bits info for function Power_Ip_MC_ME_TriggerPartitionUpdate.constprop/17:
 param 0: value = 0x1, mask = 0x0
Propagated bits info for function Power_Ip_MC_ME_TriggerPartitionUpdate/3:
 param 0: value = 0x1, mask = 0x0

IPA constant propagation end

Reclaiming functions: Power_Ip_MC_ME_TriggerPartitionUpdate/3
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_MC_ME_TriggerPartitionUpdate.constprop.0/17 (Power_Ip_MC_ME_TriggerPartitionUpdate.constprop) @07032700
  Type: function definition analyzed
  Visibility:
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Clone of Power_Ip_MC_ME_TriggerPartitionUpdate/3
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock/6 (114863532 (estimated locally),0.33 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_ConfigurePartitionClock.part.0/16 (Power_Ip_MC_ME_ConfigurePartitionClock.part.0) @070327e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock/6 (37904965 (estimated locally),0.11 per call) 
  Calls: Power_Ip_ReportPowerErrors/15 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_ReportPowerErrors/15 (Power_Ip_ReportPowerErrors) @06fa9c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/16 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_ConfigureCore/8 (37904965 (estimated locally),0.25 per call) Power_Ip_MC_ME_ConfigureCore/8 (25269977 (estimated locally),0.16 per call) Power_Ip_MC_ME_ConfigureCOFB/7 (37904965 (estimated locally),0.33 per call) 
  Calls: 
Power_Ip_TimeoutExpired/14 (Power_Ip_TimeoutExpired) @06fa9b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock/6 (1073741824 (estimated locally),3.08 per call) Power_Ip_MC_ME_ConfigureCore/8 (1073741824 (estimated locally),7.01 per call) Power_Ip_MC_ME_ConfigureCore/8 (715827885 (estimated locally),4.67 per call) Power_Ip_MC_ME_ConfigureCOFB/7 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
Power_Ip_StartTimeout/13 (Power_Ip_StartTimeout) @06fa9a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_ME_ConfigurePartitionClock/6 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_ConfigureCore/8 (114863532 (estimated locally),0.75 per call) Power_Ip_MC_ME_ConfigureCore/8 (76575688 (estimated locally),0.50 per call) Power_Ip_MC_ME_ConfigureCOFB/7 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_ME_SocTriggerResetEvent/12 (Power_Ip_MC_ME_SocTriggerResetEvent) @06fa97e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_TriggerModeUpdate/2 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_DisablePartitionClock/11 (Power_Ip_MC_ME_DisablePartitionClock) @06fa9460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigurePartitionClock/6 (30720827 (estimated locally),0.11 per call) 
Power_Ip_MC_ME_EnablePartitionClock/10 (Power_Ip_MC_ME_EnablePartitionClock) @06fa92a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:268435456 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigurePartitionClock/6 (30720827 (estimated locally),0.11 per call) 
Power_Ip_MC_ME_ConfigCoreCOFBClock/9 (Power_Ip_MC_ME_ConfigCoreCOFBClock) @06fa90e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:246065830 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_ConfigureCore/8 (193419557 (estimated locally),0.79 per call) Power_Ip_MC_ME_ConfigureCOFB/7 (193419556 (estimated locally),0.79 per call) 
Power_Ip_MC_ME_ConfigureCore/8 (Power_Ip_MC_ME_ConfigureCore) @06f8cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:153151376 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigCoreCOFBClock/9 (193419557 (estimated locally),0.79 per call) 
  Calls: Power_Ip_ReportPowerErrors/15 (37904965 (estimated locally),0.25 per call) Power_Ip_TimeoutExpired/14 (1073741824 (estimated locally),7.01 per call) Power_Ip_StartTimeout/13 (114863532 (estimated locally),0.75 per call) Power_Ip_MC_ME_TriggerCoreUpdate/5 (114863532 (estimated locally),0.75 per call) Power_Ip_ReportPowerErrors/15 (25269977 (estimated locally),0.16 per call) Power_Ip_TimeoutExpired/14 (715827885 (estimated locally),4.67 per call) Power_Ip_StartTimeout/13 (76575688 (estimated locally),0.50 per call) 
Power_Ip_MC_ME_ConfigureCOFB/7 (Power_Ip_MC_ME_ConfigureCOFB) @06f8cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigCoreCOFBClock/9 (193419556 (estimated locally),0.79 per call) 
  Calls: Power_Ip_ReportPowerErrors/15 (37904965 (estimated locally),0.33 per call) Power_Ip_TimeoutExpired/14 (1073741824 (estimated locally),9.35 per call) Power_Ip_StartTimeout/13 (114863532 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerCofbUpdate/4 (114863532 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_ConfigurePartitionClock/6 (Power_Ip_MC_ME_ConfigurePartitionClock) @06f8cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_DisablePartitionClock/11 (30720827 (estimated locally),0.11 per call) Power_Ip_MC_ME_EnablePartitionClock/10 (30720827 (estimated locally),0.11 per call) 
  Calls: Power_Ip_MC_ME_ConfigurePartitionClock.part.0/16 (37904965 (estimated locally),0.11 per call) Power_Ip_TimeoutExpired/14 (1073741824 (estimated locally),3.08 per call) Power_Ip_StartTimeout/13 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_ME_TriggerPartitionUpdate.constprop/17 (114863532 (estimated locally),0.33 per call) 
Power_Ip_MC_ME_TriggerCoreUpdate/5 (Power_Ip_MC_ME_TriggerCoreUpdate) @06f8c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigureCore/8 (114863532 (estimated locally),0.75 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_TriggerCofbUpdate/4 (Power_Ip_MC_ME_TriggerCofbUpdate) @06f8c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_ConfigureCOFB/7 (114863532 (estimated locally),1.00 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_TriggerPartitionUpdate/3 (Power_Ip_MC_ME_TriggerPartitionUpdate) @06f8c620
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_MC_ME_TriggerModeUpdate/2 (Power_Ip_MC_ME_TriggerModeUpdate) @06f8c460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_SocTriggerResetEvent/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: Power_Ip_MC_ME_WriteControlKeys/1 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_WriteControlKeys/1 (Power_Ip_MC_ME_WriteControlKeys) @06f8c1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_ME/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_ME_TriggerPartitionUpdate.constprop/17 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerCoreUpdate/5 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerCofbUpdate/4 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_TriggerModeUpdate/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_pxMC_ME/0 (Power_Ip_pxMC_ME) @06f49cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_MC_ME_ConfigurePartitionClock/6 (read)Power_Ip_MC_ME_TriggerCofbUpdate/4 (read)Power_Ip_MC_ME_ConfigureCore/8 (read)Power_Ip_MC_ME_TriggerModeUpdate/2 (read)Power_Ip_MC_ME_ConfigureCore/8 (read)Power_Ip_MC_ME_ConfigurePartitionClock/6 (read)Power_Ip_MC_ME_ConfigureCore/8 (read)Power_Ip_MC_ME_ConfigureCOFB/7 (read)Power_Ip_MC_ME_TriggerCoreUpdate/5 (read)Power_Ip_MC_ME_WriteControlKeys/1 (read)Power_Ip_MC_ME_TriggerPartitionUpdate.constprop.0/17 (read)Power_Ip_MC_ME_ConfigureCOFB/7 (read)Power_Ip_MC_ME_SocTriggerResetEvent/12 (read)Power_Ip_MC_ME_SocTriggerResetEvent/12 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Power_Ip_MC_ME_WriteControlKeys (Power_Ip_MC_ME_WriteControlKeys, funcdef_no=0, decl_uid=8375, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_MC_ME_WriteControlKeys/1
Power_Ip_MC_ME_WriteControlKeys ()
{
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.5_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.5_1 = Power_Ip_pxMC_ME;
  Power_Ip_pxMC_ME.5_1->CTL_KEY ={v} 23280;
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.5_1->CTL_KEY ={v} 42255;
  return;

}



;; Function Power_Ip_MC_ME_ConfigurePartitionClock (Power_Ip_MC_ME_ConfigurePartitionClock, funcdef_no=5, decl_uid=8387, cgraph_uid=6, symbol_order=6)

Modification phase of node Power_Ip_MC_ME_ConfigurePartitionClock/6
Power_Ip_MC_ME_ConfigurePartitionClock (const struct Power_Ip_MC_ME_PartitionConfigType * PartitionConfigPtr)
{
  uint8 PartitionIndex;
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  uint32 PartitionStatus;
  uint32 PartitionTriggerMask;
  uint32 PartitionConfig;
  uint32 TempValue;
  long unsigned int _1;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.15_2;
  int _3;
  long unsigned int _4;
  long unsigned int TimeoutTicks.17_7;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.18_8;
  long unsigned int _10;
  long unsigned int _11;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG TempValue => 0
  # DEBUG BEGIN_STMT
  PartitionConfig_15 = PartitionConfigPtr_14(D)->PartitionPconfRegValue;
  # DEBUG PartitionConfig => PartitionConfig_15
  # DEBUG BEGIN_STMT
  PartitionTriggerMask_16 = PartitionConfigPtr_14(D)->PartitionTriggerMask;
  # DEBUG PartitionTriggerMask => PartitionTriggerMask_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  PartitionIndex_17 = PartitionConfigPtr_14(D)->PartitionIndex;
  # DEBUG PartitionIndex => PartitionIndex_17
  # DEBUG BEGIN_STMT
  _1 = PartitionTriggerMask_16 & 1;
  if (_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.15_2 = Power_Ip_pxMC_ME;
  _3 = (int) PartitionIndex_17;
  TempValue_18 ={v} Power_Ip_pxMC_ME.15_2->McMePrtnArray[_3].PRTN_PCONF;
  # DEBUG TempValue => TempValue_18
  # DEBUG BEGIN_STMT
  TempValue_19 = TempValue_18 & 4294967294;
  # DEBUG TempValue => TempValue_19
  # DEBUG BEGIN_STMT
  _4 = PartitionConfig_15 & 1;
  TempValue_20 = _4 | TempValue_19;
  # DEBUG TempValue => TempValue_20
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.15_2->McMePrtnArray[_3].PRTN_PCONF ={v} TempValue_20;
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_TriggerPartitionUpdate (1, PartitionIndex_17);
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.17_7 = TimeoutTicks;
  TimeoutOccurred_25 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.17_7);
  # DEBUG TimeoutOccurred => TimeoutOccurred_25
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.18_8 = Power_Ip_pxMC_ME;
  PartitionStatus_26 ={v} Power_Ip_pxMC_ME.18_8->McMePrtnArray[_3].PRTN_STAT;
  # DEBUG PartitionStatus => PartitionStatus_26
  # DEBUG BEGIN_STMT
  _10 = PartitionConfig_15 ^ PartitionStatus_26;
  _11 = _10 & 1;
  if (_11 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_25 == 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_25(4), TimeoutOccurred_25(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG D#2 => PartitionConfigPtr_14(D)
  Power_Ip_MC_ME_ConfigurePartitionClock.part.0 ();

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Power_Ip_MC_ME_ConfigCoreCOFBClock (Power_Ip_MC_ME_ConfigCoreCOFBClock, funcdef_no=8, decl_uid=8358, cgraph_uid=9, symbol_order=9)

Modification phase of node Power_Ip_MC_ME_ConfigCoreCOFBClock/9
Power_Ip_MC_ME_ConfigCoreCOFBClock (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 CoreIndex;
  uint8 CofbIndex;
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType[3] * _1;
  int _2;
  unsigned char _3;
  const struct Power_Ip_MC_ME_CofbConfigType[<unknown>] * _4;
  int _5;
  unsigned char _6;
  const struct Power_Ip_MC_ME_CofbConfigType * _7;
  unsigned char _8;
  unsigned char _9;
  const struct Power_Ip_MC_ME_CoreConfigType[<unknown>] * _10;
  int _11;
  unsigned char _12;
  const struct Power_Ip_MC_ME_CoreConfigType * _13;
  unsigned char _14;
  unsigned char _15;

  <bb 2> [local count: 246065830]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 13>; [100.00%]

  <bb 3> [local count: 738197497]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_26(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_16;
  # DEBUG D#4 => &*_1[_2]
  # DEBUG TempPartitionConfig => D#4
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 == 1)
    goto <bb 16>; [16.00%]
  else
    goto <bb 12>; [84.00%]

  <bb 16> [local count: 118111599]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].ArrayPartitionCofbConfigPtr;
  _5 = (int) CofbIndex_17;
  _6 = *_4[_5].CofbUnderMcuControl;
  if (_6 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 193419556]:
  # DEBUG BEGIN_STMT
  _7 = &*_4[_5];
  _8 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionIndex;
  Power_Ip_MC_ME_ConfigureCOFB (_7, _8);

  <bb 6> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  CofbIndex_30 = CofbIndex_17 + 1;
  # DEBUG CofbIndex => CofbIndex_30

  <bb 7> [local count: 1073741819]:
  # CofbIndex_17 = PHI <CofbIndex_30(6), 0(16)>
  # DEBUG CofbIndex => CofbIndex_17
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].NumberOfCofbs;
  if (_9 > CofbIndex_17)
    goto <bb 4>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 15> [local count: 118111600]:
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].ArrayPartitionCoreConfigPtr;
  _11 = (int) CoreIndex_18;
  _12 = *_10[_11].CoreUnderMcuControl;
  if (_12 == 1)
    goto <bb 9>; [20.24%]
  else
    goto <bb 10>; [79.76%]

  <bb 9> [local count: 193419557]:
  # DEBUG BEGIN_STMT
  _13 = &*_10[_11];
  _14 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionIndex;
  Power_Ip_MC_ME_ConfigureCore (_13, _14);

  <bb 10> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  CoreIndex_28 = CoreIndex_18 + 1;
  # DEBUG CoreIndex => CoreIndex_28

  <bb 11> [local count: 1073741824]:
  # CoreIndex_18 = PHI <CoreIndex_28(10), 0(15)>
  # DEBUG CoreIndex => CoreIndex_18
  # DEBUG BEGIN_STMT
  _15 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].NumberOfCores;
  if (_15 > CoreIndex_18)
    goto <bb 8>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 738197498]:
  # DEBUG BEGIN_STMT
  PartitionIndex_31 = PartitionIndex_16 + 1;
  # DEBUG PartitionIndex => PartitionIndex_31

  <bb 13> [local count: 984263329]:
  # PartitionIndex_16 = PHI <0(2), PartitionIndex_31(12)>
  # DEBUG PartitionIndex => PartitionIndex_16
  # DEBUG BEGIN_STMT
  if (PartitionIndex_16 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 14>; [25.00%]

  <bb 14> [local count: 246065832]:
  return;

}



;; Function Power_Ip_MC_ME_EnablePartitionClock (Power_Ip_MC_ME_EnablePartitionClock, funcdef_no=9, decl_uid=8360, cgraph_uid=10, symbol_order=10)

Modification phase of node Power_Ip_MC_ME_EnablePartitionClock/10
Power_Ip_MC_ME_EnablePartitionClock (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType * TempPartitionConfig;
  const struct Power_Ip_MC_ME_PartitionConfigType[3] * _1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_11(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_7;
  TempPartitionConfig_12 = &*_1[_2];
  # DEBUG TempPartitionConfig => TempPartitionConfig_12
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPowerUnderMcuControl;
  if (_4 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 93093416]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPconfRegValue;
  _6 = _5 & 1;
  if (_6 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 30720827]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);

  <bb 7> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  PartitionIndex_14 = PartitionIndex_7 + 1;
  # DEBUG PartitionIndex => PartitionIndex_14

  <bb 8> [local count: 1073741824]:
  # PartitionIndex_7 = PHI <0(2), PartitionIndex_14(7)>
  # DEBUG PartitionIndex => PartitionIndex_7
  # DEBUG BEGIN_STMT
  if (PartitionIndex_7 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 9>; [25.00%]

  <bb 9> [local count: 268435456]:
  return;

}



;; Function Power_Ip_MC_ME_DisablePartitionClock (Power_Ip_MC_ME_DisablePartitionClock, funcdef_no=10, decl_uid=8362, cgraph_uid=11, symbol_order=11)

Modification phase of node Power_Ip_MC_ME_DisablePartitionClock/11
Power_Ip_MC_ME_DisablePartitionClock (const struct Power_Ip_MC_ME_ModeConfigType * ModeConfigPtr)
{
  uint8 PartitionIndex;
  const struct Power_Ip_MC_ME_PartitionConfigType * TempPartitionConfig;
  const struct Power_Ip_MC_ME_PartitionConfigType[3] * _1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG TempPartitionConfig => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PartitionIndex => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_11(D)->ArrayPartitionConfigPtr;
  _2 = (int) PartitionIndex_7;
  TempPartitionConfig_12 = &*_1[_2];
  # DEBUG TempPartitionConfig => TempPartitionConfig_12
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionUnderMcuControl;
  if (_3 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPowerUnderMcuControl;
  if (_4 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 93093416]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const struct Power_Ip_MC_ME_PartitionConfigType *)_1][_2].PartitionPconfRegValue;
  _6 = _5 & 1;
  if (_6 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 30720827]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_ConfigurePartitionClock (TempPartitionConfig_12);

  <bb 7> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  PartitionIndex_14 = PartitionIndex_7 + 1;
  # DEBUG PartitionIndex => PartitionIndex_14

  <bb 8> [local count: 1073741824]:
  # PartitionIndex_7 = PHI <0(2), PartitionIndex_14(7)>
  # DEBUG PartitionIndex => PartitionIndex_7
  # DEBUG BEGIN_STMT
  if (PartitionIndex_7 != 3)
    goto <bb 3>; [75.00%]
  else
    goto <bb 9>; [25.00%]

  <bb 9> [local count: 268435456]:
  return;

}



;; Function Power_Ip_MC_ME_SocTriggerResetEvent (Power_Ip_MC_ME_SocTriggerResetEvent, funcdef_no=11, decl_uid=8364, cgraph_uid=12, symbol_order=12)

Modification phase of node Power_Ip_MC_ME_SocTriggerResetEvent/12
Power_Ip_MC_ME_SocTriggerResetEvent (Power_Ip_PowerModeType PowerMode)
{
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.21_1;
  struct Power_Ip_MC_ME_Type * Power_Ip_pxMC_ME.22_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (PowerMode_4(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.21_1 = Power_Ip_pxMC_ME;
  Power_Ip_pxMC_ME.21_1->MODE_CONF ={v} 1;
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (PowerMode_4(D) == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_ME.22_2 = Power_Ip_pxMC_ME;
  Power_Ip_pxMC_ME.22_2->MODE_CONF ={v} 2;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_TriggerModeUpdate ();
  return;

}


