
IPA constant propagation start:
Determining dynamic type for call: frc_9 = _3 (_1);
  Starting walk at: frc_9 = _3 (_1);
  instance pointer: _1  Outer instance pointer: _1 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeUsed/0:
    indirect simple callsite, calling param -1, offset 0, for stmt frc_9 = _3 (_1);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_GetTimeUsed for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetTimeUsed/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_executionTimer/2 (OS_executionTimer) @06c47750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTimeUsed/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c47708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTimeUsed/0 (read)OS_GetTimeUsed/0 (write)
  Availability: not_available
  Varpool flags:
OS_GetTimeUsed/0 (OS_GetTimeUsed) @06c6cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_executionTimer/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_GetTimeUsed (OS_GetTimeUsed, funcdef_no=0, decl_uid=6962, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetTimeUsed/0
__attribute__((target ("general-regs-only")))
OS_GetTimeUsed ()
{
  os_tick_t used;
  os_timervalue_t frc;
  const struct os_hwt_t * _1;
  const struct os_hwtdrv_t * _2;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  _1 = OS_executionTimer[0];
  _2 = _1->driver;
  _3 = _2->hwtRead;
  frc_9 = _3 (_1);
  # DEBUG frc => frc_9
  # DEBUG BEGIN_STMT
  _4 = OS_kernelData.accounting.frc;
  _5 = frc_9 - _4;
  _6 = _1->wrapMask;
  used_10 = _5 & _6;
  # DEBUG used => used_10
  # DEBUG BEGIN_STMT
  OS_kernelData.accounting.frc = frc_9;
  # DEBUG BEGIN_STMT
  return used_10;

}


