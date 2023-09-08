
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AppIsAccessible/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_LocalStartScheduleTableSynchron/0:

 Propagating constants:

Not considering OS_LocalStartScheduleTableSynchron for cloning; -fipa-cp-clone disabled.

overall_size: 31, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalStartScheduleTableSynchron/0:
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

OS_AppIsAccessible/4 (OS_AppIsAccessible) @06cd9d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalStartScheduleTableSynchron/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06cd9c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalStartScheduleTableSynchron/0 (1073741824 (estimated locally),1.00 per call) OS_LocalStartScheduleTableSynchron/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06cb9900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalStartScheduleTableSynchron/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_alarmTableBase/1 (OS_alarmTableBase) @06cb98b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalStartScheduleTableSynchron/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalStartScheduleTableSynchron/0 (OS_LocalStartScheduleTableSynchron) @06cd9a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_kernDisableLevel/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) OS_AppIsAccessible/4 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LocalStartScheduleTableSynchron (OS_LocalStartScheduleTableSynchron, funcdef_no=0, decl_uid=6482, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalStartScheduleTableSynchron/0
__attribute__((target ("general-regs-only")))
OS_LocalStartScheduleTableSynchron (const struct os_schedule_t * ss)
{
  os_intstatus_t is;
  os_errorresult_t result;
  struct os_alarmdynamic_t * ad;
  struct os_scheduledynamic_t * sd;
  const struct os_alarm_t * OS_alarmTableBase.0_1;
  short unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  const struct os_alarm_t * _5;
  short unsigned int OS_kernDisableLevel.1_6;
  const struct os_appcontext_t * _7;
  int _8;
  unsigned char _9;
  unsigned char _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  sd_15 = ss_14(D)->dynamic;
  # DEBUG sd => sd_15
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.0_1 = OS_alarmTableBase;
  _2 = ss_14(D)->alarm;
  _3 = (unsigned int) _2;
  _4 = _3 * 28;
  _5 = OS_alarmTableBase.0_1 + _4;
  ad_16 = _5->dynamic;
  # DEBUG ad => ad_16
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_6 = OS_kernDisableLevel;
  is_18 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_6);
  # DEBUG is => is_18
  # DEBUG BEGIN_STMT
  _7 = ss_14(D)->app;
  _8 = OS_AppIsAccessible (_7);
  if (_8 == 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _9 = sd_15->status;
  if (_9 != 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  _10 = ad_16->inUse;
  if (_10 != 0)
    goto <bb 6>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 294876349]:
  # DEBUG BEGIN_STMT
  sd_15->adjRemaining = 4294967295;
  # DEBUG BEGIN_STMT
  sd_15->chain = 255;
  # DEBUG BEGIN_STMT
  sd_15->next = 0;
  # DEBUG BEGIN_STMT
  sd_15->status = 1;

  <bb 6> [local count: 1073741824]:
  # result_11 = PHI <154(2), 69(3), 20(4), 0(5)>
  # DEBUG result => result_11
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_18);
  # DEBUG BEGIN_STMT
  return result_11;

}


