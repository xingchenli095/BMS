
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_AppIsAccessible/0:

 Propagating constants:

Not considering OS_AppIsAccessible for cloning; -fipa-cp-clone disabled.

overall_size: 34, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_AppIsAccessible/0:
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

OS_isrTableBase/2 (OS_isrTableBase) @06be7cf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AppIsAccessible/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06be7ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_AppIsAccessible/0 (read)OS_AppIsAccessible/0 (read)OS_AppIsAccessible/0 (read)OS_AppIsAccessible/0 (read)
  Availability: not_available
  Varpool flags:
OS_AppIsAccessible/0 (OS_AppIsAccessible) @06c0ba80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (read)OS_isrTableBase/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_AppIsAccessible (OS_AppIsAccessible, funcdef_no=0, decl_uid=6236, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_AppIsAccessible/0
__attribute__((target ("general-regs-only")))
OS_AppIsAccessible (const struct os_appcontext_t * app)
{
  os_boolean_t result;
  struct os_appdynamic_t * _1;
  unsigned char _2;
  unsigned char _3;
  const struct os_task_t * _4;
  const struct os_isr_t * OS_isrTableBase.2_5;
  short unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  const struct os_isr_t * _9;
  const struct os_appcontext_t * iftmp.0_11;
  const struct os_appcontext_t * iftmp.3_14;
  const struct os_appcontext_t * iftmp.1_15;
  const struct os_appcontext_t * iftmp.0_16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (app_12(D) == 0B)
    goto <bb 15>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  _1 = app_12(D)->dynamic;
  _2 = _1->appstate;
  switch (_2) <default: <L18> [33.33%], case 1: <L3> [33.33%], case 2: <L23> [33.33%]>

  <bb 4> [local count: 250514705]:
<L3>:
  # DEBUG BEGIN_STMT
  _3 = OS_kernelData.inFunction;
  if (_3 == 1)
    goto <bb 5>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 5> [local count: 85175000]:
  _4 = OS_kernelData.taskCurrent;
  iftmp.0_16 = _4->app;
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 165339706]:
  if (_3 == 3)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 56215500]:
  OS_isrTableBase.2_5 = OS_isrTableBase;
  _6 = OS_kernelData.isrCurrent;
  _7 = (unsigned int) _6;
  _8 = _7 * 68;
  _9 = OS_isrTableBase.2_5 + _8;
  iftmp.1_15 = _9->app;
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 109124206]:
  if (_3 == 10)
    goto <bb 11>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 9> [local count: 72021976]:
  if (_3 == 8)
    goto <bb 11>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 47534504]:
  if (_3 == 9)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 77751433]:
  iftmp.3_14 = OS_kernelData.hookApp;

  <bb 12> [local count: 250514705]:
  # iftmp.0_11 = PHI <iftmp.0_16(5), 0B(10), iftmp.1_15(7), iftmp.3_14(11)>
  if (iftmp.0_11 == app_12(D))
    goto <bb 15>; [30.00%]
  else
    goto <bb 13>; [70.00%]

  <bb 13> [local count: 175360294]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 250514705]:
<L18>:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT

  <bb 15> [local count: 1073666665]:
  # result_10 = PHI <1(2), 1(3), 0(13), 0(14), 1(12)>
<L23>:
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  return result_10;

}


