
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  FreeTimer_ConvertTicks2Us/10:
  Jump functions of caller  FreeTimer_StartTimeMeasurement/9:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnPostRun/8:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnRunTwo/7:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnGoOffOneB/6:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnGoOffOneA/5:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnPrpShutdown/4:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnStartupTwoB/3:
  Jump functions of caller  Eb_Intgr_BswM_Hook_OnStartupTwoA/2:

 Propagating constants:

Not considering Eb_Intgr_BswM_Hook_OnPostRun for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_Hook_OnRunTwo for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_Hook_OnGoOffOneB for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_Hook_OnGoOffOneA for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_Hook_OnPrpShutdown for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_Hook_OnStartupTwoB for cloning; -fipa-cp-clone disabled.
Not considering Eb_Intgr_BswM_Hook_OnStartupTwoA for cloning; -fipa-cp-clone disabled.

overall_size: 77, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Eb_Intgr_BswM_Hook_OnPostRun/8:
  Node: Eb_Intgr_BswM_Hook_OnRunTwo/7:
  Node: Eb_Intgr_BswM_Hook_OnGoOffOneB/6:
  Node: Eb_Intgr_BswM_Hook_OnGoOffOneA/5:
  Node: Eb_Intgr_BswM_Hook_OnPrpShutdown/4:
  Node: Eb_Intgr_BswM_Hook_OnStartupTwoB/3:
  Node: Eb_Intgr_BswM_Hook_OnStartupTwoA/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

FreeTimer_ConvertTicks2Us/10 (FreeTimer_ConvertTicks2Us) @06b8cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_Hook_OnPostRun/8 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnRunTwo/7 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
FreeTimer_StartTimeMeasurement/9 (FreeTimer_StartTimeMeasurement) @06b8cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_BswM_Hook_OnPostRun/8 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnRunTwo/7 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (1073741824 (estimated locally),1.00 per call) Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_BswM_Hook_OnPostRun/8 (Eb_Intgr_BswM_Hook_OnPostRun) @06b8ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_Hook_OnRunTwo/7 (Eb_Intgr_BswM_Hook_OnRunTwo) @06b8c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (Eb_Intgr_BswM_Hook_OnGoOffOneB) @06b8c700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (Eb_Intgr_BswM_Hook_OnGoOffOneA) @06b8c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (Eb_Intgr_BswM_Hook_OnPrpShutdown) @06b8c380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (Eb_Intgr_BswM_Hook_OnStartupTwoB) @06b8c1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (Eb_Intgr_BswM_Hook_OnStartupTwoA) @06b8c000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CurrentTime/0 (addr)CurrentTime/0 (read)CurrentTime/0 (write)TimeStamp/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: FreeTimer_ConvertTicks2Us/10 (1073741824 (estimated locally),1.00 per call) FreeTimer_StartTimeMeasurement/9 (1073741824 (estimated locally),1.00 per call) 
TimeStamp/1 (TimeStamp) @06b36f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (write)Eb_Intgr_BswM_Hook_OnRunTwo/7 (write)Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (write)Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (write)Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (write)Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (write)Eb_Intgr_BswM_Hook_OnPostRun/8 (write)
  Availability: available
  Varpool flags:
CurrentTime/0 (CurrentTime) @06b36ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (write)Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (addr)Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (read)Eb_Intgr_BswM_Hook_OnGoOffOneB/6 (write)Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (read)Eb_Intgr_BswM_Hook_OnRunTwo/7 (addr)Eb_Intgr_BswM_Hook_OnRunTwo/7 (read)Eb_Intgr_BswM_Hook_OnRunTwo/7 (write)Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (write)Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (addr)Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (read)Eb_Intgr_BswM_Hook_OnStartupTwoA/2 (write)Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (read)Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (addr)Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (read)Eb_Intgr_BswM_Hook_OnStartupTwoB/3 (write)Eb_Intgr_BswM_Hook_OnGoOffOneA/5 (addr)Eb_Intgr_BswM_Hook_OnPrpShutdown/4 (addr)Eb_Intgr_BswM_Hook_OnPostRun/8 (addr)Eb_Intgr_BswM_Hook_OnPostRun/8 (read)Eb_Intgr_BswM_Hook_OnPostRun/8 (write)
  Availability: available
  Varpool flags:

