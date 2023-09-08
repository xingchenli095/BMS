
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1:
  Jump functions of caller  ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0:

 Propagating constants:

Not considering ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A for cloning; -fipa-cp-clone disabled.
Not considering ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8 for cloning; -fipa-cp-clone disabled.

overall_size: 46, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1:
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
  Node: ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0:
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

ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1 (ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A) @06af81c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0 (ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8) @06af8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:400368366 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8 (ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8, funcdef_no=0, decl_uid=5653, cgraph_uid=1, symbol_order=0)

Modification phase of node ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0
ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8 (uint8 * buffer, uint16 * bufferLength, const struct E2EProt_Data * dataElement)
{
  uint16 i;
  uint8 retval;
  sizetype _1;
  uint8 * _2;
  unsigned char _3;
  short unsigned int _4;
  unsigned char _5;
  short unsigned int _6;
  short unsigned int _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 400368366]:
  # DEBUG BEGIN_STMT
  # DEBUG retval => 0
  # DEBUG BEGIN_STMT
  # DEBUG E2E_RangeCheckRetVal => 0
  # DEBUG BEGIN_STMT
  if (buffer_14(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 3>; [81.25%]

  <bb 3> [local count: 325299297]:
  if (bufferLength_15(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 4>; [81.25%]

  <bb 4> [local count: 264305679]:
  if (dataElement_16(D) == 0B)
    goto <bb 9>; [18.75%]
  else
    goto <bb 5>; [81.25%]

  <bb 5> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *bufferLength_15(D) = 4;
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 858993460]:
  # DEBUG BEGIN_STMT
  _1 = (sizetype) i_11;
  _2 = buffer_14(D) + _1;
  *_2 = 0;
  # DEBUG BEGIN_STMT
  i_24 = i_11 + 1;
  # DEBUG i => i_24

  <bb 7> [local count: 1073741824]:
  # i_11 = PHI <0(5), i_24(6)>
  # DEBUG i => i_11
  # DEBUG BEGIN_STMT
  if (i_11 != 4)
    goto <bb 6>; [80.00%]
  else
    goto <bb 8>; [20.00%]

  <bb 8> [local count: 214748365]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = dataElement_16(D)->SafetyE2E_Data;
  MEM[(uint8 *)buffer_14(D) + 3B] = _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = dataElement_16(D)->SafetyE2E_Data_CRC;
  _5 = (unsigned char) _4;
  *buffer_14(D) = _5;
  # DEBUG BEGIN_STMT
  _6 = dataElement_16(D)->SafetyE2E_Data_CRC;
  _7 = _6 >> 8;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)buffer_14(D) + 1B] = _8;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _9 = dataElement_16(D)->SafetyE2E_Data_SQC_Counter;
  MEM[(uint8 *)buffer_14(D) + 2B] = _9;

  <bb 9> [local count: 400368366]:
  # retval_10 = PHI <129(3), 0(8), 129(2), 129(4)>
  # DEBUG retval => retval_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retval_10;

}



;; Function ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A (ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A, funcdef_no=1, decl_uid=5657, cgraph_uid=2, symbol_order=1)

Modification phase of node ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1
ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A (const uint8 * buffer, uint16 bufferLength, struct E2EProt_Data * dataElement)
{
  uint8 retval;
  unsigned char _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  short unsigned int _5;
  short unsigned int _6;
  short unsigned int _7;
  unsigned char _8;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG retval => 0
  # DEBUG BEGIN_STMT
  if (buffer_11(D) == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  if (bufferLength_12(D) == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 912680550]:
  # DEBUG BEGIN_STMT
  if (buffer_11(D) == 0B)
    goto <bb 8>; [18.75%]
  else
    goto <bb 5>; [81.25%]

  <bb 5> [local count: 741552948]:
  if (bufferLength_12(D) <= 3)
    goto <bb 8>; [35.00%]
  else
    goto <bb 6>; [65.00%]

  <bb 6> [local count: 482009416]:
  if (dataElement_14(D) == 0B)
    goto <bb 8>; [18.75%]
  else
    goto <bb 7>; [81.25%]

  <bb 7> [local count: 391632651]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const uint8 *)buffer_11(D) + 3B];
  dataElement_14(D)->SafetyE2E_Data = _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = *buffer_11(D);
  _3 = (short unsigned int) _2;
  _4 = MEM[(const uint8 *)buffer_11(D) + 1B];
  _5 = (short unsigned int) _4;
  _6 = _5 << 8;
  _7 = _3 | _6;
  dataElement_14(D)->SafetyE2E_Data_CRC = _7;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 = MEM[(const uint8 *)buffer_11(D) + 2B];
  dataElement_14(D)->SafetyE2E_Data_SQC_Counter = _8;

  <bb 8> [local count: 1073741824]:
  # retval_9 = PHI <1(3), 129(5), 0(7), 129(4), 129(6)>
  # DEBUG retval => retval_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retval_9;

}


