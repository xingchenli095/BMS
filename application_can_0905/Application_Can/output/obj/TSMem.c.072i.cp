
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  TS_MemCmp16_NoCheck/16:
  Jump functions of caller  TS_MemBZero16_NoCheck/15:
  Jump functions of caller  TS_MemSet16_NoCheck/14:
  Jump functions of caller  TS_MemCpy16_NoCheck/13:
  Jump functions of caller  TS_MemCmp32_NoCheck/12:
  Jump functions of caller  TS_MemBZero32_NoCheck/11:
  Jump functions of caller  TS_MemSet32_NoCheck/10:
  Jump functions of caller  TS_MemCpy32_NoCheck/9:
  Jump functions of caller  TS_MemCmp64_NoCheck/8:
  Jump functions of caller  TS_MemBZero64_NoCheck/7:
  Jump functions of caller  TS_MemSet64_NoCheck/6:
  Jump functions of caller  TS_MemCpy64_NoCheck/5:
  Jump functions of caller  TS_MemMove/4:
  Jump functions of caller  TS_MemCmp32/3:
  Jump functions of caller  TS_MemBZero32/2:
  Jump functions of caller  TS_MemSet32/1:
  Jump functions of caller  TS_MemCpy32/0:

 Propagating constants:

Not considering TS_MemCmp16_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemBZero16_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemSet16_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCpy16_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCmp32_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemBZero32_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemSet32_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCpy32_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCmp64_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemBZero64_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemSet64_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCpy64_NoCheck for cloning; -fipa-cp-clone disabled.
Not considering TS_MemMove for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCmp32 for cloning; -fipa-cp-clone disabled.
Not considering TS_MemBZero32 for cloning; -fipa-cp-clone disabled.
Not considering TS_MemSet32 for cloning; -fipa-cp-clone disabled.
Not considering TS_MemCpy32 for cloning; -fipa-cp-clone disabled.

overall_size: 394, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: TS_MemCmp16_NoCheck/16:
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
  Node: TS_MemBZero16_NoCheck/15:
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
  Node: TS_MemSet16_NoCheck/14:
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
  Node: TS_MemCpy16_NoCheck/13:
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
  Node: TS_MemCmp32_NoCheck/12:
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
  Node: TS_MemBZero32_NoCheck/11:
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
  Node: TS_MemSet32_NoCheck/10:
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
  Node: TS_MemCpy32_NoCheck/9:
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
  Node: TS_MemCmp64_NoCheck/8:
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
  Node: TS_MemBZero64_NoCheck/7:
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
  Node: TS_MemSet64_NoCheck/6:
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
  Node: TS_MemCpy64_NoCheck/5:
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
  Node: TS_MemMove/4:
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
  Node: TS_MemCmp32/3:
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
  Node: TS_MemBZero32/2:
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
  Node: TS_MemSet32/1:
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
  Node: TS_MemCpy32/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

TS_MemCmp16_NoCheck/16 (TS_MemCmp16_NoCheck) @06bb6e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemBZero16_NoCheck/15 (TS_MemBZero16_NoCheck) @06bb6c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemSet16_NoCheck/14 (TS_MemSet16_NoCheck) @06bb6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCpy16_NoCheck/13 (TS_MemCpy16_NoCheck) @06bb68c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCmp32_NoCheck/12 (TS_MemCmp32_NoCheck) @06bb6700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemBZero32_NoCheck/11 (TS_MemBZero32_NoCheck) @06bb6540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemSet32_NoCheck/10 (TS_MemSet32_NoCheck) @06bb6380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCpy32_NoCheck/9 (TS_MemCpy32_NoCheck) @06bb61c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCmp64_NoCheck/8 (TS_MemCmp64_NoCheck) @06bb6000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:114863532 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemBZero64_NoCheck/7 (TS_MemBZero64_NoCheck) @06ba6e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemSet64_NoCheck/6 (TS_MemSet64_NoCheck) @06ba6c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCpy64_NoCheck/5 (TS_MemCpy64_NoCheck) @06ba6a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemMove/4 (TS_MemMove) @06ba68c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCmp32/3 (TS_MemCmp32) @06ba6700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:229727064 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemBZero32/2 (TS_MemBZero32) @06ba61c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemSet32/1 (TS_MemSet32) @06b67e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
TS_MemCpy32/0 (TS_MemCpy32) @06b67a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function TS_MemCpy32 (TS_MemCpy32, funcdef_no=0, decl_uid=5371, cgraph_uid=1, symbol_order=0)

