
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_SetControl/22:
  Jump functions of caller  OS_Panic/15:
  Jump functions of caller  OS_CORTEXM_ResetKernStackRw/14:
    callsite  OS_CORTEXM_ResetKernStackRw/14 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x120f00ff
         VR  [302972929, 302973183]
  Jump functions of caller  OS_SetHookProtection/13:
    callsite  OS_SetHookProtection/13 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
    callsite  OS_SetHookProtection/13 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op bit_ior_expr 319750145
         value: 0x0, mask: 0xffffffff
         VR  [319750145, -1]
  Jump functions of caller  OS_SetIsrProtection/12:
    callsite  OS_SetIsrProtection/12 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
    callsite  OS_SetIsrProtection/12 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
    callsite  OS_SetIsrProtection/12 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x160f00ff
         VR  [370081793, 370082047]
    callsite  OS_SetIsrProtection/12 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
  Jump functions of caller  OS_SetProtection/11:
    callsite  OS_SetProtection/11 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 5
         value: 0x5, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
    callsite  OS_SetProtection/11 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 4
         value: 0x4, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
    callsite  OS_SetProtection/11 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 3
         value: 0x3, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x130f00ff
         VR  [319750145, 319750399]
  Jump functions of caller  OS_CORTEXM_SetRegion/10:
  Jump functions of caller  OS_EnterProtectedMode/9:
    callsite  OS_EnterProtectedMode/9 -> OS_DisableDynamicRegions/8 : 
    callsite  OS_EnterProtectedMode/9 -> OS_SetupStaticRegions/7 : 
    callsite  OS_EnterProtectedMode/9 -> OS_CheckMpuSupported/6 : 
  Jump functions of caller  OS_DisableDynamicRegions/8:
  Jump functions of caller  OS_SetupStaticRegions/7:
    callsite  OS_SetupStaticRegions/7 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x120f00ff
         VR  [302972929, 302973183]
    callsite  OS_SetupStaticRegions/7 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x160f00ff
         VR  [370081793, 370082047]
    callsite  OS_SetupStaticRegions/7 -> OS_CORTEXM_SetRegion/10 : 
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0x60f00ff
         VR  [101646337, 101646591]
  Jump functions of caller  OS_CheckMpuSupported/6:

 Propagating constants:

Not considering OS_CORTEXM_ResetKernStackRw for cloning; -fipa-cp-clone disabled.
Not considering OS_SetHookProtection for cloning; -fipa-cp-clone disabled.
Not considering OS_SetIsrProtection for cloning; -fipa-cp-clone disabled.
Not considering OS_SetProtection for cloning; -fipa-cp-clone disabled.
Not considering OS_CORTEXM_SetRegion for cloning; -fipa-cp-clone disabled.
Not considering OS_EnterProtectedMode for cloning; -fipa-cp-clone disabled.

overall_size: 237, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CORTEXM_ResetKernStackRw/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_SetHookProtection/13:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_SetIsrProtection/12:
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
  Node: OS_SetProtection/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_CORTEXM_SetRegion/10:
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
    param [2]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_EnterProtectedMode/9:
  Node: OS_DisableDynamicRegions/8:
  Node: OS_SetupStaticRegions/7:
  Node: OS_CheckMpuSupported/6:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_CORTEXM_SetControl/22 (OS_CORTEXM_SetControl) @06d1fb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_SetProtection/11 (292574246 (estimated locally),0.27 per call) OS_SetProtection/11 (781167578 (estimated locally),0.73 per call) 
  Calls: 
OS_kernStackMpuSize/21 (OS_kernStackMpuSize) @06d29708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetupStaticRegions/7 (read)OS_SetIsrProtection/12 (read)OS_CORTEXM_ResetKernStackRw/14 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ramMpuSize/20 (OS_ramMpuSize) @06d29678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetupStaticRegions/7 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ramBase/19 (OS_ramBase) @06d29630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetupStaticRegions/7 (read)
  Availability: not_available
  Varpool flags: read-only
OS_romMpuSize/18 (OS_romMpuSize) @06d295a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetupStaticRegions/7 (read)
  Availability: not_available
  Varpool flags: read-only
