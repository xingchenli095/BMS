
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Port_Ipw_RefreshPortDirection/11:
  Jump functions of caller  Port_Ipw_SetPinMode/10:
  Jump functions of caller  Port_Ipw_SetPinDirection/9:
  Jump functions of caller  Port_Ipw_Init/8:
  Jump functions of caller  Det_ASR40_ReportError/7:
  Jump functions of caller  Port_GetVersionInfo/6:
  Jump functions of caller  Port_RefreshPortDirection/5:
  Jump functions of caller  Port_SetPinMode/4:
  Jump functions of caller  Port_SetPinDirection/3:
  Jump functions of caller  Port_Init/2:

 Propagating constants:

Not considering Port_GetVersionInfo for cloning; -fipa-cp-clone disabled.
Not considering Port_RefreshPortDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_SetPinMode for cloning; -fipa-cp-clone disabled.
Not considering Port_SetPinDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Init for cloning; -fipa-cp-clone disabled.

overall_size: 105, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Port_GetVersionInfo/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_RefreshPortDirection/5:
  Node: Port_SetPinMode/4:
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
  Node: Port_SetPinDirection/3:
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
  Node: Port_Init/2:
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

Port_Ipw_RefreshPortDirection/11 (Port_Ipw_RefreshPortDirection) @070a72a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_RefreshPortDirection/5 (301440132 (estimated locally),0.28 per call) 
  Calls: 
Port_Ipw_SetPinMode/10 (Port_Ipw_SetPinMode) @070a70e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_SetPinMode/4 (751619277 (estimated locally),0.70 per call) 
  Calls: 
Port_Ipw_SetPinDirection/9 (Port_Ipw_SetPinDirection) @070847e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_SetPinDirection/3 (751619277 (estimated locally),0.70 per call) 
  Calls: 
Port_Ipw_Init/8 (Port_Ipw_Init) @07084620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Init/2 (301440132 (estimated locally),0.28 per call) 
  Calls: 
Det_ASR40_ReportError/7 (Det_ASR40_ReportError) @07084540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_GetVersionInfo/6 (187153200 (estimated locally),0.17 per call) Port_RefreshPortDirection/5 (585148493 (estimated locally),0.54 per call) Port_RefreshPortDirection/5 (187153200 (estimated locally),0.17 per call) Port_SetPinMode/4 (152127742 (estimated locally),0.14 per call) Port_SetPinMode/4 (322122547 (estimated locally),0.30 per call) Port_SetPinDirection/3 (152127742 (estimated locally),0.14 per call) Port_SetPinDirection/3 (322122547 (estimated locally),0.30 per call) Port_Init/2 (585148493 (estimated locally),0.54 per call) Port_Init/2 (187153200 (estimated locally),0.17 per call) 
  Calls: 
Port_GetVersionInfo/6 (Port_GetVersionInfo) @07084380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/7 (187153200 (estimated locally),0.17 per call) 
Port_RefreshPortDirection/5 (Port_RefreshPortDirection) @070841c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_pConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ipw_RefreshPortDirection/11 (301440132 (estimated locally),0.28 per call) Det_ASR40_ReportError/7 (585148493 (estimated locally),0.54 per call) Det_ASR40_ReportError/7 (187153200 (estimated locally),0.17 per call) 
Port_SetPinMode/4 (Port_SetPinMode) @07084ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_pConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/7 (152127742 (estimated locally),0.14 per call) Port_Ipw_SetPinMode/10 (751619277 (estimated locally),0.70 per call) Det_ASR40_ReportError/7 (322122547 (estimated locally),0.30 per call) 
Port_SetPinDirection/3 (Port_SetPinDirection) @07084d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_pConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/7 (152127742 (estimated locally),0.14 per call) Port_Ipw_SetPinDirection/9 (751619277 (estimated locally),0.70 per call) Det_ASR40_ReportError/7 (322122547 (estimated locally),0.30 per call) 
Port_Init/2 (Port_Init) @07084b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_pConfigPtr/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ipw_Init/8 (301440132 (estimated locally),0.28 per call) Det_ASR40_ReportError/7 (585148493 (estimated locally),0.54 per call) Det_ASR40_ReportError/7 (187153200 (estimated locally),0.17 per call) 
Port_pConfigPtr/1 (Port_pConfigPtr) @070396c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_SetPinDirection/3 (read)Port_Init/2 (write)Port_SetPinMode/4 (read)Port_RefreshPortDirection/5 (read)
  Availability: available
  Varpool flags: initialized

