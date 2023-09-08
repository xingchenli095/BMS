
IPA constant propagation start:
Determining dynamic type for call: _3 (OS_timeStampTimer.0_1, OS_lastTimeStampTime.3_4, _5);
  Starting walk at: _3 (OS_timeStampTimer.0_1, OS_lastTimeStampTime.3_4, _5);
  instance pointer: OS_timeStampTimer.0_1  Outer instance pointer: OS_timeStampTimer.0_1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_StartTimeStampTimerGeneric/8:
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (OS_timeStampTimer.0_1, OS_lastTimeStampTime.3_4, _5);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_StartTimeStampTimerGeneric for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartTimeStampTimerGeneric/8:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_lastTimeStampTime/10 (OS_lastTimeStampTime) @06c9d9d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartTimeStampTimerGeneric/8 (read)
  Availability: not_available
  Varpool flags:
OS_timeStampTimer/9 (OS_timeStampTimer) @06c9d990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartTimeStampTimerGeneric/8 (read)
  Availability: not_available
  Varpool flags: read-only
OS_StartTimeStampTimerGeneric/8 (OS_StartTimeStampTimerGeneric) @06cbbee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_timeStampTimer/9 (read)OS_lastTimeStampTime/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(751619278 (estimated locally),0.70 per call) 

;; Function OS_StartTimeStampTimerGeneric (OS_StartTimeStampTimerGeneric, funcdef_no=0, decl_uid=6526, cgraph_uid=1, symbol_order=8)

Modification phase of node OS_StartTimeStampTimerGeneric/8
__attribute__((target ("general-regs-only")))
OS_StartTimeStampTimerGeneric ()
{
  const struct os_hwt_t * OS_timeStampTimer.0_1;
  const struct os_hwtdrv_t * _2;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _3;
  unsigned int OS_lastTimeStampTime.3_4;
  unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_timeStampTimer.0_1 = OS_timeStampTimer;
  if (OS_timeStampTimer.0_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _2 = OS_timeStampTimer.0_1->driver;
  _3 = _2->hwtStart;
  OS_lastTimeStampTime.3_4 = OS_lastTimeStampTime;
  _5 = OS_timeStampTimer.0_1->maxDelta;
  _3 (OS_timeStampTimer.0_1, OS_lastTimeStampTime.3_4, _5);

  <bb 4> [local count: 1073741824]:
  return;

}