OS_romBase/17 (OS_romBase) @06d29558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetupStaticRegions/7 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/16 (OS_kernelData) @06d29510
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_SetIsrProtection/12 (read)OS_SetupStaticRegions/7 (read)OS_CORTEXM_ResetKernStackRw/14 (read)
  Availability: not_available
  Varpool flags:
OS_Panic/15 (OS_Panic) @06d1f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CheckMpuSupported/6 (354334802 (estimated locally),0.33 per call) OS_CheckMpuSupported/6 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_CORTEXM_ResetKernStackRw/14 (OS_CORTEXM_ResetKernStackRw) @06d1f380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/16 (read)OS_kernStackMpuSize/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_SetRegion/10 (248034361 (estimated locally),0.23 per call) 
OS_SetHookProtection/13 (OS_SetHookProtection) @06d1f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_SetRegion/10 (66311986 (estimated locally),0.06 per call) OS_CORTEXM_SetRegion/10 (248034361 (estimated locally),0.23 per call) 
OS_SetIsrProtection/12 (OS_SetIsrProtection) @06c83e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/16 (read)OS_kernStackMpuSize/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_SetRegion/10 (66311986 (estimated locally),0.06 per call) OS_CORTEXM_SetRegion/10 (66311986 (estimated locally),0.06 per call) OS_CORTEXM_SetRegion/10 (248034361 (estimated locally),0.23 per call) OS_CORTEXM_SetRegion/10 (248034361 (estimated locally),0.23 per call) 
OS_SetProtection/11 (OS_SetProtection) @06c83b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_SetRegion/10 (78219725 (estimated locally),0.07 per call) OS_CORTEXM_SetRegion/10 (78219725 (estimated locally),0.07 per call) OS_CORTEXM_SetRegion/10 (292574246 (estimated locally),0.27 per call) OS_CORTEXM_SetControl/22 (292574246 (estimated locally),0.27 per call) OS_CORTEXM_SetControl/22 (781167578 (estimated locally),0.73 per call) 
OS_CORTEXM_SetRegion/10 (OS_CORTEXM_SetRegion) @06c838c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: OS_CORTEXM_ResetKernStackRw/14 (248034361 (estimated locally),0.23 per call) OS_SetHookProtection/13 (66311986 (estimated locally),0.06 per call) OS_SetHookProtection/13 (248034361 (estimated locally),0.23 per call) OS_SetIsrProtection/12 (66311986 (estimated locally),0.06 per call) OS_SetIsrProtection/12 (66311986 (estimated locally),0.06 per call) OS_SetIsrProtection/12 (248034361 (estimated locally),0.23 per call) OS_SetIsrProtection/12 (248034361 (estimated locally),0.23 per call) OS_SetProtection/11 (78219725 (estimated locally),0.07 per call) OS_SetProtection/11 (78219725 (estimated locally),0.07 per call) OS_SetProtection/11 (292574246 (estimated locally),0.27 per call) OS_SetupStaticRegions/7 (1073741824 (estimated locally),1.00 per call) OS_SetupStaticRegions/7 (1073741824 (estimated locally),1.00 per call) OS_SetupStaticRegions/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_EnterProtectedMode/9 (OS_EnterProtectedMode) @06c83700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_DisableDynamicRegions/8 (1073741824 (estimated locally),1.00 per call) OS_SetupStaticRegions/7 (1073741824 (estimated locally),1.00 per call) OS_CheckMpuSupported/6 (1073741824 (estimated locally),1.00 per call) 
OS_DisableDynamicRegions/8 (OS_DisableDynamicRegions) @06c83540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_EnterProtectedMode/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_SetupStaticRegions/7 (OS_SetupStaticRegions) @06c83380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: OS_romBase/17 (read)OS_romMpuSize/18 (read)OS_ramBase/19 (read)OS_ramMpuSize/20 (read)OS_kernelData/16 (read)OS_kernStackMpuSize/21 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_EnterProtectedMode/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: OS_CORTEXM_SetRegion/10 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_SetRegion/10 (1073741824 (estimated locally),1.00 per call) OS_CORTEXM_SetRegion/10 (1073741824 (estimated locally),1.00 per call) 
OS_CheckMpuSupported/6 (OS_CheckMpuSupported) @06c831c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: OS_EnterProtectedMode/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: OS_Panic/15 (354334802 (estimated locally),0.33 per call) OS_Panic/15 (354334802 (estimated locally),0.33 per call) 

