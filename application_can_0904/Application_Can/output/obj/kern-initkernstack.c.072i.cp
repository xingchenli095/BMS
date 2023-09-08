
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitKernStack/0:

 Propagating constants:

Not considering OS_InitKernStack for cloning; -fipa-cp-clone disabled.

overall_size: 15, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitKernStack/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_kernelData/1 (OS_kernelData) @06bff7e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitKernStack/0 (read)OS_InitKernStack/0 (read)
  Availability: not_available
  Varpool flags:
OS_InitKernStack/0 (OS_InitKernStack) @06c23c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitKernStack (OS_InitKernStack, funcdef_no=0, decl_uid=6762, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitKernStack/0
__attribute__((target ("general-regs-only")))
OS_InitKernStack ()
{
  register os_stackelement_t * OS_getSpResult;
  volatile os_stackelement_t * p;
  os_size_t numElemsUnused;
  os_size_t numElemsTotal;
  os_size_t i;
  unsigned int _1;
  int _2;
  int _3;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  p_9 = OS_kernelData.iStackBase;
  # DEBUG p => p_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mov	%0, r13" : "result" "=r" OS_getSpResult_10);
  # DEBUG OS_getSpResult => OS_getSpResult_10
  # DEBUG BEGIN_STMT
  # DEBUG sp => OS_getSpResult_10
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.iStackLen;
  numElemsTotal_11 = _1 >> 2;
  # DEBUG numElemsTotal => numElemsTotal_11
  # DEBUG BEGIN_STMT
  _2 = OS_getSpResult_10 - p_9;
  _3 = _2 /[ex] 4;
  numElemsUnused_12 = (os_size_t) _3;
  # DEBUG numElemsUnused => numElemsUnused_12
  # DEBUG BEGIN_STMT
  numElemsUnused_7 = MIN_EXPR <numElemsTotal_11, numElemsUnused_12>;
  # DEBUG numElemsUnused => numElemsUnused_7
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  *p_5 ={v} 3958107115;
  # DEBUG BEGIN_STMT
  p_14 = p_5 + 4;
  # DEBUG p => p_14
  # DEBUG BEGIN_STMT
  i_15 = i_4 + 1;
  # DEBUG i => i_15

  <bb 4> [local count: 1073741824]:
  # i_4 = PHI <0(2), i_15(3)>
  # p_5 = PHI <p_9(2), p_14(3)>
  # DEBUG p => p_5
  # DEBUG i => i_4
  # DEBUG BEGIN_STMT
  if (i_4 < numElemsUnused_7)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


