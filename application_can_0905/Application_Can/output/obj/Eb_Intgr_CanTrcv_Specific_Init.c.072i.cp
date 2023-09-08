
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_SendFrameAndWaitACK.part.0/16:
    callsite  Can_SendFrameAndWaitACK.part.0/16 -> Can_DummyDelay/7 : 
       param 0: CONST: 10
         value: 0xa, mask: 0x0
         Unknown VR
  Jump functions of caller  Can_Write/15:
  Jump functions of caller  Eb_Intgr_CanTrcv_Device_Init/14:
    callsite  Eb_Intgr_CanTrcv_Device_Init/14 -> TJA1153_ExitConfigurationlMode/13 : 
    callsite  Eb_Intgr_CanTrcv_Device_Init/14 -> TJA1153_ConfigureExtendedFilterAndMask/12 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 536870911
         value: 0x1fffffff, mask: 0x0
         Unknown VR
    callsite  Eb_Intgr_CanTrcv_Device_Init/14 -> TJA1153_ConfigureStandardFilterAndMask/11 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: CONST: 2047
         value: 0x7ff, mask: 0x0
         Unknown VR
    callsite  Eb_Intgr_CanTrcv_Device_Init/14 -> TJA1153_EnterConfigurationMode/10 : 
  Jump functions of caller  TJA1153_ExitConfigurationlMode/13:
    callsite  TJA1153_ExitConfigurationlMode/13 -> Can_SendFrameAndWaitACK/9 : 
  Jump functions of caller  TJA1153_ConfigureExtendedFilterAndMask/12:
    callsite  TJA1153_ConfigureExtendedFilterAndMask/12 -> Can_SendFrameAndWaitACK/9 : 
    callsite  TJA1153_ConfigureExtendedFilterAndMask/12 -> Can_SendFrameAndWaitACK/9 : 
  Jump functions of caller  TJA1153_ConfigureStandardFilterAndMask/11:
    callsite  TJA1153_ConfigureStandardFilterAndMask/11 -> Can_SendFrameAndWaitACK/9 : 
  Jump functions of caller  TJA1153_EnterConfigurationMode/10:
    callsite  TJA1153_EnterConfigurationMode/10 -> Can_SendFrameAndWaitACK/9 : 
  Jump functions of caller  Can_SendFrameAndWaitACK/9:
    callsite  Can_SendFrameAndWaitACK/9 -> Can_SendFrameAndWaitACK.part.0/16 : 
  Jump functions of caller  Can_CreatePduInfo/8:
  Jump functions of caller  Can_DummyDelay/7:

 Propagating constants:

Not considering Eb_Intgr_CanTrcv_Device_Init for cloning; -fipa-cp-clone disabled.
Not considering TJA1153_ExitConfigurationlMode for cloning; -fipa-cp-clone disabled.
Not considering TJA1153_ConfigureExtendedFilterAndMask for cloning; -fipa-cp-clone disabled.
Not considering TJA1153_ConfigureStandardFilterAndMask for cloning; -fipa-cp-clone disabled.
Not considering TJA1153_EnterConfigurationMode for cloning; -fipa-cp-clone disabled.
Not considering Can_SendFrameAndWaitACK for cloning; -fipa-cp-clone disabled.
Not considering Can_CreatePduInfo for cloning; -fipa-cp-clone disabled.
Not considering Can_DummyDelay for cloning; -fipa-cp-clone disabled.

overall_size: 144, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Can_SendFrameAndWaitACK.part.0/16:
  Node: Eb_Intgr_CanTrcv_Device_Init/14:
  Node: TJA1153_ExitConfigurationlMode/13:
  Node: TJA1153_ConfigureExtendedFilterAndMask/12:
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
  Node: TJA1153_ConfigureStandardFilterAndMask/11:
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
  Node: TJA1153_EnterConfigurationMode/10:
  Node: Can_SendFrameAndWaitACK/9:
  Node: Can_CreatePduInfo/8:
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
  Node: Can_DummyDelay/7:
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

Can_SendFrameAndWaitACK.part.0/16 (Can_SendFrameAndWaitACK.part.0) @07e72620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: u8TimeOut/4 (read)u8TimeOut/4 (write)u8TimeOut/4 (read)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Can_SendFrameAndWaitACK/9 (118111600 (estimated locally),0.50 per call) 
  Calls: Can_DummyDelay/7 (955630223 (estimated locally),8.09 per call) 
