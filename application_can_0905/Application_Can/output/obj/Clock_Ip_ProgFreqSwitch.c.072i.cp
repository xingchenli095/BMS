
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1:
  Jump functions of caller  Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0:

 Propagating constants:

Not considering Clock_Ip_CgmXPcfsSdurDivcDiveDivs for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_ProgressiveFrequencyClockSwitchEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 82, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1:
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
  Node: Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0:
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

PcfsRate.8846/9 (PcfsRate) @06fa1948
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
AMax.8845/8 (AMax) @06fa1900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_FreqIds/7 (Clock_Ip_FreqIds) @06fa18b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)
  Availability: not_available
  Varpool flags:
Clock_Ip_pxConfig/6 (Clock_Ip_pxConfig) @06fa1870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)
  Availability: not_available
  Varpool flags:
Hash.8847/5 (Hash) @06fa1828
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (write)
  Availability: available
  Varpool flags:
Clock_Ip_apxCgmPcfs/4 (Clock_Ip_apxCgmPcfs) @06fa17e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_au8ClockFeatures/3 (Clock_Ip_au8ClockFeatures) @06fa1798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (read)
  Availability: not_available
  Varpool flags: read-only
Clock_Ip_axPcfsCallbacks/2 (Clock_Ip_axPcfsCallbacks) @06fa1090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0 (addr)Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1 (Clock_Ip_CgmXPcfsSdurDivcDiveDivs) @06f78a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_au8ClockFeatures/3 (read)Clock_Ip_apxCgmPcfs/4 (read)Clock_Ip_au8ClockFeatures/3 (read)Hash.8847/5 (read)Hash.8847/5 (write)Clock_Ip_pxConfig/6 (read)Clock_Ip_FreqIds/7 (read)AMax.8845/8 (read)PcfsRate.8846/9 (read)
  Referring: Clock_Ip_axPcfsCallbacks/2 (addr)
  Availability: available
  Function flags: count:178956969 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0 (Clock_Ip_ProgressiveFrequencyClockSwitchEmpty) @06f78460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_axPcfsCallbacks/2 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Clock_Ip_ProgressiveFrequencyClockSwitchEmpty (Clock_Ip_ProgressiveFrequencyClockSwitchEmpty, funcdef_no=0, decl_uid=8831, cgraph_uid=1, symbol_order=0)

Modification phase of node Clock_Ip_ProgressiveFrequencyClockSwitchEmpty/0
Clock_Ip_ProgressiveFrequencyClockSwitchEmpty (const struct Clock_Ip_PcfsConfigType * Config, uint32 Index)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Clock_Ip_CgmXPcfsSdurDivcDiveDivs (Clock_Ip_CgmXPcfsSdurDivcDiveDivs, funcdef_no=1, decl_uid=8834, cgraph_uid=2, symbol_order=1)