;; Function OS_CORTEXM_SetRegion (OS_CORTEXM_SetRegion, funcdef_no=4, decl_uid=7384, cgraph_uid=5, symbol_order=10)

Modification phase of node OS_CORTEXM_SetRegion/10
__attribute__((target ("general-regs-only")))
OS_CORTEXM_SetRegion (os_uint32_t region, os_uint32_t rbar, os_uint32_t rasr)
{
  unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} region_3(D);
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  _1 = rbar_6(D) & 4294967264;
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} _1;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} rasr_8(D);
  return;

}



;; Function OS_EnterProtectedMode (OS_EnterProtectedMode, funcdef_no=3, decl_uid=6780, cgraph_uid=4, symbol_order=9)

Modification phase of node OS_EnterProtectedMode/9
__attribute__((target ("general-regs-only")))
OS_EnterProtectedMode ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_CheckMpuSupported ();
  # DEBUG BEGIN_STMT
  OS_SetupStaticRegions ();
  # DEBUG BEGIN_STMT
  OS_DisableDynamicRegions ();
  return;

}



;; Function OS_SetProtection (OS_SetProtection, funcdef_no=5, decl_uid=6913, cgraph_uid=6, symbol_order=11)

Modification phase of node OS_SetProtection/11
__attribute__((target ("general-regs-only")))
OS_SetProtection (const struct os_task_t * t)
{
  const struct os_appcontext_t * a;
  unsigned char _1;
  os_stackelement_t * _2;
  unsigned int _3;
  unsigned char _4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  os_uint8_t * _8;
  os_uint8_t * _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned char _13;
  os_uint8_t * _14;
  os_uint8_t * _15;
  unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  unsigned char _29;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  a_23 = t_22(D)->app;
  # DEBUG a => a_23
  # DEBUG BEGIN_STMT
  if (a_23 == 0B)
    goto <bb 4>; [17.43%]
  else
    goto <bb 3>; [82.57%]

  <bb 3> [local count: 886588623]:
  _1 = a_23->flags;
  _29 = _1 & 1;
  if (_29 != 0)
    goto <bb 4>; [67.00%]
  else
    goto <bb 5>; [33.00%]

  <bb 4> [local count: 781167578]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_SetControl (2);
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 292574246]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_SetControl (3);
  # DEBUG BEGIN_STMT
  _2 = t_22(D)->stackBase;
  _3 = (unsigned int) _2;
  _4 = t_22(D)->arch.mpuSizeStack;
  _5 = (unsigned int) _4;
  _6 = _5 | 319750145;
  OS_CORTEXM_SetRegion (3, _3, _6);
  # DEBUG BEGIN_STMT
  _7 = t_22(D)->arch.mpuSizeData;
  if (_7 != 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 6> [local count: 146287123]:
  _8 = t_22(D)->dataStart;
  _9 = t_22(D)->dataEnd;
  if (_8 != _9)
    goto <bb 7>; [53.47%]
  else
    goto <bb 8>; [46.53%]

  <bb 7> [local count: 78219725]:
  # DEBUG BEGIN_STMT
  _10 = (unsigned int) _8;
  _11 = (unsigned int) _7;
  _12 = _11 | 319750145;
  OS_CORTEXM_SetRegion (4, _10, _12);
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 214354521]:
  # DEBUG BEGIN_STMT
  # DEBUG region => 4
  # DEBUG rbar => 0
  # DEBUG rasr => 0
  # DEBUG INLINE_ENTRY OS_CORTEXM_SetRegion
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} 4;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;

  <bb 9> [local count: 292574246]:
  # DEBUG region => NULL
  # DEBUG rbar => NULL
  # DEBUG rasr => NULL
  # DEBUG BEGIN_STMT
  _13 = a_23->archapp.mpuSizeData;
  if (_13 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 10> [local count: 146287123]:
  _14 = a_23->dataStart;
  _15 = a_23->dataEnd;
  if (_14 != _15)
    goto <bb 11>; [53.47%]
  else
    goto <bb 12>; [46.53%]

  <bb 11> [local count: 78219725]:
  # DEBUG BEGIN_STMT
  _16 = (unsigned int) _14;
  _17 = (unsigned int) _13;
  _18 = _17 | 319750145;
  OS_CORTEXM_SetRegion (5, _16, _18);
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 214354521]:
  # DEBUG BEGIN_STMT
  # DEBUG region => 5
  # DEBUG rbar => 0
  # DEBUG rasr => 0
  # DEBUG INLINE_ENTRY OS_CORTEXM_SetRegion
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} 5;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;

  <bb 13> [local count: 1073741824]:
  # DEBUG region => NULL
  # DEBUG rbar => NULL
  # DEBUG rasr => NULL
  return;

}



