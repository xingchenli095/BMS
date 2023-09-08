
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Siul2_Dio_Ip_MaskedWritePins/13:
  Jump functions of caller  Siul2_Dio_Ip_WritePins/12:
  Jump functions of caller  Siul2_Dio_Ip_ReadPins/11:
  Jump functions of caller  Dio_Ipw_WriteChannelGroup/7:
    callsite  Dio_Ipw_WriteChannelGroup/7 -> Dio_Ipw_ReverseBits/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dio_Ipw_ReadChannelGroup/6:
    callsite  Dio_Ipw_ReadChannelGroup/6 -> Dio_Ipw_ReverseBits/0 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dio_Ipw_WritePort/5:
  Jump functions of caller  Dio_Ipw_ReadPort/4:
  Jump functions of caller  Dio_Ipw_WriteChannel/3:
  Jump functions of caller  Dio_Ipw_ReadChannel/2:
    callsite  Dio_Ipw_ReadChannel/2 -> Dio_Ipw_ReadChannelValue/1 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  Dio_Ipw_ReadChannelValue/1:
  Jump functions of caller  Dio_Ipw_ReverseBits/0:

 Propagating constants:

Not considering Dio_Ipw_WriteChannelGroup for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_ReadChannelGroup for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_WritePort for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_ReadPort for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_WriteChannel for cloning; -fipa-cp-clone disabled.
Not considering Dio_Ipw_ReadChannel for cloning; -fipa-cp-clone disabled.

overall_size: 130, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dio_Ipw_WriteChannelGroup/7:
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
  Node: Dio_Ipw_ReadChannelGroup/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dio_Ipw_WritePort/5:
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
  Node: Dio_Ipw_ReadPort/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dio_Ipw_WriteChannel/3:
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
  Node: Dio_Ipw_ReadChannel/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dio_Ipw_ReadChannelValue/1:
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
  Node: Dio_Ipw_ReverseBits/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Siul2_Dio_Ip_MaskedWritePins/13 (Siul2_Dio_Ip_MaskedWritePins) @06d2d380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_WriteChannelGroup/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Siul2_Dio_Ip_WritePins/12 (Siul2_Dio_Ip_WritePins) @06d2d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_WritePort/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Siul2_Dio_Ip_ReadPins/11 (Siul2_Dio_Ip_ReadPins) @06d1ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dio_Ipw_ReadChannelGroup/6 (1073741824 (estimated locally),1.00 per call) Dio_Ipw_ReadPort/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Siul2_Dio_Ip_au32BaseAdresses/10 (Siul2_Dio_Ip_au32BaseAdresses) @06b4aca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dio_Ipw_ReadPort/4 (read)Dio_Ipw_WritePort/5 (read)Dio_Ipw_ReadChannelValue/1 (read)Dio_Ipw_WriteChannel/3 (read)Dio_Ipw_ReadChannelGroup/6 (read)
  Availability: not_available
  Varpool flags:
Dio_au8Port0OffsetInSiul2Instance/9 (Dio_au8Port0OffsetInSiul2Instance) @06b4aaf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dio_Ipw_ReadPort/4 (read)Dio_Ipw_WritePort/5 (read)Dio_Ipw_ReadChannel/2 (read)Dio_Ipw_WriteChannel/3 (read)Dio_Ipw_ReadChannelGroup/6 (read)
  Availability: not_available
  Varpool flags: read-only
Dio_au8PortSiul2Instance/8 (Dio_au8PortSiul2Instance) @06b4aab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dio_Ipw_WritePort/5 (read)Dio_Ipw_ReadChannelGroup/6 (read)Dio_Ipw_ReadChannel/2 (read)Dio_Ipw_WriteChannel/3 (read)Dio_Ipw_ReadPort/4 (read)Dio_Ipw_WriteChannelGroup/7 (read)
  Availability: not_available
  Varpool flags: read-only
