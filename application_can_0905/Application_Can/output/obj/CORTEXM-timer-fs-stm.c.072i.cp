
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_TimerSTMRead/5:
  Jump functions of caller  OS_TimerSTMStop/4:
  Jump functions of caller  OS_TimerSTMStart/3:
  Jump functions of caller  OS_TimerSTMInit/2:

 Propagating constants:

Not considering OS_TimerSTMRead for cloning; -fipa-cp-clone disabled.
Not considering OS_TimerSTMStop for cloning; -fipa-cp-clone disabled.
Not considering OS_TimerSTMStart for cloning; -fipa-cp-clone disabled.
Not considering OS_TimerSTMInit for cloning; -fipa-cp-clone disabled.

overall_size: 56, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_TimerSTMRead/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_TimerSTMStop/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_TimerSTMStart/3:
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
  Node: OS_TimerSTMInit/2:
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

OS_stm_debugmode/7 (OS_stm_debugmode) @06c97dc8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_TimerSTMInit/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_stm_prescaler/6 (OS_stm_prescaler) @06c97d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_TimerSTMInit/2 (read)
  Availability: not_available
  Varpool flags: read-only
OS_TimerSTMRead/5 (OS_TimerSTMRead) @06ccb700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_stmBase/1 (read)
  Referring: OS_timerSTMdriver/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_TimerSTMStop/4 (OS_TimerSTMStop) @06ccb540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_stmBase/1 (read)
  Referring: OS_timerSTMdriver/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_TimerSTMStart/3 (OS_TimerSTMStart) @06ccb380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_stmBase/1 (read)
  Referring: OS_timerSTMdriver/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_TimerSTMInit/2 (OS_TimerSTMInit) @06ccb1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: OS_stmBase/1 (read)OS_stm_prescaler/6 (read)OS_stm_debugmode/7 (read)
  Referring: OS_timerSTMdriver/0 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_stmBase/1 (OS_stmBase) @06c974c8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OS_TimerSTMInit/2 (read)OS_TimerSTMStop/4 (read)OS_TimerSTMStart/3 (read)OS_TimerSTMRead/5 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_timerSTMdriver/0 (OS_timerSTMdriver) @06c97480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_TimerSTMInit/2 (addr)OS_TimerSTMRead/5 (addr)OS_TimerSTMStart/3 (addr)OS_TimerSTMStop/4 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function OS_TimerSTMInit (OS_TimerSTMInit, funcdef_no=0, decl_uid=7419, cgraph_uid=1, symbol_order=2)

