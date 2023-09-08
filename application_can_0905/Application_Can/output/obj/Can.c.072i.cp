
IPA constant propagation start:
Determining dynamic type for call: _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  Starting walk at: _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  instance pointer: Can_pController_22  Outer instance pointer: Can_pController_22 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = Can_ValidateHth (0, Hth_18(D));
Determining dynamic type for call: _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  Starting walk at: _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  instance pointer: Can_pHwObject_23  Outer instance pointer: Can_pHwObject_23 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = Can_ValidateHth (0, Hth_18(D));
Determining dynamic type for call: _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  Starting walk at: _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  instance pointer: PduInfo_20(D)  Outer instance pointer: PduInfo_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = Can_ValidateHth (0, Hth_18(D));

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_ValidateController.part.0/47:
  Jump functions of caller  CanIf_ControllerBusOff/46:
  Jump functions of caller  Can_Ipw_ProcessRxMesgBuffer/45:
  Jump functions of caller  Can_Ipw_ProcessTxMesgBuffer/44:
  Jump functions of caller  Can_Ipw_MainFunction_Mode/43:
  Jump functions of caller  Can_Ipw_Write/42:
  Jump functions of caller  Can_Ipw_GetControllerTxErrorCounter/41:
  Jump functions of caller  Can_Ipw_GetControllerRxErrorCounter/40:
  Jump functions of caller  Can_Ipw_GetControllerErrorState/39:
  Jump functions of caller  Can_Ipw_EnableControllerInterrupts/38:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01/37:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01/36:
  Jump functions of caller  Can_Ipw_DisableControllerInterrupts/35:
  Jump functions of caller  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00/34:
  Jump functions of caller  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00/33:
  Jump functions of caller  Can_Ipw_SetControllerToStopMode/32:
  Jump functions of caller  CanIf_ControllerModeIndication/31:
  Jump functions of caller  Can_Ipw_SetControllerToStartMode/30:
  Jump functions of caller  Can_Ipw_DeInit/29:
  Jump functions of caller  Can_Ipw_Init/28:
  Jump functions of caller  Det_ASR40_ReportError/27:
  Jump functions of caller  Can_ProcessBusOffInterrupt/26:
  Jump functions of caller  Can_ProcessMesgBufferCommonInterrupt/25:
  Jump functions of caller  Can_MainFunction_Mode/24:
  Jump functions of caller  Can_MainFunction_BusOff/23:
  Jump functions of caller  Can_MainFunction_Read/22:
  Jump functions of caller  Can_MainFunction_Write/21:
  Jump functions of caller  Can_Write/20:
    callsite  Can_Write/20 -> Can_ValidatePdu/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Can_Write/20 -> Can_ValidateHth/8 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Can_GetControllerTxErrorCounter/19:
  Jump functions of caller  Can_GetControllerRxErrorCounter/18:
  Jump functions of caller  Can_GetControllerMode/17:
  Jump functions of caller  Can_GetControllerErrorState/16:
    callsite  Can_GetControllerErrorState/16 -> Can_ValidateController/7 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 17
         value: 0x11, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_EnableControllerInterrupts/15:
  Jump functions of caller  Can_DisableControllerInterrupts/14:
  Jump functions of caller  Can_SetControllerMode/13:
    callsite  Can_SetControllerMode/13 -> Can_ValidateController/7 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_DeInit/12:
    callsite  Can_DeInit/12 -> Can_DeInitControllers/10 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_Init/11:
    callsite  Can_Init/11 -> Can_InitControllers/6 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Can_Init/11 -> Can_IsControllersBusy/5 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_DeInitControllers/10:
  Jump functions of caller  Can_ValidatePdu/9:
  Jump functions of caller  Can_ValidateHth/8:
  Jump functions of caller  Can_ValidateController/7:
    callsite  Can_ValidateController/7 -> Can_ValidateController.part.0/47 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Can_InitControllers/6:
  Jump functions of caller  Can_IsControllersBusy/5:

 Propagating constants:

Not considering Can_ProcessBusOffInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Can_ProcessMesgBufferCommonInterrupt for cloning; -fipa-cp-clone disabled.
Not considering Can_MainFunction_Mode for cloning; -fipa-cp-clone disabled.
Function Can_MainFunction_BusOff/23 is not versionable, reason: not a tree_versionable_function.
Function Can_MainFunction_Read/22 is not versionable, reason: not a tree_versionable_function.
Not considering Can_MainFunction_Write for cloning; -fipa-cp-clone disabled.
Not considering Can_Write for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerTxErrorCounter for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerRxErrorCounter for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerMode for cloning; -fipa-cp-clone disabled.
Not considering Can_GetControllerErrorState for cloning; -fipa-cp-clone disabled.
Not considering Can_EnableControllerInterrupts for cloning; -fipa-cp-clone disabled.
Not considering Can_DisableControllerInterrupts for cloning; -fipa-cp-clone disabled.
Not considering Can_SetControllerMode for cloning; -fipa-cp-clone disabled.
Not considering Can_DeInit for cloning; -fipa-cp-clone disabled.
Not considering Can_Init for cloning; -fipa-cp-clone disabled.

