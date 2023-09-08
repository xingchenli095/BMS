
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_TimeoutExpired/11:
  Jump functions of caller  Clock_Ip_StartTimeout/10:
  Jump functions of caller  Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6:
  Jump functions of caller  Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5:
  Jump functions of caller  Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4:
  Jump functions of caller  Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3:
  Jump functions of caller  Clock_Ip_CallbackPllEmptyDisable/2:
  Jump functions of caller  Clock_Ip_CallbackPllEmptyComplete/1:
  Jump functions of caller  Clock_Ip_CallbackPllEmpty/0:

 Propagating constants:

Not considering Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmptyDisable for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmptyComplete for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_CallbackPllEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 104, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmptyDisable/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmptyComplete/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_CallbackPllEmpty/0:
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

Clock_Ip_TimeoutExpired/11 (Clock_Ip_TimeoutExpired) @06f818c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (1073741824 (estimated locally),3.88 per call) 
  Calls: 
Clock_Ip_StartTimeout/10 (Clock_Ip_StartTimeout) @06f817e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (114863532 (estimated locally),0.41 per call) 
  Calls: 
Clock_Ip_pxPll/9 (Clock_Ip_pxPll) @06f6d4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (read)Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (read)Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (read)Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/8 (Clock_Ip_au8ClockFeatures) @06f6d480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (read)Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (read)Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (read)Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axPllCallbacks/7 (Clock_Ip_axPllCallbacks) @06f6d288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmptyComplete/1 (addr)Clock_Ip_CallbackPllEmpty/0 (addr)Clock_Ip_CallbackPllEmptyDisable/2 (addr)Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (addr)Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (addr)Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (addr)Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (addr)Clock_Ip_CallbackPllEmptyDisable/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6 (Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06f81380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read)Clock_Ip_pxPll/9 (read)
  Referring: Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5 (Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06f811c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read)Clock_Ip_pxPll/9 (read)
  Referring: Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:276913048 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_TimeoutExpired/11 (1073741824 (estimated locally),3.88 per call) Clock_Ip_StartTimeout/10 (114863532 (estimated locally),0.41 per call) 
Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4 (Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06f81000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read)Clock_Ip_pxPll/9 (read)
  Referring: Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3 (Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize) @06f689a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/8 (read)Clock_Ip_pxPll/9 (read)
  Referring: Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmptyDisable/2 (Clock_Ip_CallbackPllEmptyDisable) @06f687e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/7 (addr)Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmptyComplete/1 (Clock_Ip_CallbackPllEmptyComplete) @06f68620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_CallbackPllEmpty/0 (Clock_Ip_CallbackPllEmpty) @06f68460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPllCallbacks/7 (addr)Clock_Ip_axPllCallbacks/7 (addr)Clock_Ip_axPllCallbacks/7 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_CallbackPllEmpty (Clock_Ip_CallbackPllEmpty, funcdef_no=0, decl_uid=8830, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_CallbackPllEmpty/0
Clock_Ip_CallbackPllEmpty (const struct Clock_Ip_PllConfigType * Config)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_CallbackPllEmptyComplete, funcdef_no=1, decl_uid=8832, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_CallbackPllEmptyComplete/1
Clock_Ip_CallbackPllEmptyComplete (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_CallbackPllEmptyDisable, funcdef_no=2, decl_uid=8834, cgraph_uid=3, symbol_order=2)

Modification phase of node Clock_Ip_CallbackPllEmptyDisable/2
Clock_Ip_CallbackPllEmptyDisable (Clock_Ip_NameType PllName)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=3, decl_uid=8836, cgraph_uid=4, symbol_order=3)

Modification phase of node Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/3
Clock_Ip_ResetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  struct PLL_Type * _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_7(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_8 = (uint32) _2;
  # DEBUG Instance => Instance_8
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_pxPll[Instance_8];
  _4 ={v} _3->PLLCR;
  _5 = _4 | 2147483648;
  _3->PLLCR ={v} _5;
  return;

}



;; Function Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=4, decl_uid=8838, cgraph_uid=5, symbol_order=4)