Dio_Ipw_WriteChannelGroup/7 (Dio_Ipw_WriteChannelGroup) @06d1c9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dio_au8PortSiul2Instance/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_MaskedWritePins/13 (1073741824 (estimated locally),1.00 per call) Dio_Ipw_ReverseBits/0 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_ReadChannelGroup/6 (Dio_Ipw_ReadChannelGroup) @06d1c7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dio_au8PortSiul2Instance/8 (read)Dio_au8Port0OffsetInSiul2Instance/9 (read)Siul2_Dio_Ip_au32BaseAdresses/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dio_Ipw_ReverseBits/0 (1073741824 (estimated locally),1.00 per call) Siul2_Dio_Ip_ReadPins/11 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_WritePort/5 (Dio_Ipw_WritePort) @06d1c620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dio_au8PortSiul2Instance/8 (read)Dio_au8Port0OffsetInSiul2Instance/9 (read)Siul2_Dio_Ip_au32BaseAdresses/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_WritePins/12 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_ReadPort/4 (Dio_Ipw_ReadPort) @06d1c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dio_au8PortSiul2Instance/8 (read)Dio_au8Port0OffsetInSiul2Instance/9 (read)Siul2_Dio_Ip_au32BaseAdresses/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Siul2_Dio_Ip_ReadPins/11 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_WriteChannel/3 (Dio_Ipw_WriteChannel) @06d1c2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dio_au8PortSiul2Instance/8 (read)Dio_au8Port0OffsetInSiul2Instance/9 (read)Siul2_Dio_Ip_au32BaseAdresses/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dio_Ipw_ReadChannel/2 (Dio_Ipw_ReadChannel) @06d1c0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dio_au8PortSiul2Instance/8 (read)Dio_au8Port0OffsetInSiul2Instance/9 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dio_Ipw_ReadChannelValue/1 (1073741824 (estimated locally),1.00 per call) 
Dio_Ipw_ReadChannelValue/1 (Dio_Ipw_ReadChannelValue) @06d16ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Siul2_Dio_Ip_au32BaseAdresses/10 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dio_Ipw_ReadChannel/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dio_Ipw_ReverseBits/0 (Dio_Ipw_ReverseBits) @06d16d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local optimize_size
  Called by: Dio_Ipw_WriteChannelGroup/7 (1073741824 (estimated locally),1.00 per call) Dio_Ipw_ReadChannelGroup/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function Dio_Ipw_ReadChannel (Dio_Ipw_ReadChannel, funcdef_no=2, decl_uid=5970, cgraph_uid=3, symbol_order=2)

Modification phase of node Dio_Ipw_ReadChannel/2
Dio_Ipw_ReadChannel (Dio_ChannelType ChannelId)
{
  Dio_ChannelType ChannelIndex;
  Dio_ChannelType ChannelOffset;
  uint8 u8Siul2Instance;
  Dio_PortType PortId;
  Dio_LevelType ChannelLevel;
  short unsigned int _1;
  int _2;
  int _3;
  unsigned char _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ChannelLevel => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelId_6(D) >> 4;
  PortId_7 = (Dio_PortType) _1;
  # DEBUG PortId => PortId_7
  # DEBUG BEGIN_STMT
  _2 = (int) PortId_7;
  u8Siul2Instance_9 = Dio_au8PortSiul2Instance[_2];
  # DEBUG u8Siul2Instance => u8Siul2Instance_9
  # DEBUG BEGIN_STMT
  _3 = (int) u8Siul2Instance_9;
  _4 = Dio_au8Port0OffsetInSiul2Instance[_3];
  _5 = (short unsigned int) _4;
  ChannelOffset_10 = _5 * 16;
  # DEBUG ChannelOffset => ChannelOffset_10
  # DEBUG BEGIN_STMT
  ChannelIndex_11 = ChannelId_6(D) - ChannelOffset_10;
  # DEBUG ChannelIndex => ChannelIndex_11
  # DEBUG BEGIN_STMT
  ChannelLevel_12 = Dio_Ipw_ReadChannelValue (u8Siul2Instance_9, ChannelIndex_11);
  # DEBUG ChannelLevel => ChannelLevel_12
  # DEBUG BEGIN_STMT
  return ChannelLevel_12;

}



