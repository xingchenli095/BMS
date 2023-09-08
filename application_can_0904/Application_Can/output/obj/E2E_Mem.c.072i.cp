
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  E2E_MemCpy32/0:

 Propagating constants:

Not considering E2E_MemCpy32 for cloning; -fipa-cp-clone disabled.

overall_size: 38, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2E_MemCpy32/0:
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

E2E_MemCpy32/0 (E2E_MemCpy32) @06ab39a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function E2E_MemCpy32 (E2E_MemCpy32, funcdef_no=0, decl_uid=5371, cgraph_uid=1, symbol_order=0)

Modification phase of node E2E_MemCpy32/0
E2E_MemCpy32 (void * dst, const void * src, uint32_least len)
{
  uint32_least len2;
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


