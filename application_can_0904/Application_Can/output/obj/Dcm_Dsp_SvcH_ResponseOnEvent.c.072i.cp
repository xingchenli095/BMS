
IPA constant propagation start:
Determining dynamic type for call: serviceProcessStatus_5 = Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon (OpStatus_2(D), pMsgContext_3(D), 1);
  Starting walk at: serviceProcessStatus_5 = Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon (OpStatus_2(D), pMsgContext_3(D), 1);
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_5 = Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon (OpStatus_2(D), pMsgContext_3(D), 1);
  Starting walk at: serviceProcessStatus_5 = Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon (OpStatus_2(D), pMsgContext_3(D), 1);
  instance pointer: pMsgContext_3(D)  Outer instance pointer: pMsgContext_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: serviceProcessStatus_44 = subServiceHandler_42 (OpStatus_28(D), pMsgContext_25(D));
  Starting walk at: serviceProcessStatus_44 = subServiceHandler_42 (OpStatus_28(D), pMsgContext_25(D));
  instance pointer: pMsgContext_25(D)  Outer instance pointer: pMsgContext_25(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:subServiceHandler_42 = Dcm_Dsp_ExtractSubServiceHandler (OpStatus_28(D), pMsgContext_25(D));
  Function call may change dynamic type:instIdx_38 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_6, 1);
  Function call may change dynamic type:GetRxPduIdResult_32 = Dcm_Dsl_RoeServices_GetRxPduId (&RxPduId);
  Function call may change dynamic type:Dcm_Dsl_RxConnectionGetRxPduIdInformation (_2, &RxPduIdInfo);
  Function call may change dynamic type:RoeInitialized_24 = Dcm_Dsl_RoeServices_IsInitialized ();
  Function call may change dynamic type:Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxPduId.0_3, &StoredRxPduIdInfo);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsl_RoeServices_ReportActivatedEvents/17:
  Jump functions of caller  Dcm_Dsl_RoeServices_StopResponseOnEvent/16:
  Jump functions of caller  Dcm_Dsl_RoeServices_StartResponseOnEvent/15:
  Jump functions of caller  Dcm_Dsp_ExtractSubServiceHandler/14:
  Jump functions of caller  Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/10:
  Jump functions of caller  Dcm_Dsl_RoeServices_GetRxPduId/9:
  Jump functions of caller  Dcm_Dsl_RxConnectionGetRxPduIdInformation/8:
  Jump functions of caller  Dcm_ExternalSetNegResponse/7:
  Jump functions of caller  Dcm_Dsl_RoeServices_IsInitialized/6:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/5:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/4:
    callsite  Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/4 -> Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/2:
    callsite  Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/2 -> Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1:
  Jump functions of caller  Dcm_Dsp_ResponseOnEvent_SvcH/0:
    indirect simple callsite, calling param -1, offset 0, for stmt serviceProcessStatus_44 = subServiceHandler_42 (OpStatus_28(D), pMsgContext_25(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_ResponseOnEvent_SvcH for cloning; -fipa-cp-clone disabled.

overall_size: 178, max_new_size: 11001
 - context independent values, size: 19, time_benefit: 1.000000
 - context independent values, size: 31, time_benefit: 1.227800
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 33, time_benefit: 1.227800
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/5:
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
  Node: Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/4:
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
  Node: Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3:
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
    param [2]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         boolean [1, 1]
        AGGS VARIABLE
  Node: Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/2:
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
  Node: Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1:
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
    param [2]: 1 [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x1, mask = 0x0
         boolean [1, 1]
        AGGS VARIABLE
  Node: Dcm_Dsp_ResponseOnEvent_SvcH/0:
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

IPA decision stage:

 - Creating a specialized node of Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3 for all known contexts.
    replacing param #2 Persistence with const 1
 - Creating a specialized node of Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1 for all known contexts.
    replacing param #2 Persistence with const 1
Propagated bits info for function Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop/19:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop/18:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3:
 param 2: value = 0x1, mask = 0x0
Propagated bits info for function Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1:
 param 2: value = 0x1, mask = 0x0

IPA constant propagation end

Reclaiming functions: Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3 Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop.0/19 (Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop) @06e730e0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_RoeServices_StartResponseOnEvent/15 (182536110 (estimated locally),0.17 per call) Dcm_ExternalSetNegResponse/7 (60236916 (estimated locally),0.06 per call) Dcm_ExternalSetNegResponse/7 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop.0/18 (Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop) @06e73000
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: Dcm_Dsl_RoeServices_StopResponseOnEvent/16 (182536110 (estimated locally),0.17 per call) Dcm_ExternalSetNegResponse/7 (60236916 (estimated locally),0.06 per call) Dcm_ExternalSetNegResponse/7 (354334802 (estimated locally),0.33 per call) 
Dcm_Dsl_RoeServices_ReportActivatedEvents/17 (Dcm_Dsl_RoeServices_ReportActivatedEvents) @06d3a380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/5 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Dcm_Dsl_RoeServices_StopResponseOnEvent/16 (Dcm_Dsl_RoeServices_StopResponseOnEvent) @06d3a1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop/18 (182536110 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsl_RoeServices_StartResponseOnEvent/15 (Dcm_Dsl_RoeServices_StartResponseOnEvent) @06d2fee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop/19 (182536110 (estimated locally),0.17 per call) 
  Calls: 
Dcm_Dsp_ExtractSubServiceHandler/14 (Dcm_Dsp_ExtractSubServiceHandler) @06d2fc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_SvcH/0 (826302802 (estimated locally),0.77 per call) 
  Calls: 
Dcm_SidTabConfig/13 (Dcm_SidTabConfig) @06c2dc18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_ResponseOnEvent_SvcH/0 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_ProtocolConfig/12 (Dcm_ProtocolConfig) @06c2dbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_ResponseOnEvent_SvcH/0 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_HsmInfo/11 (Dcm_HsmInfo) @06c2db88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_ResponseOnEvent_SvcH/0 (read)Dcm_Dsp_ResponseOnEvent_SvcH/0 (read)
  Availability: not_available
  Varpool flags:
Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/10 (Dcm_Dsl_Supervisor_GetProcessingProtocolIndex) @06d2fb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_SvcH/0 (826302802 (estimated locally),0.77 per call) 
  Calls: 
Dcm_Dsl_RoeServices_GetRxPduId/9 (Dcm_Dsl_RoeServices_GetRxPduId) @06d2fa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_SvcH/0 (199548307 (estimated locally),0.19 per call) 
  Calls: 
Dcm_Dsl_RxConnectionGetRxPduIdInformation/8 (Dcm_Dsl_RxConnectionGetRxPduIdInformation) @06d2f9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_SvcH/0 (65850941 (estimated locally),0.06 per call) Dcm_Dsp_ResponseOnEvent_SvcH/0 (199548307 (estimated locally),0.19 per call) 
  Calls: 
Dcm_ExternalSetNegResponse/7 (Dcm_ExternalSetNegResponse) @06d2f8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop/19 (60236916 (estimated locally),0.06 per call) Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop/19 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop/18 (60236916 (estimated locally),0.06 per call) Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop/18 (354334802 (estimated locally),0.33 per call) Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/5 (708669605 (estimated locally),0.66 per call) Dcm_Dsp_ResponseOnEvent_SvcH/0 (22382735 (estimated locally),0.02 per call) Dcm_Dsp_ResponseOnEvent_SvcH/0 (225056286 (estimated locally),0.21 per call) 
  Calls: 
Dcm_Dsl_RoeServices_IsInitialized/6 (Dcm_Dsl_RoeServices_IsInitialized) @06d2f7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_ResponseOnEvent_SvcH/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/5 (Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH) @06d2f540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_ExternalSetNegResponse/7 (708669605 (estimated locally),0.66 per call) Dcm_Dsl_RoeServices_ReportActivatedEvents/17 (365072220 (estimated locally),0.34 per call) 
Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/4 (Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH) @06d2f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon.constprop/18 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon/3 (Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon) @06d2f1c0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/2 (Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH) @06d2f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon.constprop/19 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon/1 (Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon) @06c26ee0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_ResponseOnEvent_SvcH/0 (Dcm_Dsp_ResponseOnEvent_SvcH) @06c26d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_ProtocolConfig/12 (read)Dcm_SidTabConfig/13 (read)Dcm_HsmInfo/11 (read)Dcm_HsmInfo/11 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_ExtractSubServiceHandler/14 (826302802 (estimated locally),0.77 per call) Dcm_Dsl_Supervisor_GetProcessingProtocolIndex/10 (826302802 (estimated locally),0.77 per call) Dcm_ExternalSetNegResponse/7 (22382735 (estimated locally),0.02 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/8 (65850941 (estimated locally),0.06 per call) Dcm_Dsl_RoeServices_GetRxPduId/9 (199548307 (estimated locally),0.19 per call) Dcm_Dsl_RxConnectionGetRxPduIdInformation/8 (199548307 (estimated locally),0.19 per call) Dcm_ExternalSetNegResponse/7 (225056286 (estimated locally),0.21 per call) Dcm_Dsl_RoeServices_IsInitialized/6 (1073741823 (estimated locally),1.00 per call) 
   Indirect call(826302802 (estimated locally),0.77 per call) 

;; Function Dcm_Dsp_ResponseOnEvent_SvcH (Dcm_Dsp_ResponseOnEvent_SvcH, funcdef_no=0, decl_uid=6619, cgraph_uid=1, symbol_order=0)

Modification phase of node Dcm_Dsp_ResponseOnEvent_SvcH/0
Dcm_Dsp_ResponseOnEvent_SvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  const struct Dcm_SubSidTabEntryConfigType * const curSsConfig;
  const uint8 instIdx;
  struct Dcm_RxPduIdInfoType StoredRxPduIdInfo;
  Std_ReturnType GetRxPduIdResult;
  PduIdType RxPduId;
  struct Dcm_RxPduIdInfoType RxPduIdInfo;
  boolean RoeInitialized;
  uint8 SubServiceID;
  Std_ReturnType (*Dcm_GenericServiceHandlerType) (Dcm_OpStatusType, struct Dcm_MsgContextType *) subServiceHandler;
  Std_ReturnType serviceProcessStatus;
  Dcm_MsgItemType * _1;
  short unsigned int _2;
  short unsigned int RxPduId.0_3;
  unsigned char _4;
  unsigned char _5;
  short unsigned int _6;
  int _7;
  unsigned char _8;
  int _9;
  const struct Dcm_SidTabEntryConfigType * _10;
  unsigned char _11;
  unsigned int _12;
  unsigned int _13;
  const struct Dcm_SidTabEntryConfigType * _14;
  unsigned char _15;
  unsigned int _16;
  unsigned int _17;
  const struct Dcm_SubSidTabEntryConfigType * _18;
  Std_ReturnType (*<T686>) (Dcm_OpStatusType, struct Dcm_MsgContextType *) _19;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolCheckSucessful => 0
  # DEBUG BEGIN_STMT
  RoeInitialized_24 = Dcm_Dsl_RoeServices_IsInitialized ();
  # DEBUG RoeInitialized => RoeInitialized_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RoeInitialized_24 == 0)
    goto <bb 3>; [20.96%]
  else
    goto <bb 4>; [79.04%]

  <bb 3> [local count: 225056286]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_25(D), 34);
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  goto <bb 17>; [100.00%]

  <bb 4> [local count: 848685536]:
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_25(D)->reqData;
  SubServiceID_26 = *_1;
  # DEBUG SubServiceID => SubServiceID_26
  # DEBUG BEGIN_STMT
  SubServiceID_27 = SubServiceID_26 & 191;
  # DEBUG SubServiceID => SubServiceID_27
  # DEBUG BEGIN_STMT
  if (SubServiceID_27 == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 560132455]:
  if (SubServiceID_27 == 5)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 6> [local count: 369687420]:
  if (SubServiceID_27 == 4)
    goto <bb 7>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 7> [local count: 604691841]:
  if (OpStatus_28(D) == 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 13>; [67.00%]

  <bb 8> [local count: 199548307]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RxPduId = 0;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_25(D)->dcmRxPduId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (_2, &RxPduIdInfo);
  # DEBUG BEGIN_STMT
  GetRxPduIdResult_32 = Dcm_Dsl_RoeServices_GetRxPduId (&RxPduId);
  # DEBUG GetRxPduIdResult => GetRxPduIdResult_32
  # DEBUG BEGIN_STMT
  if (GetRxPduIdResult_32 == 0)
    goto <bb 10>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 9> [local count: 133697366]:
  # DEBUG ProtocolCheckSucessful => 1
  RxPduIdInfo ={v} {CLOBBER};
  RxPduId ={v} {CLOBBER};
  # DEBUG ProtocolCheckSucessful => 1
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 65850941]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RxPduId.0_3 = RxPduId;
  Dcm_Dsl_RxConnectionGetRxPduIdInformation (RxPduId.0_3, &StoredRxPduIdInfo);
  # DEBUG BEGIN_STMT
  _4 = StoredRxPduIdInfo.ProtocolIndex;
  _5 = RxPduIdInfo.ProtocolIndex;
  if (_4 == _5)
    goto <bb 11>; [66.01%]
  else
    goto <bb 12>; [33.99%]

  <bb 11> [local count: 43468206]:
  # DEBUG ProtocolCheckSucessful => 1
  StoredRxPduIdInfo ={v} {CLOBBER};
  # DEBUG ProtocolCheckSucessful => 1
  RxPduIdInfo ={v} {CLOBBER};
  RxPduId ={v} {CLOBBER};
  # DEBUG ProtocolCheckSucessful => 1
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 22382735]:
  # DEBUG BEGIN_STMT
  # DEBUG ProtocolCheckSucessful => 0
  StoredRxPduIdInfo ={v} {CLOBBER};
  # DEBUG ProtocolCheckSucessful => 0
  RxPduIdInfo ={v} {CLOBBER};
  RxPduId ={v} {CLOBBER};
  # DEBUG ProtocolCheckSucessful => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_25(D), 34);
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26
  goto <bb 17>; [100.00%]

  <bb 13> [local count: 826302802]:
  # DEBUG ProtocolCheckSucessful => NULL
  # DEBUG BEGIN_STMT
  _6 = pMsgContext_25(D)->dcmRxPduId;
  instIdx_38 = Dcm_Dsl_Supervisor_GetProcessingProtocolIndex (_6, 1);
  # DEBUG instIdx => instIdx_38
  # DEBUG BEGIN_STMT
  _7 = (int) instIdx_38;
  # DEBUG D#1 => &Dcm_HsmInfo[_7]
  # DEBUG curHsmInfo => D#1
  # DEBUG BEGIN_STMT
  _8 = Dcm_ProtocolConfig[_7].ServiceTableIndex;
  _9 = (int) _8;
  # DEBUG D#2 => &Dcm_SidTabConfig[_9]
  # DEBUG curSidTabConfig => D#2
  # DEBUG BEGIN_STMT
  _10 = MEM[(const struct Dcm_SidTabConfigType *)&Dcm_SidTabConfig][_9].Entries;
  _11 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_7].sidTabEntryInd;
  _12 = (unsigned int) _11;
  _13 = _12 * 32;
  _14 = _10 + _13;
  curSsConfig_40 = _14->SubServices;
  # DEBUG curSsConfig => curSsConfig_40
  # DEBUG BEGIN_STMT
  subServiceHandler_42 = Dcm_Dsp_ExtractSubServiceHandler (OpStatus_28(D), pMsgContext_25(D));
  # DEBUG subServiceHandler => subServiceHandler_42
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  serviceProcessStatus_44 = subServiceHandler_42 (OpStatus_28(D), pMsgContext_25(D));
  # DEBUG serviceProcessStatus => serviceProcessStatus_44
  # DEBUG BEGIN_STMT
  if (serviceProcessStatus_44 == 0)
    goto <bb 16>; [35.00%]
  else
    goto <bb 14>; [65.00%]

  <bb 14> [local count: 537096822]:
  if (serviceProcessStatus_44 == 1)
    goto <bb 15>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 15> [local count: 182612919]:
  _15 = MEM[(struct Dcm_HsmInfoType *)&Dcm_HsmInfo][_7].subServiceIdIdx;
  _16 = (unsigned int) _15;
  _17 = _16 * 24;
  _18 = curSsConfig_40 + _17;
  _19 = _18->IntSrvHandler;
  if (_19 == 0B)
    goto <bb 16>; [18.75%]
  else
    goto <bb 17>; [81.25%]

  <bb 16> [local count: 323445903]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 26

  <bb 17> [local count: 1073741824]:
  # serviceProcessStatus_20 = PHI <26(3), 1(15), 26(12), serviceProcessStatus_44(14), 26(16)>
  # DEBUG serviceProcessStatus => serviceProcessStatus_20
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_20;

}



;; Function Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH (Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH, funcdef_no=2, decl_uid=6622, cgraph_uid=3, symbol_order=2)

Modification phase of node Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH/2
Dcm_Dsp_ResponseOnEvent_StartResponseOnEventPersistent_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType serviceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  serviceProcessStatus_5 = Dcm_Dsp_ResponseOnEvent_StartResponseOnEventCommon (OpStatus_2(D), pMsgContext_3(D), 1);
  # DEBUG serviceProcessStatus => serviceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_5;

}