Can_Write/15 (Can_Write) @07ea2620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_SendFrameAndWaitACK/9 (236223200 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_CanTrcv_Device_Init/14 (Eb_Intgr_CanTrcv_Device_Init) @07ea22a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: TJA1153_ExitConfigurationlMode/13 (1073741824 (estimated locally),1.00 per call) TJA1153_ConfigureExtendedFilterAndMask/12 (1073741824 (estimated locally),1.00 per call) TJA1153_ConfigureStandardFilterAndMask/11 (1073741824 (estimated locally),1.00 per call) TJA1153_EnterConfigurationMode/10 (1073741824 (estimated locally),1.00 per call) 
TJA1153_ExitConfigurationlMode/13 (TJA1153_ExitConfigurationlMode) @07ea20e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_au8SduLeavingConfigurationCommand/6 (write)Can_au8SduLeavingConfigurationCommand/6 (write)Can_PduInfo/1 (write)Can_au8SduLeavingConfigurationCommand/6 (addr)Can_PduInfo/1 (write)Can_PduInfo/1 (write)Can_PduInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Eb_Intgr_CanTrcv_Device_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Can_SendFrameAndWaitACK/9 (1073741824 (estimated locally),1.00 per call) 
TJA1153_ConfigureExtendedFilterAndMask/12 (TJA1153_ConfigureExtendedFilterAndMask) @07e98ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_PduInfo/1 (write)Can_au8SduSpoofingCommand/3 (addr)Can_PduInfo/1 (write)Can_PduInfo/1 (write)Can_PduInfo/1 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_PduInfo/1 (write)Can_au8SduSpoofingCommand/3 (addr)Can_PduInfo/1 (write)Can_PduInfo/1 (write)Can_PduInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Eb_Intgr_CanTrcv_Device_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Can_SendFrameAndWaitACK/9 (1073741824 (estimated locally),1.00 per call) Can_SendFrameAndWaitACK/9 (1073741824 (estimated locally),1.00 per call) 
TJA1153_ConfigureStandardFilterAndMask/11 (TJA1153_ConfigureStandardFilterAndMask) @07e98d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_au8SduSpoofingCommand/3 (write)Can_PduInfo/1 (write)Can_au8SduSpoofingCommand/3 (addr)Can_PduInfo/1 (write)Can_PduInfo/1 (write)Can_PduInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Eb_Intgr_CanTrcv_Device_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Can_SendFrameAndWaitACK/9 (1073741824 (estimated locally),1.00 per call) 
TJA1153_EnterConfigurationMode/10 (TJA1153_EnterConfigurationMode) @07e98b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Can_PduInfo/1 (write)Can_au8Sdu8bytes/2 (addr)Can_PduInfo/1 (write)Can_PduInfo/1 (write)Can_PduInfo/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Eb_Intgr_CanTrcv_Device_Init/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: Can_SendFrameAndWaitACK/9 (1073741824 (estimated locally),1.00 per call) 
Can_SendFrameAndWaitACK/9 (Can_SendFrameAndWaitACK) @07e989a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: u8TimeOut/4 (write)Can_PduInfo/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: TJA1153_ExitConfigurationlMode/13 (1073741824 (estimated locally),1.00 per call) TJA1153_ConfigureExtendedFilterAndMask/12 (1073741824 (estimated locally),1.00 per call) TJA1153_ConfigureExtendedFilterAndMask/12 (1073741824 (estimated locally),1.00 per call) TJA1153_ConfigureStandardFilterAndMask/11 (1073741824 (estimated locally),1.00 per call) TJA1153_EnterConfigurationMode/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: Can_SendFrameAndWaitACK.part.0/16 (118111600 (estimated locally),0.50 per call) Can_Write/15 (236223200 (estimated locally),1.00 per call) 
Can_CreatePduInfo/8 (Can_CreatePduInfo) @07e987e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Can_DummyDelay/7 (Can_DummyDelay) @07e98620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:12992276 (estimated locally) body optimize_size
  Called by: Can_SendFrameAndWaitACK.part.0/16 (955630223 (estimated locally),8.09 per call) 
  Calls: 
Can_au8SduLeavingConfigurationCommand/6 (Can_au8SduLeavingConfigurationCommand) @07d9f750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: TJA1153_ExitConfigurationlMode/13 (write)TJA1153_ExitConfigurationlMode/13 (write)TJA1153_ExitConfigurationlMode/13 (addr)
  Availability: available
  Varpool flags: initialized
currentHwMBIndex/5 (currentHwMBIndex) @07d9f6c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags:
u8TimeOut/4 (u8TimeOut) @07d9f678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Can_SendFrameAndWaitACK.part.0/16 (read)Can_SendFrameAndWaitACK.part.0/16 (read)Can_SendFrameAndWaitACK.part.0/16 (write)Can_SendFrameAndWaitACK/9 (write)
  Availability: available
  Varpool flags: initialized
Can_au8SduSpoofingCommand/3 (Can_au8SduSpoofingCommand) @07d9f630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (addr)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (addr)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (addr)
  Availability: available
  Varpool flags: initialized
Can_au8Sdu8bytes/2 (Can_au8Sdu8bytes) @07d9f5e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: TJA1153_EnterConfigurationMode/10 (addr)
  Availability: available
  Varpool flags: initialized
Can_PduInfo/1 (Can_PduInfo) @07d9f558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)Can_SendFrameAndWaitACK/9 (addr)TJA1153_EnterConfigurationMode/10 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_EnterConfigurationMode/10 (write)TJA1153_EnterConfigurationMode/10 (write)TJA1153_EnterConfigurationMode/10 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureStandardFilterAndMask/11 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ConfigureExtendedFilterAndMask/12 (write)TJA1153_ExitConfigurationlMode/13 (write)TJA1153_ExitConfigurationlMode/13 (write)TJA1153_ExitConfigurationlMode/13 (write)TJA1153_ExitConfigurationlMode/13 (write)
  Availability: available
  Varpool flags:

;; Function Can_DummyDelay (Can_DummyDelay, funcdef_no=1, decl_uid=12323, cgraph_uid=2, symbol_order=7)

Modification phase of node Can_DummyDelay/7
Can_DummyDelay (uint32 loops)
{
  volatile uint32 contor2;
  volatile uint32 contor1;
  volatile uint32 data;
  long unsigned int contor1.0_1;
  int _2;
  long unsigned int _3;
  long unsigned int contor2.1_4;
  long unsigned int _5;
  long unsigned int data.2_6;
  long unsigned int _7;
  long unsigned int contor1.3_8;
  long unsigned int _9;
  long unsigned int contor1.4_10;
  long unsigned int contor2.5_11;
  long unsigned int _12;
  long unsigned int contor2.6_13;
  long unsigned int _23;

  <bb 2> [local count: 12992276]:
  # DEBUG BEGIN_STMT
  data ={v} 2857740885;
  # DEBUG BEGIN_STMT
  contor1 ={v} 0;
  # DEBUG BEGIN_STMT
  contor2 ={v} loops_19(D);

  <bb 3> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  contor1 ={v} 0;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 955630224]:
  # DEBUG BEGIN_STMT
  contor1.0_1 ={v} contor1;
  _2 = 1 << contor1.0_1;
  _3 = (long unsigned int) _2;
  contor2.1_4 ={v} contor2;
  _5 = _3 | contor2.1_4;
  _23 = _5 | 11184810;
  data.2_6 ={v} data;
  _7 = data.2_6 ^ _23;
  data ={v} _7;
  # DEBUG BEGIN_STMT
  contor1.3_8 ={v} contor1;
  _9 = contor1.3_8 + 1;
  contor1 ={v} _9;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  contor1.4_10 ={v} contor1;
  if (contor1.4_10 <= 766)
    goto <bb 4>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 6> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  contor2.5_11 ={v} contor2;
  _12 = contor2.5_11 + 4294967295;
  contor2 ={v} _12;
  # DEBUG BEGIN_STMT
  contor2.6_13 ={v} contor2;
  if (contor2.6_13 != 0)
    goto <bb 8>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 8> [local count: 105119325]:
  goto <bb 3>; [100.00%]

  <bb 7> [local count: 12992276]:
  return;

}



;; Function Can_CreatePduInfo (Can_CreatePduInfo, funcdef_no=2, decl_uid=12337, cgraph_uid=3, symbol_order=8)

