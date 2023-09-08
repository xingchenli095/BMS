
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CatKEntry/0:
    indirect simple callsite, calling param -1, offset 0, for stmt f_7 ();

 Propagating constants:

Not considering OS_CatKEntry for cloning; -fipa-cp-clone disabled.

overall_size: 11, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CatKEntry/0:
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

OS_kernelData/2 (OS_kernelData) @06c27750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CatKEntry/0 (read)
  Availability: not_available
  Varpool flags:
OS_isrTableBase/1 (OS_isrTableBase) @06c27708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_CatKEntry/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CatKEntry/0 (OS_CatKEntry) @06c4ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/1 (read)OS_kernelData/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_CatKEntry (OS_CatKEntry, funcdef_no=0, decl_uid=6883, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CatKEntry/0
__attribute__((target ("general-regs-only")))
OS_CatKEntry (os_isrid_t iid)
{
  os_uint8_t inKernel;
  void (*os_isrfunc_t) (void) f;
  const struct os_isr_t * isr;
  const struct os_isr_t * OS_isrTableBase.0_1;
  unsigned int _2;
  unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_1 = OS_isrTableBase;
  _2 = (unsigned int) iid_5(D);
  _3 = _2 * 68;
  isr_6 = OS_isrTableBase.0_1 + _3;
  # DEBUG isr => isr_6
  # DEBUG BEGIN_STMT
  f_7 = isr_6->func;
  # DEBUG f => f_7
  # DEBUG BEGIN_STMT
  inKernel_8 = OS_kernelData.inKernel;
  # DEBUG inKernel => inKernel_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  f_7 ();
  # DEBUG BEGIN_STMT
  return inKernel_8;

}


