
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_DoControlIdle/0:

 Propagating constants:

Not considering OS_DoControlIdle for cloning; -fipa-cp-clone disabled.

overall_size: 4, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_DoControlIdle/0:
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

OS_kernelData/1 (OS_kernelData) @06c136c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_DoControlIdle/0 (write)
  Availability: not_available
  Varpool flags:
OS_DoControlIdle/0 (OS_DoControlIdle) @06c38a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_DoControlIdle (OS_DoControlIdle, funcdef_no=0, decl_uid=7187, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_DoControlIdle/0
__attribute__((target ("general-regs-only")))
OS_DoControlIdle (os_idlemode_t mode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  OS_kernelData.idleMode = mode_2(D);
  # DEBUG BEGIN_STMT
  return 0;

}


