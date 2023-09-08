
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_ASR40_GetCurrentPNCComMode/23:
  Jump functions of caller  ComM_ASR40_GetCurrentComMode/22:
  Jump functions of caller  ComM_ASR40_GetRequestedComMode/21:
  Jump functions of caller  ComM_ASR40_GetMaxComMode/20:
  Jump functions of caller  ComM_ASR40_RequestComMode/19:
  Jump functions of caller  ComM_EB_SetRequestedComMode/15:
  Jump functions of caller  ComM_EB_GetPncRequestedComMode/14:
  Jump functions of caller  ComM_EB_GetUserRequestedComMode/13:
  Jump functions of caller  SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/11:
  Jump functions of caller  SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/10:
  Jump functions of caller  ComM_Rte_GetCurrentPNCComMode/9:
  Jump functions of caller  ComM_Rte_GetCurrentComMode/8:
  Jump functions of caller  ComM_Rte_GetRequestedComMode/7:
  Jump functions of caller  ComM_Rte_GetMaxComMode/6:
  Jump functions of caller  ComM_Rte_RequestComMode/5:
  Jump functions of caller  ComM_RteNotify/4:
    indirect simple callsite, calling param -1, offset 0, for stmt rteReturnVal_12 = _4 (newRteMode_8);
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_EvaluateChannel/3:
  Jump functions of caller  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/2:
  Jump functions of caller  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/1:

 Propagating constants:

Not considering ComM_Rte_GetCurrentPNCComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Rte_GetCurrentComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Rte_GetRequestedComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Rte_GetMaxComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_Rte_RequestComMode for cloning; -fipa-cp-clone disabled.
Not considering ComM_RteNotify for cloning; -fipa-cp-clone disabled.
Not considering ComM_EvaluateChannel for cloning; -fipa-cp-clone disabled.
Not considering ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 for cloning; -fipa-cp-clone disabled.
Not considering ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 for cloning; -fipa-cp-clone disabled.

overall_size: 99, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: ComM_Rte_GetCurrentPNCComMode/9:
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
  Node: ComM_Rte_GetCurrentComMode/8:
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
  Node: ComM_Rte_GetRequestedComMode/7:
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
  Node: ComM_Rte_GetMaxComMode/6:
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
  Node: ComM_Rte_RequestComMode/5:
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
  Node: ComM_RteNotify/4:
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
  Node: ComM_EvaluateChannel/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/2:
  Node: ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/1:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_ASR40_GetCurrentPNCComMode/23 (ComM_ASR40_GetCurrentPNCComMode) @06d387e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Rte_GetCurrentPNCComMode/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_ASR40_GetCurrentComMode/22 (ComM_ASR40_GetCurrentComMode) @06d38620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Rte_GetCurrentComMode/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_ASR40_GetRequestedComMode/21 (ComM_ASR40_GetRequestedComMode) @06d38460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Rte_GetRequestedComMode/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_ASR40_GetMaxComMode/20 (ComM_ASR40_GetMaxComMode) @06d382a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Rte_GetMaxComMode/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_ASR40_RequestComMode/19 (ComM_ASR40_RequestComMode) @06d380e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_Rte_RequestComMode/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_RteSwitchCbk/18 (ComM_RteSwitchCbk) @06d33c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_RteNotify/4 (read)
  Availability: not_available
  Varpool flags: read-only
ComM_RteModeUser/17 (ComM_RteModeUser) @06d33bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_RteNotify/4 (read)ComM_RteNotify/4 (write)
  Availability: not_available
  Varpool flags:
ComM_RteNotificationSuccessful/16 (ComM_RteNotificationSuccessful) @06d33b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_RteNotify/4 (write)ComM_RteNotify/4 (write)
  Availability: not_available
  Varpool flags:
ComM_EB_SetRequestedComMode/15 (ComM_EB_SetRequestedComMode) @06d32d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/3 (118111601 (estimated locally),1.00 per call) 
  Calls: 
