
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Panic/9:
  Jump functions of caller  OS_CORTEXM_IntDisableUnknownInterrupt/7:
  Jump functions of caller  OS_IntDisableConditionalX/6:
  Jump functions of caller  OS_IntDisableConditional/5:
    callsite  OS_IntDisableConditional/5 -> OS_CORTEXM_IntSetDisablingLevel/4 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/4:
  Jump functions of caller  OS_CORTEXM_IntClearIsr/3:
  Jump functions of caller  OS_CORTEXM_IntDisableIsr/2:
  Jump functions of caller  OS_CORTEXM_IntEnableIsr/1:
  Jump functions of caller  OS_CORTEXM_IntSetupIsr/0:

 Propagating constants:

Not considering OS_CORTEXM_IntDisableUnknownInterrupt for cloning; -fipa-cp-clone disabled.
Not considering OS_IntDisableConditionalX for cloning; -fipa-cp-clone disabled.
Not considering OS_IntDisableConditional for cloning; -fipa-cp-clone disabled.
Not considering OS_CORTEXM_IntSetDisablingLevel for cloning; -fipa-cp-clone disabled.
Not considering OS_CORTEXM_IntClearIsr for cloning; -fipa-cp-clone disabled.
Not considering OS_CORTEXM_IntDisableIsr for cloning; -fipa-cp-clone disabled.
Not considering OS_CORTEXM_IntEnableIsr for cloning; -fipa-cp-clone disabled.
Not considering OS_CORTEXM_IntSetupIsr for cloning; -fipa-cp-clone disabled.

overall_size: 83, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_CORTEXM_IntDisableUnknownInterrupt/7:
  Node: OS_IntDisableConditionalX/6:
  Node: OS_IntDisableConditional/5:
  Node: OS_CORTEXM_IntSetDisablingLevel/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_CORTEXM_IntClearIsr/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_CORTEXM_IntDisableIsr/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_CORTEXM_IntEnableIsr/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: OS_CORTEXM_IntSetupIsr/0:
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

OS_Panic/9 (OS_Panic) @06cd0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_CORTEXM_IntDisableUnknownInterrupt/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_kernDisableLevel/8 (OS_kernDisableLevel) @06cd30d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_IntDisableConditional/5 (read)OS_IntDisableConditionalX/6 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntDisableUnknownInterrupt/7 (OS_CORTEXM_IntDisableUnknownInterrupt) @06c3ae00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Panic/9 (354334802 (estimated locally),0.33 per call) 
OS_IntDisableConditionalX/6 (OS_IntDisableConditionalX) @06c3ab60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_IntDisableConditional/5 (OS_IntDisableConditional) @06c3a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/4 (714038314 (estimated locally),0.67 per call) 
OS_CORTEXM_IntSetDisablingLevel/4 (OS_CORTEXM_IntSetDisablingLevel) @06c3a7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: OS_IntDisableConditional/5 (714038314 (estimated locally),0.67 per call) 
  Calls: 
