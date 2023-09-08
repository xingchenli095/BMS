
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Mcu_SetMode/4:
  Jump functions of caller  Mcu_DistributePllClock/3:
  Jump functions of caller  Mcu_GetPllStatus/2:
  Jump functions of caller  Mcu_InitClock/1:
  Jump functions of caller  Eb_Intgr_McuArchClockInit_Init/0:

 Propagating constants:

Not considering Eb_Intgr_McuArchClockInit_Init for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Eb_Intgr_McuArchClockInit_Init/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Mcu_SetMode/4 (Mcu_SetMode) @0710c7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_McuArchClockInit_Init/0 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Mcu_DistributePllClock/3 (Mcu_DistributePllClock) @0710c700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_McuArchClockInit_Init/0 (118111601 (estimated locally),1.00 per call) 
  Calls: 
Mcu_GetPllStatus/2 (Mcu_GetPllStatus) @0710c620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_McuArchClockInit_Init/0 (1073741824 (estimated locally),9.09 per call) 
  Calls: 
Mcu_InitClock/1 (Mcu_InitClock) @0710c540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Eb_Intgr_McuArchClockInit_Init/0 (118111600 (estimated locally),1.00 per call) 
  Calls: 
Eb_Intgr_McuArchClockInit_Init/0 (Eb_Intgr_McuArchClockInit_Init) @0710c380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: Mcu_SetMode/4 (118111601 (estimated locally),1.00 per call) Mcu_DistributePllClock/3 (118111601 (estimated locally),1.00 per call) Mcu_GetPllStatus/2 (1073741824 (estimated locally),9.09 per call) Mcu_InitClock/1 (118111600 (estimated locally),1.00 per call) 

;; Function Eb_Intgr_McuArchClockInit_Init (Eb_Intgr_McuArchClockInit_Init, funcdef_no=0, decl_uid=8950, cgraph_uid=1, symbol_order=0)

Modification phase of node Eb_Intgr_McuArchClockInit_Init/0
Eb_Intgr_McuArchClockInit_Init ()
{
  <unnamed type> _1;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  Mcu_InitClock (0);
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = Mcu_GetPllStatus ();
  if (_1 != 51)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  Mcu_DistributePllClock ();
  # DEBUG BEGIN_STMT
  Mcu_SetMode (0);
  return;

}