Modification phase of node Clock_Ip_CgmXPcfsSdurDivcDiveDivs/1
Clock_Ip_CgmXPcfsSdurDivcDiveDivs (const struct Clock_Ip_PcfsConfigType * Config, uint32 CfgIndex)
{
  uint32 DivEndValue;
  uint32 DivStartValue;
  uint32 DivcInit;
  uint32 Sdur;
  uint32 K;
  uint32 Var3;
  uint32 Var2;
  uint32 Var1;
  uint32 Index;
  uint32 Rate;
  uint32 AmaxBrut;
  uint32 Fsafe;
  uint32 Finput;
  static uint32 Hash[1];
  static const uint32 PcfsRate[6] = {0, 12, 48, 112, 184, 1000};
  static const uint32 AMax[6] = {0, 5, 10, 15, 20, 100};
  uint32 HwIndex;
  volatile struct Clock_Ip_CgmPcfsType * CgmPcfsBase;
  <unnamed type> _1;
  unsigned char _2;
  int _3;
  <unnamed type> _4;
  unsigned char _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _12;
  long unsigned int _13;
  long unsigned int _14;
  const struct Clock_Ip_ClockConfigType * Clock_Ip_pxConfig.0_15;
  unsigned char _16;
  int _17;
  long unsigned int _18;
  long unsigned int _19;
  long unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  long unsigned int _26;
  long unsigned int _27;
  long unsigned int _28;
  long unsigned int _29;
  long unsigned int _30;
  long unsigned int _31;
  long unsigned int _32;
  long unsigned int _33;
  long unsigned int _34;
  long unsigned int _35;
  long unsigned int _36;
  long unsigned int _37;
  long unsigned int _38;
  long unsigned int _39;
  long unsigned int _40;
  long unsigned int _41;
  long unsigned int _42;
  long unsigned int _43;

  <bb 2> [local count: 178956969]:
  # DEBUG BEGIN_STMT
  _1 = Config_56(D)->SelectorName;
  _2 = Clock_Ip_au8ClockFeatures[_1][0];
  _3 = (int) _2;
  CgmPcfsBase_57 = Clock_Ip_apxCgmPcfs[_3];
  # DEBUG CgmPcfsBase => CgmPcfsBase_57
  # DEBUG BEGIN_STMT
  _4 = Config_56(D)->Name;
  _5 = Clock_Ip_au8ClockFeatures[_4][7];
  HwIndex_58 = (uint32) _5;
  # DEBUG HwIndex => HwIndex_58
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Finput => 0
  # DEBUG BEGIN_STMT
  # DEBUG Fsafe => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Rate => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _6 = Hash[CfgIndex_59(D)];
  _7 = Config_56(D)->ClockSourceFrequency;
  _8 = Config_56(D)->MaxAllowableIDDchange;
  _9 = _7 ^ _8;
  _10 = _4 ^ _9;
  _12 = _1 ^ _10;
  _13 = Config_56(D)->StepDuration;
  _14 = _12 ^ _13;
  if (_6 != _14)
    goto <bb 3>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 3> [local count: 118111599]:
  # DEBUG BEGIN_STMT
  Hash[CfgIndex_59(D)] = _14;
  # DEBUG BEGIN_STMT
  Finput_61 = _7 / 1000000;
  # DEBUG Finput => Finput_61
  # DEBUG BEGIN_STMT
  Clock_Ip_pxConfig.0_15 = Clock_Ip_pxConfig;
  _16 = Clock_Ip_FreqIds[1];
  _17 = (int) _16;
  _18 = Clock_Ip_pxConfig.0_15->ConfiguredFrequencies[_17].ConfiguredFrequencyValue;
  Fsafe_62 = _18 / 1000000;
  # DEBUG Fsafe => Fsafe_62
  # DEBUG BEGIN_STMT
  _19 = _8 * _13;
  _20 = _19 * 100000;
  _21 = Finput_61 * 2360;
  AmaxBrut_63 = _20 / _21;
  # DEBUG AmaxBrut => AmaxBrut_63
  # DEBUG BEGIN_STMT
  # DEBUG Rate => AmaxBrut_63
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (AmaxBrut_63 > 100)
    goto <bb 8>; [50.00%]
  else
    goto <bb 19>; [50.00%]

  <bb 19> [local count: 59055800]:
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 295208146]:
  # DEBUG BEGIN_STMT
  _22 = Index_47 + 4294967295;
  _23 = AMax[_22];
  if (_23 < AmaxBrut_63)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 147604073]:
  # DEBUG BEGIN_STMT
  Rate_64 = PcfsRate[Index_47];
  # DEBUG Rate => Rate_64

  <bb 6> [local count: 295208146]:
  # Rate_44 = PHI <Rate_45(4), Rate_64(5)>
  # DEBUG Rate => Rate_44
  # DEBUG BEGIN_STMT
  Index_65 = Index_47 + 1;
  # DEBUG Index => Index_65

  <bb 7> [local count: 354263946]:
  # Rate_45 = PHI <Rate_44(6), AmaxBrut_63(19)>
  # Index_47 = PHI <Index_65(6), 1(19)>
  # DEBUG Index => Index_47
  # DEBUG Rate => Rate_45
  # DEBUG BEGIN_STMT
  if (Index_47 != 6)
    goto <bb 4>; [83.33%]
  else
    goto <bb 8>; [16.67%]

  <bb 8> [local count: 118111599]:
  # Rate_46 = PHI <Rate_45(7), 1000(3)>
  # DEBUG Rate => Rate_46
  # DEBUG BEGIN_STMT
  _24 = Finput_61 * 2048000;
  _25 = Rate_46 * Fsafe_62;
  _26 = _24 / _25;
  _27 = 2048000 / Rate_46;
  _28 = _26 - _27;
  Var1_66 = _28 + 256;
  # DEBUG Var1 => Var1_66
  # DEBUG BEGIN_STMT
  # DEBUG Var2 => 1073741824
  # DEBUG BEGIN_STMT
  # DEBUG Var3 => 0
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 955630219]:
  # DEBUG BEGIN_STMT
  Var2_80 = Var2_50 >> 2;
  # DEBUG Var2 => Var2_80

  <bb 10> [local count: 1073741820]:
  # Var2_50 = PHI <1073741824(8), Var2_80(9)>
  # DEBUG Var2 => Var2_50
  # DEBUG BEGIN_STMT
  if (Var2_50 > Var1_66)
    goto <bb 9>; [89.00%]
  else
    goto <bb 18>; [11.00%]

  <bb 18> [local count: 118111600]:
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 955630225]:
  # DEBUG BEGIN_STMT
  _29 = Var2_51 + Var3_53;
  if (_29 <= Var1_49)
    goto <bb 13>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 13> [local count: 477815112]:
  # DEBUG BEGIN_STMT
  Var1_76 = Var1_49 - _29;
  # DEBUG Var1 => Var1_76
  # DEBUG BEGIN_STMT
  _30 = Var2_51 << 1;
  Var3_77 = _30 + Var3_53;
  # DEBUG Var3 => Var3_77

  <bb 14> [local count: 955630225]:
  # Var1_48 = PHI <Var1_49(12), Var1_76(13)>
  # Var3_52 = PHI <Var3_53(12), Var3_77(13)>
  # DEBUG Var3 => Var3_52
  # DEBUG Var1 => Var1_48
  # DEBUG BEGIN_STMT
  Var3_78 = Var3_52 >> 1;
  # DEBUG Var3 => Var3_78
  # DEBUG BEGIN_STMT
  Var2_79 = Var2_51 >> 2;
  # DEBUG Var2 => Var2_79

  <bb 15> [local count: 1073741824]:
  # Var1_49 = PHI <Var1_48(14), Var1_66(18)>
  # Var2_51 = PHI <Var2_79(14), Var2_50(18)>
  # Var3_53 = PHI <Var3_78(14), 0(18)>
  # DEBUG Var3 => Var3_53
  # DEBUG Var2 => Var2_51
  # DEBUG Var1 => Var1_49
  # DEBUG BEGIN_STMT
  if (Var2_51 != 0)
    goto <bb 12>; [89.00%]
  else
    goto <bb 16>; [11.00%]

  <bb 16> [local count: 118111601]:
  # Var3_11 = PHI <Var3_53(15)>
  # DEBUG BEGIN_STMT
  _31 = Var3_11 << 2;
  _32 = _31 + 191;
  K_67 = _32 >> 7;
  # DEBUG K => K_67
  # DEBUG BEGIN_STMT
  Sdur_68 = _13 * Fsafe_62;
  # DEBUG Sdur => Sdur_68
  # DEBUG BEGIN_STMT
  DivcInit_69 = Rate_46 * K_67;
  # DEBUG DivcInit => DivcInit_69
  # DEBUG BEGIN_STMT
  # DEBUG DivcRate => Rate_46
  # DEBUG BEGIN_STMT
  _33 = K_67 + 1;
  _34 = _33 * DivcInit_69;
  _35 = _34 >> 1;
  DivStartValue_70 = _35 + 999;
  # DEBUG DivStartValue => DivStartValue_70
  # DEBUG BEGIN_STMT
  _36 = Finput_61 * 1000;
  _37 = _36 / Fsafe_62;
  DivEndValue_71 = _37 + 4294967295;
  # DEBUG DivEndValue => DivEndValue_71
  # DEBUG BEGIN_STMT
  _38 = Sdur_68 & 65535;
  CgmPcfsBase_57->PCFS_SDUR ={v} _38;
  # DEBUG BEGIN_STMT
  _39 = Rate_46 & 255;
  _40 = DivcInit_69 << 16;
  _41 = _39 | _40;
  CgmPcfsBase_57->PCFS[HwIndex_58].DIVC ={v} _41;
  # DEBUG BEGIN_STMT
  _42 = DivEndValue_71 & 1048575;
  CgmPcfsBase_57->PCFS[HwIndex_58].DIVE ={v} _42;
  # DEBUG BEGIN_STMT
  _43 = DivStartValue_70 & 1048575;
  CgmPcfsBase_57->PCFS[HwIndex_58].DIVS ={v} _43;

  <bb 17> [local count: 178956970]:
  return;

}

