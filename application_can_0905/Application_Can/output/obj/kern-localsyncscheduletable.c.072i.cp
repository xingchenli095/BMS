
IPA constant propagation start:
Determining dynamic type for call: e_17 = OS_DoSyncWaitingScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  Starting walk at: e_17 = OS_DoSyncWaitingScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  instance pointer: ss_8(D)  Outer instance pointer: ss_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = OS_AppIsAccessible (_3);
  Function call may change dynamic type:is_11 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: e_17 = OS_DoSyncWaitingScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  Starting walk at: e_17 = OS_DoSyncWaitingScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  instance pointer: sd_9  Outer instance pointer: sd_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = OS_AppIsAccessible (_3);
  Function call may change dynamic type:is_11 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: e_19 = OS_DoSyncRunningScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  Starting walk at: e_19 = OS_DoSyncRunningScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  instance pointer: ss_8(D)  Outer instance pointer: ss_8(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = OS_AppIsAccessible (_3);
  Function call may change dynamic type:is_11 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: e_19 = OS_DoSyncRunningScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  Starting walk at: e_19 = OS_DoSyncRunningScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  instance pointer: sd_9  Outer instance pointer: sd_9 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_4 = OS_AppIsAccessible (_3);
  Function call may change dynamic type:is_11 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
Determining dynamic type for call: _16 (cs_40);
  Starting walk at: _16 (cs_40);
  instance pointer: cs_40  Outer instance pointer: cs_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_53(D));
Determining dynamic type for call: _28 (cs_40);
  Starting walk at: _28 (cs_40);
  instance pointer: cs_40  Outer instance pointer: cs_40 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_29);
  Function call may change dynamic type:OS_EnqueueAlarm (cs_40, cd_41, _23, ad_39);
  Function call may change dynamic type:is_57 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.12_17);
  Function call may change dynamic type:_16 (cs_40);
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (is_53(D));

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_EnqueueAlarm/10:
  Jump functions of caller  OS_Panic/8:
  Jump functions of caller  OS_GetAlarmDelta/7:
  Jump functions of caller  OS_AppIsAccessible/5:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/4:
  Jump functions of caller  OS_LocalSyncScheduleTable/2:
    callsite  OS_LocalSyncScheduleTable/2 -> OS_DoSyncWaitingScheduleTable/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  OS_LocalSyncScheduleTable/2 -> OS_DoSyncRunningScheduleTable/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  OS_DoSyncWaitingScheduleTable/1:
    indirect simple callsite, calling param -1, offset 0, for stmt _28 (cs_40);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _16 (cs_40);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  OS_DoSyncRunningScheduleTable/0:

 Propagating constants:

Not considering OS_LocalSyncScheduleTable for cloning; -fipa-cp-clone disabled.

overall_size: 254, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalSyncScheduleTable/2:
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
  Node: OS_DoSyncWaitingScheduleTable/1:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: OS_DoSyncRunningScheduleTable/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_EnqueueAlarm/10 (OS_EnqueueAlarm) @06cf57e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoSyncWaitingScheduleTable/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_counterTableBase/9 (OS_counterTableBase) @06d16d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoSyncRunningScheduleTable/0 (read)OS_DoSyncWaitingScheduleTable/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Panic/8 (OS_Panic) @06cf5620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoSyncRunningScheduleTable/0 (273804165 (estimated locally),0.26 per call) 
  Calls: 
OS_GetAlarmDelta/7 (OS_GetAlarmDelta) @06cf5540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_DoSyncRunningScheduleTable/0 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
OS_alarmTableBase/6 (OS_alarmTableBase) @06d16c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoSyncRunningScheduleTable/0 (read)OS_DoSyncWaitingScheduleTable/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AppIsAccessible/5 (OS_AppIsAccessible) @06cf51c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSyncScheduleTable/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/4 (OS_CORTEXM_IntSetDisablingLevel) @06cf50e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalSyncScheduleTable/2 (345969511 (estimated locally),0.32 per call) OS_LocalSyncScheduleTable/2 (225056286 (estimated locally),0.21 per call) OS_LocalSyncScheduleTable/2 (1073741824 (estimated locally),1.00 per call) OS_DoSyncWaitingScheduleTable/1 (1073741824 (estimated locally),1.00 per call) OS_DoSyncWaitingScheduleTable/1 (248034361 (estimated locally),0.23 per call) OS_DoSyncWaitingScheduleTable/1 (248034361 (estimated locally),0.23 per call) OS_DoSyncRunningScheduleTable/0 (639102946 (estimated locally),0.60 per call) OS_DoSyncRunningScheduleTable/0 (195504764 (estimated locally),0.18 per call) OS_DoSyncRunningScheduleTable/0 (273804165 (estimated locally),0.26 per call) 
  Calls: 
