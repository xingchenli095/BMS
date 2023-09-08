
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KillAlarm/4:
  Jump functions of caller  OS_AppIsAccessible/3:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/2:
  Jump functions of caller  OS_LocalCancelAlarm/0:

 Propagating constants:

Not considering OS_LocalCancelAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 23, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalCancelAlarm/0:
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

OS_KillAlarm/4 (OS_KillAlarm) @06c38e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalCancelAlarm/0 (223547679 (estimated locally),0.21 per call) 
  Calls: 
OS_AppIsAccessible/3 (OS_AppIsAccessible) @06c38d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalCancelAlarm/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/2 (OS_CORTEXM_IntSetDisablingLevel) @06c38c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalCancelAlarm/0 (1073741824 (estimated locally),1.00 per call) OS_LocalCancelAlarm/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/1 (OS_kernDisableLevel) @06c187e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalCancelAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalCancelAlarm/0 (OS_LocalCancelAlarm) @06c38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/2 (1073741824 (estimated locally),1.00 per call) OS_KillAlarm/4 (223547679 (estimated locally),0.21 per call) OS_AppIsAccessible/3 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/2 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LocalCancelAlarm (OS_LocalCancelAlarm, funcdef_no=0, decl_uid=6436, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalCancelAlarm/0
__attribute__((target ("general-regs-only")))
OS_LocalCancelAlarm (os_alarmid_t a, const struct os_alarm_t * as)
{
  os_intstatus_t is;
  struct os_alarmdynamic_t * ad;
  os_errorresult_t e;
  short unsigned int OS_kernDisableLevel.0_1;
  const struct os_appcontext_t * _2;
  int _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ad_9 = as_8(D)->dynamic;
  # DEBUG ad => ad_9
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_11 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_11
  # DEBUG BEGIN_STMT
  _2 = as_8(D)->app;
  _3 = OS_AppIsAccessible (_2);
  if (_3 == 0)
    goto <bb 5>; [35.00%]
  else
    goto <bb 3>; [65.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  _4 = ad_9->inUse;
  if (_4 == 1)
    goto <bb 4>; [32.03%]
  else
    goto <bb 5>; [67.97%]

  <bb 4> [local count: 223547679]:
  # DEBUG BEGIN_STMT
  e_15 = OS_KillAlarm (a_13(D), 0);
  # DEBUG e => e_15

  <bb 5> [local count: 1073741824]:
  # e_5 = PHI <154(2), e_15(4), 11(3)>
  # DEBUG e => e_5
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_11);
  # DEBUG BEGIN_STMT
  return e_5;

}


