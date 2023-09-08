
IPA constant propagation start:
Determining dynamic type for call: _4 (_2);
  Starting walk at: _4 (_2);
  instance pointer: _2  Outer instance pointer: _2 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:OS_IntDisableConditional ();
  Function call may change dynamic type:OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelAll.0_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CallShutdownHook/9:
  Jump functions of caller  OS_IntDisableConditional/6:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/5:
  Jump functions of caller  OS_ShutdownNoHooks/2:
  Jump functions of caller  OS_Shutdown/1:
    callsite  OS_Shutdown/1 -> OS_HandleShutdownHook/0 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _4 (_2);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  OS_HandleShutdownHook/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_ptrShutdownHook.2_1 (code_4(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR

 Propagating constants:

Not considering OS_ShutdownNoHooks for cloning; -fipa-cp-clone disabled.
Not considering OS_Shutdown for cloning; -fipa-cp-clone disabled.

overall_size: 47, max_new_size: 11001
 - context independent values, size: 35, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: OS_ShutdownNoHooks/2:
  Node: OS_Shutdown/1:
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
  Node: OS_HandleShutdownHook/0:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_ptrShutdownHook/11 (OS_ptrShutdownHook) @06d450d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_HandleShutdownHook/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_nApps/10 (OS_nApps) @06c79ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Shutdown/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CallShutdownHook/9 (OS_CallShutdownHook) @06d42380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Shutdown/1 (510975480 (estimated locally),2.16 per call) 
  Calls: 
OS_appTableBase/8 (OS_appTableBase) @06c79e58
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Shutdown/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_executionTimer/7 (OS_executionTimer) @06c79d80
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Shutdown/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_IntDisableConditional/6 (OS_IntDisableConditional) @06d421c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Shutdown/1 (236223200 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/5 (OS_CORTEXM_IntSetDisablingLevel) @06d420e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_Shutdown/1 (236223200 (estimated locally),1.00 per call) 
  Calls: 
OS_intDisableLevelAll/4 (OS_intDisableLevelAll) @06c79ca8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Shutdown/1 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/3 (OS_kernelData) @06c79c60
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ShutdownNoHooks/2 (write)OS_HandleShutdownHook/0 (write)OS_HandleShutdownHook/0 (write)OS_Shutdown/1 (write)OS_Shutdown/1 (read)OS_Shutdown/1 (write)OS_Shutdown/1 (write)
  Availability: not_available
  Varpool flags:
OS_ShutdownNoHooks/2 (OS_ShutdownNoHooks) @06c9d000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/3 (write)
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 
OS_Shutdown/1 (OS_Shutdown) @06c9dd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/3 (write)OS_intDisableLevelAll/4 (read)OS_executionTimer/7 (read)OS_kernelData/3 (read)OS_appTableBase/8 (read)OS_kernelData/3 (write)OS_kernelData/3 (write)OS_nApps/10 (read)
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: OS_HandleShutdownHook/0 (236223201 (estimated locally),1.00 per call) OS_CallShutdownHook/9 (510975480 (estimated locally),2.16 per call) OS_IntDisableConditional/6 (236223200 (estimated locally),1.00 per call) OS_CORTEXM_IntSetDisablingLevel/5 (236223200 (estimated locally),1.00 per call) 
   Indirect call(165356240 (estimated locally),0.70 per call) 
OS_HandleShutdownHook/0 (OS_HandleShutdownHook) @06c9da80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_kernelData/3 (write)OS_ptrShutdownHook/11 (read)OS_kernelData/3 (write)
  Referring: 
  Availability: local
  Function flags: count:107374 (estimated locally) body local executed_once optimize_size
  Called by: OS_Shutdown/1 (236223201 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(107374 (estimated locally),1.00 per call) 

;; Function OS_Shutdown (OS_Shutdown, funcdef_no=1, decl_uid=6826, cgraph_uid=2, symbol_order=1) (executed once)

Modification phase of node OS_Shutdown/1
__attribute__((target ("general-regs-only")))
OS_Shutdown (os_result_t code, os_boolean_t sync)
{
  const struct os_appcontext_t * casdhApp;
  os_unsigned_t casdhI;
  short unsigned int OS_intDisableLevelAll.0_1;
  const struct os_hwt_t * _2;
  const struct os_hwtdrv_t * _3;
  void (*<T521>) (const struct os_hwt_t *) _4;
  unsigned char _5;
  void (*<T4f2>) (os_result_t) _6;
  unsigned char OS_nApps.1_7;
  unsigned int _8;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 7;
  # DEBUG BEGIN_STMT
  OS_intDisableLevelAll.0_1 = OS_intDisableLevelAll;
  OS_CORTEXM_IntSetDisablingLevel (OS_intDisableLevelAll.0_1);
  # DEBUG BEGIN_STMT
  OS_IntDisableConditional ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = OS_executionTimer[0];
  if (_2 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 165356240]:
  # DEBUG BEGIN_STMT
  _3 = _2->driver;
  _4 = _3->hwtStop;
  _4 (_2);

  <bb 4> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _5 = OS_kernelData.appsStarted;
  if (_5 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 5> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG OS_kd => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG _myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  casdhApp_20 = OS_appTableBase;
  # DEBUG casdhApp => casdhApp_20
  # DEBUG BEGIN_STMT
  # DEBUG casdhI => 0
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _6 = casdhApp_10->shutdownHook;
  if (_6 != 0B)
    goto <bb 7>; [53.47%]
  else
    goto <bb 8>; [46.53%]

  <bb 7> [local count: 510975480]:
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 9;
  # DEBUG BEGIN_STMT
  OS_CallShutdownHook (casdhApp_10, code_22(D));
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 7;

  <bb 8> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  casdhApp_25 = casdhApp_10 + 64;
  # DEBUG casdhApp => casdhApp_25
  # DEBUG BEGIN_STMT
  casdhI_26 = casdhI_9 + 1;
  # DEBUG casdhI => casdhI_26

  <bb 9> [local count: 1073741824]:
  # casdhI_9 = PHI <0(5), casdhI_26(8)>
  # casdhApp_10 = PHI <casdhApp_20(5), casdhApp_25(8)>
  # DEBUG casdhApp => casdhApp_10
  # DEBUG casdhI => casdhI_9
  # DEBUG BEGIN_STMT
  OS_nApps.1_7 = OS_nApps;
  _8 = (unsigned int) OS_nApps.1_7;
  if (_8 > casdhI_9)
    goto <bb 6>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 236223201]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_HandleShutdownHook (code_22(D));

}



;; Function OS_ShutdownNoHooks (OS_ShutdownNoHooks, funcdef_no=2, decl_uid=6828, cgraph_uid=3, symbol_order=2) (executed once)

Modification phase of node OS_ShutdownNoHooks/2
__attribute__((target ("general-regs-only")))
OS_ShutdownNoHooks ()
{
  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 6;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG confusion => 0

  <bb 3> [local count: 1073741824]:
  # DEBUG confusion => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG confusion => NULL

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