Modification phase of node TS_MemCpy32/0
TS_MemCpy32 (void * const dst, const void * const src, const usize len)
{
  usize len2;
  uint8 * dst2;
  const uint8 * src2;
  long unsigned int src2.0_1;
  long unsigned int _2;
  long unsigned int dst2.1_3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int dst2.3_7;
  long unsigned int _8;
  short unsigned int _9;
  unsigned char _10;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG src2 => src_23(D)
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_24(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_25(D)
  # DEBUG BEGIN_STMT
  if (len_25(D) > 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  src2.0_1 = (long unsigned int) src_23(D);
  _2 = src2.0_1 & 3;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 29527900]:
  dst2.1_3 = (long unsigned int) dst_24(D);
  _4 = dst2.1_3 & 3;
  if (_4 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 16> [local count: 14763950]:
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 119453778]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const uint32 *)src2_11];
  MEM[(uint32 *)dst2_14] = _5;
  # DEBUG BEGIN_STMT
  src2_28 = src2_11 + 4;
  # DEBUG src2 => src2_28
  # DEBUG BEGIN_STMT
  dst2_29 = dst2_14 + 4;
  # DEBUG dst2 => dst2_29
  # DEBUG BEGIN_STMT
  len2_30 = len2_17 + 4294967292;
  # DEBUG len2 => len2_30

  <bb 6> [local count: 134217728]:
  # src2_11 = PHI <src2_28(5), src_23(D)(16)>
  # dst2_14 = PHI <dst2_29(5), dst_24(D)(16)>
  # len2_17 = PHI <len2_30(5), len_25(D)(16)>
  # DEBUG len2 => len2_17
  # DEBUG dst2 => dst2_14
  # DEBUG src2 => src2_11
  # DEBUG BEGIN_STMT
  if (len2_17 > 3)
    goto <bb 5>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 7> [local count: 44291850]:
  # DEBUG BEGIN_STMT
  _6 = src2.0_1 & 1;
  if (_6 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 118111600]:
  # src2_42 = PHI <src_23(D)(7), src_23(D)(2), src2_11(6), src_23(D)(8), src2_12(10)>
  # dst2_41 = PHI <dst_24(D)(7), dst_24(D)(2), dst2_14(6), dst_24(D)(8), dst2_15(10)>
  # len2_40 = PHI <len_25(D)(7), len_25(D)(2), len2_17(6), len_25(D)(8), len2_18(10)>
  goto <bb 15>; [100.00%]

  <bb 8> [local count: 22145925]:
  dst2.3_7 = (long unsigned int) dst_24(D);
  _8 = dst2.3_7 & 1;
  if (_8 == 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 17> [local count: 11072962]:
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 89590333]:
  # DEBUG BEGIN_STMT
  _9 = MEM[(const uint16 *)src2_12];
  MEM[(uint16 *)dst2_15] = _9;
  # DEBUG BEGIN_STMT
  src2_32 = src2_12 + 2;
  # DEBUG src2 => src2_32
  # DEBUG BEGIN_STMT
  dst2_33 = dst2_15 + 2;
  # DEBUG dst2 => dst2_33
  # DEBUG BEGIN_STMT
  len2_34 = len2_18 + 4294967294;
  # DEBUG len2 => len2_34

  <bb 10> [local count: 100663296]:
  # src2_12 = PHI <src2_32(9), src_23(D)(17)>
  # dst2_15 = PHI <dst2_33(9), dst_24(D)(17)>
  # len2_18 = PHI <len2_34(9), len_25(D)(17)>
  # DEBUG len2 => len2_18
  # DEBUG dst2 => dst2_15
  # DEBUG src2 => src2_12
  # DEBUG BEGIN_STMT
  if (len2_18 > 1)
    goto <bb 9>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 11> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  _10 = *src2_13;
  *dst2_16 = _10;
  # DEBUG BEGIN_STMT
  src2_36 = src2_13 + 1;
  # DEBUG src2 => src2_36
  # DEBUG BEGIN_STMT
  dst2_37 = dst2_16 + 1;
  # DEBUG dst2 => dst2_37
  # DEBUG BEGIN_STMT
  len2_38 = len2_19 + 4294967295;
  # DEBUG len2 => len2_38

  <bb 15> [local count: 1073741824]:
  # src2_13 = PHI <src2_42(13), src2_36(11)>
  # dst2_16 = PHI <dst2_41(13), dst2_37(11)>
  # len2_19 = PHI <len2_40(13), len2_38(11)>
  # DEBUG len2 => len2_19
  # DEBUG dst2 => dst2_16
  # DEBUG src2 => src2_13
  # DEBUG BEGIN_STMT
  if (len2_19 != 0)
    goto <bb 11>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemSet32 (TS_MemSet32, funcdef_no=1, decl_uid=5375, cgraph_uid=2, symbol_order=1)