;; Function Dio_Ipw_WriteChannel (Dio_Ipw_WriteChannel, funcdef_no=3, decl_uid=5973, cgraph_uid=4, symbol_order=3)

Modification phase of node Dio_Ipw_WriteChannel/3
Dio_Ipw_WriteChannel (Dio_ChannelType ChannelId, Dio_LevelType Level)
{
  Dio_ChannelType ChannelIndex;
  Dio_ChannelType ChannelOffset;
  uint8 u8Siul2Instance;
  Dio_PortType PortId;
  short unsigned int _1;
  int _2;
  int _3;
  unsigned char _4;
  short unsigned int _5;
  long unsigned int _6;
  short unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  Dio_LevelType * _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ChannelId_12(D) >> 4;
  PortId_13 = (Dio_PortType) _1;
  # DEBUG PortId => PortId_13
  # DEBUG BEGIN_STMT
  _2 = (int) PortId_13;
  u8Siul2Instance_15 = Dio_au8PortSiul2Instance[_2];
  # DEBUG u8Siul2Instance => u8Siul2Instance_15
  # DEBUG BEGIN_STMT
  _3 = (int) u8Siul2Instance_15;
  _4 = Dio_au8Port0OffsetInSiul2Instance[_3];
  _5 = (short unsigned int) _4;
  ChannelOffset_16 = _5 * 16;
  # DEBUG ChannelOffset => ChannelOffset_16
  # DEBUG BEGIN_STMT
  ChannelIndex_17 = ChannelId_12(D) - ChannelOffset_16;
  # DEBUG ChannelIndex => ChannelIndex_17
  # DEBUG BEGIN_STMT
  _6 = Siul2_Dio_Ip_au32BaseAdresses[_3];
  _7 = ChannelIndex_17 ^ 3;
  _8 = (long unsigned int) _7;
  _9 = _6 + _8;
  _10 = _9 + 4864;
  _11 = (Dio_LevelType *) _10;
  *_11 = Level_18(D);
  return;

}



;; Function Dio_Ipw_ReadPort (Dio_Ipw_ReadPort, funcdef_no=4, decl_uid=5975, cgraph_uid=5, symbol_order=4)

Modification phase of node Dio_Ipw_ReadPort/4
Dio_Ipw_ReadPort (Dio_PortType PortId)
{
  uint32 u32PGPDOAdrress;
  Dio_PortType PortOffset;
  uint8 u8Siul2Instance;
  Dio_PortLevelType PortLevel;
  int _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned char _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  const struct Siul2_Dio_Ip_GpioType * u32PGPDOAdrress.0_16;
  unsigned char _17;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PortLevel => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) PortId_18(D);
  u8Siul2Instance_20 = Dio_au8PortSiul2Instance[_1];
  # DEBUG u8Siul2Instance => u8Siul2Instance_20
  # DEBUG BEGIN_STMT
  _2 = (int) u8Siul2Instance_20;
  PortOffset_21 = Dio_au8Port0OffsetInSiul2Instance[_2];
  # DEBUG PortOffset => PortOffset_21
  # DEBUG BEGIN_STMT
  _3 = Siul2_Dio_Ip_au32BaseAdresses[_2];
  _4 = (long unsigned int) PortId_18(D);
  _5 = (long unsigned int) PortOffset_21;
  _6 = _4 - _5;
  _7 = _6 >> 1;
  _8 = _7 + 1;
  _9 = _8 * 2;
  _10 = PortId_18(D) - PortOffset_21;
  _17 = _10 & 1;
  _11 = (long unsigned int) _17;
  _12 = _9 - _11;
  _13 = _12 + 4294967295;
  _14 = _13 << 1;
  _15 = _3 + _14;
  u32PGPDOAdrress_22 = _15 + 5888;
  # DEBUG u32PGPDOAdrress => u32PGPDOAdrress_22
  # DEBUG BEGIN_STMT
  u32PGPDOAdrress.0_16 = (const struct Siul2_Dio_Ip_GpioType *) u32PGPDOAdrress_22;
  PortLevel_24 = Siul2_Dio_Ip_ReadPins (u32PGPDOAdrress.0_16);
  # DEBUG PortLevel => PortLevel_24
  # DEBUG BEGIN_STMT
  return PortLevel_24;

}



