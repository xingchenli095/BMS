
IPA constant propagation start:
Determining dynamic type for call: _2 (&SircConfig);
  Starting walk at: _2 (&SircConfig);
  instance pointer: &SircConfig  Outer instance pointer: SircConfig offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _2 (&FircConfig);
  Starting walk at: _2 (&FircConfig);
  instance pointer: &FircConfig  Outer instance pointer: FircConfig offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_ReportClockErrors/17:
  Jump functions of caller  Clock_Ip_TimeoutExpired/16:
  Jump functions of caller  Clock_Ip_StartTimeout/15:
  Jump functions of caller  Clock_Ip_Command/11:
    callsite  Clock_Ip_Command/11 -> Clock_Ip_PowerClockIpModules/2 : 
    callsite  Clock_Ip_Command/11 -> Clock_Ip_ClockInitializeObjects/9 : 
  Jump functions of caller  Clock_Ip_ClockPowerModeChangeNotification/10:
  Jump functions of caller  Clock_Ip_ClockInitializeObjects/9:
  Jump functions of caller  EnableSircInStandbyMode/8:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (&SircConfig);
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 32, cst: 1
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  DisableSircInStandbyMode/7:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (3);
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
  Jump functions of caller  EnableFircInStandbyMode/6:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (&FircConfig);
       param 0: UNKNOWN
         Aggregate passed by reference:
           offset: 32, cst: 1
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  DisableFircInStandbyMode/5:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (1);
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Clock_Ip_McMeEnterKey/3:
  Jump functions of caller  Clock_Ip_PowerClockIpModules/2:
    callsite  Clock_Ip_PowerClockIpModules/2 -> Clock_Ip_McMeEnterKey/3 : 
    callsite  Clock_Ip_PowerClockIpModules/2 -> Clock_Ip_McMeEnterKey/3 : 
    callsite  Clock_Ip_PowerClockIpModules/2 -> Clock_Ip_McMeEnterKey/3 : 
    callsite  Clock_Ip_PowerClockIpModules/2 -> Clock_Ip_McMeEnterKey/3 : 

 Propagating constants:

Not considering Clock_Ip_Command for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ClockPowerModeChangeNotification for cloning; -fipa-cp-clone disabled.
Not considering EnableSircInStandbyMode for cloning; -fipa-cp-clone disabled.
Not considering DisableSircInStandbyMode for cloning; -fipa-cp-clone disabled.
Not considering EnableFircInStandbyMode for cloning; -fipa-cp-clone disabled.
Not considering DisableFircInStandbyMode for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_McMeEnterKey for cloning; -fipa-cp-clone disabled.

overall_size: 215, max_new_size: 11001
 - context independent values, size: 11, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_Command/11:
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
  Node: Clock_Ip_ClockPowerModeChangeNotification/10:
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
  Node: Clock_Ip_ClockInitializeObjects/9:
  Node: EnableSircInStandbyMode/8:
  Node: DisableSircInStandbyMode/7:
  Node: EnableFircInStandbyMode/6:
  Node: DisableFircInStandbyMode/5:
  Node: Clock_Ip_McMeEnterKey/3:
  Node: Clock_Ip_PowerClockIpModules/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_ReportClockErrors/17 (Clock_Ip_ReportClockErrors) @06f9b700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PowerClockIpModules/2 (23248379 (estimated locally),0.07 per call) Clock_Ip_PowerClockIpModules/2 (23248379 (estimated locally),0.07 per call) Clock_Ip_PowerClockIpModules/2 (23248379 (estimated locally),0.07 per call) Clock_Ip_PowerClockIpModules/2 (23248379 (estimated locally),0.07 per call) 
  Calls: 
Clock_Ip_TimeoutExpired/16 (Clock_Ip_TimeoutExpired) @06f9b620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PowerClockIpModules/2 (1073741824 (estimated locally),3.08 per call) Clock_Ip_PowerClockIpModules/2 (1073741824 (estimated locally),3.08 per call) Clock_Ip_PowerClockIpModules/2 (1073741824 (estimated locally),3.08 per call) Clock_Ip_PowerClockIpModules/2 (1073741824 (estimated locally),3.08 per call) 
  Calls: 