;; Function Port_Init (Port_Init, funcdef_no=1, decl_uid=8636, cgraph_uid=2, symbol_order=2)

Modification phase of node Port_Init/2
Port_Init (const struct Port_ConfigType * ConfigPtr)
{
  const uint8 * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG pLocalConfigPtr => ConfigPtr_4(D)
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  if (ConfigPtr_4(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 0, 12);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  _1 = ConfigPtr_4(D)->pau8Port_PartitionList;
  _2 = *_1;
  if (_2 != 1)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 585148493]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 0, 240);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 301440132]:
  # DEBUG BEGIN_STMT
  Port_Ipw_Init (ConfigPtr_4(D));
  # DEBUG BEGIN_STMT
  Port_pConfigPtr = ConfigPtr_4(D);

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Port_SetPinDirection (Port_SetPinDirection, funcdef_no=2, decl_uid=8639, cgraph_uid=3, symbol_order=3)

Modification phase of node Port_SetPinDirection/3
Port_SetPinDirection (Port_PinType Pin, Port_PinDirectionType Direction)
{
  Std_ReturnType ErrStatus;
  const struct Port_ConfigType * Port_pConfigPtr.0_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Port_pConfigPtr.0_1 = Port_pConfigPtr;
  if (Port_pConfigPtr.0_1 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 1, 15);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  ErrStatus_7 = Port_Ipw_SetPinDirection (Pin_4(D), Direction_5(D), Port_pConfigPtr.0_1);
  # DEBUG ErrStatus => ErrStatus_7
  # DEBUG BEGIN_STMT
  if (ErrStatus_7 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 152127742]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 1, 11);

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Port_SetPinMode (Port_SetPinMode, funcdef_no=3, decl_uid=8642, cgraph_uid=4, symbol_order=4)

Modification phase of node Port_SetPinMode/4
Port_SetPinMode (Port_PinType Pin, Port_PinModeType Mode)
{
  uint8 u8PinModeError;
  const struct Port_ConfigType * Port_pConfigPtr.2_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG u8PinModeError => 0
  # DEBUG BEGIN_STMT
  Port_pConfigPtr.2_1 = Port_pConfigPtr;
  if (Port_pConfigPtr.2_1 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 4, 15);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  u8PinModeError_7 = Port_Ipw_SetPinMode (Pin_4(D), Mode_5(D), Port_pConfigPtr.2_1);
  # DEBUG u8PinModeError => u8PinModeError_7
  # DEBUG BEGIN_STMT
  if (u8PinModeError_7 == 13)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 152127742]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 4, 13);

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Port_RefreshPortDirection (Port_RefreshPortDirection, funcdef_no=4, decl_uid=8646, cgraph_uid=5, symbol_order=5)

Modification phase of node Port_RefreshPortDirection/5
Port_RefreshPortDirection ()
{
  const struct Port_ConfigType * Port_pConfigPtr.4_1;
  const uint8 * _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  Port_pConfigPtr.4_1 = Port_pConfigPtr;
  if (Port_pConfigPtr.4_1 == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 2, 15);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  _2 = Port_pConfigPtr.4_1->pau8Port_PartitionList;
  _3 = *_2;
  if (_3 != 1)
    goto <bb 5>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 5> [local count: 585148493]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 2, 240);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 301440132]:
  # DEBUG BEGIN_STMT
  Port_Ipw_RefreshPortDirection (Port_pConfigPtr.4_1);

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function Port_GetVersionInfo (Port_GetVersionInfo, funcdef_no=5, decl_uid=8644, cgraph_uid=6, symbol_order=6)

Modification phase of node Port_GetVersionInfo/6
Port_GetVersionInfo (struct Std_VersionInfoType * versioninfo)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (versioninfo_2(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 3, 16);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->vendorID = 43;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->moduleID = 124;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->sw_major_version = 2;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->sw_minor_version = 0;
  # DEBUG BEGIN_STMT
  versioninfo_2(D)->sw_patch_version = 1;

  <bb 5> [local count: 1073741824]:
  return;

}