OS_CORTEXM_IntClearIsr/3 (OS_CORTEXM_IntClearIsr) @06c3a620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_CORTEXM_IntDisableIsr/2 (OS_CORTEXM_IntDisableIsr) @06c3a460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_CORTEXM_IntEnableIsr/1 (OS_CORTEXM_IntEnableIsr) @06c3a2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
OS_CORTEXM_IntSetupIsr/0 (OS_CORTEXM_IntSetupIsr) @06c3a0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_CORTEXM_IntSetupIsr (OS_CORTEXM_IntSetupIsr, funcdef_no=0, decl_uid=5626, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_CORTEXM_IntSetupIsr/0
__attribute__((target ("general-regs-only")))
OS_CORTEXM_IntSetupIsr (const struct os_archisr_t * isr)
{
  short unsigned int _1;
  unsigned char _2;
  short unsigned int _3;
  int _4;
  unsigned char _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = isr_7(D)->priority;
  _2 = (unsigned char) _1;
  _3 = isr_7(D)->source;
  _4 = (int) _3;
  _5 = _2 << 4;
  MEM[(struct os_arm_int_nvic_reg_t *)3758153984B].ipr[_4] ={v} _5;
  return;

}



;; Function OS_CORTEXM_IntEnableIsr (OS_CORTEXM_IntEnableIsr, funcdef_no=1, decl_uid=5628, cgraph_uid=2, symbol_order=1)

Modification phase of node OS_CORTEXM_IntEnableIsr/1
__attribute__((target ("general-regs-only")))
OS_CORTEXM_IntEnableIsr (const struct os_archisr_t * isr)
{
  short unsigned int _1;
  unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = isr_8(D)->source;
  _3 = _1 & 31;
  _2 = (unsigned int) _3;
  _4 = _1 >> 5;
  _10 = _4 & 15;
  _5 = (unsigned int) _10;
  _6 = 1 << _2;
  MEM[(struct os_arm_int_nvic_reg_t *)3758153984B].iser[_5] ={v} _6;
  return;

}



;; Function OS_CORTEXM_IntDisableIsr (OS_CORTEXM_IntDisableIsr, funcdef_no=2, decl_uid=5630, cgraph_uid=3, symbol_order=2)

Modification phase of node OS_CORTEXM_IntDisableIsr/2
__attribute__((target ("general-regs-only")))
OS_CORTEXM_IntDisableIsr (const struct os_archisr_t * isr)
{
  short unsigned int _1;
  unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = isr_8(D)->source;
  _3 = _1 & 31;
  _2 = (unsigned int) _3;
  _4 = _1 >> 5;
  _10 = _4 & 15;
  _5 = (unsigned int) _10;
  _6 = 1 << _2;
  MEM[(struct os_arm_int_nvic_reg_t *)3758153984B].icer[_5] ={v} _6;
  return;

}



;; Function OS_CORTEXM_IntClearIsr (OS_CORTEXM_IntClearIsr, funcdef_no=3, decl_uid=5632, cgraph_uid=4, symbol_order=3)

Modification phase of node OS_CORTEXM_IntClearIsr/3
__attribute__((target ("general-regs-only")))
OS_CORTEXM_IntClearIsr (const struct os_archisr_t * isr)
{
  short unsigned int _1;
  unsigned int _2;
  short unsigned int _3;
  short unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  short unsigned int _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = isr_8(D)->source;
  _3 = _1 & 31;
  _2 = (unsigned int) _3;
  _4 = _1 >> 5;
  _10 = _4 & 15;
  _5 = (unsigned int) _10;
  _6 = 1 << _2;
  MEM[(struct os_arm_int_nvic_reg_t *)3758153984B].icpr[_5] ={v} _6;
  return;

}



;; Function OS_CORTEXM_IntSetDisablingLevel (OS_CORTEXM_IntSetDisablingLevel, funcdef_no=4, decl_uid=5634, cgraph_uid=5, symbol_order=4)

Modification phase of node OS_CORTEXM_IntSetDisablingLevel/4
__attribute__((target ("general-regs-only")))
OS_CORTEXM_IntSetDisablingLevel (os_oldlevel_t level)
{
  register os_uint32_t newBasepri;
  register os_uint32_t OS_CurBasepri;
  register os_uint32_t OS_DIRQResult;
  unsigned int _1;
  int _2;
  int _3;
  unsigned int _7;
  short unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrs	%0, primask" : "result" "=r" OS_DIRQResult_4);
  # DEBUG OS_DIRQResult => OS_DIRQResult_4
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("cpsid	i");
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG old_state => (const os_intstatus_t) OS_DIRQResult_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrs	%0, basepri" : "result" "=r" OS_CurBasepri_8);
  # DEBUG OS_CurBasepri => OS_CurBasepri_8
  # DEBUG BEGIN_STMT
  _1 = OS_CurBasepri_8 >> 4;
  _9 = (short unsigned int) _1;
  # DEBUG prevDisablingLevel => _9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (int) level_10(D);
  _3 = _2 << 4;
  newBasepri_11 = (os_uint32_t) _3;
  # DEBUG newBasepri => newBasepri_11
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("msr basepri, %0" :  : "input" "r" newBasepri_11);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = OS_DIRQResult_4 & 65535;
  # DEBUG newPrimask => _7
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("msr primask, %0" :  : "input" "r" _7);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return _9;

}



;; Function OS_IntDisableConditional (OS_IntDisableConditional, funcdef_no=5, decl_uid=5636, cgraph_uid=6, symbol_order=5)

Modification phase of node OS_IntDisableConditional/5
__attribute__((target ("general-regs-only")))
OS_IntDisableConditional ()
{
  register os_uint32_t OS_CurBasepri;
  os_oldlevel_t prevDisablingLevel;
  unsigned int _1;
  short unsigned int OS_kernDisableLevel.0_2;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrs	%0, basepri" : "result" "=r" OS_CurBasepri_5);
  # DEBUG OS_CurBasepri => OS_CurBasepri_5
  # DEBUG BEGIN_STMT
  _1 = OS_CurBasepri_5 >> 4;
  _6 = (short unsigned int) _1;
  # DEBUG prevDisablingLevel => _6
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_2 = OS_kernDisableLevel;
  if (OS_kernDisableLevel.0_2 < _6)
    goto <bb 4>; [33.00%]
  else
    goto <bb 3>; [67.00%]

  <bb 3> [local count: 719407023]:
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 714038314]:
  # DEBUG BEGIN_STMT
  prevDisablingLevel_9 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_2);
  # DEBUG prevDisablingLevel => prevDisablingLevel_9

  <bb 5> [local count: 1073741824]:
  # prevDisablingLevel_3 = PHI <_6(3), prevDisablingLevel_9(4)>
  # DEBUG prevDisablingLevel => prevDisablingLevel_3
  # DEBUG BEGIN_STMT
  return prevDisablingLevel_3;

}



