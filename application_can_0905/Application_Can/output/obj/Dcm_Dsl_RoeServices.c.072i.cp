
IPA constant propagation start:
Determining dynamic type for call: RetVal_10 = Dcm_Dsl_RoeServices_RoeEventDispatch (&Dcm_Dsl_RoeRxData);
  Starting walk at: RetVal_10 = Dcm_Dsl_RoeServices_RoeEventDispatch (&Dcm_Dsl_RoeRxData);
  instance pointer: &Dcm_Dsl_RoeRxData  Outer instance pointer: Dcm_Dsl_RoeRxData offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Dcm_Dsl_RoeServices_GetRoeRxDataInformation (RoeRxData_8(D), &Dcm_Dsl_RoeRxDataCopy);
  Starting walk at: Dcm_Dsl_RoeServices_GetRoeRxDataInformation (RoeRxData_8(D), &Dcm_Dsl_RoeRxDataCopy);
  instance pointer: RoeRxData_8(D)  Outer instance pointer: RoeRxData_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:AcceptAs_10 = Dcm_Dsl_Supervisor_RequestRxPermission (_1, 0, 2);
Determining dynamic type for call: Dcm_Dsl_RoeServices_GetRoeRxDataInformation (RoeRxData_8(D), &Dcm_Dsl_RoeRxDataCopy);
  Starting walk at: Dcm_Dsl_RoeServices_GetRoeRxDataInformation (RoeRxData_8(D), &Dcm_Dsl_RoeRxDataCopy);
  instance pointer: &Dcm_Dsl_RoeRxDataCopy  Outer instance pointer: Dcm_Dsl_RoeRxDataCopy offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:AcceptAs_10 = Dcm_Dsl_Supervisor_RequestRxPermission (_1, 0, 2);
