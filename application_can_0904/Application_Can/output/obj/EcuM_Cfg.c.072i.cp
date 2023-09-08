
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0/33:
  Jump functions of caller  SchM_Enter_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0/32:
  Jump functions of caller  Wdg_Init/31:
  Jump functions of caller  PbcfgM_Init/29:
  Jump functions of caller  Port_Init/27:
  Jump functions of caller  Eb_Intgr_McuArchClockInit_Init/26:
  Jump functions of caller  Mcu_Init/24:
  Jump functions of caller  Dem_PreInit/22:
  Jump functions of caller  OsIf_Init/21:
  Jump functions of caller  Det_Init/19:
  Jump functions of caller  EcuM_DriverInitListOneCall/18:
  Jump functions of caller  EcuM_GetMasterCoreInstance/17:
  Jump functions of caller  EcuM_GetCoreInstance/16:
  Jump functions of caller  EcuM_ExitExclusiveArea/13:
  Jump functions of caller  EcuM_EnterExclusiveArea/12:
  Jump functions of caller  EcuM_DefaultInitListOne/11:
    callsite  EcuM_DefaultInitListOne/11 -> EcuM_DriverInitListOneCall/18 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  EcuM_DefaultInitListZero/10:

 Propagating constants:

Function EcuM_GetMasterCoreInstance/17 is not versionable, reason: not a tree_versionable_function.
Not considering EcuM_GetCoreInstance for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ExitExclusiveArea for cloning; -fipa-cp-clone disabled.
Not considering EcuM_EnterExclusiveArea for cloning; -fipa-cp-clone disabled.
Not considering EcuM_DefaultInitListOne for cloning; -fipa-cp-clone disabled.
Not considering EcuM_DefaultInitListZero for cloning; -fipa-cp-clone disabled.

overall_size: 66, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: EcuM_DriverInitListOneCall/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: EcuM_GetMasterCoreInstance/17:
  Node: EcuM_GetCoreInstance/16:
  Node: EcuM_ExitExclusiveArea/13:
  Node: EcuM_EnterExclusiveArea/12:
  Node: EcuM_DefaultInitListOne/11:
  Node: EcuM_DefaultInitListZero/10:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0/33 (SchM_Exit_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0) @07482c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ExitExclusiveArea/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0/32 (SchM_Enter_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0) @074829a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_EnterExclusiveArea/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Wdg_Init/31 (Wdg_Init) @07482700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
PbcfgM_Config/30 (PbcfgM_Config) @0747ec18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_DriverInitListOneCall/18 (addr)
  Availability: not_available
  Varpool flags: read-only
PbcfgM_Init/29 (PbcfgM_Init) @07482620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
Port_Config/28 (Port_Config) @0747eb88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_DriverInitListOneCall/18 (addr)
  Availability: not_available
  Varpool flags: read-only
Port_Init/27 (Port_Init) @07482540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
Eb_Intgr_McuArchClockInit_Init/26 (Eb_Intgr_McuArchClockInit_Init) @07482460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
Mcu_Config/25 (Mcu_Config) @0747eab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_DriverInitListOneCall/18 (addr)
  Availability: not_available
  Varpool flags: read-only
Mcu_Init/24 (Mcu_Init) @07482380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
DemConfigSet/23 (DemConfigSet) @0747ea20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_DriverInitListOneCall/18 (addr)
  Availability: not_available
  Varpool flags: read-only
Dem_PreInit/22 (Dem_PreInit) @074822a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
OsIf_Init/21 (OsIf_Init) @074821c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DriverInitListOneCall/18 (134217728 (estimated locally),0.12 per call) 
  Calls: 
EcuM_ConfigPtr/20 (EcuM_ConfigPtr) @0747e4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: EcuM_DefaultInitListOne/11 (read)
  Availability: not_available
  Varpool flags:
Det_Init/19 (Det_Init) @0722fee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_DefaultInitListZero/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_DriverInitListOneCall/18 (EcuM_DriverInitListOneCall) @0722fd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: DemConfigSet/23 (addr)Mcu_Config/25 (addr)Port_Config/28 (addr)PbcfgM_Config/30 (addr)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: EcuM_DefaultInitListOne/11 (955630223 (estimated locally),8.09 per call) 
  Calls: Wdg_Init/31 (134217728 (estimated locally),0.12 per call) PbcfgM_Init/29 (134217728 (estimated locally),0.12 per call) Port_Init/27 (134217728 (estimated locally),0.12 per call) Eb_Intgr_McuArchClockInit_Init/26 (134217728 (estimated locally),0.12 per call) Mcu_Init/24 (134217728 (estimated locally),0.12 per call) Dem_PreInit/22 (134217728 (estimated locally),0.12 per call) OsIf_Init/21 (134217728 (estimated locally),0.12 per call) 