OS_kernDisableLevel/3 (OS_kernDisableLevel) @06c1fbd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoSyncWaitingScheduleTable/1 (read)OS_LocalSyncScheduleTable/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_LocalSyncScheduleTable/2 (OS_LocalSyncScheduleTable) @06b94000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (345969511 (estimated locally),0.32 per call) OS_DoSyncWaitingScheduleTable/1 (330942073 (estimated locally),0.31 per call) OS_DoSyncRunningScheduleTable/0 (171773953 (estimated locally),0.16 per call) OS_CORTEXM_IntSetDisablingLevel/4 (225056286 (estimated locally),0.21 per call) OS_AppIsAccessible/5 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) 
OS_DoSyncWaitingScheduleTable/1 (OS_DoSyncWaitingScheduleTable) @06b94e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_alarmTableBase/6 (read)OS_counterTableBase/9 (read)OS_kernDisableLevel/3 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_LocalSyncScheduleTable/2 (330942073 (estimated locally),0.31 per call) 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (1073741824 (estimated locally),1.00 per call) OS_EnqueueAlarm/10 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/4 (248034361 (estimated locally),0.23 per call) OS_CORTEXM_IntSetDisablingLevel/4 (248034361 (estimated locally),0.23 per call) 
   Indirect call(127775277 (estimated locally),0.12 per call) 
   Indirect call(248034361 (estimated locally),0.23 per call) 
OS_DoSyncRunningScheduleTable/0 (OS_DoSyncRunningScheduleTable) @06b94a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_alarmTableBase/6 (read)OS_counterTableBase/9 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: OS_LocalSyncScheduleTable/2 (171773953 (estimated locally),0.16 per call) 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (639102946 (estimated locally),0.60 per call) OS_CORTEXM_IntSetDisablingLevel/4 (195504764 (estimated locally),0.18 per call) OS_CORTEXM_IntSetDisablingLevel/4 (273804165 (estimated locally),0.26 per call) OS_Panic/8 (273804165 (estimated locally),0.26 per call) OS_GetAlarmDelta/7 (1073741823 (estimated locally),1.00 per call) 

;; Function OS_LocalSyncScheduleTable (OS_LocalSyncScheduleTable, funcdef_no=2, decl_uid=6488, cgraph_uid=3, symbol_order=2)

Modification phase of node OS_LocalSyncScheduleTable/2
__attribute__((target ("general-regs-only")))
OS_LocalSyncScheduleTable (const struct os_schedule_t * ss, os_tick_t globalTime)
{
  os_schedulestatus_t state;
  os_intstatus_t is;
  os_errorresult_t e;
  struct os_scheduledynamic_t * sd;
  short unsigned int OS_kernDisableLevel.0_1;
  unsigned char _2;
  const struct os_appcontext_t * _3;
  int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  sd_9 = ss_8(D)->dynamic;
  # DEBUG sd => sd_9
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_1 = OS_kernDisableLevel;
  is_11 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_1);
  # DEBUG is => is_11
  # DEBUG BEGIN_STMT
  _2 = sd_9->status;
  state_12 = _2 & 7;
  # DEBUG state => state_12
  # DEBUG BEGIN_STMT
  _3 = ss_8(D)->app;
  _4 = OS_AppIsAccessible (_3);
  if (_4 == 0)
    goto <bb 3>; [20.96%]
  else
    goto <bb 4>; [79.04%]

  <bb 3> [local count: 225056286]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_11);
  # DEBUG BEGIN_STMT
  # DEBUG e => 154
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 848685538]:
  # DEBUG BEGIN_STMT
  if (state_12 == 3)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 171773953]:
  # DEBUG BEGIN_STMT
  e_19 = OS_DoSyncRunningScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  # DEBUG e => e_19
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 676911585]:
  # DEBUG BEGIN_STMT
  if (state_12 == 1)
    goto <bb 7>; [48.89%]
  else
    goto <bb 8>; [51.11%]

  <bb 7> [local count: 330942073]:
  # DEBUG BEGIN_STMT
  e_17 = OS_DoSyncWaitingScheduleTable (ss_8(D), sd_9, globalTime_15(D), is_11);
  # DEBUG e => e_17
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 345969511]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_11);
  # DEBUG BEGIN_STMT
  # DEBUG e => 41

  <bb 9> [local count: 1073741823]:
  # e_5 = PHI <154(3), e_19(5), e_17(7), 41(8)>
  # DEBUG e => e_5
  # DEBUG BEGIN_STMT
  return e_5;

}


