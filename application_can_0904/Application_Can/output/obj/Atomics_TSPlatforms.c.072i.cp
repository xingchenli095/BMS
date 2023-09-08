
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserResumeInterrupts/9:
  Jump functions of caller  OS_UserSuspendInterrupts/8:
  Jump functions of caller  TS_IntRestore/7:
  Jump functions of caller  TS_IntDisable/6:
  Jump functions of caller  TS_AtomicClearBit_32/5:
  Jump functions of caller  TS_AtomicSetBit_32/4:
  Jump functions of caller  TS_AtomicClearBit_16/3:
  Jump functions of caller  TS_AtomicSetBit_16/2:
  Jump functions of caller  TS_AtomicClearBit_8/1:
  Jump functions of caller  TS_AtomicSetBit_8/0:

 Propagating constants:

Not considering TS_IntRestore for cloning; -fipa-cp-clone disabled.
Not considering TS_IntDisable for cloning; -fipa-cp-clone disabled.
Not considering TS_AtomicClearBit_32 for cloning; -fipa-cp-clone disabled.
Not considering TS_AtomicSetBit_32 for cloning; -fipa-cp-clone disabled.
Not considering TS_AtomicClearBit_16 for cloning; -fipa-cp-clone disabled.
Not considering TS_AtomicSetBit_16 for cloning; -fipa-cp-clone disabled.
Not considering TS_AtomicClearBit_8 for cloning; -fipa-cp-clone disabled.
Not considering TS_AtomicSetBit_8 for cloning; -fipa-cp-clone disabled.

overall_size: 79, max_new_size: 11001
 - context independent values, size: 5, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: TS_IntRestore/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: TS_IntDisable/6:
  Node: TS_AtomicClearBit_32/5:
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
  Node: TS_AtomicSetBit_32/4:
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
  Node: TS_AtomicClearBit_16/3:
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
  Node: TS_AtomicSetBit_16/2:
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
  Node: TS_AtomicClearBit_8/1:
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
  Node: TS_AtomicSetBit_8/0:
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

OS_UserResumeInterrupts/9 (OS_UserResumeInterrupts) @06cd1e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: TS_IntRestore/7 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_32/5 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_32/4 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_16/3 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_16/2 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_8/1 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_8/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_UserSuspendInterrupts/8 (OS_UserSuspendInterrupts) @06cd1d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: TS_IntDisable/6 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_32/5 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_32/4 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_16/3 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_16/2 (1073741824 (estimated locally),1.00 per call) TS_AtomicClearBit_8/1 (1073741824 (estimated locally),1.00 per call) TS_AtomicSetBit_8/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
TS_IntRestore/7 (TS_IntRestore) @06cd1b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) 
TS_IntDisable/6 (TS_IntDisable) @06cd19a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 
TS_AtomicClearBit_32/5 (TS_AtomicClearBit_32) @06cd17e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 
TS_AtomicSetBit_32/4 (TS_AtomicSetBit_32) @06cd1460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 
TS_AtomicClearBit_16/3 (TS_AtomicClearBit_16) @06cd10e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 
TS_AtomicSetBit_16/2 (TS_AtomicSetBit_16) @06ccad20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 
TS_AtomicClearBit_8/1 (TS_AtomicClearBit_8) @06cca9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 
TS_AtomicSetBit_8/0 (TS_AtomicSetBit_8) @06cca620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/9 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/8 (1073741824 (estimated locally),1.00 per call) 

;; Function TS_AtomicSetBit_8 (TS_AtomicSetBit_8, funcdef_no=0, decl_uid=7815, cgraph_uid=1, symbol_order=0)

Modification phase of node TS_AtomicSetBit_8/0
TS_AtomicSetBit_8 (volatile uint8 * addr, uint32 bitIdx)
{
  unsigned char _1;
  int _2;
  unsigned char _3;
  unsigned char _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *addr_7(D);
  _2 = 1 << bitIdx_8(D);
  _3 = (unsigned char) _2;
  _4 = _1 | _3;
  *addr_7(D) ={v} _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG success => D#1
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_AtomicClearBit_8 (TS_AtomicClearBit_8, funcdef_no=1, decl_uid=7818, cgraph_uid=2, symbol_order=1)

Modification phase of node TS_AtomicClearBit_8/1
TS_AtomicClearBit_8 (volatile uint8 * addr, uint32 bitIdx)
{
  unsigned char _1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *addr_8(D);
  _2 = 1 << bitIdx_9(D);
  _3 = (unsigned char) _2;
  _4 = ~_3;
  _5 = _1 & _4;
  *addr_8(D) ={v} _5;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => {CLOBBER}
  # DEBUG success => D#2
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_AtomicSetBit_16 (TS_AtomicSetBit_16, funcdef_no=2, decl_uid=7821, cgraph_uid=3, symbol_order=2)

Modification phase of node TS_AtomicSetBit_16/2
TS_AtomicSetBit_16 (volatile uint16 * addr, uint32 bitIdx)
{
  short unsigned int _1;
  int _2;
  short unsigned int _3;
  short unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *addr_7(D);
  _2 = 1 << bitIdx_8(D);
  _3 = (short unsigned int) _2;
  _4 = _1 | _3;
  *addr_7(D) ={v} _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => {CLOBBER}
  # DEBUG success => D#3
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_AtomicClearBit_16 (TS_AtomicClearBit_16, funcdef_no=3, decl_uid=7824, cgraph_uid=4, symbol_order=3)

Modification phase of node TS_AtomicClearBit_16/3
TS_AtomicClearBit_16 (volatile uint16 * addr, uint32 bitIdx)
{
  short unsigned int _1;
  int _2;
  short unsigned int _3;
  short unsigned int _4;
  short unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *addr_8(D);
  _2 = 1 << bitIdx_9(D);
  _3 = (short unsigned int) _2;
  _4 = ~_3;
  _5 = _1 & _4;
  *addr_8(D) ={v} _5;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => {CLOBBER}
  # DEBUG success => D#4
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_AtomicSetBit_32 (TS_AtomicSetBit_32, funcdef_no=4, decl_uid=7827, cgraph_uid=5, symbol_order=4)

Modification phase of node TS_AtomicSetBit_32/4
TS_AtomicSetBit_32 (volatile uint32 * addr, uint32 bitIdx)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *addr_6(D);
  _2 = 1 << bitIdx_7(D);
  _3 = _1 | _2;
  *addr_6(D) ={v} _3;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#5 => {CLOBBER}
  # DEBUG success => D#5
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_AtomicClearBit_32 (TS_AtomicClearBit_32, funcdef_no=5, decl_uid=7830, cgraph_uid=6, symbol_order=5)

Modification phase of node TS_AtomicClearBit_32/5
TS_AtomicClearBit_32 (volatile uint32 * addr, uint32 bitIdx)
{
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} *addr_7(D);
  _2 = 1 << bitIdx_8(D);
  _3 = ~_2;
  _4 = _1 & _3;
  *addr_7(D) ={v} _4;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => {CLOBBER}
  # DEBUG success => D#6
  # DEBUG BEGIN_STMT
  return;

}



;; Function TS_IntDisable (TS_IntDisable, funcdef_no=6, decl_uid=7832, cgraph_uid=7, symbol_order=6)

Modification phase of node TS_IntDisable/6
TS_IntDisable ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function TS_IntRestore (TS_IntRestore, funcdef_no=7, decl_uid=7834, cgraph_uid=8, symbol_order=7)

Modification phase of node TS_IntRestore/7
TS_IntRestore (TS_IntStatusType intStatus)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  return;

}


