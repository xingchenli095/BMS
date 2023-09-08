
IPA constant propagation start:
Determining dynamic type for call: ComM_HsmTran (sc_37(D), instIdx_38(D), trans_29);
  Starting walk at: ComM_HsmTran (sc_37(D), instIdx_38(D), trans_29);
  instance pointer: sc_37(D)  Outer instance pointer: sc_37(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:guardCond_46 = _18 (instIdx_38(D));
Determining dynamic type for call: ComM_HsmTran (sc_37(D), instIdx_38(D), trans_29);
  Starting walk at: ComM_HsmTran (sc_37(D), instIdx_38(D), trans_29);
  instance pointer: trans_29  Outer instance pointer: trans_29 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:guardCond_46 = _18 (instIdx_38(D));
Determining dynamic type for call: ComM_HsmDelFromQueue (sc_31(D), instIdx_32(D), entryNo_27);
  Starting walk at: ComM_HsmDelFromQueue (sc_31(D), instIdx_32(D), entryNo_27);
  instance pointer: sc_31(D)  Outer instance pointer: sc_31(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_31(D), instIdx_32(D), entryNo_27);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: ComM_HsmInitSubstates (sc_41(D), instIdx_42(D));
  Starting walk at: ComM_HsmInitSubstates (sc_41(D), instIdx_42(D));
  instance pointer: sc_41(D)  Outer instance pointer: sc_41(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_31 (instIdx_42(D));
  Function call may change dynamic type:_20 (instIdx_42(D));
Determining dynamic type for call: eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Starting walk at: eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  instance pointer: sc_11(D)  Outer instance pointer: sc_11(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Starting walk at: eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  instance pointer: &event  Outer instance pointer: event offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Starting walk at: eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  instance pointer: &queueEntryNo  Outer instance pointer: queueEntryNo offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Starting walk at: ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  instance pointer: sc_11(D)  Outer instance pointer: sc_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Starting walk at: retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  instance pointer: sc_11(D)  Outer instance pointer: sc_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Starting walk at: eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  instance pointer: sc_11(D)  Outer instance pointer: sc_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Starting walk at: eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  instance pointer: &event  Outer instance pointer: event offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Starting walk at: eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  instance pointer: &queueEntryNo  Outer instance pointer: queueEntryNo offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  Function call may change dynamic type:retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  Function call may change dynamic type:ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  Function call may change dynamic type:ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  Function call may change dynamic type:ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
Determining dynamic type for call: ComM_HsmEmitInst (sc_5(D), instIdx_2, event_6(D));
  Starting walk at: ComM_HsmEmitInst (sc_5(D), instIdx_2, event_6(D));
  instance pointer: sc_5(D)  Outer instance pointer: sc_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_HsmEmitInst (sc_5(D), instIdx_2, event_6(D));
Determining dynamic type for call: ComM_HsmInitSubstates (sc_37(D), instIdx_38(D));
  Starting walk at: ComM_HsmInitSubstates (sc_37(D), instIdx_38(D));
  instance pointer: sc_37(D)  Outer instance pointer: sc_37(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_32 (instIdx_38(D));
Determining dynamic type for call: ComM_HsmInitInst (sc_5(D), instIdx_2);
  Starting walk at: ComM_HsmInitInst (sc_5(D), instIdx_2);
  instance pointer: sc_5(D)  Outer instance pointer: sc_5(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ComM_HsmInitInst (sc_5(D), instIdx_2);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12:
  Jump functions of caller  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/11:
  Jump functions of caller  ComM_HsmDispatchEvent/10:
    callsite  ComM_HsmDispatchEvent/10 -> ComM_HsmTran/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt guardCond_46 = _18 (instIdx_38(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_HsmFindEvToDispatch/9:
    callsite  ComM_HsmFindEvToDispatch/9 -> ComM_HsmDelFromQueue/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmInitSubstates/8:
    indirect simple callsite, calling param -1, offset 0, for stmt _17 (instIdx_23(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_HsmTran/7:
    callsite  ComM_HsmTran/7 -> ComM_HsmInitSubstates/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _31 (instIdx_42(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _20 (instIdx_42(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _11 (instIdx_42(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_HsmDelFromQueue/6:
  Jump functions of caller  ComM_HsmMainInst/5:
    callsite  ComM_HsmMainInst/5 -> ComM_HsmFindEvToDispatch/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
    callsite  ComM_HsmMainInst/5 -> ComM_HsmDispatchEvent/10 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  ComM_HsmMainInst/5 -> ComM_HsmDelFromQueue/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  ComM_HsmMainInst/5 -> ComM_HsmFindEvToDispatch/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
  Jump functions of caller  ComM_HsmEmitToSelfInst/4:
  Jump functions of caller  ComM_HsmEmitInst/3:
  Jump functions of caller  ComM_HsmEmit/2:
    callsite  ComM_HsmEmit/2 -> ComM_HsmEmitInst/3 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  ComM_HsmInitInst/1:
    callsite  ComM_HsmInitInst/1 -> ComM_HsmInitSubstates/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _32 (instIdx_38(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  ComM_HsmInit/0:
    callsite  ComM_HsmInit/0 -> ComM_HsmInitInst/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR

 Propagating constants:

Not considering ComM_HsmMainInst for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmEmitToSelfInst for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmEmitInst for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmEmit for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmInitInst for cloning; -fipa-cp-clone disabled.
Not considering ComM_HsmInit for cloning; -fipa-cp-clone disabled.

overall_size: 412, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: ComM_HsmDispatchEvent/10:
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
  Node: ComM_HsmFindEvToDispatch/9:
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
         ComM_HsmEventType * const ~[0B, 0B]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * const ~[0B, 0B]
        AGGS VARIABLE
  Node: ComM_HsmInitSubstates/8:
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
  Node: ComM_HsmTran/7:
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
  Node: ComM_HsmDelFromQueue/6:
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
  Node: ComM_HsmMainInst/5:
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
  Node: ComM_HsmEmitToSelfInst/4:
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
  Node: ComM_HsmEmitInst/3:
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
  Node: ComM_HsmEmit/2:
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
  Node: ComM_HsmInitInst/1:
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
  Node: ComM_HsmInit/0:
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

ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0) @06cf01c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmMainInst/5 (955630223 (estimated locally),8.09 per call) ComM_HsmEmitToSelfInst/4 (236223201 (estimated locally),1.00 per call) ComM_HsmEmitInst/3 (1073741824 (estimated locally),1.00 per call) ComM_HsmFindEvToDispatch/9 (114863532 (estimated locally),1.00 per call) 
  Calls: 
ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/11 (ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0) @06cf00e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComM_HsmMainInst/5 (955630223 (estimated locally),8.09 per call) ComM_HsmEmitToSelfInst/4 (236223200 (estimated locally),1.00 per call) ComM_HsmEmitInst/3 (1073741824 (estimated locally),1.00 per call) ComM_HsmFindEvToDispatch/9 (114863532 (estimated locally),1.00 per call) 
  Calls: 
ComM_HsmDispatchEvent/10 (ComM_HsmDispatchEvent) @06c8eb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:12287527 (estimated locally) body local optimize_size
  Called by: ComM_HsmMainInst/5 (955630223 (estimated locally),8.09 per call) 
  Calls: ComM_HsmTran/7 (2486995 (estimated locally),0.20 per call) 
   Indirect call(215172289 (estimated locally),17.51 per call) 
ComM_HsmFindEvToDispatch/9 (ComM_HsmFindEvToDispatch) @06c8e8c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: ComM_HsmMainInst/5 (955630223 (estimated locally),8.09 per call) ComM_HsmMainInst/5 (118111600 (estimated locally),1.00 per call) 
  Calls: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (114863532 (estimated locally),1.00 per call) ComM_HsmDelFromQueue/6 (316429836 (estimated locally),2.75 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/11 (114863532 (estimated locally),1.00 per call) 
ComM_HsmInitSubstates/8 (ComM_HsmInitSubstates) @06c8e700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111602 (estimated locally) body local optimize_size
  Called by: ComM_HsmInitInst/1 (118111601 (estimated locally),1.00 per call) ComM_HsmTran/7 (118111601 (estimated locally),0.66 per call) 
  Calls: 
   Indirect call(630715947 (estimated locally),5.34 per call) 
ComM_HsmTran/7 (ComM_HsmTran) @06c8e540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:178956972 (estimated locally) body local optimize_size
  Called by: ComM_HsmDispatchEvent/10 (2486995 (estimated locally),0.20 per call) 
  Calls: ComM_HsmInitSubstates/8 (118111601 (estimated locally),0.66 per call) 
   Indirect call(955630224 (estimated locally),5.34 per call) 
   Indirect call(630715945 (estimated locally),3.52 per call) 
   Indirect call(60845370 (estimated locally),0.34 per call) 
ComM_HsmDelFromQueue/6 (ComM_HsmDelFromQueue) @06c8e2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: ComM_HsmMainInst/5 (955630223 (estimated locally),8.09 per call) ComM_HsmFindEvToDispatch/9 (316429836 (estimated locally),2.75 per call) 
  Calls: 
ComM_HsmMainInst/5 (ComM_HsmMainInst) @06c8e000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmFindEvToDispatch/9 (955630223 (estimated locally),8.09 per call) ComM_HsmDispatchEvent/10 (955630223 (estimated locally),8.09 per call) ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (955630223 (estimated locally),8.09 per call) ComM_HsmDelFromQueue/6 (955630223 (estimated locally),8.09 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/11 (955630223 (estimated locally),8.09 per call) ComM_HsmFindEvToDispatch/9 (118111600 (estimated locally),1.00 per call) 
ComM_HsmEmitToSelfInst/4 (ComM_HsmEmitToSelfInst) @06c83c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (236223201 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/11 (236223200 (estimated locally),1.00 per call) 
ComM_HsmEmitInst/3 (ComM_HsmEmitInst) @06c839a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: ComM_HsmEmit/2 (955630223 (estimated locally),8.09 per call) 
  Calls: ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0/12 (1073741824 (estimated locally),1.00 per call) ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0/11 (1073741824 (estimated locally),1.00 per call) 
ComM_HsmEmit/2 (ComM_HsmEmit) @06c83700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmEmitInst/3 (955630223 (estimated locally),8.09 per call) 
ComM_HsmInitInst/1 (ComM_HsmInitInst) @06c83540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: ComM_HsmInit/0 (955630223 (estimated locally),8.09 per call) 
  Calls: ComM_HsmInitSubstates/8 (118111601 (estimated locally),1.00 per call) 
   Indirect call(77953656 (estimated locally),0.66 per call) 
ComM_HsmInit/0 (ComM_HsmInit) @06c83380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: ComM_HsmInitInst/1 (955630223 (estimated locally),8.09 per call) 

;; Function ComM_HsmDelFromQueue (ComM_HsmDelFromQueue, funcdef_no=6, decl_uid=6544, cgraph_uid=7, symbol_order=6)

Modification phase of node ComM_HsmDelFromQueue/6
ComM_HsmDelFromQueue (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx, const uint8 queueEntryNo)
{
  ComM_HsmEventType event;
  uint16 j;
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  ComM_HsmEventType * _4;
  int _5;
  unsigned char _6;
  int _7;
  int _8;
  int _9;
  int _10;
  sizetype _11;
  ComM_HsmEventType * _12;
  uint8 * _13;
  unsigned char _14;
  int _15;
  int _16;
  sizetype _17;
  uint8 * _18;
  unsigned char _19;
  unsigned char _20;
  ComM_HsmEventType * _21;
  unsigned char _22;
  int _23;
  int _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  ComM_HsmEventType * _28;
  int _29;
  int _30;
  sizetype _31;
  ComM_HsmEventType * _32;
  unsigned char _33;
  unsigned int _34;
  unsigned int _35;
  unsigned char _36;
  unsigned int _37;
  unsigned char _38;
  unsigned char _39;
  unsigned char _40;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _1 = sc_45(D)->instances;
  _2 = (unsigned int) instIdx_46(D);
  _3 = _2 * 4;
  inst_47 = _1 + _3;
  # DEBUG inst => inst_47
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = sc_45(D)->events;
  _5 = (int) instIdx_46(D);
  _6 = sc_45(D)->numEvents;
  _7 = (int) _6;
  _8 = _5 * _7;
  _9 = (int) queueEntryNo_48(D);
  _10 = _8 + _9;
  _11 = (sizetype) _10;
  _12 = _4 + _11;
  event_49 = *_12;
  # DEBUG event => event_49
  # DEBUG BEGIN_STMT
  _13 = sc_45(D)->evCounters;
  _15 = (int) event_49;
  _16 = _8 + _15;
  _17 = (sizetype) _16;
  _18 = _13 + _17;
  _19 = *_18;
  _20 = _19 + 255;
  *_18 = _20;
  # DEBUG BEGIN_STMT
  j_51 = (uint16) queueEntryNo_48(D);
  # DEBUG j => j_51
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _21 = sc_45(D)->events;
  _22 = sc_45(D)->numEvents;
  _23 = (int) _22;
  _24 = _5 * _23;
  _25 = (unsigned int) _24;
  _26 = _25 + _34;
  _27 = _26 + 1;
  _28 = _21 + _27;
  _29 = (int) j_41;
  _30 = _24 + _29;
  _31 = (sizetype) _30;
  _32 = _21 + _31;
  _33 = *_28;
  *_32 = _33;
  # DEBUG BEGIN_STMT
  j_55 = j_41 + 1;
  # DEBUG j => j_55

  <bb 4> [local count: 1073741824]:
  # j_41 = PHI <j_51(2), j_55(3)>
  # DEBUG j => j_41
  # DEBUG BEGIN_STMT
  _34 = (unsigned int) j_41;
  _35 = _34 + 1;
  _36 = inst_47->evQueueFill;
  _37 = (unsigned int) _36;
  if (_35 < _37)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # _14 = PHI <_36(4)>
  # DEBUG BEGIN_STMT
  _38 = _14 + 255;
  inst_47->evQueueFill = _38;
  # DEBUG BEGIN_STMT
  _39 = inst_47->evQueueInsertEvNo;
  if (_39 > queueEntryNo_48(D))
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _40 = _39 + 255;
  inst_47->evQueueInsertEvNo = _40;

  <bb 7> [local count: 118111601]:
  return;

}



;; Function ComM_HsmInitSubstates (ComM_HsmInitSubstates, funcdef_no=8, decl_uid=6551, cgraph_uid=9, symbol_order=8)

Modification phase of node ComM_HsmInitSubstates/8
ComM_HsmInitSubstates (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx)
{
  const struct ComM_HsmStateType * state;
  ComM_HsmStateIdxType stateIdx;
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct ComM_HsmStateType * _4;
  unsigned char _5;
  unsigned int _6;
  unsigned int _7;
  const struct ComM_HsmStateType * _8;
  const struct ComM_HsmStateType * _9;
  unsigned int _10;
  unsigned int _11;
  unsigned char _12;
  void (*ComM_HsmActionType) (const uint16) * _13;
  unsigned int _14;
  unsigned int _15;
  void (*ComM_HsmActionType) (const uint16) * _16;
  void (*<T619>) (const uint16) _17;

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  _1 = sc_22(D)->instances;
  _2 = (unsigned int) instIdx_23(D);
  _3 = _2 * 4;
  inst_24 = _1 + _3;
  # DEBUG inst => inst_24
  # DEBUG BEGIN_STMT
  _4 = sc_22(D)->states;
  _5 = inst_24->stateId;
  _6 = (unsigned int) _5;
  _7 = _6 * 20;
  _8 = _4 + _7;
  stateIdx_25 = _8->initId;
  # DEBUG stateIdx => stateIdx_25
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _9 = sc_22(D)->states;
  _10 = (unsigned int) stateIdx_18;
  _11 = _10 * 20;
  state_26 = _9 + _11;
  # DEBUG state => state_26
  # DEBUG BEGIN_STMT
  inst_24->stateId = stateIdx_18;
  # DEBUG BEGIN_STMT
  _12 = state_26->entryFnIdx;
  if (_12 != 255)
    goto <bb 4>; [66.00%]
  else
    goto <bb 5>; [34.00%]

  <bb 4> [local count: 630715947]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _13 = sc_22(D)->actions;
  _14 = (unsigned int) _12;
  _15 = _14 * 4;
  _16 = _13 + _15;
  _17 = *_16;
  _17 (instIdx_23(D));

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  stateIdx_29 = state_26->initId;
  # DEBUG stateIdx => stateIdx_29

  <bb 6> [local count: 1073741824]:
  # stateIdx_18 = PHI <stateIdx_25(2), stateIdx_29(5)>
  # DEBUG stateIdx => stateIdx_18
  # DEBUG BEGIN_STMT
  if (stateIdx_18 != 255)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  return;

}



;; Function ComM_HsmFindEvToDispatch (ComM_HsmFindEvToDispatch, funcdef_no=9, decl_uid=6556, cgraph_uid=10, symbol_order=9)

Modification phase of node ComM_HsmFindEvToDispatch/9
Setting nonnull for 2
Setting nonnull for 3
ComM_HsmFindEvToDispatch (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx, ComM_HsmEventType * const event, uint8 * const queueEntryNo)
{
  ComM_HsmEventMaskType eventMask;
  uint8 entryNo;
  ComM_HsmEventType ev;
  boolean foundEventToDispatch;
  const struct ComM_HsmStateType * const state;
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct ComM_HsmStateType * _4;
  unsigned char _5;
  unsigned int _6;
  unsigned int _7;
  ComM_HsmEventType * _8;
  int _9;
  unsigned char _10;
  int _11;
  int _12;
  int _13;
  int _14;
  sizetype _15;
  ComM_HsmEventType * _16;
  int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  unsigned char _22;
  unsigned char _23;
  unsigned char _24;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _1 = sc_31(D)->instances;
  _2 = (unsigned int) instIdx_32(D);
  _3 = _2 * 4;
  inst_33 = _1 + _3;
  # DEBUG inst => inst_33
  # DEBUG BEGIN_STMT
  _4 = sc_31(D)->states;
  _5 = inst_33->stateId;
  _6 = (unsigned int) _5;
  _7 = _6 * 20;
  state_34 = _4 + _7;
  # DEBUG state => state_34
  # DEBUG BEGIN_STMT
  # DEBUG foundEventToDispatch => 0
  # DEBUG BEGIN_STMT
  # DEBUG ev => 255
  # DEBUG BEGIN_STMT
  # DEBUG entryNo => 0
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 3> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = sc_31(D)->events;
  _9 = (int) instIdx_32(D);
  _10 = sc_31(D)->numEvents;
  _11 = (int) _10;
  _12 = _9 * _11;
  _13 = (int) entryNo_27;
  _14 = _12 + _13;
  _15 = (sizetype) _14;
  _16 = _8 + _15;
  ev_39 = *_16;
  # DEBUG ev => ev_39
  # DEBUG BEGIN_STMT
  _17 = (int) ev_39;
  eventMask_40 = 1 << _17;
  # DEBUG eventMask => eventMask_40
  # DEBUG BEGIN_STMT
  _18 = state_34->ignoredEventMask;
  _19 = _18 & eventMask_40;
  if (_19 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 316429836]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_HsmDelFromQueue (sc_31(D), instIdx_32(D), entryNo_27);
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 642448456]:
  # DEBUG BEGIN_STMT
  _20 = state_34->actionEventMask;
  _21 = _20 & eventMask_40;
  if (_21 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 321224227]:
  # DEBUG BEGIN_STMT
  _22 = inst_33->evQueueInsertEvNo;
  if (_22 <= entryNo_27)
    goto <bb 7>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 7> [local count: 160612114]:
  # DEBUG BEGIN_STMT
  _23 = entryNo_27 + 1;
  inst_33->evQueueInsertEvNo = _23;
  goto <bb 11>; [100.00%]

  <bb 9> [local count: 321224227]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  entryNo_41 = entryNo_27 + 1;
  # DEBUG entryNo => entryNo_41

  <bb 11> [local count: 958878293]:
  # foundEventToDispatch_28 = PHI <0(4), 1(6), 0(9), 1(7)>
  # ev_37 = PHI <ev_39(4), ev_39(6), ev_39(9), ev_39(7)>
  # entryNo_36 = PHI <entryNo_27(4), entryNo_27(6), entryNo_41(9), entryNo_27(7)>

  <bb 14> [local count: 1073741824]:
  # foundEventToDispatch_25 = PHI <foundEventToDispatch_28(11), 0(2)>
  # ev_26 = PHI <ev_37(11), 255(2)>
  # entryNo_27 = PHI <entryNo_36(11), 0(2)>
  # DEBUG entryNo => entryNo_27
  # DEBUG ev => ev_26
  # DEBUG foundEventToDispatch => foundEventToDispatch_25
  # DEBUG BEGIN_STMT
  _24 = inst_33->evQueueFill;
  if (_24 > entryNo_27)
    goto <bb 12>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 12> [local count: 1014686025]:
  if (foundEventToDispatch_25 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 13> [local count: 114863532]:
  # foundEventToDispatch_43 = PHI <foundEventToDispatch_25(14), foundEventToDispatch_25(12)>
  # ev_50 = PHI <ev_26(14), ev_26(12)>
  # entryNo_51 = PHI <entryNo_27(14), entryNo_27(12)>
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  *event_46(D) = ev_50;
  # DEBUG BEGIN_STMT
  *queueEntryNo_48(D) = entryNo_51;
  # DEBUG BEGIN_STMT
  return foundEventToDispatch_43;

}



;; Function ComM_HsmInitInst (ComM_HsmInitInst, funcdef_no=1, decl_uid=6192, cgraph_uid=2, symbol_order=1)

Modification phase of node ComM_HsmInitInst/1
ComM_HsmInitInst (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx)
{
  uint16 i;
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char _4;
  ComM_HsmEventType * _5;
  int _6;
  int _7;
  int _8;
  int _9;
  int _10;
  sizetype _11;
  ComM_HsmEventType * _12;
  uint8 * _13;
  unsigned char _14;
  int _15;
  int _16;
  int _17;
  sizetype _18;
  uint8 * _19;
  unsigned char _20;
  short unsigned int _21;
  const struct ComM_HsmStateType * _22;
  unsigned char _23;
  unsigned int _24;
  unsigned int _25;
  const struct ComM_HsmStateType * _26;
  unsigned char _27;
  void (*ComM_HsmActionType) (const uint16) * _28;
  unsigned int _29;
  unsigned int _30;
  void (*ComM_HsmActionType) (const uint16) * _31;
  void (*<T619>) (const uint16) _32;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _1 = sc_37(D)->instances;
  _2 = (unsigned int) instIdx_38(D);
  _3 = _2 * 4;
  inst_39 = _1 + _3;
  # DEBUG inst => inst_39
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = sc_37(D)->topStateId;
  inst_39->stateId = _4;
  # DEBUG BEGIN_STMT
  inst_39->sourceId = 255;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _5 = sc_37(D)->events;
  _6 = (int) instIdx_38(D);
  _7 = (int) _20;
  _8 = _6 * _7;
  _9 = (int) i_33;
  _10 = _8 + _9;
  _11 = (sizetype) _10;
  _12 = _5 + _11;
  *_12 = 0;
  # DEBUG BEGIN_STMT
  _13 = sc_37(D)->evCounters;
  _14 = sc_37(D)->numEvents;
  _15 = (int) _14;
  _16 = _6 * _15;
  _17 = _9 + _16;
  _18 = (sizetype) _17;
  _19 = _13 + _18;
  *_19 = 0;
  # DEBUG BEGIN_STMT
  i_48 = i_33 + 1;
  # DEBUG i => i_48

  <bb 4> [local count: 1073741824]:
  # i_33 = PHI <0(2), i_48(3)>
  # DEBUG i => i_33
  # DEBUG BEGIN_STMT
  _20 = sc_37(D)->numEvents;
  _21 = (short unsigned int) _20;
  if (_21 > i_33)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  inst_39->evQueueFill = 0;
  # DEBUG BEGIN_STMT
  inst_39->evQueueInsertEvNo = 0;
  # DEBUG BEGIN_STMT
  _22 = sc_37(D)->states;
  _23 = inst_39->stateId;
  _24 = (unsigned int) _23;
  _25 = _24 * 20;
  _26 = _22 + _25;
  _27 = _26->entryFnIdx;
  if (_27 != 255)
    goto <bb 6>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 6> [local count: 77953656]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _28 = sc_37(D)->actions;
  _29 = (unsigned int) _27;
  _30 = _29 * 4;
  _31 = _28 + _30;
  _32 = *_31;
  _32 (instIdx_38(D));

  <bb 7> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  ComM_HsmInitSubstates (sc_37(D), instIdx_38(D));
  return;

}



;; Function ComM_HsmInit (ComM_HsmInit, funcdef_no=0, decl_uid=6189, cgraph_uid=1, symbol_order=0)

Modification phase of node ComM_HsmInit/0
ComM_HsmInit (const struct ComM_HsmStatechartType * const sc)
{
  uint16 instIdx;
  short unsigned int _1;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  ComM_HsmInitInst (sc_5(D), instIdx_2);
  # DEBUG BEGIN_STMT
  instIdx_7 = instIdx_2 + 1;
  # DEBUG instIdx => instIdx_7

  <bb 4> [local count: 1073741824]:
  # instIdx_2 = PHI <0(2), instIdx_7(3)>
  # DEBUG instIdx => instIdx_2
  # DEBUG BEGIN_STMT
  _1 = sc_5(D)->numInstances;
  if (_1 > instIdx_2)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}



;; Function ComM_HsmEmitInst (ComM_HsmEmitInst, funcdef_no=3, decl_uid=6202, cgraph_uid=4, symbol_order=3)

Modification phase of node ComM_HsmEmitInst/3
ComM_HsmEmitInst (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx, const ComM_HsmEventType event)
{
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  uint8 * _4;
  int _5;
  unsigned char _6;
  int _7;
  int _8;
  int _9;
  int _10;
  sizetype _11;
  uint8 * _12;
  unsigned char _13;
  ComM_HsmEventType * _14;
  unsigned char _15;
  int _16;
  int _17;
  sizetype _18;
  ComM_HsmEventType * _19;
  unsigned char _20;
  unsigned char _21;
  uint8 * _22;
  unsigned char _23;
  int _24;
  int _25;
  int _26;
  sizetype _27;
  uint8 * _28;
  unsigned char _29;
  unsigned char _30;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = sc_33(D)->instances;
  _2 = (unsigned int) instIdx_34(D);
  _3 = _2 * 4;
  inst_35 = _1 + _3;
  # DEBUG inst => inst_35
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = sc_33(D)->evCounters;
  _5 = (int) instIdx_34(D);
  _6 = sc_33(D)->numEvents;
  _7 = (int) _6;
  _8 = _5 * _7;
  _9 = (int) event_37(D);
  _10 = _8 + _9;
  _11 = (sizetype) _10;
  _12 = _4 + _11;
  _13 = *_12;
  if (_13 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _14 = sc_33(D)->events;
  _15 = inst_35->evQueueFill;
  _16 = (int) _15;
  _17 = _8 + _16;
  _18 = (sizetype) _17;
  _19 = _14 + _18;
  *_19 = event_37(D);
  # DEBUG BEGIN_STMT
  _20 = inst_35->evQueueFill;
  _21 = _20 + 1;
  inst_35->evQueueFill = _21;
  # DEBUG BEGIN_STMT
  _22 = sc_33(D)->evCounters;
  _23 = sc_33(D)->numEvents;
  _24 = (int) _23;
  _25 = _5 * _24;
  _26 = _9 + _25;
  _27 = (sizetype) _26;
  _28 = _22 + _27;
  _29 = *_28;
  _30 = _29 + 1;
  *_28 = _30;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_HsmEmit (ComM_HsmEmit, funcdef_no=2, decl_uid=6195, cgraph_uid=3, symbol_order=2)

Modification phase of node ComM_HsmEmit/2
ComM_HsmEmit (const struct ComM_HsmStatechartType * const sc, const ComM_HsmEventType event)
{
  uint16 instIdx;
  short unsigned int _1;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG instIdx => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  ComM_HsmEmitInst (sc_5(D), instIdx_2, event_6(D));
  # DEBUG BEGIN_STMT
  instIdx_8 = instIdx_2 + 1;
  # DEBUG instIdx => instIdx_8

  <bb 4> [local count: 1073741824]:
  # instIdx_2 = PHI <0(2), instIdx_8(3)>
  # DEBUG instIdx => instIdx_2
  # DEBUG BEGIN_STMT
  _1 = sc_5(D)->numInstances;
  if (_1 > instIdx_2)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}



;; Function ComM_HsmEmitToSelfInst (ComM_HsmEmitToSelfInst, funcdef_no=4, decl_uid=6206, cgraph_uid=5, symbol_order=4)

Modification phase of node ComM_HsmEmitToSelfInst/4
ComM_HsmEmitToSelfInst (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx, const ComM_HsmEventType event)
{
  uint16 j;
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  uint8 * _4;
  int _5;
  unsigned char _6;
  int _7;
  int _8;
  int _9;
  int _10;
  sizetype _11;
  uint8 * _12;
  unsigned char _13;
  unsigned char _14;
  ComM_HsmEventType * _15;
  unsigned char _16;
  int _17;
  int _18;
  unsigned int _19;
  unsigned int _20;
  unsigned int _21;
  unsigned int _22;
  ComM_HsmEventType * _23;
  int _24;
  int _25;
  sizetype _26;
  ComM_HsmEventType * _27;
  unsigned char _28;
  unsigned char _29;
  short unsigned int _30;
  unsigned char _31;
  unsigned char _32;
  uint8 * _33;
  unsigned char _34;
  int _35;
  int _36;
  int _37;
  sizetype _38;
  uint8 * _39;
  unsigned char _40;
  unsigned char _41;
  ComM_HsmEventType * _42;
  unsigned char _43;
  int _44;
  int _45;
  unsigned char _46;
  int _47;
  int _48;
  sizetype _49;
  ComM_HsmEventType * _50;
  unsigned char _51;
  unsigned char _52;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  _1 = sc_57(D)->instances;
  _2 = (unsigned int) instIdx_58(D);
  _3 = _2 * 4;
  inst_59 = _1 + _3;
  # DEBUG inst => inst_59
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _4 = sc_57(D)->evCounters;
  _5 = (int) instIdx_58(D);
  _6 = sc_57(D)->numEvents;
  _7 = (int) _6;
  _8 = _5 * _7;
  _9 = (int) event_61(D);
  _10 = _8 + _9;
  _11 = (sizetype) _10;
  _12 = _4 + _11;
  _13 = *_12;
  if (_13 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = inst_59->evQueueFill;
  j_62 = (uint16) _14;
  # DEBUG j => j_62
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _15 = sc_57(D)->events;
  _16 = sc_57(D)->numEvents;
  _17 = (int) _16;
  _18 = _5 * _17;
  _19 = (unsigned int) _18;
  _20 = (unsigned int) j_53;
  _21 = _19 + _20;
  _22 = _21 + 4294967295;
  _23 = _15 + _22;
  _24 = (int) j_53;
  _25 = _18 + _24;
  _26 = (sizetype) _25;
  _27 = _15 + _26;
  _28 = *_23;
  *_27 = _28;
  # DEBUG BEGIN_STMT
  j_68 = j_53 + 65535;
  # DEBUG j => j_68

  <bb 5> [local count: 1073741824]:
  # j_53 = PHI <j_62(3), j_68(4)>
  # DEBUG j => j_53
  # DEBUG BEGIN_STMT
  _29 = inst_59->evQueueInsertEvNo;
  _30 = (short unsigned int) _29;
  if (_30 < j_53)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _31 = inst_59->evQueueFill;
  _32 = _31 + 1;
  inst_59->evQueueFill = _32;
  # DEBUG BEGIN_STMT
  _33 = sc_57(D)->evCounters;
  _34 = sc_57(D)->numEvents;
  _35 = (int) _34;
  _36 = _5 * _35;
  _37 = _9 + _36;
  _38 = (sizetype) _37;
  _39 = _33 + _38;
  _40 = *_39;
  _41 = _40 + 1;
  *_39 = _41;
  # DEBUG BEGIN_STMT
  _42 = sc_57(D)->events;
  _43 = sc_57(D)->numEvents;
  _44 = (int) _43;
  _45 = _5 * _44;
  _46 = inst_59->evQueueInsertEvNo;
  _47 = (int) _46;
  _48 = _45 + _47;
  _49 = (sizetype) _48;
  _50 = _42 + _49;
  *_50 = event_61(D);
  # DEBUG BEGIN_STMT
  _51 = inst_59->evQueueInsertEvNo;
  _52 = _51 + 1;
  inst_59->evQueueInsertEvNo = _52;

  <bb 7> [local count: 236223201]:
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComM_HsmMainInst (ComM_HsmMainInst, funcdef_no=5, decl_uid=6211, cgraph_uid=6, symbol_order=5)

Modification phase of node ComM_HsmMainInst/5
ComM_HsmMainInst (const struct ComM_HsmStatechartType * const sc, const uint16 instIdx)
{
  boolean retVal;
  boolean eventPending;
  uint8 queueEntryNo;
  ComM_HsmEventType event;
  boolean transitionFired;
  struct ComM_HsmInstType * const inst;
  struct ComM_HsmInstType * _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char queueEntryNo.0_4;
  unsigned char event.1_5;
  int iftmp.2_8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  _1 = sc_11(D)->instances;
  _2 = (unsigned int) instIdx_12(D);
  _3 = _2 * 4;
  inst_13 = _1 + _3;
  # DEBUG inst => inst_13
  # DEBUG BEGIN_STMT
  # DEBUG transitionFired => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  inst_13->evQueueInsertEvNo = 0;
  # DEBUG BEGIN_STMT
  eventPending_16 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  # DEBUG eventPending => eventPending_16
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ComM_Enter_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  queueEntryNo.0_4 = queueEntryNo;
  ComM_HsmDelFromQueue (sc_11(D), instIdx_12(D), queueEntryNo.0_4);
  # DEBUG BEGIN_STMT
  ComM_Exit_SCHM_COMM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  event.1_5 = event;
  retVal_24 = ComM_HsmDispatchEvent (sc_11(D), instIdx_12(D), event.1_5);
  # DEBUG retVal => retVal_24
  # DEBUG BEGIN_STMT
  if (retVal_24 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 477815111]:
  if (transitionFired_6 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 5> [local count: 238907556]:

  <bb 6> [local count: 955630223]:
  # iftmp.2_8 = PHI <1(4), 0(5), 1(3)>
  transitionFired_25 = (boolean) iftmp.2_8;
  # DEBUG transitionFired => transitionFired_25
  # DEBUG BEGIN_STMT
  eventPending_27 = ComM_HsmFindEvToDispatch (sc_11(D), instIdx_12(D), &event, &queueEntryNo);
  # DEBUG eventPending => eventPending_27

  <bb 7> [local count: 1073741824]:
  # transitionFired_6 = PHI <0(2), transitionFired_25(6)>
  # eventPending_7 = PHI <eventPending_16(2), eventPending_27(6)>
  # DEBUG eventPending => eventPending_7
  # DEBUG transitionFired => transitionFired_6
  # DEBUG BEGIN_STMT
  if (eventPending_7 == 1)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  # transitionFired_17 = PHI <transitionFired_6(7)>
  # DEBUG BEGIN_STMT
  event ={v} {CLOBBER};
  queueEntryNo ={v} {CLOBBER};
  return transitionFired_17;

}