Determining dynamic type for call: triggerRetVal_28 = Dcm_Dsl_RoeServices_ResponseOnOneEvent (&Dcm_Dsl_RoeRxData.MsgBuf[0], ServiceToRespondToLenght_12, _8);
  Starting walk at: triggerRetVal_28 = Dcm_Dsl_RoeServices_ResponseOnOneEvent (&Dcm_Dsl_RoeRxData.MsgBuf[0], ServiceToRespondToLenght_12, _8);
  instance pointer: &Dcm_Dsl_RoeRxData.MsgBuf[0]  Outer instance pointer: Dcm_Dsl_RoeRxData offset: 128 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: Dcm_Dsl_RoeServices_RoeEventDispatch (&Dcm_Dsl_RoeRxData);
  Starting walk at: Dcm_Dsl_RoeServices_RoeEventDispatch (&Dcm_Dsl_RoeRxData);
  instance pointer: &Dcm_Dsl_RoeRxData  Outer instance pointer: Dcm_Dsl_RoeRxData offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:Dcm_Dsl_RoeServices_InitInternal ();

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_RoeServices_InitPreconf.part.0/39:
  Jump functions of caller  Dcm_GetSesCtrlTypeExt/38:
  Jump functions of caller  Dcm_Dsl_RxConnectionRxIndication/37:
  Jump functions of caller  Dcm_Dsl_Supervisor_IncomingReception/36:
  Jump functions of caller  Dcm_Dsl_Supervisor_RequestRxPermission/35:
  Jump functions of caller  Det_ASR40_ReportError/33:
  Jump functions of caller  TS_MemCpy32/32:
  Jump functions of caller  NvM_ASR40_GetErrorStatus/31:
  Jump functions of caller  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30:
  Jump functions of caller  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29:
  Jump functions of caller  NvM_ASR40_SetRamBlockStatus/27:
  Jump functions of caller  TS_MemBZero32/26:
  Jump functions of caller  Dcm_Dsl_RoeServices_ResponseOnOneEvent/25:
    callsite  Dcm_Dsl_RoeServices_ResponseOnOneEvent/25 -> Dcm_Dsl_RoeServices_RoeEventDispatch/24 : 
       param 0: CONST: &Dcm_Dsl_RoeRxData
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsl_RoeServices_RoeEventDispatch/24:
    callsite  Dcm_Dsl_RoeServices_RoeEventDispatch/24 -> Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: CONST: &Dcm_Dsl_RoeRxDataCopy
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23:
  Jump functions of caller  Dcm_Dsl_RoeServices_ChangeState/22:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (State_9(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_StartResponseOnEvent/21:
    callsite  Dcm_Dsl_RoeServices_StartResponseOnEvent/21 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_ReportActivatedEvents/20:
  Jump functions of caller  Dcm_Dsl_RoeServices_StopResponseOnEvent/19:
    callsite  Dcm_Dsl_RoeServices_StopResponseOnEvent/19 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dem_RoeServices_CommonTriggerProcedure/18:
    callsite  Dcm_Dem_RoeServices_CommonTriggerProcedure/18 -> Dcm_Dsl_RoeServices_ResponseOnOneEvent/25 : 
       param 0: CONST: &Dcm_Dsl_RoeRxData.MsgBuf[0]
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
       param 1: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 3]
       param 2: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17:
    callsite  Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 -> Dcm_Dem_RoeServices_CommonTriggerProcedure/18 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_TriggerOnEvent/16:
    callsite  Dcm_Dsl_RoeServices_TriggerOnEvent/16 -> Dcm_Dem_RoeServices_CommonTriggerProcedure/18 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_SessionChange/15:
    callsite  Dcm_Dsl_RoeServices_SessionChange/15 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_RoeServices_SessionChange/15 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_GetRxPduId/14:
  Jump functions of caller  Dcm_Dsl_RoeServices_MapToRelevantCase/13:
  Jump functions of caller  Dcm_Dsl_RoeServices_InitInternal/12:
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_InitPreconf/11 : 
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_InitPreconf/11 : 
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_RoeServices_InitInternal/12 -> Dcm_Dsl_RoeServices_MapToRelevantCase/13 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_InitPreconf/11:
    callsite  Dcm_Dsl_RoeServices_InitPreconf/11 -> Dcm_Dsl_RoeServices_InitPreconf.part.0/39 : 
    callsite  Dcm_Dsl_RoeServices_InitPreconf/11 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
    callsite  Dcm_Dsl_RoeServices_InitPreconf/11 -> Dcm_Dsl_RoeServices_ClearEvents/7 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsl_RoeServices_IsInitialized/10:
  Jump functions of caller  Dcm_Dsl_RoeServices_Init/9:
  Jump functions of caller  Dcm_Dsl_RoeServices_MainFunction/8:
    callsite  Dcm_Dsl_RoeServices_MainFunction/8 -> Dcm_Dsl_RoeServices_RoeEventDispatch/24 : 
       param 0: CONST: &Dcm_Dsl_RoeRxData
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
    callsite  Dcm_Dsl_RoeServices_MainFunction/8 -> Dcm_Dsl_RoeServices_InitInternal/12 : 
  Jump functions of caller  Dcm_Dsl_RoeServices_ClearEvents/7:
    callsite  Dcm_Dsl_RoeServices_ClearEvents/7 -> Dcm_Dsl_RoeServices_ChangeState/22 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0x3
         VR  [0, 2]
       param 1: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR

 Propagating constants:

Not considering Dcm_Dsl_RoeServices_StartResponseOnEvent for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_ReportActivatedEvents for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_StopResponseOnEvent for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_TriggerOnDTCStatus for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_TriggerOnEvent for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_SessionChange for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_GetRxPduId for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_IsInitialized for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_Init for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsl_RoeServices_ClearEvents for cloning; -fipa-cp-clone disabled.

overall_size: 565, max_new_size: 11001
 - context independent values, size: 9, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 29, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 14, time_benefit: 2.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsl_RoeServices_InitPreconf.part.0/39:
  Node: Dcm_Dsl_RoeServices_ResponseOnOneEvent/25:
    param [0]: &Dcm_Dsl_RoeRxData.MsgBuf[0] [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         Dcm_MsgItemType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x3
         Dcm_MsgLenType [0, 3]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Dcm_Dsl_RoeServices_RoeEventDispatch/24:
    param [0]: &Dcm_Dsl_RoeRxData [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dcm_RoeRxDataType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23:
    param [0]: &Dcm_Dsl_RoeRxData [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         const struct Dcm_RoeRxDataType * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: &Dcm_Dsl_RoeRxDataCopy [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct Dcm_RoeRxDataType * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dcm_Dsl_RoeServices_ChangeState/22:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: 0 [loc_time: 1, loc_size: 14, prop_time: 0, prop_size: 0]
               1 [loc_time: 1, loc_size: 14, prop_time: 0, prop_size: 0]
               2 [loc_time: 1, loc_size: 13, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x2, mask = 0x3
         Dcm_RoeEventStateType [0, 2]
        AGGS VARIABLE
  Node: Dcm_Dsl_RoeServices_StartResponseOnEvent/21:
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
  Node: Dcm_Dsl_RoeServices_ReportActivatedEvents/20:
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
  Node: Dcm_Dsl_RoeServices_StopResponseOnEvent/19:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dem_RoeServices_CommonTriggerProcedure/18:
    param [0]: 1 [loc_time: 53, loc_size: 27, prop_time: 0, prop_size: 0]
               0 [loc_time: 53, loc_size: 24, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1
         Dcm_RoeEventTypeType [0, 1]
        AGGS VARIABLE
  Node: Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17:
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
  Node: Dcm_Dsl_RoeServices_TriggerOnEvent/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_RoeServices_SessionChange/15:
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
  Node: Dcm_Dsl_RoeServices_GetRxPduId/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsl_RoeServices_MapToRelevantCase/13:
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
  Node: Dcm_Dsl_RoeServices_InitInternal/12:
  Node: Dcm_Dsl_RoeServices_InitPreconf/11:
  Node: Dcm_Dsl_RoeServices_IsInitialized/10:
  Node: Dcm_Dsl_RoeServices_Init/9:
  Node: Dcm_Dsl_RoeServices_MainFunction/8:
  Node: Dcm_Dsl_RoeServices_ClearEvents/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of Dcm_Dsl_RoeServices_ResponseOnOneEvent/25 for all known contexts.
    replacing param #0 MsgPtr with const &Dcm_Dsl_RoeRxData.MsgBuf[0]
 - Creating a specialized node of Dcm_Dsl_RoeServices_RoeEventDispatch/24 for all known contexts.
    replacing param #0 RoeRxData with const &Dcm_Dsl_RoeRxData
 - Creating a specialized node of Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23 for all known contexts.
    replacing param #0 RoeRxData with const &Dcm_Dsl_RoeRxData
    replacing param #1 RoeRxDataCopy with const &Dcm_Dsl_RoeRxDataCopy
Propagated bits info for function Dcm_Dsl_RoeServices_GetRoeRxDataInformation.constprop/42:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop/40:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0x3
Propagated bits info for function Dcm_Dsl_RoeServices_ResponseOnOneEvent/25:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0x3
Propagated bits info for function Dcm_Dsl_RoeServices_RoeEventDispatch/24:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23:
 param 0: value = 0x0, mask = 0xfffffffc
 param 1: value = 0x0, mask = 0xfffffffc
Propagated bits info for function Dcm_Dsl_RoeServices_ChangeState/22:
 param 1: value = 0x2, mask = 0x3
Propagated bits info for function Dcm_Dem_RoeServices_CommonTriggerProcedure/18:
 param 0: value = 0x0, mask = 0x1

IPA constant propagation end

Reclaiming functions: Dcm_Dsl_RoeServices_ResponseOnOneEvent/25 Dcm_Dsl_RoeServices_RoeEventDispatch/24 Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsl_RoeServices_GetRoeRxDataInformation.constprop.0/42 (Dcm_Dsl_RoeServices_GetRoeRxDataInformation.constprop) @06f0d2a0
  Type: function definition analyzed
  Visibility:
  References: Dcm_Dsl_RoeRxData/5 (addr)Dcm_Dsl_RoeRxDataCopy/6 (addr)
  Referring: 
  Clone of Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (Dcm_Dsl_RoeServices_RoeEventDispatch.constprop) @06ded7e0
  Type: function definition analyzed
  Visibility:
  References: Dcm_Dsl_RoeRxDataCopy/6 (addr)Dcm_Dsl_RoeRxDataCopy/6 (read)Dcm_Dsl_RoeRxDataCopy/6 (read)Dcm_Dsl_RoeRxDataCopy/6 (read)Dcm_RoeEnqueueEvent/3 (write)Dcm_RoeEnqueueEvent/3 (write)Dcm_Dsl_RoeRxData/5 (addr)
  Referring: 
  Clone of Dcm_Dsl_RoeServices_RoeEventDispatch/24
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsl_RoeServices_MainFunction/8 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop/40 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_Supervisor_RequestRxPermission/35 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RoeServices_GetRoeRxDataInformation.constprop/42 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_Supervisor_IncomingReception/36 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_RxConnectionRxIndication/37 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop) @06ed47e0
  Type: function definition analyzed
  Visibility:
  References: Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (addr)Dcm_Dsl_RoeRxData/5 (addr)
  Referring: 
  Clone of Dcm_Dsl_RoeServices_ResponseOnOneEvent/25
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_RoeServices_InitPreconf.part.0/39 (Dcm_Dsl_RoeServices_InitPreconf.part.0) @06dede00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Dcm_Dsl_RoeServices_InitPreconf/11 (11952894 (estimated locally),0.20 per call) 
  Calls: NvM_ASR40_SetRamBlockStatus/27 (1073741824 (estimated locally),1.00 per call) 
Dcm_GetSesCtrlTypeExt/38 (Dcm_GetSesCtrlTypeExt) @06dcc540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (46205163 (estimated locally),0.13 per call) 
  Calls: 
Dcm_Dsl_RxConnectionRxIndication/37 (Dcm_Dsl_RxConnectionRxIndication) @06db91c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_Supervisor_IncomingReception/36 (Dcm_Dsl_Supervisor_IncomingReception) @06db90e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Dcm_Dsl_Supervisor_RequestRxPermission/35 (Dcm_Dsl_Supervisor_RequestRxPermission) @06db9000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_RoeEventPreconfList/34 (Dcm_RoeEventPreconfList) @06db5510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_RoeServices_InitPreconf/11 (read)Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (read)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (read)Dcm_Dsl_RoeServices_InitPreconf/11 (read)Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (addr)
  Availability: not_available
  Varpool flags: read-only
Det_ASR40_ReportError/33 (Det_ASR40_ReportError) @06d78c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_InitInternal/12 (534190293 (estimated locally),0.50 per call) Dcm_Dsl_RoeServices_InitInternal/12 (261112215 (estimated locally),0.24 per call) Dcm_Dsl_RoeServices_InitInternal/12 (86167031 (estimated locally),0.08 per call) 
  Calls: 
TS_MemCpy32/32 (TS_MemCpy32) @06d78b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (3179655 (estimated locally),0.01 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitPreconf/11 (679839637 (estimated locally),11.51 per call) 
  Calls: 
NvM_ASR40_GetErrorStatus/31 (NvM_ASR40_GetErrorStatus) @06d789a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_InitInternal/12 (1068380586 (estimated locally),1.00 per call) 
  Calls: 
SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06d78620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_MainFunction/8 (354334802 (estimated locally),0.33 per call) Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0) @06d78460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_MainFunction/8 (354334802 (estimated locally),0.33 per call) Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_RoeSchMSwitchFunctionList/28 (Dcm_RoeSchMSwitchFunctionList) @06d25990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsl_RoeServices_ChangeState/22 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_ASR40_SetRamBlockStatus/27 (NvM_ASR40_SetRamBlockStatus) @06d781c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (3179655 (estimated locally),0.01 per call) Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (15750373 (estimated locally),0.04 per call) Dcm_Dsl_RoeServices_InitInternal/12 (72434537 (estimated locally),0.07 per call) Dcm_Dsl_RoeServices_InitPreconf.part.0/39 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RoeServices_ClearEvents/7 (715863676 (estimated locally),2.00 per call) 
  Calls: 
TS_MemBZero32/26 (TS_MemBZero32) @06d780e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsl_RoeServices_ClearEvents/7 (357878150 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsl_RoeServices_ResponseOnOneEvent/25 (Dcm_Dsl_RoeServices_ResponseOnOneEvent) @06d29ee0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_RoeEventDispatch/24 (Dcm_Dsl_RoeServices_RoeEventDispatch) @06d29d20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_GetRoeRxDataInformation/23 (Dcm_Dsl_RoeServices_GetRoeRxDataInformation) @06d29b60
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_ChangeState/22 (Dcm_Dsl_RoeServices_ChangeState) @06d299a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_RoeSchMSwitchFunctionList/28 (read)Dcm_RoeEnqueueEvent/3 (read)Dcm_RoeEnqueueEvent/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (46205163 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (15750373 (estimated locally),0.04 per call) Dcm_Dsl_RoeServices_SessionChange/15 (9193050 (estimated locally),0.01 per call) Dcm_Dsl_RoeServices_SessionChange/15 (97550247 (estimated locally),0.09 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitInternal/12 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_InitPreconf/11 (679839637 (estimated locally),11.51 per call) Dcm_Dsl_RoeServices_ClearEvents/7 (144890808 (estimated locally),0.40 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (Dcm_Dsl_RoeServices_StartResponseOnEvent) @06d297e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Persistent_Data/0 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:362429610 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_SetRamBlockStatus/27 (3179655 (estimated locally),0.01 per call) TS_MemCpy32/32 (3179655 (estimated locally),0.01 per call) Dcm_Dsl_RoeServices_ChangeState/22 (46205163 (estimated locally),0.13 per call) Dcm_GetSesCtrlTypeExt/38 (46205163 (estimated locally),0.13 per call) 
Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (Dcm_Dsl_RoeServices_ReportActivatedEvents) @06d29620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_RoeEventPreconfList/34 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Persistent_Data/0 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)
  Referring: 
  Availability: available
  Function flags: count:357902488 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (Dcm_Dsl_RoeServices_StopResponseOnEvent) @06d292a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Persistent_Data/0 (write)Dcm_Dsl_RoeServices_Persistent_Data/0 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)
  Referring: 
  Availability: available
  Function flags: count:363366676 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_ASR40_SetRamBlockStatus/27 (15750373 (estimated locally),0.04 per call) Dcm_Dsl_RoeServices_ChangeState/22 (15750373 (estimated locally),0.04 per call) 
Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (Dcm_Dem_RoeServices_CommonTriggerProcedure) @06d290e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_RoeEnqueueEvent/3 (read)Dcm_RoeEnqueueEvent/3 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_RoeEventPreconfList/34 (read)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeRxData/5 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeRxData/5 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_RoeInterMsgCycle/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (20480552 (estimated locally),0.02 per call) Dcm_Dsl_RoeServices_TriggerOnEvent/16 (13926775 (estimated locally),0.01 per call) 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (1073741824 (estimated locally),1.00 per call) Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop/40 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (Dcm_Dsl_RoeServices_TriggerOnDTCStatus) @06d09ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Initialized/2 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_RoeInterMsgCycle/1 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_RoeEventPreconfList/34 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (20480552 (estimated locally),0.02 per call) 
Dcm_Dsl_RoeServices_TriggerOnEvent/16 (Dcm_Dsl_RoeServices_TriggerOnEvent) @06d09d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Initialized/2 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_RoeInterMsgCycle/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (13926775 (estimated locally),0.01 per call) 
Dcm_Dsl_RoeServices_SessionChange/15 (Dcm_Dsl_RoeServices_SessionChange) @06d09b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Initialized/2 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsl_RoeServices_ChangeState/22 (9193050 (estimated locally),0.01 per call) Dcm_Dsl_RoeServices_ChangeState/22 (97550247 (estimated locally),0.09 per call) 
Dcm_Dsl_RoeServices_GetRxPduId/14 (Dcm_Dsl_RoeServices_GetRxPduId) @06d099a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (read)
  Referring: 
  Availability: available
  Function flags: count:397250652 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_MapToRelevantCase/13 (Dcm_Dsl_RoeServices_MapToRelevantCase) @06d097e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_RoeServices_InitInternal/12 (715863675 (estimated locally),0.67 per call) 
  Calls: 
Dcm_Dsl_RoeServices_InitInternal/12 (Dcm_Dsl_RoeServices_InitInternal) @06d09620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_Dsl_RoeServices_Persistent_Data/0 (read)Dcm_Dsl_RoeServices_Persistent_Data/0 (read)Dcm_Dsl_RoeServices_Persistent_Data/0 (write)Dcm_Dsl_RoeServices_Persistent_Data/0 (write)Dcm_Dsl_RoeServices_Persistent_Data/0 (read)Dcm_Dsl_RoeServices_Persistent_Data/0 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)Dcm_Dsl_RoeServices_Persistent_Data/0 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)Dcm_Dsl_RoeServices_Persistent_Data/0 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)Dcm_Dsl_RoeServices_Persistent_Data/0 (addr)Dcm_Dsl_RoeServices_Persistent_Data/0 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)Dcm_Dsl_RoeServices_Persistent_Data/0 (addr)Dcm_Dsl_RoeServices_Initialized/2 (write)Dcm_Dsl_RoeServices_Initialized/2 (write)Dcm_Dsl_RoeServices_Initialized/2 (write)
  Referring: 
  Availability: local
  Function flags: count:1068380586 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_RoeServices_MainFunction/8 (524845004 (estimated locally),0.49 per call) 
  Calls: Dcm_Dsl_RoeServices_InitPreconf/11 (534190293 (estimated locally),0.50 per call) Det_ASR40_ReportError/33 (534190293 (estimated locally),0.50 per call) Det_ASR40_ReportError/33 (261112215 (estimated locally),0.24 per call) Dcm_Dsl_RoeServices_InitPreconf/11 (86167031 (estimated locally),0.08 per call) Det_ASR40_ReportError/33 (86167031 (estimated locally),0.08 per call) Dcm_Dsl_RoeServices_ChangeState/22 (143172735 (estimated locally),0.13 per call) TS_MemCpy32/32 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_ChangeState/22 (143172735 (estimated locally),0.13 per call) TS_MemCpy32/32 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_ChangeState/22 (143172735 (estimated locally),0.13 per call) TS_MemCpy32/32 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_ChangeState/22 (143172735 (estimated locally),0.13 per call) TS_MemCpy32/32 (143172735 (estimated locally),0.13 per call) Dcm_Dsl_RoeServices_MapToRelevantCase/13 (715863675 (estimated locally),0.67 per call) NvM_ASR40_SetRamBlockStatus/27 (72434537 (estimated locally),0.07 per call) NvM_ASR40_GetErrorStatus/31 (1068380586 (estimated locally),1.00 per call) 
Dcm_Dsl_RoeServices_InitPreconf/11 (Dcm_Dsl_RoeServices_InitPreconf) @06d091c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dcm_RoeEventPreconfList/34 (read)Dcm_RoeEventPreconfList/34 (read)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Persistent_Data/0 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)
  Referring: 
  Availability: local
  Function flags: count:59055800 (estimated locally) body local optimize_size
  Called by: Dcm_Dsl_RoeServices_InitInternal/12 (534190293 (estimated locally),0.50 per call) Dcm_Dsl_RoeServices_InitInternal/12 (86167031 (estimated locally),0.08 per call) 
  Calls: Dcm_Dsl_RoeServices_InitPreconf.part.0/39 (11952894 (estimated locally),0.20 per call) TS_MemCpy32/32 (679839637 (estimated locally),11.51 per call) Dcm_Dsl_RoeServices_ChangeState/22 (679839637 (estimated locally),11.51 per call) Dcm_Dsl_RoeServices_ClearEvents/7 (59055800 (estimated locally),1.00 per call) 
Dcm_Dsl_RoeServices_IsInitialized/10 (Dcm_Dsl_RoeServices_IsInitialized) @06d09000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Initialized/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_Init/9 (Dcm_Dsl_RoeServices_Init) @06c681c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Initialized/2 (write)Dcm_RoeEnqueueEvent/3 (write)Dcm_RoeInterMsgCycle/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsl_RoeServices_MainFunction/8 (Dcm_Dsl_RoeServices_MainFunction) @06c68e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Initialized/2 (read)Dcm_RoeInterMsgCycle/1 (read)Dcm_RoeInterMsgCycle/1 (write)Dcm_RoeEnqueueEvent/3 (read)Dcm_Dsl_RoeRxData/5 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/30 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41 (354334802 (estimated locally),0.33 per call) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0/29 (354334802 (estimated locally),0.33 per call) Dcm_Dsl_RoeServices_InitInternal/12 (524845004 (estimated locally),0.49 per call) 
Dcm_Dsl_RoeServices_ClearEvents/7 (Dcm_Dsl_RoeServices_ClearEvents) @06c68c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsl_RoeServices_Runtime_Data/4 (addr)Dcm_Dsl_RoeServices_Runtime_Data/4 (write)Dcm_Dsl_RoeServices_Persistent_Data/0 (write)Dcm_RoeEnqueueEvent/3 (write)
  Referring: 
  Availability: available
  Function flags: count:357878150 (estimated locally) body optimize_size
  Called by: Dcm_Dsl_RoeServices_InitPreconf/11 (59055800 (estimated locally),1.00 per call) 
  Calls: NvM_ASR40_SetRamBlockStatus/27 (715863676 (estimated locally),2.00 per call) Dcm_Dsl_RoeServices_ChangeState/22 (144890808 (estimated locally),0.40 per call) TS_MemBZero32/26 (357878150 (estimated locally),1.00 per call) 
Dcm_Dsl_RoeRxDataCopy/6 (Dcm_Dsl_RoeRxDataCopy) @06cc8d80
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (read)Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (read)Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (read)Dcm_Dsl_RoeServices_GetRoeRxDataInformation.constprop.0/42 (addr)Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (addr)
  Availability: available
  Varpool flags:
Dcm_Dsl_RoeRxData/5 (Dcm_Dsl_RoeRxData) @06cc8d38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_RoeServices_GetRoeRxDataInformation.constprop.0/42 (addr)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (addr)Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (write)Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (addr)Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (addr)Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (addr)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dsl_RoeServices_MainFunction/8 (addr)Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (write)Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (write)Dcm_Dsl_RoeServices_ResponseOnOneEvent.constprop.0/40 (write)
  Availability: available
  Varpool flags:
Dcm_Dsl_RoeServices_Runtime_Data/4 (Dcm_Dsl_RoeServices_Runtime_Data) @06cc8cf0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_RoeServices_ChangeState/22 (write)Dcm_Dsl_RoeServices_ChangeState/22 (read)Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (read)Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (read)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (read)Dcm_Dsl_RoeServices_ClearEvents/7 (addr)Dcm_Dsl_RoeServices_ClearEvents/7 (write)Dcm_Dsl_RoeServices_InitPreconf/11 (write)Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (read)Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (read)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (read)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dsl_RoeServices_InitPreconf/11 (write)Dcm_Dsl_RoeServices_InitPreconf/11 (addr)Dcm_Dsl_RoeServices_SessionChange/15 (read)Dcm_Dsl_RoeServices_SessionChange/15 (read)Dcm_Dsl_RoeServices_SessionChange/15 (write)Dcm_Dsl_RoeServices_InitPreconf/11 (write)Dcm_Dsl_RoeServices_InitPreconf/11 (write)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_GetRxPduId/14 (read)Dcm_Dsl_RoeServices_GetRxPduId/14 (read)Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (read)Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (read)Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (read)Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (read)Dcm_Dsl_RoeServices_SessionChange/15 (read)Dcm_Dsl_RoeServices_SessionChange/15 (read)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_TriggerOnEvent/16 (read)Dcm_Dsl_RoeServices_TriggerOnEvent/16 (read)Dcm_Dsl_RoeServices_SessionChange/15 (write)Dcm_Dsl_RoeServices_SessionChange/15 (read)Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (read)Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (read)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (read)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (read)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (write)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (write)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (write)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (read)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (write)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (addr)
  Availability: available
  Varpool flags:
Dcm_RoeEnqueueEvent/3 (Dcm_RoeEnqueueEvent) @06cc8ca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (write)Dcm_Dsl_RoeServices_ChangeState/22 (read)Dcm_Dsl_RoeServices_ChangeState/22 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0/41 (write)Dcm_Dsl_RoeServices_MainFunction/8 (read)Dcm_Dsl_RoeServices_ClearEvents/7 (write)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (read)Dcm_Dsl_RoeServices_Init/9 (write)
  Availability: available
  Varpool flags: initialized
Dcm_Dsl_RoeServices_Initialized/2 (Dcm_Dsl_RoeServices_Initialized) @06cc8c60
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_RoeServices_TriggerOnEvent/16 (read)Dcm_Dsl_RoeServices_Init/9 (write)Dcm_Dsl_RoeServices_IsInitialized/10 (read)Dcm_Dsl_RoeServices_SessionChange/15 (read)Dcm_Dsl_RoeServices_InitInternal/12 (write)Dcm_Dsl_RoeServices_MainFunction/8 (read)Dcm_Dsl_RoeServices_InitInternal/12 (write)Dcm_Dsl_RoeServices_InitInternal/12 (write)Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (read)
  Availability: available
  Varpool flags: initialized
Dcm_RoeInterMsgCycle/1 (Dcm_RoeInterMsgCycle) @06cc8c18
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsl_RoeServices_MainFunction/8 (write)Dcm_Dsl_RoeServices_Init/9 (write)Dcm_Dsl_RoeServices_TriggerOnEvent/16 (read)Dcm_Dem_RoeServices_CommonTriggerProcedure/18 (write)Dcm_Dsl_RoeServices_MainFunction/8 (read)Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17 (read)
  Availability: available
  Varpool flags: initialized
Dcm_Dsl_RoeServices_Persistent_Data/0 (Dcm_Dsl_RoeServices_Persistent_Data) @06cc8bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (write)Dcm_Dsl_RoeServices_ClearEvents/7 (write)Dcm_Dsl_RoeServices_ReportActivatedEvents/20 (read)Dcm_Dsl_RoeServices_InitInternal/12 (write)Dcm_Dsl_RoeServices_InitPreconf/11 (addr)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_InitInternal/12 (read)Dcm_Dsl_RoeServices_InitInternal/12 (read)Dcm_Dsl_RoeServices_InitInternal/12 (write)Dcm_Dsl_RoeServices_InitInternal/12 (write)Dcm_Dsl_RoeServices_InitInternal/12 (read)Dcm_Dsl_RoeServices_InitInternal/12 (read)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_InitInternal/12 (addr)Dcm_Dsl_RoeServices_StopResponseOnEvent/19 (write)Dcm_Dsl_RoeServices_StartResponseOnEvent/21 (addr)
  Availability: available
  Varpool flags:

;; Function Dcm_Dsl_RoeServices_ChangeState (Dcm_Dsl_RoeServices_ChangeState, funcdef_no=15, decl_uid=6780, cgraph_uid=16, symbol_order=22)

Modification phase of node Dcm_Dsl_RoeServices_ChangeState/22
Adjusting mask for param 1 to 0x3
Setting value range of param 1 [0, 2]
Dcm_Dsl_RoeServices_ChangeState (Dcm_RoeEventTypeType Event, Dcm_RoeEventStateType State)
{
  int _1;
  unsigned char _2;
  int _3;
  Std_ReturnType (*<T744>) (uint8) _4;
  unsigned char Dcm_RoeEnqueueEvent.0_5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) Event_7(D);
  Dcm_Dsl_RoeServices_Runtime_Data[_1].State = State_9(D);
  # DEBUG BEGIN_STMT
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[_1].PreconfIdx;
  _3 = (int) _2;
  _4 = Dcm_RoeSchMSwitchFunctionList[_3];
  _4 (State_9(D));
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent.0_5 = Dcm_RoeEnqueueEvent;
  if (Dcm_RoeEnqueueEvent.0_5 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  if (State_9(D) <= 1)
    goto <bb 4>; [41.00%]
  else
    goto <bb 5>; [59.00%]

  <bb 4> [local count: 149679610]:
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent = 0;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Dcm_Dsl_RoeServices_RoeEventDispatch.constprop (Dcm_Dsl_RoeServices_RoeEventDispatch.constprop.0, funcdef_no=21, decl_uid=7173, cgraph_uid=33, symbol_order=41)

Modification phase of node Dcm_Dsl_RoeServices_RoeEventDispatch.constprop/41
Dcm_Dsl_RoeServices_RoeEventDispatch.constprop ()
{
  Dcm_StatusType RetVal;
  Dcm_RequestTypeType AcceptAs;
  struct Dcm_RoeRxDataType * RoeRxData;
  short unsigned int _1;
  unsigned char _3;
  short unsigned int _4;
  short unsigned int _5;

  <bb 7> [local count: 1073741824]:
  # DEBUG RoeRxData => &Dcm_Dsl_RoeRxData

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 6
  # DEBUG BEGIN_STMT
  # DEBUG AcceptAs => 17
  # DEBUG BEGIN_STMT
  _1 = Dcm_Dsl_RoeRxData.RxPduId;
  AcceptAs_2 = Dcm_Dsl_Supervisor_RequestRxPermission (_1, 0, 2);
  # DEBUG AcceptAs => AcceptAs_2
  # DEBUG BEGIN_STMT
  _3 = AcceptAs_2 + 246;
  if (_3 <= 3)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_GetRoeRxDataInformation (&Dcm_Dsl_RoeRxData, &Dcm_Dsl_RoeRxDataCopy);
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsl_RoeRxDataCopy.RxPduId;
  Dcm_Dsl_Supervisor_IncomingReception (_4, AcceptAs_2);
  # DEBUG BEGIN_STMT
  _5 = Dcm_Dsl_RoeRxDataCopy.RxPduId;
  Dcm_Dsl_RxConnectionRxIndication (_5, AcceptAs_2, Dcm_Dsl_RoeRxDataCopy.RxBuffer);
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent = 0;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (AcceptAs_2 == 16)
    goto <bb 5>; [48.89%]
  else
    goto <bb 6>; [51.11%]

  <bb 5> [local count: 351718093]:
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent = 1;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 6> [local count: 1073741824]:
  # RetVal_6 = PHI <0(3), 6(4), 0(5)>
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function Dcm_Dem_RoeServices_CommonTriggerProcedure (Dcm_Dem_RoeServices_CommonTriggerProcedure, funcdef_no=11, decl_uid=6792, cgraph_uid=12, symbol_order=18)

Modification phase of node Dcm_Dem_RoeServices_CommonTriggerProcedure/18
Adjusting mask for param 0 to 0x1
Setting value range of param 0 [0, 1]
Dcm_Dem_RoeServices_CommonTriggerProcedure (Dcm_RoeEventTypeType EventType)
{
  Dcm_MsgLenType ServiceToRespondToLenght;
  uint8 PreconfIdx;
  Dcm_StatusType triggerRetVal;
  int _1;
  unsigned char Dcm_RoeEnqueueEvent.11_2;
  int _3;
  short unsigned int _4;
  short unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  short unsigned int _8;
  unsigned char _9;
  unsigned char _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG triggerRetVal => 6
  # DEBUG BEGIN_STMT
  _1 = (int) EventType_17(D);
  PreconfIdx_19 = Dcm_Dsl_RoeServices_Runtime_Data[_1].PreconfIdx;
  # DEBUG PreconfIdx => PreconfIdx_19
  # DEBUG BEGIN_STMT
  # DEBUG ServiceToRespondToLenght => 0
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent.11_2 = Dcm_RoeEnqueueEvent;
  if (Dcm_RoeEnqueueEvent.11_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent = 0;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (EventType_17(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeRxData.MsgBuf[0] = 25;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeRxData.MsgBuf[1] = 14;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceToRespondToLenght => 2

  <bb 6> [local count: 1073741824]:
  # ServiceToRespondToLenght_11 = PHI <0(4), 2(5)>
  # DEBUG ServiceToRespondToLenght => ServiceToRespondToLenght_11
  # DEBUG BEGIN_STMT
  if (EventType_17(D) == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeRxData.MsgBuf[0] = 34;
  # DEBUG BEGIN_STMT
  _3 = (int) PreconfIdx_19;
  _4 = Dcm_RoeEventPreconfList[_3].Did;
  _5 = _4 >> 8;
  _6 = (unsigned char) _5;
  Dcm_Dsl_RoeRxData.MsgBuf[1] = _6;
  # DEBUG BEGIN_STMT
  _7 = (unsigned char) _4;
  Dcm_Dsl_RoeRxData.MsgBuf[2] = _7;
  # DEBUG BEGIN_STMT
  # DEBUG ServiceToRespondToLenght => 3

  <bb 8> [local count: 1073741824]:
  # ServiceToRespondToLenght_12 = PHI <ServiceToRespondToLenght_11(6), 3(7)>
  # DEBUG ServiceToRespondToLenght => ServiceToRespondToLenght_12
  # DEBUG BEGIN_STMT
  _8 = Dcm_Dsl_RoeServices_Runtime_Data[_1].RxPduId;
  triggerRetVal_28 = Dcm_Dsl_RoeServices_ResponseOnOneEvent (&Dcm_Dsl_RoeRxData.MsgBuf[0], ServiceToRespondToLenght_12, _8);
  # DEBUG triggerRetVal => triggerRetVal_28
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (triggerRetVal_28 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _9 = Dcm_Dsl_RoeServices_Runtime_Data[_1].ActivationCnt;
  _10 = _9 + 1;
  Dcm_Dsl_RoeServices_Runtime_Data[_1].ActivationCnt = _10;
  # DEBUG BEGIN_STMT
  Dcm_RoeInterMsgCycle = 200;

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RoeServices_ClearEvents (Dcm_Dsl_RoeServices_ClearEvents, funcdef_no=0, decl_uid=6608, cgraph_uid=1, symbol_order=7)

Modification phase of node Dcm_Dsl_RoeServices_ClearEvents/7
Dcm_Dsl_RoeServices_ClearEvents (boolean ServiceCall)
{
  Dcm_RoeEventTypeType EventType;
  int _1;
  int _2;

  <bb 2> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TS_MemBZero32 (&Dcm_Dsl_RoeServices_Runtime_Data, 16);
  # DEBUG BEGIN_STMT
  # DEBUG EventType => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  if (ServiceCall_9(D) == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 144890808]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ChangeState (EventType_3, 0);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 570972868]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventType_3;
  Dcm_Dsl_RoeServices_Runtime_Data[_1].State = 0;

  <bb 6> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _2 = (int) EventType_3;
  Dcm_Dsl_RoeServices_Persistent_Data[_2].State = 0;
  # DEBUG BEGIN_STMT
  NvM_ASR40_SetRamBlockStatus (3, 1);
  # DEBUG BEGIN_STMT
  EventType_15 = EventType_3 + 1;
  # DEBUG EventType => EventType_15

  <bb 7> [local count: 1073741824]:
  # EventType_3 = PHI <0(2), EventType_15(6)>
  # DEBUG EventType => EventType_3
  # DEBUG BEGIN_STMT
  if (EventType_3 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 8>; [33.33%]

  <bb 8> [local count: 357878150]:
  # DEBUG BEGIN_STMT
  if (ServiceCall_9(D) == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 178939075]:
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent = 0;

  <bb 10> [local count: 357878150]:
  return;

}



;; Function Dcm_Dsl_RoeServices_InitPreconf (Dcm_Dsl_RoeServices_InitPreconf, funcdef_no=4, decl_uid=6782, cgraph_uid=5, symbol_order=11)

Modification phase of node Dcm_Dsl_RoeServices_InitPreconf/11
Dcm_Dsl_RoeServices_InitPreconf ()
{
  const Dcm_RoeEventTypeType EventType;
  boolean NvMChanged;
  uint8 PreconfEventIndex;
  unsigned char _2;
  int _4;
  struct Dcm_RoeEventDataType * _6;
  struct Dcm_RoeEventDataType * _7;

  <bb 2> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG NvMChanged => 0
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ClearEvents (0);
  # DEBUG BEGIN_STMT
  # DEBUG PreconfEventIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _2 = Dcm_RoeEventPreconfList[0].InitialEventStatus;
  if (_2 == 1)
    goto <bb 4>; [67.00%]
  else
    goto <bb 10>; [33.00%]

  <bb 10> [local count: 334846386]:
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 679839637]:
  # DEBUG BEGIN_STMT
  EventType_15 = Dcm_RoeEventPreconfList[0].EventType;
  # DEBUG EventType => EventType_15
  # DEBUG BEGIN_STMT
  _4 = (int) EventType_15;
  Dcm_Dsl_RoeServices_Runtime_Data[_4].PreconfIdx = 0;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_4].OrigEventWindowTime = 2;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_4].EventWindowTime = 2;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_4].Session = 0;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ChangeState (EventType_15, 1);
  # DEBUG BEGIN_STMT
  _6 = &Dcm_Dsl_RoeServices_Persistent_Data[_4];
  _7 = &Dcm_Dsl_RoeServices_Runtime_Data[_4];
  TS_MemCpy32 (_6, _7, 8);
  # DEBUG BEGIN_STMT
  # DEBUG NvMChanged => 1

  <bb 5> [local count: 738895437]:
  # PreconfEventIndex_11 = PHI <0(2), 1(4)>
  # NvMChanged_9 = PHI <0(2), 1(4)>

  <bb 6> [local count: 1073741824]:
  # PreconfEventIndex_8 = PHI <PreconfEventIndex_11(5), 1(10)>
  # NvMChanged_10 = PHI <NvMChanged_9(5), NvMChanged_10(10)>
  # DEBUG NvMChanged => NvMChanged_10
  # DEBUG PreconfEventIndex => PreconfEventIndex_8
  # DEBUG BEGIN_STMT
  if (PreconfEventIndex_8 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 59055800]:
  # NvMChanged_3 = PHI <NvMChanged_10(6)>
  # DEBUG BEGIN_STMT
  if (NvMChanged_3 == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 9>; [79.76%]

  <bb 8> [local count: 11952894]:
  Dcm_Dsl_RoeServices_InitPreconf.part.0 ();

  <bb 9> [local count: 59055800]:
  return;

}



;; Function Dcm_Dsl_RoeServices_MainFunction (Dcm_Dsl_RoeServices_MainFunction, funcdef_no=1, decl_uid=6598, cgraph_uid=2, symbol_order=8)

Modification phase of node Dcm_Dsl_RoeServices_MainFunction/8
Dcm_Dsl_RoeServices_MainFunction ()
{
  unsigned char Dcm_Dsl_RoeServices_Initialized.1_1;
  short unsigned int Dcm_RoeInterMsgCycle.2_2;
  short unsigned int _3;
  unsigned char Dcm_RoeEnqueueEvent.4_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Initialized.1_1 = Dcm_Dsl_RoeServices_Initialized;
  if (Dcm_Dsl_RoeServices_Initialized.1_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_InitInternal ();

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_RoeInterMsgCycle.2_2 = Dcm_RoeInterMsgCycle;
  if (Dcm_RoeInterMsgCycle.2_2 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_RoeInterMsgCycle.2_2 + 65535;
  Dcm_RoeInterMsgCycle = _3;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent.4_4 = Dcm_RoeEnqueueEvent;
  if (Dcm_RoeEnqueueEvent.4_4 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_RoeEventDispatch (&Dcm_Dsl_RoeRxData);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 ();

  <bb 8> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RoeServices_Init (Dcm_Dsl_RoeServices_Init, funcdef_no=2, decl_uid=6592, cgraph_uid=3, symbol_order=9)

Modification phase of node Dcm_Dsl_RoeServices_Init/9
Dcm_Dsl_RoeServices_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Initialized = 0;
  # DEBUG BEGIN_STMT
  Dcm_RoeEnqueueEvent = 0;
  # DEBUG BEGIN_STMT
  Dcm_RoeInterMsgCycle = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RoeServices_IsInitialized (Dcm_Dsl_RoeServices_IsInitialized, funcdef_no=3, decl_uid=6594, cgraph_uid=4, symbol_order=10)

Modification phase of node Dcm_Dsl_RoeServices_IsInitialized/10
Dcm_Dsl_RoeServices_IsInitialized ()
{
  boolean Initialized;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Initialized_2 = Dcm_Dsl_RoeServices_Initialized;
  # DEBUG Initialized => Initialized_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Initialized_2;

}



;; Function Dcm_Dsl_RoeServices_GetRxPduId (Dcm_Dsl_RoeServices_GetRxPduId, funcdef_no=7, decl_uid=6596, cgraph_uid=8, symbol_order=14)

Modification phase of node Dcm_Dsl_RoeServices_GetRxPduId/14
Dcm_Dsl_RoeServices_GetRxPduId (PduIdType * RxPduId)
{
  Dcm_RoeEventTypeType EventType;
  Std_ReturnType RetVal;
  int _1;
  unsigned char _2;
  int _3;
  short unsigned int _4;

  <bb 2> [local count: 397250652]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventType => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventType_6;
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[_1].State;
  if (_2 == 2)
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 39372502]:
  # _3 = PHI <_1(3)>
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsl_RoeServices_Runtime_Data[_3].RxPduId;
  *RxPduId_10(D) = _4;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 676491173]:
  # DEBUG BEGIN_STMT
  EventType_9 = EventType_6 + 1;
  # DEBUG EventType => EventType_9

  <bb 6> [local count: 1073741824]:
  # EventType_6 = PHI <0(2), EventType_9(5)>
  # DEBUG EventType => EventType_6
  # DEBUG BEGIN_STMT
  if (EventType_6 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 7>; [33.33%]

  <bb 7> [local count: 397250652]:
  # RetVal_5 = PHI <0(4), 1(6)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Dcm_Dsl_RoeServices_SessionChange (Dcm_Dsl_RoeServices_SessionChange, funcdef_no=8, decl_uid=6601, cgraph_uid=9, symbol_order=15)

Modification phase of node Dcm_Dsl_RoeServices_SessionChange/15
Dcm_Dsl_RoeServices_SessionChange (Dcm_SesCtrlType OldSession, Dcm_SesCtrlType NewSession)
{
  Dcm_RoeEventTypeType EventType;
  unsigned char Dcm_Dsl_RoeServices_Initialized.8_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  int _5;
  unsigned char _6;
  unsigned char _7;
  unsigned char _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (OldSession_16(D) != NewSession_17(D))
    goto <bb 3>; [66.00%]
  else
    goto <bb 16>; [34.00%]

  <bb 3> [local count: 708669605]:
  Dcm_Dsl_RoeServices_Initialized.8_1 = Dcm_Dsl_RoeServices_Initialized;
  if (Dcm_Dsl_RoeServices_Initialized.8_1 == 1)
    goto <bb 18>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 18> [local count: 240947665]:
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 481967622]:
  # DEBUG BEGIN_STMT
  _2 = (int) EventType_9;
  _3 = Dcm_Dsl_RoeServices_Runtime_Data[_2].State;
  if (_3 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 5> [local count: 97550247]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ChangeState (EventType_9, 1);
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsl_RoeServices_Runtime_Data[_2].Session;
  if (_4 != 1)
    goto <bb 6>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 6> [local count: 64383163]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_2].EventWindowTime = 0;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_2].Session = 0;

  <bb 7> [local count: 481967622]:
  # DEBUG BEGIN_STMT
  EventType_24 = EventType_9 + 1;
  # DEBUG EventType => EventType_24

  <bb 8> [local count: 722915288]:
  # EventType_9 = PHI <EventType_24(7), 0(18)>
  # DEBUG EventType => EventType_9
  # DEBUG BEGIN_STMT
  if (EventType_9 != 2)
    goto <bb 4>; [66.67%]
  else
    goto <bb 9>; [33.33%]

  <bb 9> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  if (NewSession_17(D) == 1)
    goto <bb 17>; [34.00%]
  else
    goto <bb 16>; [66.00%]

  <bb 17> [local count: 81922206]:
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 163868991]:
  # DEBUG BEGIN_STMT
  _5 = (int) EventType_10;
  _6 = Dcm_Dsl_RoeServices_Runtime_Data[_5].State;
  if (_6 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 11> [local count: 55715457]:
  _7 = Dcm_Dsl_RoeServices_Runtime_Data[_5].EventWindowTime;
  if (_7 != 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 12> [local count: 27857729]:
  _8 = Dcm_Dsl_RoeServices_Runtime_Data[_5].Session;
  if (_8 != 0)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 9193050]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ChangeState (EventType_10, 2);

  <bb 14> [local count: 163868991]:
  # DEBUG BEGIN_STMT
  EventType_20 = EventType_10 + 1;
  # DEBUG EventType => EventType_20

  <bb 15> [local count: 245791198]:
  # EventType_10 = PHI <EventType_20(14), 0(17)>
  # DEBUG EventType => EventType_10
  # DEBUG BEGIN_STMT
  if (EventType_10 != 2)
    goto <bb 10>; [66.67%]
  else
    goto <bb 16>; [33.33%]

  <bb 16> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RoeServices_TriggerOnEvent (Dcm_Dsl_RoeServices_TriggerOnEvent, funcdef_no=9, decl_uid=6603, cgraph_uid=10, symbol_order=16)

Modification phase of node Dcm_Dsl_RoeServices_TriggerOnEvent/16
Dcm_Dsl_RoeServices_TriggerOnEvent (uint8 RoeEventId)
{
  Std_ReturnType RetVal;
  unsigned char Dcm_Dsl_RoeServices_Initialized.9_1;
  unsigned char _2;
  unsigned char _3;
  short unsigned int Dcm_RoeInterMsgCycle.10_4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Initialized.9_1 = Dcm_Dsl_RoeServices_Initialized;
  if (Dcm_Dsl_RoeServices_Initialized.9_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[1].PreconfIdx;
  if (_2 == RoeEventId_8(D))
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 124124555]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _3 = Dcm_Dsl_RoeServices_Runtime_Data[1].State;
  if (_3 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 42202349]:
  Dcm_RoeInterMsgCycle.10_4 = Dcm_RoeInterMsgCycle;
  if (Dcm_RoeInterMsgCycle.10_4 == 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 13926775]:
  # DEBUG BEGIN_STMT
  Dcm_Dem_RoeServices_CommonTriggerProcedure (1);

  <bb 7> [local count: 1073741824]:
  # RetVal_5 = PHI <1(2), 1(3), 0(4), 0(5), 0(6)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Dcm_Dsl_RoeServices_TriggerOnDTCStatus (Dcm_Dsl_RoeServices_TriggerOnDTCStatus, funcdef_no=10, decl_uid=6606, cgraph_uid=11, symbol_order=17)

Modification phase of node Dcm_Dsl_RoeServices_TriggerOnDTCStatus/17
Dcm_Dsl_RoeServices_TriggerOnDTCStatus (uint8 DTCStatusOld, uint8 DTCStatusNew)
{
  uint8 PreconfIdx;
  unsigned char Dcm_Dsl_RoeServices_Initialized.12_1;
  unsigned char _2;
  short unsigned int Dcm_RoeInterMsgCycle.13_3;
  unsigned char _4;
  unsigned char _5;
  int _6;
  unsigned char _7;
  unsigned char _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Initialized.12_1 = Dcm_Dsl_RoeServices_Initialized;
  if (Dcm_Dsl_RoeServices_Initialized.12_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[0].State;
  if (_2 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 124124555]:
  Dcm_RoeInterMsgCycle.13_3 = Dcm_RoeInterMsgCycle;
  if (Dcm_RoeInterMsgCycle.13_3 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 62062277]:
  # DEBUG BEGIN_STMT
  PreconfIdx_11 = Dcm_Dsl_RoeServices_Runtime_Data[0].PreconfIdx;
  # DEBUG PreconfIdx => PreconfIdx_11
  # DEBUG BEGIN_STMT
  _4 = ~DTCStatusOld_12(D);
  _5 = _4 & DTCStatusNew_13(D);
  _6 = (int) PreconfIdx_11;
  _7 = Dcm_RoeEventPreconfList[_6].DTCStatusMask;
  _8 = _5 & _7;
  if (_8 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 6> [local count: 20480552]:
  # DEBUG BEGIN_STMT
  Dcm_Dem_RoeServices_CommonTriggerProcedure (0);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RoeServices_StopResponseOnEvent (Dcm_Dsl_RoeServices_StopResponseOnEvent, funcdef_no=12, decl_uid=6610, cgraph_uid=13, symbol_order=19)

Modification phase of node Dcm_Dsl_RoeServices_StopResponseOnEvent/19
Dcm_Dsl_RoeServices_StopResponseOnEvent (boolean StoreEvent)
{
  boolean EventsToStop[2];
  Dcm_RoeEventTypeType ClearedEvents;
  Dcm_RoeEventTypeType EventType;
  Std_ReturnType RetVal;
  int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  int _6;
  unsigned char _7;
  unsigned char _8;

  <bb 2> [local count: 363366676]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ClearedEvents => 0
  # DEBUG BEGIN_STMT
  EventsToStop = "\x00";
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventType => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventType_11;
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[_1].State;
  _3 = _2 + 255;
  if (_3 <= 1)
    goto <bb 4>; [41.00%]
  else
    goto <bb 7>; [59.00%]

  <bb 4> [local count: 293504107]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsl_RoeServices_Runtime_Data[_1].EventWindowTime;
  if (_4 == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 99791396]:
  if (StoreEvent_25(D) == 1)
    goto <bb 10>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 288015580]:
  # DEBUG BEGIN_STMT
  EventsToStop[_1] = 1;
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 422359568]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ClearedEvents_24 = ClearedEvents_14 + 1;
  # DEBUG ClearedEvents => ClearedEvents_24

  <bb 8> [local count: 710375148]:
  # ClearedEvents_13 = PHI <ClearedEvents_14(6), ClearedEvents_24(7)>
  # DEBUG ClearedEvents => ClearedEvents_13
  # DEBUG BEGIN_STMT
  EventType_27 = EventType_11 + 1;
  # DEBUG EventType => EventType_27

  <bb 9> [local count: 1073741824]:
  # EventType_11 = PHI <0(2), EventType_27(8)>
  # ClearedEvents_14 = PHI <0(2), ClearedEvents_13(8)>
  # DEBUG ClearedEvents => ClearedEvents_14
  # DEBUG EventType => EventType_11
  # DEBUG BEGIN_STMT
  if (EventType_11 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 10>; [33.33%]

  <bb 10> [local count: 363366677]:
  # RetVal_9 = PHI <49(5), 1(9)>
  # ClearedEvents_5 = PHI <ClearedEvents_14(5), ClearedEvents_14(9)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  if (RetVal_9 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 123544670]:
  if (ClearedEvents_5 == 2)
    goto <bb 21>; [21.72%]
  else
    goto <bb 12>; [78.28%]

  <bb 12> [local count: 336532775]:
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  if (RetVal_9 == 1)
    goto <bb 22>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 22> [local count: 114421143]:
  goto <bb 20>; [100.00%]

  <bb 13> [local count: 228876617]:
  # DEBUG BEGIN_STMT
  _6 = (int) EventType_12;
  _7 = EventsToStop[_6];
  if (_7 == 1)
    goto <bb 14>; [34.00%]
  else
    goto <bb 19>; [66.00%]

  <bb 14> [local count: 77818050]:
  # DEBUG BEGIN_STMT
  _8 = Dcm_Dsl_RoeServices_Runtime_Data[_6].State;
  if (_8 == 2)
    goto <bb 15>; [20.24%]
  else
    goto <bb 16>; [79.76%]

  <bb 15> [local count: 15750373]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ChangeState (EventType_12, 1);

  <bb 16> [local count: 77818050]:
  # DEBUG BEGIN_STMT
  if (StoreEvent_25(D) == 1)
    goto <bb 17>; [20.24%]
  else
    goto <bb 18>; [79.76%]

  <bb 17> [local count: 15750373]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Persistent_Data[_6].Session = 0;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Persistent_Data[_6].State = 1;
  # DEBUG BEGIN_STMT
  NvM_ASR40_SetRamBlockStatus (3, 1);

  <bb 18> [local count: 77818050]:
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_6].Session = 0;

  <bb 19> [local count: 228876617]:
  # DEBUG BEGIN_STMT
  EventType_33 = EventType_12 + 1;
  # DEBUG EventType => EventType_33

  <bb 20> [local count: 343297760]:
  # EventType_12 = PHI <EventType_33(19), 0(22)>
  # DEBUG EventType => EventType_12
  # DEBUG BEGIN_STMT
  if (EventType_12 != 2)
    goto <bb 13>; [66.67%]
  else
    goto <bb 21>; [33.33%]

  <bb 21> [local count: 363366677]:
  # RetVal_10 = PHI <RetVal_9(12), 0(20), 36(11)>
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventsToStop ={v} {CLOBBER};
  return RetVal_10;

}



;; Function Dcm_Dsl_RoeServices_ReportActivatedEvents (Dcm_Dsl_RoeServices_ReportActivatedEvents, funcdef_no=13, decl_uid=6613, cgraph_uid=14, symbol_order=20)

Modification phase of node Dcm_Dsl_RoeServices_ReportActivatedEvents/20
Dcm_Dsl_RoeServices_ReportActivatedEvents (Dcm_MsgItemType * ResData, Dcm_MsgLenType * MsgLen)
{
  unsigned char event$DTCStatusMask;
  unsigned char event$EventType;
  short unsigned int event$Did;
  Dcm_RoeEventTypeType EventType;
  uint8 numOfActiveEvents;
  Dcm_MsgLenType offset;
  int _1;
  unsigned char _2;
  unsigned char _4;
  int _5;
  Dcm_MsgItemType * _6;
  Dcm_MsgItemType * _7;
  unsigned char _8;
  short unsigned int _9;
  Dcm_MsgItemType * _10;
  unsigned char _11;
  Dcm_MsgItemType * _12;
  unsigned char _13;
  Dcm_MsgItemType * _14;
  Dcm_MsgItemType * _15;
  Dcm_MsgItemType * _16;
  Dcm_MsgItemType * _17;
  unsigned char _18;
  Dcm_MsgItemType * _19;
  unsigned char _20;
  Dcm_MsgItemType * _21;
  Dcm_MsgItemType * _22;
  Dcm_MsgItemType * _23;
  const struct Dcm_RoeEventPreconfListType * _34;

  <bb 2> [local count: 357902488]:
  # DEBUG BEGIN_STMT
  # DEBUG offset => 1
  # DEBUG BEGIN_STMT
  # DEBUG numOfActiveEvents => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventType => 0
  goto <bb 11>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventType_29;
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[_1].State;
  if (_2 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 4> [local count: 243393649]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_Dsl_RoeServices_Runtime_Data[_1].PreconfIdx;
  _5 = (int) _4;
  _34 = &Dcm_RoeEventPreconfList[_5];
  event$Did_68 = MEM[(struct  *)_34];
  # DEBUG event$Did => event$Did_68
  event$EventType_69 = MEM[(struct  *)_34 + 3B];
  # DEBUG event$EventType => event$EventType_69
  event$DTCStatusMask_70 = MEM[(struct  *)_34 + 4B];
  # DEBUG event$DTCStatusMask => event$DTCStatusMask_70
  # DEBUG BEGIN_STMT
  switch (event$EventType_69) <default: <L11> [33.33%], case 0: <L3> [33.33%], case 1: <L2> [33.33%]>

  <bb 5> [local count: 81123103]:
<L2>:
  # DEBUG BEGIN_STMT
  _6 = ResData_37(D) + offset_26;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *_6 = 67;
  # DEBUG BEGIN_STMT
  offset_42 = offset_26 + 1;
  # DEBUG offset => offset_42
  # DEBUG BEGIN_STMT
  _7 = ResData_37(D) + offset_42;
  _8 = Dcm_Dsl_RoeServices_Runtime_Data[1].EventWindowTime;
  *_7 = _8;
  # DEBUG BEGIN_STMT
  offset_44 = offset_26 + 2;
  # DEBUG offset => offset_44
  # DEBUG BEGIN_STMT
  _9 = event$Did_68 >> 8;
  _10 = ResData_37(D) + offset_44;
  _11 = (unsigned char) _9;
  *_10 = _11;
  # DEBUG BEGIN_STMT
  offset_46 = offset_26 + 3;
  # DEBUG offset => offset_46
  # DEBUG BEGIN_STMT
  _12 = ResData_37(D) + offset_46;
  _13 = (unsigned char) event$Did_68;
  *_12 = _13;
  # DEBUG BEGIN_STMT
  offset_48 = offset_26 + 4;
  # DEBUG offset => offset_48
  # DEBUG BEGIN_STMT
  _14 = ResData_37(D) + offset_48;
  *_14 = 34;
  # DEBUG BEGIN_STMT
  offset_50 = offset_26 + 5;
  # DEBUG offset => offset_50
  # DEBUG BEGIN_STMT
  _15 = ResData_37(D) + offset_50;
  *_15 = _11;
  # DEBUG BEGIN_STMT
  offset_52 = offset_26 + 6;
  # DEBUG offset => offset_52
  # DEBUG BEGIN_STMT
  _16 = ResData_37(D) + offset_52;
  *_16 = _13;
  # DEBUG BEGIN_STMT
  offset_54 = offset_26 + 7;
  # DEBUG offset => offset_54
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 81123103]:
<L3>:
  # DEBUG BEGIN_STMT
  _17 = ResData_37(D) + offset_26;
  *_17 = 1;
  # DEBUG BEGIN_STMT
  _18 = Dcm_Dsl_RoeServices_Persistent_Data[0].State;
  if (_18 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 40561552]:
  # DEBUG BEGIN_STMT
  *_17 = 65;

  <bb 8> [local count: 81123103]:
  # DEBUG BEGIN_STMT
  offset_57 = offset_26 + 1;
  # DEBUG offset => offset_57
  # DEBUG BEGIN_STMT
  _19 = ResData_37(D) + offset_57;
  _20 = Dcm_Dsl_RoeServices_Runtime_Data[0].EventWindowTime;
  *_19 = _20;
  # DEBUG BEGIN_STMT
  offset_59 = offset_26 + 2;
  # DEBUG offset => offset_59
  # DEBUG BEGIN_STMT
  _21 = ResData_37(D) + offset_59;
  *_21 = event$DTCStatusMask_70;
  # DEBUG BEGIN_STMT
  offset_61 = offset_26 + 3;
  # DEBUG offset => offset_61
  # DEBUG BEGIN_STMT
  _22 = ResData_37(D) + offset_61;
  *_22 = 25;
  # DEBUG BEGIN_STMT
  offset_63 = offset_26 + 4;
  # DEBUG offset => offset_63
  # DEBUG BEGIN_STMT
  _23 = ResData_37(D) + offset_63;
  *_23 = 14;
  # DEBUG BEGIN_STMT
  offset_65 = offset_26 + 5;
  # DEBUG offset => offset_65
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 243369310]:
  # offset_24 = PHI <offset_54(5), offset_65(8), offset_26(4)>
<L11>:
  # DEBUG offset => offset_24
  # DEBUG BEGIN_STMT
  numOfActiveEvents_66 = numOfActiveEvents_28 + 1;
  # DEBUG numOfActiveEvents => numOfActiveEvents_66
  # DEBUG D#1 => {CLOBBER}
  # DEBUG event$Did => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG event$EventType => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG event$DTCStatusMask => D#3

  <bb 10> [local count: 715839336]:
  # offset_25 = PHI <offset_26(3), offset_24(9)>
  # numOfActiveEvents_27 = PHI <numOfActiveEvents_28(3), numOfActiveEvents_66(9)>
  # DEBUG numOfActiveEvents => numOfActiveEvents_27
  # DEBUG offset => offset_25
  # DEBUG BEGIN_STMT
  EventType_67 = EventType_29 + 1;
  # DEBUG EventType => EventType_67

  <bb 11> [local count: 1073741824]:
  # offset_26 = PHI <1(2), offset_25(10)>
  # numOfActiveEvents_28 = PHI <0(2), numOfActiveEvents_27(10)>
  # EventType_29 = PHI <0(2), EventType_67(10)>
  # DEBUG EventType => EventType_29
  # DEBUG numOfActiveEvents => numOfActiveEvents_28
  # DEBUG offset => offset_26
  # DEBUG BEGIN_STMT
  if (EventType_29 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 12>; [33.33%]

  <bb 12> [local count: 357878150]:
  # offset_3 = PHI <offset_26(11)>
  # numOfActiveEvents_35 = PHI <numOfActiveEvents_28(11)>
  # DEBUG BEGIN_STMT
  *ResData_37(D) = numOfActiveEvents_35;
  # DEBUG BEGIN_STMT
  *MsgLen_39(D) = offset_3;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsl_RoeServices_StartResponseOnEvent (Dcm_Dsl_RoeServices_StartResponseOnEvent, funcdef_no=14, decl_uid=6616, cgraph_uid=15, symbol_order=21)

Modification phase of node Dcm_Dsl_RoeServices_StartResponseOnEvent/21
Dcm_Dsl_RoeServices_StartResponseOnEvent (boolean StoreEvent, PduIdType RxPduId)
{
  Dcm_SesCtrlType CurrentSession;
  boolean EventsToStart[2];
  Dcm_RoeEventTypeType ClearedEvents;
  Dcm_RoeEventTypeType EventType;
  Std_ReturnType RetVal;
  int _1;
  unsigned char _2;
  unsigned char _3;
  int _5;
  unsigned char _6;
  unsigned char CurrentSession.17_7;
  unsigned char _8;
  unsigned char CurrentSession.18_9;
  struct Dcm_RoeEventDataType * _10;
  struct Dcm_RoeEventDataType * _11;

  <bb 2> [local count: 362429610]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ClearedEvents => 0
  # DEBUG BEGIN_STMT
  EventsToStart = "\x00";
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG EventType => 0
  goto <bb 10>; [100.00%]

  <bb 3> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _1 = (int) EventType_14;
  _2 = Dcm_Dsl_RoeServices_Runtime_Data[_1].State;
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 4> [local count: 243393649]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_Dsl_RoeServices_Runtime_Data[_1].OrigEventWindowTime;
  if (_3 == 3)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 82753841]:
  if (StoreEvent_27(D) == 1)
    goto <bb 11>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 238842189]:
  # DEBUG BEGIN_STMT
  EventsToStart[_1] = 1;
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 472470025]:
  # DEBUG BEGIN_STMT
  if (_2 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 236235012]:
  # DEBUG BEGIN_STMT
  ClearedEvents_26 = ClearedEvents_17 + 1;
  # DEBUG ClearedEvents => ClearedEvents_26

  <bb 9> [local count: 711312214]:
  # ClearedEvents_16 = PHI <ClearedEvents_17(6), ClearedEvents_17(7), ClearedEvents_26(8)>
  # DEBUG ClearedEvents => ClearedEvents_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventType_29 = EventType_14 + 1;
  # DEBUG EventType => EventType_29

  <bb 10> [local count: 1073741824]:
  # EventType_14 = PHI <0(2), EventType_29(9)>
  # ClearedEvents_17 = PHI <0(2), ClearedEvents_16(9)>
  # DEBUG ClearedEvents => ClearedEvents_17
  # DEBUG EventType => EventType_14
  # DEBUG BEGIN_STMT
  if (EventType_14 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 11>; [33.33%]

  <bb 11> [local count: 362429612]:
  # RetVal_12 = PHI <49(5), 1(10)>
  # ClearedEvents_4 = PHI <ClearedEvents_17(5), ClearedEvents_17(10)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  if (RetVal_12 == 1)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 123226068]:
  if (ClearedEvents_4 == 2)
    goto <bb 21>; [21.72%]
  else
    goto <bb 13>; [78.28%]

  <bb 13> [local count: 335664910]:
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  if (RetVal_12 == 1)
    goto <bb 22>; [34.00%]
  else
    goto <bb 21>; [66.00%]

  <bb 22> [local count: 114126069]:
  goto <bb 20>; [100.00%]

  <bb 14> [local count: 228286380]:
  # DEBUG BEGIN_STMT
  _5 = (int) EventType_15;
  _6 = EventsToStart[_5];
  if (_6 == 1)
    goto <bb 15>; [20.24%]
  else
    goto <bb 19>; [79.76%]

  <bb 15> [local count: 46205163]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_GetSesCtrlTypeExt (&CurrentSession);
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_5].RxPduId = RxPduId_31(D);
  # DEBUG BEGIN_STMT
  CurrentSession.17_7 = CurrentSession;
  Dcm_Dsl_RoeServices_Runtime_Data[_5].Session = CurrentSession.17_7;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_Runtime_Data[_5].ActivationCnt = 0;
  # DEBUG BEGIN_STMT
  _8 = Dcm_Dsl_RoeServices_Runtime_Data[_5].OrigEventWindowTime;
  Dcm_Dsl_RoeServices_Runtime_Data[_5].EventWindowTime = _8;
  # DEBUG BEGIN_STMT
  Dcm_Dsl_RoeServices_ChangeState (EventType_15, 2);
  # DEBUG BEGIN_STMT
  if (StoreEvent_27(D) == 1)
    goto <bb 16>; [34.00%]
  else
    goto <bb 18>; [66.00%]

  <bb 16> [local count: 15709756]:
  CurrentSession.18_9 = CurrentSession;
  if (CurrentSession.18_9 == 1)
    goto <bb 17>; [20.24%]
  else
    goto <bb 18>; [79.76%]

  <bb 17> [local count: 3179655]:
  # DEBUG BEGIN_STMT
  _10 = &Dcm_Dsl_RoeServices_Persistent_Data[_5];
  _11 = &Dcm_Dsl_RoeServices_Runtime_Data[_5];
  TS_MemCpy32 (_10, _11, 8);
  # DEBUG BEGIN_STMT
  NvM_ASR40_SetRamBlockStatus (3, 1);

  <bb 18> [local count: 46205163]:
  CurrentSession ={v} {CLOBBER};

  <bb 19> [local count: 228286380]:
  # DEBUG BEGIN_STMT
  EventType_40 = EventType_15 + 1;
  # DEBUG EventType => EventType_40

  <bb 20> [local count: 342412449]:
  # EventType_15 = PHI <EventType_40(19), 0(22)>
  # DEBUG EventType => EventType_15
  # DEBUG BEGIN_STMT
  if (EventType_15 != 2)
    goto <bb 14>; [66.67%]
  else
    goto <bb 21>; [33.33%]

  <bb 21> [local count: 362429612]:
  # RetVal_13 = PHI <RetVal_12(13), 0(20), 36(12)>
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EventsToStart ={v} {CLOBBER};
  return RetVal_13;

}