Modification phase of node OS_TimerSTMInit/2
__attribute__((target ("general-regs-only")))
OS_TimerSTMInit (const struct os_hwt_t * td)
{
  struct os_stm_t * stm;
  unsigned char _1;
  int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned char OS_stm_debugmode.0_9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_17(D)->major;
  _2 = (int) _1;
  stm_18 = OS_stmBase[_2];
  # DEBUG stm => stm_18
  # DEBUG BEGIN_STMT
  _3 ={v} stm_18->stm_cr;
  _4 = _3 & 1;
  if (_4 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = OS_stm_prescaler[_2];
  _6 = (unsigned int) _5;
  _7 = _6 + 4294967295;
  _8 = _7 << 8;
  stm_18->stm_cr ={v} _8;
  # DEBUG BEGIN_STMT
  OS_stm_debugmode.0_9 = OS_stm_debugmode;
  if (OS_stm_debugmode.0_9 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _10 ={v} stm_18->stm_cr;
  _11 = _10 | 2;
  stm_18->stm_cr ={v} _11;

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  stm_18->stm_cnt ={v} 0;
  # DEBUG BEGIN_STMT
  _12 ={v} stm_18->stm_cr;
  _13 = _12 | 1;
  stm_18->stm_cr ={v} _13;

  <bb 6> [local count: 1073741824]:
  return;

}



;; Function OS_TimerSTMStart (OS_TimerSTMStart, funcdef_no=1, decl_uid=7423, cgraph_uid=2, symbol_order=3)

Modification phase of node OS_TimerSTMStart/3
__attribute__((target ("general-regs-only")))
OS_TimerSTMStart (const struct os_hwt_t * td, os_timervalue_t old, os_tick_t delta)
{
  os_timervalue_t newValue;
  struct os_stm_t * stm;
  unsigned char _1;
  int _2;
  unsigned char _3;
  int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  _Bool _11;
  os_boolean_t _21;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_13(D)->major;
  _2 = (int) _1;
  stm_14 = OS_stmBase[_2];
  # DEBUG stm => stm_14
  # DEBUG BEGIN_STMT
  _3 = td_13(D)->minor;
  _4 = (int) _3;
  # DEBUG D#1 => &stm_14->stm_chan[_4]
  # DEBUG chan => D#1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 ={v} stm_14->stm_cnt;
  _6 = _5 + 4294967295;
  MEM[(struct os_stmchannel_t *)stm_14].stm_chan[_4].stm_cmp ={v} _6;
  # DEBUG BEGIN_STMT
  newValue_18 = old_16(D) + delta_17(D);
  # DEBUG newValue => newValue_18
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct os_stmchannel_t *)stm_14].stm_chan[_4].stm_ccr;
  _8 = _7 | 1;
  MEM[(struct os_stmchannel_t *)stm_14].stm_chan[_4].stm_ccr ={v} _8;
  # DEBUG BEGIN_STMT
  MEM[(struct os_stmchannel_t *)stm_14].stm_chan[_4].stm_cmp ={v} newValue_18;
  # DEBUG BEGIN_STMT
  _9 ={v} stm_14->stm_cnt;
  _10 = _9 - old_16(D);
  _11 = _10 >= delta_17(D);
  _21 = (os_boolean_t) _11;
  return _21;

}



;; Function OS_TimerSTMStop (OS_TimerSTMStop, funcdef_no=2, decl_uid=7425, cgraph_uid=3, symbol_order=4)

Modification phase of node OS_TimerSTMStop/4
__attribute__((target ("general-regs-only")))
OS_TimerSTMStop (const struct os_hwt_t * td)
{
  struct os_stm_t * stm;
  unsigned char _1;
  int _2;
  unsigned char _3;
  int _4;
  unsigned int _5;
  unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_8(D)->major;
  _2 = (int) _1;
  stm_9 = OS_stmBase[_2];
  # DEBUG stm => stm_9
  # DEBUG BEGIN_STMT
  _3 = td_8(D)->minor;
  _4 = (int) _3;
  # DEBUG D#2 => &stm_9->stm_chan[_4]
  # DEBUG chan => D#2
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct os_stmchannel_t *)stm_9].stm_chan[_4].stm_ccr;
  _6 = _5 & 4294967294;
  MEM[(struct os_stmchannel_t *)stm_9].stm_chan[_4].stm_ccr ={v} _6;
  # DEBUG BEGIN_STMT
  MEM[(struct os_stmchannel_t *)stm_9].stm_chan[_4].stm_cir ={v} 1;
  return;

}



;; Function OS_TimerSTMRead (OS_TimerSTMRead, funcdef_no=3, decl_uid=7427, cgraph_uid=4, symbol_order=5)

Modification phase of node OS_TimerSTMRead/5
__attribute__((target ("general-regs-only")))
OS_TimerSTMRead (const struct os_hwt_t * td)
{
  struct os_stm_t * stm;
  unsigned char _1;
  int _2;
  os_timervalue_t _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = td_4(D)->major;
  _2 = (int) _1;
  stm_5 = OS_stmBase[_2];
  # DEBUG stm => stm_5
  # DEBUG BEGIN_STMT
  _6 ={v} stm_5->stm_cnt;
  return _6;

}


