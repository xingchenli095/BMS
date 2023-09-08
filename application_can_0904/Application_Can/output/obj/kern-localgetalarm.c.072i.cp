
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetAlarmDelta/3:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/2:
  Jump functions of caller  OS_LocalGetAlarm/0:

 Propagating constants:

Not considering OS_LocalGetAlarm for cloning; -fipa-cp-clone disabled.

overall_size: 32, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalGetAlarm/0:
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
    param [2]: BOTTOM
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

OS_counterTableBase/4 (OS_counterTableBase) @06c19ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalGetAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetAlarmDelta/3 (OS_GetAlarmDelta) @06b72d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalGetAlarm/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/2 (OS_CORTEXM_IntSetDisablingLevel) @06b72c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalGetAlarm/0 (1073741823 (estimated locally),1.00 per call) OS_LocalGetAlarm/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_kernDisableLevel/1 (OS_kernDisableLevel) @06c19990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalGetAlarm/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalGetAlarm/0 (OS_LocalGetAlarm) @06b72a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/1 (read)OS_counterTableBase/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/2 (1073741823 (estimated locally),1.00 per call) OS_GetAlarmDelta/3 (1073741823 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/2 (1073741823 (estimated locally),1.00 per call) 

;; Function OS_LocalGetAlarm (OS_LocalGetAlarm, funcdef_no=0, decl_uid=6426, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalGetAlarm/0
__attribute__((target ("general-regs-only")))
OS_LocalGetAlarm (os_alarmid_t a, const struct os_alarm_t * as, os_tick_t * out)
{
  os_errorresult_t result;
  os_int_t gadRes;
  os_intstatus_t is;
  struct os_counterdynamic_t * cd;
  struct os_alarmdynamic_t * ad;
  short unsigned int OS_kernDisableLevel.0_1;
  const struct os_counter_t * OS_counterTableBase.1_2;
  unsigned char _3;
  unsigned int _4;
  unsigned int _5;
  const struct os_counter_t * _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ad_14 = as_13(D)->dynamic;
  # DEBUG ad => ad_14
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_16 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_16
  # DEBUG BEGIN_STMT
  gadRes_20 = OS_GetAlarmDelta (a_17(D), as_13(D), ad_14, out_18(D));
  # DEBUG gadRes => gadRes_20
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_16);
  # DEBUG BEGIN_STMT
  if (gadRes_20 < 0)
    goto <bb 8>; [27.23%]
  else
    goto <bb 3>; [72.77%]

  <bb 3> [local count: 781361925]:
  # DEBUG BEGIN_STMT
  if (gadRes_20 != 0)
    goto <bb 8>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 507885250]:
  # DEBUG BEGIN_STMT
  OS_counterTableBase.1_2 = OS_counterTableBase;
  _3 = as_13(D)->counter;
  _4 = (unsigned int) _3;
  _5 = _4 * 32;
  _6 = OS_counterTableBase.1_2 + _5;
  cd_22 = _6->dynamic;
  # DEBUG cd => cd_22
  # DEBUG BEGIN_STMT
  _7 = *out_18(D);
  _8 = cd_22->error;
  if (_7 <= _8)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 253942625]:
  # DEBUG BEGIN_STMT
  *out_18(D) = 0;
  goto <bb 8>; [100.00%]

  <bb 6> [local count: 253942625]:
  # DEBUG BEGIN_STMT
  _9 = _7 - _8;
  *out_18(D) = _9;

  <bb 8> [local count: 1073741824]:
  # result_10 = PHI <10(2), 11(3), 0(6), 0(5)>
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  return result_10;

}