Modification phase of node TS_MemSet32/1
TS_MemSet32 (void * const dst, const uint8 val, const usize len)
{
  const uint16 val2;
  const uint32 val2;
  usize len2;
  uint8 * dst2;
  long unsigned int dst2.4_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_21(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_22(D)
  # DEBUG BEGIN_STMT
  if (len_22(D) > 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  dst2.4_1 = (long unsigned int) dst_21(D);
  _2 = dst2.4_1 & 3;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 29527900]:
  # DEBUG BEGIN_STMT
  _3 = (long unsigned int) val_24(D);
  _4 = _3 << 8;
  _5 = _3 | _4;
  _6 = _3 << 16;
  _7 = _5 | _6;
  _8 = _3 << 24;
  val2_29 = _7 | _8;
  # DEBUG val2 => val2_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 238907555]:
  # DEBUG BEGIN_STMT
  MEM[(uint32 *)dst2_12] = val2_29;
  # DEBUG BEGIN_STMT
  dst2_31 = dst2_12 + 4;
  # DEBUG dst2 => dst2_31
  # DEBUG BEGIN_STMT
  len2_32 = len2_15 + 4294967292;
  # DEBUG len2 => len2_32

  <bb 6> [local count: 268435456]:
  # dst2_12 = PHI <dst_21(D)(4), dst2_31(5)>
  # len2_15 = PHI <len_22(D)(4), len2_32(5)>
  # DEBUG len2 => len2_15
  # DEBUG dst2 => dst2_12
  # DEBUG BEGIN_STMT
  if (len2_15 > 3)
    goto <bb 5>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 7> [local count: 29527900]:
  # DEBUG BEGIN_STMT
  _9 = dst2.4_1 & 1;
  if (_9 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 13> [local count: 118111600]:
  # dst2_38 = PHI <dst_21(D)(7), dst_21(D)(2), dst2_12(6), dst2_13(10)>
  # len2_37 = PHI <len_22(D)(7), len_22(D)(2), len2_15(6), len2_16(10)>
  goto <bb 15>; [100.00%]

  <bb 8> [local count: 14763950]:
  # DEBUG BEGIN_STMT
  _10 = (short unsigned int) val_24(D);
  _11 = _10 << 8;
  val2_25 = _10 | _11;
  # DEBUG val2 => val2_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 119453778]:
  # DEBUG BEGIN_STMT
  MEM[(uint16 *)dst2_13] = val2_25;
  # DEBUG BEGIN_STMT
  dst2_27 = dst2_13 + 2;
  # DEBUG dst2 => dst2_27
  # DEBUG BEGIN_STMT
  len2_28 = len2_16 + 4294967294;
  # DEBUG len2 => len2_28

  <bb 10> [local count: 134217728]:
  # dst2_13 = PHI <dst_21(D)(8), dst2_27(9)>
  # len2_16 = PHI <len_22(D)(8), len2_28(9)>
  # DEBUG len2 => len2_16
  # DEBUG dst2 => dst2_13
  # DEBUG BEGIN_STMT
  if (len2_16 > 1)
    goto <bb 9>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 11> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  *dst2_14 = val_24(D);
  # DEBUG BEGIN_STMT
  dst2_34 = dst2_14 + 1;
  # DEBUG dst2 => dst2_34
  # DEBUG BEGIN_STMT
  len2_35 = len2_17 + 4294967295;
  # DEBUG len2 => len2_35

  <bb 15> [local count: 1073741824]:
  # dst2_14 = PHI <dst2_38(13), dst2_34(11)>
  # len2_17 = PHI <len2_37(13), len2_35(11)>
  # DEBUG len2 => len2_17
  # DEBUG dst2 => dst2_14
  # DEBUG BEGIN_STMT
  if (len2_17 != 0)
    goto <bb 11>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 14> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemBZero32 (TS_MemBZero32, funcdef_no=2, decl_uid=5378, cgraph_uid=3, symbol_order=2)

Modification phase of node TS_MemBZero32/2
TS_MemBZero32 (void * const dst, const usize len)
{
  usize len2;
  uint8 * dst2;
  long unsigned int dst2.6_1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_14(D)
  # DEBUG BEGIN_STMT
  if (len_14(D) > 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  dst2.6_1 = (long unsigned int) dst_13(D);
  _2 = dst2.6_1 & 3;
  if (_2 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 14> [local count: 29527900]:
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 238907555]:
  # DEBUG BEGIN_STMT
  MEM[(uint32 *)dst2_4] = 0;
  # DEBUG BEGIN_STMT
  dst2_20 = dst2_4 + 4;
  # DEBUG dst2 => dst2_20
  # DEBUG BEGIN_STMT
  len2_21 = len2_7 + 4294967292;
  # DEBUG len2 => len2_21

  <bb 5> [local count: 268435456]:
  # dst2_4 = PHI <dst2_20(4), dst_13(D)(14)>
  # len2_7 = PHI <len2_21(4), len_14(D)(14)>
  # DEBUG len2 => len2_7
  # DEBUG dst2 => dst2_4
  # DEBUG BEGIN_STMT
  if (len2_7 > 3)
    goto <bb 4>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 6> [local count: 29527900]:
  # DEBUG BEGIN_STMT
  _3 = dst2.6_1 & 1;
  if (_3 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 15> [local count: 14763950]:
  goto <bb 8>; [100.00%]

  <bb 11> [local count: 118111600]:
  # dst2_27 = PHI <dst_13(D)(6), dst_13(D)(2), dst2_4(5), dst2_5(8)>
  # len2_26 = PHI <len_14(D)(6), len_14(D)(2), len2_7(5), len2_8(8)>
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 119453778]:
  # DEBUG BEGIN_STMT
  MEM[(uint16 *)dst2_5] = 0;
  # DEBUG BEGIN_STMT
  dst2_17 = dst2_5 + 2;
  # DEBUG dst2 => dst2_17
  # DEBUG BEGIN_STMT
  len2_18 = len2_8 + 4294967294;
  # DEBUG len2 => len2_18

  <bb 8> [local count: 134217728]:
  # dst2_5 = PHI <dst2_17(7), dst_13(D)(15)>
  # len2_8 = PHI <len2_18(7), len_14(D)(15)>
  # DEBUG len2 => len2_8
  # DEBUG dst2 => dst2_5
  # DEBUG BEGIN_STMT
  if (len2_8 > 1)
    goto <bb 7>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 9> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  *dst2_6 = 0;
  # DEBUG BEGIN_STMT
  dst2_23 = dst2_6 + 1;
  # DEBUG dst2 => dst2_23
  # DEBUG BEGIN_STMT
  len2_24 = len2_9 + 4294967295;
  # DEBUG len2 => len2_24

  <bb 13> [local count: 1073741824]:
  # dst2_6 = PHI <dst2_27(11), dst2_23(9)>
  # len2_9 = PHI <len2_26(11), len2_24(9)>
  # DEBUG len2 => len2_9
  # DEBUG dst2 => dst2_6
  # DEBUG BEGIN_STMT
  if (len2_9 != 0)
    goto <bb 9>; [89.00%]
  else
    goto <bb 12>; [11.00%]

  <bb 12> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemCmp32 (TS_MemCmp32, funcdef_no=3, decl_uid=5382, cgraph_uid=4, symbol_order=3)

Modification phase of node TS_MemCmp32/3
TS_MemCmp32 (const void * const a, const void * const b, const usize len)
{
  Std_ReturnType RetVal;
  usize len2;
  const uint8 * b2;
  const uint8 * a2;
  long unsigned int a2.8_1;
  long unsigned int _2;
  long unsigned int b2.9_3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int b2.11_8;
  long unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;
  unsigned char _12;
  unsigned char _13;

  <bb 2> [local count: 229727064]:
  # DEBUG BEGIN_STMT
  # DEBUG a2 => a_28(D)
  # DEBUG BEGIN_STMT
  # DEBUG b2 => b_29(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_30(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (len_30(D) > 15)
    goto <bb 3>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  a2.8_1 = (long unsigned int) a_28(D);
  _2 = a2.8_1 & 3;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 4> [local count: 57431766]:
  b2.9_3 = (long unsigned int) b_29(D);
  _4 = b2.9_3 & 3;
  if (_4 == 0)
    goto <bb 19>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 19> [local count: 28715883]:
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 253671506]:
  # DEBUG BEGIN_STMT
  _5 = MEM[(const uint32 *)a2_14];
  _6 = MEM[(const uint32 *)b2_18];
  if (_5 != _6)
    goto <bb 13>; [5.50%]
  else
    goto <bb 6>; [94.50%]

  <bb 6> [local count: 239719573]:
  # DEBUG BEGIN_STMT
  a2_32 = a2_14 + 4;
  # DEBUG a2 => a2_32
  # DEBUG BEGIN_STMT
  b2_33 = b2_18 + 4;
  # DEBUG b2 => b2_33
  # DEBUG BEGIN_STMT
  len2_34 = len2_22 + 4294967292;
  # DEBUG len2 => len2_34

  <bb 7> [local count: 268435456]:
  # a2_14 = PHI <a2_32(6), a_28(D)(19)>
  # b2_18 = PHI <b2_33(6), b_29(D)(19)>
  # len2_22 = PHI <len2_34(6), len_30(D)(19)>
  # DEBUG RetVal => NULL
  # DEBUG len2 => len2_22
  # DEBUG b2 => b2_18
  # DEBUG a2 => a2_14
  # DEBUG BEGIN_STMT
  if (len2_22 > 3)
    goto <bb 5>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 8> [local count: 86147649]:
  # DEBUG BEGIN_STMT
  _7 = a2.8_1 & 1;
  if (_7 == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 9> [local count: 43073825]:
  b2.11_8 = (long unsigned int) b_29(D);
  _9 = b2.11_8 & 1;
  if (_9 == 0)
    goto <bb 20>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 20> [local count: 21536912]:
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 190253630]:
  # DEBUG BEGIN_STMT
  _10 = MEM[(const uint16 *)a2_15];
  _11 = MEM[(const uint16 *)b2_19];
  if (_10 != _11)
    goto <bb 13>; [5.50%]
  else
    goto <bb 11>; [94.50%]

  <bb 11> [local count: 179789680]:
  # DEBUG BEGIN_STMT
  a2_35 = a2_15 + 2;
  # DEBUG a2 => a2_35
  # DEBUG BEGIN_STMT
  b2_36 = b2_19 + 2;
  # DEBUG b2 => b2_36
  # DEBUG BEGIN_STMT
  len2_37 = len2_23 + 4294967294;
  # DEBUG len2 => len2_37

  <bb 12> [local count: 201326592]:
  # a2_15 = PHI <a2_35(11), a_28(D)(20)>
  # b2_19 = PHI <b2_36(11), b_29(D)(20)>
  # len2_23 = PHI <len2_37(11), len_30(D)(20)>
  # DEBUG RetVal => NULL
  # DEBUG len2 => len2_23
  # DEBUG b2 => b2_19
  # DEBUG a2 => a2_15
  # DEBUG BEGIN_STMT
  if (len2_23 > 1)
    goto <bb 10>; [94.50%]
  else
    goto <bb 13>; [5.50%]

  <bb 13> [local count: 229727064]:
  # a2_16 = PHI <a2_15(12), a_28(D)(2), a2_14(7), a2_15(10), a2_14(5), a_28(D)(9), a_28(D)(8)>
  # b2_20 = PHI <b2_19(12), b_29(D)(2), b2_18(7), b2_19(10), b2_18(5), b_29(D)(9), b_29(D)(8)>
  # len2_24 = PHI <len2_23(12), len_30(D)(2), len2_22(7), len2_23(10), len2_22(5), len_30(D)(9), len_30(D)(8)>
  # RetVal_26 = PHI <0(12), 0(2), 0(7), 1(10), 1(5), 0(9), 0(8)>
  # DEBUG RetVal => RetVal_26
  # DEBUG len2 => len2_24
  # DEBUG b2 => b2_20
  # DEBUG a2 => a2_16
  # DEBUG BEGIN_STMT
  if (RetVal_26 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 18> [local count: 114863532]:
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _12 = *a2_17;
  _13 = *b2_21;
  if (_12 != _13)
    goto <bb 17>; [5.50%]
  else
    goto <bb 15>; [94.50%]

  <bb 15> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  a2_38 = a2_17 + 1;
  # DEBUG a2 => a2_38
  # DEBUG BEGIN_STMT
  b2_39 = b2_21 + 1;
  # DEBUG b2 => b2_39
  # DEBUG BEGIN_STMT
  len2_40 = len2_25 + 4294967295;
  # DEBUG len2 => len2_40

  <bb 16> [local count: 1073741824]:
  # a2_17 = PHI <a2_38(15), a2_16(18)>
  # b2_21 = PHI <b2_39(15), b2_20(18)>
  # len2_25 = PHI <len2_40(15), len2_24(18)>
  # DEBUG RetVal => NULL
  # DEBUG len2 => len2_25
  # DEBUG b2 => b2_21
  # DEBUG a2 => a2_17
  # DEBUG BEGIN_STMT
  if (len2_25 != 0)
    goto <bb 14>; [94.50%]
  else
    goto <bb 17>; [5.50%]

  <bb 17> [local count: 229727064]:
  # RetVal_27 = PHI <RetVal_26(13), 1(14), 0(16)>
  # DEBUG RetVal => RetVal_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_27;

}



;; Function TS_MemMove (TS_MemMove, funcdef_no=4, decl_uid=5386, cgraph_uid=5, symbol_order=4)

Modification phase of node TS_MemMove/4
TS_MemMove (void * const dst, const void * const src, const usize len)
{
  usize len2;
  const uint8 * src2;
  uint8 * dst2;
  unsigned char _1;
  sizetype _2;
  unsigned char _3;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG src2 => src_14(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_15(D)
  # DEBUG BEGIN_STMT
  if (dst_13(D) < src_14(D))
    goto <bb 10>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 10> [local count: 118111600]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = *src2_6;
  *dst2_4 = _1;
  # DEBUG BEGIN_STMT
  dst2_24 = dst2_4 + 1;
  # DEBUG dst2 => dst2_24
  # DEBUG BEGIN_STMT
  src2_25 = src2_6 + 1;
  # DEBUG src2 => src2_25
  # DEBUG BEGIN_STMT
  len2_26 = len2_8 + 4294967295;
  # DEBUG len2 => len2_26

  <bb 4> [local count: 1073741824]:
  # dst2_4 = PHI <dst2_24(3), dst_13(D)(10)>
  # src2_6 = PHI <src2_25(3), src_14(D)(10)>
  # len2_8 = PHI <len2_26(3), len_15(D)(10)>
  # DEBUG len2 => len2_8
  # DEBUG src2 => src2_6
  # DEBUG dst2 => dst2_4
  # DEBUG BEGIN_STMT
  if (len2_8 != 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  if (dst_13(D) > src_14(D))
    goto <bb 6>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 6> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _2 = len_15(D) + 4294967295;
  dst2_17 = dst_13(D) + _2;
  # DEBUG dst2 => dst2_17
  # DEBUG BEGIN_STMT
  src2_18 = src_14(D) + _2;
  # DEBUG src2 => src2_18
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_15(D)
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  _3 = *src2_7;
  *dst2_5 = _3;
  # DEBUG BEGIN_STMT
  dst2_20 = dst2_5 + 4294967295;
  # DEBUG dst2 => dst2_20
  # DEBUG BEGIN_STMT
  src2_21 = src2_7 + 4294967295;
  # DEBUG src2 => src2_21
  # DEBUG BEGIN_STMT
  len2_22 = len2_9 + 4294967295;
  # DEBUG len2 => len2_22

  <bb 8> [local count: 536870913]:
  # dst2_5 = PHI <dst2_17(6), dst2_20(7)>
  # src2_7 = PHI <src2_18(6), src2_21(7)>
  # len2_9 = PHI <len_15(D)(6), len2_22(7)>
  # DEBUG len2 => len2_9
  # DEBUG src2 => src2_7
  # DEBUG dst2 => dst2_5
  # DEBUG BEGIN_STMT
  if (len2_9 != 0)
    goto <bb 7>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 236223201]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemCpy64_NoCheck (TS_MemCpy64_NoCheck, funcdef_no=5, decl_uid=5390, cgraph_uid=6, symbol_order=5)

Modification phase of node TS_MemCpy64_NoCheck/5
TS_MemCpy64_NoCheck (void * const dst, const void * const src, const usize len)
{
  usize len2;
  uint8 * dst2;
  const uint8 * src2;
  long long unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG src2 => src_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_12(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint64 *)src2_3];
  MEM[(uint64 *)dst2_5] = _1;
  # DEBUG BEGIN_STMT
  src2_20 = src2_3 + 8;
  # DEBUG src2 => src2_20
  # DEBUG BEGIN_STMT
  dst2_21 = dst2_5 + 8;
  # DEBUG dst2 => dst2_21
  # DEBUG BEGIN_STMT
  len2_22 = len2_7 + 4294967288;
  # DEBUG len2 => len2_22

  <bb 4> [local count: 1073741824]:
  # src2_3 = PHI <src_11(D)(2), src2_20(3)>
  # dst2_5 = PHI <dst_12(D)(2), dst2_21(3)>
  # len2_7 = PHI <len_13(D)(2), len2_22(3)>
  # DEBUG len2 => len2_7
  # DEBUG dst2 => dst2_5
  # DEBUG src2 => src2_3
  # DEBUG BEGIN_STMT
  if (len2_7 > 7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 826781204]:
  # DEBUG BEGIN_STMT
  _2 = *src2_4;
  *dst2_6 = _2;
  # DEBUG BEGIN_STMT
  src2_16 = src2_4 + 1;
  # DEBUG src2 => src2_16
  # DEBUG BEGIN_STMT
  dst2_17 = dst2_6 + 1;
  # DEBUG dst2 => dst2_17
  # DEBUG BEGIN_STMT
  len2_18 = len2_8 + 4294967295;
  # DEBUG len2 => len2_18

  <bb 7> [local count: 944892805]:
  # src2_4 = PHI <src2_16(6), src2_3(9)>
  # dst2_6 = PHI <dst2_17(6), dst2_5(9)>
  # len2_8 = PHI <len2_18(6), len2_7(9)>
  # DEBUG len2 => len2_8
  # DEBUG dst2 => dst2_6
  # DEBUG src2 => src2_4
  # DEBUG BEGIN_STMT
  if (len2_8 != 0)
    goto <bb 6>; [87.50%]
  else
    goto <bb 8>; [12.50%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemSet64_NoCheck (TS_MemSet64_NoCheck, funcdef_no=6, decl_uid=5394, cgraph_uid=7, symbol_order=6)

Modification phase of node TS_MemSet64_NoCheck/6
TS_MemSet64_NoCheck (void * const dst, const uint8 val, const usize len)
{
  const uint64 val2;
  usize len2;
  uint8 * dst2;
  long long unsigned int _1;
  long long unsigned int _2;
  long long unsigned int _3;
  long long unsigned int _4;
  long long unsigned int _5;
  long long unsigned int _6;
  long long unsigned int _7;
  long long unsigned int _8;
  long long unsigned int _9;
  long long unsigned int _10;
  long long unsigned int _11;
  long long unsigned int _12;
  long long unsigned int _13;
  long long unsigned int _14;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_21(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_22(D)
  # DEBUG BEGIN_STMT
  _1 = (long long unsigned int) val_23(D);
  _2 = _1 << 8;
  _3 = _1 | _2;
  _4 = _1 << 16;
  _5 = _3 | _4;
  _6 = _1 << 24;
  _7 = _5 | _6;
  _8 = _1 << 32;
  _9 = _7 | _8;
  _10 = _1 << 40;
  _11 = _9 | _10;
  _12 = _1 << 48;
  _13 = _11 | _12;
  _14 = _1 << 56;
  val2_24 = _13 | _14;
  # DEBUG val2 => val2_24
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  MEM[(uint64 *)dst2_15] = val2_24;
  # DEBUG BEGIN_STMT
  dst2_30 = dst2_15 + 8;
  # DEBUG dst2 => dst2_30
  # DEBUG BEGIN_STMT
  len2_31 = len2_17 + 4294967288;
  # DEBUG len2 => len2_31

  <bb 4> [local count: 1073741824]:
  # dst2_15 = PHI <dst_21(D)(2), dst2_30(3)>
  # len2_17 = PHI <len_22(D)(2), len2_31(3)>
  # DEBUG len2 => len2_17
  # DEBUG dst2 => dst2_15
  # DEBUG BEGIN_STMT
  if (len2_17 > 7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 826781204]:
  # DEBUG BEGIN_STMT
  *dst2_16 = val_23(D);
  # DEBUG BEGIN_STMT
  dst2_27 = dst2_16 + 1;
  # DEBUG dst2 => dst2_27
  # DEBUG BEGIN_STMT
  len2_28 = len2_18 + 4294967295;
  # DEBUG len2 => len2_28

  <bb 7> [local count: 944892805]:
  # dst2_16 = PHI <dst2_27(6), dst2_15(9)>
  # len2_18 = PHI <len2_28(6), len2_17(9)>
  # DEBUG len2 => len2_18
  # DEBUG dst2 => dst2_16
  # DEBUG BEGIN_STMT
  if (len2_18 != 0)
    goto <bb 6>; [87.50%]
  else
    goto <bb 8>; [12.50%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemBZero64_NoCheck (TS_MemBZero64_NoCheck, funcdef_no=7, decl_uid=5397, cgraph_uid=8, symbol_order=7)

Modification phase of node TS_MemBZero64_NoCheck/7
TS_MemBZero64_NoCheck (void * const dst, const usize len)
{
  usize len2;
  uint8 * dst2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  MEM[(uint64 *)dst2_1] = 0;
  # DEBUG BEGIN_STMT
  dst2_14 = dst2_1 + 8;
  # DEBUG dst2 => dst2_14
  # DEBUG BEGIN_STMT
  len2_15 = len2_3 + 4294967288;
  # DEBUG len2 => len2_15

  <bb 4> [local count: 1073741824]:
  # dst2_1 = PHI <dst_7(D)(2), dst2_14(3)>
  # len2_3 = PHI <len_8(D)(2), len2_15(3)>
  # DEBUG len2 => len2_3
  # DEBUG dst2 => dst2_1
  # DEBUG BEGIN_STMT
  if (len2_3 > 7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 826781204]:
  # DEBUG BEGIN_STMT
  *dst2_2 = 0;
  # DEBUG BEGIN_STMT
  dst2_11 = dst2_2 + 1;
  # DEBUG dst2 => dst2_11
  # DEBUG BEGIN_STMT
  len2_12 = len2_4 + 4294967295;
  # DEBUG len2 => len2_12

  <bb 7> [local count: 944892805]:
  # dst2_2 = PHI <dst2_11(6), dst2_1(9)>
  # len2_4 = PHI <len2_12(6), len2_3(9)>
  # DEBUG len2 => len2_4
  # DEBUG dst2 => dst2_2
  # DEBUG BEGIN_STMT
  if (len2_4 != 0)
    goto <bb 6>; [87.50%]
  else
    goto <bb 8>; [12.50%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemCmp64_NoCheck (TS_MemCmp64_NoCheck, funcdef_no=8, decl_uid=5401, cgraph_uid=9, symbol_order=8)

Modification phase of node TS_MemCmp64_NoCheck/8
TS_MemCmp64_NoCheck (const void * const a, const void * const b, const usize len)
{
  Std_ReturnType RetVal;
  usize len2;
  const uint8 * b2;
  const uint8 * a2;
  long long unsigned int _1;
  long long unsigned int _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG a2 => a_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG b2 => b_15(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_17(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint64 *)a2_5];
  _2 = MEM[(const uint64 *)b2_7];
  if (_1 != _2)
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  a2_19 = a2_5 + 8;
  # DEBUG a2 => a2_19
  # DEBUG BEGIN_STMT
  b2_20 = b2_7 + 8;
  # DEBUG b2 => b2_20
  # DEBUG BEGIN_STMT
  len2_21 = len2_9 + 4294967288;
  # DEBUG len2 => len2_21

  <bb 5> [local count: 1073741824]:
  # a2_5 = PHI <a_13(D)(2), a2_19(4)>
  # b2_7 = PHI <b_15(D)(2), b2_20(4)>
  # len2_9 = PHI <len_17(D)(2), len2_21(4)>
  # DEBUG len2 => len2_9
  # DEBUG b2 => b2_7
  # DEBUG a2 => a2_5
  # DEBUG BEGIN_STMT
  if (len2_9 > 7)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # RetVal_11 = PHI <1(3), 0(5)>
  # a2_25 = PHI <a2_5(3), a2_5(5)>
  # b2_14 = PHI <b2_7(3), b2_7(5)>
  # len2_16 = PHI <len2_9(3), len2_9(5)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RetVal_11 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 11> [local count: 57431766]:
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 507343010]:
  # DEBUG BEGIN_STMT
  _3 = *a2_6;
  _4 = *b2_8;
  if (_3 != _4)
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 479439144]:
  # DEBUG BEGIN_STMT
  a2_22 = a2_6 + 1;
  # DEBUG a2 => a2_22
  # DEBUG BEGIN_STMT
  b2_23 = b2_8 + 1;
  # DEBUG b2 => b2_23
  # DEBUG BEGIN_STMT
  len2_24 = len2_10 + 4294967295;
  # DEBUG len2 => len2_24

  <bb 9> [local count: 536870910]:
  # a2_6 = PHI <a2_22(8), a2_25(11)>
  # b2_8 = PHI <b2_23(8), b2_14(11)>
  # len2_10 = PHI <len2_24(8), len2_16(11)>
  # DEBUG RetVal => NULL
  # DEBUG len2 => len2_10
  # DEBUG b2 => b2_8
  # DEBUG a2 => a2_6
  # DEBUG BEGIN_STMT
  if (len2_10 != 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863531]:
  # RetVal_12 = PHI <RetVal_11(6), 1(7), 0(9)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function TS_MemCpy32_NoCheck (TS_MemCpy32_NoCheck, funcdef_no=9, decl_uid=5405, cgraph_uid=10, symbol_order=9)

Modification phase of node TS_MemCpy32_NoCheck/9
TS_MemCpy32_NoCheck (void * const dst, const void * const src, const usize len)
{
  usize len2;
  uint8 * dst2;
  const uint8 * src2;
  long unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG src2 => src_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_12(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint32 *)src2_3];
  MEM[(uint32 *)dst2_5] = _1;
  # DEBUG BEGIN_STMT
  src2_20 = src2_3 + 4;
  # DEBUG src2 => src2_20
  # DEBUG BEGIN_STMT
  dst2_21 = dst2_5 + 4;
  # DEBUG dst2 => dst2_21
  # DEBUG BEGIN_STMT
  len2_22 = len2_7 + 4294967292;
  # DEBUG len2 => len2_22

  <bb 4> [local count: 1073741824]:
  # src2_3 = PHI <src_11(D)(2), src2_20(3)>
  # dst2_5 = PHI <dst_12(D)(2), dst2_21(3)>
  # len2_7 = PHI <len_13(D)(2), len2_22(3)>
  # DEBUG len2 => len2_7
  # DEBUG dst2 => dst2_5
  # DEBUG src2 => src2_3
  # DEBUG BEGIN_STMT
  if (len2_7 > 3)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  _2 = *src2_4;
  *dst2_6 = _2;
  # DEBUG BEGIN_STMT
  src2_16 = src2_4 + 1;
  # DEBUG src2 => src2_16
  # DEBUG BEGIN_STMT
  dst2_17 = dst2_6 + 1;
  # DEBUG dst2 => dst2_17
  # DEBUG BEGIN_STMT
  len2_18 = len2_8 + 4294967295;
  # DEBUG len2 => len2_18

  <bb 7> [local count: 472446402]:
  # src2_4 = PHI <src2_16(6), src2_3(9)>
  # dst2_6 = PHI <dst2_17(6), dst2_5(9)>
  # len2_8 = PHI <len2_18(6), len2_7(9)>
  # DEBUG len2 => len2_8
  # DEBUG dst2 => dst2_6
  # DEBUG src2 => src2_4
  # DEBUG BEGIN_STMT
  if (len2_8 != 0)
    goto <bb 6>; [75.00%]
  else
    goto <bb 8>; [25.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemSet32_NoCheck (TS_MemSet32_NoCheck, funcdef_no=10, decl_uid=5409, cgraph_uid=11, symbol_order=10)

Modification phase of node TS_MemSet32_NoCheck/10
TS_MemSet32_NoCheck (void * const dst, const uint8 val, const usize len)
{
  const uint32 val2;
  usize len2;
  uint8 * dst2;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_14(D)
  # DEBUG BEGIN_STMT
  _1 = (long unsigned int) val_15(D);
  _2 = _1 << 8;
  _3 = _1 | _2;
  _4 = _1 << 16;
  _5 = _3 | _4;
  _6 = _1 << 24;
  val2_16 = _5 | _6;
  # DEBUG val2 => val2_16
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  MEM[(uint32 *)dst2_7] = val2_16;
  # DEBUG BEGIN_STMT
  dst2_22 = dst2_7 + 4;
  # DEBUG dst2 => dst2_22
  # DEBUG BEGIN_STMT
  len2_23 = len2_9 + 4294967292;
  # DEBUG len2 => len2_23

  <bb 4> [local count: 1073741824]:
  # dst2_7 = PHI <dst_13(D)(2), dst2_22(3)>
  # len2_9 = PHI <len_14(D)(2), len2_23(3)>
  # DEBUG len2 => len2_9
  # DEBUG dst2 => dst2_7
  # DEBUG BEGIN_STMT
  if (len2_9 > 3)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  *dst2_8 = val_15(D);
  # DEBUG BEGIN_STMT
  dst2_19 = dst2_8 + 1;
  # DEBUG dst2 => dst2_19
  # DEBUG BEGIN_STMT
  len2_20 = len2_10 + 4294967295;
  # DEBUG len2 => len2_20

  <bb 7> [local count: 472446402]:
  # dst2_8 = PHI <dst2_19(6), dst2_7(9)>
  # len2_10 = PHI <len2_20(6), len2_9(9)>
  # DEBUG len2 => len2_10
  # DEBUG dst2 => dst2_8
  # DEBUG BEGIN_STMT
  if (len2_10 != 0)
    goto <bb 6>; [75.00%]
  else
    goto <bb 8>; [25.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemBZero32_NoCheck (TS_MemBZero32_NoCheck, funcdef_no=11, decl_uid=5412, cgraph_uid=12, symbol_order=11)

Modification phase of node TS_MemBZero32_NoCheck/11
TS_MemBZero32_NoCheck (void * const dst, const usize len)
{
  usize len2;
  uint8 * dst2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  MEM[(uint32 *)dst2_1] = 0;
  # DEBUG BEGIN_STMT
  dst2_14 = dst2_1 + 4;
  # DEBUG dst2 => dst2_14
  # DEBUG BEGIN_STMT
  len2_15 = len2_3 + 4294967292;
  # DEBUG len2 => len2_15

  <bb 4> [local count: 1073741824]:
  # dst2_1 = PHI <dst_7(D)(2), dst2_14(3)>
  # len2_3 = PHI <len_8(D)(2), len2_15(3)>
  # DEBUG len2 => len2_3
  # DEBUG dst2 => dst2_1
  # DEBUG BEGIN_STMT
  if (len2_3 > 3)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  *dst2_2 = 0;
  # DEBUG BEGIN_STMT
  dst2_11 = dst2_2 + 1;
  # DEBUG dst2 => dst2_11
  # DEBUG BEGIN_STMT
  len2_12 = len2_4 + 4294967295;
  # DEBUG len2 => len2_12

  <bb 7> [local count: 472446402]:
  # dst2_2 = PHI <dst2_11(6), dst2_1(9)>
  # len2_4 = PHI <len2_12(6), len2_3(9)>
  # DEBUG len2 => len2_4
  # DEBUG dst2 => dst2_2
  # DEBUG BEGIN_STMT
  if (len2_4 != 0)
    goto <bb 6>; [75.00%]
  else
    goto <bb 8>; [25.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemCmp32_NoCheck (TS_MemCmp32_NoCheck, funcdef_no=12, decl_uid=5416, cgraph_uid=13, symbol_order=12)

Modification phase of node TS_MemCmp32_NoCheck/12
TS_MemCmp32_NoCheck (const void * const a, const void * const b, const usize len)
{
  Std_ReturnType RetVal;
  usize len2;
  const uint8 * b2;
  const uint8 * a2;
  long unsigned int _1;
  long unsigned int _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG a2 => a_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG b2 => b_15(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_17(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint32 *)a2_5];
  _2 = MEM[(const uint32 *)b2_7];
  if (_1 != _2)
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  a2_19 = a2_5 + 4;
  # DEBUG a2 => a2_19
  # DEBUG BEGIN_STMT
  b2_20 = b2_7 + 4;
  # DEBUG b2 => b2_20
  # DEBUG BEGIN_STMT
  len2_21 = len2_9 + 4294967292;
  # DEBUG len2 => len2_21

  <bb 5> [local count: 1073741824]:
  # a2_5 = PHI <a_13(D)(2), a2_19(4)>
  # b2_7 = PHI <b_15(D)(2), b2_20(4)>
  # len2_9 = PHI <len_17(D)(2), len2_21(4)>
  # DEBUG len2 => len2_9
  # DEBUG b2 => b2_7
  # DEBUG a2 => a2_5
  # DEBUG BEGIN_STMT
  if (len2_9 > 3)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # RetVal_11 = PHI <1(3), 0(5)>
  # a2_25 = PHI <a2_5(3), a2_5(5)>
  # b2_14 = PHI <b2_7(3), b2_7(5)>
  # len2_16 = PHI <len2_9(3), len2_9(5)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RetVal_11 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 11> [local count: 57431766]:
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 507343010]:
  # DEBUG BEGIN_STMT
  _3 = *a2_6;
  _4 = *b2_8;
  if (_3 != _4)
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 479439144]:
  # DEBUG BEGIN_STMT
  a2_22 = a2_6 + 1;
  # DEBUG a2 => a2_22
  # DEBUG BEGIN_STMT
  b2_23 = b2_8 + 1;
  # DEBUG b2 => b2_23
  # DEBUG BEGIN_STMT
  len2_24 = len2_10 + 4294967295;
  # DEBUG len2 => len2_24

  <bb 9> [local count: 536870910]:
  # a2_6 = PHI <a2_22(8), a2_25(11)>
  # b2_8 = PHI <b2_23(8), b2_14(11)>
  # len2_10 = PHI <len2_24(8), len2_16(11)>
  # DEBUG RetVal => NULL
  # DEBUG len2 => len2_10
  # DEBUG b2 => b2_8
  # DEBUG a2 => a2_6
  # DEBUG BEGIN_STMT
  if (len2_10 != 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863531]:
  # RetVal_12 = PHI <RetVal_11(6), 1(7), 0(9)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function TS_MemCpy16_NoCheck (TS_MemCpy16_NoCheck, funcdef_no=13, decl_uid=5420, cgraph_uid=14, symbol_order=13)

Modification phase of node TS_MemCpy16_NoCheck/13
TS_MemCpy16_NoCheck (void * const dst, const void * const src, const usize len)
{
  usize len2;
  uint8 * dst2;
  const uint8 * src2;
  short unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG src2 => src_11(D)
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_12(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint16 *)src2_3];
  MEM[(uint16 *)dst2_5] = _1;
  # DEBUG BEGIN_STMT
  src2_20 = src2_3 + 2;
  # DEBUG src2 => src2_20
  # DEBUG BEGIN_STMT
  dst2_21 = dst2_5 + 2;
  # DEBUG dst2 => dst2_21
  # DEBUG BEGIN_STMT
  len2_22 = len2_7 + 4294967294;
  # DEBUG len2 => len2_22

  <bb 4> [local count: 1073741824]:
  # src2_3 = PHI <src_11(D)(2), src2_20(3)>
  # dst2_5 = PHI <dst_12(D)(2), dst2_21(3)>
  # len2_7 = PHI <len_13(D)(2), len2_22(3)>
  # DEBUG len2 => len2_7
  # DEBUG dst2 => dst2_5
  # DEBUG src2 => src2_3
  # DEBUG BEGIN_STMT
  if (len2_7 > 1)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _2 = *src2_4;
  *dst2_6 = _2;
  # DEBUG BEGIN_STMT
  src2_16 = src2_4 + 1;
  # DEBUG src2 => src2_16
  # DEBUG BEGIN_STMT
  dst2_17 = dst2_6 + 1;
  # DEBUG dst2 => dst2_17
  # DEBUG BEGIN_STMT
  len2_18 = len2_8 + 4294967295;
  # DEBUG len2 => len2_18

  <bb 7> [local count: 236223201]:
  # src2_4 = PHI <src2_16(6), src2_3(9)>
  # dst2_6 = PHI <dst2_17(6), dst2_5(9)>
  # len2_8 = PHI <len2_18(6), len2_7(9)>
  # DEBUG len2 => len2_8
  # DEBUG dst2 => dst2_6
  # DEBUG src2 => src2_4
  # DEBUG BEGIN_STMT
  if (len2_8 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemSet16_NoCheck (TS_MemSet16_NoCheck, funcdef_no=14, decl_uid=5424, cgraph_uid=15, symbol_order=14)

Modification phase of node TS_MemSet16_NoCheck/14
TS_MemSet16_NoCheck (void * const dst, const uint8 val, const usize len)
{
  const uint16 val2;
  usize len2;
  uint8 * dst2;
  short unsigned int _1;
  short unsigned int _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_9(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_10(D)
  # DEBUG BEGIN_STMT
  _1 = (short unsigned int) val_11(D);
  _2 = _1 << 8;
  val2_12 = _1 | _2;
  # DEBUG val2 => val2_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  MEM[(uint16 *)dst2_3] = val2_12;
  # DEBUG BEGIN_STMT
  dst2_18 = dst2_3 + 2;
  # DEBUG dst2 => dst2_18
  # DEBUG BEGIN_STMT
  len2_19 = len2_5 + 4294967294;
  # DEBUG len2 => len2_19

  <bb 4> [local count: 1073741824]:
  # dst2_3 = PHI <dst_9(D)(2), dst2_18(3)>
  # len2_5 = PHI <len_10(D)(2), len2_19(3)>
  # DEBUG len2 => len2_5
  # DEBUG dst2 => dst2_3
  # DEBUG BEGIN_STMT
  if (len2_5 > 1)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  *dst2_4 = val_11(D);
  # DEBUG BEGIN_STMT
  dst2_15 = dst2_4 + 1;
  # DEBUG dst2 => dst2_15
  # DEBUG BEGIN_STMT
  len2_16 = len2_6 + 4294967295;
  # DEBUG len2 => len2_16

  <bb 7> [local count: 236223201]:
  # dst2_4 = PHI <dst2_15(6), dst2_3(9)>
  # len2_6 = PHI <len2_16(6), len2_5(9)>
  # DEBUG len2 => len2_6
  # DEBUG dst2 => dst2_4
  # DEBUG BEGIN_STMT
  if (len2_6 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemBZero16_NoCheck (TS_MemBZero16_NoCheck, funcdef_no=15, decl_uid=5427, cgraph_uid=16, symbol_order=15)

Modification phase of node TS_MemBZero16_NoCheck/15
TS_MemBZero16_NoCheck (void * const dst, const usize len)
{
  usize len2;
  uint8 * dst2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG dst2 => dst_7(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_8(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  MEM[(uint16 *)dst2_1] = 0;
  # DEBUG BEGIN_STMT
  dst2_14 = dst2_1 + 2;
  # DEBUG dst2 => dst2_14
  # DEBUG BEGIN_STMT
  len2_15 = len2_3 + 4294967294;
  # DEBUG len2 => len2_15

  <bb 4> [local count: 1073741824]:
  # dst2_1 = PHI <dst_7(D)(2), dst2_14(3)>
  # len2_3 = PHI <len_8(D)(2), len2_15(3)>
  # DEBUG len2 => len2_3
  # DEBUG dst2 => dst2_1
  # DEBUG BEGIN_STMT
  if (len2_3 > 1)
    goto <bb 3>; [89.00%]
  else
    goto <bb 9>; [11.00%]

  <bb 9> [local count: 118111601]:
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  *dst2_2 = 0;
  # DEBUG BEGIN_STMT
  dst2_11 = dst2_2 + 1;
  # DEBUG dst2 => dst2_11
  # DEBUG BEGIN_STMT
  len2_12 = len2_4 + 4294967295;
  # DEBUG len2 => len2_12

  <bb 7> [local count: 236223201]:
  # dst2_2 = PHI <dst2_11(6), dst2_1(9)>
  # len2_4 = PHI <len2_12(6), len2_3(9)>
  # DEBUG len2 => len2_4
  # DEBUG dst2 => dst2_2
  # DEBUG BEGIN_STMT
  if (len2_4 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_MemCmp16_NoCheck (TS_MemCmp16_NoCheck, funcdef_no=16, decl_uid=5431, cgraph_uid=17, symbol_order=16)

Modification phase of node TS_MemCmp16_NoCheck/16
TS_MemCmp16_NoCheck (const void * const a, const void * const b, const usize len)
{
  Std_ReturnType RetVal;
  usize len2;
  const uint8 * b2;
  const uint8 * a2;
  short unsigned int _1;
  short unsigned int _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG a2 => a_13(D)
  # DEBUG BEGIN_STMT
  # DEBUG b2 => b_15(D)
  # DEBUG BEGIN_STMT
  # DEBUG len2 => len_17(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint16 *)a2_5];
  _2 = MEM[(const uint16 *)b2_7];
  if (_1 != _2)
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  a2_19 = a2_5 + 2;
  # DEBUG a2 => a2_19
  # DEBUG BEGIN_STMT
  b2_20 = b2_7 + 2;
  # DEBUG b2 => b2_20
  # DEBUG BEGIN_STMT
  len2_21 = len2_9 + 4294967294;
  # DEBUG len2 => len2_21

  <bb 5> [local count: 1073741824]:
  # a2_5 = PHI <a_13(D)(2), a2_19(4)>
  # b2_7 = PHI <b_15(D)(2), b2_20(4)>
  # len2_9 = PHI <len_17(D)(2), len2_21(4)>
  # DEBUG len2 => len2_9
  # DEBUG b2 => b2_7
  # DEBUG a2 => a2_5
  # DEBUG BEGIN_STMT
  if (len2_9 > 1)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # RetVal_11 = PHI <1(3), 0(5)>
  # a2_25 = PHI <a2_5(3), a2_5(5)>
  # b2_14 = PHI <b2_7(3), b2_7(5)>
  # len2_16 = PHI <len2_9(3), len2_9(5)>
  # DEBUG RetVal => RetVal_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RetVal_11 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 11> [local count: 57431766]:
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 507343010]:
  # DEBUG BEGIN_STMT
  _3 = *a2_6;
  _4 = *b2_8;
  if (_3 != _4)
    goto <bb 10>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 479439144]:
  # DEBUG BEGIN_STMT
  a2_22 = a2_6 + 1;
  # DEBUG a2 => a2_22
  # DEBUG BEGIN_STMT
  b2_23 = b2_8 + 1;
  # DEBUG b2 => b2_23
  # DEBUG BEGIN_STMT
  len2_24 = len2_10 + 4294967295;
  # DEBUG len2 => len2_24

  <bb 9> [local count: 536870910]:
  # a2_6 = PHI <a2_22(8), a2_25(11)>
  # b2_8 = PHI <b2_23(8), b2_14(11)>
  # len2_10 = PHI <len2_24(8), len2_16(11)>
  # DEBUG RetVal => NULL
  # DEBUG len2 => len2_10
  # DEBUG b2 => b2_8
  # DEBUG a2 => a2_6
  # DEBUG BEGIN_STMT
  if (len2_10 != 0)
    goto <bb 7>; [94.50%]
  else
    goto <bb 10>; [5.50%]

  <bb 10> [local count: 114863531]:
  # RetVal_12 = PHI <RetVal_11(6), 1(7), 0(9)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_12;

}


