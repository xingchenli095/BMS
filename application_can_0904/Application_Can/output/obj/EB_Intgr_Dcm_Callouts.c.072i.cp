
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Read_Time_Stamp_Hook_OnGoOffOneB/18:
  Jump functions of caller  Read_Time_Stamp_Hook_OnGoOffOneA/17:
  Jump functions of caller  Read_Time_Stamp_Hook_OnPrpShutdown/16:
  Jump functions of caller  Read_Time_Stamp_Hook_OnPostRun/15:
  Jump functions of caller  Read_Time_Stamp_Hook_OnRunTwo/14:
  Jump functions of caller  Read_Time_Stamp_Hook_OnStartupTwoB/13:
  Jump functions of caller  Read_Time_Stamp_Hook_OnStartupTwoA/12:
  Jump functions of caller  ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/11:
  Jump functions of caller  Dcm_Internalf191Readout/10:
  Jump functions of caller  PROG_ApplicationPresent/9:
  Jump functions of caller  PROG_ReqCheckProgPreCondition/8:
  Jump functions of caller  Dcm_DcmDsdSidTabFnc/7:
  Jump functions of caller  Dcm_GetProgConditions/6:
  Jump functions of caller  Dcm_SetProgConditions/5:
  Jump functions of caller  Rte_DcmSecSetNumAtt/4:
  Jump functions of caller  Rte_DcmSecGetNumAtt/3:

 Propagating constants:

Not considering Read_Time_Stamp_Hook_OnGoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering Read_Time_Stamp_Hook_OnGoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering Read_Time_Stamp_Hook_OnPrpShutdown for cloning; -fipa-cp-clone disabled.
Not considering Read_Time_Stamp_Hook_OnPostRun for cloning; -fipa-cp-clone disabled.
Not considering Read_Time_Stamp_Hook_OnRunTwo for cloning; -fipa-cp-clone disabled.
Not considering Read_Time_Stamp_Hook_OnStartupTwoB for cloning; -fipa-cp-clone disabled.
Not considering Read_Time_Stamp_Hook_OnStartupTwoA for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Internalf191Readout for cloning; -fipa-cp-clone disabled.
Not considering PROG_ApplicationPresent for cloning; -fipa-cp-clone disabled.
Not considering PROG_ReqCheckProgPreCondition for cloning; -fipa-cp-clone disabled.
Not considering Dcm_DcmDsdSidTabFnc for cloning; -fipa-cp-clone disabled.
Not considering Dcm_GetProgConditions for cloning; -fipa-cp-clone disabled.
Not considering Dcm_SetProgConditions for cloning; -fipa-cp-clone disabled.
Not considering Rte_DcmSecSetNumAtt for cloning; -fipa-cp-clone disabled.
Not considering Rte_DcmSecGetNumAtt for cloning; -fipa-cp-clone disabled.

overall_size: 143, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Read_Time_Stamp_Hook_OnGoOffOneB/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Read_Time_Stamp_Hook_OnGoOffOneA/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Read_Time_Stamp_Hook_OnPrpShutdown/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Read_Time_Stamp_Hook_OnPostRun/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Read_Time_Stamp_Hook_OnRunTwo/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Read_Time_Stamp_Hook_OnStartupTwoB/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Read_Time_Stamp_Hook_OnStartupTwoA/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/11:
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
  Node: Dcm_Internalf191Readout/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PROG_ApplicationPresent/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PROG_ReqCheckProgPreCondition/8:
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
  Node: Dcm_DcmDsdSidTabFnc/7:
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
  Node: Dcm_GetProgConditions/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_SetProgConditions/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Rte_DcmSecSetNumAtt/4:
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
  Node: Rte_DcmSecGetNumAtt/3:
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