;; Function Dio_Ipw_WritePort (Dio_Ipw_WritePort, funcdef_no=5, decl_uid=5978, cgraph_uid=6, symbol_order=5)

Modification phase of node Dio_Ipw_WritePort/5
Dio_Ipw_WritePort (Dio_PortType PortId, Dio_PortLevelType Level)
{
  uint8 u8Siul2Instance;
  uint32 u32PGPDOAdrress;
  Dio_PortType PortOffset;
  int _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned char _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  struct Siul2_Dio_Ip_GpioType * u32PGPDOAdrress.1_16;
  unsigned char _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG CrtLevel => Level_17(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) PortId_19(D);
  u8Siul2Instance_21 = Dio_au8PortSiul2Instance[_1];
  # DEBUG u8Siul2Instance => u8Siul2Instance_21
  # DEBUG BEGIN_STMT
  _2 = (int) u8Siul2Instance_21;
  PortOffset_22 = Dio_au8Port0OffsetInSiul2Instance[_2];
  # DEBUG PortOffset => PortOffset_22
  # DEBUG BEGIN_STMT
  _3 = Siul2_Dio_Ip_au32BaseAdresses[_2];
  _4 = (long unsigned int) PortId_19(D);
  _5 = (long unsigned int) PortOffset_22;
  _6 = _4 - _5;
  _7 = _6 >> 1;
  _8 = _7 + 1;
  _9 = _8 * 2;
  _10 = PortId_19(D) - PortOffset_22;
  _18 = _10 & 1;
  _11 = (long unsigned int) _18;
  _12 = _9 - _11;
  _13 = _12 + 4294967295;
  _14 = _13 << 1;
  _15 = _3 + _14;
  u32PGPDOAdrress_23 = _15 + 5888;
  # DEBUG u32PGPDOAdrress => u32PGPDOAdrress_23
  # DEBUG BEGIN_STMT
  u32PGPDOAdrress.1_16 = (struct Siul2_Dio_Ip_GpioType *) u32PGPDOAdrress_23;
  Siul2_Dio_Ip_WritePins (u32PGPDOAdrress.1_16, Level_17(D));
  return;

}



;; Function Dio_Ipw_ReadChannelGroup (Dio_Ipw_ReadChannelGroup, funcdef_no=6, decl_uid=5980, cgraph_uid=7, symbol_order=6)

