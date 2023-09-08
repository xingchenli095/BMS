
IPA constant propagation start:
Determining dynamic type for call: ResetReason_17 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_15, 0, &Position);
  Starting walk at: ResetReason_17 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_15, 0, &Position);
  instance pointer: &Position  Outer instance pointer: Position offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ResetReason_23 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_21, 1, &Position);
  Starting walk at: ResetReason_23 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_21, 1, &Position);
  instance pointer: &Position  Outer instance pointer: Position offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Power_Ip_MC_RGM_ClearDesResetFlags (RegValue_13);
  Function call may change dynamic type:ResetReason_17 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_15, 0, &Position);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_MC_RGM_ClearDesResetFlags.part.0/15:
  Jump functions of caller  Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14:
  Jump functions of caller  Power_Ip_MC_ME_SocTriggerResetEvent/13:
  Jump functions of caller  Power_Ip_ReportPowerErrors/12:
  Jump functions of caller  Power_Ip_TimeoutExpired/11:
  Jump functions of caller  Power_Ip_StartTimeout/10:
  Jump functions of caller  Power_Ip_MC_RGM_PerformReset/9:
  Jump functions of caller  Power_Ip_MC_RGM_GetResetRawValue/8:
    callsite  Power_Ip_MC_RGM_GetResetRawValue/8 -> Power_Ip_MC_RGM_ClearDesResetFlags/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x6006d759
         VR  [0, 1611061081]
    callsite  Power_Ip_MC_RGM_GetResetRawValue/8 -> Power_Ip_MC_RGM_ClearFesResetFlags/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x60110259
         VR  [0, 1611727449]
  Jump functions of caller  Power_Ip_MC_RGM_GetResetReason/7:
    callsite  Power_Ip_MC_RGM_GetResetReason/7 -> Power_Ip_MC_RGM_ClearFesResetFlags/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x60110259
         VR  [0, 1611727449]
    callsite  Power_Ip_MC_RGM_GetResetReason/7 -> Power_Ip_MC_RGM_CheckResetReason/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Power_Ip_MC_RGM_GetResetReason/7 -> Power_Ip_MC_RGM_ClearDesResetFlags/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x6006d759
         VR  [0, 1611061081]
    callsite  Power_Ip_MC_RGM_GetResetReason/7 -> Power_Ip_MC_RGM_CheckResetReason/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Power_Ip_MC_RGM_CheckResetReason/6:
  Jump functions of caller  Power_Ip_MC_RGM_ResetInit/5:
    callsite  Power_Ip_MC_RGM_ResetInit/5 -> Power_Ip_MC_RGM_ClearFesResetFlags/3 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Power_Ip_MC_RGM_ClearDesResetFlags/4:
    callsite  Power_Ip_MC_RGM_ClearDesResetFlags/4 -> Power_Ip_MC_RGM_ClearDesResetFlags.part.0/15 : 
  Jump functions of caller  Power_Ip_MC_RGM_ClearFesResetFlags/3:
    callsite  Power_Ip_MC_RGM_ClearFesResetFlags/3 -> Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14 : 

 Propagating constants:

Not considering Power_Ip_MC_RGM_PerformReset for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_RGM_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_RGM_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_MC_RGM_ResetInit for cloning; -fipa-cp-clone disabled.

