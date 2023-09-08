
IPA constant propagation start:
Determining dynamic type for call: _6 = _7 (iftmp.7_10);
  Starting walk at: _6 = _7 (iftmp.7_10);
  instance pointer: iftmp.7_10  Outer instance pointer: iftmp.7_15 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = _7 (iftmp.7_10);
Determining dynamic type for call: RetVal_13 = PbcfgM_AreTheModuleConfigsValid (PbcfgM_ConfigPtr_9(D));
  Starting walk at: RetVal_13 = PbcfgM_AreTheModuleConfigsValid (PbcfgM_ConfigPtr_9(D));
  instance pointer: PbcfgM_ConfigPtr_9(D)  Outer instance pointer: PbcfgM_ConfigPtr_9(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_2 = TS_PlatformSigIsValid (_1);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  TS_PlatformSigIsValid/7:
  Jump functions of caller  Det_ASR40_ReportError/6:
  Jump functions of caller  PbcfgM_AreTheModuleConfigsValid/5:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 = _7 (iftmp.7_10);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PbcfgM_IsValidConfig/4:
    callsite  PbcfgM_IsValidConfig/4 -> PbcfgM_AreTheModuleConfigsValid/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  PbcfgM_GetConfig/3:
  Jump functions of caller  PbcfgM_Init/2:

 Propagating constants:

Not considering PbcfgM_IsValidConfig for cloning; -fipa-cp-clone disabled.
Not considering PbcfgM_GetConfig for cloning; -fipa-cp-clone disabled.
Not considering PbcfgM_Init for cloning; -fipa-cp-clone disabled.

overall_size: 96, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: PbcfgM_AreTheModuleConfigsValid/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: PbcfgM_IsValidConfig/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PbcfgM_GetConfig/3:
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
  Node: PbcfgM_Init/2:
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

PbcfgM_IsValidCfgFuncPtr/9 (PbcfgM_IsValidCfgFuncPtr) @06b0e948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PbcfgM_AreTheModuleConfigsValid/5 (read)
  Availability: not_available
  Varpool flags: read-only
PbcfgM_LcfgSignature/8 (PbcfgM_LcfgSignature) @06b0e558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PbcfgM_IsValidConfig/4 (read)
  Availability: not_available
  Varpool flags: read-only
TS_PlatformSigIsValid/7 (TS_PlatformSigIsValid) @06b09620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PbcfgM_IsValidConfig/4 (574129754 (estimated locally),0.53 per call) 
  Calls: 
Det_ASR40_ReportError/6 (Det_ASR40_ReportError) @06b09380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PbcfgM_GetConfig/3 (16471726 (estimated locally),0.12 per call) PbcfgM_GetConfig/3 (46545838 (estimated locally),0.33 per call) PbcfgM_Init/2 (187153200 (estimated locally),0.17 per call) 
  Calls: 
PbcfgM_AreTheModuleConfigsValid/5 (PbcfgM_AreTheModuleConfigsValid) @06b091c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: PbcfgM_IsValidCfgFuncPtr/9 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: PbcfgM_IsValidConfig/4 (4567277 (estimated locally),0.00 per call) 
  Calls: 
   Indirect call(1014686025 (estimated locally),8.83 per call) 
PbcfgM_IsValidConfig/4 (PbcfgM_IsValidConfig) @06b09000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PbcfgM_LcfgSignature/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PbcfgM_AreTheModuleConfigsValid/5 (4567277 (estimated locally),0.00 per call) TS_PlatformSigIsValid/7 (574129754 (estimated locally),0.53 per call) 
PbcfgM_GetConfig/3 (PbcfgM_GetConfig) @06ae6e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PbcfgM_InitStatus/0 (read)PbcfgM_GConfigPtr/1 (read)
  Referring: 
  Availability: available
  Function flags: count:141047994 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/6 (16471726 (estimated locally),0.12 per call) Det_ASR40_ReportError/6 (46545838 (estimated locally),0.33 per call) 
PbcfgM_Init/2 (PbcfgM_Init) @06ae6c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PbcfgM_GConfigPtr/1 (write)PbcfgM_InitStatus/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/6 (187153200 (estimated locally),0.17 per call) 
PbcfgM_GConfigPtr/1 (PbcfgM_GConfigPtr) @0687d8b8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: PbcfgM_Init/2 (write)PbcfgM_GetConfig/3 (read)
  Availability: available
  Varpool flags: initialized
PbcfgM_InitStatus/0 (PbcfgM_InitStatus) @0687d870
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: PbcfgM_Init/2 (write)PbcfgM_GetConfig/3 (read)
  Availability: available
  Varpool flags: initialized

;; Function PbcfgM_Init (PbcfgM_Init, funcdef_no=0, decl_uid=5412, cgraph_uid=1, symbol_order=2)

Modification phase of node PbcfgM_Init/2
PbcfgM_Init (const struct PbcfgM_ConfigType * PbcfgM_ConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PbcfgM_ConfigPtr_2(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (32769, 0, 1, 17);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  PbcfgM_GConfigPtr = PbcfgM_ConfigPtr_2(D);
  # DEBUG BEGIN_STMT
  PbcfgM_InitStatus = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function PbcfgM_GetConfig (PbcfgM_GetConfig, funcdef_no=1, decl_uid=5416, cgraph_uid=2, symbol_order=3)

Modification phase of node PbcfgM_GetConfig/3
PbcfgM_GetConfig (uint16 PbcfgM_ModuleId, uint16 PbcfgM_InstanceId, const void * * PbcfgM_ModuleConfigPtr)
{
  uint16_least Index;
  Std_ReturnType Result;
  unsigned char PbcfgM_InitStatus.0_1;
  const struct PbcfgM_ConfigType * PbcfgM_GConfigPtr.1_2;
  const struct PbcfgM_ModuleConfigEntryType * _3;
  long unsigned int _4;
  long unsigned int _5;
  const struct PbcfgM_ModuleConfigEntryType * _6;
  short unsigned int _7;
  short unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  short unsigned int _11;
  long unsigned int _12;
  const void * iftmp.3_15;
  const void * iftmp.3_21;

  <bb 2> [local count: 141047994]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PbcfgM_InitStatus.0_1 = PbcfgM_InitStatus;
  if (PbcfgM_InitStatus.0_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 46545838]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (32769, 0, 2, 32);
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 94502156]:
  # DEBUG BEGIN_STMT
  if (PbcfgM_ModuleConfigPtr_18(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 16471726]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (32769, 0, 2, 17);
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 78030430]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PbcfgM_GConfigPtr.1_2 = PbcfgM_GConfigPtr;
  _4 = PbcfgM_GConfigPtr.1_2->ConfigEntryRef;
  # DEBUG pConfigEntries => PbcfgM_GConfigPtr.1_2 + _4
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 1014686026]:
  # DEBUG BEGIN_STMT
  _5 = Index_14 * 8;
  _10 = _4 + _5;
  _6 = PbcfgM_GConfigPtr.1_2 + _10;
  _7 = _6->ModuleId;
  if (_7 == PbcfgM_ModuleId_19(D))
    goto <bb 8>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 8> [local count: 344993249]:
  # DEBUG BEGIN_STMT
  _8 = _6->InstanceId;
  if (_8 == PbcfgM_InstanceId_20(D))
    goto <bb 9>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 9> [local count: 18974629]:
  # _3 = PHI <_6(8)>
  # DEBUG BEGIN_STMT
  _9 = _3->ConfigRef;
  if (_9 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 9487314]:
  iftmp.3_21 = PbcfgM_GConfigPtr.1_2 + _9;

  <bb 11> [local count: 18974629]:
  # iftmp.3_15 = PHI <iftmp.3_21(10), 0B(9)>
  *PbcfgM_ModuleConfigPtr_18(D) = iftmp.3_15;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  goto <bb 14>; [100.00%]

  <bb 12> [local count: 995711396]:
  # DEBUG BEGIN_STMT
  Index_23 = Index_14 + 1;
  # DEBUG Index => Index_23

  <bb 13> [local count: 1073741824]:
  # Index_14 = PHI <0(6), Index_23(12)>
  # DEBUG Index => Index_14
  # DEBUG BEGIN_STMT
  _11 = PbcfgM_GConfigPtr.1_2->numConfigEntry;
  _12 = (long unsigned int) _11;
  if (_12 > Index_14)
    goto <bb 7>; [94.50%]
  else
    goto <bb 14>; [5.50%]

  <bb 14> [local count: 141047993]:
  # Result_13 = PHI <1(3), 1(5), 0(11), 1(13)>
  # DEBUG Result => Result_13
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_13;

}



;; Function PbcfgM_IsValidConfig (PbcfgM_IsValidConfig, funcdef_no=2, decl_uid=5418, cgraph_uid=3, symbol_order=4)

Modification phase of node PbcfgM_IsValidConfig/4
PbcfgM_IsValidConfig (const struct PbcfgM_ConfigType * PbcfgM_ConfigPtr)
{
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int PbcfgM_LcfgSignature.6_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (PbcfgM_ConfigPtr_9(D) != 0B)
    goto <bb 3>; [53.47%]
  else
    goto <bb 8>; [46.53%]

  <bb 3> [local count: 574129754]:
  # DEBUG BEGIN_STMT
  _1 = PbcfgM_ConfigPtr_9(D)->PlatformSignature;
  _2 = TS_PlatformSigIsValid (_1);
  if (_2 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 4> [local count: 195204116]:
  # DEBUG BEGIN_STMT
  _3 = PbcfgM_ConfigPtr_9(D)->PublicInfoSignature;
  if (_3 == 3637215948)
    goto <bb 5>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 5> [local count: 66369399]:
  # DEBUG BEGIN_STMT
  _4 = PbcfgM_ConfigPtr_9(D)->CfgSignature;
  if (_4 == 2582618360)
    goto <bb 6>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 6> [local count: 22565596]:
  # DEBUG BEGIN_STMT
  _5 = PbcfgM_ConfigPtr_9(D)->LcfgSignature;
  PbcfgM_LcfgSignature.6_6 = PbcfgM_LcfgSignature;
  if (_5 == PbcfgM_LcfgSignature.6_6)
    goto <bb 7>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 7> [local count: 4567277]:
  # DEBUG BEGIN_STMT
  RetVal_13 = PbcfgM_AreTheModuleConfigsValid (PbcfgM_ConfigPtr_9(D));
  # DEBUG RetVal => RetVal_13

  <bb 8> [local count: 1073741824]:
  # RetVal_7 = PHI <1(2), 1(3), 1(4), 1(5), 1(6), RetVal_13(7)>
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_7;

}