ComM_EB_GetPncRequestedComMode/14 (ComM_EB_GetPncRequestedComMode) @06d32c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/3 (955630224 (estimated locally),8.09 per call) 
  Calls: 
ComM_EB_GetUserRequestedComMode/13 (ComM_EB_GetUserRequestedComMode) @06d32b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/3 (955630220 (estimated locally),8.09 per call) 
  Calls: 
ComM_ConfigPtr/12 (ComM_ConfigPtr) @06d337e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_EvaluateChannel/3 (read)ComM_EvaluateChannel/3 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/11 (SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0) @06d328c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/3 (118111601 (estimated locally),1.00 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/10 (SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0) @06d32700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/3 (118111600 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_Rte_GetCurrentPNCComMode/9 (ComM_Rte_GetCurrentPNCComMode) @06d32540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_ASR40_GetCurrentPNCComMode/23 (1073741824 (estimated locally),1.00 per call) 
ComM_Rte_GetCurrentComMode/8 (ComM_Rte_GetCurrentComMode) @06d32380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_ASR40_GetCurrentComMode/22 (1073741824 (estimated locally),1.00 per call) 
ComM_Rte_GetRequestedComMode/7 (ComM_Rte_GetRequestedComMode) @06d321c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_ASR40_GetRequestedComMode/21 (1073741824 (estimated locally),1.00 per call) 
ComM_Rte_GetMaxComMode/6 (ComM_Rte_GetMaxComMode) @06d32000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_ASR40_GetMaxComMode/20 (1073741824 (estimated locally),1.00 per call) 
ComM_Rte_RequestComMode/5 (ComM_Rte_RequestComMode) @06ce62a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_ASR40_RequestComMode/19 (1073741824 (estimated locally),1.00 per call) 
ComM_RteNotify/4 (ComM_RteNotify) @06ce60e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ComModeToRteMode/0 (read)ComM_RteNotificationSuccessful/16 (write)ComM_RteModeUser/17 (read)ComM_RteSwitchCbk/18 (read)ComM_RteModeUser/17 (write)ComM_RteNotificationSuccessful/16 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(708669605 (estimated locally),0.66 per call) 
ComM_EvaluateChannel/3 (ComM_EvaluateChannel) @06ce6e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ConfigPtr/12 (read)ComM_ConfigPtr/12 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/11 (118111601 (estimated locally),1.00 per call) ComM_EB_SetRequestedComMode/15 (118111601 (estimated locally),1.00 per call) ComM_EB_GetPncRequestedComMode/14 (955630224 (estimated locally),8.09 per call) ComM_EB_GetUserRequestedComMode/13 (955630220 (estimated locally),8.09 per call) SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/10 (118111600 (estimated locally),1.00 per call) 
ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/2 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0) @06ce6b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/11 (1073741824 (estimated locally),1.00 per call) 
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/1 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0) @06ce69a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/10 (1073741824 (estimated locally),1.00 per call) 
ComM_ComModeToRteMode/0 (ComM_ComModeToRteMode) @06cced38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: ComM_RteNotify/4 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0, funcdef_no=0, decl_uid=6284, cgraph_uid=1, symbol_order=1)

Modification phase of node ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/1
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0, funcdef_no=1, decl_uid=6286, cgraph_uid=2, symbol_order=2)

Modification phase of node ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/2
ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_EvaluateChannel (ComM_EvaluateChannel, funcdef_no=2, decl_uid=6288, cgraph_uid=3, symbol_order=3)