overall_size: 616, max_new_size: 11001
 - context independent values, size: 15, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 21, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 14, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 35, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 17, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Can_ValidateController.part.0/47:
    param [0]: 17 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               3 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x11, mask = 0x12
         uint8 [3, 17]
        AGGS VARIABLE
  Node: Can_ProcessBusOffInterrupt/26:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_ProcessMesgBufferCommonInterrupt/25:
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
  Node: Can_MainFunction_Mode/24:
  Node: Can_MainFunction_BusOff/23:
  Node: Can_MainFunction_Read/22:
  Node: Can_MainFunction_Write/21:
  Node: Can_Write/20:
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
  Node: Can_GetControllerTxErrorCounter/19:
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
  Node: Can_GetControllerRxErrorCounter/18:
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
  Node: Can_GetControllerMode/17:
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
  Node: Can_GetControllerErrorState/16:
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
  Node: Can_EnableControllerInterrupts/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_DisableControllerInterrupts/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_SetControllerMode/13:
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
  Node: Can_DeInit/12:
  Node: Can_Init/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Can_DeInitControllers/10:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
  Node: Can_ValidatePdu/9:
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
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Can_ValidateHth/8:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Can_ValidateController/7:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: 3 [loc_time: 2, loc_size: 16, prop_time: 0, prop_size: 0]
               17 [loc_time: 2, loc_size: 16, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x11, mask = 0x12
         uint8 [3, 17]
        AGGS VARIABLE
  Node: Can_InitControllers/6:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE
  Node: Can_IsControllersBusy/5:
    param [0]: 0 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x0
         uint32 [0, 0]
        AGGS VARIABLE

IPA decision stage:

 - Creating a specialized node of Can_DeInitControllers/10 for all known contexts.
    replacing param #0 u32CoreId with const 0
 - Creating a specialized node of Can_ValidateHth/8 for all known contexts.
    replacing param #0 u32CoreId with const 0
 - Creating a specialized node of Can_ValidateController/7 for all known contexts.
    replacing param #0 u32CoreId with const 0
 - Creating a specialized node of Can_InitControllers/6 for all known contexts.
    replacing param #0 u32CoreId with const 0
 - Creating a specialized node of Can_IsControllersBusy/5 for all known contexts.
    replacing param #0 u32CoreId with const 0
Propagated bits info for function Can_IsControllersBusy.constprop/52:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_InitControllers.constprop/51:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_ValidateController.constprop/50:
 param 0: value = 0x0, mask = 0x0
 param 2: value = 0x11, mask = 0x12
Propagated bits info for function Can_ValidateHth.constprop/49:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_DeInitControllers.constprop/48:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_ValidateController.part.0/47:
 param 0: value = 0x11, mask = 0x12
Propagated bits info for function Can_DeInitControllers/10:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_ValidateHth/8:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_ValidateController/7:
 param 0: value = 0x0, mask = 0x0
 param 2: value = 0x11, mask = 0x12
Propagated bits info for function Can_InitControllers/6:
 param 0: value = 0x0, mask = 0x0
Propagated bits info for function Can_IsControllersBusy/5:
 param 0: value = 0x0, mask = 0x0

IPA constant propagation end

Reclaiming functions: Can_DeInitControllers/10 Can_ValidateHth/8 Can_ValidateController/7 Can_InitControllers/6 Can_IsControllersBusy/5
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Can_IsControllersBusy.constprop.0/52 (Can_IsControllersBusy.constprop) @080ea9a0
  Type: function definition analyzed
  Visibility:
  References: Can_apxConfig/4 (read)Can_eControllerState/2 (read)
  Referring: 
  Clone of Can_IsControllersBusy/5
  Availability: local
  Function flags: count:96446979 (estimated locally) local optimize_size
  Called by: Can_Init/11 (599491536 (estimated locally),0.56 per call) 
  Calls: Det_ASR40_ReportError/27 (37391180 (estimated locally),0.39 per call) 
Can_InitControllers.constprop.0/51 (Can_InitControllers.constprop) @080ea7e0
  Type: function definition analyzed
  Visibility:
  References: Can_apxConfig/4 (read)Can_au16BaudrateIDConfig/0 (write)Can_au8DisableInterruptLevel/1 (write)Can_eControllerState/2 (write)Can_eDriverStatus/3 (write)Can_apxConfig/4 (read)Can_eControllerState/2 (write)
  Referring: 
  Clone of Can_InitControllers/6
  Availability: local
  Function flags: count:61112314 (estimated locally) local optimize_size
  Called by: Can_Init/11 (197832207 (estimated locally),0.18 per call) 
  Calls: Can_Ipw_Init/28 (37391180 (estimated locally),0.61 per call) Det_ASR40_ReportError/27 (2056515 (estimated locally),0.03 per call) 
Can_ValidateController.constprop.0/50 (Can_ValidateController.constprop) @080ea540
  Type: function definition analyzed
  Visibility:
  References: Can_eDriverStatus/3 (read)
  Referring: 
  Clone of Can_ValidateController/7
  Availability: local
  Function flags: count:1073741823 (estimated locally) local optimize_size
  Called by: Can_SetControllerMode/13 (1073741824 (estimated locally),1.00 per call) Can_GetControllerErrorState/16 (1073741824 (estimated locally),1.00 per call) 
  Calls: Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) Can_ValidateController.part.0/47 (237404316 (estimated locally),0.22 per call) 
Can_ValidateHth.constprop.0/49 (Can_ValidateHth.constprop) @080ea380
  Type: function definition analyzed
  Visibility:
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (read)
  Referring: 
  Clone of Can_ValidateHth/8
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Can_Write/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) Det_ASR40_ReportError/27 (478405670 (estimated locally),0.45 per call) 
Can_DeInitControllers.constprop.0/48 (Can_DeInitControllers.constprop) @080ea2a0
  Type: function definition analyzed
  Visibility:
  References: Can_apxConfig/4 (read)Can_eControllerState/2 (write)
  Referring: 
  Clone of Can_DeInitControllers/10
  Availability: local
  Function flags: count:59055799 (estimated locally) local optimize_size
  Called by: Can_DeInit/12 (59055800 (estimated locally),0.31 per call) 
  Calls: Can_Ipw_DeInit/29 (37391180 (estimated locally),0.63 per call) 
Can_ValidateController.part.0/47 (Can_ValidateController.part.0) @08016000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Can_ValidateController.constprop/50 (237404316 (estimated locally),0.22 per call) 
  Calls: Det_ASR40_ReportError/27 (1073741824 (estimated locally),1.00 per call) 
CanIf_ControllerBusOff/46 (CanIf_ControllerBusOff) @07fb97e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessBusOffInterrupt/26 (132623973 (estimated locally),0.12 per call) 
  Calls: 
Can_Ipw_ProcessRxMesgBuffer/45 (Can_Ipw_ProcessRxMesgBuffer) @07fb9540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessMesgBufferCommonInterrupt/25 (131533373 (estimated locally),0.12 per call) Can_ProcessMesgBufferCommonInterrupt/25 (131533373 (estimated locally),0.12 per call) 
  Calls: 
Can_Ipw_ProcessTxMesgBuffer/44 (Can_Ipw_ProcessTxMesgBuffer) @07fb9460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessMesgBufferCommonInterrupt/25 (131533373 (estimated locally),0.12 per call) 
  Calls: 
Can_Ipw_MainFunction_Mode/43 (Can_Ipw_MainFunction_Mode) @07fb92a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_MainFunction_Mode/24 (37391180 (estimated locally),0.44 per call) 
  Calls: 
Can_Ipw_Write/42 (Can_Ipw_Write) @07fa9c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_Write/20 (11091766 (estimated locally),0.01 per call) 
  Calls: 
Can_Ipw_GetControllerTxErrorCounter/41 (Can_Ipw_GetControllerTxErrorCounter) @07fa9a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_GetControllerTxErrorCounter/19 (337401893 (estimated locally),0.31 per call) 
  Calls: 
Can_Ipw_GetControllerRxErrorCounter/40 (Can_Ipw_GetControllerRxErrorCounter) @07fa98c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_GetControllerRxErrorCounter/18 (337401893 (estimated locally),0.31 per call) 
  Calls: 
Can_Ipw_GetControllerErrorState/39 (Can_Ipw_GetControllerErrorState) @07fa9620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_GetControllerErrorState/16 (255550554 (estimated locally),0.24 per call) 
  Calls: 
