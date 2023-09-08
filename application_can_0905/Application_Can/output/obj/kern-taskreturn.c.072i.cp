
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/1:
  Jump functions of caller  OS_KernTaskReturn/0:

 Propagating constants:

Not considering OS_KernTaskReturn for cloning; -fipa-cp-clone disabled.

overall_size: 7, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernTaskReturn/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_svc_TaskReturn/2 (OS_svc_TaskReturn) @06c946c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernTaskReturn/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/1 (OS_Error) @06cbcc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernTaskReturn/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_KernTaskReturn/0 (OS_KernTaskReturn) @06cbca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_svc_TaskReturn/2 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_KernTaskReturn (OS_KernTaskReturn, funcdef_no=0, decl_uid=6966, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernTaskReturn/0
__attribute__((target ("general-regs-only")))
OS_KernTaskReturn ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_TaskReturn, 56, 0B);
  return;

}


