
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Timer_PitInit/0:

 Propagating constants:

Not considering OS_Timer_PitInit for cloning; -fipa-cp-clone disabled.

overall_size: 26, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_Timer_PitInit/0:
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

OS_pit_debugmode/2 (OS_pit_debugmode) @06c28750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Timer_PitInit/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_pitBase/1 (OS_pitBase) @06c28708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_Timer_PitInit/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Timer_PitInit/0 (OS_Timer_PitInit) @06c48a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_pitBase/1 (read)OS_pit_debugmode/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_Timer_PitInit (OS_Timer_PitInit, funcdef_no=0, decl_uid=5529, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_Timer_PitInit/0
__attribute__((target ("general-regs-only")))
OS_Timer_PitInit (os_uint32_t major, os_uint32_t minor, os_uint32_t ticks)
{
  struct os_pit_t * pit;
  unsigned int _1;
  unsigned int _2;
  unsigned char OS_pit_debugmode.0_3;
  unsigned int _4;
  unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;
  unsigned int _13;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  pit_18 = OS_pitBase[major_17(D)];
  # DEBUG pit => pit_18
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => &pit_18->pit_chan[minor_19(D)]
  # DEBUG chan => D#1
  # DEBUG BEGIN_STMT
  _1 = pit_18->mcr;
  _2 = _1 & 2;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  OS_pit_debugmode.0_3 = OS_pit_debugmode;
  if (OS_pit_debugmode.0_3 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _4 = _1 | 1;
  pit_18->mcr = _4;

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _5 = pit_18->mcr;
  _6 = _5 & 4294967293;
  pit_18->mcr = _6;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _7 = MEM[(struct os_pitchannel_t *)pit_18].pit_chan[minor_19(D)].tctrl;
  _8 = _7 & 4294967294;
  MEM[(struct os_pitchannel_t *)pit_18].pit_chan[minor_19(D)].tctrl = _8;
  # DEBUG BEGIN_STMT
  _9 = ticks_23(D) + 4294967295;
  MEM[(struct os_pitchannel_t *)pit_18].pit_chan[minor_19(D)].ldval = _9;
  # DEBUG BEGIN_STMT
  _10 = MEM[(struct os_pitchannel_t *)pit_18].pit_chan[minor_19(D)].tctrl;
  _11 = _10 & 4294967291;
  # DEBUG BEGIN_STMT
  _12 = _11 | 2;
  # DEBUG BEGIN_STMT
  _13 = _12 | 1;
  MEM[(struct os_pitchannel_t *)pit_18].pit_chan[minor_19(D)].tctrl = _13;
  return;

}


