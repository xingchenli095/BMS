
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SCrc_CalculateCRC32P4/7:
  Jump functions of caller  SCrc_CalculateCRC16/6:
  Jump functions of caller  SCrc_CalculateCRC8H2F/5:
  Jump functions of caller  SCrc_CalculateCRC8/4:

 Propagating constants:

Not considering SCrc_CalculateCRC32P4 for cloning; -fipa-cp-clone disabled.
Not considering SCrc_CalculateCRC16 for cloning; -fipa-cp-clone disabled.
Not considering SCrc_CalculateCRC8H2F for cloning; -fipa-cp-clone disabled.
Not considering SCrc_CalculateCRC8 for cloning; -fipa-cp-clone disabled.

overall_size: 59, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: SCrc_CalculateCRC32P4/7:
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
  Node: SCrc_CalculateCRC16/6:
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
  Node: SCrc_CalculateCRC8H2F/5:
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
  Node: SCrc_CalculateCRC8/4:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SCrc_CalculateCRC32P4/7 (SCrc_CalculateCRC32P4) @06ac18c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SCrc_Table32P4/3 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SCrc_CalculateCRC16/6 (SCrc_CalculateCRC16) @06ac1700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SCrc_Table16/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SCrc_CalculateCRC8H2F/5 (SCrc_CalculateCRC8H2F) @06ac1540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SCrc_Table8H2F/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SCrc_CalculateCRC8/4 (SCrc_CalculateCRC8) @06ac1380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: SCrc_Table8/0 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
SCrc_Table32P4/3 (SCrc_Table32P4) @0683f708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: SCrc_CalculateCRC32P4/7 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
SCrc_Table16/2 (SCrc_Table16) @0683f678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: SCrc_CalculateCRC16/6 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
SCrc_Table8H2F/1 (SCrc_Table8H2F) @0683f5e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: SCrc_CalculateCRC8H2F/5 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
SCrc_Table8/0 (SCrc_Table8) @0683f558
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: SCrc_CalculateCRC8/4 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function SCrc_CalculateCRC8 (SCrc_CalculateCRC8, funcdef_no=0, decl_uid=5372, cgraph_uid=1, symbol_order=4)

