
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitAlarms/0:

 Propagating constants:

Not considering OS_InitAlarms for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitAlarms/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_totalAlarms/2 (OS_totalAlarms) @06c97828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitAlarms/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/1 (OS_alarmTableBase) @06c977e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitAlarms/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitAlarms/0 (OS_InitAlarms) @06cbca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_totalAlarms/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitAlarms (OS_InitAlarms, funcdef_no=0, decl_uid=6403, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitAlarms/0
__attribute__((target ("general-regs-only")))
OS_InitAlarms ()
{
  const struct os_alarm_t * const as;
  os_alarmid_t i;
  const struct os_alarm_t * OS_alarmTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  struct os_alarmdynamic_t * _4;
  short unsigned int OS_totalAlarms.1_5;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.0_1 = OS_alarmTableBase;
  _2 = (unsigned int) i_6;
  _3 = _2 * 28;
  as_9 = OS_alarmTableBase.0_1 + _3;
  # DEBUG as => as_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = as_9->dynamic;
  _4->next = 65535;
  # DEBUG BEGIN_STMT
  i_11 = i_6 + 1;
  # DEBUG i => i_11

  <bb 4> [local count: 1073741824]:
  # i_6 = PHI <0(2), i_11(3)>
  # DEBUG i => i_6
  # DEBUG BEGIN_STMT
  OS_totalAlarms.1_5 = OS_totalAlarms;
  if (OS_totalAlarms.1_5 > i_6)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


