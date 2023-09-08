
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetCurrentStackArea/0:

 Propagating constants:

Not considering OS_GetCurrentStackArea for cloning; -fipa-cp-clone disabled.

overall_size: 27, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetCurrentStackArea/0:
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

OS_nInterrupts/2 (OS_nInterrupts) @06d431f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetCurrentStackArea/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06d431b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetCurrentStackArea/0 (read)OS_GetCurrentStackArea/0 (read)OS_GetCurrentStackArea/0 (read)OS_GetCurrentStackArea/0 (read)OS_GetCurrentStackArea/0 (read)
  Availability: not_available
  Varpool flags:
OS_GetCurrentStackArea/0 (OS_GetCurrentStackArea) @06c21000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_nInterrupts/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_GetCurrentStackArea (OS_GetCurrentStackArea, funcdef_no=0, decl_uid=5704, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetCurrentStackArea/0
__attribute__((target ("general-regs-only")))
OS_GetCurrentStackArea (void * * begin, void * * end)
{
  os_address_t rEnd;
  os_address_t rBegin;
  unsigned char _1;
  const struct os_task_t * _2;
  os_stackelement_t * _3;
  unsigned int _4;
  short unsigned int _5;
  short unsigned int OS_nInterrupts.0_6;
  os_stackelement_t * _7;
  unsigned int _8;
  void * rBegin.2_9;
  void * rEnd.3_10;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG rBegin => 0
  # DEBUG BEGIN_STMT
  # DEBUG rEnd => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.taskCurrent;
  if (_2 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 4> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  _3 = _2->stackBase;
  rBegin_18 = (os_address_t) _3;
  # DEBUG rBegin => rBegin_18
  # DEBUG BEGIN_STMT
  _4 = _2->stackLen;
  rEnd_19 = _4 + rBegin_18;
  # DEBUG rEnd => rEnd_19
  goto <bb 8>; [100.00%]

  <bb 5> [local count: 708669604]:
  # DEBUG BEGIN_STMT
  if (_1 == 3)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 240947665]:
  # DEBUG BEGIN_STMT
  _5 = OS_kernelData.isrCurrent;
  OS_nInterrupts.0_6 = OS_nInterrupts;
  if (_5 < OS_nInterrupts.0_6)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => OS_isrTableBase
  # DEBUG D#2 => (unsigned int) _5
  # DEBUG D#1 => D#2 * 68
  # DEBUG isr => D#3 + D#1
  # DEBUG BEGIN_STMT
  # DEBUG rBegin => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = OS_kernelData.iStackBase;
  rBegin_16 = (os_address_t) _7;
  # DEBUG rBegin => rBegin_16
  # DEBUG BEGIN_STMT
  _8 = OS_kernelData.iStackLen;
  rEnd_17 = _8 + rBegin_16;
  # DEBUG rEnd => rEnd_17

  <bb 8> [local count: 1073741824]:
  # rBegin_11 = PHI <rBegin_18(4), 0(5), rBegin_16(7), 0(3), 0(6)>
  # rEnd_12 = PHI <rEnd_19(4), 0(5), rEnd_17(7), 0(3), 0(6)>
  # DEBUG rEnd => rEnd_12
  # DEBUG rBegin => rBegin_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (begin_20(D) != 0B)
    goto <bb 9>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 9> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  rBegin.2_9 = (void *) rBegin_11;
  *begin_20(D) = rBegin.2_9;

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (end_22(D) != 0B)
    goto <bb 11>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 11> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  rEnd.3_10 = (void *) rEnd_12;
  *end_22(D) = rEnd.3_10;

  <bb 12> [local count: 1073741824]:
  return;

}


