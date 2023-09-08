
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntDisableIsr/4:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/3:
  Jump functions of caller  OS_AppIsAccessible/1:
  Jump functions of caller  OS_LocalDisableInterruptSource/0:

 Propagating constants:

Not considering OS_LocalDisableInterruptSource for cloning; -fipa-cp-clone disabled.

overall_size: 24, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalDisableInterruptSource/0:
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

OS_CORTEXM_IntDisableIsr/4 (OS_CORTEXM_IntDisableIsr) @06bc5e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalDisableInterruptSource/0 (169265735 (estimated locally),0.16 per call) 
  Calls: 
OS_CORTEXM_IntSetDisablingLevel/3 (OS_CORTEXM_IntSetDisablingLevel) @06bc5d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalDisableInterruptSource/0 (512926469 (estimated locally),0.48 per call) OS_LocalDisableInterruptSource/0 (512926469 (estimated locally),0.48 per call) 
  Calls: 
OS_kernDisableLevel/2 (OS_kernDisableLevel) @06c4a9d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_LocalDisableInterruptSource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_AppIsAccessible/1 (OS_AppIsAccessible) @06bc5c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalDisableInterruptSource/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_LocalDisableInterruptSource/0 (OS_LocalDisableInterruptSource) @06bc5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernDisableLevel/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/3 (512926469 (estimated locally),0.48 per call) OS_CORTEXM_IntDisableIsr/4 (169265735 (estimated locally),0.16 per call) OS_CORTEXM_IntSetDisablingLevel/3 (512926469 (estimated locally),0.48 per call) OS_AppIsAccessible/1 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_LocalDisableInterruptSource (OS_LocalDisableInterruptSource, funcdef_no=0, decl_uid=6866, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalDisableInterruptSource/0
__attribute__((target ("general-regs-only")))
OS_LocalDisableInterruptSource (const struct os_isr_t * isr)
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
  unsigned char _12;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = isr_14(D)->app;
  _2 = OS_AppIsAccessible (_1);
  if (_2 == 0)
    goto <bb 6>; [52.23%]
  else
    goto <bb 3>; [47.77%]

  <bb 3> [local count: 512926469]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.0_3 = OS_kernDisableLevel;
  is_17 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.0_3);
  # DEBUG is => is_17
  # DEBUG BEGIN_STMT
  _4 = isr_14(D)->dynamic;
  _5 = _4->statusflags;
  _12 = _5 & 32;
  if (_12 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 169265735]:
  # DEBUG BEGIN_STMT
  _6 = _5 | 32;
  _4->statusflags = _6;
  # DEBUG BEGIN_STMT
  _7 = &isr_14(D)->arch;
  OS_CORTEXM_IntDisableIsr (_7);

  <bb 5> [local count: 512926469]:
  # result_8 = PHI <0(4), 173(3)>
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_17);

  <bb 6> [local count: 1073741824]:
  # result_9 = PHI <154(2), result_8(5)>
  # DEBUG result => result_9
  # DEBUG BEGIN_STMT
  return result_9;

}