Clock_Ip_StartTimeout/15 (Clock_Ip_StartTimeout) @06f9b540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_axIntOscCallbacks/14 (Clock_Ip_axIntOscCallbacks) @06f94ea0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockInitializeObjects/9 (addr)Clock_Ip_ClockInitializeObjects/9 (addr)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8IrcoscCallbackIndex/13 (Clock_Ip_au8IrcoscCallbackIndex) @06f94e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_ClockInitializeObjects/9 (read)Clock_Ip_ClockInitializeObjects/9 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_bObjectsAreInitialized.8871/12 (Clock_Ip_bObjectsAreInitialized) @06f94e10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_ClockInitializeObjects/9 (read)Clock_Ip_ClockInitializeObjects/9 (write)
  Availability: available
  Varpool flags: initialized
Clock_Ip_Command/11 (Clock_Ip_Command) @06f958c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_PowerClockIpModules/2 (357878150 (estimated locally),0.33 per call) Clock_Ip_ClockInitializeObjects/9 (357878150 (estimated locally),0.33 per call) 
Clock_Ip_ClockPowerModeChangeNotification/10 (Clock_Ip_ClockPowerModeChangeNotification) @06f95700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ClockInitializeObjects/9 (Clock_Ip_ClockInitializeObjects) @06f95540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_bObjectsAreInitialized.8871/12 (read)Clock_Ip_bObjectsAreInitialized.8871/12 (write)Clock_Ip_au8IrcoscCallbackIndex/13 (read)Clock_Ip_axIntOscCallbacks/14 (addr)Clock_Ip_pxSircStdbyClock/0 (write)Clock_Ip_au8IrcoscCallbackIndex/13 (read)Clock_Ip_axIntOscCallbacks/14 (addr)Clock_Ip_pxFircStdbyClock/1 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Clock_Ip_Command/11 (357878150 (estimated locally),0.33 per call) 
  Calls: 
EnableSircInStandbyMode/8 (EnableSircInStandbyMode) @06f95380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxSircStdbyClock/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
DisableSircInStandbyMode/7 (DisableSircInStandbyMode) @06f951c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxSircStdbyClock/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
EnableFircInStandbyMode/6 (EnableFircInStandbyMode) @06f95000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxFircStdbyClock/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
DisableFircInStandbyMode/5 (DisableFircInStandbyMode) @06f782a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_pxFircStdbyClock/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_McMeEnterKey/3 (Clock_Ip_McMeEnterKey) @06f78c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) Clock_Ip_PowerClockIpModules/2 (114863532 (estimated locally),0.33 per call) 
  Calls: 
