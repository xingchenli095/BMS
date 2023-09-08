
IPA constant propagation start:
Determining dynamic type for call: EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_5(D));
  Starting walk at: EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_5(D));
  instance pointer: TxControlInfoPtr_5(D)  Outer instance pointer: TxControlInfoPtr_5(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: retVal_13 = LoTpTransmitFunctPtr_7(D) (PduId_11(D), TxBufferInfoPtr_8(D));
  Starting walk at: retVal_13 = LoTpTransmitFunctPtr_7(D) (PduId_11(D), TxBufferInfoPtr_8(D));
  instance pointer: TxBufferInfoPtr_8(D)  Outer instance pointer: TxBufferInfoPtr_8(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_6(D));
  Starting walk at: EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_6(D));
  instance pointer: TxControlInfoPtr_6(D)  Outer instance pointer: TxControlInfoPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:retVal_13 = LoTpTransmitFunctPtr_7(D) (PduId_11(D), TxBufferInfoPtr_8(D));
Determining dynamic type for call: EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_2(D));
  Starting walk at: EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_2(D));
  instance pointer: TxControlInfoPtr_2(D)  Outer instance pointer: TxControlInfoPtr_2(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EcuC_TpReception_entry_IDLE (RxControlInfoPtr_9(D));
  Starting walk at: EcuC_TpReception_entry_IDLE (RxControlInfoPtr_9(D));
  instance pointer: RxControlInfoPtr_9(D)  Outer instance pointer: RxControlInfoPtr_9(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EcuC_TpReception_entry_IDLE (RxControlInfoPtr_20(D));
  Starting walk at: EcuC_TpReception_entry_IDLE (RxControlInfoPtr_20(D));
  instance pointer: RxControlInfoPtr_20(D)  Outer instance pointer: RxControlInfoPtr_20(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: EcuC_TpReception_entry_IDLE (RxControlInfoPtr_2(D));
  Starting walk at: EcuC_TpReception_entry_IDLE (RxControlInfoPtr_2(D));
  instance pointer: RxControlInfoPtr_2(D)  Outer instance pointer: RxControlInfoPtr_2(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  TS_MemCpy32/15:
  Jump functions of caller  TS_MemBZero32/14:
  Jump functions of caller  EcuC_TpTransmission_entry_IDLE/13:
  Jump functions of caller  EcuC_TpReception_entry_IDLE/12:
  Jump functions of caller  EcuC_TpTxConfirmation/11:
    callsite  EcuC_TpTxConfirmation/11 -> EcuC_TpTransmission_entry_IDLE/13 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuC_TpTransmit/10:
    callsite  EcuC_TpTransmit/10 -> EcuC_TpTransmission_entry_IDLE/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param 3, offset 0, for stmt retVal_13 = LoTpTransmitFunctPtr_7(D) (PduId_11(D), TxBufferInfoPtr_8(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuC_TxBufferIsLocked/9:
  Jump functions of caller  EcuC_CopyTxData/8:
  Jump functions of caller  EcuC_InitTx/7:
    callsite  EcuC_InitTx/7 -> EcuC_TpTransmission_entry_IDLE/13 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuC_TpRxIndication/6:
    callsite  EcuC_TpRxIndication/6 -> EcuC_TpReception_entry_IDLE/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuC_StartOfReceptionDet/5:
  Jump functions of caller  EcuC_CopyRxDataDet/4:
  Jump functions of caller  EcuC_RxBufferIsLocked/3:
  Jump functions of caller  EcuC_CopyRxData/2:
    callsite  EcuC_CopyRxData/2 -> EcuC_TpReception_entry_IDLE/12 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  EcuC_StartOfReception/1:
  Jump functions of caller  EcuC_InitRx/0:
    callsite  EcuC_InitRx/0 -> EcuC_TpReception_entry_IDLE/12 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering EcuC_TpTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering EcuC_TpTransmit for cloning; -fipa-cp-clone disabled.
Not considering EcuC_TxBufferIsLocked for cloning; -fipa-cp-clone disabled.
Not considering EcuC_CopyTxData for cloning; -fipa-cp-clone disabled.
Not considering EcuC_InitTx for cloning; -fipa-cp-clone disabled.
Not considering EcuC_TpRxIndication for cloning; -fipa-cp-clone disabled.
Not considering EcuC_StartOfReceptionDet for cloning; -fipa-cp-clone disabled.
Not considering EcuC_CopyRxDataDet for cloning; -fipa-cp-clone disabled.
Not considering EcuC_RxBufferIsLocked for cloning; -fipa-cp-clone disabled.
Not considering EcuC_CopyRxData for cloning; -fipa-cp-clone disabled.
Not considering EcuC_StartOfReception for cloning; -fipa-cp-clone disabled.
Not considering EcuC_InitRx for cloning; -fipa-cp-clone disabled.

overall_size: 182, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: EcuC_TpTransmission_entry_IDLE/13:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EcuC_TpReception_entry_IDLE/12:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EcuC_TpTxConfirmation/11:
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
  Node: EcuC_TpTransmit/10:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_TxBufferIsLocked/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_CopyTxData/8:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_InitTx/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_TpRxIndication/6:
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
  Node: EcuC_StartOfReceptionDet/5:
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
  Node: EcuC_CopyRxDataDet/4:
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
  Node: EcuC_RxBufferIsLocked/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_CopyRxData/2:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_StartOfReception/1:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuC_InitRx/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

TS_MemCpy32/15 (TS_MemCpy32) @06bda7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuC_CopyTxData/8 (68989340 (estimated locally),0.06 per call) EcuC_CopyRxData/2 (91268055 (estimated locally),0.08 per call) 
  Calls: 
TS_MemBZero32/14 (TS_MemBZero32) @06bda540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuC_TpTransmission_entry_IDLE/13 (1073741824 (estimated locally),1.00 per call) EcuC_TpReception_entry_IDLE/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuC_TpTransmission_entry_IDLE/13 (EcuC_TpTransmission_entry_IDLE) @06bda2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuC_TpTxConfirmation/11 (1073741824 (estimated locally),1.00 per call) EcuC_TpTransmit/10 (163702678 (estimated locally),0.15 per call) EcuC_InitTx/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_MemBZero32/14 (1073741824 (estimated locally),1.00 per call) 
EcuC_TpReception_entry_IDLE/12 (EcuC_TpReception_entry_IDLE) @06bda000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuC_TpRxIndication/6 (365072220 (estimated locally),0.34 per call) EcuC_CopyRxData/2 (91268055 (estimated locally),0.08 per call) EcuC_InitRx/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: TS_MemBZero32/14 (1073741824 (estimated locally),1.00 per call) 
EcuC_TpTxConfirmation/11 (EcuC_TpTxConfirmation) @06bd3d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuC_TpTransmission_entry_IDLE/13 (1073741824 (estimated locally),1.00 per call) 
EcuC_TpTransmit/10 (EcuC_TpTransmit) @06bd3b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuC_TpTransmission_entry_IDLE/13 (163702678 (estimated locally),0.15 per call) 
   Indirect call(496068723 (estimated locally),0.46 per call)  of param:3 (vptr maybe changed)
EcuC_TxBufferIsLocked/9 (EcuC_TxBufferIsLocked) @06bd39a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuC_CopyTxData/8 (EcuC_CopyTxData) @06bd37e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/15 (68989340 (estimated locally),0.06 per call) 
EcuC_InitTx/7 (EcuC_InitTx) @06bd3620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuC_TpTransmission_entry_IDLE/13 (1073741824 (estimated locally),1.00 per call) 
EcuC_TpRxIndication/6 (EcuC_TpRxIndication) @06bd3460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuC_TpReception_entry_IDLE/12 (365072220 (estimated locally),0.34 per call) 
EcuC_StartOfReceptionDet/5 (EcuC_StartOfReceptionDet) @06bd32a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuC_CopyRxDataDet/4 (EcuC_CopyRxDataDet) @06bd30e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuC_RxBufferIsLocked/3 (EcuC_RxBufferIsLocked) @06b9aee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuC_CopyRxData/2 (EcuC_CopyRxData) @06b9ad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/15 (91268055 (estimated locally),0.08 per call) EcuC_TpReception_entry_IDLE/12 (91268055 (estimated locally),0.08 per call) 
EcuC_StartOfReception/1 (EcuC_StartOfReception) @06b9ab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
EcuC_InitRx/0 (EcuC_InitRx) @06b9a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuC_TpReception_entry_IDLE/12 (1073741824 (estimated locally),1.00 per call) 

;; Function EcuC_InitRx (EcuC_InitRx, funcdef_no=0, decl_uid=5508, cgraph_uid=1, symbol_order=0)

Modification phase of node EcuC_InitRx/0
EcuC_InitRx (struct EcuC_RxControlInfoType * RxControlInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuC_TpReception_entry_IDLE (RxControlInfoPtr_2(D));
  return;

}



;; Function EcuC_StartOfReception (EcuC_StartOfReception, funcdef_no=1, decl_uid=5513, cgraph_uid=2, symbol_order=1)

Modification phase of node EcuC_StartOfReception/1
EcuC_StartOfReception (struct EcuC_RxControlInfoType * RxControlInfoPtr, struct PduInfoType * RxBufferInfoPtr, PduLengthType TpSduLength, PduLengthType * RxBufferSizePtr)
{
  PduLengthType msgSize;
  BufReq_ReturnType Result;
  unsigned char _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  _1 = RxControlInfoPtr_7(D)->state;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870913]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG msgSize => 0
  # DEBUG BEGIN_STMT
  _2 = RxBufferInfoPtr_8(D)->SduLength;
  if (_2 < TpSduLength_9(D))
    goto <bb 7>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 348966093]:
  # DEBUG BEGIN_STMT
  if (TpSduLength_9(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 174483046]:
  # DEBUG BEGIN_STMT
  # DEBUG msgSize => _2

  <bb 6> [local count: 348966093]:
  # msgSize_4 = PHI <_2(5), TpSduLength_9(D)(4)>
  # DEBUG msgSize => msgSize_4
  # DEBUG BEGIN_STMT
  RxControlInfoPtr_7(D)->remainMsgSize = msgSize_4;
  # DEBUG BEGIN_STMT
  RxControlInfoPtr_7(D)->totalMsgSize = msgSize_4;
  # DEBUG BEGIN_STMT
  RxControlInfoPtr_7(D)->state = 1;
  # DEBUG BEGIN_STMT
  *RxBufferSizePtr_13(D) = msgSize_4;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 7> [local count: 1073741824]:
  # Result_3 = PHI <0(6), 3(3), 1(2)>
<L12>:
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function EcuC_CopyRxData (EcuC_CopyRxData, funcdef_no=2, decl_uid=5518, cgraph_uid=3, symbol_order=2)

Modification phase of node EcuC_CopyRxData/2
EcuC_CopyRxData (struct EcuC_RxControlInfoType * RxControlInfoPtr, struct PduInfoType * RxBufferInfoPtr, const struct PduInfoType * PduInfoPtr, PduLengthType * RxBufferSizePtr)
{
  BufReq_ReturnType Result;
  unsigned char _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  uint8 * _5;
  short unsigned int _6;
  int _7;
  int _8;
  int _9;
  sizetype _10;
  uint8 * _11;
  uint8 * _12;
  long unsigned int _13;
  short unsigned int _14;
  short unsigned int _15;
  short unsigned int _16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  _1 = RxControlInfoPtr_20(D)->state;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
<L1>:
  # DEBUG BEGIN_STMT
  _2 = PduInfoPtr_21(D)->SduLength;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _3 = RxControlInfoPtr_20(D)->remainMsgSize;
  *RxBufferSizePtr_25(D) = _3;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _4 = RxControlInfoPtr_20(D)->remainMsgSize;
  if (_2 > _4)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  EcuC_TpReception_entry_IDLE (RxControlInfoPtr_20(D));
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  _5 = RxBufferInfoPtr_22(D)->SduDataPtr;
  _6 = RxControlInfoPtr_20(D)->totalMsgSize;
  _7 = (int) _6;
  _8 = (int) _4;
  _9 = _7 - _8;
  _10 = (sizetype) _9;
  _11 = _5 + _10;
  _12 = PduInfoPtr_21(D)->SduDataPtr;
  _13 = (long unsigned int) _2;
  TS_MemCpy32 (_11, _12, _13);
  # DEBUG BEGIN_STMT
  _14 = RxControlInfoPtr_20(D)->remainMsgSize;
  _15 = PduInfoPtr_21(D)->SduLength;
  _16 = _14 - _15;
  RxControlInfoPtr_20(D)->remainMsgSize = _16;
  # DEBUG BEGIN_STMT
  *RxBufferSizePtr_25(D) = _16;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 8> [local count: 1073741824]:
  # Result_17 = PHI <0(7), 1(6), 1(2), 0(4)>
<L12>:
  # DEBUG Result => Result_17
  # DEBUG BEGIN_STMT
  return Result_17;

}



;; Function EcuC_RxBufferIsLocked (EcuC_RxBufferIsLocked, funcdef_no=3, decl_uid=5520, cgraph_uid=4, symbol_order=3)

Modification phase of node EcuC_RxBufferIsLocked/3
EcuC_RxBufferIsLocked (struct EcuC_RxControlInfoType * RxControlInfoPtr)
{
  boolean Result;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  _1 = RxControlInfoPtr_4(D)->state;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # Result_2 = PHI <0(3), 1(2)>
<L6>:
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function EcuC_CopyRxDataDet (EcuC_CopyRxDataDet, funcdef_no=4, decl_uid=5523, cgraph_uid=5, symbol_order=4)

Modification phase of node EcuC_CopyRxDataDet/4
EcuC_CopyRxDataDet (const struct PduInfoType * PduInfoPtr, PduLengthType * RxBufferSizePtr)
{
  Std_ReturnType Result;
  short unsigned int _1;
  uint8 * _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  if (PduInfoPtr_4(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  if (RxBufferSizePtr_5(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 4> [local count: 526133494]:
  # DEBUG BEGIN_STMT
  _1 = PduInfoPtr_4(D)->SduLength;
  if (_1 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 263066747]:
  _2 = PduInfoPtr_4(D)->SduDataPtr;
  if (_2 == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 6> [local count: 447213470]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 7> [local count: 1073741824]:
  # Result_3 = PHI <1(2), 1(3), 1(5), 0(6)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function EcuC_StartOfReceptionDet (EcuC_StartOfReceptionDet, funcdef_no=5, decl_uid=5526, cgraph_uid=6, symbol_order=5)

Modification phase of node EcuC_StartOfReceptionDet/5
EcuC_StartOfReceptionDet (PduLengthType TpSduLength, PduLengthType * RxBufferSizePtr)
{
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RxBufferSizePtr_2(D) == 0B)
    goto <bb 4>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 4> [local count: 1073741824]:
  # Result_1 = PHI <1(2), 0(3)>
  # DEBUG Result => Result_1
  # DEBUG BEGIN_STMT
  return Result_1;

}



;; Function EcuC_TpRxIndication (EcuC_TpRxIndication, funcdef_no=6, decl_uid=5530, cgraph_uid=7, symbol_order=6)

Modification phase of node EcuC_TpRxIndication/6
EcuC_TpRxIndication (struct EcuC_RxControlInfoType * RxControlInfoPtr, NotifResultType Result, PduLengthType * CopiedDataSize)
{
  Std_ReturnType retVal;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  _1 = RxControlInfoPtr_9(D)->totalMsgSize;
  _2 = RxControlInfoPtr_9(D)->remainMsgSize;
  _3 = _1 - _2;
  *CopiedDataSize_10(D) = _3;
  # DEBUG BEGIN_STMT
  _4 = RxControlInfoPtr_9(D)->state;
  if (_4 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365072220]:
<L1>:
  # DEBUG BEGIN_STMT
  if (Result_12(D) == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1

  <bb 5> [local count: 365072220]:
  # retVal_5 = PHI <0(3), 1(4)>
  # DEBUG retVal => retVal_5
  # DEBUG BEGIN_STMT
  EcuC_TpReception_entry_IDLE (RxControlInfoPtr_9(D));
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  # retVal_6 = PHI <1(2), retVal_5(5)>
<L9>:
  # DEBUG retVal => retVal_6
  # DEBUG BEGIN_STMT
  return retVal_6;

}



;; Function EcuC_InitTx (EcuC_InitTx, funcdef_no=7, decl_uid=5532, cgraph_uid=8, symbol_order=7)

Modification phase of node EcuC_InitTx/7
EcuC_InitTx (struct EcuC_TxControlInfoType * TxControlInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_2(D));
  return;

}



;; Function EcuC_CopyTxData (EcuC_CopyTxData, funcdef_no=8, decl_uid=5538, cgraph_uid=9, symbol_order=8)

Modification phase of node EcuC_CopyTxData/8
EcuC_CopyTxData (struct EcuC_TxControlInfoType * TxControlInfoPtr, const struct PduInfoType * TxBufferInfoPtr, struct PduInfoType * PduInfoPtr, struct RetryInfoType * RetryInfoPtr, PduLengthType * TxDataCntPtr)
{
  PduLengthType retry;
  PduLengthType copiedOffset;
  BufReq_ReturnType retVal;
  unsigned char _1;
  short unsigned int _2;
  short unsigned int _3;
  <unnamed type> _4;
  short unsigned int _5;
  short unsigned int _6;
  int _7;
  int _8;
  int _9;
  int _10;
  uint8 * _11;
  uint8 * _12;
  int _13;
  int _14;
  sizetype _15;
  uint8 * _16;
  long unsigned int _17;
  short unsigned int _18;
  short unsigned int _19;
  short unsigned int _20;
  short unsigned int _21;
  short unsigned int _22;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  _1 = TxControlInfoPtr_27(D)->state;
  if (_1 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = TxBufferInfoPtr_28(D)->SduLength;
  _3 = TxControlInfoPtr_27(D)->remainMsgSize;
  copiedOffset_29 = _2 - _3;
  # DEBUG copiedOffset => copiedOffset_29
  # DEBUG BEGIN_STMT
  # DEBUG retry => 0
  # DEBUG BEGIN_STMT
  if (RetryInfoPtr_30(D) != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  _4 = RetryInfoPtr_30(D)->TpDataState;
  if (_4 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 86887188]:
  # DEBUG BEGIN_STMT
  _5 = RetryInfoPtr_30(D)->TxTpDataCnt;
  if (_5 > copiedOffset_29)
    goto <bb 11>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 321628626]:
  # retry_36 = PHI <0(4), 0(3), _5(5)>
  # DEBUG retry => NULL
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  _6 = PduInfoPtr_31(D)->SduLength;
  _7 = (int) _6;
  _8 = (int) _3;
  _9 = (int) retry_36;
  _10 = _8 + _9;
  if (_7 > _10)
    goto <bb 11>; [35.00%]
  else
    goto <bb 7>; [65.00%]

  <bb 7> [local count: 209058607]:
  # DEBUG BEGIN_STMT
  if (_6 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 8> [local count: 68989340]:
  # DEBUG BEGIN_STMT
  _11 = PduInfoPtr_31(D)->SduDataPtr;
  _12 = TxBufferInfoPtr_28(D)->SduDataPtr;
  _13 = (int) copiedOffset_29;
  _14 = _13 - _9;
  _15 = (sizetype) _14;
  _16 = _12 + _15;
  _17 = (long unsigned int) _6;
  TS_MemCpy32 (_11, _16, _17);
  # DEBUG BEGIN_STMT
  _18 = PduInfoPtr_31(D)->SduLength;
  if (_18 > retry_36)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 34494670]:
  # DEBUG BEGIN_STMT
  _19 = TxControlInfoPtr_27(D)->remainMsgSize;
  _20 = retry_36 - _18;
  _21 = _19 + _20;
  TxControlInfoPtr_27(D)->remainMsgSize = _21;

  <bb 10> [local count: 209058607]:
  # DEBUG BEGIN_STMT
  _22 = TxControlInfoPtr_27(D)->remainMsgSize;
  *TxDataCntPtr_34(D) = _22;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 11> [local count: 1073741824]:
  # retVal_23 = PHI <2(6), 1(2), 1(5), 0(10)>
  # DEBUG retry => NULL
  # DEBUG retVal => retVal_23
  # DEBUG BEGIN_STMT
  return retVal_23;

}



;; Function EcuC_TxBufferIsLocked (EcuC_TxBufferIsLocked, funcdef_no=9, decl_uid=5540, cgraph_uid=10, symbol_order=9)

Modification phase of node EcuC_TxBufferIsLocked/9
EcuC_TxBufferIsLocked (struct EcuC_TxControlInfoType * TxControlInfoPtr)
{
  boolean retVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  _1 = TxControlInfoPtr_4(D)->state;
  if (_1 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  # retVal_2 = PHI <0(2), 1(3)>
<L6>:
  # DEBUG retVal => retVal_2
  # DEBUG BEGIN_STMT
  return retVal_2;

}



;; Function EcuC_TpTransmit (EcuC_TpTransmit, funcdef_no=10, decl_uid=5545, cgraph_uid=11, symbol_order=10)

Modification phase of node EcuC_TpTransmit/10
EcuC_TpTransmit (struct EcuC_TxControlInfoType * TxControlInfoPtr, PduIdType PduId, const struct PduInfoType * TxBufferInfoPtr, Std_ReturnType (*EcuC_LoTpTransmitFunctPtrType) (PduIdType, const struct PduInfoType *) LoTpTransmitFunctPtr)
{
  Std_ReturnType retVal;
  unsigned char _1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  _1 = TxControlInfoPtr_6(D)->state;
  if (_1 == 2)
    goto <bb 6>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (LoTpTransmitFunctPtr_7(D) != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 496068723]:
  # DEBUG BEGIN_STMT
  _2 = TxBufferInfoPtr_8(D)->SduLength;
  TxControlInfoPtr_6(D)->remainMsgSize = _2;
  # DEBUG BEGIN_STMT
  TxControlInfoPtr_6(D)->state = 2;
  # DEBUG BEGIN_STMT
  retVal_13 = LoTpTransmitFunctPtr_7(D) (PduId_11(D), TxBufferInfoPtr_8(D));
  # DEBUG retVal => retVal_13
  # DEBUG BEGIN_STMT
  if (retVal_13 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 163702678]:
  # DEBUG BEGIN_STMT
  EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # retVal_3 = PHI <1(2), 1(3), retVal_13(4), retVal_13(5)>
  # DEBUG retVal => retVal_3
  # DEBUG BEGIN_STMT
  return retVal_3;

}



;; Function EcuC_TpTxConfirmation (EcuC_TpTxConfirmation, funcdef_no=11, decl_uid=5548, cgraph_uid=12, symbol_order=11)

Modification phase of node EcuC_TpTxConfirmation/11
EcuC_TpTxConfirmation (struct EcuC_TxControlInfoType * TxControlInfoPtr, NotifResultType Result)
{
  Std_ReturnType retVal;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Result_3(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = TxControlInfoPtr_5(D)->state;
  if (_1 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 5> [local count: 1073741824]:
  # retVal_2 = PHI <0(4), 1(2), 1(3)>
  # DEBUG retVal => retVal_2
  # DEBUG BEGIN_STMT
  EcuC_TpTransmission_entry_IDLE (TxControlInfoPtr_5(D));
  # DEBUG BEGIN_STMT
  return retVal_2;

}


