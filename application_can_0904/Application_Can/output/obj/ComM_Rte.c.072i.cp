
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_EB_SetRequestedComMode/9:
  Jump functions of caller  ComM_EB_GetPncRequestedComMode/8:
  Jump functions of caller  ComM_EB_GetUserRequestedComMode/7:
  Jump functions of caller  SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/5:
  Jump functions of caller  SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/4:
  Jump functions of caller  ComM_RteNotify/3:
  Jump functions of caller  ComM_EvaluateChannel/2:
  Jump functions of caller  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/1:
  Jump functions of caller  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/0:

 Propagating constants:

Not considering ComM_RteNotify for cloning; -fipa-cp-clone disabled.
Not considering ComM_EvaluateChannel for cloning; -fipa-cp-clone disabled.
Not considering ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 for cloning; -fipa-cp-clone disabled.
Not considering ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 for cloning; -fipa-cp-clone disabled.

overall_size: 49, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: ComM_RteNotify/3:
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
  Node: ComM_EvaluateChannel/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/1:
  Node: ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComM_EB_SetRequestedComMode/9 (ComM_EB_SetRequestedComMode) @06d267e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/2 (118111601 (estimated locally),1.00 per call) 
  Calls: 
ComM_EB_GetPncRequestedComMode/8 (ComM_EB_GetPncRequestedComMode) @06d26700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/2 (955630224 (estimated locally),8.09 per call) 
  Calls: 
ComM_EB_GetUserRequestedComMode/7 (ComM_EB_GetUserRequestedComMode) @06d26620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/2 (955630220 (estimated locally),8.09 per call) 
  Calls: 
ComM_ConfigPtr/6 (ComM_ConfigPtr) @06d6a5a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComM_EvaluateChannel/2 (read)ComM_EvaluateChannel/2 (read)
  Availability: not_available
  Varpool flags:
SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/5 (SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0) @06d26380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/2 (118111601 (estimated locally),1.00 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/4 (SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0) @06d261c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_EvaluateChannel/2 (118111600 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ComM_RteNotify/3 (ComM_RteNotify) @06d26000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComM_EvaluateChannel/2 (ComM_EvaluateChannel) @06d1dc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: ComM_ConfigPtr/6 (read)ComM_ConfigPtr/6 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/5 (118111601 (estimated locally),1.00 per call) ComM_EB_SetRequestedComMode/9 (118111601 (estimated locally),1.00 per call) ComM_EB_GetPncRequestedComMode/8 (955630224 (estimated locally),8.09 per call) ComM_EB_GetUserRequestedComMode/7 (955630220 (estimated locally),8.09 per call) SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/4 (118111600 (estimated locally),1.00 per call) 
ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/1 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0) @06d1d7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/5 (1073741824 (estimated locally),1.00 per call) 
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/0 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0) @06d1d460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0/4 (1073741824 (estimated locally),1.00 per call) 

;; Function ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0, funcdef_no=0, decl_uid=6283, cgraph_uid=1, symbol_order=0)

Modification phase of node ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/0
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_ComM_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0, funcdef_no=1, decl_uid=6285, cgraph_uid=2, symbol_order=1)

Modification phase of node ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/1
ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_ComM_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_EvaluateChannel (ComM_EvaluateChannel, funcdef_no=2, decl_uid=6287, cgraph_uid=3, symbol_order=2)

Modification phase of node ComM_EvaluateChannel/2
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



;; Function ComM_RteNotify (ComM_RteNotify, funcdef_no=3, decl_uid=6295, cgraph_uid=4, symbol_order=3)

Modification phase of node ComM_RteNotify/3
ComM_RteNotify (uint8 User, ComM_ASR40_ModeType CurComMMode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


