
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Det_ASR40_ReportError/5:
  Jump functions of caller  Crc_CalculateCRC32/4:
  Jump functions of caller  Crc_CalculateCRC16/3:
  Jump functions of caller  Crc_GetVersionInfo/2:

 Propagating constants:

Not considering Crc_CalculateCRC32 for cloning; -fipa-cp-clone disabled.
Not considering Crc_CalculateCRC16 for cloning; -fipa-cp-clone disabled.
Not considering Crc_GetVersionInfo for cloning; -fipa-cp-clone disabled.

overall_size: 60, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Crc_CalculateCRC32/4:
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
  Node: Crc_CalculateCRC16/3:
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
  Node: Crc_GetVersionInfo/2:
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

Det_ASR40_ReportError/5 (Det_ASR40_ReportError) @06b34620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crc_GetVersionInfo/2 (187153200 (estimated locally),0.17 per call) 
  Calls: 
Crc_CalculateCRC32/4 (Crc_CalculateCRC32) @06b34460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crc_Table32/1 (read)Crc_Table32/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crc_CalculateCRC16/3 (Crc_CalculateCRC16) @06b342a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crc_Table16/0 (read)Crc_Table16/0 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Crc_GetVersionInfo/2 (Crc_GetVersionInfo) @06b340e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/5 (187153200 (estimated locally),0.17 per call) 
Crc_Table32/1 (Crc_Table32) @068a3750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crc_CalculateCRC32/4 (read)Crc_CalculateCRC32/4 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crc_Table16/0 (Crc_Table16) @068a36c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Crc_CalculateCRC16/3 (read)Crc_CalculateCRC16/3 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crc_GetVersionInfo (Crc_GetVersionInfo, funcdef_no=0, decl_uid=5369, cgraph_uid=1, symbol_order=2)

