
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KernSetRelAlarm/5:
  Jump functions of caller  OS_KernSetAbsAlarm/4:
  Jump functions of caller  OS_ActivateAutoAlarms/0:

 Propagating constants:

Not considering OS_ActivateAutoAlarms for cloning; -fipa-cp-clone disabled.

overall_size: 26, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ActivateAutoAlarms/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nAlarms/6 (OS_nAlarms) @06c3e990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoAlarms/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_KernSetRelAlarm/5 (OS_KernSetRelAlarm) @06c5ed20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ActivateAutoAlarms/0 (630715947 (estimated locally),5.34 per call) 
  Calls: 
OS_KernSetAbsAlarm/4 (OS_KernSetAbsAlarm) @06c5ec40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_ActivateAutoAlarms/0 (324914276 (estimated locally),2.75 per call) 
  Calls: 
OS_autoStartAlarms/3 (OS_autoStartAlarms) @06c3e8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoAlarms/0 (addr)OS_ActivateAutoAlarms/0 (read)OS_ActivateAutoAlarms/0 (addr)OS_ActivateAutoAlarms/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_startModeAlarms/2 (OS_startModeAlarms) @06c3e870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoAlarms/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_appMode/1 (OS_appMode) @06c3e828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ActivateAutoAlarms/0 (read)
  Availability: not_available
  Varpool flags:
OS_ActivateAutoAlarms/0 (OS_ActivateAutoAlarms) @06c5ea80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_appMode/1 (read)OS_startModeAlarms/2 (read)OS_autoStartAlarms/3 (addr)OS_autoStartAlarms/3 (read)OS_autoStartAlarms/3 (addr)OS_autoStartAlarms/3 (read)OS_nAlarms/6 (read)
  Referring: 
  Availability: available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_KernSetRelAlarm/5 (630715947 (estimated locally),5.34 per call) OS_KernSetAbsAlarm/4 (324914276 (estimated locally),2.75 per call) 

;; Function OS_ActivateAutoAlarms (OS_ActivateAutoAlarms, funcdef_no=0, decl_uid=6411, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ActivateAutoAlarms/0
__attribute__((target ("general-regs-only")))
OS_ActivateAutoAlarms ()
{
  os_alarmid_t a;
  const struct os_autoalarm_t * aa;
  os_uint16_t idx;
  unsigned char OS_appMode.0_1;
  int _2;
  int _3;
  unsigned char _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  int _9;
  short unsigned int OS_nAlarms.2_10;

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  OS_appMode.0_1 = OS_appMode;
  _2 = (int) OS_appMode.0_1;
  idx_17 = OS_startModeAlarms[_2];
  # DEBUG idx => idx_17
  # DEBUG BEGIN_STMT
  _3 = (int) idx_17;
  aa_18 = &OS_autoStartAlarms[_3];
  # DEBUG aa => aa_18
  # DEBUG BEGIN_STMT
  a_19 = MEM[(const struct os_autoalarm_t *)&OS_autoStartAlarms][_3].alarm;
  # DEBUG a => a_19
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = aa_12->method;
  if (_4 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 324914276]:
  # DEBUG BEGIN_STMT
  _5 = aa_12->interval;
  _6 = aa_12->cycle;
  OS_KernSetAbsAlarm (a_13, _5, _6);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 630715947]:
  # DEBUG BEGIN_STMT
  _7 = aa_12->interval;
  _8 = aa_12->cycle;
  OS_KernSetRelAlarm (a_13, _7, _8);

  <bb 6> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  idx_22 = idx_11 + 1;
  # DEBUG idx => idx_22
  # DEBUG BEGIN_STMT
  _9 = (int) idx_22;
  aa_23 = &OS_autoStartAlarms[_9];
  # DEBUG aa => aa_23
  # DEBUG BEGIN_STMT
  a_24 = MEM[(const struct os_autoalarm_t *)&OS_autoStartAlarms][_9].alarm;
  # DEBUG a => a_24

  <bb 7> [local count: 1073741824]:
  # idx_11 = PHI <idx_17(2), idx_22(6)>
  # aa_12 = PHI <aa_18(2), aa_23(6)>
  # a_13 = PHI <a_19(2), a_24(6)>
  # DEBUG a => a_13
  # DEBUG aa => aa_12
  # DEBUG idx => idx_11
  # DEBUG BEGIN_STMT
  OS_nAlarms.2_10 = OS_nAlarms;
  if (OS_nAlarms.2_10 > a_13)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  return;

}


