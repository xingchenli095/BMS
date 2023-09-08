
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ShutdownNoHooks/8:
  Jump functions of caller  OS_KernSimTimerAdvance/7:
    indirect simple callsite, calling param -1, offset 0, for stmt _15 ();
  Jump functions of caller  OS_SimTimerSetup/6:
  Jump functions of caller  OS_SimTimerStop/5:
  Jump functions of caller  OS_SimTimerStart/4:
  Jump functions of caller  OS_SimTimerRead/3:
  Jump functions of caller  OS_SimTimerInit/2:

 Propagating constants:

Not considering OS_KernSimTimerAdvance for cloning; -fipa-cp-clone disabled.
Not considering OS_SimTimerSetup for cloning; -fipa-cp-clone disabled.
Not considering OS_SimTimerStop for cloning; -fipa-cp-clone disabled.
Not considering OS_SimTimerStart for cloning; -fipa-cp-clone disabled.
Not considering OS_SimTimerRead for cloning; -fipa-cp-clone disabled.
Not considering OS_SimTimerInit for cloning; -fipa-cp-clone disabled.

overall_size: 109, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernSimTimerAdvance/7:
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
  Node: OS_SimTimerSetup/6:
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
  Node: OS_SimTimerStop/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_SimTimerStart/4:
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
  Node: OS_SimTimerRead/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_SimTimerInit/2:
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

OS_isrTableBase/10 (OS_isrTableBase) @06dcb480
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SimTimerSetup/6 (read)OS_KernSimTimerAdvance/7 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/9 (OS_nInterrupts) @06dcb438
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SimTimerSetup/6 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ShutdownNoHooks/8 (OS_ShutdownNoHooks) @06da1540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_SimTimerInit/2 (262422502 (estimated locally),0.24 per call) OS_SimTimerInit/2 (177167401 (estimated locally),0.17 per call) 
  Calls: 
OS_KernSimTimerAdvance/7 (OS_KernSimTimerAdvance) @06da10e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_simTimer/0 (read)OS_simTimer/0 (read)OS_simTimer/0 (write)OS_simTimer/0 (read)OS_simTimer/0 (read)OS_simTimer/0 (read)OS_simTimer/0 (read)OS_isrTableBase/10 (read)OS_simTimer/0 (read)OS_simTimer/0 (write)OS_simTimer/0 (write)
  Referring: 
  Availability: available
  Function flags: count:977248435 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(134224439 (estimated locally),0.14 per call) 
OS_SimTimerSetup/6 (OS_SimTimerSetup) @06cf2ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_nInterrupts/9 (read)OS_isrTableBase/10 (read)OS_simTimer/0 (write)OS_simTimer/0 (write)OS_simTimer/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_SimTimerStop/5 (OS_SimTimerStop) @06cf2d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_simTimer/0 (write)
  Referring: OS_simTimerDriver/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_SimTimerStart/4 (OS_SimTimerStart) @06cf2b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_simTimer/0 (read)OS_simTimer/0 (write)OS_simTimer/0 (read)OS_simTimer/0 (write)
  Referring: OS_simTimerDriver/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_SimTimerRead/3 (OS_SimTimerRead) @06cf29a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_simTimer/0 (read)
  Referring: OS_simTimerDriver/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_SimTimerInit/2 (OS_SimTimerInit) @06cf27e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_simTimer/0 (read)OS_simTimer/0 (write)OS_simTimer/0 (write)OS_simTimer/0 (write)
  Referring: OS_simTimerDriver/1 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ShutdownNoHooks/8 (262422502 (estimated locally),0.24 per call) OS_ShutdownNoHooks/8 (177167401 (estimated locally),0.17 per call) 
OS_simTimerDriver/1 (OS_simTimerDriver) @06cbf480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_SimTimerInit/2 (addr)OS_SimTimerRead/3 (addr)OS_SimTimerStart/4 (addr)OS_SimTimerStop/5 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_simTimer/0 (OS_simTimer) @06cbf3f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly section:.bss.shared.os.OS_simTimer
  References: 
  Referring: OS_SimTimerRead/3 (read)OS_SimTimerSetup/6 (write)OS_SimTimerInit/2 (write)OS_SimTimerStart/4 (write)OS_SimTimerStop/5 (write)OS_SimTimerInit/2 (write)OS_SimTimerInit/2 (write)OS_SimTimerStart/4 (read)OS_SimTimerStart/4 (write)OS_SimTimerStart/4 (read)OS_SimTimerInit/2 (read)OS_SimTimerSetup/6 (write)OS_SimTimerSetup/6 (write)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (write)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (read)OS_KernSimTimerAdvance/7 (write)OS_KernSimTimerAdvance/7 (write)
  Availability: available
  Varpool flags:

;; Function OS_SimTimerRead (OS_SimTimerRead, funcdef_no=1, decl_uid=7428, cgraph_uid=2, symbol_order=3)

