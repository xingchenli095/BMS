
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  boardSetupClocks.part.0/25:
  Jump functions of caller  __builtin_expect/24:
  Jump functions of caller  OS_CORTEXM_SetRegion/23:
  Jump functions of caller  main/17:
  Jump functions of caller  boardEnableICaches/16:
  Jump functions of caller  memset/15:
  Jump functions of caller  memcpy/14:
  Jump functions of caller  boardStart/13:
    callsite  boardStart/13 -> boardDisableMpu/9 : 
    callsite  boardStart/13 -> boardSetupClocks/12 : 
    callsite  boardStart/13 -> boardEnableClocks/11 : 
    callsite  boardStart/13 -> boardInitMemorySections/10 : 
  Jump functions of caller  boardSetupClocks/12:
    callsite  boardSetupClocks/12 -> boardSetupClocks.part.0/25 : 
  Jump functions of caller  boardEnableClocks/11:
  Jump functions of caller  boardInitMemorySections/10:
  Jump functions of caller  boardDisableMpu/9:

 Propagating constants:

Not considering memset for cloning; -fipa-cp-clone disabled.
Not considering memcpy for cloning; -fipa-cp-clone disabled.
Not considering boardStart for cloning; -fipa-cp-clone disabled.
Not considering boardSetupClocks for cloning; -fipa-cp-clone disabled.
Not considering boardEnableClocks for cloning; -fipa-cp-clone disabled.

overall_size: 306, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: boardSetupClocks.part.0/25:
  Node: memset/15:
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
  Node: memcpy/14:
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
  Node: boardStart/13:
  Node: boardSetupClocks/12:
  Node: boardEnableClocks/11:
  Node: boardInitMemorySections/10:
  Node: boardDisableMpu/9:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

boardSetupClocks.part.0/25 (boardSetupClocks.part.0) @06dd5700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:118111596 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: boardSetupClocks/12 (107374 (estimated locally),0.50 per call) 
  Calls: 
__builtin_expect/24 (__builtin_expect) @06d7a460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: memcpy/14 (131235111 (estimated locally),0.81 per call) memcpy/14 (145816791 (estimated locally),0.90 per call) memcpy/14 (162018656 (estimated locally),1.00 per call) 
  Calls: 
OS_CORTEXM_SetRegion/23 (OS_CORTEXM_SetRegion) @06d7ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: boardDisableMpu/9 (1010605805 (estimated locally),16.01 per call) 
  Calls: 
__ENDBSS/22 (__ENDBSS) @06dc01f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: boardInitMemorySections/10 (addr)
  Availability: not_available
  Varpool flags:
__STARTBSS/21 (__STARTBSS) @06dc01b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: boardInitMemorySections/10 (addr)
  Availability: not_available
  Varpool flags:
__ENDDATA/20 (__ENDDATA) @06dc0168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: boardInitMemorySections/10 (addr)
  Availability: not_available
  Varpool flags:
__INITDATA/19 (__INITDATA) @06dc0120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: boardInitMemorySections/10 (addr)
  Availability: not_available
  Varpool flags:
__STARTDATA/18 (__STARTDATA) @06dc00d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: boardInitMemorySections/10 (addr)
  Availability: not_available
  Varpool flags:
main/17 (main) @06d7a9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: boardStart/13 (107374 (estimated locally),1.00 per call) 
  Calls: 
boardEnableICaches/16 (boardEnableICaches) @06d7a8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: boardStart/13 (107374 (estimated locally),1.00 per call) 
  Calls: 
memset/15 (memset) @06d7a380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
memcpy/14 (memcpy) @06d7a1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:162018656 (estimated locally) body optimize_size
  Called by: 
  Calls: __builtin_expect/24 (131235111 (estimated locally),0.81 per call) __builtin_expect/24 (145816791 (estimated locally),0.90 per call) __builtin_expect/24 (162018656 (estimated locally),1.00 per call) 
boardStart/13 (boardStart) @06cdfee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: main/17 (107374 (estimated locally),1.00 per call) boardEnableICaches/16 (107374 (estimated locally),1.00 per call) boardDisableMpu/9 (107374 (estimated locally),1.00 per call) boardSetupClocks/12 (107374 (estimated locally),1.00 per call) boardEnableClocks/11 (107374 (estimated locally),1.00 per call) boardInitMemorySections/10 (107374 (estimated locally),1.00 per call) 
boardSetupClocks/12 (boardSetupClocks) @06cdf540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: boardPanicReason/8 (write)
  Referring: 
  Availability: available
  Function flags: count:214748 (estimated locally) body optimize_size
  Called by: boardStart/13 (107374 (estimated locally),1.00 per call) 
  Calls: boardSetupClocks.part.0/25 (107374 (estimated locally),0.50 per call) 