overall_size: 205, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14:
  Node: Power_Ip_MC_RGM_PerformReset/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_RGM_GetResetRawValue/8:
  Node: Power_Ip_MC_RGM_GetResetReason/7:
  Node: Power_Ip_MC_RGM_CheckResetReason/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 3, loc_size: 19, prop_time: 0, prop_size: 0]
               1 [loc_time: 3, loc_size: 19, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x1
         uint8 [0, 1]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint32 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Power_Ip_MC_RGM_ResetInit/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_MC_RGM_ClearDesResetFlags/4:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x6006d759
         uint32 [0, 1611061081]
        AGGS VARIABLE
  Node: Power_Ip_MC_RGM_ClearFesResetFlags/3:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Power_Ip_MC_RGM_CheckResetReason/6:
 param 1: value = 0x1, mask = 0x1
 param 2: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Power_Ip_MC_RGM_ClearDesResetFlags/4:
 param 0: value = 0x0, mask = 0x6006d759

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Power_Ip_MC_RGM_ClearDesResetFlags.part.0/15 (Power_Ip_MC_RGM_ClearDesResetFlags.part.0) @06fc1d20
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly artificial
  References: Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 local icf_merged split_part optimize_size
  Called by: Power_Ip_MC_RGM_ClearDesResetFlags/4 (37904965 (estimated locally),0.11 per call) 
  Calls: 
Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14 (Power_Ip_MC_RGM_ClearFesResetFlags.part.0) @06fc17e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: Power_Ip_MC_RGM_ClearDesResetFlags.part.0/15 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local icf_merged split_part optimize_size
  Called by: Power_Ip_MC_RGM_ClearFesResetFlags/3 (37904965 (estimated locally),0.11 per call) 
  Calls: Power_Ip_ReportPowerErrors/12 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_ME_SocTriggerResetEvent/13 (Power_Ip_MC_ME_SocTriggerResetEvent) @06fb8000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_RGM_PerformReset/9 (357878150 (estimated locally),0.33 per call) Power_Ip_MC_RGM_PerformReset/9 (357878150 (estimated locally),0.33 per call) 
  Calls: 
Power_Ip_ReportPowerErrors/12 (Power_Ip_ReportPowerErrors) @06f7a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_TimeoutExpired/11 (Power_Ip_TimeoutExpired) @06f7a620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_RGM_ClearDesResetFlags/4 (1073741824 (estimated locally),3.08 per call) Power_Ip_MC_RGM_ClearFesResetFlags/3 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Power_Ip_StartTimeout/10 (Power_Ip_StartTimeout) @06f7a540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_MC_RGM_ClearDesResetFlags/4 (114863532 (estimated locally),0.33 per call) Power_Ip_MC_RGM_ClearFesResetFlags/3 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Power_Ip_MC_RGM_PerformReset/9 (Power_Ip_MC_RGM_PerformReset) @06f7a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_SocTriggerResetEvent/13 (357878150 (estimated locally),0.33 per call) Power_Ip_MC_ME_SocTriggerResetEvent/13 (357878150 (estimated locally),0.33 per call) 
Power_Ip_MC_RGM_GetResetRawValue/8 (Power_Ip_MC_RGM_GetResetRawValue) @06f7a000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pxMC_RGM/2 (read)Power_Ip_u32FesResetStatus/1 (write)Power_Ip_u32FesResetStatus/1 (read)Power_Ip_pxMC_RGM/2 (read)Power_Ip_u32DesResetStatus/0 (write)Power_Ip_u32DesResetStatus/0 (read)
  Referring: 
  Availability: available
  Function flags: count:65068756 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_RGM_ClearDesResetFlags/4 (32534377 (estimated locally),0.50 per call) Power_Ip_MC_RGM_ClearFesResetFlags/3 (32534377 (estimated locally),0.50 per call) 
Power_Ip_MC_RGM_GetResetReason/7 (Power_Ip_MC_RGM_GetResetReason) @06f5dc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pxMC_RGM/2 (read)Power_Ip_u32DesResetStatus/0 (write)Power_Ip_u32DesResetStatus/0 (read)Power_Ip_pxMC_RGM/2 (read)Power_Ip_u32FesResetStatus/1 (write)Power_Ip_u32FesResetStatus/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_RGM_ClearFesResetFlags/3 (536870913 (estimated locally),0.50 per call) Power_Ip_MC_RGM_CheckResetReason/6 (177167401 (estimated locally),0.17 per call) Power_Ip_MC_RGM_ClearDesResetFlags/4 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_RGM_CheckResetReason/6 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_MC_RGM_CheckResetReason/6 (Power_Ip_MC_RGM_CheckResetReason) @06f5d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:46850980 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_RGM_GetResetReason/7 (177167401 (estimated locally),0.17 per call) Power_Ip_MC_RGM_GetResetReason/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_RGM_ResetInit/5 (Power_Ip_MC_RGM_ResetInit) @06f5d700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pxMC_RGM/2 (read)Power_Ip_u32FesResetStatus/1 (write)Power_Ip_pxMC_RGM/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_RGM_ClearFesResetFlags/3 (354334802 (estimated locally),0.33 per call) 
Power_Ip_MC_RGM_ClearDesResetFlags/4 (Power_Ip_MC_RGM_ClearDesResetFlags) @06f5d540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_RGM/2 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_RGM_GetResetRawValue/8 (32534377 (estimated locally),0.50 per call) Power_Ip_MC_RGM_GetResetReason/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: Power_Ip_MC_RGM_ClearDesResetFlags.part.0/15 (37904965 (estimated locally),0.11 per call) Power_Ip_TimeoutExpired/11 (1073741824 (estimated locally),3.08 per call) Power_Ip_StartTimeout/10 (114863532 (estimated locally),0.33 per call) 
Power_Ip_MC_RGM_ClearFesResetFlags/3 (Power_Ip_MC_RGM_ClearFesResetFlags) @06f5d380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Power_Ip_pxMC_RGM/2 (read)
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Power_Ip_MC_RGM_GetResetRawValue/8 (32534377 (estimated locally),0.50 per call) Power_Ip_MC_RGM_GetResetReason/7 (536870913 (estimated locally),0.50 per call) Power_Ip_MC_RGM_ResetInit/5 (354334802 (estimated locally),0.33 per call) 
  Calls: Power_Ip_MC_RGM_ClearFesResetFlags.part.0/14 (37904965 (estimated locally),0.11 per call) Power_Ip_TimeoutExpired/11 (1073741824 (estimated locally),3.08 per call) Power_Ip_StartTimeout/10 (114863532 (estimated locally),0.33 per call) 
Power_Ip_pxMC_RGM/2 (Power_Ip_pxMC_RGM) @06ec9c18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_MC_RGM_ClearDesResetFlags/4 (read)Power_Ip_MC_RGM_GetResetReason/7 (read)Power_Ip_MC_RGM_GetResetReason/7 (read)Power_Ip_MC_RGM_ResetInit/5 (read)Power_Ip_MC_RGM_ClearFesResetFlags/3 (read)Power_Ip_MC_RGM_ResetInit/5 (read)Power_Ip_MC_RGM_GetResetRawValue/8 (read)Power_Ip_MC_RGM_GetResetRawValue/8 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Power_Ip_u32FesResetStatus/1 (Power_Ip_u32FesResetStatus) @06ec9bd0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_MC_RGM_ResetInit/5 (write)Power_Ip_MC_RGM_GetResetReason/7 (write)Power_Ip_MC_RGM_GetResetReason/7 (read)Power_Ip_MC_RGM_GetResetRawValue/8 (write)Power_Ip_MC_RGM_GetResetRawValue/8 (read)
  Availability: available
  Varpool flags:
Power_Ip_u32DesResetStatus/0 (Power_Ip_u32DesResetStatus) @06ec9b88
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Power_Ip_MC_RGM_GetResetReason/7 (write)Power_Ip_MC_RGM_GetResetReason/7 (read)Power_Ip_MC_RGM_GetResetRawValue/8 (write)Power_Ip_MC_RGM_GetResetRawValue/8 (read)
  Availability: available
  Varpool flags:

;; Function Power_Ip_MC_RGM_ClearDesResetFlags (Power_Ip_MC_RGM_ClearDesResetFlags, funcdef_no=1, decl_uid=8379, cgraph_uid=2, symbol_order=4)

Modification phase of node Power_Ip_MC_RGM_ClearDesResetFlags/4
Adjusting mask for param 0 to 0x6006d759
Setting value range of param 0 [0, 1611061081]
Power_Ip_MC_RGM_ClearDesResetFlags (uint32 RegValue)
{
  uint32 RegValueTemp;
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  long unsigned int TimeoutTicks.10_1;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.11_2;
  long unsigned int _4;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG RegValueTemp => RegValue_8(D)
  # DEBUG BEGIN_STMT
  if (RegValue_8(D) != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # RegValueTemp_5 = PHI <RegValue_8(D)(3), RegValueTemp_15(9)>
  # DEBUG RegValueTemp => RegValueTemp_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.10_1 = TimeoutTicks;
  TimeoutOccurred_13 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.10_1);
  # DEBUG TimeoutOccurred => TimeoutOccurred_13
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.11_2 = Power_Ip_pxMC_RGM;
  Power_Ip_pxMC_RGM.11_2->DES ={v} RegValueTemp_5;
  # DEBUG BEGIN_STMT
  _4 ={v} Power_Ip_pxMC_RGM.11_2->DES;
  RegValueTemp_15 = _4 & 1611061081;
  # DEBUG RegValueTemp => RegValueTemp_15
  # DEBUG BEGIN_STMT
  if (RegValueTemp_15 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_13 == 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_3 = PHI <TimeoutOccurred_13(4), TimeoutOccurred_13(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_3 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG D#3 => RegValue_8(D)
  Power_Ip_MC_RGM_ClearDesResetFlags.part.0 ();

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Power_Ip_MC_RGM_ClearFesResetFlags (Power_Ip_MC_RGM_ClearFesResetFlags, funcdef_no=0, decl_uid=8377, cgraph_uid=1, symbol_order=3)

Modification phase of node Power_Ip_MC_RGM_ClearFesResetFlags/3
Power_Ip_MC_RGM_ClearFesResetFlags (uint32 RegValue)
{
  uint32 RegValueTemp;
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  long unsigned int TimeoutTicks.5_1;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.6_2;
  long unsigned int _4;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG RegValueTemp => RegValue_8(D)
  # DEBUG BEGIN_STMT
  if (RegValue_8(D) != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # RegValueTemp_5 = PHI <RegValue_8(D)(3), RegValueTemp_15(9)>
  # DEBUG RegValueTemp => RegValueTemp_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.5_1 = TimeoutTicks;
  TimeoutOccurred_13 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.5_1);
  # DEBUG TimeoutOccurred => TimeoutOccurred_13
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.6_2 = Power_Ip_pxMC_RGM;
  Power_Ip_pxMC_RGM.6_2->FES ={v} RegValueTemp_5;
  # DEBUG BEGIN_STMT
  _4 ={v} Power_Ip_pxMC_RGM.6_2->FES;
  RegValueTemp_15 = _4 & 1611727449;
  # DEBUG RegValueTemp => RegValueTemp_15
  # DEBUG BEGIN_STMT
  if (RegValueTemp_15 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_13 == 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_3 = PHI <TimeoutOccurred_13(4), TimeoutOccurred_13(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_3 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG D#1 => RegValue_8(D)
  Power_Ip_MC_RGM_ClearFesResetFlags.part.0 ();

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Power_Ip_MC_RGM_ResetInit (Power_Ip_MC_RGM_ResetInit, funcdef_no=2, decl_uid=8342, cgraph_uid=3, symbol_order=5)

Modification phase of node Power_Ip_MC_RGM_ResetInit/5
Power_Ip_MC_RGM_ResetInit (const struct Power_Ip_MC_RGM_ConfigType * ConfigPtr)
{
  uint32 DesResetReason;
  uint32 FesResetReason;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.0_1;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.1_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG FesResetReason => 0
  # DEBUG BEGIN_STMT
  # DEBUG DesResetReason => 0
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.0_1 = Power_Ip_pxMC_RGM;
  FesResetReason_11 ={v} Power_Ip_pxMC_RGM.0_1->FES;
  # DEBUG FesResetReason => FesResetReason_11
  # DEBUG BEGIN_STMT
  if (FesResetReason_11 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Power_Ip_u32FesResetStatus = FesResetReason_11;
  # DEBUG BEGIN_STMT
  Power_Ip_MC_RGM_ClearFesResetFlags (FesResetReason_11);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.1_2 = Power_Ip_pxMC_RGM;
  _3 = ConfigPtr_14(D)->FuncResetOpt;
  Power_Ip_pxMC_RGM.1_2->FERD ={v} _3;
  # DEBUG BEGIN_STMT
  DesResetReason_16 ={v} Power_Ip_pxMC_RGM.1_2->DES;
  # DEBUG DesResetReason => DesResetReason_16
  # DEBUG BEGIN_STMT
  if (DesResetReason_16 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = ConfigPtr_14(D)->FesThresholdReset;
  Power_Ip_pxMC_RGM.1_2->FRET ={v} _4;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 = DesResetReason_16 & 1;
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = ConfigPtr_14(D)->DesThresholdReset;
  Power_Ip_pxMC_RGM.1_2->DRET ={v} _6;

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Power_Ip_MC_RGM_GetResetReason (Power_Ip_MC_RGM_GetResetReason, funcdef_no=4, decl_uid=8344, cgraph_uid=5, symbol_order=7)

Modification phase of node Power_Ip_MC_RGM_GetResetReason/7
Power_Ip_MC_RGM_GetResetReason ()
{
  uint32 Position;
  uint32 ActiveValue;
  uint32 RegValue;
  Power_Ip_ResetType ResetReason;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.8_1;
  long unsigned int _2;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.9_3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 25
  # DEBUG BEGIN_STMT
  # DEBUG RegValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Position = 0;
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.8_1 = Power_Ip_pxMC_RGM;
  _2 ={v} Power_Ip_pxMC_RGM.8_1->DES;
  RegValue_13 = _2 & 1611061081;
  # DEBUG RegValue => RegValue_13
  # DEBUG BEGIN_STMT
  if (RegValue_13 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_u32DesResetStatus = RegValue_13;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ActiveValue_15 = Power_Ip_u32DesResetStatus;
  # DEBUG ActiveValue => ActiveValue_15
  # DEBUG BEGIN_STMT
  ResetReason_17 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_15, 0, &Position);
  # DEBUG ResetReason => ResetReason_17
  # DEBUG BEGIN_STMT
  Power_Ip_MC_RGM_ClearDesResetFlags (RegValue_13);
  # DEBUG BEGIN_STMT
  if (RegValue_13 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.9_3 = Power_Ip_pxMC_RGM;
  _4 ={v} Power_Ip_pxMC_RGM.9_3->FES;
  RegValue_19 = _4 & 1611727449;
  # DEBUG RegValue => RegValue_19
  # DEBUG BEGIN_STMT
  if (RegValue_19 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  Power_Ip_u32FesResetStatus = RegValue_19;

  <bb 7> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  ActiveValue_21 = Power_Ip_u32FesResetStatus;
  # DEBUG ActiveValue => ActiveValue_21
  # DEBUG BEGIN_STMT
  if (ActiveValue_21 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  ResetReason_23 = Power_Ip_MC_RGM_CheckResetReason (ActiveValue_21, 1, &Position);
  # DEBUG ResetReason => ResetReason_23

  <bb 9> [local count: 536870913]:
  # ResetReason_5 = PHI <ResetReason_17(7), ResetReason_23(8)>
  # DEBUG ResetReason => ResetReason_5
  # DEBUG BEGIN_STMT
  Power_Ip_MC_RGM_ClearFesResetFlags (RegValue_19);

  <bb 10> [local count: 1073741824]:
  # ResetReason_6 = PHI <ResetReason_17(4), ResetReason_5(9)>
  # DEBUG ResetReason => ResetReason_6
  # DEBUG BEGIN_STMT
  Position ={v} {CLOBBER};
  return ResetReason_6;

}



;; Function Power_Ip_MC_RGM_GetResetRawValue (Power_Ip_MC_RGM_GetResetRawValue, funcdef_no=5, decl_uid=8346, cgraph_uid=6, symbol_order=8)

Modification phase of node Power_Ip_MC_RGM_GetResetRawValue/8
Power_Ip_MC_RGM_GetResetRawValue ()
{
  uint32 Position;
  uint32 DynamicMask;
  uint32 Index;
  uint32 ActiveValue;
  uint32 RegValue;
  uint32 RawReset;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.13_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  struct Power_Ip_MC_RGM_Type * Power_Ip_pxMC_RGM.14_6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;

  <bb 2> [local count: 65068756]:
  # DEBUG BEGIN_STMT
  # DEBUG RawReset => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.13_1 = Power_Ip_pxMC_RGM;
  _2 ={v} Power_Ip_pxMC_RGM.13_1->FES;
  RegValue_31 = _2 & 1611727449;
  # DEBUG RegValue => RegValue_31
  # DEBUG BEGIN_STMT
  if (RegValue_31 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 32534378]:
  # DEBUG BEGIN_STMT
  Power_Ip_u32FesResetStatus = RegValue_31;

  <bb 4> [local count: 65068756]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetMask => 1611727577
  # DEBUG BEGIN_STMT
  ActiveValue_33 = Power_Ip_u32FesResetStatus;
  # DEBUG ActiveValue => ActiveValue_33
  # DEBUG BEGIN_STMT
  if (ActiveValue_33 != 0)
    goto <bb 24>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 24> [local count: 32534378]:
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 1041207447]:
  # DEBUG BEGIN_STMT
  DynamicMask_35 = 1 << Index_19;
  # DEBUG DynamicMask => DynamicMask_35
  # DEBUG BEGIN_STMT
  _3 = DynamicMask_35 & 1611727577;
  if (_3 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 520603723]:
  # DEBUG BEGIN_STMT
  _4 = ActiveValue_33 & DynamicMask_35;
  if (_4 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 260301862]:
  # DEBUG BEGIN_STMT
  _5 = 1 << Position_22;
  RawReset_36 = _5 | RawReset_13;
  # DEBUG RawReset => RawReset_36

  <bb 8> [local count: 520603723]:
  # RawReset_11 = PHI <RawReset_13(6), RawReset_36(7)>
  # DEBUG RawReset => RawReset_11
  # DEBUG BEGIN_STMT
  Position_37 = Position_22 + 1;
  # DEBUG Position => Position_37

  <bb 9> [local count: 1041207447]:
  # RawReset_12 = PHI <RawReset_13(5), RawReset_11(8)>
  # Position_21 = PHI <Position_22(5), Position_37(8)>
  # DEBUG Position => Position_21
  # DEBUG RawReset => RawReset_12
  # DEBUG BEGIN_STMT
  Index_38 = Index_19 + 1;
  # DEBUG Index => Index_38

  <bb 10> [local count: 1073741824]:
  # RawReset_13 = PHI <RawReset_12(9), 0(24)>
  # Index_19 = PHI <Index_38(9), 0(24)>
  # Position_22 = PHI <Position_21(9), 0(24)>
  # DEBUG Position => Position_22
  # DEBUG Index => Index_19
  # DEBUG RawReset => RawReset_13
  # DEBUG BEGIN_STMT
  if (Index_19 != 32)
    goto <bb 5>; [96.97%]
  else
    goto <bb 11>; [3.03%]

  <bb 11> [local count: 32534377]:
  # RawReset_47 = PHI <RawReset_13(10)>
  # DEBUG BEGIN_STMT
  Power_Ip_MC_RGM_ClearFesResetFlags (RegValue_31);

  <bb 12> [local count: 65068755]:
  # RawReset_14 = PHI <0(4), RawReset_47(11)>
  # DEBUG RawReset => RawReset_14
  # DEBUG BEGIN_STMT
  Power_Ip_pxMC_RGM.14_6 = Power_Ip_pxMC_RGM;
  _7 ={v} Power_Ip_pxMC_RGM.14_6->DES;
  RegValue_39 = _7 & 1611061081;
  # DEBUG RegValue => RegValue_39
  # DEBUG BEGIN_STMT
  if (RegValue_39 != 0)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 32534378]:
  # DEBUG BEGIN_STMT
  Power_Ip_u32DesResetStatus = RegValue_39;

  <bb 14> [local count: 65068755]:
  # DEBUG BEGIN_STMT
  ActiveValue_41 = Power_Ip_u32DesResetStatus;
  # DEBUG ActiveValue => ActiveValue_41
  # DEBUG BEGIN_STMT
  if (ActiveValue_41 != 0)
    goto <bb 23>; [50.00%]
  else
    goto <bb 22>; [50.00%]

  <bb 23> [local count: 32534378]:
  goto <bb 20>; [100.00%]

  <bb 15> [local count: 1041207436]:
  # DEBUG BEGIN_STMT
  DynamicMask_43 = 1 << Index_20;
  # DEBUG DynamicMask => DynamicMask_43
  # DEBUG BEGIN_STMT
  _8 = DynamicMask_43 & 1611061081;
  if (_8 != 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 16> [local count: 520603718]:
  # DEBUG BEGIN_STMT
  _9 = ActiveValue_41 & DynamicMask_43;
  if (_9 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 18>; [50.00%]

  <bb 17> [local count: 260301859]:
  # DEBUG BEGIN_STMT
  _10 = 1 << Position_24;
  RawReset_44 = _10 | RawReset_17;
  # DEBUG RawReset => RawReset_44

  <bb 18> [local count: 520603718]:
  # RawReset_15 = PHI <RawReset_17(16), RawReset_44(17)>
  # DEBUG RawReset => RawReset_15
  # DEBUG BEGIN_STMT
  Position_45 = Position_24 + 1;
  # DEBUG Position => Position_45

  <bb 19> [local count: 1041207436]:
  # RawReset_16 = PHI <RawReset_17(15), RawReset_15(18)>
  # Position_23 = PHI <Position_24(15), Position_45(18)>
  # DEBUG Position => Position_23
  # DEBUG RawReset => RawReset_16
  # DEBUG BEGIN_STMT
  Index_46 = Index_20 + 1;
  # DEBUG Index => Index_46

  <bb 20> [local count: 1073741814]:
  # RawReset_17 = PHI <RawReset_16(19), RawReset_14(23)>
  # Index_20 = PHI <Index_46(19), 0(23)>
  # Position_24 = PHI <Position_23(19), 15(23)>
  # DEBUG Position => Position_24
  # DEBUG Index => Index_20
  # DEBUG RawReset => RawReset_17
  # DEBUG BEGIN_STMT
  if (Index_20 != 32)
    goto <bb 15>; [96.97%]
  else
    goto <bb 21>; [3.03%]

  <bb 21> [local count: 32534377]:
  # RawReset_29 = PHI <RawReset_17(20)>
  # DEBUG BEGIN_STMT
  Power_Ip_MC_RGM_ClearDesResetFlags (RegValue_39);

  <bb 22> [local count: 65068755]:
  # RawReset_18 = PHI <RawReset_14(14), RawReset_29(21)>
  # DEBUG RawReset => RawReset_18
  # DEBUG BEGIN_STMT
  return RawReset_18;

}



;; Function Power_Ip_MC_RGM_PerformReset (Power_Ip_MC_RGM_PerformReset, funcdef_no=6, decl_uid=8348, cgraph_uid=7, symbol_order=9)

Modification phase of node Power_Ip_MC_RGM_PerformReset/9
Power_Ip_MC_RGM_PerformReset (const struct Power_Ip_MC_RGM_ConfigType * ConfigPtr)
{
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = ConfigPtr_4(D)->ResetType;
  switch (_1) <default: <L4> [33.33%], case 60: <L1> [33.33%], case 90: <L0> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_SocTriggerResetEvent (1);
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_SocTriggerResetEvent (0);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L4>:
  return;

}