Modification phase of node Crc_GetVersionInfo/2
Crc_GetVersionInfo (struct Std_VersionInfoType * VersionInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (VersionInfoPtr_2(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (201, 0, 4, 1);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->vendorID = 1;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->moduleID = 201;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_major_version = 6;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_minor_version = 11;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_patch_version = 16;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Crc_CalculateCRC16 (Crc_CalculateCRC16, funcdef_no=1, decl_uid=5374, cgraph_uid=2, symbol_order=3)

Modification phase of node Crc_CalculateCRC16/3
Crc_CalculateCRC16 (const uint8 * Crc_DataPtr, uint32 Crc_Length, uint16 Crc_StartValue16, boolean Crc_IsFirstCall)
{
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  unsigned char _10;
  unsigned int _12;
  short unsigned int _13;
  short unsigned int _14;
  unsigned char _22;
  unsigned char _23;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Crc_IsFirstCall_18(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 40157944]:
  # DEBUG BEGIN_STMT
  # DEBUG Crc_StartValue16 => 65535

  <bb 4> [local count: 118111600]:
  # Crc_DataPtr_31 = PHI <Crc_DataPtr_19(D)(2), Crc_DataPtr_19(D)(3)>
  # Crc_Length_30 = PHI <Crc_Length_20(D)(2), Crc_Length_20(D)(3)>
  # Crc_StartValue16_11 = PHI <Crc_StartValue16_21(D)(2), 65535(3)>
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = Crc_StartValue16_17 >> 12;
  _2 = (unsigned char) _1;
  _3 = *Crc_DataPtr_15;
  _4 = _3 >> 4;
  _5 = _2 ^ _4;
  _6 = (int) _5;
  _7 = Crc_Table16[_6];
  _8 = Crc_StartValue16_17 << 4;
  Crc_StartValue16_25 = _7 ^ _8;
  # DEBUG Crc_StartValue16 => Crc_StartValue16_25
  # DEBUG BEGIN_STMT
  _9 = Crc_StartValue16_25 >> 12;
  _10 = (unsigned char) _9;
  _22 = _3 & 15;
  _23 = _10 ^ _22;
  _12 = (unsigned int) _23;
  _13 = Crc_Table16[_12];
  _14 = Crc_StartValue16_25 << 4;
  Crc_StartValue16_26 = _13 ^ _14;
  # DEBUG Crc_StartValue16 => Crc_StartValue16_26
  # DEBUG BEGIN_STMT
  Crc_DataPtr_27 = Crc_DataPtr_15 + 1;
  # DEBUG Crc_DataPtr => Crc_DataPtr_27
  # DEBUG BEGIN_STMT
  Crc_Length_28 = Crc_Length_16 + 4294967295;
  # DEBUG Crc_Length => Crc_Length_28

  <bb 6> [local count: 1073741824]:
  # Crc_DataPtr_15 = PHI <Crc_DataPtr_31(4), Crc_DataPtr_27(5)>
  # Crc_Length_16 = PHI <Crc_Length_30(4), Crc_Length_28(5)>
  # Crc_StartValue16_17 = PHI <Crc_StartValue16_11(4), Crc_StartValue16_26(5)>
  # DEBUG Crc_StartValue16 => Crc_StartValue16_17
  # DEBUG Crc_Length => Crc_Length_16
  # DEBUG Crc_DataPtr => Crc_DataPtr_15
  # DEBUG BEGIN_STMT
  if (Crc_Length_16 != 0)
    goto <bb 5>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # Crc_StartValue16_29 = PHI <Crc_StartValue16_17(6)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Crc_StartValue16_29;

}



;; Function Crc_CalculateCRC32 (Crc_CalculateCRC32, funcdef_no=2, decl_uid=5379, cgraph_uid=3, symbol_order=4)

Modification phase of node Crc_CalculateCRC32/4
Crc_CalculateCRC32 (const uint8 * Crc_DataPtr, uint32 Crc_Length, uint32 Crc_StartValue32, boolean Crc_IsFirstCall)
{
  unsigned char _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (Crc_IsFirstCall_17(D) == 1)
    goto <bb 6>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 77953656]:
  # DEBUG BEGIN_STMT
  Crc_StartValue32_19 = ~Crc_StartValue32_18(D);
  # DEBUG Crc_StartValue32 => Crc_StartValue32_19

  <bb 6> [local count: 118111600]:
  # Crc_DataPtr_30 = PHI <Crc_DataPtr_20(D)(2), Crc_DataPtr_20(D)(3)>
  # Crc_Length_29 = PHI <Crc_Length_21(D)(2), Crc_Length_21(D)(3)>
  # Crc_StartValue32_7 = PHI <4294967295(2), Crc_StartValue32_19(3)>
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = *Crc_DataPtr_14;
  _2 = (long unsigned int) _1;
  _3 = _2 ^ Crc_StartValue32_16;
  _4 = _3 & 15;
  _5 = Crc_Table32[_4];
  _6 = Crc_StartValue32_16 >> 4;
  Crc_StartValue32_24 = _5 ^ _6;
  # DEBUG Crc_StartValue32 => Crc_StartValue32_24
  # DEBUG BEGIN_STMT
  _8 = _1 >> 4;
  _9 = (long unsigned int) _8;
  _10 = _9 ^ Crc_StartValue32_24;
  _11 = _10 & 15;
  _12 = Crc_Table32[_11];
  _13 = Crc_StartValue32_24 >> 4;
  Crc_StartValue32_25 = _12 ^ _13;
  # DEBUG Crc_StartValue32 => Crc_StartValue32_25
  # DEBUG BEGIN_STMT
  Crc_DataPtr_26 = Crc_DataPtr_14 + 1;
  # DEBUG Crc_DataPtr => Crc_DataPtr_26
  # DEBUG BEGIN_STMT
  Crc_Length_27 = Crc_Length_15 + 4294967295;
  # DEBUG Crc_Length => Crc_Length_27

  <bb 8> [local count: 1073741824]:
  # Crc_DataPtr_14 = PHI <Crc_DataPtr_30(6), Crc_DataPtr_26(4)>
  # Crc_Length_15 = PHI <Crc_Length_29(6), Crc_Length_27(4)>
  # Crc_StartValue32_16 = PHI <Crc_StartValue32_7(6), Crc_StartValue32_25(4)>
  # DEBUG Crc_StartValue32 => Crc_StartValue32_16
  # DEBUG Crc_Length => Crc_Length_15
  # DEBUG Crc_DataPtr => Crc_DataPtr_14
  # DEBUG BEGIN_STMT
  if (Crc_Length_15 != 0)
    goto <bb 4>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # Crc_StartValue32_28 = PHI <Crc_StartValue32_16(8)>
  # DEBUG BEGIN_STMT
  Crc_StartValue32_22 = ~Crc_StartValue32_28;
  # DEBUG Crc_StartValue32 => Crc_StartValue32_22
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Crc_StartValue32_22;

}


