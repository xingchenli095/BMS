
IPA constant propagation start:
Determining dynamic type for call: _22 (_15);
  Starting walk at: _22 (_15);
  instance pointer: _15  Outer instance pointer: _15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_50(D));
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.4_23);
  Function call may change dynamic type:_22 (_15);
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_50(D));
  Function call may change dynamic type:OS_EnqueueAlarmNoAdjust (cd_32(D), a_24, ad_43);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_EnqueueAlarmNoAdjust/2:
  Jump functions of caller  OS_AdvanceCounter/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _22 (_15);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_AdvanceCounter for cloning; -fipa-cp-clone disabled.

overall_size: 61, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_AdvanceCounter/0:
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
    param [3]: BOTTOM
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

OS_kernDisableLevel/4 (OS_kernDisableLevel) @06c9fca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AdvanceCounter/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06cc4d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_AdvanceCounter/0 (958878293 (estimated locally),4.17 per call) OS_AdvanceCounter/0 (958878293 (estimated locally),4.17 per call) 
  Calls: 
OS_EnqueueAlarmNoAdjust/2 (OS_EnqueueAlarmNoAdjust) @06cc4c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_AdvanceCounter/0 (316429836 (estimated locally),1.38 per call) 
  Calls: 
OS_alarmTableBase/1 (OS_alarmTableBase) @06c9fb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AdvanceCounter/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AdvanceCounter/0 (OS_AdvanceCounter) @06cc4a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_alarmTableBase/1 (read)OS_kernDisableLevel/4 (read)
  Referring: 
  Availability: available
  Function flags: count:229727068 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (958878293 (estimated locally),4.17 per call) OS_CORTEXM_IntSetDisablingLevel/3 (958878293 (estimated locally),4.17 per call) OS_EnqueueAlarmNoAdjust/2 (316429836 (estimated locally),1.38 per call) 
   Indirect call(958878293 (estimated locally),4.17 per call) 

;; Function OS_AdvanceCounter (OS_AdvanceCounter, funcdef_no=0, decl_uid=6441, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_AdvanceCounter/0
__attribute__((target ("general-regs-only")))
OS_AdvanceCounter (const struct os_counter_t * cs, struct os_counterdynamic_t * cd, os_tick_t adv, os_intstatus_t is)
{
  os_tick_t returnTicks;
  struct os_alarmdynamic_t * ad;
  os_alarmid_t a;
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  unsigned char _11;
  const struct os_alarm_t * OS_alarmTableBase.1_12;
  unsigned int _13;
  unsigned int _14;
  const struct os_alarm_t * _15;
  unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  short unsigned int _19;
  unsigned int _20;
  unsigned int _21;
  void (*<T552>) (const struct os_alarm_t *) _22;
  short unsigned int OS_kernDisableLevel.4_23;
  os_tick_t iftmp.0_26;
  os_tick_t iftmp.0_34;
  os_tick_t iftmp.0_35;

  <bb 2> [local count: 229727068]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG returnTicks => 0
  # DEBUG BEGIN_STMT
  _1 = cs_31(D)->maxallowedvalue;
  _2 = cd_32(D)->current;
  _3 = _1 - _2;
  if (_3 < adv_33(D))
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 114863534]:
  _5 = _2 + adv_33(D);
  _7 = _5 - _1;
  iftmp.0_35 = _7 + 4294967295;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 114863534]:
  iftmp.0_34 = _2 + adv_33(D);

  <bb 5> [local count: 229727068]:
  # iftmp.0_26 = PHI <iftmp.0_35(3), iftmp.0_34(4)>
  cd_32(D)->current = iftmp.0_26;
  # DEBUG BEGIN_STMT
  _9 = cd_32(D)->error;
  _10 = _9 + adv_33(D);
  cd_32(D)->error = _10;
  # DEBUG BEGIN_STMT
  _11 = cd_32(D)->lock;
  if (_11 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 6> [local count: 114863534]:
  # DEBUG BEGIN_STMT
  cd_32(D)->error = adv_33(D);
  # DEBUG BEGIN_STMT
  cd_32(D)->lock = 1;
  # DEBUG BEGIN_STMT
  a_40 = cd_32(D)->head;
  # DEBUG a => a_40
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  OS_alarmTableBase.1_12 = OS_alarmTableBase;
  _13 = (unsigned int) a_24;
  _14 = _13 * 28;
  _15 = OS_alarmTableBase.1_12 + _14;
  ad_43 = _15->dynamic;
  # DEBUG ad => ad_43
  # DEBUG BEGIN_STMT
  _16 = ad_43->delta;
  _17 = cd_32(D)->error;
  if (_16 > _17)
    goto <bb 8>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 8> [local count: 55807731]:
  # _8 = PHI <_16(7)>
  # _4 = PHI <_17(7)>
  # ad_6 = PHI <ad_43(7)>
  # DEBUG BEGIN_STMT
  _18 = _8 - _4;
  ad_6->delta = _18;
  # DEBUG BEGIN_STMT
  # DEBUG returnTicks => _18
  # DEBUG BEGIN_STMT
  # DEBUG returnTicks => _18
  # DEBUG a => 65535
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  _19 = ad_43->next;
  cd_32(D)->head = _19;
  # DEBUG BEGIN_STMT
  ad_43->next = 65535;
  # DEBUG BEGIN_STMT
  _20 = _17 - _16;
  cd_32(D)->error = _20;
  # DEBUG BEGIN_STMT
  _21 = ad_43->period;
  ad_43->delta = _21;
  # DEBUG BEGIN_STMT
  if (_21 == 0)
    goto <bb 10>; [67.00%]
  else
    goto <bb 11>; [33.00%]

  <bb 10> [local count: 642448456]:
  # DEBUG BEGIN_STMT
  ad_43->inUse = 0;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 316429836]:
  # DEBUG BEGIN_STMT
  OS_EnqueueAlarmNoAdjust (cd_32(D), a_24, ad_43);

  <bb 12> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_50(D));
  # DEBUG BEGIN_STMT
  _22 = _15->wrapper;
  _22 (_15);
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.4_23 = OS_kernDisableLevel;
  OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.4_23);
  # DEBUG BEGIN_STMT
  a_54 = cd_32(D)->head;
  # DEBUG a => a_54

  <bb 13> [local count: 1073741824]:
  # a_24 = PHI <a_40(6), a_54(12)>
  # DEBUG returnTicks => 0
  # DEBUG a => a_24
  # DEBUG BEGIN_STMT
  if (a_24 != 65535)
    goto <bb 7>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 114863532]:
  # returnTicks_56 = PHI <0(13), _18(8)>
  # DEBUG BEGIN_STMT
  cd_32(D)->error = 0;
  # DEBUG BEGIN_STMT
  cd_32(D)->lock = 0;

  <bb 15> [local count: 229727066]:
  # returnTicks_25 = PHI <0(5), returnTicks_56(14)>
  # DEBUG returnTicks => returnTicks_25
  # DEBUG BEGIN_STMT
  return returnTicks_25;

}


