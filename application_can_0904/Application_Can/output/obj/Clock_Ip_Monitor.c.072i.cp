
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/23:
  Jump functions of caller  Clock_Ip_TimeoutExpired/22:
  Jump functions of caller  Clock_Ip_StartTimeout/21:
  Jump functions of caller  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/20:
  Jump functions of caller  Clock_Ip_ReportClockErrors/17:
  Jump functions of caller  Clock_Ip_CMU_ClockFailInt/12:
  Jump functions of caller  Clock_Ip_CMU_GetInterruptStatus/11:
  Jump functions of caller  Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10:
  Jump functions of caller  Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9:
  Jump functions of caller  Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8:
  Jump functions of caller  Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7:
  Jump functions of caller  Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6:
    callsite  Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6 -> Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_GetStatus/4:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_ClearStatus/3:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_Disable/2:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty_Set/1:
  Jump functions of caller  Clock_Ip_ClockMonitorEmpty/0:

 Propagating constants:

Not considering Clock_Ip_CMU_ClockFailInt for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CMU_GetInterruptStatus for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_EnableCmuFcFceRefCntLfrefHfref for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetCmuFcFceRefCntLfrefHfref for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetCmuFcFceRefCntLfrefHfref for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_DisableCmuFcFceRefCntLfrefHfref for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty_GetStatus for cloning; -fipa-cp-clone disabled.
Function Clock_Ip_ClockMonitorEmpty_ClearStatus/3 is not versionable, reason: not a tree_versionable_function.
Not considering Clock_Ip_ClockMonitorEmpty_Disable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty_Set for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockMonitorEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 203, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 2, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_CMU_ClockFailInt/12:
  Node: Clock_Ip_CMU_GetInterruptStatus/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7:
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
  Node: Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_GetStatus/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_ClearStatus/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_Disable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ClockMonitorEmpty_Set/1:
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
  Node: Clock_Ip_ClockMonitorEmpty/0:
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

Clock_Ip_FreqIds/25 (Clock_Ip_FreqIds) @06fbbcf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)
  Availability: not_available
  Varpool flags:
Hash.9184/24 (Hash) @06fbbca8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (write)
  Availability: available
  Varpool flags:
SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/23 (SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01) @06fb98c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (348071309 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/22 (Clock_Ip_TimeoutExpired) @06fb97e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/21 (Clock_Ip_StartTimeout) @06fb9700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (114863532 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/20 (SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01) @06fb9620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (348071309 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_axCmuInfo/19 (Clock_Ip_axCmuInfo) @06fbb0d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8 (read)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10 (read)Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9 (read)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/18 (Clock_Ip_au8ClockFeatures) @06fbb090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8 (read)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10 (read)Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9 (read)Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_ReportClockErrors/17 (Clock_Ip_ReportClockErrors) @06fb90e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CMU_ClockFailInt/12 (198427489 (estimated locally),0.92 per call) Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (37904965 (estimated locally),0.11 per call) 
  Calls: 
Clock_Ip_aeCmuNames/16 (Clock_Ip_aeCmuNames) @06f7be10
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CMU_ClockFailInt/12 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_pxConfig/15 (Clock_Ip_pxConfig) @06f7bdc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (read)Clock_Ip_CMU_ClockFailInt/12 (read)
  Availability: not_available
  Varpool flags:
Clock_Ip_apxCmu/14 (Clock_Ip_apxCmu) @06f7baf8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CMU_GetInterruptStatus/11 (read)Clock_Ip_CMU_ClockFailInt/12 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axCmuCallbacks/13 (Clock_Ip_axCmuCallbacks) @06f7b948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ClockMonitorEmpty/0 (addr)Clock_Ip_ClockMonitorEmpty_Set/1 (addr)Clock_Ip_ClockMonitorEmpty_Disable/2 (addr)Clock_Ip_ClockMonitorEmpty_ClearStatus/3 (addr)Clock_Ip_ClockMonitorEmpty_GetStatus/4 (addr)Clock_Ip_ClockMonitorEmpty/0 (addr)Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6 (addr)Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (addr)Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (addr)Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8 (addr)Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9 (addr)Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_CMU_ClockFailInt/12 (Clock_Ip_CMU_ClockFailInt) @06f9cd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_apxCmu/14 (read)Clock_Ip_pxConfig/15 (read)Clock_Ip_aeCmuNames/16 (read)
  Referring: 
  Availability: available
  Function flags: count:214748364 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_ReportClockErrors/17 (198427489 (estimated locally),0.92 per call) 
Clock_Ip_CMU_GetInterruptStatus/11 (Clock_Ip_CMU_GetInterruptStatus) @06f9cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_apxCmu/14 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10 (Clock_Ip_EnableCmuFcFceRefCntLfrefHfref) @06f9c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/18 (read)Clock_Ip_axCmuInfo/19 (read)
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9 (Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref) @06f9c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/18 (read)Clock_Ip_axCmuInfo/19 (read)
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8 (Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref) @06f9c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/18 (read)Clock_Ip_axCmuInfo/19 (read)
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7 (Clock_Ip_SetCmuFcFceRefCntLfrefHfref) @06f9c460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/18 (read)Clock_Ip_axCmuInfo/19 (read)Hash.9184/24 (read)Hash.9184/24 (write)Clock_Ip_pxConfig/15 (read)Clock_Ip_axCmuInfo/19 (read)Clock_Ip_FreqIds/25 (read)Clock_Ip_axCmuInfo/19 (read)Clock_Ip_FreqIds/25 (read)
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6 (Clock_Ip_ResetCmuFcFceRefCntLfrefHfref) @06f9c2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5 (Clock_Ip_DisableCmuFcFceRefCntLfrefHfref) @06f9c0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/18 (read)Clock_Ip_axCmuInfo/19 (read)
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01/23 (348071309 (estimated locally),1.00 per call) Clock_Ip_ReportClockErrors/17 (37904965 (estimated locally),0.11 per call) Clock_Ip_TimeoutExpired/22 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/21 (114863532 (estimated locally),0.33 per call) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01/20 (348071309 (estimated locally),1.00 per call) 
Clock_Ip_ClockMonitorEmpty_GetStatus/4 (Clock_Ip_ClockMonitorEmpty_GetStatus) @06f97ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockMonitorEmpty_ClearStatus/3 (Clock_Ip_ClockMonitorEmpty_ClearStatus) @06f97d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_ClockMonitorEmpty_Disable/2 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ClockMonitorEmpty_Disable/2 (Clock_Ip_ClockMonitorEmpty_Disable) @06f97b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_ClockMonitorEmpty_ClearStatus/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_ClockMonitorEmpty_Set/1 (Clock_Ip_ClockMonitorEmpty_Set) @06f979a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockMonitorEmpty/0 (Clock_Ip_ClockMonitorEmpty) @06f977e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axCmuCallbacks/13 (addr)Clock_Ip_axCmuCallbacks/13 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ClockMonitorEmpty (Clock_Ip_ClockMonitorEmpty, funcdef_no=0, decl_uid=9124, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ClockMonitorEmpty/0
Clock_Ip_ClockMonitorEmpty (const struct Clock_Ip_CmuConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_Set (Clock_Ip_ClockMonitorEmpty_Set, funcdef_no=1, decl_uid=9127, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_ClockMonitorEmpty_Set/1
Clock_Ip_ClockMonitorEmpty_Set (const struct Clock_Ip_CmuConfigType * Config, uint32 Index)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_Disable (Clock_Ip_ClockMonitorEmpty_Disable, funcdef_no=2, decl_uid=9129, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_ClockMonitorEmpty_Disable/2
Clock_Ip_ClockMonitorEmpty_Disable (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_GetStatus (Clock_Ip_ClockMonitorEmpty_GetStatus, funcdef_no=4, decl_uid=9133, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_ClockMonitorEmpty_GetStatus/4
Clock_Ip_ClockMonitorEmpty_GetStatus (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 3;

}



;; Function Clock_Ip_SetCmuFcFceRefCntLfrefHfref (Clock_Ip_SetCmuFcFceRefCntLfrefHfref, funcdef_no=7, decl_uid=9138, cgraph_uid=8, symbol_order=7)

Modification phase of node Clock_Ip_SetCmuFcFceRefCntLfrefHfref/7
Clock_Ip_SetCmuFcFceRefCntLfrefHfref (const struct Clock_Ip_CmuConfigType * Config, uint32 Index)
{
  uint32 DividerResult;
  uint32 DivideBy;
  uint32 Cmp2;
  uint32 Cmp1;
  uint32 LfRef;
  uint32 HfRef;
  uint32 RefCount;
  uint32 BusClk;
  uint32 MonitoredClk;
  uint32 ReferenceClk;
  static uint32 Hash[4];
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  long unsigned int _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.2_12;
  <unnamed type> _13;
  unsigned char _14;
  int _15;
  long unsigned int _16;
  <unnamed type> _17;
  unsigned char _18;
  int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _39;
  long unsigned int _40;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = Config_37(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][8];
  _3 = (int) _2;
  # DEBUG D#1 => &Clock_Ip_axCmuInfo[_3]
  # DEBUG CmuInformation => D#1
  # DEBUG BEGIN_STMT
  CmuFc_38 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].CmuInstance;
  # DEBUG CmuFc => CmuFc_38
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ReferenceClk => 0
  # DEBUG BEGIN_STMT
  # DEBUG MonitoredClk => 0
  # DEBUG BEGIN_STMT
  # DEBUG BusClk => 0
  # DEBUG BEGIN_STMT
  # DEBUG RefCount => 0
  # DEBUG BEGIN_STMT
  # DEBUG HfRef => 0
  # DEBUG BEGIN_STMT
  # DEBUG LfRef => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = Hash[Index_41(D)];
  _5 = Config_37(D)->Enable;
  _6 = (long unsigned int) _5;
  _7 = Config_37(D)->Interrupt;
  _8 = _6 ^ _7;
  _9 = Config_37(D)->MonitoredClockFrequency;
  _10 = _8 ^ _9;
  _11 = _1 ^ _10;
  if (_4 != _11)
    goto <bb 3>; [66.00%]
  else
    goto <bb 7>; [34.00%]

  <bb 3> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  Hash[Index_41(D)] = _11;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.2_12 = Clock_Ip_pxConfig;
  _13 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].Reference;
  _14 = Clock_Ip_FreqIds[_13];
  _15 = (int) _14;
  _16 = Clock_Ip_pxConfig.2_12->ConfiguredFrequencies[_15].ConfiguredFrequencyValue;
  ReferenceClk_43 = _16 / 1000;
  # DEBUG ReferenceClk => ReferenceClk_43
  # DEBUG BEGIN_STMT
  _17 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].Bus;
  _18 = Clock_Ip_FreqIds[_17];
  _19 = (int) _18;
  _20 = Clock_Ip_pxConfig.2_12->ConfiguredFrequencies[_19].ConfiguredFrequencyValue;
  BusClk_44 = _20 / 1000;
  # DEBUG BusClk => BusClk_44
  # DEBUG BEGIN_STMT
  MonitoredClk_45 = _9 / 1000;
  # DEBUG MonitoredClk => MonitoredClk_45
  # DEBUG BEGIN_STMT
  if (_16 > 999)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 354334802]:
  if (_20 > 999)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 177167401]:
  if (_9 > 999)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  _21 = ReferenceClk_43 * 3;
  _22 = _21 / BusClk_44;
  Cmp1_46 = _22 + 1;
  # DEBUG Cmp1 => Cmp1_46
  # DEBUG BEGIN_STMT
  _23 = ReferenceClk_43 * 5;
  _24 = _23 / MonitoredClk_45;
  Cmp2_47 = _24 + 9;
  # DEBUG Cmp2 => Cmp2_47
  # DEBUG BEGIN_STMT
  RefCount_48 = MAX_EXPR <Cmp1_46, Cmp2_47>;
  # DEBUG RefCount => RefCount_48
  # DEBUG BEGIN_STMT
  _25 = MonitoredClk_45 * RefCount_48;
  HfRef_49 = _25 * 1011;
  # DEBUG HfRef => HfRef_49
  # DEBUG BEGIN_STMT
  DivideBy_50 = ReferenceClk_43 * 967;
  # DEBUG DivideBy => DivideBy_50
  # DEBUG BEGIN_STMT
  DividerResult_51 = HfRef_49 / DivideBy_50;
  # DEBUG DividerResult => DividerResult_51
  # DEBUG BEGIN_STMT
  _39 = HfRef_49 % DivideBy_50;
  # DEBUG ModuloValue => _39
  # DEBUG BEGIN_STMT
  _26 = DividerResult_51 * 10;
  _27 = _39 * 10;
  _28 = _27 / DivideBy_50;
  _29 = _26 + _28;
  HfRef_52 = _29 + 4;
  # DEBUG HfRef => HfRef_52
  # DEBUG BEGIN_STMT
  LfRef_53 = _25 * 989;
  # DEBUG LfRef => LfRef_53
  # DEBUG BEGIN_STMT
  DivideBy_54 = ReferenceClk_43 * 1033;
  # DEBUG DivideBy => DivideBy_54
  # DEBUG BEGIN_STMT
  DividerResult_55 = LfRef_53 / DivideBy_54;
  # DEBUG DividerResult => DividerResult_55
  # DEBUG BEGIN_STMT
  _40 = LfRef_53 % DivideBy_54;
  # DEBUG ModuloValue => _40
  # DEBUG BEGIN_STMT
  _30 = DividerResult_55 * 10;
  _31 = _40 * 10;
  _32 = _31 / DivideBy_54;
  _33 = _30 + _32;
  LfRef_56 = _33 + 4294967293;
  # DEBUG LfRef => LfRef_56
  # DEBUG BEGIN_STMT
  _34 = RefCount_48 * 10;
  CmuFc_38->RCCR = _34;
  # DEBUG BEGIN_STMT
  CmuFc_38->HTCR = HfRef_52;
  # DEBUG BEGIN_STMT
  CmuFc_38->LTCR = LfRef_56;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CmuFc_38->IER = _7;
  return;

}



;; Function Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref, funcdef_no=8, decl_uid=9142, cgraph_uid=9, symbol_order=8)

Modification phase of node Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref/8
Clock_Ip_ClearStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_NameType Name)
{
  uint32 CmuIsrValue;
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  unsigned char _1;
  int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[Name_5(D)][8];
  _2 = (int) _1;
  # DEBUG D#2 => &Clock_Ip_axCmuInfo[_2]
  # DEBUG CmuInformation => D#2
  # DEBUG BEGIN_STMT
  CmuFc_6 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_2].CmuInstance;
  # DEBUG CmuFc => CmuFc_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} CmuFc_6->SR;
  CmuIsrValue_7 = _3 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_7
  # DEBUG BEGIN_STMT
  CmuFc_6->SR ={v} CmuIsrValue_7;
  return;

}



;; Function Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref, funcdef_no=9, decl_uid=9144, cgraph_uid=10, symbol_order=9)

