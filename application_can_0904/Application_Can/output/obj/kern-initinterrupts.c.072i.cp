
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntEnableIsr/3:
  Jump functions of caller  OS_CORTEXM_IntSetupIsr/2:
  Jump functions of caller  OS_InitInterrupts/0:

 Propagating constants:

Not considering OS_InitInterrupts for cloning; -fipa-cp-clone disabled.

overall_size: 19, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitInterrupts/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nInterrupts/4 (OS_nInterrupts) @06c14990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntEnableIsr/3 (OS_CORTEXM_IntEnableIsr) @06c38d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_InitInterrupts/0 (243685707 (estimated locally),2.06 per call) 
  Calls: 
OS_CORTEXM_IntSetupIsr/2 (OS_CORTEXM_IntSetupIsr) @06c38c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_InitInterrupts/0 (955630223 (estimated locally),8.09 per call) 
  Calls: 
OS_isrTableBase/1 (OS_isrTableBase) @06c148b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitInterrupts/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitInterrupts/0 (OS_InitInterrupts) @06c38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/1 (read)OS_nInterrupts/4 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntEnableIsr/3 (243685707 (estimated locally),2.06 per call) OS_CORTEXM_IntSetupIsr/2 (955630223 (estimated locally),8.09 per call) 

;; Function OS_InitInterrupts (OS_InitInterrupts, funcdef_no=0, decl_uid=6776, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitInterrupts/0
__attribute__((target ("general-regs-only")))
OS_InitInterrupts ()
{
  struct os_isrdynamic_t * const isrd;
  const struct os_isr_t * const isr;
  os_isrid_t i;
  const struct os_isr_t * OS_isrTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_archisr_t * _4;
  unsigned char _5;
  signed char _6;
  short unsigned int OS_nInterrupts.2_7;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 7>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_1 = OS_isrTableBase;
  _2 = (unsigned int) i_8;
  _3 = _2 * 68;
  isr_12 = OS_isrTableBase.0_1 + _3;
  # DEBUG isr => isr_12
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  isrd_13 = isr_12->dynamic;
  # DEBUG isrd => isrd_13
  # DEBUG BEGIN_STMT
  _4 = &isr_12->arch;
  OS_CORTEXM_IntSetupIsr (_4);
  # DEBUG BEGIN_STMT
  _5 = isr_12->flags;
  _6 = (signed char) _5;
  if (_6 < 0)
    goto <bb 4>; [25.50%]
  else
    goto <bb 5>; [74.50%]

  <bb 4> [local count: 243685707]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntEnableIsr (_4);
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 711944516]:
  # DEBUG BEGIN_STMT
  isrd_13->statusflags = 32;

  <bb 6> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  i_17 = i_8 + 1;
  # DEBUG i => i_17

  <bb 7> [local count: 1073741824]:
  # i_8 = PHI <0(2), i_17(6)>
  # DEBUG i => i_8
  # DEBUG BEGIN_STMT
  OS_nInterrupts.2_7 = OS_nInterrupts;
  if (OS_nInterrupts.2_7 > i_8)
    goto <bb 3>; [89.00%]
  else
    goto <bb 8>; [11.00%]

  <bb 8> [local count: 118111601]:
  return;

}