Modification phase of node Can_CreatePduInfo/8
Can_CreatePduInfo (Can_IdType id, PduIdType swPduHandle, uint8 length, uint8 * sdu)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$id => id_2(D)
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$swPduHandle => swPduHandle_3(D)
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$length => length_4(D)
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$sdu => sdu_5(D)
  # DEBUG BEGIN_STMT
  MEM[(struct  *)&<retval>] = sdu_5(D);
  MEM[(struct  *)&<retval> + 4B] = id_2(D);
  MEM[(struct  *)&<retval> + 8B] = swPduHandle_3(D);
  MEM[(struct  *)&<retval> + 10B] = length_4(D);
  # DEBUG D#1 => {CLOBBER}
  # DEBUG PduInfo$sdu => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG PduInfo$id => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG PduInfo$swPduHandle => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG PduInfo$length => D#4
  return <retval>;

}



;; Function Can_SendFrameAndWaitACK (Can_SendFrameAndWaitACK, funcdef_no=3, decl_uid=12341, cgraph_uid=4, symbol_order=9)

Modification phase of node Can_SendFrameAndWaitACK/9
Can_SendFrameAndWaitACK ()
{
  unsigned char _1;
  Std_ReturnType _3;
  unsigned char _8;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  u8TimeOut = 9;
  # DEBUG BEGIN_STMT
  _1 = Can_Write (14, &Can_PduInfo);
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 118111600]:
  _8 = Can_SendFrameAndWaitACK.part.0 ();

  <bb 4> [local count: 236223201]:
  # _3 = PHI <_8(3), 1(2)>
  return _3;

}



;; Function TJA1153_EnterConfigurationMode (TJA1153_EnterConfigurationMode, funcdef_no=4, decl_uid=12347, cgraph_uid=5, symbol_order=10)

Modification phase of node TJA1153_EnterConfigurationMode/10
TJA1153_EnterConfigurationMode ()
{
  Std_ReturnType _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG id => 1365
  # DEBUG swPduHandle => 0
  # DEBUG length => 8
  # DEBUG sdu => &Can_au8Sdu8bytes
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$id => 1365
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$swPduHandle => 0
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$length => 8
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$sdu => &Can_au8Sdu8bytes
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG PduInfo$sdu => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG PduInfo$id => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG PduInfo$swPduHandle => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG PduInfo$length => D#4
  # DEBUG id => NULL
  # DEBUG swPduHandle => NULL
  # DEBUG length => NULL
  # DEBUG sdu => NULL
  MEM[(struct  *)&Can_PduInfo] = &Can_au8Sdu8bytes;
  MEM[(struct  *)&Can_PduInfo + 4B] = 1365;
  MEM[(struct  *)&Can_PduInfo + 8B] = 0;
  MEM[(struct  *)&Can_PduInfo + 10B] = 8;
  # DEBUG BEGIN_STMT
  _3 = Can_SendFrameAndWaitACK ();
  return _3;

}



;; Function TJA1153_ConfigureStandardFilterAndMask (TJA1153_ConfigureStandardFilterAndMask, funcdef_no=5, decl_uid=12351, cgraph_uid=6, symbol_order=11)

Modification phase of node TJA1153_ConfigureStandardFilterAndMask/11
TJA1153_ConfigureStandardFilterAndMask (uint32 StandardFilter, uint32 StandardMask)
{
  long unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned char _6;
  unsigned char _7;
  Std_ReturnType _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Can_au8SduSpoofingCommand[0] = 16;
  # DEBUG BEGIN_STMT
  Can_au8SduSpoofingCommand[1] = 0;
  # DEBUG BEGIN_STMT
  _1 = StandardFilter_11(D) >> 8;
  _2 = (unsigned char) _1;
  _3 = _2 | 80;
  Can_au8SduSpoofingCommand[2] = _3;
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) StandardFilter_11(D);
  Can_au8SduSpoofingCommand[3] = _4;
  # DEBUG BEGIN_STMT
  _5 = StandardMask_14(D) >> 8;
  _6 = (unsigned char) _5;
  Can_au8SduSpoofingCommand[4] = _6;
  # DEBUG BEGIN_STMT
  _7 = (unsigned char) StandardMask_14(D);
  Can_au8SduSpoofingCommand[5] = _7;
  # DEBUG BEGIN_STMT
  # DEBUG id => 2564423921
  # DEBUG swPduHandle => 0
  # DEBUG length => 6
  # DEBUG sdu => &Can_au8SduSpoofingCommand
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$id => 2564423921
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$swPduHandle => 0
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$length => 6
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$sdu => &Can_au8SduSpoofingCommand
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG PduInfo$sdu => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG PduInfo$id => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG PduInfo$swPduHandle => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG PduInfo$length => D#4
  # DEBUG id => NULL
  # DEBUG swPduHandle => NULL
  # DEBUG length => NULL
  # DEBUG sdu => NULL
  MEM[(struct  *)&Can_PduInfo] = &Can_au8SduSpoofingCommand;
  MEM[(struct  *)&Can_PduInfo + 4B] = 2564423921;
  MEM[(struct  *)&Can_PduInfo + 8B] = 0;
  MEM[(struct  *)&Can_PduInfo + 10B] = 6;
  # DEBUG BEGIN_STMT
  _18 = Can_SendFrameAndWaitACK ();
  return _18;

}