Modification phase of node Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref/9
Clock_Ip_GetStatusCmuFcFceRefCntLfrefHfref (Clock_Ip_NameType Name)
{
  uint32 CmuIsrValue;
  Clock_Ip_CmuStatusType Status;
  const struct Clock_Ip_ClockMonitorType * CmuFc;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[Name_11(D)][8];
  _2 = (int) _1;
  # DEBUG D#3 => &Clock_Ip_axCmuInfo[_2]
  # DEBUG CmuInformation => D#3
  # DEBUG BEGIN_STMT
  CmuFc_12 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_2].CmuInstance;
  # DEBUG CmuFc => CmuFc_12
  # DEBUG BEGIN_STMT
  # DEBUG Status => 3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 ={v} CmuFc_12->SR;
  CmuIsrValue_13 = _3 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_13
  # DEBUG BEGIN_STMT
  _4 = CmuFc_12->IER;
  # DEBUG CmuIerValue => _4 & 3
  # DEBUG BEGIN_STMT
  CmuIsrValue_14 = _4 & CmuIsrValue_13;
  # DEBUG CmuIsrValue => CmuIsrValue_14
  # DEBUG BEGIN_STMT
  _5 = CmuFc_12->GCR;
  _6 = _5 & 1;
  if (_6 != 0)
    goto <bb 3>; [65.00%]
  else
    goto <bb 6>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _7 = CmuIsrValue_14 & 2;
  if (_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 348966093]:
  # DEBUG BEGIN_STMT
  _8 = CmuIsrValue_14 & 1;
  if (_8 != 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 226827960]:
  # DEBUG BEGIN_STMT
  # DEBUG Status => 0

  <bb 6> [local count: 1073741824]:
  # Status_9 = PHI <3(2), 1(3), 2(4), 0(5)>
  # DEBUG Status => Status_9
  # DEBUG BEGIN_STMT
  return Status_9;

}



