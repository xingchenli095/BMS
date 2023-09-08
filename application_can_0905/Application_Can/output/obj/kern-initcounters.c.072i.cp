
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitCounters/0:

 Propagating constants:

Not considering OS_InitCounters for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitCounters/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nCounters/2 (OS_nCounters) @06cc7828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitCounters/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_counterTableBase/1 (OS_counterTableBase) @06cc77e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitCounters/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitCounters/0 (OS_InitCounters) @06ceca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_counterTableBase/1 (read)OS_nCounters/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitCounters (OS_InitCounters, funcdef_no=0, decl_uid=6401, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitCounters/0
__attribute__((target ("general-regs-only")))
OS_InitCounters ()
{
  const struct os_counter_t * const cs;
  os_counterid_t i;
  const struct os_counter_t * OS_counterTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  struct os_counterdynamic_t * _4;
  unsigned char OS_nCounters.1_5;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_counterTableBase.0_1 = OS_counterTableBase;
  _2 = (unsigned int) i_6;
  _3 = _2 * 32;
  cs_9 = OS_counterTableBase.0_1 + _3;
  # DEBUG cs => cs_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _4 = cs_9->dynamic;
  _4->head = 65535;
  # DEBUG BEGIN_STMT
  i_11 = i_6 + 1;
  # DEBUG i => i_11

  <bb 4> [local count: 1073741824]:
  # i_6 = PHI <0(2), i_11(3)>
  # DEBUG i => i_6
  # DEBUG BEGIN_STMT
  OS_nCounters.1_5 = OS_nCounters;
  if (OS_nCounters.1_5 > i_6)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