Can_Ipw_EnableControllerInterrupts/38 (Can_Ipw_EnableControllerInterrupts) @07fa9460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_EnableControllerInterrupts/15 (118702159 (estimated locally),0.11 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01/37 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01) @07fa92a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_EnableControllerInterrupts/15 (359703511 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01/36 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01) @07fa91c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_EnableControllerInterrupts/15 (359703511 (estimated locally),0.33 per call) 
  Calls: 
Can_Ipw_DisableControllerInterrupts/35 (Can_Ipw_DisableControllerInterrupts) @07fa9000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DisableControllerInterrupts/14 (359703511 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00/34 (SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00) @07f9bee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DisableControllerInterrupts/14 (359703511 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00/33 (SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00) @07f9be00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DisableControllerInterrupts/14 (359703511 (estimated locally),0.33 per call) 
  Calls: 
Can_Ipw_SetControllerToStopMode/32 (Can_Ipw_SetControllerToStopMode) @07f9ba80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ProcessBusOffInterrupt/26 (401890828 (estimated locally),0.37 per call) Can_SetControllerMode/13 (30419643 (estimated locally),0.03 per call) 
  Calls: 
CanIf_ControllerModeIndication/31 (CanIf_ControllerModeIndication) @07f9b9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_SetControllerMode/13 (37419903 (estimated locally),0.03 per call) Can_SetControllerMode/13 (30419643 (estimated locally),0.03 per call) Can_SetControllerMode/13 (10038482 (estimated locally),0.01 per call) Can_SetControllerMode/13 (10240276 (estimated locally),0.01 per call) 
  Calls: 
Can_Ipw_SetControllerToStartMode/30 (Can_Ipw_SetControllerToStartMode) @07f9b8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_SetControllerMode/13 (31031139 (estimated locally),0.03 per call) 
  Calls: 
Can_Ipw_DeInit/29 (Can_Ipw_DeInit) @07f9b620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_DeInitControllers.constprop/48 (37391180 (estimated locally),0.63 per call) 
  Calls: 
Can_Ipw_Init/28 (Can_Ipw_Init) @07f9b2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_InitControllers.constprop/51 (37391180 (estimated locally),0.61 per call) 
  Calls: 
Det_ASR40_ReportError/27 (Det_ASR40_ReportError) @07f9b000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_IsControllersBusy.constprop/52 (37391180 (estimated locally),0.39 per call) Can_InitControllers.constprop/51 (2056515 (estimated locally),0.03 per call) Can_ValidateController.constprop/50 (354334802 (estimated locally),0.33 per call) Can_ValidateHth.constprop/49 (354334802 (estimated locally),0.33 per call) Can_ValidateHth.constprop/49 (478405670 (estimated locally),0.45 per call) Can_Write/20 (63632088 (estimated locally),0.06 per call) Can_GetControllerTxErrorCounter/19 (144600811 (estimated locally),0.13 per call) Can_GetControllerTxErrorCounter/19 (237404317 (estimated locally),0.22 per call) Can_GetControllerTxErrorCounter/19 (354334802 (estimated locally),0.33 per call) Can_GetControllerRxErrorCounter/18 (144600811 (estimated locally),0.13 per call) Can_GetControllerRxErrorCounter/18 (237404317 (estimated locally),0.22 per call) Can_GetControllerRxErrorCounter/18 (354334802 (estimated locally),0.33 per call) Can_GetControllerMode/17 (84013071 (estimated locally),0.08 per call) Can_GetControllerMode/17 (237404317 (estimated locally),0.22 per call) Can_GetControllerMode/17 (354334802 (estimated locally),0.33 per call) Can_GetControllerErrorState/16 (109521666 (estimated locally),0.10 per call) Can_EnableControllerInterrupts/15 (359703511 (estimated locally),0.33 per call) Can_EnableControllerInterrupts/15 (354334802 (estimated locally),0.33 per call) Can_DisableControllerInterrupts/14 (359703511 (estimated locally),0.33 per call) Can_DisableControllerInterrupts/14 (354334802 (estimated locally),0.33 per call) Can_SetControllerMode/13 (91268055 (estimated locally),0.08 per call) Can_SetControllerMode/13 (53848152 (estimated locally),0.05 per call) Can_SetControllerMode/13 (60236916 (estimated locally),0.06 per call) Can_DeInit/12 (37391180 (estimated locally),0.20 per call) Can_DeInit/12 (92220821 (estimated locally),0.49 per call) Can_Init/11 (256924943 (estimated locally),0.24 per call) Can_Init/11 (217325345 (estimated locally),0.20 per call) Can_ValidatePdu/9 (48632451 (estimated locally),0.05 per call) Can_ValidatePdu/9 (582504940 (estimated locally),0.54 per call) Can_ValidateController.part.0/47 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_ProcessBusOffInterrupt/26 (Can_ProcessBusOffInterrupt) @07f91e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/4 (read)Can_eControllerState/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_ControllerBusOff/46 (132623973 (estimated locally),0.12 per call) Can_Ipw_SetControllerToStopMode/32 (401890828 (estimated locally),0.37 per call) 
Can_ProcessMesgBufferCommonInterrupt/25 (Can_ProcessMesgBufferCommonInterrupt) @07f91c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_ProcessRxMesgBuffer/45 (131533373 (estimated locally),0.12 per call) Can_Ipw_ProcessRxMesgBuffer/45 (131533373 (estimated locally),0.12 per call) Can_Ipw_ProcessTxMesgBuffer/44 (131533373 (estimated locally),0.12 per call) 
Can_MainFunction_Mode/24 (Can_MainFunction_Mode) @07f91a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/4 (read)Can_apxConfig/4 (read)Can_eControllerState/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:84365427 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_MainFunction_Mode/43 (37391180 (estimated locally),0.44 per call) 
Can_MainFunction_BusOff/23 (Can_MainFunction_BusOff) @07f918c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Can_MainFunction_Write/21 (1073741824 (estimated locally),1.00 per call) 
Can_MainFunction_Read/22 (Can_MainFunction_Read) @07f91700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Can_MainFunction_Write/21 (1073741824 (estimated locally),1.00 per call) 
Can_MainFunction_Write/21 (Can_MainFunction_Write) @07f91540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Can_MainFunction_BusOff/23 (1073741824 (estimated locally),1.00 per call) Can_MainFunction_Read/22 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Can_Write/20 (Can_Write) @07f91380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/4 (read)Can_eControllerState/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_Write/42 (11091766 (estimated locally),0.01 per call) Can_ValidatePdu/9 (161180039 (estimated locally),0.15 per call) Det_ASR40_ReportError/27 (63632088 (estimated locally),0.06 per call) Can_ValidateHth.constprop/49 (1073741824 (estimated locally),1.00 per call) 
Can_GetControllerTxErrorCounter/19 (Can_GetControllerTxErrorCounter) @07f911c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_GetControllerTxErrorCounter/41 (337401893 (estimated locally),0.31 per call) Det_ASR40_ReportError/27 (144600811 (estimated locally),0.13 per call) Det_ASR40_ReportError/27 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) 
Can_GetControllerRxErrorCounter/18 (Can_GetControllerRxErrorCounter) @07f91000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_GetControllerRxErrorCounter/40 (337401893 (estimated locally),0.31 per call) Det_ASR40_ReportError/27 (144600811 (estimated locally),0.13 per call) Det_ASR40_ReportError/27 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) 
Can_GetControllerMode/17 (Can_GetControllerMode) @07f84e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_eControllerState/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/27 (84013071 (estimated locally),0.08 per call) Det_ASR40_ReportError/27 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) 
Can_GetControllerErrorState/16 (Can_GetControllerErrorState) @07f84c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_GetControllerErrorState/39 (255550554 (estimated locally),0.24 per call) Det_ASR40_ReportError/27 (109521666 (estimated locally),0.10 per call) Can_ValidateController.constprop/50 (1073741824 (estimated locally),1.00 per call) 
Can_EnableControllerInterrupts/15 (Can_EnableControllerInterrupts) @07f84a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (read)Can_au8DisableInterruptLevel/1 (read)Can_au8DisableInterruptLevel/1 (write)Can_au8DisableInterruptLevel/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_EnableControllerInterrupts/38 (118702159 (estimated locally),0.11 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01/37 (359703511 (estimated locally),0.33 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01/36 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/27 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) 
Can_DisableControllerInterrupts/14 (Can_DisableControllerInterrupts) @07f848c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (read)Can_au8DisableInterruptLevel/1 (read)Can_au8DisableInterruptLevel/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_Ipw_DisableControllerInterrupts/35 (359703511 (estimated locally),0.33 per call) SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00/34 (359703511 (estimated locally),0.33 per call) SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00/33 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/27 (359703511 (estimated locally),0.33 per call) Det_ASR40_ReportError/27 (354334802 (estimated locally),0.33 per call) 
Can_SetControllerMode/13 (Can_SetControllerMode) @07f84700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_apxConfig/4 (read)Can_eControllerState/2 (read)Can_eControllerState/2 (write)Can_eControllerState/2 (read)Can_eControllerState/2 (write)Can_eControllerState/2 (write)Can_eControllerState/2 (read)Can_eControllerState/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/27 (91268055 (estimated locally),0.08 per call) Det_ASR40_ReportError/27 (53848152 (estimated locally),0.05 per call) CanIf_ControllerModeIndication/31 (37419903 (estimated locally),0.03 per call) CanIf_ControllerModeIndication/31 (30419643 (estimated locally),0.03 per call) CanIf_ControllerModeIndication/31 (10038482 (estimated locally),0.01 per call) Can_Ipw_SetControllerToStopMode/32 (30419643 (estimated locally),0.03 per call) Det_ASR40_ReportError/27 (60236916 (estimated locally),0.06 per call) CanIf_ControllerModeIndication/31 (10240276 (estimated locally),0.01 per call) Can_Ipw_SetControllerToStartMode/30 (31031139 (estimated locally),0.03 per call) Can_ValidateController.constprop/50 (1073741824 (estimated locally),1.00 per call) 
Can_DeInit/12 (Can_DeInit) @07f84540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (read)Can_eControllerState/2 (read)Can_eDriverStatus/3 (write)Can_apxConfig/4 (write)
  Referring: 
  Availability: available
  Function flags: count:188667800 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_DeInitControllers.constprop/48 (59055800 (estimated locally),0.31 per call) Det_ASR40_ReportError/27 (37391180 (estimated locally),0.20 per call) Det_ASR40_ReportError/27 (92220821 (estimated locally),0.49 per call) 
Can_Init/11 (Can_Init) @07f84380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_eDriverStatus/3 (read)Can_apxConfig/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_InitControllers.constprop/51 (197832207 (estimated locally),0.18 per call) Can_IsControllersBusy.constprop/52 (599491536 (estimated locally),0.56 per call) Det_ASR40_ReportError/27 (256924943 (estimated locally),0.24 per call) Det_ASR40_ReportError/27 (217325345 (estimated locally),0.20 per call) 
Can_DeInitControllers/10 (Can_DeInitControllers) @07f841c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:59055799 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_ValidatePdu/9 (Can_ValidatePdu) @07f84000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Can_au16BaudrateIDConfig/0 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Can_Write/20 (161180039 (estimated locally),0.15 per call) 
  Calls: Det_ASR40_ReportError/27 (48632451 (estimated locally),0.05 per call) Det_ASR40_ReportError/27 (582504940 (estimated locally),0.54 per call) 
Can_ValidateHth/8 (Can_ValidateHth) @07f75e00
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_ValidateController/7 (Can_ValidateController) @07f75c40
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_InitControllers/6 (Can_InitControllers) @07f75a80
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:61112314 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_IsControllersBusy/5 (Can_IsControllersBusy) @07f758c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:96446979 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_apxConfig/4 (Can_apxConfig) @07f28d38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_InitControllers.constprop.0/51 (read)Can_MainFunction_Mode/24 (read)Can_Write/20 (read)Can_MainFunction_Mode/24 (read)Can_DeInitControllers.constprop.0/48 (read)Can_ValidateHth.constprop.0/49 (read)Can_IsControllersBusy.constprop.0/52 (read)Can_DeInit/12 (read)Can_InitControllers.constprop.0/51 (read)Can_Init/11 (write)Can_DeInit/12 (write)Can_SetControllerMode/13 (read)Can_DisableControllerInterrupts/14 (read)Can_EnableControllerInterrupts/15 (read)Can_GetControllerErrorState/16 (read)Can_ProcessMesgBufferCommonInterrupt/25 (read)Can_GetControllerTxErrorCounter/19 (read)Can_GetControllerRxErrorCounter/18 (read)Can_ProcessBusOffInterrupt/26 (read)
  Availability: available
  Varpool flags:
Can_eDriverStatus/3 (Can_eDriverStatus) @07f28cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_InitControllers.constprop.0/51 (write)Can_ValidateController.constprop.0/50 (read)Can_GetControllerMode/17 (read)Can_ValidateHth.constprop.0/49 (read)Can_GetControllerRxErrorCounter/18 (read)Can_Init/11 (read)Can_DeInit/12 (write)Can_DisableControllerInterrupts/14 (read)Can_EnableControllerInterrupts/15 (read)Can_DeInit/12 (read)Can_GetControllerTxErrorCounter/19 (read)
  Availability: available
  Varpool flags:
Can_eControllerState/2 (Can_eControllerState) @07f28ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_Write/20 (read)Can_GetControllerMode/17 (read)Can_MainFunction_Mode/24 (addr)Can_InitControllers.constprop.0/51 (write)Can_DeInitControllers.constprop.0/48 (write)Can_SetControllerMode/13 (write)Can_InitControllers.constprop.0/51 (write)Can_IsControllersBusy.constprop.0/52 (read)Can_DeInit/12 (read)Can_SetControllerMode/13 (read)Can_SetControllerMode/13 (write)Can_SetControllerMode/13 (read)Can_SetControllerMode/13 (write)Can_SetControllerMode/13 (write)Can_SetControllerMode/13 (read)Can_ProcessBusOffInterrupt/26 (write)
  Availability: available
  Varpool flags:
Can_au8DisableInterruptLevel/1 (Can_au8DisableInterruptLevel) @07f28c60
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_InitControllers.constprop.0/51 (write)Can_DisableControllerInterrupts/14 (read)Can_DisableControllerInterrupts/14 (write)Can_EnableControllerInterrupts/15 (read)Can_EnableControllerInterrupts/15 (write)Can_EnableControllerInterrupts/15 (read)
  Availability: available
  Varpool flags:
Can_au16BaudrateIDConfig/0 (Can_au16BaudrateIDConfig) @07f28c18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Can_ValidatePdu/9 (read)Can_InitControllers.constprop.0/51 (write)
  Availability: available
  Varpool flags:

;; Function Can_ValidateController.constprop (Can_ValidateController.constprop.0, funcdef_no=29, decl_uid=12717, cgraph_uid=46, symbol_order=50)

Modification phase of node Can_ValidateController.constprop/50
Adjusting mask for param 2 to 0x12
Setting value range of param 2 [3, 17]
Can_ValidateController.constprop (uint8 u8ControllerID, uint8 u8Sid)
{
  boolean bResult;
  uint32 u32CoreId;
  <unnamed type> _1;

  <bb 7> [local count: 1073741823]:
  # DEBUG u32CoreId => 0

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG bResult => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, u8Sid_2(D), 5);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (u8ControllerID_3(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404316]:
  # DEBUG D#1 => 0
  # DEBUG D#2 => u8ControllerID_3(D)
  bResult_4 = Can_ValidateController.part.0 (u8Sid_2(D));

  <bb 6> [local count: 1073741824]:
  # bResult_5 = PHI <0(3), 1(4), bResult_4(5)>
  # DEBUG bResult => bResult_5
  # DEBUG BEGIN_STMT
  return bResult_5;

}



;; Function Can_Init (Can_Init, funcdef_no=6, decl_uid=11751, cgraph_uid=7, symbol_order=11)

Modification phase of node Can_Init/11
Can_Init (const struct Can_ConfigType * Config)
{
  boolean bCtrlBusy;
  <unnamed type> _1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG bCtrlBusy => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 1)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 0, 6);
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  if (Config_4(D) == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 5> [local count: 256924943]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 0, 9);
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 599491536]:
  # DEBUG BEGIN_STMT
  Can_apxConfig[0] = Config_4(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  bCtrlBusy_7 = Can_IsControllersBusy (0);
  # DEBUG bCtrlBusy => bCtrlBusy_7
  # DEBUG BEGIN_STMT
  if (bCtrlBusy_7 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 197832207]:
  # DEBUG BEGIN_STMT
  Can_InitControllers (0);

  <bb 8> [local count: 1073741824]:
  return;

}