TimeStamp/19 (TimeStamp) @06bca1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Read_Time_Stamp_Hook_OnPrpShutdown/16 (read)Read_Time_Stamp_Hook_OnPrpShutdown/16 (read)Read_Time_Stamp_Hook_OnPrpShutdown/16 (read)Read_Time_Stamp_Hook_OnPrpShutdown/16 (read)Read_Time_Stamp_Hook_OnGoOffOneA/17 (read)Read_Time_Stamp_Hook_OnGoOffOneA/17 (read)Read_Time_Stamp_Hook_OnGoOffOneA/17 (read)Read_Time_Stamp_Hook_OnGoOffOneA/17 (read)Read_Time_Stamp_Hook_OnStartupTwoA/12 (read)Read_Time_Stamp_Hook_OnStartupTwoA/12 (read)Read_Time_Stamp_Hook_OnStartupTwoA/12 (read)Read_Time_Stamp_Hook_OnStartupTwoA/12 (read)Read_Time_Stamp_Hook_OnStartupTwoB/13 (read)Read_Time_Stamp_Hook_OnStartupTwoB/13 (read)Read_Time_Stamp_Hook_OnStartupTwoB/13 (read)Read_Time_Stamp_Hook_OnStartupTwoB/13 (read)Read_Time_Stamp_Hook_OnRunTwo/14 (read)Read_Time_Stamp_Hook_OnRunTwo/14 (read)Read_Time_Stamp_Hook_OnRunTwo/14 (read)Read_Time_Stamp_Hook_OnRunTwo/14 (read)Read_Time_Stamp_Hook_OnPostRun/15 (read)Read_Time_Stamp_Hook_OnPostRun/15 (read)Read_Time_Stamp_Hook_OnPostRun/15 (read)Read_Time_Stamp_Hook_OnPostRun/15 (read)Read_Time_Stamp_Hook_OnGoOffOneB/18 (read)Read_Time_Stamp_Hook_OnGoOffOneB/18 (read)Read_Time_Stamp_Hook_OnGoOffOneB/18 (read)Read_Time_Stamp_Hook_OnGoOffOneB/18 (read)
  Availability: not_available
  Varpool flags:
Read_Time_Stamp_Hook_OnGoOffOneB/18 (Read_Time_Stamp_Hook_OnGoOffOneB) @06bc2540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Read_Time_Stamp_Hook_OnGoOffOneA/17 (Read_Time_Stamp_Hook_OnGoOffOneA) @06bc2380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Read_Time_Stamp_Hook_OnPrpShutdown/16 (Read_Time_Stamp_Hook_OnPrpShutdown) @06bc21c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Read_Time_Stamp_Hook_OnPostRun/15 (Read_Time_Stamp_Hook_OnPostRun) @06bc2000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Read_Time_Stamp_Hook_OnRunTwo/14 (Read_Time_Stamp_Hook_OnRunTwo) @06b6be00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Read_Time_Stamp_Hook_OnStartupTwoB/13 (Read_Time_Stamp_Hook_OnStartupTwoB) @06b6bc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Read_Time_Stamp_Hook_OnStartupTwoA/12 (Read_Time_Stamp_Hook_OnStartupTwoA) @06b6ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)TimeStamp/19 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/11 (ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData) @06b6b8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DidF191_VIN_Data/0 (read)
  Referring: 
  Availability: available
  Function flags: count:270135955 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Internalf191Readout/10 (Dcm_Internalf191Readout) @06b6b700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: DidF191_VIN_Data/0 (read)
  Referring: 
  Availability: available
  Function flags: count:59700046 (estimated locally) body optimize_size
  Called by: 
  Calls: 
PROG_ApplicationPresent/9 (PROG_ApplicationPresent) @06b6b540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
PROG_ReqCheckProgPreCondition/8 (PROG_ReqCheckProgPreCondition) @06b6b380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_DcmDsdSidTabFnc/7 (Dcm_DcmDsdSidTabFnc) @06b6b1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_GetProgConditions/6 (Dcm_GetProgConditions) @06b6b000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_SetProgConditions/5 (Dcm_SetProgConditions) @06b22ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: m_ulProgSig/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Rte_DcmSecSetNumAtt/4 (Rte_DcmSecSetNumAtt) @06b22d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Rte_DcmSecGetNumAtt/3 (Rte_DcmSecGetNumAtt) @06b22b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
m_ulProgSig/2 (m_ulProgSig) @06ac5ee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_SetProgConditions/5 (write)
  Availability: available
  Varpool flags: write-only
DidF190_DefaultData/1 (DidF190_DefaultData) @06ac5ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
DidF191_VIN_Data/0 (DidF191_VIN_Data) @06ac5e10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Dcm_Internalf191Readout/10 (read)ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/11 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Rte_DcmSecGetNumAtt (Rte_DcmSecGetNumAtt, funcdef_no=0, decl_uid=5778, cgraph_uid=1, symbol_order=3)

Modification phase of node Rte_DcmSecGetNumAtt/3
Rte_DcmSecGetNumAtt (Dcm_SecLevelType SecurityLevel)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Rte_DcmSecSetNumAtt (Rte_DcmSecSetNumAtt, funcdef_no=1, decl_uid=5782, cgraph_uid=2, symbol_order=4)

