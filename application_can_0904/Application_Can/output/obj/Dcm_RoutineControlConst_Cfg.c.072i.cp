
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/5:
  Jump functions of caller  Dcm_DIAGNOSTIC_LOOPBACK_Start/4:
  Jump functions of caller  Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/3:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/5 (Dcm_DIAGNOSTIC_TRIGGER_DTC_Start) @06c14000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspRoutineConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DIAGNOSTIC_LOOPBACK_Start/4 (Dcm_DIAGNOSTIC_LOOPBACK_Start) @06c108c0
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspRoutineConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/3 (Dcm_DIAGNOSTIC_CHECK_PRECOND_Start) @06c10540
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspRoutineConfig/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspRoutineInfoConfig/2 (Dcm_DspRoutineInfoConfig) @06be83f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dcm_RoutineControl_SessionTypes/0 (addr)Dcm_RoutineControl_SessionTypes/0 (addr)Dcm_RoutineControl_SessionTypes/0 (addr)
  Referring: Dcm_DspRoutineConfig/1 (addr)Dcm_DspRoutineConfig/1 (addr)Dcm_DspRoutineConfig/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DspRoutineConfig/1 (Dcm_DspRoutineConfig) @06be83a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Dcm_DIAGNOSTIC_CHECK_PRECOND_Start/3 (addr)Dcm_DspRoutineInfoConfig/2 (addr)Dcm_DIAGNOSTIC_LOOPBACK_Start/4 (addr)Dcm_DspRoutineInfoConfig/2 (addr)Dcm_DIAGNOSTIC_TRIGGER_DTC_Start/5 (addr)Dcm_DspRoutineInfoConfig/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_RoutineControl_SessionTypes/0 (Dcm_RoutineControl_SessionTypes) @06be8240
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_DspRoutineInfoConfig/2 (addr)Dcm_DspRoutineInfoConfig/2 (addr)Dcm_DspRoutineInfoConfig/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
