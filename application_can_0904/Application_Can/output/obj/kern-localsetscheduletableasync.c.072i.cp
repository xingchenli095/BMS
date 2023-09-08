
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AppIsAccessible/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_LocalSetScheduleTableAsync/0:

 Propagating constants:

Not considering OS_LocalSetScheduleTableAsync for cloning; -fipa-cp-clone disabled.

overall_size: 25, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalSetScheduleTableAsync/0:
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

OS_AppIsAccessible/4 (OS_AppIsAccessible) @06c9bd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSetScheduleTableAsync/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06c9bc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSetScheduleTableAsync/0 (1073741824 (estimated locally),1.00 per call) OS_LocalSetScheduleTableAsync/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c7b828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_scheduleTableBase/1 (OS_scheduleTableBase) @06c7b7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalSetScheduleTableAsync/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalSetScheduleTableAsync/0 (OS_LocalSetScheduleTableAsync) @06c9ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_scheduleTableBase/1 (read)OS_kernDisableLevel/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) OS_AppIsAccessible/4 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LocalSetScheduleTableAsync (OS_LocalSetScheduleTableAsync, funcdef_no=0, decl_uid=6493, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalSetScheduleTableAsync/0
__attribute__((target ("general-regs-only")))
OS_LocalSetScheduleTableAsync (os_scheduleid_t s)
{
  os_intstatus_t is;
  os_errorresult_t result;
  struct os_scheduledynamic_t * sd;
  const struct os_schedule_t * OS_scheduleTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_schedule_t * _4;
  short unsigned int OS_kernDisableLevel.1_5;
  const struct os_appcontext_t * _6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_scheduleTableBase.0_1 = OS_scheduleTableBase;
  _2 = (unsigned int) s_14(D);
  _3 = _2 * 36;
  _4 = OS_scheduleTableBase.0_1 + _3;
  sd_15 = _4->dynamic;
  # DEBUG sd => sd_15
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.1_5 = OS_kernDisableLevel;
  is_17 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.1_5);
  # DEBUG is => is_17
  # DEBUG BEGIN_STMT
  _6 = _4->app;
  _7 = OS_AppIsAccessible (_6);
  if (_7 == 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _8 = sd_15->status;
  _12 = _8 & 7;
  if (_12 == 3)
    goto <bb 4>; [48.89%]
  else
    goto <bb 5>; [51.11%]

  <bb 4> [local count: 341219046]:
  # DEBUG BEGIN_STMT
  _9 = _8 & 199;
  sd_15->status = _9;

  <bb 5> [local count: 1073741824]:
  # result_10 = PHI <154(2), 0(4), 41(3)>
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_17);
  # DEBUG BEGIN_STMT
  return result_10;

}


