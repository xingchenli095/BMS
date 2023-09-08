
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Synchronize/0:

 Propagating constants:

Not considering OS_Synchronize for cloning; -fipa-cp-clone disabled.

overall_size: 25, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_Synchronize/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_Synchronize/0 (OS_Synchronize) @06b85a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_Synchronize (OS_Synchronize, funcdef_no=0, decl_uid=6475, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_Synchronize/0
__attribute__((target ("general-regs-only")))
OS_Synchronize (struct os_scheduledynamic_t * sd, const struct os_scheduleentry_t * nextp, os_tick_t delta)
{
  os_schedulestatus_t dir;
  os_tick_t adj;
  unsigned char _1;
  unsigned int _2;
  unsigned int _3;
  unsigned char _4;
  const os_tick_t iftmp.0_8;
  const os_tick_t iftmp.0_15;
  const os_tick_t iftmp.0_16;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = sd_11(D)->status;
  dir_12 = _1 & 48;
  # DEBUG dir => dir_12
  # DEBUG BEGIN_STMT
  if (dir_12 == 0)
    goto <bb 12>; [50.00%]
  else
    goto <bb 3>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  if (dir_12 == 16)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 182536110]:
  iftmp.0_16 = nextp_14(D)->maxDecrease;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 354334802]:
  iftmp.0_15 = nextp_14(D)->maxIncrease;

  <bb 6> [local count: 536870913]:
  # iftmp.0_8 = PHI <iftmp.0_16(4), iftmp.0_15(5)>
  # DEBUG adj => iftmp.0_8
  # DEBUG BEGIN_STMT
  _2 = sd_11(D)->adjRemaining;
  adj_17 = MIN_EXPR <_2, iftmp.0_8>;
  # DEBUG adj => adj_17
  # DEBUG BEGIN_STMT
  if (dir_12 == 16)
    goto <bb 7>; [34.00%]
  else
    goto <bb 9>; [66.00%]

  <bb 7> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  if (delta_13(D) < adj_17)
    goto <bb 10>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  delta_19 = delta_13(D) - adj_17;
  # DEBUG delta => delta_19
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  delta_18 = delta_13(D) + adj_17;
  # DEBUG delta => delta_18

  <bb 10> [local count: 536870913]:
  # delta_5 = PHI <delta_19(8), delta_18(9), 0(7)>
  # adj_7 = PHI <adj_17(8), adj_17(9), delta_13(D)(7)>
  # DEBUG adj => adj_7
  # DEBUG delta => delta_5
  # DEBUG BEGIN_STMT
  _3 = _2 - adj_7;
  sd_11(D)->adjRemaining = _3;
  # DEBUG BEGIN_STMT
  if (_3 == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _4 = _1 & 207;
  sd_11(D)->status = _4;

  <bb 12> [local count: 1073741824]:
  # delta_6 = PHI <delta_13(D)(2), delta_5(10), delta_5(11)>
  # DEBUG delta => delta_6
  # DEBUG BEGIN_STMT
  return delta_6;

}