Modification phase of node ComM_EvaluateChannel/3
ComM_EvaluateChannel (uint8 Channel)
{
  const ComM_ASR40_ModeType PncReqMode;
  const ComM_ASR40_ModeType UserReqMode;
  const uint8 UserOfChannel;
  ComM_ASR40_ModeType ComMode;
  PNCHandleType ElementPos;
  const PNCHandleType NumPncs;
  const struct ComM_ConfigType * ComM_ConfigPtr.0_1;
  unsigned int _2;
  unsigned int _3;
  short unsigned int _4;
  unsigned char _5;
  int _6;
  short unsigned int _7;
  unsigned char _8;
  unsigned char _9;
  short unsigned int _11;
  short unsigned int _12;
  const struct ComM_ConfigType * ComM_ConfigPtr.4_13;
  long unsigned int _14;
  short unsigned int _15;
  int _16;
  int _17;
  int _18;
  sizetype _19;
  sizetype _20;
  const uint8 * _21;
  short unsigned int _33;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.0_1 = ComM_ConfigPtr;
  _2 = (unsigned int) Channel_30(D);
  _3 = _2 + 1;
  _4 = ComM_ConfigPtr.0_1->NumUsersOfAllChannel[_3];
  _5 = (unsigned char) _4;
  _6 = (int) Channel_30(D);
  _7 = ComM_ConfigPtr.0_1->NumUsersOfAllChannel[_6];
  _8 = (unsigned char) _7;
  _9 = _5 - _8;
  # DEBUG NumUser => (const uint8_least) _9
  # DEBUG BEGIN_STMT
  _11 = ComM_ConfigPtr.0_1->NumPncOfAllCh[_3];
  _12 = ComM_ConfigPtr.0_1->NumPncOfAllCh[_6];
  NumPncs_32 = _11 - _12;
  # DEBUG NumPncs => NumPncs_32
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ComMode => 0
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ElementPos => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630220]:
  # DEBUG BEGIN_STMT
  ComM_ConfigPtr.4_13 = ComM_ConfigPtr;
  _14 = ComM_ConfigPtr.4_13->pUsersOfAllChannel;
  _15 = ComM_ConfigPtr.4_13->NumUsersOfAllChannel[_6];
  _16 = (int) _15;
  _17 = (int) ElementPos_23;
  _18 = _16 + _17;
  _19 = (sizetype) _18;
  _20 = _14 + _19;
  _21 = ComM_ConfigPtr.4_13 + _20;
  UserOfChannel_38 = *_21;
  # DEBUG UserOfChannel => UserOfChannel_38
  # DEBUG BEGIN_STMT
  UserReqMode_40 = ComM_EB_GetUserRequestedComMode (UserOfChannel_38);
  # DEBUG UserReqMode => UserReqMode_40
  # DEBUG BEGIN_STMT
  ComMode_22 = MAX_EXPR <UserReqMode_40, ComMode_25>;
  # DEBUG ComMode => ComMode_22
  # DEBUG BEGIN_STMT
  ElementPos_41 = ElementPos_23 + 1;
  # DEBUG ElementPos => ElementPos_41

  <bb 4> [local count: 1073741821]:
  # ElementPos_23 = PHI <0(2), ElementPos_41(3)>
  # ComMode_25 = PHI <0(2), ComMode_22(3)>
  # DEBUG ComMode => ComMode_25
  # DEBUG ElementPos => ElementPos_23
  # DEBUG BEGIN_STMT
  _33 = (short unsigned int) _9;
  if (ElementPos_23 < _33)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111600]:
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  PncReqMode_36 = ComM_EB_GetPncRequestedComMode (Channel_30(D), ElementPos_24);
  # DEBUG PncReqMode => PncReqMode_36
  # DEBUG BEGIN_STMT
  ComMode_31 = MAX_EXPR <PncReqMode_36, ComMode_26>;
  # DEBUG ComMode => ComMode_31
  # DEBUG BEGIN_STMT
  ElementPos_37 = ElementPos_24 + 1;
  # DEBUG ElementPos => ElementPos_37

  <bb 6> [local count: 1073741824]:
  # ElementPos_24 = PHI <ElementPos_37(5), 0(8)>
  # ComMode_26 = PHI <ComMode_31(5), ComMode_25(8)>
  # DEBUG ComMode => ComMode_26
  # DEBUG ElementPos => ElementPos_24
  # DEBUG BEGIN_STMT
  if (ElementPos_24 < NumPncs_32)
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # ComMode_10 = PHI <ComMode_26(6)>
  # DEBUG BEGIN_STMT
  ComM_EB_SetRequestedComMode (Channel_30(D), ComMode_10);
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_RteNotify (ComM_RteNotify, funcdef_no=3, decl_uid=6296, cgraph_uid=4, symbol_order=4)

