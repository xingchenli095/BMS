
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitIsrStacks/0:

 Propagating constants:

Not considering OS_InitIsrStacks for cloning; -fipa-cp-clone disabled.

overall_size: 7, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitIsrStacks/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nInterrupts/2 (OS_nInterrupts) @06c00990
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitIsrStacks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitIsrStacks/0 (OS_InitIsrStacks) @06c24a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_nInterrupts/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitIsrStacks (OS_InitIsrStacks, funcdef_no=0, decl_uid=6768, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitIsrStacks/0
__attribute__((target ("general-regs-only")))
OS_InitIsrStacks ()
{
  os_isrid_t isrId;
  short unsigned int OS_nInterrupts.2_3;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG isrId => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => OS_isrTableBase
  # DEBUG D#2 => (unsigned int) isrId_2
  # DEBUG D#1 => D#2 * 68
  # DEBUG is => D#3 + D#1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG p => 0B
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  isrId_4 = isrId_2 + 1;
  # DEBUG isrId => isrId_4

  <bb 4> [local count: 1073741824]:
  # isrId_2 = PHI <0(2), isrId_4(3)>
  # DEBUG isrId => isrId_2
  # DEBUG BEGIN_STMT
  OS_nInterrupts.2_3 = OS_nInterrupts;
  if (isrId_2 < OS_nInterrupts.2_3)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