;; Function OS_SetIsrProtection (OS_SetIsrProtection, funcdef_no=6, decl_uid=6916, cgraph_uid=7, symbol_order=12)

Modification phase of node OS_SetIsrProtection/12
__attribute__((target ("general-regs-only")))
OS_SetIsrProtection (const struct os_isr_t * isr, struct os_isrdynamic_t * id)
{
  const struct os_appcontext_t * a;
  unsigned char _1;
  os_stackelement_t * _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned char _6;
  unsigned int _7;
  unsigned int _8;
  os_stackelement_t * _9;
  unsigned int _10;
  unsigned char _11;
  unsigned int _12;
  unsigned int _13;
  unsigned char _14;
  os_uint8_t * _15;
  os_uint8_t * _16;
  unsigned int _17;
  unsigned int _18;
  unsigned int _19;
  unsigned char _20;
  os_uint8_t * _21;
  os_uint8_t * _22;
  unsigned int _23;
  unsigned int _24;
  unsigned int _25;
  unsigned char _31;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  a_30 = isr_29(D)->app;
  # DEBUG a => a_30
  # DEBUG BEGIN_STMT
  if (a_30 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 12>; [30.00%]

  <bb 3> [local count: 751619278]:
  _1 = a_30->flags;
  _31 = _1 & 1;
  if (_31 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 12>; [67.00%]

  <bb 4> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  # DEBUG k_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  _2 = id_32(D)->c.stackLimit;
  _3 = (unsigned int) _2;
  _4 = isr_29(D)->stackLen;
  _5 = _3 - _4;
  _6 = isr_29(D)->arch.mpuSizeStack;
  _7 = (unsigned int) _6;
  _8 = _7 | 319750145;
  OS_CORTEXM_SetRegion (3, _5, _8);
  # DEBUG BEGIN_STMT
  _9 = OS_kernelData.iStackBase;
  _10 = (unsigned int) _9;
  _11 = OS_kernStackMpuSize[0];
  _12 = (unsigned int) _11;
  _13 = _12 | 370081793;
  OS_CORTEXM_SetRegion (2, _10, _13);
  # DEBUG BEGIN_STMT
  _14 = isr_29(D)->arch.mpuSizeData;
  if (_14 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 124017181]:
  _15 = isr_29(D)->dataStart;
  _16 = isr_29(D)->dataEnd;
  if (_15 != _16)
    goto <bb 6>; [53.47%]
  else
    goto <bb 7>; [46.53%]

  <bb 6> [local count: 66311986]:
  # DEBUG BEGIN_STMT
  _17 = (unsigned int) _15;
  _18 = (unsigned int) _14;
  _19 = _18 | 319750145;
  OS_CORTEXM_SetRegion (4, _17, _19);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 181722375]:
  # DEBUG BEGIN_STMT
  # DEBUG region => 4
  # DEBUG rbar => 0
  # DEBUG rasr => 0
  # DEBUG INLINE_ENTRY OS_CORTEXM_SetRegion
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} 4;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;

  <bb 8> [local count: 248034362]:
  # DEBUG region => NULL
  # DEBUG rbar => NULL
  # DEBUG rasr => NULL
  # DEBUG BEGIN_STMT
  _20 = a_30->archapp.mpuSizeData;
  if (_20 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 9> [local count: 124017181]:
  _21 = a_30->dataStart;
  _22 = a_30->dataEnd;
  if (_21 != _22)
    goto <bb 10>; [53.47%]
  else
    goto <bb 11>; [46.53%]

  <bb 10> [local count: 66311986]:
  # DEBUG BEGIN_STMT
  _23 = (unsigned int) _21;
  _24 = (unsigned int) _20;
  _25 = _24 | 319750145;
  OS_CORTEXM_SetRegion (5, _23, _25);
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 181722375]:
  # DEBUG BEGIN_STMT
  # DEBUG region => 5
  # DEBUG rbar => 0
  # DEBUG rasr => 0
  # DEBUG INLINE_ENTRY OS_CORTEXM_SetRegion
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} 5;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;

  <bb 12> [local count: 1073741824]:
  # DEBUG region => NULL
  # DEBUG rbar => NULL
  # DEBUG rasr => NULL
  return;

}



