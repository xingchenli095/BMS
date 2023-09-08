
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ShutdownNoHooks/5:
  Jump functions of caller  OS_Panic/4:
  Jump functions of caller  OS_KillCalledContext/3:
  Jump functions of caller  OS_KernReturnFromCall/0:

 Propagating constants:

Not considering OS_KernReturnFromCall for cloning; -fipa-cp-clone disabled.

overall_size: 53, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_KernReturnFromCall/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_ShutdownNoHooks/5 (OS_ShutdownNoHooks) @06c5c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernReturnFromCall/0 (33910328 (estimated locally),0.03 per call) 
  Calls: 
OS_Panic/4 (OS_Panic) @06c5ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernReturnFromCall/0 (22380816 (estimated locally),0.02 per call) OS_KernReturnFromCall/0 (51379285 (estimated locally),0.05 per call) OS_KernReturnFromCall/0 (71717364 (estimated locally),0.07 per call) 
  Calls: 
OS_KillCalledContext/3 (OS_KillCalledContext) @06c5cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_KernReturnFromCall/0 (67820656 (estimated locally),0.06 per call) OS_KernReturnFromCall/0 (102758570 (estimated locally),0.10 per call) OS_KernReturnFromCall/0 (155694803 (estimated locally),0.15 per call) OS_KernReturnFromCall/0 (217325345 (estimated locally),0.20 per call) 
  Calls: 
OS_isrTableBase/2 (OS_isrTableBase) @06c34d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernReturnFromCall/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c34cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_KernReturnFromCall/0 (read)OS_KernReturnFromCall/0 (read)OS_KernReturnFromCall/0 (read)OS_KernReturnFromCall/0 (addr)OS_KernReturnFromCall/0 (read)OS_KernReturnFromCall/0 (addr)OS_KernReturnFromCall/0 (read)OS_KernReturnFromCall/0 (addr)
  Availability: not_available
  Varpool flags:
OS_KernReturnFromCall/0 (OS_KernReturnFromCall) @06c5ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_isrTableBase/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)OS_kernelData/1 (addr)OS_kernelData/1 (read)OS_kernelData/1 (addr)OS_kernelData/1 (read)OS_kernelData/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Panic/4 (22380816 (estimated locally),0.02 per call) OS_KillCalledContext/3 (67820656 (estimated locally),0.06 per call) OS_ShutdownNoHooks/5 (33910328 (estimated locally),0.03 per call) OS_KillCalledContext/3 (102758570 (estimated locally),0.10 per call) OS_Panic/4 (51379285 (estimated locally),0.05 per call) OS_KillCalledContext/3 (155694803 (estimated locally),0.15 per call) OS_Panic/4 (71717364 (estimated locally),0.07 per call) OS_KillCalledContext/3 (217325345 (estimated locally),0.20 per call) 

;; Function OS_KernReturnFromCall (OS_KernReturnFromCall, funcdef_no=0, decl_uid=7190, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_KernReturnFromCall/0
__attribute__((target ("general-regs-only")))
OS_KernReturnFromCall ()
{
  struct os_isrdynamic_t * isrDynamic;
  unsigned char _1;
  const struct os_isr_t * OS_isrTableBase.0_2;
  short unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  const struct os_isr_t * _6;
  struct os_savedcontext_t * _7;
  unsigned char _8;
  const struct os_appcontext_t * _9;
  unsigned char _10;
  const struct os_appcontext_t * _11;
  unsigned char _12;
  const struct os_appcontext_t * _13;
  unsigned char _14;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = OS_kernelData.inFunction;
  if (_1 == 3)
    goto <bb 3>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  OS_isrTableBase.0_2 = OS_isrTableBase;
  _3 = OS_kernelData.isrCurrent;
  _4 = (unsigned int) _3;
  _5 = _4 * 68;
  _6 = OS_isrTableBase.0_2 + _5;
  isrDynamic_23 = _6->dynamic;
  # DEBUG isrDynamic => isrDynamic_23
  # DEBUG BEGIN_STMT
  _7 = &isrDynamic_23->c;
  _8 = OS_KillCalledContext (_7);
  if (_8 != 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 4> [local count: 71717364]:
  # DEBUG BEGIN_STMT
  OS_Panic (11);
  goto <bb 17>; [100.00%]

  <bb 5> [local count: 856416478]:
  # DEBUG BEGIN_STMT
  if (_1 == 8)
    goto <bb 6>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 6> [local count: 291181602]:
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.hookApp;
  if (_9 != 0B)
    goto <bb 7>; [53.47%]
  else
    goto <bb 17>; [46.53%]

  <bb 7> [local count: 155694803]:
  # DEBUG BEGIN_STMT
  _10 = OS_KillCalledContext (&OS_kernelData.sHookContext.c);
  if (_10 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 8> [local count: 51379285]:
  # DEBUG BEGIN_STMT
  OS_Panic (12);
  goto <bb 17>; [100.00%]

  <bb 9> [local count: 565234876]:
  # DEBUG BEGIN_STMT
  if (_1 == 9)
    goto <bb 10>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 10> [local count: 192179858]:
  # DEBUG BEGIN_STMT
  _11 = OS_kernelData.hookApp;
  if (_11 != 0B)
    goto <bb 11>; [53.47%]
  else
    goto <bb 17>; [46.53%]

  <bb 11> [local count: 102758570]:
  # DEBUG BEGIN_STMT
  _12 = OS_KillCalledContext (&OS_kernelData.sHookContext.c);
  if (_12 != 0)
    goto <bb 12>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 12> [local count: 33910328]:
  # DEBUG BEGIN_STMT
  OS_ShutdownNoHooks ();
  goto <bb 17>; [100.00%]

  <bb 13> [local count: 373055018]:
  # DEBUG BEGIN_STMT
  if (_1 == 10)
    goto <bb 14>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 14> [local count: 126838706]:
  # DEBUG BEGIN_STMT
  _13 = OS_kernelData.hookApp;
  if (_13 != 0B)
    goto <bb 15>; [53.47%]
  else
    goto <bb 17>; [46.53%]

  <bb 15> [local count: 67820656]:
  # DEBUG BEGIN_STMT
  _14 = OS_KillCalledContext (&OS_kernelData.eHookContext.c);
  if (_14 != 0)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 22380816]:
  # DEBUG BEGIN_STMT
  OS_Panic (12);

  <bb 17> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