EcuM_GetMasterCoreInstance/17 (EcuM_GetMasterCoreInstance) @0722fb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: EcuM_GetCoreInstance/16 (1073741824 (estimated locally),1.00 per call) 
EcuM_GetCoreInstance/16 (EcuM_GetCoreInstance) @0722f9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_Core0_Context/8 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: EcuM_GetMasterCoreInstance/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ExitExclusiveArea/13 (EcuM_ExitExclusiveArea) @0722f460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0/33 (1073741824 (estimated locally),1.00 per call) 
EcuM_EnterExclusiveArea/12 (EcuM_EnterExclusiveArea) @0722f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Enter_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0/32 (1073741824 (estimated locally),1.00 per call) 
EcuM_DefaultInitListOne/11 (EcuM_DefaultInitListOne) @0722f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_ConfigPtr/20 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_DriverInitListOneCall/18 (955630223 (estimated locally),8.09 per call) 
EcuM_DefaultInitListZero/10 (EcuM_DefaultInitListZero) @07222e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_Init/19 (1073741824 (estimated locally),1.00 per call) 
EcuM_ShutdownInfo/9 (EcuM_ShutdownInfo) @07440e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized
EcuM_Core0_Context/8 (EcuM_Core0_Context) @07440e10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: EcuM_GetCoreInstance/16 (addr)
  Availability: available
  Varpool flags:
EcuM_InitialContext/7 (EcuM_InitialContext) @07440dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
EcuM_ValidShutdownCause/6 (EcuM_ValidShutdownCause) @07440ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
EcuM_DemErrRamChkFailed/5 (EcuM_DemErrRamChkFailed) @07440c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
EcuM_SleepModeConfigList/4 (EcuM_SleepModeConfigList) @07440c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
EcuM_WksConfigList/3 (EcuM_WksConfigList) @07440bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
EcuM_WksValTimeout/2 (EcuM_WksValTimeout) @07440b40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
EcuM_WksMapping/1 (EcuM_WksMapping) @07440ab0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function EcuM_DefaultInitListZero (EcuM_DefaultInitListZero, funcdef_no=1, decl_uid=9082, cgraph_uid=2, symbol_order=10)

Modification phase of node EcuM_DefaultInitListZero/10
EcuM_DefaultInitListZero ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Det_Init ();
  return;

}



;; Function EcuM_DefaultInitListOne (EcuM_DefaultInitListOne, funcdef_no=2, decl_uid=9088, cgraph_uid=3, symbol_order=11)

Modification phase of node EcuM_DefaultInitListOne/11
EcuM_DefaultInitListOne ()
{
  uint8 i;
  long unsigned int _1;
  sizetype _2;
  sizetype _3;
  const uint8 * _4;
  unsigned char _5;
  const struct EcuM_ConfigType * EcuM_ConfigPtr.3_6;
  unsigned char _7;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = EcuM_ConfigPtr.3_6->PtrDriverInitListOne;
  _2 = (sizetype) i_8;
  _3 = _1 + _2;
  _4 = EcuM_ConfigPtr.3_6 + _3;
  _5 = *_4;
  EcuM_DriverInitListOneCall (_5);
  # DEBUG BEGIN_STMT
  i_12 = i_8 + 1;
  # DEBUG i => i_12

  <bb 4> [local count: 1073741824]:
  # i_8 = PHI <0(2), i_12(3)>
  # DEBUG i => i_8
  # DEBUG BEGIN_STMT
  EcuM_ConfigPtr.3_6 = EcuM_ConfigPtr;
  _7 = EcuM_ConfigPtr.3_6->NumDriversInitListOne;
  if (_7 > i_8)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}



;; Function EcuM_EnterExclusiveArea (EcuM_EnterExclusiveArea, funcdef_no=3, decl_uid=9907, cgraph_uid=4, symbol_order=12)

Modification phase of node EcuM_EnterExclusiveArea/12
EcuM_EnterExclusiveArea ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY EcuM_Enter_SCHM_ECUM_EXCLUSIVE_AREA_0
  # DEBUG BEGIN_STMT
  SchM_Enter_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function EcuM_ExitExclusiveArea (EcuM_ExitExclusiveArea, funcdef_no=4, decl_uid=9909, cgraph_uid=5, symbol_order=13)

Modification phase of node EcuM_ExitExclusiveArea/13
EcuM_ExitExclusiveArea ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY EcuM_Exit_SCHM_ECUM_EXCLUSIVE_AREA_0
  # DEBUG BEGIN_STMT
  SchM_Exit_EcuM_SCHM_ECUM_EXCLUSIVE_AREA_0 ();
  return;

}



;; Function EcuM_GetCoreInstance (EcuM_GetCoreInstance, funcdef_no=7, decl_uid=9911, cgraph_uid=8, symbol_order=16)

Modification phase of node EcuM_GetCoreInstance/16
EcuM_GetCoreInstance ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG inst => 0B
  # DEBUG BEGIN_STMT
  # DEBUG inst => &EcuM_Core0_Context
  # DEBUG BEGIN_STMT
  return &EcuM_Core0_Context;

}



;; Function EcuM_GetMasterCoreInstance (EcuM_GetMasterCoreInstance, funcdef_no=11, decl_uid=9913, cgraph_uid=9, symbol_order=17)

Modification phase of node EcuM_GetMasterCoreInstance/17
EcuM_GetMasterCoreInstance ()
{
  struct EcuM_CoreContextType * retval.13;

  <bb 2> [local count: 1073741824]:
  retval.13_1 = EcuM_GetCoreInstance (); [tail call]
  return retval.13_1;

}