Modification phase of node Rte_DcmSecSetNumAtt/4
Rte_DcmSecSetNumAtt (Dcm_SecLevelType SecurityLevel, uint8 NumAtt)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_SetProgConditions (Dcm_SetProgConditions, funcdef_no=2, decl_uid=5744, cgraph_uid=3, symbol_order=5)

Modification phase of node Dcm_SetProgConditions/5
Dcm_SetProgConditions (struct Dcm_ProgConditionsType * ProgConditions)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  m_ulProgSig = 1437226410;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dcm_GetProgConditions (Dcm_GetProgConditions, funcdef_no=3, decl_uid=5746, cgraph_uid=4, symbol_order=6)

Modification phase of node Dcm_GetProgConditions/6
Dcm_GetProgConditions (struct Dcm_ProgConditionsType * ProgConditions)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dcm_DcmDsdSidTabFnc (Dcm_DcmDsdSidTabFnc, funcdef_no=4, decl_uid=5792, cgraph_uid=5, symbol_order=7)

Modification phase of node Dcm_DcmDsdSidTabFnc/7
Dcm_DcmDsdSidTabFnc (Dcm_OpStatusType OpStatus, struct Dcm_MsgContextType * pMsgContext)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function PROG_ReqCheckProgPreCondition (PROG_ReqCheckProgPreCondition, funcdef_no=5, decl_uid=5796, cgraph_uid=6, symbol_order=8)