;; Function OS_SetHookProtection (OS_SetHookProtection, funcdef_no=7, decl_uid=6921, cgraph_uid=8, symbol_order=13)

Modification phase of node OS_SetHookProtection/13
__attribute__((target ("general-regs-only")))
OS_SetHookProtection (const struct os_appcontext_t * a, struct os_savedcontext_t * savedContext, os_size_t mpuStackSize)
{
  unsigned char _1;
  os_stackelement_t * _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  os_uint8_t * _11;
  os_uint8_t * _12;
  unsigned int _13;
  unsigned int _14;
  unsigned int _15;
  unsigned char _23;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (a_17(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 3> [local count: 751619278]:
  _1 = a_17(D)->flags;
  _23 = _1 & 1;
  if (_23 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 4> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  _2 = savedContext_19(D)->stackLimit;
  _3 = (unsigned int) _2;
  _4 = mpuStackSize_20(D) >> 1;
  _5 = _4 + 1;
  _6 = 1 << _5;
  _7 = -_6;
  _8 = _3 & _7;
  _9 = mpuStackSize_20(D) | 319750145;
  OS_CORTEXM_SetRegion (3, _8, _9);
  # DEBUG BEGIN_STMT
  # DEBUG region => 4
  # DEBUG rbar => 0
  # DEBUG rasr => 0
  # DEBUG INLINE_ENTRY OS_CORTEXM_SetRegion
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} 4;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG region => NULL
  # DEBUG rbar => NULL
  # DEBUG rasr => NULL
  # DEBUG BEGIN_STMT
  _10 = a_17(D)->archapp.mpuSizeData;
  if (_10 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 5> [local count: 124017181]:
  _11 = a_17(D)->dataStart;
  _12 = a_17(D)->dataEnd;
  if (_11 != _12)
    goto <bb 6>; [53.47%]
  else
    goto <bb 7>; [46.53%]

  <bb 6> [local count: 66311986]:
  # DEBUG BEGIN_STMT
  _13 = (unsigned int) _11;
  _14 = (unsigned int) _10;
  _15 = _14 | 319750145;
  OS_CORTEXM_SetRegion (5, _13, _15);
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 181722375]:
  # DEBUG BEGIN_STMT
  # DEBUG region => 5
  # DEBUG rbar => 0
  # DEBUG rasr => 0
  # DEBUG INLINE_ENTRY OS_CORTEXM_SetRegion
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].rnr ={v} 5;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rbar ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(struct os_mpu_s *)3758157200B].regions[0].rasr ={v} 0;

  <bb 8> [local count: 1073741824]:
  # DEBUG region => NULL
  # DEBUG rbar => NULL
  # DEBUG rasr => NULL
  return;

}



;; Function OS_CORTEXM_ResetKernStackRw (OS_CORTEXM_ResetKernStackRw, funcdef_no=8, decl_uid=7386, cgraph_uid=9, symbol_order=14)

Modification phase of node OS_CORTEXM_ResetKernStackRw/14
__attribute__((target ("general-regs-only")))
OS_CORTEXM_ResetKernStackRw (const struct os_isr_t * isr)
{
  const struct os_appcontext_t * a;
  unsigned char _1;
  os_stackelement_t * _2;
  unsigned int _3;
  unsigned char _4;
  unsigned int _5;
  unsigned int _6;
  unsigned char _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  a_10 = isr_9(D)->app;
  # DEBUG a => a_10
  # DEBUG BEGIN_STMT
  if (a_10 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619278]:
  _1 = a_10->flags;
  _11 = _1 & 1;
  if (_11 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  # DEBUG k_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  _2 = OS_kernelData.iStackBase;
  _3 = (unsigned int) _2;
  _4 = OS_kernStackMpuSize[0];
  _5 = (unsigned int) _4;
  _6 = _5 | 302972929;
  OS_CORTEXM_SetRegion (2, _3, _6);

  <bb 5> [local count: 1073741824]:
  return;

}


