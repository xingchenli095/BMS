
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Cat1Entry/0:
    indirect simple callsite, calling param -1, offset 0, for stmt f_7 ();

 Propagating constants:

Not considering OS_Cat1Entry for cloning; -fipa-cp-clone disabled.

overall_size: 17, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_Cat1Entry/0:
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

OS_isrTableBase/2 (OS_isrTableBase) @06c54750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat1Entry/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c54708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Cat1Entry/0 (read)OS_Cat1Entry/0 (read)OS_Cat1Entry/0 (write)OS_Cat1Entry/0 (read)OS_Cat1Entry/0 (write)OS_Cat1Entry/0 (write)OS_Cat1Entry/0 (write)
  Availability: not_available
  Varpool flags:
OS_Cat1Entry/0 (OS_Cat1Entry) @06c7aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_isrTableBase/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 

;; Function OS_Cat1Entry (OS_Cat1Entry, funcdef_no=0, decl_uid=6879, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_Cat1Entry/0
__attribute__((target ("general-regs-only")))
OS_Cat1Entry (os_isrid_t iid)
{
  os_isrid_t oldIsr;
  os_uint8_t inFunction;
  os_uint8_t inKernel;
  void (*os_isrfunc_t) (void) f;
  const struct os_isr_t * isr;
  const struct os_isr_t * OS_isrTableBase.0_1;
  unsigned int _2;
  unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
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
  inFunction_9 = OS_kernelData.inFunction;
  # DEBUG inFunction => inFunction_9
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 2;
  # DEBUG BEGIN_STMT
  oldIsr_11 = OS_kernelData.isrCurrent;
  # DEBUG oldIsr => oldIsr_11
  # DEBUG BEGIN_STMT
  OS_kernelData.isrCurrent = iid_5(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  f_7 ();
  # DEBUG BEGIN_STMT
  OS_kernelData.isrCurrent = oldIsr_11;
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = inFunction_9;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return inKernel_8;

}