;; Function TJA1153_ConfigureExtendedFilterAndMask (TJA1153_ConfigureExtendedFilterAndMask, funcdef_no=6, decl_uid=12355, cgraph_uid=7, symbol_order=12)

Modification phase of node TJA1153_ConfigureExtendedFilterAndMask/12
TJA1153_ConfigureExtendedFilterAndMask (uint32 ExtendedFilter, uint32 ExtendedMask)
{
  Std_ReturnType eStatus;
  long unsigned int _1;
  unsigned char _2;
  unsigned char _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  unsigned char _7;
  unsigned char _8;
  long unsigned int _9;
  unsigned char _10;
  unsigned char _11;
  long unsigned int _12;
  unsigned char _13;
  long unsigned int _14;
  unsigned char _15;
  unsigned char _16;
  unsigned char _35;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Can_au8SduSpoofingCommand[0] = 16;
  # DEBUG BEGIN_STMT
  Can_au8SduSpoofingCommand[1] = 1;
  # DEBUG BEGIN_STMT
  _1 = ExtendedMask_20(D) >> 24;
  _2 = (unsigned char) _1;
  _3 = _2 | 128;
  Can_au8SduSpoofingCommand[2] = _3;
  # DEBUG BEGIN_STMT
  _4 = ExtendedMask_20(D) >> 16;
  _5 = (unsigned char) _4;
  Can_au8SduSpoofingCommand[3] = _5;
  # DEBUG BEGIN_STMT
  _6 = ExtendedMask_20(D) >> 8;
  _7 = (unsigned char) _6;
  Can_au8SduSpoofingCommand[4] = _7;
  # DEBUG BEGIN_STMT
  _8 = (unsigned char) ExtendedMask_20(D);
  Can_au8SduSpoofingCommand[5] = _8;
  # DEBUG BEGIN_STMT
  # DEBUG id => 2564423921
  # DEBUG swPduHandle => 0
  # DEBUG length => 6
  # DEBUG sdu => &Can_au8SduSpoofingCommand
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$id => 2564423921
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$swPduHandle => 0
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$length => 6
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$sdu => &Can_au8SduSpoofingCommand
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG PduInfo$sdu => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG PduInfo$id => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG PduInfo$swPduHandle => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG PduInfo$length => D#4
  # DEBUG id => NULL
  # DEBUG swPduHandle => NULL
  # DEBUG length => NULL
  # DEBUG sdu => NULL
  MEM[(struct  *)&Can_PduInfo] = &Can_au8SduSpoofingCommand;
  MEM[(struct  *)&Can_PduInfo + 4B] = 2564423921;
  MEM[(struct  *)&Can_PduInfo + 8B] = 0;
  MEM[(struct  *)&Can_PduInfo + 10B] = 6;
  # DEBUG BEGIN_STMT
  eStatus_26 = Can_SendFrameAndWaitACK ();
  # DEBUG eStatus => eStatus_26
  # DEBUG BEGIN_STMT
  Can_au8SduSpoofingCommand[0] = 16;
  # DEBUG BEGIN_STMT
  Can_au8SduSpoofingCommand[1] = 2;
  # DEBUG BEGIN_STMT
  _9 = ExtendedFilter_29(D) >> 24;
  _10 = (unsigned char) _9;
  _11 = _10 | 192;
  Can_au8SduSpoofingCommand[2] = _11;
  # DEBUG BEGIN_STMT
  _12 = ExtendedFilter_29(D) >> 16;
  _13 = (unsigned char) _12;
  Can_au8SduSpoofingCommand[3] = _13;
  # DEBUG BEGIN_STMT
  _14 = ExtendedFilter_29(D) >> 8;
  _15 = (unsigned char) _14;
  Can_au8SduSpoofingCommand[4] = _15;
  # DEBUG BEGIN_STMT
  _16 = (unsigned char) ExtendedFilter_29(D);
  Can_au8SduSpoofingCommand[5] = _16;
  # DEBUG BEGIN_STMT
  # DEBUG id => 2564423921
  # DEBUG swPduHandle => 0
  # DEBUG length => 6
  # DEBUG sdu => &Can_au8SduSpoofingCommand
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$id => 2564423921
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$swPduHandle => 0
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$length => 6
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$sdu => &Can_au8SduSpoofingCommand
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG PduInfo$sdu => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG PduInfo$id => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG PduInfo$swPduHandle => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG PduInfo$length => D#4
  # DEBUG id => NULL
  # DEBUG swPduHandle => NULL
  # DEBUG length => NULL
  # DEBUG sdu => NULL
  MEM[(struct  *)&Can_PduInfo] = &Can_au8SduSpoofingCommand;
  MEM[(struct  *)&Can_PduInfo + 4B] = 2564423921;
  MEM[(struct  *)&Can_PduInfo + 8B] = 0;
  MEM[(struct  *)&Can_PduInfo + 10B] = 6;
  # DEBUG BEGIN_STMT
  _35 = Can_SendFrameAndWaitACK ();
  eStatus_36 = eStatus_26 | _35;
  # DEBUG eStatus => eStatus_36
  # DEBUG BEGIN_STMT
  return eStatus_36;

}



