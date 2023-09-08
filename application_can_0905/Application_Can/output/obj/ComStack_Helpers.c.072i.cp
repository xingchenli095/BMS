
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComStack_FindNextOne/0:

 Propagating constants:

Not considering ComStack_FindNextOne for cloning; -fipa-cp-clone disabled.

overall_size: 39, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: ComStack_FindNextOne/0:
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


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ComStack_FindNextOne/0 (ComStack_FindNextOne) @06ad7c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function ComStack_FindNextOne (ComStack_FindNextOne, funcdef_no=0, decl_uid=5394, cgraph_uid=1, symbol_order=0)

Modification phase of node ComStack_FindNextOne/0
ComStack_FindNextOne (const void * const bitfield, const uint32 prev)
{
  uint32 x;
  uint32 z;
  uint8_least y;
  uint32 result;
  register BF_type bits;
  register uint32 ofs;
  uint32 bit;
  const uint32 start;
  long unsigned int _1;
  const BF_type * _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  const BF_type * _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  long unsigned int _18;
  long unsigned int _19;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BF_MASK => 31
  # DEBUG BEGIN_STMT
  start_24 = prev_23(D) + 1;
  # DEBUG start => start_24
  # DEBUG BEGIN_STMT
  bit_25 = start_24 & 31;
  # DEBUG bit => bit_25
  # DEBUG BEGIN_STMT
  ofs_26 = start_24 >> 5;
  # DEBUG ofs => ofs_26
  # DEBUG BEGIN_STMT
  # DEBUG bf => bitfield_27(D)
  # DEBUG BEGIN_STMT
  _1 = ofs_26 * 4;
  _2 = bitfield_27(D) + _1;
  _3 = *_2;
  _4 = 4294967295 << bit_25;
  bits_29 = _3 & _4;
  # DEBUG bits => bits_29
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  ofs_40 = ofs_20 + 1;
  # DEBUG ofs => ofs_40
  # DEBUG BEGIN_STMT
  _5 = ofs_40 * 4;
  _6 = bitfield_27(D) + _5;
  bits_41 = *_6;
  # DEBUG bits => bits_41

  <bb 4> [local count: 1073741824]:
  # ofs_20 = PHI <ofs_26(2), ofs_40(3)>
  # bits_21 = PHI <bits_29(2), bits_41(3)>
  # DEBUG bits => bits_21
  # DEBUG ofs => ofs_20
  # DEBUG BEGIN_STMT
  if (bits_21 == 0)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # ofs_30 = PHI <ofs_20(4)>
  # bits_22 = PHI <bits_21(4)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG z => bits_22
  # DEBUG BEGIN_STMT
  _7 = bits_22 + 4294967295;
  z_31 = _7 ^ bits_22;
  # DEBUG z => z_31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG rep32 => 16843009
  # DEBUG BEGIN_STMT
  # DEBUG m1 => 1431655765
  # DEBUG BEGIN_STMT
  # DEBUG m2 => 858993459
  # DEBUG BEGIN_STMT
  # DEBUG m4 => 252645135
  # DEBUG BEGIN_STMT
  # DEBUG x => z_31
  # DEBUG BEGIN_STMT
  _8 = z_31 & 1431655765;
  _9 = z_31 >> 1;
  _10 = _9 & 1431655765;
  x_32 = _8 + _10;
  # DEBUG x => x_32
  # DEBUG BEGIN_STMT
  _11 = x_32 & 858993459;
  _12 = x_32 >> 2;
  _13 = _12 & 858993459;
  x_33 = _11 + _13;
  # DEBUG x => x_33
  # DEBUG BEGIN_STMT
  _14 = x_33 & 252645135;
  _15 = x_33 >> 4;
  _16 = _15 & 252645135;
  x_34 = _14 + _16;
  # DEBUG x => x_34
  # DEBUG BEGIN_STMT
  _17 = x_34 << 16;
  x_35 = _17 + x_34;
  # DEBUG x => x_35
  # DEBUG BEGIN_STMT
  _18 = x_35 << 8;
  x_36 = _18 + x_35;
  # DEBUG x => x_36
  # DEBUG BEGIN_STMT
  y_37 = x_36 >> 24;
  # DEBUG y => y_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  result_38 = y_37 + 4294967295;
  # DEBUG result => result_38
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19 = ofs_30 * 32;
  result_39 = _19 | result_38;
  # DEBUG result => result_39
  # DEBUG BEGIN_STMT
  return result_39;

}