boardEnableClocks/11 (boardEnableClocks) @06cdf380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111595 (estimated locally) body optimize_size
  Called by: boardStart/13 (107374 (estimated locally),1.00 per call) 
  Calls: 
boardInitMemorySections/10 (boardInitMemorySections) @06cdf1c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: __ENDDATA/20 (addr)__STARTDATA/18 (addr)__INITDATA/19 (addr)__ENDBSS/22 (addr)__STARTBSS/21 (addr)
  Referring: 
  Availability: local
  Function flags: count:118111600 (estimated locally) body local executed_once optimize_size
  Called by: boardStart/13 (107374 (estimated locally),1.00 per call) 
  Calls: 
boardDisableMpu/9 (boardDisableMpu) @06cdf000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:63136020 (estimated locally) body local executed_once optimize_size
  Called by: boardStart/13 (107374 (estimated locally),1.00 per call) 
  Calls: OS_CORTEXM_SetRegion/23 (1010605805 (estimated locally),16.01 per call) 
boardPanicReason/8 (boardPanicReason) @06c93678
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: boardSetupClocks/12 (write)
  Availability: available
  Varpool flags: initialized

;; Function boardEnableClocks (boardEnableClocks, funcdef_no=2, decl_uid=7811, cgraph_uid=3, symbol_order=11)

