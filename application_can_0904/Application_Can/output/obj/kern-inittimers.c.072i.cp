
IPA constant propagation start:
Determining dynamic type for call: _5 (t_10);
  Starting walk at: _5 (t_10);
  instance pointer: t_10  Outer instance pointer: t_10 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_5 (t_10);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitTimers/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _5 (t_10);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_InitTimers for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitTimers/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nHwTimers/2 (OS_nHwTimers) @06be78b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitTimers/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_hwTimerTableBase/1 (OS_hwTimerTableBase) @06be77e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitTimers/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitTimers/0 (OS_InitTimers) @06c0cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_hwTimerTableBase/1 (read)OS_nHwTimers/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(955630223 (estimated locally),8.09 per call) 

;; Function OS_InitTimers (OS_InitTimers, funcdef_no=0, decl_uid=6399, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitTimers/0
__attribute__((target ("general-regs-only")))
OS_InitTimers ()
{
  const struct os_hwt_t * const t;
  os_uint8_t i;
  const struct os_hwt_t * OS_hwTimerTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_hwtdrv_t * _4;
  void (*<T521>) (const struct os_hwt_t *) _5;
  unsigned char OS_nHwTimers.1_6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_hwTimerTableBase.0_1 = OS_hwTimerTableBase;
  _2 = (unsigned int) i_7;
  _3 = _2 * 24;
  t_10 = OS_hwTimerTableBase.0_1 + _3;
  # DEBUG t => t_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = t_10->driver;
  _5 = _4->hwtInit;
  _5 (t_10);
  # DEBUG BEGIN_STMT
  i_12 = i_7 + 1;
  # DEBUG i => i_12

  <bb 4> [local count: 1073741824]:
  # i_7 = PHI <0(2), i_12(3)>
  # DEBUG i => i_7
  # DEBUG BEGIN_STMT
  OS_nHwTimers.1_6 = OS_nHwTimers;
  if (OS_nHwTimers.1_6 > i_7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


