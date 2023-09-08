
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  E2EXf_Inv_P05InPlace_Transformer/13:
  Jump functions of caller  E2EXf_P05InPlace_Transformer/12:
  Jump functions of caller  E2E_SMCheckInit/11:
  Jump functions of caller  E2E_P05CheckInit/10:
  Jump functions of caller  E2E_P05ProtectInit/9:
  Jump functions of caller  E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8:
  Jump functions of caller  E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7:
  Jump functions of caller  E2EXf_PartitionDeInit/6:
  Jump functions of caller  E2EXf_PartitionInit/5:

 Propagating constants:

Not considering E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8 for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_PartitionDeInit for cloning; -fipa-cp-clone disabled.
Not considering E2EXf_PartitionInit for cloning; -fipa-cp-clone disabled.

overall_size: 46, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8:
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
  Node: E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7:
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
  Node: E2EXf_PartitionDeInit/6:
  Node: E2EXf_PartitionInit/5:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

E2EXf_Inv_P05InPlace_Transformer/13 (E2EXf_Inv_P05InPlace_Transformer) @06a88c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2EXf_P05InPlace_Transformer/12 (E2EXf_P05InPlace_Transformer) @06a88a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_SMCheckInit/11 (E2E_SMCheckInit) @06a887e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_PartitionInit/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_P05CheckInit/10 (E2E_P05CheckInit) @06a88700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_PartitionInit/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2E_P05ProtectInit/9 (E2E_P05ProtectInit) @06a88620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: E2EXf_PartitionInit/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8 (E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A) @06a88460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: E2EXf_PartitionInit_InitState/2 (read)E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1 (addr)E2EXf_P05CheckCfg_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/4 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_Inv_P05InPlace_Transformer/13 (1073741824 (estimated locally),1.00 per call) 
E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7 (E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8) @06a882a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: E2EXf_PartitionInit_InitState/2 (read)E2EXf_P05ProtectState_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0 (addr)E2EXf_P05ProtectCfg_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/3 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2EXf_P05InPlace_Transformer/12 (1073741824 (estimated locally),1.00 per call) 
E2EXf_PartitionDeInit/6 (E2EXf_PartitionDeInit) @06a880e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: E2EXf_PartitionInit_InitState/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
E2EXf_PartitionInit/5 (E2EXf_PartitionInit) @06a83ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: E2EXf_P05ProtectState_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0 (addr)E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1 (addr)E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1 (addr)E2EXf_P05CheckCfg_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/4 (addr)E2EXf_PartitionInit_InitState/2 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: E2E_SMCheckInit/11 (1073741824 (estimated locally),1.00 per call) E2E_P05CheckInit/10 (1073741824 (estimated locally),1.00 per call) E2E_P05ProtectInit/9 (1073741824 (estimated locally),1.00 per call) 
E2EXf_P05CheckCfg_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/4 (E2EXf_P05CheckCfg_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A) @0682c870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: E2EXf_PartitionInit/5 (addr)E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
E2EXf_P05ProtectCfg_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/3 (E2EXf_P05ProtectCfg_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8) @0682c7e0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
E2EXf_PartitionInit_InitState/2 (E2EXf_PartitionInit_InitState) @0682c798
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: E2EXf_PartitionDeInit/6 (write)E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7 (read)E2EXf_PartitionInit/5 (write)E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8 (read)
  Availability: available
  Varpool flags: initialized
E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/1 (E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A) @0682c750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: E2EXf_PartitionInit/5 (addr)E2EXf_PartitionInit/5 (addr)E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8 (addr)
  Availability: available
  Varpool flags:
E2EXf_P05ProtectState_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/0 (E2EXf_P05ProtectState_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8) @0682c708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: E2EXf_PartitionInit/5 (addr)E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7 (addr)
  Availability: available
  Varpool flags:

;; Function E2EXf_PartitionInit (E2EXf_PartitionInit, funcdef_no=0, decl_uid=5484, cgraph_uid=1, symbol_order=5)

Modification phase of node E2EXf_PartitionInit/5
E2EXf_PartitionInit ()
{
  Std_ReturnType RetVal;
  unsigned char _4;
  unsigned char _6;
  unsigned char _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  _4 = E2E_P05ProtectInit (&E2EXf_P05ProtectState_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8);
  # DEBUG RetVal => _4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = E2E_P05CheckInit (&E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A.P05CheckState);
  RetVal_7 = _4 | _6;
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  _9 = E2E_SMCheckInit (&E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A.SMCheckState, &E2EXf_P05CheckCfg_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A.SMConfig);
  RetVal_10 = RetVal_7 | _9;
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (RetVal_10 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  E2EXf_PartitionInit_InitState = 1;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return RetVal_10;

}



;; Function E2EXf_PartitionDeInit (E2EXf_PartitionDeInit, funcdef_no=1, decl_uid=5486, cgraph_uid=2, symbol_order=6)

Modification phase of node E2EXf_PartitionDeInit/6
E2EXf_PartitionDeInit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  E2EXf_PartitionInit_InitState = 0;
  return;

}



;; Function E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8 (E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8, funcdef_no=2, decl_uid=5490, cgraph_uid=3, symbol_order=7)

Modification phase of node E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8/7
E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8 (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength)
{
  unsigned char E2EXf_PartitionInit_InitState.0_1;
  uint8 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  E2EXf_PartitionInit_InitState.0_1 = E2EXf_PartitionInit_InitState;
  _7 = E2EXf_P05InPlace_Transformer (BufferPtr_3(D), BufferLengthPtr_4(D), InputBufferLength_5(D), &E2EXf_P05ProtectState_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8, &E2EXf_P05ProtectCfg_E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8, E2EXf_PartitionInit_InitState.0_1);
  return _7;

}



;; Function E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A (E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A, funcdef_no=3, decl_uid=5494, cgraph_uid=4, symbol_order=8)

Modification phase of node E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A/8
E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A (uint8 * BufferPtr, uint16 * BufferLengthPtr, uint16 InputBufferLength)
{
  unsigned char E2EXf_PartitionInit_InitState.1_1;
  uint8 _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  E2EXf_PartitionInit_InitState.1_1 = E2EXf_PartitionInit_InitState;
  _7 = E2EXf_Inv_P05InPlace_Transformer (BufferPtr_3(D), BufferLengthPtr_4(D), InputBufferLength_5(D), &E2EXf_P05CheckStates_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A, &E2EXf_P05CheckCfg_E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A, E2EXf_PartitionInit_InitState.1_1);
  return _7;

}

