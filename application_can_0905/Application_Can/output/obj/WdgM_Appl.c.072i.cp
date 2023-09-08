
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FreeTimer_ConvertTicks2Us/9:
  Jump functions of caller  FreeTimer_StartTimeMeasurement/8:
  Jump functions of caller  Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/7:
  Jump functions of caller  WdgM_CheckpointReached/6:
  Jump functions of caller  Supervisor_WdgM_GetElapsedTimeCallout/5:
  Jump functions of caller  Supervisor_WdgM_GetExpectedWdgMModeCallout/4:
  Jump functions of caller  Supervisor_WdgM_GetExpectedInitStateCallout/3:
  Jump functions of caller  WdgM_Appl_WdgM_DeadLineMonitorStop/2:
  Jump functions of caller  WdgM_Appl_WdgM_DeadLineMonitorStart/1:
  Jump functions of caller  WdgM_Appl_WdgM_TriggerSWC_Cyclic/0:

 Propagating constants:

Not considering Supervisor_WdgM_GetElapsedTimeCallout for cloning; -fipa-cp-clone disabled.
Not considering Supervisor_WdgM_GetExpectedWdgMModeCallout for cloning; -fipa-cp-clone disabled.
Not considering Supervisor_WdgM_GetExpectedInitStateCallout for cloning; -fipa-cp-clone disabled.
Not considering WdgM_Appl_WdgM_DeadLineMonitorStop for cloning; -fipa-cp-clone disabled.
Not considering WdgM_Appl_WdgM_DeadLineMonitorStart for cloning; -fipa-cp-clone disabled.
Not considering WdgM_Appl_WdgM_TriggerSWC_Cyclic for cloning; -fipa-cp-clone disabled.

overall_size: 64, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Supervisor_WdgM_GetElapsedTimeCallout/5:
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
  Node: Supervisor_WdgM_GetExpectedWdgMModeCallout/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Supervisor_WdgM_GetExpectedInitStateCallout/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: WdgM_Appl_WdgM_DeadLineMonitorStop/2:
  Node: WdgM_Appl_WdgM_DeadLineMonitorStart/1:
  Node: WdgM_Appl_WdgM_TriggerSWC_Cyclic/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FreeTimer_ConvertTicks2Us/9 (FreeTimer_ConvertTicks2Us) @06b9e7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Supervisor_WdgM_GetElapsedTimeCallout/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FreeTimer_StartTimeMeasurement/8 (FreeTimer_StartTimeMeasurement) @06b9e700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Supervisor_WdgM_GetElapsedTimeCallout/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/7 (Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode) @06b9e460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Supervisor_WdgM_GetExpectedWdgMModeCallout/4 (1073741824 (estimated locally),1.00 per call) Supervisor_WdgM_GetExpectedInitStateCallout/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
WdgM_CheckpointReached/6 (WdgM_CheckpointReached) @06b9e0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: WdgM_Appl_WdgM_DeadLineMonitorStop/2 (1073741824 (estimated locally),1.00 per call) WdgM_Appl_WdgM_DeadLineMonitorStart/1 (1073741824 (estimated locally),1.00 per call) WdgM_Appl_WdgM_TriggerSWC_Cyclic/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Supervisor_WdgM_GetElapsedTimeCallout/5 (Supervisor_WdgM_GetElapsedTimeCallout) @06b4eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/9 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/8 (1073741824 (estimated locally),1.00 per call) 
Supervisor_WdgM_GetExpectedWdgMModeCallout/4 (Supervisor_WdgM_GetExpectedWdgMModeCallout) @06b4ed20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/7 (1073741824 (estimated locally),1.00 per call) 
Supervisor_WdgM_GetExpectedInitStateCallout/3 (Supervisor_WdgM_GetExpectedInitStateCallout) @06b4eb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode/7 (1073741824 (estimated locally),1.00 per call) 
WdgM_Appl_WdgM_DeadLineMonitorStop/2 (WdgM_Appl_WdgM_DeadLineMonitorStop) @06b4e9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: WdgM_CheckpointReached/6 (1073741824 (estimated locally),1.00 per call) 
WdgM_Appl_WdgM_DeadLineMonitorStart/1 (WdgM_Appl_WdgM_DeadLineMonitorStart) @06b4e7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: WdgM_CheckpointReached/6 (1073741824 (estimated locally),1.00 per call) 
WdgM_Appl_WdgM_TriggerSWC_Cyclic/0 (WdgM_Appl_WdgM_TriggerSWC_Cyclic) @06b4e620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: WdgM_CheckpointReached/6 (1073741824 (estimated locally),1.00 per call) 