Modification phase of node PROG_ReqCheckProgPreCondition/8
PROG_ReqCheckProgPreCondition (Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType * ErrorCode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function PROG_ApplicationPresent (PROG_ApplicationPresent, funcdef_no=6, decl_uid=5799, cgraph_uid=7, symbol_order=9)

Modification phase of node PROG_ApplicationPresent/9
PROG_ApplicationPresent (uint8 * Data)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  *Data_2(D) = 235;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dcm_Internalf191Readout (Dcm_Internalf191Readout, funcdef_no=7, decl_uid=5802, cgraph_uid=8, symbol_order=10)

Modification phase of node Dcm_Internalf191Readout/10
Dcm_Internalf191Readout (uint8 * Data)
{
  uint8 DataPosition;
  int _1;
  sizetype _2;
  uint8 * _3;
  unsigned char _4;

  <bb 2> [local count: 59700046]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG DataPosition => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 1014041779]:
  # DEBUG BEGIN_STMT
  _1 = (int) DataPosition_5;
  _2 = (sizetype) DataPosition_5;
  _3 = Data_8(D) + _2;
  _4 = DidF191_VIN_Data[_1];
  *_3 = _4;
  # DEBUG BEGIN_STMT
  DataPosition_10 = DataPosition_5 + 1;
  # DEBUG DataPosition => DataPosition_10

  <bb 4> [local count: 1073741824]:
  # DataPosition_5 = PHI <0(2), DataPosition_10(3)>
  # DEBUG DataPosition => DataPosition_5
  # DEBUG BEGIN_STMT
  if (DataPosition_5 != 17)
    goto <bb 3>; [94.44%]
  else
    goto <bb 5>; [5.56%]

  <bb 5> [local count: 59700045]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData (ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData, funcdef_no=8, decl_uid=5810, cgraph_uid=9, symbol_order=11)

Modification phase of node ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/11
ServiceSwComponentDcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData (Dcm_OpStatusType OpStatus, uint8 * DataValueBuffer)
{
  uint8 DataPosition;
  Std_ReturnType ReturnValue;
  int _1;
  sizetype _2;
  uint8 * _3;
  unsigned char _4;

  <bb 2> [local count: 270135955]:
  # DEBUG BEGIN_STMT
  # DEBUG ReturnValue => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (OpStatus_9(D) == 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 175588371]:
  # DEBUG BEGIN_STMT
  if (OpStatus_9(D) == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 7> [local count: 59700046]:
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 1014041779]:
  # DEBUG BEGIN_STMT
  _1 = (int) DataPosition_6;
  _2 = (sizetype) DataPosition_6;
  _3 = DataValueBuffer_11(D) + _2;
  _4 = DidF191_VIN_Data[_1];
  *_3 = _4;
  # DEBUG BEGIN_STMT
  DataPosition_13 = DataPosition_6 + 1;
  # DEBUG DataPosition => DataPosition_13

  <bb 5> [local count: 1073741824]:
  # DataPosition_6 = PHI <DataPosition_13(4), 0(7)>
  # DEBUG ReturnValue => NULL
  # DEBUG DataPosition => DataPosition_6
  # DEBUG BEGIN_STMT
  if (DataPosition_6 != 17)
    goto <bb 4>; [94.44%]
  else
    goto <bb 6>; [5.56%]

  <bb 6> [local count: 270135955]:
  # ReturnValue_5 = PHI <10(2), 0(3), 0(5)>
  # DEBUG ReturnValue => ReturnValue_5
  # DEBUG BEGIN_STMT
  return ReturnValue_5;

}



;; Function Read_Time_Stamp_Hook_OnStartupTwoA (Read_Time_Stamp_Hook_OnStartupTwoA, funcdef_no=9, decl_uid=5818, cgraph_uid=10, symbol_order=12)

Modification phase of node Read_Time_Stamp_Hook_OnStartupTwoA/12
Read_Time_Stamp_Hook_OnStartupTwoA (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnStartupTwoA;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnStartupTwoA;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnStartupTwoA;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnStartupTwoA;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Read_Time_Stamp_Hook_OnStartupTwoB (Read_Time_Stamp_Hook_OnStartupTwoB, funcdef_no=10, decl_uid=5821, cgraph_uid=11, symbol_order=13)

Modification phase of node Read_Time_Stamp_Hook_OnStartupTwoB/13
Read_Time_Stamp_Hook_OnStartupTwoB (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnStartupTwoB;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnStartupTwoB;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnStartupTwoB;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnStartupTwoB;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Read_Time_Stamp_Hook_OnRunTwo (Read_Time_Stamp_Hook_OnRunTwo, funcdef_no=11, decl_uid=5824, cgraph_uid=12, symbol_order=14)

Modification phase of node Read_Time_Stamp_Hook_OnRunTwo/14
Read_Time_Stamp_Hook_OnRunTwo (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnRunTwo;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnRunTwo;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnRunTwo;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnRunTwo;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Read_Time_Stamp_Hook_OnPostRun (Read_Time_Stamp_Hook_OnPostRun, funcdef_no=12, decl_uid=5827, cgraph_uid=13, symbol_order=15)

Modification phase of node Read_Time_Stamp_Hook_OnPostRun/15
Read_Time_Stamp_Hook_OnPostRun (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnPostRun;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnPostRun;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnPostRun;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnPostRun;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Read_Time_Stamp_Hook_OnPrpShutdown (Read_Time_Stamp_Hook_OnPrpShutdown, funcdef_no=13, decl_uid=5830, cgraph_uid=14, symbol_order=16)

Modification phase of node Read_Time_Stamp_Hook_OnPrpShutdown/16
Read_Time_Stamp_Hook_OnPrpShutdown (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnPrpShutdown;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnPrpShutdown;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnPrpShutdown;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnPrpShutdown;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Read_Time_Stamp_Hook_OnGoOffOneA (Read_Time_Stamp_Hook_OnGoOffOneA, funcdef_no=14, decl_uid=5833, cgraph_uid=15, symbol_order=17)

Modification phase of node Read_Time_Stamp_Hook_OnGoOffOneA/17
Read_Time_Stamp_Hook_OnGoOffOneA (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnGoOffOneA;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnGoOffOneA;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnGoOffOneA;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnGoOffOneA;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Read_Time_Stamp_Hook_OnGoOffOneB (Read_Time_Stamp_Hook_OnGoOffOneB, funcdef_no=15, decl_uid=5836, cgraph_uid=16, symbol_order=18)

Modification phase of node Read_Time_Stamp_Hook_OnGoOffOneB/18
Read_Time_Stamp_Hook_OnGoOffOneB (uint8 * Data)
{
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  unsigned char _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = TimeStamp.Time_Stamp_Hook_OnGoOffOneB;
  _2 = (unsigned char) _1;
  *Data_13(D) = _2;
  # DEBUG BEGIN_STMT
  _3 = TimeStamp.Time_Stamp_Hook_OnGoOffOneB;
  _4 = _3 >> 8;
  _5 = (unsigned char) _4;
  MEM[(uint8 *)Data_13(D) + 1B] = _5;
  # DEBUG BEGIN_STMT
  _6 = TimeStamp.Time_Stamp_Hook_OnGoOffOneB;
  _7 = _6 >> 16;
  _8 = (unsigned char) _7;
  MEM[(uint8 *)Data_13(D) + 2B] = _8;
  # DEBUG BEGIN_STMT
  _9 = TimeStamp.Time_Stamp_Hook_OnGoOffOneB;
  _10 = _9 >> 24;
  _11 = (unsigned char) _10;
  MEM[(uint8 *)Data_13(D) + 3B] = _11;
  # DEBUG BEGIN_STMT
  return 0;

}


