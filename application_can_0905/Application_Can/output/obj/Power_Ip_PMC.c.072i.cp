
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_ReportPowerErrors/3:
  Jump functions of caller  Power_Ip_TimeoutExpired/2:
  Jump functions of caller  Power_Ip_StartTimeout/1:
  Jump functions of caller  Power_Ip_PMC_PowerInit/0:

 Propagating constants:

Not considering Power_Ip_PMC_PowerInit for cloning; -fipa-cp-clone disabled.

overall_size: 73, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_PMC_PowerInit/0:
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

Power_Ip_ReportPowerErrors/3 (Power_Ip_ReportPowerErrors) @06f742a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_PMC_PowerInit/0 (37904965 (estimated locally),0.05 per call) Power_Ip_PMC_PowerInit/0 (37904965 (estimated locally),0.05 per call) 
  Calls: 
Power_Ip_TimeoutExpired/2 (Power_Ip_TimeoutExpired) @06f741c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_PMC_PowerInit/0 (1073741824 (estimated locally),1.54 per call) Power_Ip_PMC_PowerInit/0 (1073741824 (estimated locally),1.54 per call) 
  Calls: 
Power_Ip_StartTimeout/1 (Power_Ip_StartTimeout) @06f740e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_PMC_PowerInit/0 (114863532 (estimated locally),0.16 per call) Power_Ip_PMC_PowerInit/0 (114863532 (estimated locally),0.16 per call) 
  Calls: 
Power_Ip_PMC_PowerInit/0 (Power_Ip_PMC_PowerInit) @06f47e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:696142619 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_ReportPowerErrors/3 (37904965 (estimated locally),0.05 per call) Power_Ip_TimeoutExpired/2 (1073741824 (estimated locally),1.54 per call) Power_Ip_StartTimeout/1 (114863532 (estimated locally),0.16 per call) Power_Ip_ReportPowerErrors/3 (37904965 (estimated locally),0.05 per call) Power_Ip_TimeoutExpired/2 (1073741824 (estimated locally),1.54 per call) Power_Ip_StartTimeout/1 (114863532 (estimated locally),0.16 per call) 

;; Function Power_Ip_PMC_PowerInit (Power_Ip_PMC_PowerInit, funcdef_no=0, decl_uid=8342, cgraph_uid=1, symbol_order=0)

Modification phase of node Power_Ip_PMC_PowerInit/0
Power_Ip_PMC_PowerInit (const struct Power_Ip_PMC_ConfigType * ConfigPtr)
{
  uint32 ConfigValue;
  uint32 LastMileRegValue;
  uint32 LvscValue;
  boolean TimeoutOccurred;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int TimeoutTicks.0_7;
  long unsigned int _8;
  long unsigned int _11;
  long unsigned int TimeoutTicks.1_12;
  long unsigned int _13;

  <bb 2> [local count: 696142619]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PMC_Type *)1076789248B].LVSC;
  _2 = _1 & 2164195328;
  if (_2 == 2164195328)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 236688490]:
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1076789248B].LVSC ={v} 2214527039;

  <bb 4> [local count: 696142619]:
  # DEBUG BEGIN_STMT
  _3 = ConfigPtr_20(D)->ConfigRegister;
  _4 = _3 & 1;
  if (_4 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 5> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  _5 = _3 & 4294967294;
  MEM[(struct PMC_Type *)1076789248B].CONFIG ={v} _5;
  # DEBUG BEGIN_STMT
  _6 = _3 & 2;
  if (_6 != 0)
    goto <bb 6>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 6> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_7 = TimeoutTicks;
  TimeoutOccurred_34 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_7);
  # DEBUG TimeoutOccurred => TimeoutOccurred_34
  # DEBUG BEGIN_STMT
  LvscValue_35 ={v} MEM[(struct PMC_Type *)1076789248B].LVSC;
  # DEBUG LvscValue => LvscValue_35
  # DEBUG BEGIN_STMT
  _8 = LvscValue_35 & 8192;
  if (_8 != 0)
    goto <bb 8>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 8> [local count: 1014686025]:
  if (TimeoutOccurred_34 == 0)
    goto <bb 20>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 20> [local count: 958878292]:
  goto <bb 7>; [100.00%]

  <bb 9> [local count: 114863532]:
  # TimeoutOccurred_10 = PHI <TimeoutOccurred_34(7), TimeoutOccurred_34(8)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_10 == 0)
    goto <bb 10>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 10> [local count: 76958566]:
  # DEBUG BEGIN_STMT
  ConfigValue_37 ={v} MEM[(struct PMC_Type *)1076789248B].CONFIG;
  # DEBUG ConfigValue => ConfigValue_37
  # DEBUG BEGIN_STMT
  ConfigValue_38 = ConfigValue_37 & 4294967294;
  # DEBUG ConfigValue => ConfigValue_38
  # DEBUG BEGIN_STMT
  ConfigValue_39 = ConfigValue_38 | 1;
  # DEBUG ConfigValue => ConfigValue_39
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1076789248B].CONFIG ={v} ConfigValue_39;
  goto <bb 19>; [100.00%]

  <bb 11> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  Power_Ip_ReportPowerErrors (0, 255);
  goto <bb 19>; [100.00%]

  <bb 12> [local count: 233207777]:
  # DEBUG BEGIN_STMT
  ConfigValue_28 ={v} MEM[(struct PMC_Type *)1076789248B].CONFIG;
  # DEBUG ConfigValue => ConfigValue_28
  # DEBUG BEGIN_STMT
  ConfigValue_29 = ConfigValue_28 & 4294967294;
  # DEBUG ConfigValue => ConfigValue_29
  # DEBUG BEGIN_STMT
  ConfigValue_30 = ConfigValue_29 | 1;
  # DEBUG ConfigValue => ConfigValue_30
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1076789248B].CONFIG ={v} ConfigValue_30;
  goto <bb 19>; [100.00%]

  <bb 13> [local count: 348071309]:
  # DEBUG BEGIN_STMT
  MEM[(struct PMC_Type *)1076789248B].CONFIG ={v} _3;
  # DEBUG BEGIN_STMT
  _11 = _3 & 65536;
  if (_11 != 0)
    goto <bb 14>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 14> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Power_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 15> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  TimeoutTicks.1_12 = TimeoutTicks;
  TimeoutOccurred_24 = Power_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.1_12);
  # DEBUG TimeoutOccurred => TimeoutOccurred_24
  # DEBUG BEGIN_STMT
  _13 ={v} MEM[(struct PMC_Type *)1076789248B].CONFIG;
  LastMileRegValue_25 = _13 & 131072;
  # DEBUG LastMileRegValue => LastMileRegValue_25
  # DEBUG BEGIN_STMT
  if (LastMileRegValue_25 == 0)
    goto <bb 16>; [94.50%]
  else
    goto <bb 17>; [5.50%]

  <bb 16> [local count: 1014686025]:
  if (TimeoutOccurred_24 == 0)
    goto <bb 21>; [94.50%]
  else
    goto <bb 17>; [5.50%]

  <bb 21> [local count: 958878292]:
  goto <bb 15>; [100.00%]

  <bb 17> [local count: 114863532]:
  # TimeoutOccurred_9 = PHI <TimeoutOccurred_24(15), TimeoutOccurred_24(16)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_9 != 0)
    goto <bb 18>; [33.00%]
  else
    goto <bb 19>; [67.00%]

  <bb 18> [local count: 37904965]:
  # DEBUG BEGIN_STMT
  Power_Ip_ReportPowerErrors (0, 255);

  <bb 19> [local count: 696142618]:
  # DEBUG BEGIN_STMT
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return;

}