;; Function WdgM_Appl_WdgM_TriggerSWC_Cyclic (WdgM_Appl_WdgM_TriggerSWC_Cyclic, funcdef_no=0, decl_uid=5369, cgraph_uid=1, symbol_order=0)

Modification phase of node WdgM_Appl_WdgM_TriggerSWC_Cyclic/0
WdgM_Appl_WdgM_TriggerSWC_Cyclic ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  WdgM_CheckpointReached (0, 0);
  return;

}



;; Function WdgM_Appl_WdgM_DeadLineMonitorStart (WdgM_Appl_WdgM_DeadLineMonitorStart, funcdef_no=1, decl_uid=5371, cgraph_uid=2, symbol_order=1)

Modification phase of node WdgM_Appl_WdgM_DeadLineMonitorStart/1
WdgM_Appl_WdgM_DeadLineMonitorStart ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  WdgM_CheckpointReached (2, 0);
  return;

}



;; Function WdgM_Appl_WdgM_DeadLineMonitorStop (WdgM_Appl_WdgM_DeadLineMonitorStop, funcdef_no=2, decl_uid=5373, cgraph_uid=3, symbol_order=2)

Modification phase of node WdgM_Appl_WdgM_DeadLineMonitorStop/2
WdgM_Appl_WdgM_DeadLineMonitorStop ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  WdgM_CheckpointReached (2, 1);
  return;

}



;; Function Supervisor_WdgM_GetExpectedInitStateCallout (Supervisor_WdgM_GetExpectedInitStateCallout, funcdef_no=3, decl_uid=5383, cgraph_uid=4, symbol_order=3)

Modification phase of node Supervisor_WdgM_GetExpectedInitStateCallout/3
Supervisor_WdgM_GetExpectedInitStateCallout (WdgM_EB_InitStatusType * InitStatus)
{
  uint8 currentMode;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  currentMode_4 = Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode ();
  # DEBUG currentMode => currentMode_4
  # DEBUG BEGIN_STMT
  switch (currentMode_4) <default: <L6> [25.00%], case 1: <L0> [25.00%], case 2: <L1> [25.00%], case 3: <L2> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  *InitStatus_5(D) = 85;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  *InitStatus_5(D) = 85;
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  *InitStatus_5(D) = 170;
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
<L6>:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Supervisor_WdgM_GetExpectedWdgMModeCallout (Supervisor_WdgM_GetExpectedWdgMModeCallout, funcdef_no=4, decl_uid=5385, cgraph_uid=5, symbol_order=4)

Modification phase of node Supervisor_WdgM_GetExpectedWdgMModeCallout/4
Supervisor_WdgM_GetExpectedWdgMModeCallout (WdgM_ModeType * WdgMMode)
{
  Std_ReturnType RetValue;
  uint8 currentMode;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  currentMode_5 = Rte_Mode_SWC_AppStateHandler_AppState_AppStateMode ();
  # DEBUG currentMode => currentMode_5
  # DEBUG BEGIN_STMT
  switch (currentMode_5) <default: <L3> [25.00%], case 1: <L0> [25.00%], case 2: <L1> [25.00%], case 3: <L2> [25.00%]>

  <bb 3> [local count: 268435456]:
<L0>:
  # DEBUG BEGIN_STMT
  *WdgMMode_6(D) = 0;
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 268435456]:
<L1>:
  # DEBUG BEGIN_STMT
  *WdgMMode_6(D) = 1;
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 268435456]:
<L2>:
  # DEBUG BEGIN_STMT
  *WdgMMode_6(D) = 2;
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 0
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 268435456]:
<L3>:
  # DEBUG BEGIN_STMT
  *WdgMMode_6(D) = 1;
  # DEBUG BEGIN_STMT
  # DEBUG RetValue => 1
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # RetValue_1 = PHI <0(3), 0(4), 0(5), 1(6)>
  # DEBUG RetValue => RetValue_1
  # DEBUG BEGIN_STMT
  return RetValue_1;

}



;; Function Supervisor_WdgM_GetElapsedTimeCallout (Supervisor_WdgM_GetElapsedTimeCallout, funcdef_no=5, decl_uid=5388, cgraph_uid=6, symbol_order=5)

Modification phase of node Supervisor_WdgM_GetElapsedTimeCallout/5
Supervisor_WdgM_GetElapsedTimeCallout (uint32 * PreviousTime, uint32 * ElapsedTime)
{
  uint32 CurrentTime;
  long unsigned int CurrentTime.0_1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.0_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.0_1);
  # DEBUG BEGIN_STMT
  _3 = *PreviousTime_8(D);
  _4 = _2 - _3;
  *ElapsedTime_9(D) = _4;
  # DEBUG BEGIN_STMT
  *PreviousTime_8(D) = _2;
  CurrentTime ={v} {CLOBBER};
  return;

}