Modification phase of node OS_SimTimerRead/3
__attribute__((target ("general-regs-only")))
OS_SimTimerRead (const struct os_hwt_t * td)
{
  unsigned char _1;
  int _2;
  os_timervalue_t _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_4(D)->major;
  _2 = (int) _1;
  # DEBUG D#1 => &OS_simTimer[_2]
  # DEBUG tmr => D#1
  # DEBUG BEGIN_STMT
  _5 = MEM[(struct os_simtimer_t *)&OS_simTimer][_2].count;
  return _5;

}



;; Function OS_SimTimerStart (OS_SimTimerStart, funcdef_no=2, decl_uid=7432, cgraph_uid=3, symbol_order=4)

Modification phase of node OS_SimTimerStart/4
__attribute__((target ("general-regs-only")))
OS_SimTimerStart (const struct os_hwt_t * td, os_timervalue_t old, os_tick_t delta)
{
  unsigned char _1;
  int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  int _6;
  unsigned int _7;
  unsigned char _8;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_11(D)->major;
  _2 = (int) _1;
  # DEBUG D#2 => &OS_simTimer[_2]
  # DEBUG tmr => D#2
  # DEBUG BEGIN_STMT
  _3 = old_12(D) + delta_13(D);
  _4 = MEM[(struct os_simtimer_t *)&OS_simTimer][_2].mask;
  _5 = td_11(D)->minor;
  _6 = (int) _5;
  _7 = _3 & _4;
  MEM[(struct os_simtimer_t *)&OS_simTimer][_2].channel[_6].compare = _7;
  # DEBUG BEGIN_STMT
  _8 = MEM[(struct os_simtimer_t *)&OS_simTimer][_2].channel[_6].control;
  _9 = _8 | 1;
  MEM[(struct os_simtimer_t *)&OS_simTimer][_2].channel[_6].control = _9;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function OS_SimTimerStop (OS_SimTimerStop, funcdef_no=3, decl_uid=7434, cgraph_uid=4, symbol_order=5)

Modification phase of node OS_SimTimerStop/5
__attribute__((target ("general-regs-only")))
OS_SimTimerStop (const struct os_hwt_t * td)
{
  unsigned char _1;
  int _2;
  unsigned char _3;
  int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_6(D)->major;
  _2 = (int) _1;
  # DEBUG D#3 => &OS_simTimer[_2]
  # DEBUG tmr => D#3
  # DEBUG BEGIN_STMT
  _3 = td_6(D)->minor;
  _4 = (int) _3;
  MEM[(struct os_simtimer_t *)&OS_simTimer][_2].channel[_4].control = 0;
  return;

}



;; Function OS_SimTimerInit (OS_SimTimerInit, funcdef_no=0, decl_uid=7426, cgraph_uid=1, symbol_order=2)

Modification phase of node OS_SimTimerInit/2
__attribute__((target ("general-regs-only")))
OS_SimTimerInit (const struct os_hwt_t * td)
{
  os_timervalue_t mask;
  unsigned char _1;
  int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_11(D)->major;
  _2 = (int) _1;
  # DEBUG D#4 => &OS_simTimer[_2]
  # DEBUG tmr => D#4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = MEM[(struct os_simtimer_t *)&OS_simTimer][_2].mask;
  if (_3 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  mask_13 = td_11(D)->wrapMask;
  # DEBUG mask => mask_13
  # DEBUG BEGIN_STMT
  MEM[(struct os_simtimer_t *)&OS_simTimer][_2].mask = mask_13;
  # DEBUG BEGIN_STMT
  _4 = mask_13 + 1;
  _5 = _4 & mask_13;
  if (_5 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 4> [local count: 177167401]:
  # DEBUG BEGIN_STMT
  OS_ShutdownNoHooks ();
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _6 = td_11(D)->wrapMask;
  if (_3 != _6)
    goto <bb 6>; [48.88%]
  else
    goto <bb 7>; [51.12%]

  <bb 6> [local count: 262422502]:
  # DEBUG BEGIN_STMT
  OS_ShutdownNoHooks ();

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = td_11(D)->minor;
  _8 = (int) _7;
  MEM[(struct os_simtimer_t *)&OS_simTimer][_2].channel[_8].compare = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_simtimer_t *)&OS_simTimer][_2].channel[_8].control = 0;
  return;

}



;; Function OS_SimTimerSetup (OS_SimTimerSetup, funcdef_no=4, decl_uid=5426, cgraph_uid=5, symbol_order=6)

Modification phase of node OS_SimTimerSetup/6
__attribute__((target ("general-regs-only")))
OS_SimTimerSetup (os_unsigned_t tmr, os_unsigned_t chan, os_isrid_t isrId)
{
  os_result_t result;
  short unsigned int OS_nInterrupts.0_1;
  const struct os_isr_t * OS_isrTableBase.1_2;
  unsigned int _3;
  unsigned int _4;
  const struct os_isr_t * _5;
  unsigned char _6;
  short unsigned int _7;
  unsigned char _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  if (tmr_11(D) > 1)
    goto <bb 7>; [43.66%]
  else
    goto <bb 3>; [56.34%]

  <bb 3> [local count: 604946144]:
  # DEBUG BEGIN_STMT
  if (chan_12(D) > 1)
    goto <bb 7>; [43.66%]
  else
    goto <bb 4>; [56.34%]

  <bb 4> [local count: 340826657]:
  # DEBUG BEGIN_STMT
  OS_nInterrupts.0_1 = OS_nInterrupts;
  if (OS_nInterrupts.0_1 <= isrId_14(D))
    goto <bb 7>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 221537327]:
  OS_isrTableBase.1_2 = OS_isrTableBase;
  _3 = (unsigned int) isrId_14(D);
  _4 = _3 * 68;
  _5 = OS_isrTableBase.1_2 + _4;
  _6 = _5->flags;
  _10 = _6 & 3;
  if (_10 != 2)
    goto <bb 7>; [51.11%]
  else
    goto <bb 6>; [48.89%]

  <bb 6> [local count: 108309599]:
  # DEBUG BEGIN_STMT
  _7 = isrId_14(D) + 1;
  OS_simTimer[tmr_11(D)].channel[chan_12(D)].isr = _7;
  # DEBUG BEGIN_STMT
  OS_simTimer[tmr_11(D)].channel[chan_12(D)].compare = 0;
  # DEBUG BEGIN_STMT
  OS_simTimer[tmr_11(D)].channel[chan_12(D)].control = 0;

  <bb 7> [local count: 1073741824]:
  # result_8 = PHI <3(2), 3(3), 8(5), 0(6), 8(4)>
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_8;

}