Modification phase of node Dio_Ipw_ReadChannelGroup/6
Dio_Ipw_ReadChannelGroup (const struct Dio_ChannelGroupType * pChannelGroupIdPtr)
{
  Dio_PortLevelType maskRevValue;
  Dio_PortLevelType pinsValue;
  uint32 u32PGPDOAdrress;
  Dio_PortType PortOffset;
  Dio_PortType PortId;
  uint8 u8Siul2Instance;
  Dio_PortLevelType PortLevel;
  int _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  unsigned char _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  const struct Siul2_Dio_Ip_GpioType * u32PGPDOAdrress.2_16;
  short unsigned int _17;
  short unsigned int _18;
  int _19;
  unsigned char _20;
  int _21;
  int _22;
  unsigned char _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG PortLevel => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PortId_26 = pChannelGroupIdPtr_25(D)->port;
  # DEBUG PortId => PortId_26
  # DEBUG BEGIN_STMT
  _1 = (int) PortId_26;
  u8Siul2Instance_27 = Dio_au8PortSiul2Instance[_1];
  # DEBUG u8Siul2Instance => u8Siul2Instance_27
  # DEBUG BEGIN_STMT
  _2 = (int) u8Siul2Instance_27;
  PortOffset_28 = Dio_au8Port0OffsetInSiul2Instance[_2];
  # DEBUG PortOffset => PortOffset_28
  # DEBUG BEGIN_STMT
  _3 = Siul2_Dio_Ip_au32BaseAdresses[_2];
  _4 = (long unsigned int) PortId_26;
  _5 = (long unsigned int) PortOffset_28;
  _6 = _4 - _5;
  _7 = _6 >> 1;
  _8 = _7 + 1;
  _9 = _8 * 2;
  _10 = PortId_26 - PortOffset_28;
  _23 = _10 & 1;
  _11 = (long unsigned int) _23;
  _12 = _9 - _11;
  _13 = _12 + 4294967295;
  _14 = _13 << 1;
  _15 = _3 + _14;
  u32PGPDOAdrress_29 = _15 + 5888;
  # DEBUG u32PGPDOAdrress => u32PGPDOAdrress_29
  # DEBUG BEGIN_STMT
  u32PGPDOAdrress.2_16 = (const struct Siul2_Dio_Ip_GpioType *) u32PGPDOAdrress_29;
  pinsValue_31 = Siul2_Dio_Ip_ReadPins (u32PGPDOAdrress.2_16);
  # DEBUG pinsValue => pinsValue_31
  # DEBUG BEGIN_STMT
  _17 = pChannelGroupIdPtr_25(D)->mask;
  maskRevValue_32 = Dio_Ipw_ReverseBits (_17);
  # DEBUG maskRevValue => maskRevValue_32
  # DEBUG BEGIN_STMT
  _18 = pinsValue_31 & maskRevValue_32;
  _19 = (int) _18;
  _20 = pChannelGroupIdPtr_25(D)->u8offset;
  _21 = (int) _20;
  _22 = _19 >> _21;
  PortLevel_33 = (Dio_PortLevelType) _22;
  # DEBUG PortLevel => PortLevel_33
  # DEBUG BEGIN_STMT
  return PortLevel_33;

}



;; Function Dio_Ipw_WriteChannelGroup (Dio_Ipw_WriteChannelGroup, funcdef_no=7, decl_uid=5983, cgraph_uid=8, symbol_order=7)

Modification phase of node Dio_Ipw_WriteChannelGroup/7
Dio_Ipw_WriteChannelGroup (const struct Dio_ChannelGroupType * pChannelGroupIdPtr, Dio_PortLevelType Level)
{
  uint8 u8Siul2Instance;
  Dio_PortType PortId;
  int _1;
  int _2;
  unsigned char _3;
  int _4;
  int _5;
  short unsigned int _6;
  short unsigned int _7;
  short unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PortId_11 = pChannelGroupIdPtr_10(D)->port;
  # DEBUG PortId => PortId_11
  # DEBUG BEGIN_STMT
  _1 = (int) PortId_11;
  u8Siul2Instance_12 = Dio_au8PortSiul2Instance[_1];
  # DEBUG u8Siul2Instance => u8Siul2Instance_12
  # DEBUG BEGIN_STMT
  _2 = (int) Level_13(D);
  _3 = pChannelGroupIdPtr_10(D)->u8offset;
  _4 = (int) _3;
  _5 = _2 << _4;
  _6 = (short unsigned int) _5;
  _7 = pChannelGroupIdPtr_10(D)->mask;
  _8 = Dio_Ipw_ReverseBits (_7);
  Siul2_Dio_Ip_MaskedWritePins (u8Siul2Instance_12, PortId_11, _6, _8);
  return;

}