Modification phase of node SCrc_CalculateCRC8/4
SCrc_CalculateCRC8 (const uint8 * SCrc_DataPtr, uint32 SCrc_Length, uint8 SCrc_StartValue8, boolean SCrc_IsFirstCall)
{
  uint32 Idx;
  const uint8 * _1;
  unsigned char _2;
  unsigned char _3;
  int _4;
  uint8 _14;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SCrc_IsFirstCall_8(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  SCrc_StartValue8_11 = ~SCrc_StartValue8_10(D);
  # DEBUG SCrc_StartValue8 => SCrc_StartValue8_11

  <bb 6> [local count: 118111600]:
  # SCrc_StartValue8_5 = PHI <255(2), SCrc_StartValue8_11(3)>
  # Idx_12 = PHI <0(2), 0(3)>
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = SCrc_DataPtr_16(D) + Idx_7;
  _2 = *_1;
  _3 = _2 ^ SCrc_StartValue8_6;
  _4 = (int) _3;
  SCrc_StartValue8_17 = SCrc_Table8[_4];
  # DEBUG SCrc_StartValue8 => SCrc_StartValue8_17
  # DEBUG BEGIN_STMT
  Idx_18 = Idx_7 + 1;
  # DEBUG Idx => Idx_18

  <bb 8> [local count: 1073741824]:
  # SCrc_StartValue8_6 = PHI <SCrc_StartValue8_5(6), SCrc_StartValue8_17(5)>
  # Idx_7 = PHI <Idx_12(6), Idx_18(5)>
  # DEBUG Idx => Idx_7
  # DEBUG SCrc_StartValue8 => SCrc_StartValue8_6
  # DEBUG BEGIN_STMT
  if (Idx_7 < SCrc_Length_13(D))
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # SCrc_StartValue8_9 = PHI <SCrc_StartValue8_6(8)>
  # DEBUG BEGIN_STMT
  _14 = ~SCrc_StartValue8_9;
  return _14;

}



;; Function SCrc_CalculateCRC8H2F (SCrc_CalculateCRC8H2F, funcdef_no=1, decl_uid=5377, cgraph_uid=2, symbol_order=5)

Modification phase of node SCrc_CalculateCRC8H2F/5
SCrc_CalculateCRC8H2F (const uint8 * SCrc_DataPtr, uint32 SCrc_Length, uint8 SCrc_StartValue8H2F, boolean SCrc_IsFirstCall)
{
  uint32 Idx;
  const uint8 * _1;
  unsigned char _2;
  unsigned char _3;
  int _4;
  uint8 _14;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SCrc_IsFirstCall_8(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  SCrc_StartValue8H2F_11 = ~SCrc_StartValue8H2F_10(D);
  # DEBUG SCrc_StartValue8H2F => SCrc_StartValue8H2F_11

  <bb 6> [local count: 118111600]:
  # SCrc_StartValue8H2F_5 = PHI <255(2), SCrc_StartValue8H2F_11(3)>
  # Idx_12 = PHI <0(2), 0(3)>
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = SCrc_DataPtr_16(D) + Idx_7;
  _2 = *_1;
  _3 = _2 ^ SCrc_StartValue8H2F_6;
  _4 = (int) _3;
  SCrc_StartValue8H2F_17 = SCrc_Table8H2F[_4];
  # DEBUG SCrc_StartValue8H2F => SCrc_StartValue8H2F_17
  # DEBUG BEGIN_STMT
  Idx_18 = Idx_7 + 1;
  # DEBUG Idx => Idx_18

  <bb 8> [local count: 1073741824]:
  # SCrc_StartValue8H2F_6 = PHI <SCrc_StartValue8H2F_5(6), SCrc_StartValue8H2F_17(5)>
  # Idx_7 = PHI <Idx_12(6), Idx_18(5)>
  # DEBUG Idx => Idx_7
  # DEBUG SCrc_StartValue8H2F => SCrc_StartValue8H2F_6
  # DEBUG BEGIN_STMT
  if (Idx_7 < SCrc_Length_13(D))
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # SCrc_StartValue8H2F_9 = PHI <SCrc_StartValue8H2F_6(8)>
  # DEBUG BEGIN_STMT
  _14 = ~SCrc_StartValue8H2F_9;
  return _14;

}



;; Function SCrc_CalculateCRC16 (SCrc_CalculateCRC16, funcdef_no=2, decl_uid=5382, cgraph_uid=3, symbol_order=6)

Modification phase of node SCrc_CalculateCRC16/6
SCrc_CalculateCRC16 (const uint8 * SCrc_DataPtr, uint32 SCrc_Length, uint16 SCrc_StartValue16, boolean SCrc_IsFirstCall)
{
  uint32 Idx;
  short unsigned int _1;
  unsigned char _2;
  const uint8 * _3;
  unsigned char _4;
  unsigned char _5;
  int _6;
  short unsigned int _7;
  short unsigned int _8;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SCrc_IsFirstCall_12(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 40157944]:
  # DEBUG BEGIN_STMT
  # DEBUG SCrc_StartValue16 => 65535

  <bb 6> [local count: 118111600]:
  # SCrc_StartValue16_9 = PHI <65535(3), SCrc_StartValue16_13(D)(2)>
  # Idx_14 = PHI <0(3), 0(2)>
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = SCrc_StartValue16_10 >> 8;
  _2 = (unsigned char) _1;
  _3 = SCrc_DataPtr_18(D) + Idx_11;
  _4 = *_3;
  _5 = _2 ^ _4;
  _6 = (int) _5;
  _7 = SCrc_Table16[_6];
  _8 = SCrc_StartValue16_10 << 8;
  SCrc_StartValue16_19 = _7 ^ _8;
  # DEBUG SCrc_StartValue16 => SCrc_StartValue16_19
  # DEBUG BEGIN_STMT
  Idx_20 = Idx_11 + 1;
  # DEBUG Idx => Idx_20

  <bb 8> [local count: 1073741824]:
  # SCrc_StartValue16_10 = PHI <SCrc_StartValue16_9(6), SCrc_StartValue16_19(5)>
  # Idx_11 = PHI <Idx_14(6), Idx_20(5)>
  # DEBUG Idx => Idx_11
  # DEBUG SCrc_StartValue16 => SCrc_StartValue16_10
  # DEBUG BEGIN_STMT
  if (Idx_11 < SCrc_Length_15(D))
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # SCrc_StartValue16_16 = PHI <SCrc_StartValue16_10(8)>
  # DEBUG BEGIN_STMT
  return SCrc_StartValue16_16;

}



;; Function SCrc_CalculateCRC32P4 (SCrc_CalculateCRC32P4, funcdef_no=3, decl_uid=5387, cgraph_uid=4, symbol_order=7)

Modification phase of node SCrc_CalculateCRC32P4/7
SCrc_CalculateCRC32P4 (const uint8 * SCrc_DataPtr, uint32 SCrc_Length, uint32 SCrc_StartValue32P4, boolean SCrc_IsFirstCall)
{
  uint32 Idx;
  unsigned char _1;
  const uint8 * _2;
  unsigned char _3;
  unsigned char _4;
  int _5;
  long unsigned int _6;
  long unsigned int _7;
  uint32 _17;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (SCrc_IsFirstCall_11(D) == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  SCrc_StartValue32P4_14 = ~SCrc_StartValue32P4_13(D);
  # DEBUG SCrc_StartValue32P4 => SCrc_StartValue32P4_14

  <bb 6> [local count: 118111600]:
  # SCrc_StartValue32P4_8 = PHI <4294967295(2), SCrc_StartValue32P4_14(3)>
  # Idx_15 = PHI <0(2), 0(3)>
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) SCrc_StartValue32P4_9;
  _2 = SCrc_DataPtr_19(D) + Idx_10;
  _3 = *_2;
  _4 = _1 ^ _3;
  _5 = (int) _4;
  _6 = SCrc_Table32P4[_5];
  _7 = SCrc_StartValue32P4_9 >> 8;
  SCrc_StartValue32P4_20 = _6 ^ _7;
  # DEBUG SCrc_StartValue32P4 => SCrc_StartValue32P4_20
  # DEBUG BEGIN_STMT
  Idx_21 = Idx_10 + 1;
  # DEBUG Idx => Idx_21

  <bb 8> [local count: 1073741824]:
  # SCrc_StartValue32P4_9 = PHI <SCrc_StartValue32P4_8(6), SCrc_StartValue32P4_20(5)>
  # Idx_10 = PHI <Idx_15(6), Idx_21(5)>
  # DEBUG Idx => Idx_10
  # DEBUG SCrc_StartValue32P4 => SCrc_StartValue32P4_9
  # DEBUG BEGIN_STMT
  if (Idx_10 < SCrc_Length_16(D))
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # SCrc_StartValue32P4_12 = PHI <SCrc_StartValue32P4_9(8)>
  # DEBUG BEGIN_STMT
  _17 = ~SCrc_StartValue32P4_12;
  return _17;

}


