
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeStampGeneric/15:
  Jump functions of caller  FreeTimer_ConvertTicks2Us/14:
  Jump functions of caller  FreeTimer_ConvertTicks2Ms/13:
  Jump functions of caller  FreeTimer_ConvertMs2Ticks/12:
  Jump functions of caller  FreeTimer_GetTimeInTicks/11:
    callsite  FreeTimer_GetTimeInTicks/11 -> FreeTimer_GetCurrentTimeInTicks/8 : 
  Jump functions of caller  FreeTimer_StartTimeMeasurement/10:
    callsite  FreeTimer_StartTimeMeasurement/10 -> FreeTimer_GetCurrentTimeInTicks/8 : 
  Jump functions of caller  FreeTimer_Init/9:
  Jump functions of caller  FreeTimer_GetCurrentTimeInTicks/8:

 Propagating constants:

Not considering FreeTimer_ConvertTicks2Us for cloning; -fipa-cp-clone disabled.
Not considering FreeTimer_ConvertTicks2Ms for cloning; -fipa-cp-clone disabled.
Not considering FreeTimer_ConvertMs2Ticks for cloning; -fipa-cp-clone disabled.
Not considering FreeTimer_GetTimeInTicks for cloning; -fipa-cp-clone disabled.
Not considering FreeTimer_StartTimeMeasurement for cloning; -fipa-cp-clone disabled.
Not considering FreeTimer_Init for cloning; -fipa-cp-clone disabled.
Not considering FreeTimer_GetCurrentTimeInTicks for cloning; -fipa-cp-clone disabled.

overall_size: 33, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: FreeTimer_ConvertTicks2Us/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FreeTimer_ConvertTicks2Ms/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FreeTimer_ConvertMs2Ticks/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FreeTimer_GetTimeInTicks/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FreeTimer_StartTimeMeasurement/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: FreeTimer_Init/9:
  Node: FreeTimer_GetCurrentTimeInTicks/8:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_GetTimeStampGeneric/15 (OS_GetTimeStampGeneric) @06d89540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: FreeTimer_GetCurrentTimeInTicks/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FreeTimer_ConvertTicks2Us/14 (FreeTimer_ConvertTicks2Us) @06d89380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FreeTimer_ConvertTicks2Ms/13 (FreeTimer_ConvertTicks2Ms) @06d891c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FreeTimer_ConvertMs2Ticks/12 (FreeTimer_ConvertMs2Ticks) @06d89000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FreeTimer_GetTimeInTicks/11 (FreeTimer_GetTimeInTicks) @06d74c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_GetCurrentTimeInTicks/8 (1073741824 (estimated locally),1.00 per call) 
FreeTimer_StartTimeMeasurement/10 (FreeTimer_StartTimeMeasurement) @06d74a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_GetCurrentTimeInTicks/8 (1073741824 (estimated locally),1.00 per call) 
FreeTimer_Init/9 (FreeTimer_Init) @06d748c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
FreeTimer_GetCurrentTimeInTicks/8 (FreeTimer_GetCurrentTimeInTicks) @06d74700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: FreeTimer_GetTimeInTicks/11 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: OS_GetTimeStampGeneric/15 (1073741824 (estimated locally),1.00 per call) 

;; Function FreeTimer_GetCurrentTimeInTicks (FreeTimer_GetCurrentTimeInTicks, funcdef_no=0, decl_uid=5705, cgraph_uid=1, symbol_order=8)

Modification phase of node FreeTimer_GetCurrentTimeInTicks/8
FreeTimer_GetCurrentTimeInTicks ()
{
  struct os_timestamp_t CounterValue;
  unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  OS_GetTimeStampGeneric (&CounterValue);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _1 = CounterValue.tsLo;
  # DEBUG RetVal => _1
  # DEBUG BEGIN_STMT
  CounterValue ={v} {CLOBBER};
  return _1;

}



;; Function FreeTimer_Init (FreeTimer_Init, funcdef_no=1, decl_uid=5703, cgraph_uid=2, symbol_order=9)

Modification phase of node FreeTimer_Init/9
FreeTimer_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function FreeTimer_StartTimeMeasurement (FreeTimer_StartTimeMeasurement, funcdef_no=2, decl_uid=5707, cgraph_uid=3, symbol_order=10)

Modification phase of node FreeTimer_StartTimeMeasurement/10
FreeTimer_StartTimeMeasurement (FreeTimer_TimeInTicksType * initialTimeInTicks)
{
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = FreeTimer_GetCurrentTimeInTicks ();
  *initialTimeInTicks_4(D) = _1;
  return;

}



;; Function FreeTimer_GetTimeInTicks (FreeTimer_GetTimeInTicks, funcdef_no=3, decl_uid=5709, cgraph_uid=4, symbol_order=11)

Modification phase of node FreeTimer_GetTimeInTicks/11
FreeTimer_GetTimeInTicks (FreeTimer_TimeInTicksType initialTimeInTicks)
{
  const FreeTimer_TimeInTicksType elapsedTimeInTicks;
  FreeTimer_TimeInTicksType _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  elapsedTimeInTicks_3 = FreeTimer_GetCurrentTimeInTicks ();
  # DEBUG elapsedTimeInTicks => elapsedTimeInTicks_3
  # DEBUG BEGIN_STMT
  _5 = elapsedTimeInTicks_3 - initialTimeInTicks_4(D);
  return _5;

}



;; Function FreeTimer_ConvertMs2Ticks (FreeTimer_ConvertMs2Ticks, funcdef_no=4, decl_uid=5711, cgraph_uid=5, symbol_order=12)

Modification phase of node FreeTimer_ConvertMs2Ticks/12
FreeTimer_ConvertMs2Ticks (const FreeTimer_TimeInMsType timeInMs)
{
  FreeTimer_TimeInTicksType _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = timeInMs_1(D) * 50000;
  return _2;

}



;; Function FreeTimer_ConvertTicks2Ms (FreeTimer_ConvertTicks2Ms, funcdef_no=5, decl_uid=5713, cgraph_uid=6, symbol_order=13)

Modification phase of node FreeTimer_ConvertTicks2Ms/13
FreeTimer_ConvertTicks2Ms (const FreeTimer_TimeInTicksType timeInTicks)
{
  FreeTimer_TimeInMsType _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = timeInTicks_1(D) / 50000;
  return _2;

}



;; Function FreeTimer_ConvertTicks2Us (FreeTimer_ConvertTicks2Us, funcdef_no=6, decl_uid=5715, cgraph_uid=7, symbol_order=14)

Modification phase of node FreeTimer_ConvertTicks2Us/14
FreeTimer_ConvertTicks2Us (const FreeTimer_TimeInTicksType timeInTicks)
{
  FreeTimer_TimeInUsType _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = timeInTicks_1(D) / 50;
  return _2;

}