;; Function TJA1153_ExitConfigurationlMode (TJA1153_ExitConfigurationlMode, funcdef_no=7, decl_uid=12359, cgraph_uid=8, symbol_order=13)

Modification phase of node TJA1153_ExitConfigurationlMode/13
TJA1153_ExitConfigurationlMode ()
{
  Std_ReturnType _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Can_au8SduLeavingConfigurationCommand[0] = 113;
  # DEBUG BEGIN_STMT
  Can_au8SduLeavingConfigurationCommand[1] = 2;
  # DEBUG BEGIN_STMT
  # DEBUG id => 2564423921
  # DEBUG swPduHandle => 0
  # DEBUG length => 8
  # DEBUG sdu => &Can_au8SduLeavingConfigurationCommand
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$id => 2564423921
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$swPduHandle => 0
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$length => 8
  # DEBUG BEGIN_STMT
  # DEBUG PduInfo$sdu => &Can_au8SduLeavingConfigurationCommand
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG PduInfo$sdu => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG PduInfo$id => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG PduInfo$swPduHandle => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG PduInfo$length => D#4
  # DEBUG id => NULL
  # DEBUG swPduHandle => NULL
  # DEBUG length => NULL
  # DEBUG sdu => NULL
  MEM[(struct  *)&Can_PduInfo] = &Can_au8SduLeavingConfigurationCommand;
  MEM[(struct  *)&Can_PduInfo + 4B] = 2564423921;
  MEM[(struct  *)&Can_PduInfo + 8B] = 0;
  MEM[(struct  *)&Can_PduInfo + 10B] = 8;
  # DEBUG BEGIN_STMT
  _5 = Can_SendFrameAndWaitACK ();
  return _5;

}



;; Function Eb_Intgr_CanTrcv_Device_Init (Eb_Intgr_CanTrcv_Device_Init, funcdef_no=8, decl_uid=12362, cgraph_uid=9, symbol_order=14)

Modification phase of node Eb_Intgr_CanTrcv_Device_Init/14
Eb_Intgr_CanTrcv_Device_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(struct SIUL2_Type *)1076428800B].GPDO84 ={v} 0;
  # DEBUG BEGIN_STMT
  TJA1153_EnterConfigurationMode ();
  # DEBUG BEGIN_STMT
  TJA1153_ConfigureStandardFilterAndMask (0, 2047);
  # DEBUG BEGIN_STMT
  TJA1153_ConfigureExtendedFilterAndMask (0, 536870911);
  # DEBUG BEGIN_STMT
  TJA1153_ExitConfigurationlMode ();
  # DEBUG BEGIN_STMT
  MEM[(struct SIUL2_Type *)1076428800B].GPDO84 ={v} 1;
  return;

}