;; Function Can_DeInit (Can_DeInit, funcdef_no=7, decl_uid=11753, cgraph_uid=8, symbol_order=12)

Modification phase of node Can_DeInit/12
Can_DeInit ()
{
  uint8 u8ControllerID;
  <unnamed type> _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _5;
  const struct Can_ControllerConfigType * _6;
  <unnamed type> _7;

  <bb 2> [local count: 188667800]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG bCtrlBusy => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 11>; [51.12%]

  <bb 3> [local count: 92220821]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 16, 6);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _5 = _3;
  _6 = *_5;
  if (_6 != 0B)
    goto <bb 5>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 334846387]:
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 679839636]:
  # DEBUG BEGIN_STMT
  _7 = Can_eControllerState[0];
  if (_7 == 1)
    goto <bb 6>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 12> [local count: 642448456]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 37391180]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 16, 6);
  # DEBUG BEGIN_STMT
  # DEBUG bCtrlBusy => 1
  # DEBUG BEGIN_STMT
  # DEBUG bCtrlBusy => 1
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 96446979]:

  <bb 7> [local count: 738895436]:
  # u8ControllerID_4 = PHI <0(11), 1(12)>

  <bb 8> [local count: 1073741824]:
  # u8ControllerID_8 = PHI <u8ControllerID_4(7), 1(13)>
  # DEBUG u8ControllerID => u8ControllerID_8
  # DEBUG BEGIN_STMT
  if (u8ControllerID_8 == 0)
    goto <bb 4>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 9> [local count: 59055800]:
  # DEBUG bCtrlBusy => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Can_eDriverStatus[0] = 0;
  # DEBUG BEGIN_STMT
  Can_DeInitControllers (0);
  # DEBUG BEGIN_STMT
  Can_apxConfig[0] = 0B;

  <bb 10> [local count: 188667801]:
  return;

}



