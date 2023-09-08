
IPA constant propagation start:
Determining dynamic type for call: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0 (Config_12(D));
  Starting walk at: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0 (Config_12(D));
  instance pointer: Config_12(D)  Outer instance pointer: Config_12(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:TimeoutOccurred_20 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_9);
  Function call may change dynamic type:Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);
  Function call may change dynamic type:TimeoutOccurred_20 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_9);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0/9:
  Jump functions of caller  Clock_Ip_ReportClockErrors/8:
  Jump functions of caller  Clock_Ip_TimeoutExpired/7:
  Jump functions of caller  Clock_Ip_StartTimeout/6:
  Jump functions of caller  Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2:
    callsite  Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 -> Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0/9 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1:
  Jump functions of caller  Clock_Ip_Callback_DividerTriggerEmpty/0:

 Propagating constants:

Not considering Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Callback_DividerTriggerEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 57, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_Callback_DividerTriggerEmpty/0:
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

Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0/9 (Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0) @07097e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (23248379 (estimated locally),0.07 per call) 
  Calls: Clock_Ip_ReportClockErrors/8 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_ReportClockErrors/8 (Clock_Ip_ReportClockErrors) @07058d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/7 (Clock_Ip_TimeoutExpired) @07058c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/6 (Clock_Ip_StartTimeout) @07058b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_apxCgm/5 (Clock_Ip_apxCgm) @07091318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1 (read)Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1 (read)Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/4 (Clock_Ip_au8ClockFeatures) @070912d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1 (read)Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1 (read)Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (read)Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axDividerTriggerCallbacks/3 (Clock_Ip_axDividerTriggerCallbacks) @06fa1f78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_Callback_DividerTriggerEmpty/0 (addr)Clock_Ip_Callback_DividerTriggerEmpty/0 (addr)Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1 (addr)Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2 (Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat) @070588c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/4 (read)Clock_Ip_au8ClockFeatures/4 (read)Clock_Ip_apxCgm/5 (read)
  Referring: Clock_Ip_axDividerTriggerCallbacks/3 (addr)
  Availability: available
  Function flags: count:348071309 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0/9 (23248379 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/7 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/6 (114863532 (estimated locally),0.33 per call) 
Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1 (Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat) @07058620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/4 (read)Clock_Ip_au8ClockFeatures/4 (read)Clock_Ip_apxCgm/5 (read)Clock_Ip_apxCgm/5 (read)
  Referring: Clock_Ip_axDividerTriggerCallbacks/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Callback_DividerTriggerEmpty/0 (Clock_Ip_Callback_DividerTriggerEmpty) @07058460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axDividerTriggerCallbacks/3 (addr)Clock_Ip_axDividerTriggerCallbacks/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_Callback_DividerTriggerEmpty (Clock_Ip_Callback_DividerTriggerEmpty, funcdef_no=0, decl_uid=8830, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_Callback_DividerTriggerEmpty/0
Clock_Ip_Callback_DividerTriggerEmpty (const struct Clock_Ip_DividerTriggerConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat (Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat, funcdef_no=1, decl_uid=8832, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat/1
Clock_Ip_ConfigureCgmXDivTrigCtrlTctlHhenUpdStat (const struct Clock_Ip_DividerTriggerConfigType * Config)
{
  uint32 SelectorIndex;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _3;
  <unnamed type> _4;
  volatile struct Clock_Ip_CgmMuxType * _5;
  volatile struct Clock_Ip_CgmMuxType * _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_11(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_12 = (uint32) _2;
  # DEBUG Instance => Instance_12
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_au8ClockFeatures[_1][4];
  SelectorIndex_13 = (uint32) _3;
  # DEBUG SelectorIndex => SelectorIndex_13
  # DEBUG BEGIN_STMT
  _4 = Config_11(D)->TriggerType;
  if (_4 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = Clock_Ip_apxCgm[Instance_12][SelectorIndex_13];
  _5->MUX_DIV_TRIG_CTRL ={v} 1;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = Clock_Ip_apxCgm[Instance_12][SelectorIndex_13];
  _7 ={v} _6->MUX_DIV_TRIG_CTRL;
  _8 = _7 & 4294967294;
  _6->MUX_DIV_TRIG_CTRL ={v} _8;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat (Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat, funcdef_no=2, decl_uid=8834, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat/2
Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat (const struct Clock_Ip_DividerTriggerConfigType * Config)
{
  uint32 DividerStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  uint32 SelectorIndex;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  unsigned char _4;
  <unnamed type> _5;
  volatile struct Clock_Ip_CgmMuxType * _6;
  long unsigned int _8;
  long unsigned int TimeoutTicks.0_9;

  <bb 2> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  _1 = Config_12(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_13 = (uint32) _2;
  # DEBUG Instance => Instance_13
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_au8ClockFeatures[_1][4];
  SelectorIndex_14 = (uint32) _4;
  # DEBUG SelectorIndex => SelectorIndex_14
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = Config_12(D)->TriggerType;
  if (_5 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  _6 = Clock_Ip_apxCgm[Instance_13][SelectorIndex_14];
  _6->MUX_DIV_TRIG ={v} 1;
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _8 ={v} _6->MUX_DIV_UPD_STAT;
  DividerStatus_18 = _8 & 1;
  # DEBUG DividerStatus => DividerStatus_18
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_9 = TimeoutTicks;
  TimeoutOccurred_20 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_9);
  # DEBUG TimeoutOccurred => TimeoutOccurred_20
  # DEBUG BEGIN_STMT
  if (DividerStatus_18 != 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686025]:
  if (TimeoutOccurred_20 == 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_3 = PHI <TimeoutOccurred_20(4), TimeoutOccurred_20(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_3 == 1)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 23248379]:
  Clock_Ip_TriggerUpdateCgmXDivTrigCtrlTctlHhenUpdStat.part.0 (Config_12(D));

  <bb 8> [local count: 348071309]:
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}