;; Function Clock_Ip_EnableCmuFcFceRefCntLfrefHfref (Clock_Ip_EnableCmuFcFceRefCntLfrefHfref, funcdef_no=10, decl_uid=9146, cgraph_uid=11, symbol_order=10)

Modification phase of node Clock_Ip_EnableCmuFcFceRefCntLfrefHfref/10
Clock_Ip_EnableCmuFcFceRefCntLfrefHfref (const struct Clock_Ip_CmuConfigType * Config)
{
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  unsigned char _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_11(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][8];
  _3 = (int) _2;
  # DEBUG D#4 => &Clock_Ip_axCmuInfo[_3]
  # DEBUG CmuInformation => D#4
  # DEBUG BEGIN_STMT
  CmuFc_12 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_3].CmuInstance;
  # DEBUG CmuFc => CmuFc_12
  # DEBUG BEGIN_STMT
  _4 = Config_11(D)->Enable;
  if (_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = CmuFc_12->GCR;
  _6 = _5 | 1;
  CmuFc_12->GCR = _6;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _7 = CmuFc_12->GCR;
  _8 = _7 & 4294967294;
  CmuFc_12->GCR = _8;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_DisableCmuFcFceRefCntLfrefHfref (Clock_Ip_DisableCmuFcFceRefCntLfrefHfref, funcdef_no=5, decl_uid=9140, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_DisableCmuFcFceRefCntLfrefHfref/5
Clock_Ip_DisableCmuFcFceRefCntLfrefHfref (Clock_Ip_NameType Name)
{
  uint32 FrequencyCheckStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  struct Clock_Ip_ClockMonitorType * const CmuFc;
  unsigned char _1;
  int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int TimeoutTicks.1_6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  long unsigned int _16;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[Name_20(D)][8];
  _2 = (int) _1;
  # DEBUG D#5 => &Clock_Ip_axCmuInfo[_2]
  # DEBUG CmuInformation => D#5
  # DEBUG BEGIN_STMT
  CmuFc_22 = MEM[(const struct Clock_Ip_CmuInfoType *)&Clock_Ip_axCmuInfo][_2].CmuInstance;
  # DEBUG CmuFc => CmuFc_22
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01 ();
  # DEBUG BEGIN_STMT
  _3 = CmuFc_22->GCR;
  _4 = _3 & 1;
  if (_4 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 ={v} CmuFc_22->SR;
  FrequencyCheckStatus_27 = _5 & 16;
  # DEBUG FrequencyCheckStatus => FrequencyCheckStatus_27
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_6 = TimeoutTicks;
  TimeoutOccurred_29 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_6);
  # DEBUG TimeoutOccurred => TimeoutOccurred_29
  # DEBUG BEGIN_STMT
  if (FrequencyCheckStatus_27 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_29 == 0)
    goto <bb 11>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 11> [local count: 958878292]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_21 = PHI <TimeoutOccurred_29(4), TimeoutOccurred_29(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_21 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  Clock_Ip_ReportClockErrors (1, Name_20(D));
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 76958566]:
  # DEBUG BEGIN_STMT
  _7 = CmuFc_22->GCR;
  _8 = _7 & 4294967294;
  CmuFc_22->GCR = _8;
  # DEBUG BEGIN_STMT
  _9 = CmuFc_22->IER;
  _10 = _9 & 4294967280;
  CmuFc_22->IER = _10;
  # DEBUG BEGIN_STMT
  _11 ={v} CmuFc_22->SR;
  _12 = _11 | 3;
  CmuFc_22->SR ={v} _12;
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 233207777]:
  # DEBUG BEGIN_STMT
  _13 = CmuFc_22->IER;
  _14 = _13 & 4294967280;
  CmuFc_22->IER = _14;
  # DEBUG BEGIN_STMT
  _15 ={v} CmuFc_22->SR;
  _16 = _15 | 3;
  CmuFc_22->SR ={v} _16;

  <bb 10> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01 ();
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ResetCmuFcFceRefCntLfrefHfref (Clock_Ip_ResetCmuFcFceRefCntLfrefHfref, funcdef_no=6, decl_uid=9135, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_ResetCmuFcFceRefCntLfrefHfref/6
Clock_Ip_ResetCmuFcFceRefCntLfrefHfref (const struct Clock_Ip_CmuConfigType * Config)
{
  <unnamed type> _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_3(D)->Name;
  Clock_Ip_DisableCmuFcFceRefCntLfrefHfref (_1);
  return;

}



;; Function Clock_Ip_ClockMonitorEmpty_ClearStatus (Clock_Ip_ClockMonitorEmpty_ClearStatus, funcdef_no=14, decl_uid=9131, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ClockMonitorEmpty_ClearStatus/3
Clock_Ip_ClockMonitorEmpty_ClearStatus (Clock_Ip_NameType Name)
{
  <bb 2> [local count: 1073741824]:
  Clock_Ip_ClockMonitorEmpty_Disable (Name_1(D)); [tail call]
  return;

}



;; Function Clock_Ip_CMU_GetInterruptStatus (Clock_Ip_CMU_GetInterruptStatus, funcdef_no=11, decl_uid=8814, cgraph_uid=12, symbol_order=11)

Modification phase of node Clock_Ip_CMU_GetInterruptStatus/11
Clock_Ip_CMU_GetInterruptStatus (uint8 IndexCmu)
{
  uint32 CmuIsrValue;
  int _1;
  struct Clock_Ip_ClockMonitorType * _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = (int) IndexCmu_4(D);
  _2 = Clock_Ip_apxCmu[_1];
  _3 ={v} _2->SR;
  CmuIsrValue_6 = _3 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_6
  # DEBUG BEGIN_STMT
  return CmuIsrValue_6;

}



;; Function Clock_Ip_CMU_ClockFailInt (Clock_Ip_CMU_ClockFailInt, funcdef_no=12, decl_uid=8816, cgraph_uid=13, symbol_order=12)

Modification phase of node Clock_Ip_CMU_ClockFailInt/12
Clock_Ip_CMU_ClockFailInt ()
{
  uint32 IndexCmu;
  uint32 CmuIsrValue;
  struct Clock_Ip_ClockMonitorType * _1;
  long unsigned int _2;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.0_3;
  long unsigned int _4;
  <unnamed type> _5;

  <bb 2> [local count: 214748364]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG IndexCmu => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_apxCmu[IndexCmu_6];
  _2 ={v} _1->SR;
  CmuIsrValue_10 = _2 & 3;
  # DEBUG CmuIsrValue => CmuIsrValue_10
  # DEBUG BEGIN_STMT
  _1->SR ={v} CmuIsrValue_10;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.0_3 = Clock_Ip_pxConfig;
  if (Clock_Ip_pxConfig.0_3 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 4> [local count: 601295421]:
  # DEBUG BEGIN_STMT
  _4 = _1->IER;
  # DEBUG CmuIerValue => _4 & 3
  # DEBUG BEGIN_STMT
  CmuIsrValue_12 = _4 & CmuIsrValue_10;
  # DEBUG CmuIsrValue => CmuIsrValue_12
  # DEBUG BEGIN_STMT
  if (CmuIsrValue_12 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 198427489]:
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_aeCmuNames[IndexCmu_6];
  Clock_Ip_ReportClockErrors (0, _5);

  <bb 6> [local count: 858993459]:
  # DEBUG BEGIN_STMT
  IndexCmu_14 = IndexCmu_6 + 1;
  # DEBUG IndexCmu => IndexCmu_14

  <bb 7> [local count: 1073741824]:
  # IndexCmu_6 = PHI <0(2), IndexCmu_14(6)>
  # DEBUG IndexCmu => IndexCmu_6
  # DEBUG BEGIN_STMT
  if (IndexCmu_6 != 4)
    goto <bb 3>; [80.00%]
  else
    goto <bb 8>; [20.00%]

  <bb 8> [local count: 214748365]:
  return;

}