;; Function Can_SetControllerMode (Can_SetControllerMode, funcdef_no=8, decl_uid=11756, cgraph_uid=9, symbol_order=13)

Modification phase of node Can_SetControllerMode/13
Can_SetControllerMode (uint8 Controller, Can_ControllerStateType Transition)
{
  const struct Can_ControllerConfigType * Can_pController;
  Std_ReturnType eRetVal;
  unsigned char _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  unsigned int _4;
  unsigned int _5;
  const struct Can_ControllerConfigType * const * _6;
  int _7;
  <unnamed type> _8;
  unsigned char _9;
  unsigned char _10;
  int _11;
  <unnamed type> _12;
  unsigned char _13;
  unsigned char _14;
  unsigned char _15;
  int _16;
  <unnamed type> _17;
  unsigned char _18;
  unsigned int _26;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_ValidateController (0, Controller_22(D), 3);
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _4 = (unsigned int) Controller_22(D);
  _5 = _4 * 4;
  _6 = _3 + _5;
  Can_pController_24 = *_6;
  # DEBUG Can_pController => Can_pController_24
  # DEBUG BEGIN_STMT
  switch (Transition_25(D)) <default: <L20> [25.00%], case 1: <L1> [25.00%], case 2: <L7> [25.00%], case 3: <L15> [25.00%]>

  <bb 4> [local count: 91268055]:
<L1>:
  # DEBUG BEGIN_STMT
  _7 = (int) Controller_22(D);
  _8 = Can_eControllerState[_7];
  if (_8 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 31031139]:
  # DEBUG BEGIN_STMT
  _9 = Can_Ipw_SetControllerToStartMode (Can_pController_24);
  if (_9 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 6> [local count: 10240276]:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_7] = 1;
  # DEBUG BEGIN_STMT
  _10 = Can_pController_24->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_10, 1);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  goto <bb 16>; [100.00%]

  <bb 7> [local count: 60236916]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 3, 6);
  goto <bb 16>; [100.00%]

  <bb 8> [local count: 91268055]:
<L7>:
  # DEBUG BEGIN_STMT
  _11 = (int) Controller_22(D);
  _12 = Can_eControllerState[_11];
  switch (_12) <default: <L25> [33.33%], case 1: <L8> [33.33%], case 2 ... 3: <L11> [33.33%]>

  <bb 9> [local count: 30419643]:
<L8>:
  # DEBUG BEGIN_STMT
  _13 = Can_Ipw_SetControllerToStopMode (Can_pController_24);
  if (_13 == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 16>; [67.00%]

  <bb 10> [local count: 10038482]:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_11] = 2;
  # DEBUG BEGIN_STMT
  _14 = Can_pController_24->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_14, 2);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 30419643]:
<L11>:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_11] = 2;
  # DEBUG BEGIN_STMT
  _15 = Can_pController_24->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_15, 2);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 12> [local count: 91268055]:
<L15>:
  # DEBUG BEGIN_STMT
  _16 = (int) Controller_22(D);
  _17 = Can_eControllerState[_16];
  _26 = _17 + 4294967294;
  if (_26 <= 1)
    goto <bb 13>; [41.00%]
  else
    goto <bb 14>; [59.00%]

  <bb 13> [local count: 37419903]:
<L16>:
  # DEBUG BEGIN_STMT
  Can_eControllerState[_16] = 3;
  # DEBUG BEGIN_STMT
  _18 = Can_pController_24->Can_u8AbstControllerID;
  CanIf_ControllerModeIndication (_18, 3);
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 53848152]:
<L18>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 3, 6);
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 15> [local count: 91268055]:
<L20>:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 3, 6);
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 1073732699]:
  # eRetVal_19 = PHI <1(2), 1(7), 0(11), 1(14), 1(15), 0(6), 1(5), 0(10), 1(9), 1(8), 0(13)>
<L25>:
  # DEBUG eRetVal => eRetVal_19
  # DEBUG BEGIN_STMT
  return eRetVal_19;

}



;; Function Can_DisableControllerInterrupts (Can_DisableControllerInterrupts, funcdef_no=9, decl_uid=11758, cgraph_uid=10, symbol_order=14)

Modification phase of node Can_DisableControllerInterrupts/14
Can_DisableControllerInterrupts (uint8 Controller)
{
  const struct Can_ControllerConfigType * Can_pController;
  <unnamed type> _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 4, 5);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Controller_9(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 4, 4);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _4 = _3;
  Can_pController_10 = *_4;
  # DEBUG Can_pController => Can_pController_10
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _5 = Can_au8DisableInterruptLevel[0];
  _6 = _5 + 1;
  Can_au8DisableInterruptLevel[0] = _6;
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  Can_Ipw_DisableControllerInterrupts (Can_pController_10);

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Can_EnableControllerInterrupts (Can_EnableControllerInterrupts, funcdef_no=10, decl_uid=11760, cgraph_uid=11, symbol_order=15)

Modification phase of node Can_EnableControllerInterrupts/15
Can_EnableControllerInterrupts (uint8 Controller)
{
  const struct Can_ControllerConfigType * Can_pController;
  <unnamed type> _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 5, 5);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Controller_11(D) != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 5, 4);
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _4 = _3;
  Can_pController_12 = *_4;
  # DEBUG Can_pController => Can_pController_12
  # DEBUG BEGIN_STMT
  SchM_Enter_Can_CAN_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  _5 = Can_au8DisableInterruptLevel[0];
  if (_5 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 179851756]:
  # DEBUG BEGIN_STMT
  _6 = _5 + 255;
  Can_au8DisableInterruptLevel[0] = _6;

  <bb 8> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Can_CAN_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  _7 = Can_au8DisableInterruptLevel[0];
  if (_7 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 118702159]:
  # DEBUG BEGIN_STMT
  Can_Ipw_EnableControllerInterrupts (Can_pController_12);

  <bb 10> [local count: 1073741824]:
  return;

}



;; Function Can_GetControllerErrorState (Can_GetControllerErrorState, funcdef_no=11, decl_uid=11763, cgraph_uid=12, symbol_order=16)

Modification phase of node Can_GetControllerErrorState/16
Can_GetControllerErrorState (uint8 ControllerId, Can_ErrorStateType * ErrorStatePtr)
{
  const struct Can_ControllerConfigType * Can_pController;
  Std_ReturnType eRetVal;
  unsigned char _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  unsigned int _4;
  unsigned int _5;
  const struct Can_ControllerConfigType * const * _6;
  unsigned char _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_ValidateController (0, ControllerId_11(D), 17);
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  if (ErrorStatePtr_13(D) == 0B)
    goto <bb 4>; [30.00%]
  else
    goto <bb 5>; [70.00%]

  <bb 4> [local count: 109521666]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 17, 1);
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _4 = (unsigned int) ControllerId_11(D);
  _5 = _4 * 4;
  _6 = _3 + _5;
  Can_pController_14 = *_6;
  # DEBUG Can_pController => Can_pController_14
  # DEBUG BEGIN_STMT
  _7 = Can_Ipw_GetControllerErrorState (Can_pController_14);
  switch (_7) <default: <L5> [33.33%], case 0: <L3> [33.33%], case 1: <L4> [33.33%]>

  <bb 6> [local count: 85175000]:
<L3>:
  # DEBUG BEGIN_STMT
  *ErrorStatePtr_13(D) = 0;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 85175000]:
<L4>:
  # DEBUG BEGIN_STMT
  *ErrorStatePtr_13(D) = 1;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 85175000]:
<L5>:
  # DEBUG BEGIN_STMT
  *ErrorStatePtr_13(D) = 2;
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073716271]:
  # eRetVal_8 = PHI <1(2), 1(4), 0(7), 0(6), 0(8)>
  # DEBUG eRetVal => eRetVal_8
  # DEBUG BEGIN_STMT
  return eRetVal_8;

}



;; Function Can_GetControllerMode (Can_GetControllerMode, funcdef_no=12, decl_uid=11766, cgraph_uid=13, symbol_order=17)

