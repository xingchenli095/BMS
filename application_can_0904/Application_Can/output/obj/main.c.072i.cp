
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EcuM_Shutdown/4:
  Jump functions of caller  EcuM_Init/3:
  Jump functions of caller  ErrorHook/2:
  Jump functions of caller  ShutdownHook/1:
  Jump functions of caller  main/0:

 Propagating constants:

Not considering ErrorHook for cloning; -fipa-cp-clone disabled.
Not considering ShutdownHook for cloning; -fipa-cp-clone disabled.
Not considering main for cloning; -fipa-cp-clone disabled.

overall_size: 56, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ErrorHook/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ShutdownHook/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: main/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

a.7978/5 (a) @06d9f168
  Type: variable definition analyzed
  Visibility: force_output prevailing_def_ironly
  References: 
  Referring: ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)ErrorHook/2 (read)ErrorHook/2 (write)
  Availability: available
  Varpool flags: initialized
EcuM_Shutdown/4 (EcuM_Shutdown) @06d8f2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ShutdownHook/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_Init/3 (EcuM_Init) @06d8fe00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: main/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ErrorHook/2 (ErrorHook) @06d8fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)a.7978/5 (read)a.7978/5 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ShutdownHook/1 (ShutdownHook) @06d8fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_Shutdown/4 (1073741824 (estimated locally),1.00 per call) 
main/0 (main) @06d8f8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body only_called_at_startup executed_once optimize_size
  Called by: 
  Calls: EcuM_Init/3 (1073741824 (estimated locally),1.00 per call) 

;; Function main (main, funcdef_no=0, decl_uid=7970, cgraph_uid=1, symbol_order=0) (executed once)

Modification phase of node main/0
main ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  EcuM_Init ();
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ShutdownHook (ShutdownHook, funcdef_no=1, decl_uid=5604, cgraph_uid=2, symbol_order=1)

Modification phase of node ShutdownHook/1
ShutdownHook (StatusType errorID)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  EcuM_Shutdown ();
  return;

}



;; Function ErrorHook (ErrorHook, funcdef_no=2, decl_uid=5596, cgraph_uid=3, symbol_order=2)

Modification phase of node ErrorHook/2
ErrorHook (StatusType error)
{
  static volatile uint8 a = 0;
  unsigned char a.0_1;
  unsigned char _2;
  unsigned char a.2_3;
  unsigned char _4;
  unsigned char a.4_5;
  unsigned char _6;
  unsigned char a.6_7;
  unsigned char _8;
  unsigned char a.8_9;
  unsigned char _10;
  unsigned char a.10_11;
  unsigned char _12;
  unsigned char a.12_13;
  unsigned char _14;
  unsigned char a.14_15;
  unsigned char _16;
  unsigned char a.16_17;
  unsigned char _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (error_20(D)) <default: <L8> [11.11%], case 1: <L0> [11.11%], case 2: <L1> [11.11%], case 3: <L2> [11.11%], case 4: <L3> [11.11%], case 5: <L4> [11.11%], case 6: <L5> [11.11%], case 7: <L6> [11.11%], case 8: <L7> [11.11%]>

  <bb 3> [local count: 119292717]:
<L0>:
  # DEBUG BEGIN_STMT
  a.0_1 ={v} a;
  _2 = a.0_1 + 1;
  a ={v} _2;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 119292717]:
<L1>:
  # DEBUG BEGIN_STMT
  a.2_3 ={v} a;
  _4 = a.2_3 + 1;
  a ={v} _4;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 5> [local count: 119292717]:
<L2>:
  # DEBUG BEGIN_STMT
  a.4_5 ={v} a;
  _6 = a.4_5 + 1;
  a ={v} _6;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 119292717]:
<L3>:
  # DEBUG BEGIN_STMT
  a.6_7 ={v} a;
  _8 = a.6_7 + 1;
  a ={v} _8;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 7> [local count: 119292717]:
<L4>:
  # DEBUG BEGIN_STMT
  a.8_9 ={v} a;
  _10 = a.8_9 + 1;
  a ={v} _10;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 119292717]:
<L5>:
  # DEBUG BEGIN_STMT
  a.10_11 ={v} a;
  _12 = a.10_11 + 1;
  a ={v} _12;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 119292717]:
<L6>:
  # DEBUG BEGIN_STMT
  a.12_13 ={v} a;
  _14 = a.12_13 + 1;
  a ={v} _14;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 119292717]:
<L7>:
  # DEBUG BEGIN_STMT
  a.14_15 ={v} a;
  _16 = a.14_15 + 1;
  a ={v} _16;
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 119292717]:
<L8>:
  # DEBUG BEGIN_STMT
  a.16_17 ={v} a;
  _18 = a.16_17 + 1;
  a ={v} _18;
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073634452]:
  return;

}