Modification phase of node boardEnableClocks/11
boardEnableClocks ()
{
  unsigned int _1;
  unsigned int _2;
  unsigned int _3;
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
  unsigned int _14;
  unsigned int _15;
  unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  unsigned int _19;
  unsigned int _20;
  unsigned int _21;
  unsigned int _22;
  unsigned int _23;
  unsigned int _24;
  unsigned int _25;
  unsigned int _26;
  unsigned int _27;
  unsigned int _28;
  unsigned int _29;
  unsigned int _30;
  unsigned int _31;
  unsigned int _32;
  unsigned int _33;
  unsigned int _34;
  unsigned int _35;
  unsigned int _36;
  unsigned int _37;
  unsigned int _38;
  unsigned int _39;
  unsigned int _40;
  unsigned int _41;
  unsigned int _42;
  unsigned int _43;
  unsigned int _44;
  unsigned int _45;
  unsigned int _46;
  unsigned int _47;
  unsigned int _48;
  unsigned int _49;
  unsigned int _50;
  unsigned int _51;
  unsigned int _52;
  unsigned int _53;

  <bb 2> [local count: 118111595]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_cofb1_clken;
  _2 = _1 | 4096;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_cofb1_clken ={v} _2;
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_cofb1_clken;
  _4 = _3 | 8192;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_cofb1_clken ={v} _4;
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_pupd;
  _6 = _5 | 1;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_pupd ={v} _6;
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key;
  _8 = _7 | 23280;
  MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key ={v} _8;
  # DEBUG BEGIN_STMT
  _9 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key;
  _10 = _9 | 42255;
  MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key ={v} _10;
  # DEBUG BEGIN_STMT

  <bb 3> [local count: 1073741779]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _11 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_pupd;
  _12 = _11 & 1;
  if (_12 != 0)
    goto <bb 29>; [89.00%]
  else
    goto <bb 20>; [11.00%]

  <bb 29> [local count: 955630183]:
  goto <bb 3>; [100.00%]

  <bb 20> [local count: 118111596]:

  <bb 4> [local count: 1073741783]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _13 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_cofb1_stat;
  _14 = _13 >> 12;
  _15 = _14 & 1;
  if (_15 == 0)
    goto <bb 28>; [89.00%]
  else
    goto <bb 19>; [11.00%]

  <bb 28> [local count: 955630186]:
  goto <bb 4>; [100.00%]

  <bb 19> [local count: 118111596]:

  <bb 5> [local count: 1073741790]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _16 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn0_cofb1_stat;
  _17 = _16 >> 13;
  _18 = _17 & 1;
  if (_18 == 0)
    goto <bb 27>; [89.00%]
  else
    goto <bb 6>; [11.00%]

  <bb 27> [local count: 955630193]:
  goto <bb 5>; [100.00%]

  <bb 6> [local count: 118111597]:
  # DEBUG BEGIN_STMT
  _19 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_clken[0];
  _20 = _19 | 536870912;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_clken[0] ={v} _20;
  # DEBUG BEGIN_STMT
  _21 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_clken[1];
  _22 = _21 | 2147483648;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_clken[1] ={v} _22;
  # DEBUG BEGIN_STMT
  _23 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_clken[1];
  _24 = _23 | 16777216;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_clken[1] ={v} _24;
  # DEBUG BEGIN_STMT
  _25 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_pupd;
  _26 = _25 | 1;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_pupd ={v} _26;
  # DEBUG BEGIN_STMT
  _27 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key;
  _28 = _27 | 23280;
  MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key ={v} _28;
  # DEBUG BEGIN_STMT
  _29 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key;
  _30 = _29 | 42255;
  MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key ={v} _30;
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741795]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _31 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_pupd;
  _32 = _31 & 1;
  if (_32 != 0)
    goto <bb 26>; [89.00%]
  else
    goto <bb 18>; [11.00%]

  <bb 26> [local count: 955630198]:
  goto <bb 7>; [100.00%]

  <bb 18> [local count: 118111597]:

  <bb 8> [local count: 1073741802]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _33 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_stat[0];
  _34 = _33 >> 29;
  _35 = _34 & 1;
  if (_35 == 0)
    goto <bb 25>; [89.00%]
  else
    goto <bb 17>; [11.00%]

  <bb 25> [local count: 955630204]:
  goto <bb 8>; [100.00%]

  <bb 17> [local count: 118111598]:

  <bb 9> [local count: 1073741807]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _36 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_stat[1];
  _37 = _36 >> 31;
  if (_37 == 0)
    goto <bb 24>; [89.00%]
  else
    goto <bb 16>; [11.00%]

  <bb 24> [local count: 955630209]:
  goto <bb 9>; [100.00%]

  <bb 16> [local count: 118111599]:

  <bb 10> [local count: 1073741813]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _38 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn1_cofb_stat[1];
  _39 = _38 >> 24;
  _40 = _39 & 1;
  if (_40 == 0)
    goto <bb 23>; [89.00%]
  else
    goto <bb 11>; [11.00%]

  <bb 23> [local count: 955630214]:
  goto <bb 10>; [100.00%]

  <bb 11> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  _41 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn2_cofb_clken[0];
  _42 = _41 | 536870912;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn2_cofb_clken[0] ={v} _42;
  # DEBUG BEGIN_STMT
  _43 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn2_pupd;
  _44 = _43 | 1;
  MEM[(struct os_board_mc_me_t *)1076740096B].prtn2_pupd ={v} _44;
  # DEBUG BEGIN_STMT
  _45 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key;
  _46 = _45 | 23280;
  MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key ={v} _46;
  # DEBUG BEGIN_STMT
  _47 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key;
  _48 = _47 | 42255;
  MEM[(struct os_board_mc_me_t *)1076740096B].ctl_key ={v} _48;
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741820]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _49 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn2_pupd;
  _50 = _49 & 1;
  if (_50 != 0)
    goto <bb 22>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 22> [local count: 955630220]:
  goto <bb 12>; [100.00%]

  <bb 15> [local count: 118111600]:

  <bb 13> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _51 ={v} MEM[(struct os_board_mc_me_t *)1076740096B].prtn2_cofb_stat[0];
  _52 = _51 >> 29;
  _53 = _52 & 1;
  if (_53 == 0)
    goto <bb 21>; [89.00%]
  else
    goto <bb 14>; [11.00%]

  <bb 21> [local count: 955630223]:
  goto <bb 13>; [100.00%]

  <bb 14> [local count: 118111601]:
  return;

}



;; Function boardSetupClocks (boardSetupClocks, funcdef_no=3, decl_uid=7841, cgraph_uid=4, symbol_order=12)

Modification phase of node boardSetupClocks/12
boardSetupClocks ()
{
  unsigned int _1;
  unsigned int _2;

  <bb 2> [local count: 214748]:
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct os_board_cgm_t *)1076723712B].mux_0.css;
  _2 = _1 & 251658240;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 107374]:
  # DEBUG BEGIN_STMT
  boardPanicReason ={v} 19;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 6> [local count: 1073741824]:
  goto <bb 4>; [100.00%]

  <bb 5> [local count: 107374]:
  boardSetupClocks.part.0 ();
  return;

}



;; Function boardStart (boardStart, funcdef_no=4, decl_uid=5869, cgraph_uid=5, symbol_order=13) (executed once)

