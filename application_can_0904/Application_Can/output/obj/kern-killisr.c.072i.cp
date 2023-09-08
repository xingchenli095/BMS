
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_KillCalledContext/2:
  Jump functions of caller  OS_KillIsr/0:

 Propagating constants:

Not considering OS_KillIsr for cloning; -fipa-cp-clone disabled.

overall_size: 13, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KillIsr/0:
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

OS_KillCalledContext/2 (OS_KillCalledContext) @06cb8d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KillIsr/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_isrTableBase/1 (OS_isrTableBase) @06c98630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KillIsr/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_KillIsr/0 (OS_KillIsr) @06cb8b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_KillCalledContext/2 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_KillIsr (OS_KillIsr, funcdef_no=0, decl_uid=6821, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KillIsr/0
__attribute__((target ("general-regs-only")))
OS_KillIsr (os_isrid_t i)
{
  struct os_isrdynamic_t * const id;
  const struct os_isr_t * OS_isrTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_isr_t * _4;
  unsigned char _5;
  unsigned char _6;
  struct os_savedcontext_t * _7;
  os_result_t _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_1 = OS_isrTableBase;
  _2 = (unsigned int) i_9(D);
  _3 = _2 * 68;
  _4 = OS_isrTableBase.0_1 + _3;
  id_10 = _4->dynamic;
  # DEBUG id => id_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = id_10->statusflags;
  _6 = _5 | 64;
  id_10->statusflags = _6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = &id_10->c;
  _13 = OS_KillCalledContext (_7);
  return _13;

}