;; Function OS_IntDisableConditionalX (OS_IntDisableConditionalX, funcdef_no=6, decl_uid=5638, cgraph_uid=7, symbol_order=6)

Modification phase of node OS_IntDisableConditionalX/6
__attribute__((target ("general-regs-only")))
OS_IntDisableConditionalX ()
{
  register os_uint32_t newBasepri;
  register os_uint32_t OS_CurBasepri;
  unsigned int _1;
  short unsigned int OS_kernDisableLevel.2_2;
  int _3;
  int _4;
  short unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrs	%0, basepri" : "result" "=r" OS_CurBasepri_5);
  # DEBUG OS_CurBasepri => OS_CurBasepri_5
  # DEBUG BEGIN_STMT
  _1 = OS_CurBasepri_5 >> 4;
  _6 = (short unsigned int) _1;
  # DEBUG prevDisablingLevel => _6
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.2_2 = OS_kernDisableLevel;
  if (OS_kernDisableLevel.2_2 < _6)
    goto <bb 4>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  if (_6 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 805306369]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = (int) OS_kernDisableLevel.2_2;
  _4 = _3 << 4;
  newBasepri_8 = (os_uint32_t) _4;
  # DEBUG newBasepri => newBasepri_8
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("msr basepri, %0" :  : "input" "r" newBasepri_8);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return _6;

}



;; Function OS_CORTEXM_IntDisableUnknownInterrupt (OS_CORTEXM_IntDisableUnknownInterrupt, funcdef_no=7, decl_uid=5640, cgraph_uid=8, symbol_order=7)

Modification phase of node OS_CORTEXM_IntDisableUnknownInterrupt/7
__attribute__((target ("general-regs-only")))
OS_CORTEXM_IntDisableUnknownInterrupt ()
{
  register os_uint32_t OS_CurIpsr;
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  os_uint32_t _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  __asm__ __volatile__("mrs	%0, ipsr" : "result" "=r" OS_CurIpsr_6);
  # DEBUG OS_CurIpsr => OS_CurIpsr_6
  # DEBUG BEGIN_STMT
  _7 = OS_CurIpsr_6 + 4294967280;
  # DEBUG curSource => _7
  # DEBUG BEGIN_STMT
  if (_7 <= 239)
    goto <bb 3>; [67.00%]
  else
    goto <bb 4>; [33.00%]

  <bb 3> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  _1 = _7 & 31;
  _2 = _7 >> 5;
  _3 = _2;
  _4 = 1 << _1;
  MEM[(struct os_arm_int_nvic_reg_t *)3758153984B].icer[_3] ={v} _4;
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  OS_Panic (15);

  <bb 5> [local count: 1073741824]:
  return;

}