;; Function OS_KernSimTimerAdvance (OS_KernSimTimerAdvance, funcdef_no=5, decl_uid=7413, cgraph_uid=6, symbol_order=7)

Modification phase of node OS_KernSimTimerAdvance/7
__attribute__((target ("general-regs-only")))
OS_KernSimTimerAdvance (os_unsigned_t tmr, os_tick_t incr)
{
  os_unsigned_t c;
  os_timervalue_t old;
  os_result_t result;
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  short unsigned int _9;
  const struct os_isr_t * OS_isrTableBase.2_10;
  unsigned int _11;
  unsigned int _12;
  sizetype _13;
  const struct os_isr_t * _14;
  void (*<T467>) (void) _15;
  unsigned char _16;
  unsigned char _17;
  unsigned char _18;
  unsigned char _25;
  unsigned char _31;

  <bb 2> [local count: 977248435]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (tmr_26(D) > 1)
    goto <bb 14>; [43.66%]
  else
    goto <bb 3>; [56.34%]

  <bb 3> [local count: 550581768]:
  # DEBUG BEGIN_STMT
  # DEBUG D#5 => &OS_simTimer[tmr_26(D)]
  # DEBUG tmrp => D#5
  # DEBUG BEGIN_STMT
  _1 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].mask;
  if (_1 < incr_28(D))
    goto <bb 14>; [35.00%]
  else
    goto <bb 4>; [65.00%]

  <bb 4> [local count: 357878148]:
  # DEBUG BEGIN_STMT
  old_29 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].count;
  # DEBUG old => old_29
  # DEBUG BEGIN_STMT
  _2 = incr_28(D) + old_29;
  _3 = _1 & _2;
  MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].count = _3;
  # DEBUG BEGIN_STMT
  # DEBUG c => 0
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].channel[c_20].control;
  _25 = _4 & 2;
  if (_25 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 357931837]:
  _5 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].channel[c_20].compare;
  _6 = _5 - old_29;
  _7 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].mask;
  _8 = _6 & _7;
  if (_8 <= incr_28(D))
    goto <bb 7>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 7> [local count: 536897757]:
  # DEBUG BEGIN_STMT
  _31 = _4 & 1;
  if (_31 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 8> [local count: 268448878]:
  # DEBUG BEGIN_STMT
  _9 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].channel[c_20].isr;
  if (_9 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 134224439]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.2_10 = OS_isrTableBase;
  _11 = (unsigned int) _9;
  _12 = _11 * 68;
  _13 = _12 + 4294967228;
  _14 = OS_isrTableBase.2_10 + _13;
  _15 = _14->func;
  _15 ();

  <bb 10> [local count: 268448878]:
  # DEBUG BEGIN_STMT
  _16 = MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].channel[c_20].control;
  _17 = _16 & 253;
  MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].channel[c_20].control = _17;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 268448878]:
  # DEBUG BEGIN_STMT
  _18 = _4 | 2;
  MEM[(struct os_simtimer_t *)&OS_simTimer][tmr_26(D)].channel[c_20].control = _18;

  <bb 12> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  c_35 = c_20 + 1;
  # DEBUG c => c_35

  <bb 13> [local count: 1073741824]:
  # c_20 = PHI <0(4), c_35(12)>
  # DEBUG c => c_20
  # DEBUG BEGIN_STMT
  if (c_20 != 2)
    goto <bb 5>; [66.67%]
  else
    goto <bb 14>; [33.33%]

  <bb 14> [local count: 977248437]:
  # result_19 = PHI <3(2), 8(3), 0(13)>
  # DEBUG result => result_19
  # DEBUG BEGIN_STMT
  return result_19;

}