;; Function Eb_Intgr_BswM_Hook_OnStartupTwoA (Eb_Intgr_BswM_Hook_OnStartupTwoA, funcdef_no=0, decl_uid=5403, cgraph_uid=1, symbol_order=2)

Modification phase of node Eb_Intgr_BswM_Hook_OnStartupTwoA/2
Eb_Intgr_BswM_Hook_OnStartupTwoA ()
{
  long unsigned int CurrentTime.0_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.0_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.0_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnStartupTwoA = _2;
  return;

}



;; Function Eb_Intgr_BswM_Hook_OnStartupTwoB (Eb_Intgr_BswM_Hook_OnStartupTwoB, funcdef_no=1, decl_uid=5405, cgraph_uid=2, symbol_order=3)

Modification phase of node Eb_Intgr_BswM_Hook_OnStartupTwoB/3
Eb_Intgr_BswM_Hook_OnStartupTwoB ()
{
  long unsigned int CurrentTime.2_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.2_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.2_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnStartupTwoB = _2;
  return;

}



;; Function Eb_Intgr_BswM_Hook_OnPrpShutdown (Eb_Intgr_BswM_Hook_OnPrpShutdown, funcdef_no=2, decl_uid=5411, cgraph_uid=3, symbol_order=4)

Modification phase of node Eb_Intgr_BswM_Hook_OnPrpShutdown/4
Eb_Intgr_BswM_Hook_OnPrpShutdown ()
{
  long unsigned int CurrentTime.4_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.4_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.4_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnPrpShutdown = _2;
  return;

}



;; Function Eb_Intgr_BswM_Hook_OnGoOffOneA (Eb_Intgr_BswM_Hook_OnGoOffOneA, funcdef_no=3, decl_uid=5413, cgraph_uid=4, symbol_order=5)

Modification phase of node Eb_Intgr_BswM_Hook_OnGoOffOneA/5
Eb_Intgr_BswM_Hook_OnGoOffOneA ()
{
  long unsigned int CurrentTime.6_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.6_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.6_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnGoOffOneA = _2;
  return;

}



;; Function Eb_Intgr_BswM_Hook_OnGoOffOneB (Eb_Intgr_BswM_Hook_OnGoOffOneB, funcdef_no=4, decl_uid=5415, cgraph_uid=5, symbol_order=6)

Modification phase of node Eb_Intgr_BswM_Hook_OnGoOffOneB/6
Eb_Intgr_BswM_Hook_OnGoOffOneB ()
{
  long unsigned int CurrentTime.8_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.8_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.8_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnGoOffOneB = _2;
  return;

}



;; Function Eb_Intgr_BswM_Hook_OnRunTwo (Eb_Intgr_BswM_Hook_OnRunTwo, funcdef_no=5, decl_uid=5407, cgraph_uid=6, symbol_order=7)

Modification phase of node Eb_Intgr_BswM_Hook_OnRunTwo/7
Eb_Intgr_BswM_Hook_OnRunTwo ()
{
  long unsigned int CurrentTime.10_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.10_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.10_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnRunTwo = _2;
  return;

}



;; Function Eb_Intgr_BswM_Hook_OnPostRun (Eb_Intgr_BswM_Hook_OnPostRun, funcdef_no=6, decl_uid=5409, cgraph_uid=7, symbol_order=8)

Modification phase of node Eb_Intgr_BswM_Hook_OnPostRun/8
Eb_Intgr_BswM_Hook_OnPostRun ()
{
  long unsigned int CurrentTime.12_1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  FreeTimer_StartTimeMeasurement (&CurrentTime);
  # DEBUG BEGIN_STMT
  CurrentTime.12_1 = CurrentTime;
  _2 = FreeTimer_ConvertTicks2Us (CurrentTime.12_1);
  CurrentTime = _2;
  # DEBUG BEGIN_STMT
  TimeStamp.Time_Stamp_Hook_OnPostRun = _2;
  return;

}