;; Function Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH (Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH, funcdef_no=4, decl_uid=6628, cgraph_uid=5, symbol_order=4)

Modification phase of node Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH/4
Dcm_Dsp_ResponseOnEvent_StopResponseOnEventPersistent_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Std_ReturnType serviceProcessStatus;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  serviceProcessStatus_5 = Dcm_Dsp_ResponseOnEvent_StopResponseOnEventCommon (OpStatus_2(D), pMsgContext_3(D), 1);
  # DEBUG serviceProcessStatus => serviceProcessStatus_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return serviceProcessStatus_5;

}



;; Function Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH (Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH, funcdef_no=5, decl_uid=6625, cgraph_uid=6, symbol_order=5)

Modification phase of node Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH/5
Dcm_Dsp_ResponseOnEvent_ReportActivatedEvents_SSvcH (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  Dcm_MsgLenType resLength;
  long unsigned int _1;
  Dcm_MsgItemType * _2;
  Dcm_MsgItemType * _3;
  Dcm_MsgItemType * _4;
  long unsigned int resLength.1_5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = pMsgContext_9(D)->reqDataLen;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = pMsgContext_9(D)->resData;
  _3 = _2 + 1;
  Dcm_Dsl_RoeServices_ReportActivatedEvents (_3, &resLength);
  # DEBUG BEGIN_STMT
  _4 = pMsgContext_9(D)->resData;
  *_4 = 4;
  # DEBUG BEGIN_STMT
  resLength.1_5 = resLength;
  _6 = resLength.1_5 + 1;
  pMsgContext_9(D)->resDataLen = _6;
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 0
  resLength ={v} {CLOBBER};
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  Dcm_ExternalSetNegResponse (pMsgContext_9(D), 19);
  # DEBUG BEGIN_STMT
  # DEBUG serviceProcessStatus => 0

  <bb 5> [local count: 1073741824]:
  # DEBUG serviceProcessStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