Modification phase of node boardStart/13
boardStart ()
{
  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  boardInitMemorySections ();
  # DEBUG BEGIN_STMT
  boardEnableClocks ();
  # DEBUG BEGIN_STMT
  boardSetupClocks ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433692B] ={v} 254;
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433807B] ={v} 126;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint32_t *)1076429500B] ={v} 2097152;
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint32_t *)1076429936B] ={v} 2097152;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433692B] ={v} 1;
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433807B] ={v} 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433692B] ={v} 0;
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433807B] ={v} 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433692B] ={v} 1;
  # DEBUG BEGIN_STMT
  MEM[(volatile os_uint8_t *)1076433807B] ={v} 1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  boardDisableMpu ();
  # DEBUG BEGIN_STMT
  boardEnableICaches ();
  # DEBUG BEGIN_STMT
  main ();

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}



;; Function memcpy (memcpy, funcdef_no=5, decl_uid=727, cgraph_uid=6, symbol_order=14)

Modification phase of node memcpy/14
__attribute__((nothrow, leaf))
memcpy (void * dest, const void * src, os_size_t n)
{
  os_uint32_t * d32;
  const os_uint32_t * s32;
  os_uint8_t * d8;
  const os_uint8_t * s8;
  os_size_t i;
  unsigned int dest.2_1;
  unsigned int _2;
  _Bool _3;
  long int _4;
  long int _5;
  unsigned int src.3_6;
  unsigned int _7;
  _Bool _8;
  long int _9;
  long int _10;
  unsigned int _11;
  _Bool _12;
  long int _13;
  long int _14;
  unsigned char _15;
  unsigned int _16;
  unsigned int _17;
  unsigned int _18;
  unsigned int _19;
  unsigned int _21;
  unsigned int _22;
  unsigned int _23;
  unsigned int _24;

  <bb 2> [local count: 162018656]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG tmp => dest_43(D)
  # DEBUG BEGIN_STMT
  dest.2_1 = (unsigned int) dest_43(D);
  _2 = dest.2_1 & 3;
  _3 = _2 != 0;
  _4 = (long int) _3;
  _5 = __builtin_expect (_4, 0);
  if (_5 != 0)
    goto <bb 3>; [10.00%]
  else
    goto <bb 4>; [90.00%]

  <bb 3> [local count: 43907056]:
  # i_46 = PHI <0(2), 0(4), 0(5)>
  # s8_61 = PHI <src_44(D)(2), src_44(D)(4), src_44(D)(5)>
  # d8_20 = PHI <dest_43(D)(2), dest_43(D)(4), dest_43(D)(5)>
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 145816791]:
  src.3_6 = (unsigned int) src_44(D);
  _7 = src.3_6 & 3;
  _8 = _7 != 0;
  _9 = (long int) _8;
  _10 = __builtin_expect (_9, 0);
  if (_10 != 0)
    goto <bb 3>; [10.00%]
  else
    goto <bb 5>; [90.00%]

  <bb 5> [local count: 131235111]:
  _11 = n_45(D) & 3;
  _12 = _11 != 0;
  _13 = (long int) _12;
  _14 = __builtin_expect (_13, 0);
  if (_14 != 0)
    goto <bb 3>; [10.00%]
  else
    goto <bb 8>; [90.00%]

  <bb 6> [local count: 355247999]:
  # DEBUG BEGIN_STMT
  s8_67 = s8_27 + 1;
  # DEBUG s8 => s8_67
  d8_68 = d8_28 + 1;
  # DEBUG d8 => d8_68
  _15 = *s8_27;
  *d8_28 = _15;
  # DEBUG BEGIN_STMT
  i_70 = i_25 + 1;
  # DEBUG i => i_70

  <bb 7> [local count: 399155055]:
  # i_25 = PHI <i_46(3), i_70(6)>
  # s8_27 = PHI <s8_61(3), s8_67(6)>
  # d8_28 = PHI <d8_20(3), d8_68(6)>
  # DEBUG d8 => d8_28
  # DEBUG s8 => s8_27
  # DEBUG i => i_25
  # DEBUG BEGIN_STMT
  if (i_25 < n_45(D))
    goto <bb 6>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 8> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG s32 => src_44(D)
  # DEBUG BEGIN_STMT
  # DEBUG d32 => dest_43(D)
  # DEBUG BEGIN_STMT
  n_47 = n_45(D) >> 2;
  # DEBUG n => n_47
  # DEBUG BEGIN_STMT
  _16 = n_47 & 3;
  switch (_16) <default: <L20> [25.00%], case 1: <L12> [25.00%], case 2: <L11> [25.00%], case 3: <L10> [25.00%]>

  <bb 9> [local count: 29527900]:
<L10>:
  # DEBUG BEGIN_STMT
  s32_49 = src_44(D) + 4;
  # DEBUG s32 => s32_49
  d32_50 = dest_43(D) + 4;
  # DEBUG d32 => d32_50
  _17 = MEM[(const os_uint32_t *)src_44(D)];
  MEM[(os_uint32_t *)dest_43(D)] = _17;

  <bb 10> [local count: 59055800]:
  # s32_29 = PHI <src_44(D)(8), s32_49(9)>
  # d32_33 = PHI <dest_43(D)(8), d32_50(9)>
<L11>:
  # DEBUG d32 => d32_33
  # DEBUG s32 => s32_29
  # DEBUG BEGIN_STMT
  s32_52 = s32_29 + 4;
  # DEBUG s32 => s32_52
  d32_53 = d32_33 + 4;
  # DEBUG d32 => d32_53
  _18 = *s32_29;
  *d32_33 = _18;

  <bb 11> [local count: 88583700]:
  # s32_30 = PHI <src_44(D)(8), s32_52(10)>
  # d32_34 = PHI <dest_43(D)(8), d32_53(10)>
<L12>:
  # DEBUG d32 => d32_34
  # DEBUG s32 => s32_30
  # DEBUG BEGIN_STMT
  s32_55 = s32_30 + 4;
  # DEBUG s32 => s32_55
  d32_56 = d32_34 + 4;
  # DEBUG d32 => d32_56
  _19 = *s32_30;
  *d32_34 = _19;

  <bb 12> [local count: 118111600]:
  # s32_31 = PHI <s32_55(11), src_44(D)(8)>
  # d32_35 = PHI <d32_56(11), dest_43(D)(8)>
<L20>:
  # DEBUG d32 => d32_35
  # DEBUG s32 => s32_31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  n_58 = n_45(D) >> 4;
  # DEBUG n => n_58
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => s32_32 + 4
  # DEBUG s32 => D#2
  # DEBUG d32 => d32_36 + 4
  _21 = *s32_32;
  *d32_36 = _21;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => D#2 + 4
  # DEBUG s32 => D#1
  # DEBUG D#4 => &MEM[(void *)d32_36 + 8B]
  # DEBUG d32 => D#4
  _22 = MEM[(const os_uint32_t *)s32_32 + 4B];
  MEM[(os_uint32_t *)d32_36 + 4B] = _22;
  # DEBUG BEGIN_STMT
  # DEBUG s32 => D#1 + 4
  # DEBUG D#3 => &MEM[(void *)d32_36 + 12B]
  # DEBUG d32 => D#3
  _23 = MEM[(const os_uint32_t *)s32_32 + 8B];
  MEM[(os_uint32_t *)d32_36 + 8B] = _23;
  # DEBUG BEGIN_STMT
  s32_63 = &MEM[(void *)s32_32 + 16B];
  # DEBUG s32 => s32_63
  d32_64 = &MEM[(void *)d32_36 + 16B];
  # DEBUG d32 => d32_64
  _24 = MEM[(const os_uint32_t *)s32_32 + 12B];
  MEM[(os_uint32_t *)d32_36 + 12B] = _24;
  # DEBUG BEGIN_STMT
  i_66 = i_26 + 1;
  # DEBUG i => i_66

  <bb 14> [local count: 1073741824]:
  # i_26 = PHI <0(12), i_66(13)>
  # s32_32 = PHI <s32_31(12), s32_63(13)>
  # d32_36 = PHI <d32_35(12), d32_64(13)>
  # DEBUG d32 => d32_36
  # DEBUG s32 => s32_32
  # DEBUG i => i_26
  # DEBUG BEGIN_STMT
  if (i_26 < n_58)
    goto <bb 13>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 15> [local count: 162018657]:
  # DEBUG BEGIN_STMT
  return dest_43(D);

}



;; Function memset (memset, funcdef_no=6, decl_uid=732, cgraph_uid=7, symbol_order=15)

Modification phase of node memset/15
__attribute__((nothrow, leaf))
memset (void * str, int c, os_size_t n)
{
  os_size_t i;
  void * _1;
  unsigned char _2;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = str_7(D) + i_3;
  _2 = (unsigned char) c_8(D);
  MEM[(os_uint8_t *)_1] = _2;
  # DEBUG BEGIN_STMT
  i_10 = i_3 + 1;
  # DEBUG i => i_10

  <bb 4> [local count: 1073741824]:
  # i_3 = PHI <0(2), i_10(3)>
  # DEBUG i => i_3
  # DEBUG BEGIN_STMT
  if (i_3 < n_6(D))
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  return str_7(D);

}