Modification phase of node Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/4
Clock_Ip_SetPllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Value;
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  struct PLL_Type * _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  unsigned char _9;
  long unsigned int _10;
  long unsigned int _11;
  short unsigned int _12;
  long unsigned int _13;
  unsigned char _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;
  unsigned char _18;
  unsigned char _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  short unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  short unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int iftmp.1_33;
  short unsigned int _47;
  short unsigned int _48;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_36(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_37 = (uint32) _2;
  # DEBUG Instance => Instance_37
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = Config_36(D)->Enable;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxPll[Instance_37];
  Value_38 ={v} _4->PLLDV;
  # DEBUG Value => Value_38
  # DEBUG BEGIN_STMT
  Value_39 = Value_38 & 4294938368;
  # DEBUG Value => Value_39
  # DEBUG BEGIN_STMT
  _5 = Config_36(D)->Predivider;
  _6 = (long unsigned int) _5;
  _7 = _6 << 12;
  _8 = _7 & 28672;
  _9 = Config_36(D)->MulFactorDiv;
  _10 = (long unsigned int) _9;
  _11 = _8 | _10;
  Value_40 = _11 | Value_39;
  # DEBUG Value => Value_40
  # DEBUG BEGIN_STMT
  _4->PLLDV ={v} Value_40;
  # DEBUG BEGIN_STMT
  Value_42 ={v} _4->PLLFD;
  # DEBUG Value => Value_42
  # DEBUG BEGIN_STMT
  Value_43 = Value_42 & 3221192704;
  # DEBUG Value => Value_43
  # DEBUG BEGIN_STMT
  _12 = Config_36(D)->NumeratorFracLoopDiv;
  _47 = _12 & 32767;
  _13 = (long unsigned int) _47;
  Value_44 = _13 | Value_43;
  # DEBUG Value => Value_44
  # DEBUG BEGIN_STMT
  _14 = Config_36(D)->SigmaDelta;
  _15 = (long unsigned int) _14;
  _16 = _15 << 30;
  _17 = _16 & 1073741824;
  Value_45 = _17 | Value_44;
  # DEBUG Value => Value_45
  # DEBUG BEGIN_STMT
  _4->PLLFD ={v} Value_45;
  # DEBUG BEGIN_STMT
  _18 = Config_36(D)->ModulationFrequency;
  if (_18 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 4> [local count: 268435456]:

  <bb 5> [local count: 536870913]:
  # iftmp.1_33 = PHI <1073741824(3), 0(4)>
  _19 = Config_36(D)->ModulationType;
  _20 = (long unsigned int) _19;
  _21 = _20 << 29;
  _22 = _21 & 536870912;
  _23 = _22 | iftmp.1_33;
  _24 = Config_36(D)->IncrementStep;
  _48 = _24 & 2047;
  _25 = (long unsigned int) _48;
  _26 = _23 | _25;
  _27 = Config_36(D)->ModulationPeriod;
  _28 = (long unsigned int) _27;
  _29 = _28 << 16;
  _30 = _29 & 67043328;
  Value_49 = _26 | _30;
  # DEBUG Value => Value_49
  # DEBUG BEGIN_STMT
  _4->PLLFM ={v} Value_49;
  # DEBUG BEGIN_STMT
  _31 ={v} _4->PLLCR;
  _32 = _31 & 2147483647;
  _4->PLLCR ={v} _32;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=6, decl_uid=8842, cgraph_uid=7, symbol_order=6)

Modification phase of node Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/6
Clock_Ip_EnablePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (const struct Clock_Ip_PllConfigType * Config)
{
  uint32 Instance;
  <unnamed type> _1;
  unsigned char _2;
  short unsigned int _3;
  struct PLL_Type * _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Config_9(D)->Name;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  Instance_10 = (uint32) _2;
  # DEBUG Instance => Instance_10
  # DEBUG BEGIN_STMT
  _3 = Config_9(D)->Enable;
  if (_3 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _4 = Clock_Ip_pxPll[Instance_10];
  _5 ={v} _4->PLLCR;
  _6 = _5 & 2147483647;
  _4->PLLCR ={v} _6;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize, funcdef_no=5, decl_uid=8840, cgraph_uid=6, symbol_order=5)

Modification phase of node Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize/5
Clock_Ip_CompletePllRdivMfiMfnOdiv2SdmenSsscgbypSpreadctlStepnoStepsize (Clock_Ip_NameType PllName)
{
  uint32 Instance;
  uint32 PllLockStatus;
  uint32 TimeoutTicks;
  uint32 ElapsedTime;
  uint32 StartTime;
  boolean TimeoutOccurred;
  Clock_Ip_PllStatusReturnType PllStatus;
  unsigned char _1;
  struct PLL_Type * _2;
  long unsigned int _3;
  signed int _4;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int TimeoutTicks.0_8;

  <bb 2> [local count: 276913048]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 2
  # DEBUG BEGIN_STMT
  # DEBUG TimeoutOccurred => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_au8ClockFeatures[PllName_13(D)][0];
  Instance_14 = (uint32) _1;
  # DEBUG Instance => Instance_14
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_pxPll[Instance_14];
  _3 ={v} _2->PLLCR;
  _4 = (signed int) _3;
  if (_4 >= 0)
    goto <bb 3>; [41.48%]
  else
    goto <bb 8>; [58.52%]

  <bb 3> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  Clock_Ip_StartTimeout (&StartTime, &ElapsedTime, &TimeoutTicks, 50000);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 ={v} _2->PLLSR;
  _7 = _6 >> 2;
  PllLockStatus_16 = _7 & 1;
  # DEBUG PllLockStatus => PllLockStatus_16
  # DEBUG BEGIN_STMT
  TimeoutTicks.0_8 = TimeoutTicks;
  TimeoutOccurred_18 = Clock_Ip_TimeoutExpired (&StartTime, &ElapsedTime, TimeoutTicks.0_8);
  # DEBUG TimeoutOccurred => TimeoutOccurred_18
  # DEBUG BEGIN_STMT
  if (PllLockStatus_16 == 0)
    goto <bb 5>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 5> [local count: 1014686024]:
  if (TimeoutOccurred_18 == 0)
    goto <bb 9>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 9> [local count: 958878294]:
  goto <bb 4>; [100.00%]

  <bb 6> [local count: 114863532]:
  # TimeoutOccurred_5 = PHI <TimeoutOccurred_18(4), TimeoutOccurred_18(5)>
  # DEBUG BEGIN_STMT
  if (TimeoutOccurred_5 == 1)
    goto <bb 7>; [48.89%]
  else
    goto <bb 8>; [51.11%]

  <bb 7> [local count: 56156781]:
  # DEBUG BEGIN_STMT
  # DEBUG PllStatus => 1

  <bb 8> [local count: 276913047]:
  # PllStatus_9 = PHI <1(7), 0(2), 2(6)>
  # DEBUG PllStatus => PllStatus_9
  # DEBUG BEGIN_STMT
  StartTime ={v} {CLOBBER};
  ElapsedTime ={v} {CLOBBER};
  TimeoutTicks ={v} {CLOBBER};
  return PllStatus_9;

}