Modification phase of node ComM_RteNotify/4
ComM_RteNotify (uint8 User, ComM_ASR40_ModeType CurComMMode)
{
  const Std_ReturnType rteReturnVal;
  const Rte_ModeType_ComMMode newRteMode;
  int _1;
  int _2;
  unsigned char _3;
  Std_ReturnType (*<T699>) (Rte_ModeType_ComMMode) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = (int) CurComMMode_6(D);
  newRteMode_8 = ComM_ComModeToRteMode[_1];
  # DEBUG newRteMode => newRteMode_8
  # DEBUG BEGIN_STMT
  _2 = (int) User_9(D);
  ComM_RteNotificationSuccessful[_2] = 1;
  # DEBUG BEGIN_STMT
  _3 = ComM_RteModeUser[_2];
  if (_3 != CurComMMode_6(D))
    goto <bb 3>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _4 = ComM_RteSwitchCbk[_2];
  rteReturnVal_12 = _4 (newRteMode_8);
  # DEBUG rteReturnVal => rteReturnVal_12
  # DEBUG BEGIN_STMT
  if (rteReturnVal_12 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  ComM_RteModeUser[_2] = CurComMMode_6(D);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  ComM_RteNotificationSuccessful[_2] = 0;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function ComM_Rte_RequestComMode (ComM_Rte_RequestComMode, funcdef_no=4, decl_uid=6376, cgraph_uid=5, symbol_order=5)

Modification phase of node ComM_Rte_RequestComMode/5
ComM_Rte_RequestComMode (ComM_UserHandleType pdav0, ComM_ModeType ComMode)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 = ComM_ASR40_RequestComMode (pdav0_2(D), ComMode_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function ComM_Rte_GetMaxComMode (ComM_Rte_GetMaxComMode, funcdef_no=5, decl_uid=6385, cgraph_uid=6, symbol_order=6)

Modification phase of node ComM_Rte_GetMaxComMode/6
ComM_Rte_GetMaxComMode (ComM_UserHandleType pdav0, ComM_ModeType * ComMode)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 = ComM_ASR40_GetMaxComMode (pdav0_2(D), ComMode_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function ComM_Rte_GetRequestedComMode (ComM_Rte_GetRequestedComMode, funcdef_no=6, decl_uid=6388, cgraph_uid=7, symbol_order=7)

Modification phase of node ComM_Rte_GetRequestedComMode/7
ComM_Rte_GetRequestedComMode (ComM_UserHandleType pdav0, ComM_ModeType * ComMode)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 = ComM_ASR40_GetRequestedComMode (pdav0_2(D), ComMode_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function ComM_Rte_GetCurrentComMode (ComM_Rte_GetCurrentComMode, funcdef_no=7, decl_uid=6379, cgraph_uid=8, symbol_order=8)

Modification phase of node ComM_Rte_GetCurrentComMode/8
ComM_Rte_GetCurrentComMode (ComM_UserHandleType pdav0, ComM_ModeType * ComMode)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 = ComM_ASR40_GetCurrentComMode (pdav0_2(D), ComMode_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_5;

}



;; Function ComM_Rte_GetCurrentPNCComMode (ComM_Rte_GetCurrentPNCComMode, funcdef_no=8, decl_uid=6382, cgraph_uid=9, symbol_order=9)

Modification phase of node ComM_Rte_GetCurrentPNCComMode/9
ComM_Rte_GetCurrentPNCComMode (ComM_UserHandleType pdav0, ComM_ModeType * ComMode)
{
  Std_ReturnType ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 = ComM_ASR40_GetCurrentPNCComMode (pdav0_2(D), ComMode_3(D));
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_5;

}


