
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetIsrMaxRuntime/0:

 Propagating constants:

Not considering OS_GetIsrMaxRuntime for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetIsrMaxRuntime/0:
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

OS_isrTableBase/2 (OS_isrTableBase) @06bf9750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetIsrMaxRuntime/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nInterrupts/1 (OS_nInterrupts) @06bf9708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetIsrMaxRuntime/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetIsrMaxRuntime/0 (OS_GetIsrMaxRuntime) @06c19a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_nInterrupts/1 (read)OS_isrTableBase/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_GetIsrMaxRuntime (OS_GetIsrMaxRuntime, funcdef_no=0, decl_uid=7405, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetIsrMaxRuntime/0
__attribute__((target ("general-regs-only")))
OS_GetIsrMaxRuntime (os_isrid_t i, os_tick_t * out)
{
  struct os_israccounting_t * ia;
  const struct os_isr_t * isr;
  os_result_t r;
  short unsigned int OS_nInterrupts.0_1;
  const struct os_isr_t * OS_isrTableBase.1_2;
  unsigned int _3;
  unsigned int _4;
  unsigned char _5;
  unsigned int _6;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG r => 3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_nInterrupts.0_1 = OS_nInterrupts;
  if (OS_nInterrupts.0_1 > i_11(D))
    goto <bb 3>; [65.00%]
  else
    goto <bb 5>; [35.00%]

  <bb 3> [local count: 697932186]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.1_2 = OS_isrTableBase;
  _3 = (unsigned int) i_11(D);
  _4 = _3 * 68;
  isr_12 = OS_isrTableBase.1_2 + _4;
  # DEBUG isr => isr_12
  # DEBUG BEGIN_STMT
  ia_13 = isr_12->accounting;
  # DEBUG ia => ia_13
  # DEBUG BEGIN_STMT
  _5 = isr_12->flags;
  _9 = _5 & 64;
  if (_9 != 0)
    goto <bb 4>; [65.00%]
  else
    goto <bb 5>; [35.00%]

  <bb 4> [local count: 453655921]:
  # DEBUG BEGIN_STMT
  _6 = ia_13->etMax;
  *out_14(D) = _6;
  # DEBUG BEGIN_STMT
  # DEBUG r => 0

  <bb 5> [local count: 1073741824]:
  # r_7 = PHI <3(2), 3(3), 0(4)>
  # DEBUG r => r_7
  # DEBUG BEGIN_STMT
  return r_7;

}


