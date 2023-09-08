
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntEnableIsr/5:
  Jump functions of caller  OS_CORTEXM_IntClearIsr/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_AppIsAccessible/1:
  Jump functions of caller  OS_LocalEnableInterruptSource/0:

 Propagating constants:

Not considering OS_LocalEnableInterruptSource for cloning; -fipa-cp-clone disabled.

overall_size: 28, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalEnableInterruptSource/0:
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

OS_CORTEXM_IntEnableIsr/5 (OS_CORTEXM_IntEnableIsr) @06cbcee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalEnableInterruptSource/0 (256463234 (estimated locally),0.24 per call) 
  Calls: 
OS_CORTEXM_IntClearIsr/4 (OS_CORTEXM_IntClearIsr) @06cbce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalEnableInterruptSource/0 (84632867 (estimated locally),0.08 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06cbcd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalEnableInterruptSource/0 (512926469 (estimated locally),0.48 per call) OS_LocalEnableInterruptSource/0 (512926469 (estimated locally),0.48 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c9bab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalEnableInterruptSource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AppIsAccessible/1 (OS_AppIsAccessible) @06cbcc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalEnableInterruptSource/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_LocalEnableInterruptSource/0 (OS_LocalEnableInterruptSource) @06cbca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (512926469 (estimated locally),0.48 per call) OS_CORTEXM_IntEnableIsr/5 (256463234 (estimated locally),0.24 per call) OS_CORTEXM_IntClearIsr/4 (84632867 (estimated locally),0.08 per call) OS_CORTEXM_IntSetDisablingLevel/3 (512926469 (estimated locally),0.48 per call) OS_AppIsAccessible/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LocalEnableInterruptSource (OS_LocalEnableInterruptSource, funcdef_no=0, decl_uid=6869, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalEnableInterruptSource/0
__attribute__((target ("general-regs-only")))
OS_LocalEnableInterruptSource (const struct os_isr_t * isr, os_boolean_t clearPending)
{
  os_intstatus_t is;
  os_errorresult_t result;
  const struct os_appcontext_t * _1;
  int _2;
  short unsigned int OS_kernDisableLevel.0_3;
  struct os_isrdynamic_t * _4;
  unsigned char _5;
  unsigned char _6;
  const struct os_archisr_t * _7;
  const struct os_archisr_t * _8;
  unsigned char _14;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = isr_16(D)->app;
  _2 = OS_AppIsAccessible (_1);
  if (_2 == 0)
    goto <bb 8>; [52.23%]
  else
    goto <bb 3>; [47.77%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_3 = OS_kernDisableLevel;
  is_19 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_3);
  # DEBUG is => is_19
  # DEBUG BEGIN_STMT
  _4 = isr_16(D)->dynamic;
  _5 = _4->statusflags;
  _14 = _5 & 32;
  if (_14 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 256463235]:
  # DEBUG BEGIN_STMT
  _6 = _5 & 223;
  _4->statusflags = _6;
  # DEBUG BEGIN_STMT
  if (clearPending_21(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 84632867]:
  # DEBUG BEGIN_STMT
  _7 = &isr_16(D)->arch;
  OS_CORTEXM_IntClearIsr (_7);

  <bb 6> [local count: 256463234]:
  # DEBUG BEGIN_STMT
  _8 = &isr_16(D)->arch;
  OS_CORTEXM_IntEnableIsr (_8);

  <bb 7> [local count: 512926469]:
  # result_9 = PHI <0(6), 174(3)>
  # DEBUG result => result_9
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_19);

  <bb 8> [local count: 1073741824]:
  # result_10 = PHI <154(2), result_9(7)>
  # DEBUG result => result_10
  # DEBUG BEGIN_STMT
  return result_10;

}