Clock_Ip_PowerClockIpModules/2 (Clock_Ip_PowerClockIpModules) @06f78a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:348071309 (estimated locally) body local optimize_size
  Called by: Clock_Ip_Command/11 (357878150 (estimated locally),0.33 per call) 
  Calls: Clock_Ip_ReportClockErrors/17 (23248379 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/16 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/15 (114863532 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/3 (114863532 (estimated locally),0.33 per call) Clock_Ip_ReportClockErrors/17 (23248379 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/16 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/15 (114863532 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/3 (114863532 (estimated locally),0.33 per call) Clock_Ip_ReportClockErrors/17 (23248379 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/16 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/15 (114863532 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/3 (114863532 (estimated locally),0.33 per call) Clock_Ip_ReportClockErrors/17 (23248379 (estimated locally),0.07 per call) Clock_Ip_TimeoutExpired/16 (1073741824 (estimated locally),3.08 per call) Clock_Ip_StartTimeout/15 (114863532 (estimated locally),0.33 per call) Clock_Ip_McMeEnterKey/3 (114863532 (estimated locally),0.33 per call) 
Clock_Ip_pxFircStdbyClock/1 (Clock_Ip_pxFircStdbyClock) @06ec1ee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: DisableFircInStandbyMode/5 (read)Clock_Ip_ClockInitializeObjects/9 (write)EnableFircInStandbyMode/6 (read)
  Availability: available
  Varpool flags:
Clock_Ip_pxSircStdbyClock/0 (Clock_Ip_pxSircStdbyClock) @06ec1ea0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: DisableSircInStandbyMode/7 (read)Clock_Ip_ClockInitializeObjects/9 (write)EnableSircInStandbyMode/8 (read)
  Availability: available
  Varpool flags:

;; Function Clock_Ip_McMeEnterKey (Clock_Ip_McMeEnterKey, funcdef_no=1, decl_uid=8636, cgraph_uid=2, symbol_order=3)

Modification phase of node Clock_Ip_McMeEnterKey/3
Clock_Ip_McMeEnterKey ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].CTL_KEY ={v} 23280;
  # DEBUG BEGIN_STMT
  MEM[(struct MC_ME_Type *)1076740096B].CTL_KEY ={v} 42255;
  return;

}



;; Function DisableFircInStandbyMode (DisableFircInStandbyMode, funcdef_no=3, decl_uid=8628, cgraph_uid=4, symbol_order=5)

Modification phase of node DisableFircInStandbyMode/5
DisableFircInStandbyMode ()
{
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxFircStdbyClock.0_1;
  void (*<Ta02>) (Clock_Ip_NameType) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_pxFircStdbyClock.0_1 = Clock_Ip_pxFircStdbyClock;
  _2 = Clock_Ip_pxFircStdbyClock.0_1->Disable;
  _2 (1);
  return;

}



;; Function EnableFircInStandbyMode (EnableFircInStandbyMode, funcdef_no=4, decl_uid=8630, cgraph_uid=5, symbol_order=6)

Modification phase of node EnableFircInStandbyMode/6
EnableFircInStandbyMode ()
{
  struct Clock_Ip_IrcoscConfigType FircConfig;
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxFircStdbyClock.1_1;
  void (*<T9ff>) (const struct Clock_Ip_IrcoscConfigType *) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  FircConfig.Enable = 1;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxFircStdbyClock.1_1 = Clock_Ip_pxFircStdbyClock;
  _2 = Clock_Ip_pxFircStdbyClock.1_1->Enable;
  _2 (&FircConfig);
  FircConfig ={v} {CLOBBER};
  return;

}



;; Function DisableSircInStandbyMode (DisableSircInStandbyMode, funcdef_no=5, decl_uid=8632, cgraph_uid=6, symbol_order=7)

Modification phase of node DisableSircInStandbyMode/7
DisableSircInStandbyMode ()
{
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxSircStdbyClock.2_1;
  void (*<Ta02>) (Clock_Ip_NameType) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Clock_Ip_pxSircStdbyClock.2_1 = Clock_Ip_pxSircStdbyClock;
  _2 = Clock_Ip_pxSircStdbyClock.2_1->Disable;
  _2 (3);
  return;

}



;; Function EnableSircInStandbyMode (EnableSircInStandbyMode, funcdef_no=6, decl_uid=8634, cgraph_uid=7, symbol_order=8)

Modification phase of node EnableSircInStandbyMode/8
EnableSircInStandbyMode ()
{
  struct Clock_Ip_IrcoscConfigType SircConfig;
  const struct Clock_Ip_IntOscCallbackType * Clock_Ip_pxSircStdbyClock.3_1;
  void (*<T9ff>) (const struct Clock_Ip_IrcoscConfigType *) _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SircConfig.Enable = 1;
  # DEBUG BEGIN_STMT
  Clock_Ip_pxSircStdbyClock.3_1 = Clock_Ip_pxSircStdbyClock;
  _2 = Clock_Ip_pxSircStdbyClock.3_1->Enable;
  _2 (&SircConfig);
  SircConfig ={v} {CLOBBER};
  return;

}



;; Function Clock_Ip_ClockPowerModeChangeNotification (Clock_Ip_ClockPowerModeChangeNotification, funcdef_no=8, decl_uid=8801, cgraph_uid=9, symbol_order=10)

Modification phase of node Clock_Ip_ClockPowerModeChangeNotification/10
Clock_Ip_ClockPowerModeChangeNotification (Clock_Ip_PowerModesType PowerMode, Clock_Ip_PowerNotificationType Notification)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_Command (Clock_Ip_Command, funcdef_no=9, decl_uid=8819, cgraph_uid=10, symbol_order=11)

Modification phase of node Clock_Ip_Command/11
Clock_Ip_Command (const struct Clock_Ip_ClockConfigType * Config, Clock_Ip_CommandType Command)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  switch (Command_2(D)) <default: <L4> [33.33%], case 1: <L6> [33.33%], case 2: <L0> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  Clock_Ip_ClockInitializeObjects ();
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L6>:
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => Config_5(D)
  # DEBUG INLINE_ENTRY Clock_Ip_SpecificPlatformInitClock
  # DEBUG Config => D#1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Clock_Ip_PowerClockIpModules ();

  <bb 5> [local count: 1073634451]:
<L4>:
  return;

}


