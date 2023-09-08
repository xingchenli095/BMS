
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  EcuM_ExitExclusiveArea/6:
  Jump functions of caller  EcuM_EnterExclusiveArea/5:
  Jump functions of caller  Det_ASR40_ReportError/4:
  Jump functions of caller  EcuM_GetMasterCoreInstance/3:
  Jump functions of caller  EcuM_ASR40_GetBootTarget/2:
  Jump functions of caller  EcuM_ASR40_SelectBootTarget/1:

 Propagating constants:

Not considering EcuM_ASR40_GetBootTarget for cloning; -fipa-cp-clone disabled.
Not considering EcuM_ASR40_SelectBootTarget for cloning; -fipa-cp-clone disabled.

overall_size: 60, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: EcuM_ASR40_GetBootTarget/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: EcuM_ASR40_SelectBootTarget/1:
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

EcuM_ExitExclusiveArea/6 (EcuM_ExitExclusiveArea) @07278540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ASR40_SelectBootTarget/1 (359703511 (estimated locally),0.34 per call) 
  Calls: 
EcuM_EnterExclusiveArea/5 (EcuM_EnterExclusiveArea) @07278380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ASR40_SelectBootTarget/1 (359703511 (estimated locally),0.34 per call) 
  Calls: 
Det_ASR40_ReportError/4 (Det_ASR40_ReportError) @072782a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ASR40_GetBootTarget/2 (125392644 (estimated locally),0.12 per call) EcuM_ASR40_GetBootTarget/2 (354334802 (estimated locally),0.33 per call) EcuM_ASR40_SelectBootTarget/1 (359703511 (estimated locally),0.34 per call) EcuM_ASR40_SelectBootTarget/1 (354334802 (estimated locally),0.33 per call) 
  Calls: 
EcuM_GetMasterCoreInstance/3 (EcuM_GetMasterCoreInstance) @072781c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_ASR40_GetBootTarget/2 (1073741824 (estimated locally),1.00 per call) EcuM_ASR40_SelectBootTarget/1 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
EcuM_ASR40_GetBootTarget/2 (EcuM_ASR40_GetBootTarget) @07278000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_BootTarget/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/4 (125392644 (estimated locally),0.12 per call) Det_ASR40_ReportError/4 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/3 (1073741824 (estimated locally),1.00 per call) 
EcuM_ASR40_SelectBootTarget/1 (EcuM_ASR40_SelectBootTarget) @07271700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: EcuM_BootTarget/0 (write)EcuM_BootTarget/0 (write)EcuM_BootTarget/0 (write)EcuM_BootTarget/0 (write)EcuM_BootTarget/0 (write)EcuM_BootTarget/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: EcuM_ExitExclusiveArea/6 (359703511 (estimated locally),0.34 per call) EcuM_EnterExclusiveArea/5 (359703511 (estimated locally),0.34 per call) Det_ASR40_ReportError/4 (359703511 (estimated locally),0.34 per call) Det_ASR40_ReportError/4 (354334802 (estimated locally),0.33 per call) EcuM_GetMasterCoreInstance/3 (1073741823 (estimated locally),1.00 per call) 
EcuM_BootTarget/0 (EcuM_BootTarget) @0724f948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: EcuM_ASR40_SelectBootTarget/1 (write)EcuM_ASR40_SelectBootTarget/1 (write)EcuM_ASR40_SelectBootTarget/1 (write)EcuM_ASR40_SelectBootTarget/1 (write)EcuM_ASR40_SelectBootTarget/1 (write)EcuM_ASR40_SelectBootTarget/1 (write)EcuM_ASR40_GetBootTarget/2 (read)
  Availability: available
  Varpool flags:

;; Function EcuM_ASR40_SelectBootTarget (EcuM_ASR40_SelectBootTarget, funcdef_no=0, decl_uid=7829, cgraph_uid=1, symbol_order=1)

Modification phase of node EcuM_ASR40_SelectBootTarget/1
EcuM_ASR40_SelectBootTarget (EcuM_ASR40_BootTargetType target)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 18, 16);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  if (target_8(D) > 2)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 18, 19);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  EcuM_EnterExclusiveArea ();
  # DEBUG BEGIN_STMT
  if (target_8(D) == 1)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 122299194]:
  # DEBUG BEGIN_STMT
  EcuM_BootTarget[0] = 16754010;
  # DEBUG BEGIN_STMT
  EcuM_BootTarget[1] = 591588204;
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  if (target_8(D) == 2)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 80717468]:
  # DEBUG BEGIN_STMT
  EcuM_BootTarget[0] = 3944071169;
  # DEBUG BEGIN_STMT
  EcuM_BootTarget[1] = 464370366;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 156686849]:
  # DEBUG BEGIN_STMT
  EcuM_BootTarget[0] = 0;
  # DEBUG BEGIN_STMT
  EcuM_BootTarget[1] = 0;

  <bb 11> [local count: 359703511]:
  # DEBUG BEGIN_STMT
  EcuM_ExitExclusiveArea ();

  <bb 12> [local count: 1073741824]:
  # ret_3 = PHI <1(3), 1(5), 0(11)>
  # DEBUG ret => ret_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_3;

}



;; Function EcuM_ASR40_GetBootTarget (EcuM_ASR40_GetBootTarget, funcdef_no=1, decl_uid=7831, cgraph_uid=2, symbol_order=2)

Modification phase of node EcuM_ASR40_GetBootTarget/2
EcuM_ASR40_GetBootTarget (EcuM_ASR40_BootTargetType * target)
{
  Std_ReturnType ret;
  struct EcuM_CoreContextType * _1;
  unsigned char _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = EcuM_GetMasterCoreInstance ();
  _2 = _1->State;
  if (_2 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 19, 16);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 719407023]:
  # DEBUG BEGIN_STMT
  if (target_8(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 125392644]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (10, 0, 19, 18);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  _3 = EcuM_BootTarget[0];
  if (_3 == 16754010)
    goto <bb 7>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 7> [local count: 201964889]:
  # DEBUG BEGIN_STMT
  *target_8(D) = 1;
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 392049490]:
  # DEBUG BEGIN_STMT
  if (_3 == 3944071169)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 133296826]:
  # DEBUG BEGIN_STMT
  *target_8(D) = 2;
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 258752663]:
  # DEBUG BEGIN_STMT
  *target_8(D) = 0;

  <bb 11> [local count: 1073741824]:
  # ret_4 = PHI <1(3), 1(5), 0(7), 0(9), 0(10)>
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return ret_4;

}


