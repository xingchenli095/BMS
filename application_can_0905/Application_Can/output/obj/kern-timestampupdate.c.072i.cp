
IPA constant propagation start:
Determining dynamic type for call: _3 (ptimeStampTimer_10);
  Starting walk at: _3 (ptimeStampTimer_10);
  instance pointer: ptimeStampTimer_10  Outer instance pointer: ptimeStampTimer_10 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_12 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.0_1);
Determining dynamic type for call: current_15 = _5 (ptimeStampTimer_10);
  Starting walk at: current_15 = _5 (ptimeStampTimer_10);
  instance pointer: ptimeStampTimer_10  Outer instance pointer: ptimeStampTimer_10 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_3 (ptimeStampTimer_10);
  Function call may change dynamic type:is_12 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.0_1);
Determining dynamic type for call: _7 (ptimeStampTimer_10, current_15, _8);
  Starting walk at: _7 (ptimeStampTimer_10, current_15, _8);
  instance pointer: ptimeStampTimer_10  Outer instance pointer: ptimeStampTimer_10 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_AdvanceTimeStampGeneric (current_15);
  Function call may change dynamic type:current_15 = _5 (ptimeStampTimer_10);
  Function call may change dynamic type:_3 (ptimeStampTimer_10);
  Function call may change dynamic type:is_12 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.0_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AdvanceTimeStampGeneric/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_TimestampUpdate/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _7 (ptimeStampTimer_10, current_15, _8);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt current_15 = _5 (ptimeStampTimer_10);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _3 (ptimeStampTimer_10);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_TimestampUpdate for cloning; -fipa-cp-clone disabled.

overall_size: 34, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_TimestampUpdate/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_AdvanceTimeStampGeneric/4 (OS_AdvanceTimeStampGeneric) @06cc9ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_TimestampUpdate/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06cc9e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_TimestampUpdate/0 (1073741824 (estimated locally),1.00 per call) OS_TimestampUpdate/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_intDisableLevelMax/2 (OS_intDisableLevelMax) @06ca4708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_TimestampUpdate/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_timeStampTimer/1 (OS_timeStampTimer) @06ca46c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_TimestampUpdate/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_TimestampUpdate/0 (OS_TimestampUpdate) @06cc9c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_timeStampTimer/1 (read)OS_intDisableLevelMax/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) OS_AdvanceTimeStampGeneric/4 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/3 (1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_TimestampUpdate (OS_TimestampUpdate, funcdef_no=0, decl_uid=6455, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_TimestampUpdate/0
__attribute__((target ("general-regs-only")))
OS_TimestampUpdate ()
{
  os_timervalue_t current;
  os_intstatus_t is;
  const struct os_hwt_t * const ptimeStampTimer;
  short unsigned int OS_intDisableLevelMax.0_1;
  const struct os_hwtdrv_t * _2;
  void (*<T521>) (const struct os_hwt_t *) _3;
  const struct os_hwtdrv_t * _4;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _5;
  const struct os_hwtdrv_t * _6;
  os_boolean_t (*<T52b>) (const struct os_hwt_t *, os_timervalue_t, os_tick_t) _7;
  unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ptimeStampTimer_10 = OS_timeStampTimer;
  # DEBUG ptimeStampTimer => ptimeStampTimer_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_intDisableLevelMax.0_1 = OS_intDisableLevelMax;
  is_12 = OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelMax.0_1);
  # DEBUG is => is_12
  # DEBUG BEGIN_STMT
  _2 = ptimeStampTimer_10->driver;
  _3 = _2->hwtStop;
  _3 (ptimeStampTimer_10);
  # DEBUG BEGIN_STMT
  _4 = ptimeStampTimer_10->driver;
  _5 = _4->hwtRead;
  current_15 = _5 (ptimeStampTimer_10);
  # DEBUG current => current_15
  # DEBUG BEGIN_STMT
  OS_AdvanceTimeStampGeneric (current_15);
  # DEBUG BEGIN_STMT
  _6 = ptimeStampTimer_10->driver;
  _7 = _6->hwtStart;
  _8 = ptimeStampTimer_10->maxDelta;
  _7 (ptimeStampTimer_10, current_15, _8);
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_12);
  return;

}