Modification phase of node Can_GetControllerMode/17
Can_GetControllerMode (uint8 Controller, Can_ControllerStateType * ControllerModePtr)
{
  Std_ReturnType eRetVal;
  <unnamed type> _1;
  <unnamed type> _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 18, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (Controller_6(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 18, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (ControllerModePtr_7(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 84013071]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 18, 1);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 397989633]:
  # DEBUG BEGIN_STMT
  _2 = Can_eControllerState[0];
  *ControllerModePtr_7(D) = _2;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0

  <bb 9> [local count: 1073741824]:
  # eRetVal_3 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG eRetVal => eRetVal_3
  # DEBUG BEGIN_STMT
  return eRetVal_3;

}



;; Function Can_GetControllerRxErrorCounter (Can_GetControllerRxErrorCounter, funcdef_no=13, decl_uid=11769, cgraph_uid=14, symbol_order=18)

Modification phase of node Can_GetControllerRxErrorCounter/18
Can_GetControllerRxErrorCounter (uint8 ControllerId, uint8 * RxErrorCounterPtr)
{
  const struct Can_ControllerConfigType * Can_pController;
  Std_ReturnType eRetVal;
  <unnamed type> _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 48, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (ControllerId_9(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 48, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (RxErrorCounterPtr_10(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 144600811]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 48, 1);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 337401893]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _4 = _3;
  Can_pController_11 = *_4;
  # DEBUG Can_pController => Can_pController_11
  # DEBUG BEGIN_STMT
  _5 = Can_Ipw_GetControllerRxErrorCounter (Can_pController_11);
  *RxErrorCounterPtr_10(D) = _5;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0

  <bb 9> [local count: 1073741824]:
  # eRetVal_6 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG eRetVal => eRetVal_6
  # DEBUG BEGIN_STMT
  return eRetVal_6;

}



;; Function Can_GetControllerTxErrorCounter (Can_GetControllerTxErrorCounter, funcdef_no=14, decl_uid=11772, cgraph_uid=15, symbol_order=19)

Modification phase of node Can_GetControllerTxErrorCounter/19
Can_GetControllerTxErrorCounter (uint8 ControllerId, uint8 * TxErrorCounterPtr)
{
  const struct Can_ControllerConfigType * Can_pController;
  Std_ReturnType eRetVal;
  <unnamed type> _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_eDriverStatus[0];
  if (_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 49, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (ControllerId_9(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 49, 4);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 482002705]:
  # DEBUG BEGIN_STMT
  if (TxErrorCounterPtr_10(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 144600811]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 49, 1);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 337401893]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _4 = _3;
  Can_pController_11 = *_4;
  # DEBUG Can_pController => Can_pController_11
  # DEBUG BEGIN_STMT
  _5 = Can_Ipw_GetControllerTxErrorCounter (Can_pController_11);
  *TxErrorCounterPtr_10(D) = _5;
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 0

  <bb 9> [local count: 1073741824]:
  # eRetVal_6 = PHI <1(3), 1(5), 1(7), 0(8)>
  # DEBUG eRetVal => eRetVal_6
  # DEBUG BEGIN_STMT
  return eRetVal_6;

}



;; Function Can_Write (Can_Write, funcdef_no=15, decl_uid=11775, cgraph_uid=16, symbol_order=20)

Modification phase of node Can_Write/20
Can_Write (Can_HwHandleType Hth, const struct Can_PduType * PduInfo)
{
  const struct Can_HwObjectConfigType * Can_pHwObject;
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  Std_ReturnType eRetVal;
  unsigned char _1;
  const struct Can_ConfigType * _2;
  const uint8 * _3;
  sizetype _4;
  const uint8 * _5;
  const struct Can_ControllerConfigType * const * _6;
  unsigned int _7;
  unsigned int _8;
  const struct Can_ControllerConfigType * const * _9;
  const struct Can_HwObjectConfigType * _10;
  unsigned int _11;
  unsigned char _12;
  int _13;
  <unnamed type> _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG eRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG Can_pHwObject => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_ValidateHth (0, Hth_18(D));
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  if (PduInfo_20(D) == 0B)
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 63632088]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (80, 0, 6, 1);
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 301440132]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_pHwObjIDToCtrlIDMap;
  _4 = (sizetype) Hth_18(D);
  _5 = _3 + _4;
  u8ControllerID_21 = *_5;
  # DEBUG u8ControllerID => u8ControllerID_21
  # DEBUG BEGIN_STMT
  _6 = _2->Can_ppController;
  _7 = (unsigned int) u8ControllerID_21;
  _8 = _7 * 4;
  _9 = _6 + _8;
  Can_pController_22 = *_9;
  # DEBUG Can_pController => Can_pController_22
  # DEBUG BEGIN_STMT
  if (Can_pController_22 != 0B)
    goto <bb 6>; [53.47%]
  else
    goto <bb 9>; [46.53%]

  <bb 6> [local count: 161180039]:
  # DEBUG BEGIN_STMT
  _10 = _2->Can_pHwObjectConfig;
  _11 = _4 * 36;
  Can_pHwObject_23 = _10 + _11;
  # DEBUG Can_pHwObject => Can_pHwObject_23
  # DEBUG BEGIN_STMT
  _12 = Can_ValidatePdu (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  if (_12 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 54801213]:
  _13 = (int) u8ControllerID_21;
  _14 = Can_eControllerState[_13];
  if (_14 == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 11091766]:
  # DEBUG BEGIN_STMT
  eRetVal_26 = Can_Ipw_Write (Can_pController_22, Can_pHwObject_23, PduInfo_20(D));
  # DEBUG eRetVal => eRetVal_26

  <bb 9> [local count: 1073741824]:
  # eRetVal_15 = PHI <1(2), 1(4), 1(5), 1(6), 1(7), eRetVal_26(8)>
  # DEBUG eRetVal => eRetVal_15
  # DEBUG BEGIN_STMT
  return eRetVal_15;

}



;; Function Can_MainFunction_Write (Can_MainFunction_Write, funcdef_no=16, decl_uid=12448, cgraph_uid=17, symbol_order=21)

Modification phase of node Can_MainFunction_Write/21
Can_MainFunction_Write ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Can_MainFunction_Read (Can_MainFunction_Read, funcdef_no=24, decl_uid=12451, cgraph_uid=18, symbol_order=22)

Modification phase of node Can_MainFunction_Read/22
Can_MainFunction_Read ()
{
  <bb 2> [local count: 1073741824]:
  Can_MainFunction_Write (); [tail call]
  return;

}



;; Function Can_MainFunction_BusOff (Can_MainFunction_BusOff, funcdef_no=26, decl_uid=12454, cgraph_uid=19, symbol_order=23)

Modification phase of node Can_MainFunction_BusOff/23
Can_MainFunction_BusOff ()
{
  <bb 2> [local count: 1073741824]:
  Can_MainFunction_Write (); [tail call]
  return;

}



;; Function Can_MainFunction_Mode (Can_MainFunction_Mode, funcdef_no=19, decl_uid=12031, cgraph_uid=20, symbol_order=24)

Modification phase of node Can_MainFunction_Mode/24
Can_MainFunction_Mode ()
{
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const struct Can_ConfigType * _2;
  const struct Can_ControllerConfigType * const * _3;
  const struct Can_ControllerConfigType * const * _6;
  unsigned char _7;

  <bb 2> [local count: 84365427]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  if (_1 != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 11> [local count: 59055799]:
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _2 = Can_apxConfig[0];
  _3 = _2->Can_ppController;
  _6 = _3;
  Can_pController_14 = *_6;
  # DEBUG Can_pController => Can_pController_14
  # DEBUG BEGIN_STMT
  if (Can_pController_14 != 0B)
    goto <bb 4>; [67.00%]
  else
    goto <bb 13>; [33.00%]

  <bb 13> [local count: 334846388]:
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 679839636]:
  # DEBUG BEGIN_STMT
  _7 = Can_pController_14->Can_bActivation;
  if (_7 == 1)
    goto <bb 5>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 12> [local count: 642448455]:
  goto <bb 10>; [100.00%]

  <bb 5> [local count: 37391180]:
  # DEBUG BEGIN_STMT
  Can_Ipw_MainFunction_Mode (Can_pController_14, &MEM[(void *)&Can_eControllerState]);

  <bb 7> [local count: 96446979]:
  # u8ControllerID_5 = PHI <1(5), 0(11)>

  <bb 10> [local count: 738895436]:
  # u8ControllerID_10 = PHI <u8ControllerID_5(7), 1(12)>

  <bb 9> [local count: 1073741824]:
  # u8ControllerID_9 = PHI <u8ControllerID_10(10), 1(13)>
  # DEBUG u8ControllerID => u8ControllerID_9
  # DEBUG BEGIN_STMT
  if (u8ControllerID_9 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 8>; [5.50%]

  <bb 8> [local count: 84365429]:
  return;

}



;; Function Can_ProcessMesgBufferCommonInterrupt (Can_ProcessMesgBufferCommonInterrupt, funcdef_no=20, decl_uid=12045, cgraph_uid=21, symbol_order=25)

Modification phase of node Can_ProcessMesgBufferCommonInterrupt/25
Can_ProcessMesgBufferCommonInterrupt (uint8 u8CtrlOffset, uint8 u8MbIdx, Can_MbType mbType)
{
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const uint8 * _2;
  sizetype _3;
  const uint8 * _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned int _6;
  unsigned int _7;
  const struct Can_ControllerConfigType * const * _8;
  const struct Can_HwObjectConfigType * _9;
  const struct Can_HwObjectConfigType * _10;
  const struct Can_HwObjectConfigType * _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  if (_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 = _1->Can_pCtrlOffsetToCtrlIDMap;
  _3 = (sizetype) u8CtrlOffset_14(D);
  _4 = _2 + _3;
  u8ControllerID_15 = *_4;
  # DEBUG u8ControllerID => u8ControllerID_15
  # DEBUG BEGIN_STMT
  _5 = _1->Can_ppController;
  _6 = (unsigned int) u8ControllerID_15;
  _7 = _6 * 4;
  _8 = _5 + _7;
  Can_pController_16 = *_8;
  # DEBUG Can_pController => Can_pController_16
  # DEBUG BEGIN_STMT
  if (Can_pController_16 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 4> [local count: 526133494]:
  # DEBUG BEGIN_STMT
  switch (mbType_17(D)) <default: <L9> [25.00%], case 0: <L3> [25.00%], case 1: <L4> [25.00%], case 3: <L2> [25.00%]>

  <bb 5> [local count: 131533373]:
<L2>:
  # DEBUG BEGIN_STMT
  _9 = _1->Can_pHwObjectConfig;
  Can_Ipw_ProcessTxMesgBuffer (Can_pController_16, _9, u8MbIdx_18(D));
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 131533373]:
<L3>:
  # DEBUG BEGIN_STMT
  _10 = _1->Can_pHwObjectConfig;
  Can_Ipw_ProcessRxMesgBuffer (Can_pController_16, _10, u8MbIdx_18(D));
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 131533373]:
<L4>:
  # DEBUG BEGIN_STMT
  _11 = _1->Can_pHwObjectConfig;
  Can_Ipw_ProcessRxMesgBuffer (Can_pController_16, _11, u8MbIdx_18(D));
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741823]:
<L9>:
  return;

}



;; Function Can_ProcessBusOffInterrupt (Can_ProcessBusOffInterrupt, funcdef_no=21, decl_uid=12047, cgraph_uid=22, symbol_order=26)

Modification phase of node Can_ProcessBusOffInterrupt/26
Can_ProcessBusOffInterrupt (uint8 u8CtrlOffset)
{
  const struct Can_ControllerConfigType * Can_pController;
  uint8 u8ControllerID;
  const struct Can_ConfigType * _1;
  const uint8 * _2;
  sizetype _3;
  const uint8 * _4;
  const struct Can_ControllerConfigType * const * _5;
  unsigned int _6;
  unsigned int _7;
  const struct Can_ControllerConfigType * const * _8;
  unsigned char _9;
  int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG u8ControllerID => 0
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG Can_pController => 0B
  # DEBUG BEGIN_STMT
  # DEBUG u32CoreId => 0
  # DEBUG BEGIN_STMT
  _1 = Can_apxConfig[0];
  if (_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 = _1->Can_pCtrlOffsetToCtrlIDMap;
  _3 = (sizetype) u8CtrlOffset_14(D);
  _4 = _2 + _3;
  u8ControllerID_15 = *_4;
  # DEBUG u8ControllerID => u8ControllerID_15
  # DEBUG BEGIN_STMT
  _5 = _1->Can_ppController;
  _6 = (unsigned int) u8ControllerID_15;
  _7 = _6 * 4;
  _8 = _5 + _7;
  Can_pController_16 = *_8;
  # DEBUG Can_pController => Can_pController_16
  # DEBUG BEGIN_STMT
  if (Can_pController_16 != 0B)
    goto <bb 4>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 4> [local count: 401890828]:
  # DEBUG BEGIN_STMT
  _9 = Can_Ipw_SetControllerToStopMode (Can_pController_16);
  if (_9 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 132623973]:
  # DEBUG BEGIN_STMT
  _10 = (int) u8ControllerID_15;
  Can_eControllerState[_10] = 2;
  # DEBUG BEGIN_STMT
  _11 = Can_pController_16->Can_u8AbstControllerID;
  CanIf_ControllerBusOff (_11);

  <bb 6> [local count: 1073741824]:
  return;

}


