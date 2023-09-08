
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KillAlarm/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_KillSchedule/0:

 Propagating constants:

Not considering OS_KillSchedule for cloning; -fipa-cp-clone disabled.

overall_size: 24, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KillSchedule/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_KillAlarm/4 (OS_KillAlarm) @06b92d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillSchedule/0 (955630223 (estimated locally),8.09 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06b92c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillSchedule/0 (955630223 (estimated locally),8.09 per call) OS_KillSchedule/0 (955630223 (estimated locally),8.09 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c39828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/1 (OS_scheduleTableBase) @06c397e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillSchedule/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_KillSchedule/0 (OS_KillSchedule) @06b92a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_scheduleTableBase/1 (read)OS_kernDisableLevel/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (955630223 (estimated locally),8.09 per call) OS_KillAlarm/4 (955630223 (estimated locally),8.09 per call) OS_CORTEXM_IntSetDisablingLevel/3 (955630223 (estimated locally),8.09 per call) 

;; Function OS_KillSchedule (OS_KillSchedule, funcdef_no=0, decl_uid=6449, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KillSchedule/0
__attribute__((target ("general-regs-only")))
OS_KillSchedule (os_scheduleid_t sid, os_schedulestatus_t state)
{
  os_intstatus_t is;
  os_scheduleid_t s;
  struct os_scheduledynamic_t * sd;
  const struct os_schedule_t * ss;
  const struct os_schedule_t * OS_scheduleTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  short unsigned int OS_kernDisableLevel.1_4;
  short unsigned int _5;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG r => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG s => sid_9(D)
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.0_1 = OS_scheduleTableBase;
  _2 = (unsigned int) s_7;
  _3 = _2 * 36;
  ss_12 = OS_scheduleTableBase.0_1 + _3;
  # DEBUG ss => ss_12
  # DEBUG BEGIN_STMT
  sd_13 = ss_12->dynamic;
  # DEBUG sd => sd_13
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_4 = OS_kernDisableLevel;
  is_15 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_4);
  # DEBUG is => is_15
  # DEBUG BEGIN_STMT
  sd_13->adjRemaining = 0;
  # DEBUG BEGIN_STMT
  sd_13->next = 0;
  # DEBUG BEGIN_STMT
  sd_13->status = state_6;
  # DEBUG BEGIN_STMT
  _5 = ss_12->alarm;
  OS_KillAlarm (_5, 0);
  # DEBUG BEGIN_STMT
  s_20 = sd_13->chain;
  # DEBUG s => s_20
  # DEBUG BEGIN_STMT
  sd_13->chain = 255;
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_15);
  # DEBUG BEGIN_STMT
  # DEBUG state => 0

  <bb 4> [local count: 1073741824]:
  # state_6 = PHI <state_10(D)(2), 0(3)>
  # s_7 = PHI <sid_9(D)(2), s_20(3)>
  # DEBUG s => s_7
  # DEBUG state => state_6
  # DEBUG BEGIN_STMT
  if (s_7 != 255)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return 0;

}

