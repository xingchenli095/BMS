
IPA constant propagation start:
Determining dynamic type for call: BswM_RT_Init (inst_2(D));
  Starting walk at: BswM_RT_Init (inst_2(D));
  instance pointer: inst_2(D)  Outer instance pointer: inst_2(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:BswM_LT_Init ();
Determining dynamic type for call: BswM_Partition_Init (&BswM_Context);
  Starting walk at: BswM_Partition_Init (&BswM_Context);
  instance pointer: &BswM_Context  Outer instance pointer: BswM_Context offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _4 = BswM_IsValidConfig (BswM_PostBuildConfig.0_2);
  Starting walk at: _4 = BswM_IsValidConfig (BswM_PostBuildConfig.0_2);
  instance pointer: BswM_PostBuildConfig.0_2  Outer instance pointer: BswM_PostBuildConfig.0_2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_1 = BswM_GetConfigFromPbcfgM ();
Determining dynamic type for call: result_10 = BswM_IsValidConfig.part.0 (voidPtr_6(D));
  Starting walk at: result_10 = BswM_IsValidConfig.part.0 (voidPtr_6(D));
  instance pointer: voidPtr_6(D)  Outer instance pointer: voidPtr_6(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  BswM_IsValidConfig.part.0/18:
  Jump functions of caller  BswM_ExecuteModeControl/17:
  Jump functions of caller  BswM_PortUpdated/16:
  Jump functions of caller  TS_MemSet32/15:
  Jump functions of caller  BswM_LT_Init/14:
  Jump functions of caller  PbcfgM_GetConfig/12:
  Jump functions of caller  Det_ASR40_ReportError/11:
  Jump functions of caller  TS_PlatformSigIsValid/10:
  Jump functions of caller  BswM_ExecuteModeArbitration/9:
    indirect aggregate callsite, calling param 0, offset 32, by reference, for stmt _8 ();
    indirect aggregate callsite, calling param 0, offset 0, by reference, for stmt _1 ();
  Jump functions of caller  BswM_RT_Init/8:
    indirect simple callsite, calling param -1, offset 0, for stmt _17 = _15 (i_22);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  BswM_Partition_Init/7:
    callsite  BswM_Partition_Init/7 -> BswM_RT_Init/8 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  BswM_GetInstance/6:
  Jump functions of caller  BswM_Core_Init/5:
    callsite  BswM_Core_Init/5 -> BswM_Partition_Init/7 : 
       param 0: CONST: &BswM_Context
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  BswM_Init/4:
    callsite  BswM_Init/4 -> BswM_Core_Init/5 : 
    callsite  BswM_Init/4 -> BswM_IsValidConfig/2 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  BswM_Init/4 -> BswM_GetConfigFromPbcfgM/3 : 
  Jump functions of caller  BswM_GetConfigFromPbcfgM/3:
  Jump functions of caller  BswM_IsValidConfig/2:
    callsite  BswM_IsValidConfig/2 -> BswM_IsValidConfig.part.0/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering BswM_ExecuteModeArbitration for cloning; -fipa-cp-clone disabled.
Not considering BswM_GetInstance for cloning; -fipa-cp-clone disabled.
Not considering BswM_Init for cloning; -fipa-cp-clone disabled.
Not considering BswM_IsValidConfig for cloning; -fipa-cp-clone disabled.

overall_size: 165, max_new_size: 11001
 - context independent values, size: 7, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 36, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: BswM_IsValidConfig.part.0/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: BswM_ExecuteModeArbitration/9:
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
  Node: BswM_RT_Init/8:
    param [0]: &BswM_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct BswM_PartitionContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: BswM_Partition_Init/7:
    param [0]: &BswM_Context [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         struct BswM_PartitionContextType * ~[0B, 0B]
        AGGS VARIABLE
  Node: BswM_GetInstance/6:
  Node: BswM_Core_Init/5:
  Node: BswM_Init/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: BswM_GetConfigFromPbcfgM/3:
  Node: BswM_IsValidConfig/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

 - Creating a specialized node of BswM_Partition_Init/7 for all known contexts.
    replacing param #0 inst with const &BswM_Context
 - Creating a specialized node of BswM_RT_Init/8 for all known contexts.
    replacing param #0 inst with const &BswM_Context
Propagated bits info for function BswM_RT_Init.constprop/21:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function BswM_Partition_Init.constprop/20:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function BswM_RT_Init/8:
 param 0: value = 0x0, mask = 0xfffffffc
Propagated bits info for function BswM_Partition_Init/7:
 param 0: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions: BswM_RT_Init/8 BswM_Partition_Init/7
Reclaiming variables:
Clearing address taken flags:
Symbol table:

BswM_RT_Init.constprop.0/21 (BswM_RT_Init.constprop) @070f2620
  Type: function definition analyzed
  Visibility:
  References: BswM_PostBuildConfig/1 (read)BswM_Context/13 (addr)
  Referring: 
  Clone of BswM_RT_Init/8
  Availability: local
  Function flags: count:118111600 (estimated locally) local optimize_size
  Called by: BswM_Partition_Init.constprop/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(955630224 (estimated locally),8.09 per call) 
BswM_Partition_Init.constprop.0/20 (BswM_Partition_Init.constprop) @070f27e0
  Type: function definition analyzed
  Visibility:
  References: BswM_Context/13 (addr)
  Referring: 
  Clone of BswM_Partition_Init/7
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: BswM_Core_Init/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: BswM_LT_Init/14 (1073741824 (estimated locally),1.00 per call) BswM_RT_Init.constprop/21 (1073741824 (estimated locally),1.00 per call) 
BswM_IsValidConfig.part.0/18 (BswM_IsValidConfig.part.0) @070f21c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: BswM_IsValidConfig/2 (66369400 (estimated locally),0.06 per call) 
  Calls: 
BswM_ExecuteModeControl/17 (BswM_ExecuteModeControl) @070ec0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_ExecuteModeArbitration/9 (217325345 (estimated locally),0.20 per call) 
  Calls: 
BswM_PortUpdated/16 (BswM_PortUpdated) @070ec000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_ExecuteModeArbitration/9 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
TS_MemSet32/15 (TS_MemSet32) @07076ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_ExecuteModeArbitration/9 (1073527118 (estimated locally),1.00 per call) 
  Calls: 
BswM_LT_Init/14 (BswM_LT_Init) @07076b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Partition_Init.constprop/20 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
BswM_Context/13 (BswM_Context) @070b20d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: BswM_Core_Init/5 (addr)BswM_GetInstance/6 (addr)BswM_Init/4 (read)BswM_Init/4 (read)BswM_Partition_Init.constprop.0/20 (addr)BswM_RT_Init.constprop.0/21 (addr)
  Availability: not_available
  Varpool flags:
PbcfgM_GetConfig/12 (PbcfgM_GetConfig) @070768c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_GetConfigFromPbcfgM/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Det_ASR40_ReportError/11 (Det_ASR40_ReportError) @07076700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_Init/4 (375809638 (estimated locally),0.35 per call) BswM_Init/4 (322122547 (estimated locally),0.30 per call) 
  Calls: 
TS_PlatformSigIsValid/10 (TS_PlatformSigIsValid) @07076540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: BswM_IsValidConfig/2 (574129754 (estimated locally),0.53 per call) 
  Calls: 
BswM_ExecuteModeArbitration/9 (BswM_ExecuteModeArbitration) @07076380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073527118 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_ExecuteModeControl/17 (217325345 (estimated locally),0.20 per call) BswM_PortUpdated/16 (1073741823 (estimated locally),1.00 per call) TS_MemSet32/15 (1073527118 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call)  of param:0 loaded from aggregate passed by reference at offset 32 (vptr maybe changed)
   Indirect call(1073527118 (estimated locally),1.00 per call)  of param:0 loaded from aggregate passed by reference at offset 0 (vptr maybe changed)
BswM_RT_Init/8 (BswM_RT_Init) @070760e0
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_Partition_Init/7 (BswM_Partition_Init) @0706cd20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_GetInstance/6 (BswM_GetInstance) @0706cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_Context/13 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
BswM_Core_Init/5 (BswM_Core_Init) @0706c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: BswM_Context/13 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: BswM_Init/4 (375809638 (estimated locally),0.35 per call) 
  Calls: BswM_Partition_Init.constprop/20 (1073741824 (estimated locally),1.00 per call) 
BswM_Init/4 (BswM_Init) @0706c7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: BswM_PostBuildConfig/1 (write)BswM_PostBuildConfig/1 (write)BswM_PostBuildConfig/1 (read)BswM_Context/13 (read)BswM_Context/13 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: BswM_Core_Init/5 (375809638 (estimated locally),0.35 per call) Det_ASR40_ReportError/11 (375809638 (estimated locally),0.35 per call) BswM_IsValidConfig/2 (751619277 (estimated locally),0.70 per call) Det_ASR40_ReportError/11 (322122547 (estimated locally),0.30 per call) BswM_GetConfigFromPbcfgM/3 (187153200 (estimated locally),0.17 per call) 
BswM_GetConfigFromPbcfgM/3 (BswM_GetConfigFromPbcfgM) @0706c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: BswM_Init/4 (187153200 (estimated locally),0.17 per call) 
  Calls: PbcfgM_GetConfig/12 (1073741824 (estimated locally),1.00 per call) 
BswM_IsValidConfig/2 (BswM_IsValidConfig) @0706c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: BswM_Init/4 (751619277 (estimated locally),0.70 per call) 
  Calls: BswM_IsValidConfig.part.0/18 (66369400 (estimated locally),0.06 per call) TS_PlatformSigIsValid/10 (574129754 (estimated locally),0.53 per call) 
BswM_PostBuildConfig/1 (BswM_PostBuildConfig) @07053120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: BswM_RT_Init.constprop.0/21 (read)BswM_Init/4 (write)BswM_Init/4 (write)BswM_Init/4 (read)
  Availability: available
  Varpool flags:
BswM_LcfgSignature/0 (BswM_LcfgSignature) @070530d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function BswM_IsValidConfig (BswM_IsValidConfig, funcdef_no=0, decl_uid=5484, cgraph_uid=1, symbol_order=2)

Modification phase of node BswM_IsValidConfig/2
BswM_IsValidConfig (const void * voidPtr)
{
  Std_ReturnType result;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 1
  # DEBUG BEGIN_STMT
  # DEBUG ConfigPtr => voidPtr_6(D)
  # DEBUG BEGIN_STMT
  if (voidPtr_6(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 6>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = MEM[(const struct BswM_ConfigType *)voidPtr_6(D)].PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct BswM_ConfigType *)voidPtr_6(D)].CfgSignature;
  if (_3 == 1717689180)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 66369400]:
  result_10 = BswM_IsValidConfig.part.0 (voidPtr_6(D));

  <bb 6> [local count: 1073741824]:
  # result_4 = PHI <1(2), 1(3), 1(4), result_10(5)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  return result_4;

}



;; Function BswM_Init (BswM_Init, funcdef_no=2, decl_uid=5477, cgraph_uid=3, symbol_order=4)

Modification phase of node BswM_Init/4
BswM_Init (const struct BswM_ConfigType * ConfigPtr)
{
  const struct BswM_ConfigType * _1;
  const struct BswM_ConfigType * BswM_PostBuildConfig.0_2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG inst => &BswM_Context
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (ConfigPtr_9(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  _1 = BswM_GetConfigFromPbcfgM ();
  BswM_PostBuildConfig = _1;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588623]:
  # DEBUG BEGIN_STMT
  BswM_PostBuildConfig = ConfigPtr_9(D);

  <bb 5> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  BswM_PostBuildConfig.0_2 = BswM_PostBuildConfig;
  if (BswM_PostBuildConfig.0_2 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 6> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  _3 = BswM_Context.ID;
  Det_ASR40_ReportError (42, _3, 0, 2);
  goto <bb 10>; [100.00%]

  <bb 7> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _4 = BswM_IsValidConfig (BswM_PostBuildConfig.0_2);
  if (_4 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  _5 = BswM_Context.ID;
  Det_ASR40_ReportError (42, _5, 0, 6);
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  BswM_Core_Init ();

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function BswM_GetInstance (BswM_GetInstance, funcdef_no=4, decl_uid=9900, cgraph_uid=5, symbol_order=6)

Modification phase of node BswM_GetInstance/6
BswM_GetInstance ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return &BswM_Context;

}



;; Function BswM_ExecuteModeArbitration (BswM_ExecuteModeArbitration, funcdef_no=7, decl_uid=9898, cgraph_uid=8, symbol_order=9)

Modification phase of node BswM_ExecuteModeArbitration/9
BswM_ExecuteModeArbitration (struct BswM_PartitionContextType * inst, void * port, uint32 mode, uint8 type)
{
  boolean activatedActionLists[17];
  boolean hasActivatedActionLists;
  struct BswMBasicPortType * base;
  void (*<T5bb>) (void) _1;
  unsigned char _2;
  short unsigned int _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  unsigned char _7;
  void (*<T5bb>) (void) _8;

  <bb 2> [local count: 1073527118]:
  # DEBUG BEGIN_STMT
  # DEBUG base => 0B
  # DEBUG BEGIN_STMT
  # DEBUG hasActivatedActionLists => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TS_MemSet32 (&activatedActionLists, 0, 17);
  # DEBUG BEGIN_STMT
  _1 = inst_15(D)->SchMEnter;
  _1 ();
  # DEBUG BEGIN_STMT
  switch (type_17(D)) <default: <L11> [16.67%], case 0: <L0> [16.67%], case 1: <L1> [16.67%], case 2: <L2> [16.67%], case 3: <L3> [16.67%], case 128: <L4> [16.67%]>

  <bb 3> [local count: 178956970]:
<L0>:
  # DEBUG BEGIN_STMT
  # DEBUG ref => port_18(D)
  # DEBUG BEGIN_STMT
  base_28 = &MEM[(struct BswMModeRequestPortType *)port_18(D)].base;
  # DEBUG base => base_28
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) mode_20(D);
  MEM[(struct BswMModeRequestPortType *)port_18(D)].mode = _2;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 4> [local count: 178956970]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG ref => port_18(D)
  # DEBUG BEGIN_STMT
  base_26 = &MEM[(struct BswMGenericRequestPortType *)port_18(D)].base;
  # DEBUG base => base_26
  # DEBUG BEGIN_STMT
  _3 = (short unsigned int) mode_20(D);
  MEM[(struct BswMGenericRequestPortType *)port_18(D)].mode = _3;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 178956970]:
<L2>:
  # DEBUG BEGIN_STMT
  # DEBUG ref => port_18(D)
  # DEBUG BEGIN_STMT
  base_24 = &MEM[(struct BswMJ1939NmStateChangeNotificationPortType *)port_18(D)].base;
  # DEBUG base => base_24
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) mode_20(D);
  MEM[(struct BswMJ1939NmStateChangeNotificationPortType *)port_18(D)].mode = _4;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 178956970]:
<L3>:
  # DEBUG BEGIN_STMT
  # DEBUG ref => port_18(D)
  # DEBUG BEGIN_STMT
  base_22 = &MEM[(struct BswMComMPncRequestPortType *)port_18(D)].base;
  # DEBUG base => base_22
  # DEBUG BEGIN_STMT
  _5 = (unsigned char) mode_20(D);
  MEM[(struct BswMComMPncRequestPortType *)port_18(D)].mode = _5;
  # DEBUG BEGIN_STMT
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 178956970]:
<L4>:
  # DEBUG BEGIN_STMT
  # DEBUG ref => port_18(D)
  # DEBUG BEGIN_STMT
  base_19 = &MEM[(struct BswMUInt8RteModeRequestPortType *)port_18(D)].base;
  # DEBUG base => base_19
  # DEBUG BEGIN_STMT
  _6 = (unsigned char) mode_20(D);
  MEM[(struct BswMUInt8RteModeRequestPortType *)port_18(D)].mode = _6;
  # DEBUG BEGIN_STMT

  <bb 8> [local count: 1073741823]:
  # base_9 = PHI <base_28(3), base_26(4), base_24(5), base_22(6), base_19(7), 0B(2)>
<L11>:
  # DEBUG base => base_9
  # DEBUG BEGIN_STMT
  _7 = BswM_PortUpdated (base_9, &activatedActionLists, inst_15(D));
  if (_7 == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG hasActivatedActionLists => 1

  <bb 10> [local count: 1073741824]:
  # hasActivatedActionLists_10 = PHI <0(8), 1(9)>
  # DEBUG hasActivatedActionLists => hasActivatedActionLists_10
  # DEBUG BEGIN_STMT
  _8 = inst_15(D)->SchMExit;
  _8 ();
  # DEBUG BEGIN_STMT
  if (hasActivatedActionLists_10 == 1)
    goto <bb 11>; [20.24%]
  else
    goto <bb 12>; [79.76%]

  <bb 11> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  BswM_ExecuteModeControl (&activatedActionLists, inst_15(D));

  <bb 12> [local count: 1073741824]:
  activatedActionLists ={v} {CLOBBER};
  return;

}


