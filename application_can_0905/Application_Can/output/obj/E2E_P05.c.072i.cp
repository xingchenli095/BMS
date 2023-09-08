
IPA constant propagation start:
Determining dynamic type for call: ComputedCRC_25 = E2E_EB_CalculateCrc (DataPtr_15(D), Offset_19(D), Length_22(D), DataID_23(D));
  Starting walk at: ComputedCRC_25 = E2E_EB_CalculateCrc (DataPtr_15(D), Offset_19(D), Length_22(D), DataID_23(D));
  instance pointer: DataPtr_15(D)  Outer instance pointer: DataPtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: ComputedCRC_22 = E2E_EB_CalculateCrc (DataPtr_17(D), Offset_16(D), Length_19(D), DataID_20(D));
  Starting walk at: ComputedCRC_22 = E2E_EB_CalculateCrc (DataPtr_17(D), Offset_16(D), Length_19(D), DataID_20(D));
  instance pointer: DataPtr_17(D)  Outer instance pointer: DataPtr_17(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = E2E_EB_P05ConfigParamChecks (ConfigPtr_15(D));
  Starting walk at: _2 = E2E_EB_P05ConfigParamChecks (ConfigPtr_15(D));
  instance pointer: ConfigPtr_15(D)  Outer instance pointer: ConfigPtr_15(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: E2EP05_EB_Status_20 = E2E_EB_P05Check (_5, DataPtr_17(D), _7, _8, _10, _11);
  Starting walk at: E2EP05_EB_Status_20 = E2E_EB_P05Check (_5, DataPtr_17(D), _7, _8, _10, _11);
  instance pointer: _5  Outer instance pointer: StatePtr_16(D) offset: 32 (bits) vtbl reference: 
Determining dynamic type for call: E2EP05_EB_Status_20 = E2E_EB_P05Check (_5, DataPtr_17(D), _7, _8, _10, _11);
  Starting walk at: E2EP05_EB_Status_20 = E2E_EB_P05Check (_5, DataPtr_17(D), _7, _8, _10, _11);
  instance pointer: DataPtr_17(D)  Outer instance pointer: DataPtr_17(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 = E2E_EB_P05ConfigParamChecks (ConfigPtr_12(D));
  Starting walk at: _2 = E2E_EB_P05ConfigParamChecks (ConfigPtr_12(D));
  instance pointer: ConfigPtr_12(D)  Outer instance pointer: ConfigPtr_12(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_17 = E2E_EB_P05Protect (_5, DataPtr_14(D), _7, _8, _4);
  Starting walk at: RetVal_17 = E2E_EB_P05Protect (_5, DataPtr_14(D), _7, _8, _4);
  instance pointer: _5  Outer instance pointer: StatePtr_13(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_17 = E2E_EB_P05Protect (_5, DataPtr_14(D), _7, _8, _4);
  Starting walk at: RetVal_17 = E2E_EB_P05Protect (_5, DataPtr_14(D), _7, _8, _4);
  instance pointer: DataPtr_14(D)  Outer instance pointer: DataPtr_14(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SCrc_CalculateCRC16/11:
  Jump functions of caller  E2E_EB_P05Check/10:
    callsite  E2E_EB_P05Check/10 -> E2E_EB_CalculateCrc/8 : 
       param 0: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  E2E_EB_P05Protect/9:
    callsite  E2E_EB_P05Protect/9 -> E2E_EB_CalculateCrc/8 : 
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 4, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  E2E_EB_CalculateCrc/8:
  Jump functions of caller  E2E_EB_P05CheckNullPtrChecks/7:
  Jump functions of caller  E2E_EB_P05ConfigParamChecks/6:
  Jump functions of caller  E2E_EB_P05ProtectNullPtrChecks/5:
  Jump functions of caller  E2E_P05MapStatusToSM/4:
  Jump functions of caller  E2E_P05CheckInit/3:
  Jump functions of caller  E2E_P05ProtectInit/2:
  Jump functions of caller  E2E_P05Check/1:
    callsite  E2E_P05Check/1 -> E2E_EB_P05Check/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         VR  ~[0, 0]
       param 1: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x1fff
         VR  [0, 8191]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0x1fff
         VR  [0, 8191]
       param 5: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  E2E_P05Check/1 -> E2E_EB_P05ConfigParamChecks/6 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  E2E_P05Check/1 -> E2E_EB_P05CheckNullPtrChecks/7 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  E2E_P05Protect/0:
    callsite  E2E_P05Protect/0 -> E2E_EB_P05Protect/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x1fff
         VR  [0, 8191]
       param 3: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 4: UNKNOWN
         value: 0x0, mask: 0x1fff
         VR  [0, 8191]
    callsite  E2E_P05Protect/0 -> E2E_EB_P05ConfigParamChecks/6 : 
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  E2E_P05Protect/0 -> E2E_EB_P05ProtectNullPtrChecks/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering E2E_P05MapStatusToSM for cloning; -fipa-cp-clone disabled.
Not considering E2E_P05CheckInit for cloning; -fipa-cp-clone disabled.
Not considering E2E_P05ProtectInit for cloning; -fipa-cp-clone disabled.
Not considering E2E_P05Check for cloning; -fipa-cp-clone disabled.
Not considering E2E_P05Protect for cloning; -fipa-cp-clone disabled.

overall_size: 253, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2E_EB_P05Check/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1fff
         uint16 [0, 8191]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1fff
         uint16 [0, 8191]
        AGGS VARIABLE
    param [5]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: E2E_EB_P05Protect/9:
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
         Bits: value = 0x0, mask = 0x1fff
         uint16 [0, 8191]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [4]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1fff
         uint16 [0, 8191]
        AGGS VARIABLE
  Node: E2E_EB_CalculateCrc/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1fff
         uint16 [0, 8191]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0x1fff
         uint16 [0, 8191]
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: E2E_EB_P05CheckNullPtrChecks/7:
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
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: E2E_EB_P05ConfigParamChecks/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: E2E_EB_P05ProtectNullPtrChecks/5:
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
  Node: E2E_P05MapStatusToSM/4:
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
  Node: E2E_P05CheckInit/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: E2E_P05ProtectInit/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: E2E_P05Check/1:
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
  Node: E2E_P05Protect/0:
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

Propagated bits info for function E2E_EB_P05Check/10:
 param 2: value = 0x0, mask = 0x1fff
 param 4: value = 0x0, mask = 0x1fff
Propagated bits info for function E2E_EB_P05Protect/9:
 param 2: value = 0x0, mask = 0x1fff
 param 4: value = 0x0, mask = 0x1fff
Propagated bits info for function E2E_EB_CalculateCrc/8:
 param 1: value = 0x0, mask = 0x1fff
 param 2: value = 0x0, mask = 0x1fff

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SCrc_CalculateCRC16/11 (SCrc_CalculateCRC16) @06acb1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2E_EB_CalculateCrc/8 (1073741824 (estimated locally),1.00 per call) E2E_EB_CalculateCrc/8 (1073741824 (estimated locally),1.00 per call) E2E_EB_CalculateCrc/8 (536870913 (estimated locally),0.50 per call) E2E_EB_CalculateCrc/8 (536870913 (estimated locally),0.50 per call) E2E_EB_CalculateCrc/8 (536870913 (estimated locally),0.50 per call) 
  Calls: 
E2E_EB_P05Check/10 (E2E_EB_P05Check) @06a81c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: E2E_P05Check/1 (225212601 (estimated locally),0.21 per call) 
  Calls: E2E_EB_CalculateCrc/8 (574129754 (estimated locally),0.53 per call) 
E2E_EB_P05Protect/9 (E2E_EB_P05Protect) @06a81a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: E2E_P05Protect/0 (145305991 (estimated locally),0.14 per call) 
  Calls: E2E_EB_CalculateCrc/8 (1073741824 (estimated locally),1.00 per call) 
E2E_EB_CalculateCrc/8 (E2E_EB_CalculateCrc) @06a818c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: E2E_EB_P05Check/10 (574129754 (estimated locally),0.53 per call) E2E_EB_P05Protect/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: SCrc_CalculateCRC16/11 (1073741824 (estimated locally),1.00 per call) SCrc_CalculateCRC16/11 (1073741824 (estimated locally),1.00 per call) SCrc_CalculateCRC16/11 (536870913 (estimated locally),0.50 per call) SCrc_CalculateCRC16/11 (536870913 (estimated locally),0.50 per call) SCrc_CalculateCRC16/11 (536870913 (estimated locally),0.50 per call) 
E2E_EB_P05CheckNullPtrChecks/7 (E2E_EB_P05CheckNullPtrChecks) @06a81700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: E2E_P05Check/1 (1073696785 (estimated locally),1.00 per call) 
  Calls: 
E2E_EB_P05ConfigParamChecks/6 (E2E_EB_P05ConfigParamChecks) @06a81540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: E2E_P05Check/1 (697902910 (estimated locally),0.65 per call) E2E_P05Protect/0 (697932186 (estimated locally),0.65 per call) 
  Calls: 
E2E_EB_P05ProtectNullPtrChecks/5 (E2E_EB_P05ProtectNullPtrChecks) @06a81380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: E2E_P05Protect/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_P05MapStatusToSM/4 (E2E_P05MapStatusToSM) @06a811c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073602257 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2E_P05CheckInit/3 (E2E_P05CheckInit) @06a81000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2E_P05ProtectInit/2 (E2E_P05ProtectInit) @06a6fe00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2E_P05Check/1 (E2E_P05Check) @06a6fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073696785 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_EB_P05Check/10 (225212601 (estimated locally),0.21 per call) E2E_EB_P05ConfigParamChecks/6 (697902910 (estimated locally),0.65 per call) E2E_EB_P05CheckNullPtrChecks/7 (1073696785 (estimated locally),1.00 per call) 
E2E_P05Protect/0 (E2E_P05Protect) @06a6fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_EB_P05Protect/9 (145305991 (estimated locally),0.14 per call) E2E_EB_P05ConfigParamChecks/6 (697932186 (estimated locally),0.65 per call) E2E_EB_P05ProtectNullPtrChecks/5 (1073741824 (estimated locally),1.00 per call) 

;; Function E2E_EB_P05ConfigParamChecks (E2E_EB_P05ConfigParamChecks, funcdef_no=6, decl_uid=5419, cgraph_uid=7, symbol_order=6)

Modification phase of node E2E_EB_P05ConfigParamChecks/6
E2E_EB_P05ConfigParamChecks (const struct E2E_P05ConfigType * ConfigPtr)
{
  Std_ReturnType RetVal;
  short unsigned int _1;
  short unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ConfigPtr_8(D)->Offset;
  _2 = _1 & 7;
  if (_2 != 0)
    goto <bb 7>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _3 = ConfigPtr_8(D)->DataLength;
  _4 = _3 & 7;
  if (_4 != 0)
    goto <bb 7>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  if (_3 <= 23)
    goto <bb 7>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 294876349]:
  # DEBUG BEGIN_STMT
  _5 = _3 + 65512;
  if (_1 > _5)
    goto <bb 7>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 191669627]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 7> [local count: 1073741824]:
  # RetVal_6 = PHI <23(2), 23(3), 23(4), 23(5), 0(6)>
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function E2E_EB_CalculateCrc (E2E_EB_CalculateCrc, funcdef_no=8, decl_uid=5429, cgraph_uid=9, symbol_order=8)

Modification phase of node E2E_EB_CalculateCrc/8
Adjusting mask for param 1 to 0x1fff
Adjusting mask for param 2 to 0x1fff
Setting value range of param 1 [0, 8191]
Setting value range of param 2 [0, 8191]
E2E_EB_CalculateCrc (const uint8 * DataPtr, uint16 CrcByteOffset, uint16 Length, uint16 DataID)
{
  uint16 Crc;
  const uint8 DataIDLow;
  const uint8 DataIDHigh;
  short unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  sizetype _5;
  const uint8 * _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  const uint8 * _10;
  long unsigned int _11;
  long unsigned int _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = DataID_15(D) >> 8;
  _2 = (unsigned char) _1;
  DataIDHigh = _2;
  # DEBUG BEGIN_STMT
  _3 = (unsigned char) DataID_15(D);
  DataIDLow = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (CrcByteOffset_19(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = (long unsigned int) CrcByteOffset_19(D);
  Crc_25 = SCrc_CalculateCRC16 (DataPtr_20(D), _4, 65535, 1);
  # DEBUG Crc => Crc_25
  # DEBUG BEGIN_STMT
  _5 = _4 + 2;
  _6 = DataPtr_20(D) + _5;
  _7 = (long unsigned int) Length_21(D);
  _8 = _7 - _4;
  _9 = _8 + 4294967294;
  Crc_27 = SCrc_CalculateCRC16 (_6, _9, Crc_25, 0);
  # DEBUG Crc => Crc_27
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _10 = DataPtr_20(D) + 2;
  _11 = (long unsigned int) Length_21(D);
  _12 = _11 + 4294967294;
  Crc_23 = SCrc_CalculateCRC16 (_10, _12, 65535, 1);
  # DEBUG Crc => Crc_23

  <bb 5> [local count: 1073741824]:
  # Crc_13 = PHI <Crc_27(3), Crc_23(4)>
  # DEBUG Crc => Crc_13
  # DEBUG BEGIN_STMT
  Crc_29 = SCrc_CalculateCRC16 (&DataIDLow, 1, Crc_13, 0);
  # DEBUG Crc => Crc_29
  # DEBUG BEGIN_STMT
  Crc_31 = SCrc_CalculateCRC16 (&DataIDHigh, 1, Crc_29, 0);
  # DEBUG Crc => Crc_31
  # DEBUG BEGIN_STMT
  DataIDHigh ={v} {CLOBBER};
  DataIDLow ={v} {CLOBBER};
  return Crc_31;

}



;; Function E2E_P05Protect (E2E_P05Protect, funcdef_no=0, decl_uid=5396, cgraph_uid=1, symbol_order=0)

Modification phase of node E2E_P05Protect/0
E2E_P05Protect (const struct E2E_P05ConfigType * ConfigPtr, struct E2E_P05ProtectStateType * StatePtr, uint8 * DataPtr, uint16 Length)
{
  Std_ReturnType RetVal;
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _4;
  uint8 * _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = E2E_EB_P05ProtectNullPtrChecks (ConfigPtr_12(D), StatePtr_13(D), DataPtr_14(D));
  if (_1 != 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _2 = E2E_EB_P05ConfigParamChecks (ConfigPtr_12(D));
  if (_2 != 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  _3 = ConfigPtr_12(D)->DataLength;
  _4 = _3 >> 3;
  if (_4 != Length_15(D))
    goto <bb 6>; [67.97%]
  else
    goto <bb 5>; [32.03%]

  <bb 5> [local count: 145305991]:
  # DEBUG BEGIN_STMT
  _5 = &StatePtr_13(D)->Counter;
  _6 = ConfigPtr_12(D)->Offset;
  _7 = _6 >> 3;
  _8 = ConfigPtr_12(D)->DataID;
  RetVal_17 = E2E_EB_P05Protect (_5, DataPtr_14(D), _7, _8, _4);
  # DEBUG RetVal => RetVal_17

  <bb 6> [local count: 1073741824]:
  # RetVal_9 = PHI <19(2), 23(3), 23(4), RetVal_17(5)>
  # DEBUG RetVal => RetVal_9
  # DEBUG BEGIN_STMT
  return RetVal_9;

}



;; Function E2E_P05Check (E2E_P05Check, funcdef_no=1, decl_uid=5401, cgraph_uid=2, symbol_order=1)

Modification phase of node E2E_P05Check/1
E2E_P05Check (const struct E2E_P05ConfigType * ConfigPtr, struct E2E_P05CheckStateType * StatePtr, const uint8 * DataPtr, uint16 Length)
{
  const E2E_P05CheckStatusType E2EP05_EB_Status;
  Std_ReturnType RetVal;
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  short unsigned int _4;
  uint8 * _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;
  short unsigned int _9;
  short unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073696785]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = E2E_EB_P05CheckNullPtrChecks (ConfigPtr_15(D), StatePtr_16(D), DataPtr_17(D), Length_18(D));
  if (_1 != 0)
    goto <bb 16>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697902910]:
  # DEBUG BEGIN_STMT
  _2 = E2E_EB_P05ConfigParamChecks (ConfigPtr_15(D));
  if (_2 != 0)
    goto <bb 16>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 453636891]:
  # DEBUG BEGIN_STMT
  if (DataPtr_17(D) != 0B)
    goto <bb 5>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 5> [local count: 317545824]:
  if (Length_18(D) == 0)
    goto <bb 16>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 342495853]:
  # DEBUG BEGIN_STMT
  if (Length_18(D) != 0)
    goto <bb 7>; [67.00%]
  else
    goto <bb 8>; [33.00%]

  <bb 7> [local count: 229472222]:
  _3 = ConfigPtr_15(D)->DataLength;
  _4 = _3 >> 3;
  if (_4 != Length_18(D))
    goto <bb 16>; [51.11%]
  else
    goto <bb 8>; [48.89%]

  <bb 8> [local count: 225212601]:
  # DEBUG BEGIN_STMT
  _5 = &StatePtr_16(D)->Counter;
  _6 = ConfigPtr_15(D)->Offset;
  _7 = _6 >> 3;
  _8 = ConfigPtr_15(D)->DataID;
  _9 = ConfigPtr_15(D)->DataLength;
  _10 = _9 >> 3;
  _11 = ConfigPtr_15(D)->MaxDeltaCounter;
  E2EP05_EB_Status_20 = E2E_EB_P05Check (_5, DataPtr_17(D), _7, _8, _10, _11);
  # DEBUG E2EP05_EB_Status => E2EP05_EB_Status_20
  # DEBUG BEGIN_STMT
  switch (E2EP05_EB_Status_20) <default: <L15> [16.67%], case 0: <L10> [16.67%], case 1: <L11> [16.67%], case 8: <L13> [16.67%], case 32: <L14> [16.67%], case 64: <L12> [16.67%]>

  <bb 9> [local count: 37542941]:
<L10>:
  # DEBUG BEGIN_STMT
  StatePtr_16(D)->Status = 0;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 10> [local count: 37542941]:
<L11>:
  # DEBUG BEGIN_STMT
  StatePtr_16(D)->Status = 1;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 11> [local count: 37542941]:
<L12>:
  # DEBUG BEGIN_STMT
  StatePtr_16(D)->Status = 64;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 12> [local count: 37542941]:
<L13>:
  # DEBUG BEGIN_STMT
  StatePtr_16(D)->Status = 8;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 13> [local count: 37542941]:
<L14>:
  # DEBUG BEGIN_STMT
  StatePtr_16(D)->Status = 32;
  # DEBUG BEGIN_STMT
  goto <bb 16>; [100.00%]

  <bb 14> [local count: 37542941]:
<L15>:
  # DEBUG BEGIN_STMT
  StatePtr_16(D)->Status = 7;
  # DEBUG BEGIN_STMT

  <bb 16> [local count: 1073741824]:
  # RetVal_12 = PHI <19(2), 23(3), 23(5), 23(7), 0(10), 0(9), 0(14), 0(13), 0(12), 0(11)>
  # DEBUG RetVal => RetVal_12
  # DEBUG BEGIN_STMT
  return RetVal_12;

}



;; Function E2E_P05ProtectInit (E2E_P05ProtectInit, funcdef_no=2, decl_uid=5403, cgraph_uid=3, symbol_order=2)

Modification phase of node E2E_P05ProtectInit/2
E2E_P05ProtectInit (struct E2E_P05ProtectStateType * StatePtr)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (StatePtr_3(D) != 0B)
    goto <bb 3>; [81.25%]
  else
    goto <bb 4>; [18.75%]

  <bb 3> [local count: 872415233]:
  # DEBUG BEGIN_STMT
  StatePtr_3(D)->Counter = 0;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_1 = PHI <0(3), 19(2)>
  # DEBUG RetVal => RetVal_1
  # DEBUG BEGIN_STMT
  return RetVal_1;

}



;; Function E2E_P05CheckInit (E2E_P05CheckInit, funcdef_no=3, decl_uid=5405, cgraph_uid=4, symbol_order=3)

Modification phase of node E2E_P05CheckInit/3
E2E_P05CheckInit (struct E2E_P05CheckStateType * StatePtr)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (StatePtr_3(D) != 0B)
    goto <bb 3>; [81.25%]
  else
    goto <bb 4>; [18.75%]

  <bb 3> [local count: 872415233]:
  # DEBUG BEGIN_STMT
  StatePtr_3(D)->Counter = 255;
  # DEBUG BEGIN_STMT
  StatePtr_3(D)->Status = 7;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_1 = PHI <0(3), 19(2)>
  # DEBUG RetVal => RetVal_1
  # DEBUG BEGIN_STMT
  return RetVal_1;

}



;; Function E2E_P05MapStatusToSM (E2E_P05MapStatusToSM, funcdef_no=4, decl_uid=5408, cgraph_uid=5, symbol_order=4)

Modification phase of node E2E_P05MapStatusToSM/4
E2E_P05MapStatusToSM (Std_ReturnType CheckReturn, E2E_P05CheckStatusType Status)
{
  E2E_PCheckStatusType RetVal;

  <bb 2> [local count: 1073602257]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (CheckReturn_2(D) == 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 9>; [35.00%]

  <bb 3> [local count: 697841467]:
  # DEBUG BEGIN_STMT
  switch (Status_3(D)) <default: <L7> [16.67%], case 0: <L12> [16.67%], case 1: <L5> [16.67%], case 7: <L3> [16.67%], case 8: <L4> [16.67%], case 32: <L12> [16.67%], case 64: <L6> [16.67%]>

  <bb 4> [local count: 116330172]:
<L3>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 5> [local count: 116330172]:
<L4>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 116330172]:
<L5>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 5
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 7> [local count: 116330172]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 2
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 116330172]:
<L7>:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 3
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073741824]:
  # RetVal_1 = PHI <3(4), 3(2), 0(3), 3(8), 2(7), 5(6), 1(5)>
<L12>:
  # DEBUG RetVal => RetVal_1
  # DEBUG BEGIN_STMT
  return RetVal_1;

}


