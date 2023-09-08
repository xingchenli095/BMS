
IPA constant propagation start:
Determining dynamic type for call: _5 = Clock_Ip_PLL_VCO (1076756480B);
  Starting walk at: _5 = Clock_Ip_PLL_VCO (1076756480B);
  instance pointer: 1076756480B  Outer instance pointer: 1076756480B offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0/141:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_5 = _4 ();
  Jump functions of caller  Clock_Ip_Get_PLL_CLK_Frequency.part.0/140:
    callsite  Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 -> Clock_Ip_PLL_VCO/134 : 
       param 0: CONST: 1076756480B
         value: 0x0, mask: 0xfffffff8
         VR  ~[0, 0]
  Jump functions of caller  Clock_Ip_GetFreq/137:
    indirect simple callsite, calling param -1, offset 0, for stmt _5 = _1 ();
  Jump functions of caller  Clock_Ip_SetExternalSignalFrequency/136:
  Jump functions of caller  Clock_Ip_SetExternalOscillatorFrequency/135:
  Jump functions of caller  Clock_Ip_PLL_VCO/134:
    callsite  Clock_Ip_PLL_VCO/134 -> Clock_Ip_Get_FXOSC_CLK_Frequency/17 : 
  Jump functions of caller  Clock_Ip_Get_TRACE_CLK_Frequency/133:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_STM1_CLK_Frequency/132:
    callsite  Clock_Ip_Get_STM1_CLK_Frequency/132 -> Clock_Ip_Get_STMB_CLK_Frequency/131 : 
  Jump functions of caller  Clock_Ip_Get_STMB_CLK_Frequency/131:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_STM0_CLK_Frequency/130:
    callsite  Clock_Ip_Get_STM0_CLK_Frequency/130 -> Clock_Ip_Get_STMA_CLK_Frequency/129 : 
  Jump functions of caller  Clock_Ip_Get_STMA_CLK_Frequency/129:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_RTC0_CLK_Frequency/128:
    callsite  Clock_Ip_Get_RTC0_CLK_Frequency/128 -> Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 : 
  Jump functions of caller  Clock_Ip_Get_RTC_CLK_Frequency/127:
    callsite  Clock_Ip_Get_RTC_CLK_Frequency/127 -> Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 : 
  Jump functions of caller  Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126:
    callsite  Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 -> Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0/141 : 
  Jump functions of caller  Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125:
    callsite  Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125 -> Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124 : 
  Jump functions of caller  Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123:
    callsite  Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123 -> Clock_Ip_Get_FLEXCANB_CLK_Frequency/122 : 
  Jump functions of caller  Clock_Ip_Get_FLEXCANB_CLK_Frequency/122:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121:
    callsite  Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121 -> Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 : 
  Jump functions of caller  Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120:
    callsite  Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120 -> Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 : 
  Jump functions of caller  Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119:
    callsite  Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119 -> Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 : 
  Jump functions of caller  Clock_Ip_Get_FLEXCANA_CLK_Frequency/118:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117:
    callsite  Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117 -> Clock_Ip_Get_EMAC_TX_CLK_Frequency/116 : 
  Jump functions of caller  Clock_Ip_Get_EMAC_TX_CLK_Frequency/116:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115:
    callsite  Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115 -> Clock_Ip_Get_EMAC_TS_CLK_Frequency/114 : 
  Jump functions of caller  Clock_Ip_Get_EMAC_TS_CLK_Frequency/114:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113:
    callsite  Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113 -> Clock_Ip_Get_EMAC_RX_CLK_Frequency/112 : 
  Jump functions of caller  Clock_Ip_Get_EMAC_RX_CLK_Frequency/112:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_SWT0_CLK_Frequency/110:
    callsite  Clock_Ip_Get_SWT0_CLK_Frequency/110 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_SIUL0_CLK_Frequency/109:
    callsite  Clock_Ip_Get_SIUL0_CLK_Frequency/109 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108:
  Jump functions of caller  Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107:
    callsite  Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_SEMA42_CLK_Frequency/106:
    callsite  Clock_Ip_Get_SEMA42_CLK_Frequency/106 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_MSCM_CLK_Frequency/105:
    callsite  Clock_Ip_Get_MSCM_CLK_Frequency/105 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_INTM_CLK_Frequency/104:
    callsite  Clock_Ip_Get_INTM_CLK_Frequency/104 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_I3C0_CLK_Frequency/103:
    callsite  Clock_Ip_Get_I3C0_CLK_Frequency/103 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_FLEXIO0_CLK_Frequency/102:
    callsite  Clock_Ip_Get_FLEXIO0_CLK_Frequency/102 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_CRC0_CLK_Frequency/101:
    callsite  Clock_Ip_Get_CRC0_CLK_Frequency/101 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_WKPU0_CLK_Frequency/100:
    callsite  Clock_Ip_Get_WKPU0_CLK_Frequency/100 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_TSENSE0_CLK_Frequency/99:
    callsite  Clock_Ip_Get_TSENSE0_CLK_Frequency/99 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_TRGMUX0_CLK_Frequency/98:
    callsite  Clock_Ip_Get_TRGMUX0_CLK_Frequency/98 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_SAI1_CLK_Frequency/97:
    callsite  Clock_Ip_Get_SAI1_CLK_Frequency/97 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_SAI0_CLK_Frequency/96:
    callsite  Clock_Ip_Get_SAI0_CLK_Frequency/96 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_PIT2_CLK_Frequency/95:
    callsite  Clock_Ip_Get_PIT2_CLK_Frequency/95 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_PIT1_CLK_Frequency/94:
    callsite  Clock_Ip_Get_PIT1_CLK_Frequency/94 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_PIT0_CLK_Frequency/93:
    callsite  Clock_Ip_Get_PIT0_CLK_Frequency/93 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPUART3_CLK_Frequency/92:
    callsite  Clock_Ip_Get_LPUART3_CLK_Frequency/92 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPUART2_CLK_Frequency/91:
    callsite  Clock_Ip_Get_LPUART2_CLK_Frequency/91 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPUART1_CLK_Frequency/90:
    callsite  Clock_Ip_Get_LPUART1_CLK_Frequency/90 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPUART0_CLK_Frequency/89:
    callsite  Clock_Ip_Get_LPUART0_CLK_Frequency/89 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_LPSPI3_CLK_Frequency/88:
    callsite  Clock_Ip_Get_LPSPI3_CLK_Frequency/88 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPSPI2_CLK_Frequency/87:
    callsite  Clock_Ip_Get_LPSPI2_CLK_Frequency/87 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPSPI1_CLK_Frequency/86:
    callsite  Clock_Ip_Get_LPSPI1_CLK_Frequency/86 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPSPI0_CLK_Frequency/85:
    callsite  Clock_Ip_Get_LPSPI0_CLK_Frequency/85 -> Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 : 
  Jump functions of caller  Clock_Ip_Get_LPI2C1_CLK_Frequency/84:
    callsite  Clock_Ip_Get_LPI2C1_CLK_Frequency/84 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_LPI2C0_CLK_Frequency/83:
    callsite  Clock_Ip_Get_LPI2C0_CLK_Frequency/83 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_ERM0_CLK_Frequency/82:
    callsite  Clock_Ip_Get_ERM0_CLK_Frequency/82 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_EIM_CLK_Frequency/81:
    callsite  Clock_Ip_Get_EIM_CLK_Frequency/81 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_CMP1_CLK_Frequency/80:
    callsite  Clock_Ip_Get_CMP1_CLK_Frequency/80 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_CMP0_CLK_Frequency/79:
    callsite  Clock_Ip_Get_CMP0_CLK_Frequency/79 -> Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 : 
  Jump functions of caller  Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78:
    callsite  Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77:
    callsite  Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_LCU1_CLK_Frequency/76:
    callsite  Clock_Ip_Get_LCU1_CLK_Frequency/76 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_LCU0_CLK_Frequency/75:
    callsite  Clock_Ip_Get_LCU0_CLK_Frequency/75 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EMIOS1_CLK_Frequency/74:
    callsite  Clock_Ip_Get_EMIOS1_CLK_Frequency/74 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EMIOS0_CLK_Frequency/73:
    callsite  Clock_Ip_Get_EMIOS0_CLK_Frequency/73 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72:
    callsite  Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71:
    callsite  Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70:
    callsite  Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69:
    callsite  Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68:
    callsite  Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67:
    callsite  Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66:
    callsite  Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65:
    callsite  Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64:
    callsite  Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63:
    callsite  Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62:
    callsite  Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61:
    callsite  Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60:
    callsite  Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59:
    callsite  Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58:
    callsite  Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57:
    callsite  Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56:
    callsite  Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55:
    callsite  Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54:
    callsite  Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53:
    callsite  Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52:
    callsite  Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51:
    callsite  Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50:
    callsite  Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49:
    callsite  Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48:
    callsite  Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47:
    callsite  Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46:
    callsite  Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45:
    callsite  Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44:
    callsite  Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43:
    callsite  Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42:
    callsite  Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41:
    callsite  Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_EDMA0_CLK_Frequency/40:
    callsite  Clock_Ip_Get_EDMA0_CLK_Frequency/40 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_DMAMUX1_CLK_Frequency/39:
    callsite  Clock_Ip_Get_DMAMUX1_CLK_Frequency/39 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_DMAMUX0_CLK_Frequency/38:
    callsite  Clock_Ip_Get_DMAMUX0_CLK_Frequency/38 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_BCTU0_CLK_Frequency/37:
    callsite  Clock_Ip_Get_BCTU0_CLK_Frequency/37 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_ADC1_CLK_Frequency/36:
    callsite  Clock_Ip_Get_ADC1_CLK_Frequency/36 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_ADC0_CLK_Frequency/35:
    callsite  Clock_Ip_Get_ADC0_CLK_Frequency/35 -> Clock_Ip_Get_CORE_CLK_Frequency/27 : 
  Jump functions of caller  Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_LBIST_CLK_Frequency/32:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_DCM_CLK_Frequency/31:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_HSE_CLK_Frequency/30:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_CORE_CLK_Frequency/27:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_12 = _4 ();
  Jump functions of caller  Clock_Ip_Get_SCS_CLK_Frequency/26:
    indirect simple callsite, calling param -1, offset 0, for stmt Frequency_7 = _4 ();
  Jump functions of caller  Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25:
  Jump functions of caller  Clock_Ip_Get_emac_mii_rx_Frequency/24:
  Jump functions of caller  Clock_Ip_Get_PLL_PHI1_Frequency/23:
    callsite  Clock_Ip_Get_PLL_PHI1_Frequency/23 -> Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 : 
  Jump functions of caller  Clock_Ip_Get_PLL_PHI0_Frequency/22:
    callsite  Clock_Ip_Get_PLL_PHI0_Frequency/22 -> Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 : 
  Jump functions of caller  Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21:
    callsite  Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 -> Clock_Ip_Get_PLL_CLK_Frequency/19 : 
  Jump functions of caller  Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20:
  Jump functions of caller  Clock_Ip_Get_PLL_CLK_Frequency/19:
    callsite  Clock_Ip_Get_PLL_CLK_Frequency/19 -> Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 : 
  Jump functions of caller  Clock_Ip_Get_SXOSC_CLK_Frequency/18:
  Jump functions of caller  Clock_Ip_Get_FXOSC_CLK_Frequency/17:
  Jump functions of caller  Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency/16:
  Jump functions of caller  Clock_Ip_Get_SIRC_CLK_Frequency/15:
  Jump functions of caller  Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14:
    callsite  Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14 -> Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 : 
  Jump functions of caller  Clock_Ip_Get_FIRC_CLK_Frequency/13:
    callsite  Clock_Ip_Get_FIRC_CLK_Frequency/13 -> Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 : 
  Jump functions of caller  Clock_Ip_Get_Zero_Frequency/12:

 Propagating constants:

Not considering Clock_Ip_GetFreq for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetExternalSignalFrequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_SetExternalOscillatorFrequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_TRACE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_STM1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_STMB_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_STM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_STMA_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_RTC0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_RTC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_QSPI_SFCK_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXCAN3_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXCANB_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXCAN2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXCAN1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXCAN0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXCANA_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMAC0_TX_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMAC_TX_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMAC0_TS_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMAC_TS_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMAC0_RX_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMAC_RX_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SWT0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SIUL0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Function Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108 is not versionable, reason: not a tree_versionable_function.
Not considering Clock_Ip_Get_QSPI0_RAM_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SEMA42_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_MSCM_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_INTM_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_I3C0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FLEXIO0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_CRC0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_WKPU0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_TSENSE0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_TRGMUX0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SAI1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SAI0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PIT2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PIT1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PIT0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPUART3_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPUART2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPUART1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPUART0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPSPI3_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPSPI2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPSPI1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPSPI0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPI2C1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LPI2C0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_ERM0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EIM_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_CMP1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_CMP0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_TEMPSENSE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_TCM_CM7_0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LCU1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LCU0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMIOS1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EMIOS0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_EDMA0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_DMAMUX1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_DMAMUX0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_BCTU0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_ADC1_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_ADC0_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_QSPI_MEM_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_LBIST_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_DCM_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_HSE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_AIPS_SLOW_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_AIPS_PLAT_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_CORE_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SCS_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_emac_mii_rmii_tx_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_emac_mii_rx_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PLL_PHI1_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PLL_PHI0_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_PLL_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SXOSC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FXOSC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_SIRC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_FIRC_CLK_Frequency for cloning; -fipa-cp-clone disabled.
Not considering Clock_Ip_Get_Zero_Frequency for cloning; -fipa-cp-clone disabled.

overall_size: 1447, max_new_size: 11001
 - context independent values, size: 27, time_benefit: 1.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0/141:
  Node: Clock_Ip_Get_PLL_CLK_Frequency.part.0/140:
  Node: Clock_Ip_GetFreq/137:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Clock_Ip_SetExternalSignalFrequency/136:
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
  Node: Clock_Ip_SetExternalOscillatorFrequency/135:
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
  Node: Clock_Ip_PLL_VCO/134:
    param [0]: 1076756480B [loc_time: 0, loc_size: 0, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffff8
         const struct PLL_Type * [1076756480B, 1076756480B]
        AGGS VARIABLE
  Node: Clock_Ip_Get_TRACE_CLK_Frequency/133:
  Node: Clock_Ip_Get_STM1_CLK_Frequency/132:
  Node: Clock_Ip_Get_STMB_CLK_Frequency/131:
  Node: Clock_Ip_Get_STM0_CLK_Frequency/130:
  Node: Clock_Ip_Get_STMA_CLK_Frequency/129:
  Node: Clock_Ip_Get_RTC0_CLK_Frequency/128:
  Node: Clock_Ip_Get_RTC_CLK_Frequency/127:
  Node: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126:
  Node: Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125:
  Node: Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124:
  Node: Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123:
  Node: Clock_Ip_Get_FLEXCANB_CLK_Frequency/122:
  Node: Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121:
  Node: Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120:
  Node: Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119:
  Node: Clock_Ip_Get_FLEXCANA_CLK_Frequency/118:
  Node: Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117:
  Node: Clock_Ip_Get_EMAC_TX_CLK_Frequency/116:
  Node: Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115:
  Node: Clock_Ip_Get_EMAC_TS_CLK_Frequency/114:
  Node: Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113:
  Node: Clock_Ip_Get_EMAC_RX_CLK_Frequency/112:
  Node: Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111:
  Node: Clock_Ip_Get_SWT0_CLK_Frequency/110:
  Node: Clock_Ip_Get_SIUL0_CLK_Frequency/109:
  Node: Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108:
  Node: Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107:
  Node: Clock_Ip_Get_SEMA42_CLK_Frequency/106:
  Node: Clock_Ip_Get_MSCM_CLK_Frequency/105:
  Node: Clock_Ip_Get_INTM_CLK_Frequency/104:
  Node: Clock_Ip_Get_I3C0_CLK_Frequency/103:
  Node: Clock_Ip_Get_FLEXIO0_CLK_Frequency/102:
  Node: Clock_Ip_Get_CRC0_CLK_Frequency/101:
  Node: Clock_Ip_Get_WKPU0_CLK_Frequency/100:
  Node: Clock_Ip_Get_TSENSE0_CLK_Frequency/99:
  Node: Clock_Ip_Get_TRGMUX0_CLK_Frequency/98:
  Node: Clock_Ip_Get_SAI1_CLK_Frequency/97:
  Node: Clock_Ip_Get_SAI0_CLK_Frequency/96:
  Node: Clock_Ip_Get_PIT2_CLK_Frequency/95:
  Node: Clock_Ip_Get_PIT1_CLK_Frequency/94:
  Node: Clock_Ip_Get_PIT0_CLK_Frequency/93:
  Node: Clock_Ip_Get_LPUART3_CLK_Frequency/92:
  Node: Clock_Ip_Get_LPUART2_CLK_Frequency/91:
  Node: Clock_Ip_Get_LPUART1_CLK_Frequency/90:
  Node: Clock_Ip_Get_LPUART0_CLK_Frequency/89:
  Node: Clock_Ip_Get_LPSPI3_CLK_Frequency/88:
  Node: Clock_Ip_Get_LPSPI2_CLK_Frequency/87:
  Node: Clock_Ip_Get_LPSPI1_CLK_Frequency/86:
  Node: Clock_Ip_Get_LPSPI0_CLK_Frequency/85:
  Node: Clock_Ip_Get_LPI2C1_CLK_Frequency/84:
  Node: Clock_Ip_Get_LPI2C0_CLK_Frequency/83:
  Node: Clock_Ip_Get_ERM0_CLK_Frequency/82:
  Node: Clock_Ip_Get_EIM_CLK_Frequency/81:
  Node: Clock_Ip_Get_CMP1_CLK_Frequency/80:
  Node: Clock_Ip_Get_CMP0_CLK_Frequency/79:
  Node: Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78:
  Node: Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77:
  Node: Clock_Ip_Get_LCU1_CLK_Frequency/76:
  Node: Clock_Ip_Get_LCU0_CLK_Frequency/75:
  Node: Clock_Ip_Get_EMIOS1_CLK_Frequency/74:
  Node: Clock_Ip_Get_EMIOS0_CLK_Frequency/73:
  Node: Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72:
  Node: Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71:
  Node: Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70:
  Node: Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69:
  Node: Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68:
  Node: Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67:
  Node: Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66:
  Node: Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65:
  Node: Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64:
  Node: Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63:
  Node: Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62:
  Node: Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61:
  Node: Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60:
  Node: Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59:
  Node: Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58:
  Node: Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57:
  Node: Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56:
  Node: Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55:
  Node: Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54:
  Node: Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53:
  Node: Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52:
  Node: Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51:
  Node: Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50:
  Node: Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49:
  Node: Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48:
  Node: Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47:
  Node: Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46:
  Node: Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45:
  Node: Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44:
  Node: Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43:
  Node: Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42:
  Node: Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41:
  Node: Clock_Ip_Get_EDMA0_CLK_Frequency/40:
  Node: Clock_Ip_Get_DMAMUX1_CLK_Frequency/39:
  Node: Clock_Ip_Get_DMAMUX0_CLK_Frequency/38:
  Node: Clock_Ip_Get_BCTU0_CLK_Frequency/37:
  Node: Clock_Ip_Get_ADC1_CLK_Frequency/36:
  Node: Clock_Ip_Get_ADC0_CLK_Frequency/35:
  Node: Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34:
  Node: Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33:
  Node: Clock_Ip_Get_LBIST_CLK_Frequency/32:
  Node: Clock_Ip_Get_DCM_CLK_Frequency/31:
  Node: Clock_Ip_Get_HSE_CLK_Frequency/30:
  Node: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29:
  Node: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28:
  Node: Clock_Ip_Get_CORE_CLK_Frequency/27:
  Node: Clock_Ip_Get_SCS_CLK_Frequency/26:
  Node: Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25:
  Node: Clock_Ip_Get_emac_mii_rx_Frequency/24:
  Node: Clock_Ip_Get_PLL_PHI1_Frequency/23:
  Node: Clock_Ip_Get_PLL_PHI0_Frequency/22:
  Node: Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21:
  Node: Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20:
  Node: Clock_Ip_Get_PLL_CLK_Frequency/19:
  Node: Clock_Ip_Get_SXOSC_CLK_Frequency/18:
  Node: Clock_Ip_Get_FXOSC_CLK_Frequency/17:
  Node: Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency/16:
  Node: Clock_Ip_Get_SIRC_CLK_Frequency/15:
  Node: Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14:
  Node: Clock_Ip_Get_FIRC_CLK_Frequency/13:
  Node: Clock_Ip_Get_Zero_Frequency/12:

IPA decision stage:

 - Creating a specialized node of Clock_Ip_PLL_VCO/134 for all known contexts.
    replacing param #0 Base with const 1076756480B
Propagated bits info for function Clock_Ip_PLL_VCO.constprop/143:
 param 0: value = 0x0, mask = 0xfffffff8
Propagated bits info for function Clock_Ip_PLL_VCO/134:
 param 0: value = 0x0, mask = 0xfffffff8

IPA constant propagation end

Reclaiming functions: Clock_Ip_PLL_VCO/134
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Clock_Ip_PLL_VCO.constprop.0/143 (Clock_Ip_PLL_VCO.constprop) @071399a0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of Clock_Ip_PLL_VCO/134
  Availability: local
  Function flags: count:1073741824 (estimated locally) local optimize_size
  Called by: Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (524845004 (estimated locally),0.49 per call) 
  Calls: Clock_Ip_Get_FXOSC_CLK_Frequency/17 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0/141 (Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0) @07139700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Clock_Ip_apfFreqTableRtcClkSrc/5 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 (365072224 (estimated locally),0.34 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (Clock_Ip_Get_PLL_CLK_Frequency.part.0) @07139380
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Clock_Ip_u32PllChecksum/8 (read)Clock_Ip_u32PllChecksum/8 (write)Clock_Ip_u32PllFreq/9 (write)Clock_Ip_u32PllFreq/9 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Clock_Ip_Get_PLL_CLK_Frequency/19 (536870912 (estimated locally),0.50 per call) 
  Calls: Clock_Ip_PLL_VCO.constprop/143 (524845004 (estimated locally),0.49 per call) 
Clock_Ip_apfTableDividerValue.9134/138 (Clock_Ip_apfTableDividerValue) @07048d80
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_GetFreq/137 (Clock_Ip_GetFreq) @070762a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_apfFreqTable/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_SetExternalSignalFrequency/136 (Clock_Ip_SetExternalSignalFrequency) @070760e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_axExtSignalFreqEntries/7 (read)Clock_Ip_axExtSignalFreqEntries/7 (write)
  Referring: 
  Availability: available
  Function flags: count:397250652 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_SetExternalOscillatorFrequency/135 (Clock_Ip_SetExternalOscillatorFrequency) @0704eee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_u32Fxosc/10 (write)Clock_Ip_u32Sxosc/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_PLL_VCO/134 (Clock_Ip_PLL_VCO) @0704ed20
  Type: function
  Body removed by symtab_remove_unreachable_nodes
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: not_available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Get_TRACE_CLK_Frequency/133 (Clock_Ip_Get_TRACE_CLK_Frequency) @0704eb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_STM1_CLK_Frequency/132 (Clock_Ip_Get_STM1_CLK_Frequency) @0704e9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_STMB_CLK_Frequency/131 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_STMB_CLK_Frequency/131 (Clock_Ip_Get_STMB_CLK_Frequency) @0704e7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_STM1_CLK_Frequency/132 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_STM0_CLK_Frequency/130 (Clock_Ip_Get_STM0_CLK_Frequency) @0704e620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_STMA_CLK_Frequency/129 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_STMA_CLK_Frequency/129 (Clock_Ip_Get_STMA_CLK_Frequency) @0704e460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_STM0_CLK_Frequency/130 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_RTC0_CLK_Frequency/128 (Clock_Ip_Get_RTC0_CLK_Frequency) @0704e2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_RTC_CLK_Frequency/127 (Clock_Ip_Get_RTC_CLK_Frequency) @0704e0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 (Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall) @0704aee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_RTC0_CLK_Frequency/128 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_RTC_CLK_Frequency/127 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0/141 (365072224 (estimated locally),0.34 per call) 
Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125 (Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency) @0704ad20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124 (Clock_Ip_Get_QSPI_SFCK_CLK_Frequency) @0704ab60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123 (Clock_Ip_Get_FLEXCAN3_CLK_Frequency) @0704a9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_FLEXCANB_CLK_Frequency/122 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXCANB_CLK_Frequency/122 (Clock_Ip_Get_FLEXCANB_CLK_Frequency) @0704a7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121 (Clock_Ip_Get_FLEXCAN2_CLK_Frequency) @0704a620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120 (Clock_Ip_Get_FLEXCAN1_CLK_Frequency) @0704a460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119 (Clock_Ip_Get_FLEXCAN0_CLK_Frequency) @0704a2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (Clock_Ip_Get_FLEXCANA_CLK_Frequency) @0704a0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117 (Clock_Ip_Get_EMAC0_TX_CLK_Frequency) @07040ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_EMAC_TX_CLK_Frequency/116 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMAC_TX_CLK_Frequency/116 (Clock_Ip_Get_EMAC_TX_CLK_Frequency) @07040d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115 (Clock_Ip_Get_EMAC0_TS_CLK_Frequency) @07040b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_EMAC_TS_CLK_Frequency/114 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMAC_TS_CLK_Frequency/114 (Clock_Ip_Get_EMAC_TS_CLK_Frequency) @070409a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113 (Clock_Ip_Get_EMAC0_RX_CLK_Frequency) @070407e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_EMAC_RX_CLK_Frequency/112 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMAC_RX_CLK_Frequency/112 (Clock_Ip_Get_EMAC_RX_CLK_Frequency) @07040620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111 (Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency) @07040460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_SWT0_CLK_Frequency/110 (Clock_Ip_Get_SWT0_CLK_Frequency) @070402a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_SIUL0_CLK_Frequency/109 (Clock_Ip_Get_SIUL0_CLK_Frequency) @070400e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108 (Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency) @0703dee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107 (Clock_Ip_Get_QSPI0_RAM_CLK_Frequency) @0703dd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_SEMA42_CLK_Frequency/106 (Clock_Ip_Get_SEMA42_CLK_Frequency) @0703db60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_MSCM_CLK_Frequency/105 (Clock_Ip_Get_MSCM_CLK_Frequency) @0703d9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_INTM_CLK_Frequency/104 (Clock_Ip_Get_INTM_CLK_Frequency) @0703d7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_I3C0_CLK_Frequency/103 (Clock_Ip_Get_I3C0_CLK_Frequency) @0703d620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FLEXIO0_CLK_Frequency/102 (Clock_Ip_Get_FLEXIO0_CLK_Frequency) @0703d460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_CRC0_CLK_Frequency/101 (Clock_Ip_Get_CRC0_CLK_Frequency) @0703d2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_WKPU0_CLK_Frequency/100 (Clock_Ip_Get_WKPU0_CLK_Frequency) @0703d0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_TSENSE0_CLK_Frequency/99 (Clock_Ip_Get_TSENSE0_CLK_Frequency) @07038ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_TRGMUX0_CLK_Frequency/98 (Clock_Ip_Get_TRGMUX0_CLK_Frequency) @07038d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_SAI1_CLK_Frequency/97 (Clock_Ip_Get_SAI1_CLK_Frequency) @07038b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_SAI0_CLK_Frequency/96 (Clock_Ip_Get_SAI0_CLK_Frequency) @070389a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_PIT2_CLK_Frequency/95 (Clock_Ip_Get_PIT2_CLK_Frequency) @070387e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_PIT1_CLK_Frequency/94 (Clock_Ip_Get_PIT1_CLK_Frequency) @07038620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_PIT0_CLK_Frequency/93 (Clock_Ip_Get_PIT0_CLK_Frequency) @07038460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPUART3_CLK_Frequency/92 (Clock_Ip_Get_LPUART3_CLK_Frequency) @070382a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPUART2_CLK_Frequency/91 (Clock_Ip_Get_LPUART2_CLK_Frequency) @070380e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPUART1_CLK_Frequency/90 (Clock_Ip_Get_LPUART1_CLK_Frequency) @07032ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPUART0_CLK_Frequency/89 (Clock_Ip_Get_LPUART0_CLK_Frequency) @07032d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPSPI3_CLK_Frequency/88 (Clock_Ip_Get_LPSPI3_CLK_Frequency) @07032b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPSPI2_CLK_Frequency/87 (Clock_Ip_Get_LPSPI2_CLK_Frequency) @070329a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPSPI1_CLK_Frequency/86 (Clock_Ip_Get_LPSPI1_CLK_Frequency) @070327e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPSPI0_CLK_Frequency/85 (Clock_Ip_Get_LPSPI0_CLK_Frequency) @07032620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPI2C1_CLK_Frequency/84 (Clock_Ip_Get_LPI2C1_CLK_Frequency) @07032460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LPI2C0_CLK_Frequency/83 (Clock_Ip_Get_LPI2C0_CLK_Frequency) @070322a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_ERM0_CLK_Frequency/82 (Clock_Ip_Get_ERM0_CLK_Frequency) @070320e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EIM_CLK_Frequency/81 (Clock_Ip_Get_EIM_CLK_Frequency) @0702cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_CMP1_CLK_Frequency/80 (Clock_Ip_Get_CMP1_CLK_Frequency) @0702cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_CMP0_CLK_Frequency/79 (Clock_Ip_Get_CMP0_CLK_Frequency) @0702cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78 (Clock_Ip_Get_TEMPSENSE_CLK_Frequency) @0702c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77 (Clock_Ip_Get_TCM_CM7_0_CLK_Frequency) @0702c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LCU1_CLK_Frequency/76 (Clock_Ip_Get_LCU1_CLK_Frequency) @0702c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LCU0_CLK_Frequency/75 (Clock_Ip_Get_LCU0_CLK_Frequency) @0702c460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMIOS1_CLK_Frequency/74 (Clock_Ip_Get_EMIOS1_CLK_Frequency) @0702c2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EMIOS0_CLK_Frequency/73 (Clock_Ip_Get_EMIOS0_CLK_Frequency) @0702c0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72 (Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency) @07029ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71 (Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency) @07029d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70 (Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency) @07029b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69 (Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency) @070299a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68 (Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency) @070297e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67 (Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency) @07029620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66 (Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency) @07029460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65 (Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency) @070292a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64 (Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency) @070290e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63 (Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency) @07022ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62 (Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency) @07022d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61 (Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency) @07022b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60 (Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency) @070229a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59 (Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency) @070227e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58 (Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency) @07022620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57 (Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency) @07022460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56 (Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency) @070222a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55 (Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency) @070220e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54 (Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency) @0700cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53 (Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency) @0700cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52 (Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency) @0700cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51 (Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency) @0700c9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50 (Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency) @0700c7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49 (Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency) @0700c620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48 (Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency) @0700c460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47 (Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency) @0700c2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46 (Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency) @0700c0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45 (Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency) @07006ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44 (Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency) @07006d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43 (Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency) @07006b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42 (Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency) @070069a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41 (Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency) @070067e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_EDMA0_CLK_Frequency/40 (Clock_Ip_Get_EDMA0_CLK_Frequency) @07006620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_DMAMUX1_CLK_Frequency/39 (Clock_Ip_Get_DMAMUX1_CLK_Frequency) @07006460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_DMAMUX0_CLK_Frequency/38 (Clock_Ip_Get_DMAMUX0_CLK_Frequency) @070062a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_BCTU0_CLK_Frequency/37 (Clock_Ip_Get_BCTU0_CLK_Frequency) @070060e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_ADC1_CLK_Frequency/36 (Clock_Ip_Get_ADC1_CLK_Frequency) @06fedee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_ADC0_CLK_Frequency/35 (Clock_Ip_Get_ADC0_CLK_Frequency) @06fedd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableGate/2 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_CORE_CLK_Frequency/27 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34 (Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency) @06fedb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfFreqTableClkSrc/4 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33 (Clock_Ip_Get_QSPI_MEM_CLK_Frequency) @06fed9a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_LBIST_CLK_Frequency/32 (Clock_Ip_Get_LBIST_CLK_Frequency) @06fed7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_DCM_CLK_Frequency/31 (Clock_Ip_Get_DCM_CLK_Frequency) @06fed620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_HSE_CLK_Frequency/30 (Clock_Ip_Get_HSE_CLK_Frequency) @06fed460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (Clock_Ip_Get_AIPS_SLOW_CLK_Frequency) @06fed2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_SWT0_CLK_Frequency/110 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_SIUL0_CLK_Frequency/109 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_I3C0_CLK_Frequency/103 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_WKPU0_CLK_Frequency/100 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_TSENSE0_CLK_Frequency/99 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_TRGMUX0_CLK_Frequency/98 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_SAI1_CLK_Frequency/97 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_SAI0_CLK_Frequency/96 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_PIT2_CLK_Frequency/95 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_PIT1_CLK_Frequency/94 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_PIT0_CLK_Frequency/93 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPUART3_CLK_Frequency/92 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPUART2_CLK_Frequency/91 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPUART1_CLK_Frequency/90 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPSPI3_CLK_Frequency/88 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPSPI2_CLK_Frequency/87 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPSPI1_CLK_Frequency/86 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPI2C1_CLK_Frequency/84 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPI2C0_CLK_Frequency/83 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_ERM0_CLK_Frequency/82 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EIM_CLK_Frequency/81 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_CMP1_CLK_Frequency/80 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_CMP0_CLK_Frequency/79 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (Clock_Ip_Get_AIPS_PLAT_CLK_Frequency) @06fed0e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_SEMA42_CLK_Frequency/106 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_MSCM_CLK_Frequency/105 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_INTM_CLK_Frequency/104 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_FLEXIO0_CLK_Frequency/102 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_CRC0_CLK_Frequency/101 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPUART0_CLK_Frequency/89 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LPSPI0_CLK_Frequency/85 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_CORE_CLK_Frequency/27 (Clock_Ip_Get_CORE_CLK_Frequency) @06fe8ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LCU1_CLK_Frequency/76 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_LCU0_CLK_Frequency/75 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EMIOS1_CLK_Frequency/74 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EMIOS0_CLK_Frequency/73 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_EDMA0_CLK_Frequency/40 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_DMAMUX1_CLK_Frequency/39 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_DMAMUX0_CLK_Frequency/38 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_BCTU0_CLK_Frequency/37 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_ADC1_CLK_Frequency/36 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_ADC0_CLK_Frequency/35 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_SCS_CLK_Frequency/26 (Clock_Ip_Get_SCS_CLK_Frequency) @06fe8d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableProducerClkSrc/3 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25 (Clock_Ip_Get_emac_mii_rmii_tx_Frequency) @06fe8b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_axExtSignalFreqEntries/7 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Get_emac_mii_rx_Frequency/24 (Clock_Ip_Get_emac_mii_rx_Frequency) @06fe89a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_axExtSignalFreqEntries/7 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Get_PLL_PHI1_Frequency/23 (Clock_Ip_Get_PLL_PHI1_Frequency) @06fe87e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_PLL_PHI0_Frequency/22 (Clock_Ip_Get_PLL_PHI0_Frequency) @06fe8620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableDivider/1 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 (Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency) @06fe8460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_PLL_PHI0_Frequency/22 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_PLL_PHI1_Frequency/23 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_Get_PLL_CLK_Frequency/19 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency) @06fe82a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_apfTableDividerValue.9134/138 (read)
  Referring: Clock_Ip_apfFreqTableRtcClkSrc/5 (addr)Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_FIRC_CLK_Frequency/13 (1073741824 (estimated locally),1.00 per call) Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_Get_PLL_CLK_Frequency/19 (Clock_Ip_Get_PLL_CLK_Frequency) @06fe80e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 (1073741824 (estimated locally),1.00 per call) 
  Calls: Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (536870912 (estimated locally),0.50 per call) 
Clock_Ip_Get_SXOSC_CLK_Frequency/18 (Clock_Ip_Get_SXOSC_CLK_Frequency) @06fe6ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32Sxosc/11 (read)Clock_Ip_u32EnableClock/0 (read)
  Referring: Clock_Ip_apfFreqTableRtcClkSrc/5 (addr)Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Get_FXOSC_CLK_Frequency/17 (Clock_Ip_Get_FXOSC_CLK_Frequency) @06fe6d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32Fxosc/10 (read)Clock_Ip_u32EnableClock/0 (read)
  Referring: Clock_Ip_apfFreqTableRtcClkSrc/5 (addr)Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Clock_Ip_PLL_VCO.constprop/143 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency/16 (Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency) @06fe6b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableClock/0 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Get_SIRC_CLK_Frequency/15 (Clock_Ip_Get_SIRC_CLK_Frequency) @06fe69a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTableRtcClkSrc/5 (addr)Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14 (Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency) @06fe67e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: Clock_Ip_u32EnableClock/0 (read)
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_FIRC_CLK_Frequency/13 (Clock_Ip_Get_FIRC_CLK_Frequency) @06fe6620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTable/6 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (1073741824 (estimated locally),1.00 per call) 
Clock_Ip_Get_Zero_Frequency/12 (Clock_Ip_Get_Zero_Frequency) @06fe6460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  Address is taken.
  References: 
  Referring: Clock_Ip_apfFreqTable/6 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfFreqTableClkSrc/4 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)Clock_Ip_apfTableProducerClkSrc/3 (addr)
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Clock_Ip_u32Sxosc/11 (Clock_Ip_u32Sxosc) @06fbc318
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_Get_SXOSC_CLK_Frequency/18 (read)Clock_Ip_SetExternalOscillatorFrequency/135 (write)
  Availability: available
  Varpool flags: initialized
Clock_Ip_u32Fxosc/10 (Clock_Ip_u32Fxosc) @06fbc2d0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_Get_FXOSC_CLK_Frequency/17 (read)Clock_Ip_SetExternalOscillatorFrequency/135 (write)
  Availability: available
  Varpool flags: initialized
Clock_Ip_u32PllFreq/9 (Clock_Ip_u32PllFreq) @06fbc288
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (write)Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (read)
  Availability: available
  Varpool flags: initialized
Clock_Ip_u32PllChecksum/8 (Clock_Ip_u32PllChecksum) @06fbc240
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (read)Clock_Ip_Get_PLL_CLK_Frequency.part.0/140 (write)
  Availability: available
  Varpool flags: initialized
Clock_Ip_axExtSignalFreqEntries/7 (Clock_Ip_axExtSignalFreqEntries) @06fbc1f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25 (read)Clock_Ip_Get_emac_mii_rx_Frequency/24 (read)Clock_Ip_SetExternalSignalFrequency/136 (read)Clock_Ip_SetExternalSignalFrequency/136 (write)
  Availability: available
  Varpool flags: initialized
Clock_Ip_apfFreqTable/6 (Clock_Ip_apfFreqTable) @06fbc1b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_FIRC_CLK_Frequency/13 (addr)Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14 (addr)Clock_Ip_Get_SIRC_CLK_Frequency/15 (addr)Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency/16 (addr)Clock_Ip_Get_FXOSC_CLK_Frequency/17 (addr)Clock_Ip_Get_SXOSC_CLK_Frequency/18 (addr)Clock_Ip_Get_PLL_CLK_Frequency/19 (addr)Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (addr)Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21 (addr)Clock_Ip_Get_PLL_PHI0_Frequency/22 (addr)Clock_Ip_Get_PLL_PHI1_Frequency/23 (addr)Clock_Ip_Get_emac_mii_rx_Frequency/24 (addr)Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25 (addr)Clock_Ip_Get_SCS_CLK_Frequency/26 (addr)Clock_Ip_Get_CORE_CLK_Frequency/27 (addr)Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (addr)Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (addr)Clock_Ip_Get_HSE_CLK_Frequency/30 (addr)Clock_Ip_Get_DCM_CLK_Frequency/31 (addr)Clock_Ip_Get_LBIST_CLK_Frequency/32 (addr)Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33 (addr)Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34 (addr)Clock_Ip_Get_ADC0_CLK_Frequency/35 (addr)Clock_Ip_Get_ADC1_CLK_Frequency/36 (addr)Clock_Ip_Get_BCTU0_CLK_Frequency/37 (addr)Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111 (addr)Clock_Ip_Get_CMP0_CLK_Frequency/79 (addr)Clock_Ip_Get_CMP1_CLK_Frequency/80 (addr)Clock_Ip_Get_CRC0_CLK_Frequency/101 (addr)Clock_Ip_Get_DCM_CLK_Frequency/31 (addr)Clock_Ip_Get_DMAMUX0_CLK_Frequency/38 (addr)Clock_Ip_Get_DMAMUX1_CLK_Frequency/39 (addr)Clock_Ip_Get_EDMA0_CLK_Frequency/40 (addr)Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41 (addr)Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42 (addr)Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43 (addr)Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44 (addr)Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45 (addr)Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46 (addr)Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47 (addr)Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48 (addr)Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49 (addr)Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50 (addr)Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51 (addr)Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52 (addr)Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53 (addr)Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54 (addr)Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55 (addr)Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56 (addr)Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57 (addr)Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58 (addr)Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59 (addr)Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60 (addr)Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61 (addr)Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62 (addr)Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63 (addr)Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64 (addr)Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65 (addr)Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66 (addr)Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67 (addr)Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68 (addr)Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69 (addr)Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70 (addr)Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71 (addr)Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72 (addr)Clock_Ip_Get_EIM_CLK_Frequency/81 (addr)Clock_Ip_Get_EMAC_RX_CLK_Frequency/112 (addr)Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113 (addr)Clock_Ip_Get_EMAC_TS_CLK_Frequency/114 (addr)Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115 (addr)Clock_Ip_Get_EMAC_TX_CLK_Frequency/116 (addr)Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117 (addr)Clock_Ip_Get_EMIOS0_CLK_Frequency/73 (addr)Clock_Ip_Get_EMIOS1_CLK_Frequency/74 (addr)Clock_Ip_Get_ERM0_CLK_Frequency/82 (addr)Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (addr)Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (addr)Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119 (addr)Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120 (addr)Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121 (addr)Clock_Ip_Get_FLEXCANB_CLK_Frequency/122 (addr)Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123 (addr)Clock_Ip_Get_FLEXIO0_CLK_Frequency/102 (addr)Clock_Ip_Get_I3C0_CLK_Frequency/103 (addr)Clock_Ip_Get_INTM_CLK_Frequency/104 (addr)Clock_Ip_Get_LCU0_CLK_Frequency/75 (addr)Clock_Ip_Get_LCU1_CLK_Frequency/76 (addr)Clock_Ip_Get_LPI2C0_CLK_Frequency/83 (addr)Clock_Ip_Get_LPI2C1_CLK_Frequency/84 (addr)Clock_Ip_Get_LPSPI0_CLK_Frequency/85 (addr)Clock_Ip_Get_LPSPI1_CLK_Frequency/86 (addr)Clock_Ip_Get_LPSPI2_CLK_Frequency/87 (addr)Clock_Ip_Get_LPSPI3_CLK_Frequency/88 (addr)Clock_Ip_Get_LPUART0_CLK_Frequency/89 (addr)Clock_Ip_Get_LPUART1_CLK_Frequency/90 (addr)Clock_Ip_Get_LPUART2_CLK_Frequency/91 (addr)Clock_Ip_Get_LPUART3_CLK_Frequency/92 (addr)Clock_Ip_Get_MSCM_CLK_Frequency/105 (addr)Clock_Ip_Get_PIT0_CLK_Frequency/93 (addr)Clock_Ip_Get_PIT1_CLK_Frequency/94 (addr)Clock_Ip_Get_PIT2_CLK_Frequency/95 (addr)Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107 (addr)Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124 (addr)Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125 (addr)Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108 (addr)Clock_Ip_Get_RTC_CLK_Frequency/127 (addr)Clock_Ip_Get_RTC0_CLK_Frequency/128 (addr)Clock_Ip_Get_SAI0_CLK_Frequency/96 (addr)Clock_Ip_Get_SAI1_CLK_Frequency/97 (addr)Clock_Ip_Get_SEMA42_CLK_Frequency/106 (addr)Clock_Ip_Get_SIUL0_CLK_Frequency/109 (addr)Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (addr)Clock_Ip_Get_STMA_CLK_Frequency/129 (addr)Clock_Ip_Get_STM0_CLK_Frequency/130 (addr)Clock_Ip_Get_STMB_CLK_Frequency/131 (addr)Clock_Ip_Get_STM1_CLK_Frequency/132 (addr)Clock_Ip_Get_SWT0_CLK_Frequency/110 (addr)Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77 (addr)Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78 (addr)Clock_Ip_Get_TRACE_CLK_Frequency/133 (addr)Clock_Ip_Get_TRGMUX0_CLK_Frequency/98 (addr)Clock_Ip_Get_TSENSE0_CLK_Frequency/99 (addr)Clock_Ip_Get_WKPU0_CLK_Frequency/100 (addr)
  Referring: Clock_Ip_GetFreq/137 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_apfFreqTableRtcClkSrc/5 (Clock_Ip_apfFreqTableRtcClkSrc) @06fbc120
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_Get_SXOSC_CLK_Frequency/18 (addr)Clock_Ip_Get_SIRC_CLK_Frequency/15 (addr)Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (addr)Clock_Ip_Get_FXOSC_CLK_Frequency/17 (addr)
  Referring: Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0/141 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_apfFreqTableClkSrc/4 (Clock_Ip_apfFreqTableClkSrc) @06fbc0d8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (addr)Clock_Ip_Get_SIRC_CLK_Frequency/15 (addr)Clock_Ip_Get_FXOSC_CLK_Frequency/17 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_SXOSC_CLK_Frequency/18 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_PLL_PHI0_Frequency/22 (addr)Clock_Ip_Get_PLL_PHI1_Frequency/23 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_CORE_CLK_Frequency/27 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_HSE_CLK_Frequency/30 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (addr)Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (addr)Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25 (addr)Clock_Ip_Get_emac_mii_rx_Frequency/24 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)
  Referring: Clock_Ip_Get_STMA_CLK_Frequency/129 (read)Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124 (read)Clock_Ip_Get_FLEXCANB_CLK_Frequency/122 (read)Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (read)Clock_Ip_Get_EMAC_TX_CLK_Frequency/116 (read)Clock_Ip_Get_EMAC_TS_CLK_Frequency/114 (read)Clock_Ip_Get_EMAC_RX_CLK_Frequency/112 (read)Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111 (read)Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34 (read)Clock_Ip_Get_STMB_CLK_Frequency/131 (read)Clock_Ip_Get_TRACE_CLK_Frequency/133 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_apfTableProducerClkSrc/3 (Clock_Ip_apfTableProducerClkSrc) @06fbc048
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_Zero_Frequency/12 (addr)Clock_Ip_Get_PLL_PHI0_Frequency/22 (addr)
  Referring: Clock_Ip_Get_DCM_CLK_Frequency/31 (read)Clock_Ip_Get_HSE_CLK_Frequency/30 (read)Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (read)Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (read)Clock_Ip_Get_CORE_CLK_Frequency/27 (read)Clock_Ip_Get_SCS_CLK_Frequency/26 (read)Clock_Ip_Get_LBIST_CLK_Frequency/32 (read)Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Clock_Ip_u32EnableGate/2 (Clock_Ip_u32EnableGate) @06efcf78
  Type: variable definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Clock_Ip_u32EnableClock/0 (alias)
  Referring: Clock_Ip_Get_STM0_CLK_Frequency/130 (read)Clock_Ip_Get_TRGMUX0_CLK_Frequency/98 (read)Clock_Ip_Get_SAI1_CLK_Frequency/97 (read)Clock_Ip_Get_SAI0_CLK_Frequency/96 (read)Clock_Ip_Get_LCU1_CLK_Frequency/76 (read)Clock_Ip_Get_LCU0_CLK_Frequency/75 (read)Clock_Ip_Get_RTC0_CLK_Frequency/128 (read)Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125 (read)Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123 (read)Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107 (read)Clock_Ip_Get_INTM_CLK_Frequency/104 (read)Clock_Ip_Get_PIT2_CLK_Frequency/95 (read)Clock_Ip_Get_PIT1_CLK_Frequency/94 (read)Clock_Ip_Get_STM1_CLK_Frequency/132 (read)Clock_Ip_Get_SEMA42_CLK_Frequency/106 (read)Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121 (read)Clock_Ip_Get_MSCM_CLK_Frequency/105 (read)Clock_Ip_Get_PIT0_CLK_Frequency/93 (read)Clock_Ip_Get_LPUART3_CLK_Frequency/92 (read)Clock_Ip_Get_LPUART2_CLK_Frequency/91 (read)Clock_Ip_Get_I3C0_CLK_Frequency/103 (read)Clock_Ip_Get_LPUART1_CLK_Frequency/90 (read)Clock_Ip_Get_LPUART0_CLK_Frequency/89 (read)Clock_Ip_Get_LPSPI3_CLK_Frequency/88 (read)Clock_Ip_Get_LPSPI2_CLK_Frequency/87 (read)Clock_Ip_Get_LPSPI1_CLK_Frequency/86 (read)Clock_Ip_Get_LPSPI0_CLK_Frequency/85 (read)Clock_Ip_Get_LPI2C1_CLK_Frequency/84 (read)Clock_Ip_Get_LPI2C0_CLK_Frequency/83 (read)Clock_Ip_Get_ERM0_CLK_Frequency/82 (read)Clock_Ip_Get_EIM_CLK_Frequency/81 (read)Clock_Ip_Get_EMIOS1_CLK_Frequency/74 (read)Clock_Ip_Get_EMIOS0_CLK_Frequency/73 (read)Clock_Ip_Get_FLEXIO0_CLK_Frequency/102 (read)Clock_Ip_Get_CRC0_CLK_Frequency/101 (read)Clock_Ip_Get_WKPU0_CLK_Frequency/100 (read)Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120 (read)Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119 (read)Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117 (read)Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115 (read)Clock_Ip_Get_CMP1_CLK_Frequency/80 (read)Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72 (read)Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71 (read)Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113 (read)Clock_Ip_Get_SWT0_CLK_Frequency/110 (read)Clock_Ip_Get_SIUL0_CLK_Frequency/109 (read)Clock_Ip_Get_CMP0_CLK_Frequency/79 (read)Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70 (read)Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69 (read)Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68 (read)Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67 (read)Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66 (read)Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65 (read)Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64 (read)Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63 (read)Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62 (read)Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61 (read)Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60 (read)Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59 (read)Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58 (read)Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57 (read)Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56 (read)Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55 (read)Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54 (read)Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53 (read)Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52 (read)Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51 (read)Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50 (read)Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49 (read)Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48 (read)Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47 (read)Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46 (read)Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45 (read)Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44 (read)Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43 (read)Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42 (read)Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41 (read)Clock_Ip_Get_EDMA0_CLK_Frequency/40 (read)Clock_Ip_Get_DMAMUX1_CLK_Frequency/39 (read)Clock_Ip_Get_DMAMUX0_CLK_Frequency/38 (read)Clock_Ip_Get_BCTU0_CLK_Frequency/37 (read)Clock_Ip_Get_ADC1_CLK_Frequency/36 (read)Clock_Ip_Get_TSENSE0_CLK_Frequency/99 (read)Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78 (read)Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77 (read)Clock_Ip_Get_ADC0_CLK_Frequency/35 (read)Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126 (read)
  Availability: available
  Varpool flags: read-only const-value-known
Clock_Ip_u32EnableDivider/1 (Clock_Ip_u32EnableDivider) @06efcf30
  Type: variable definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Clock_Ip_u32EnableClock/0 (alias)
  Referring: Clock_Ip_Get_STMA_CLK_Frequency/129 (read)Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124 (read)Clock_Ip_Get_FLEXCANB_CLK_Frequency/122 (read)Clock_Ip_Get_FLEXCANA_CLK_Frequency/118 (read)Clock_Ip_Get_EMAC_TX_CLK_Frequency/116 (read)Clock_Ip_Get_EMAC_TS_CLK_Frequency/114 (read)Clock_Ip_Get_EMAC_RX_CLK_Frequency/112 (read)Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111 (read)Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34 (read)Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33 (read)Clock_Ip_Get_LBIST_CLK_Frequency/32 (read)Clock_Ip_Get_DCM_CLK_Frequency/31 (read)Clock_Ip_Get_HSE_CLK_Frequency/30 (read)Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29 (read)Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28 (read)Clock_Ip_Get_CORE_CLK_Frequency/27 (read)Clock_Ip_Get_PLL_PHI1_Frequency/23 (read)Clock_Ip_Get_TRACE_CLK_Frequency/133 (read)Clock_Ip_Get_STMB_CLK_Frequency/131 (read)Clock_Ip_Get_PLL_PHI0_Frequency/22 (read)
  Availability: available
  Varpool flags: read-only const-value-known
Clock_Ip_u32EnableClock/0 (Clock_Ip_u32EnableClock) @06efcee8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Clock_Ip_u32EnableGate/2 (alias)Clock_Ip_u32EnableDivider/1 (alias)Clock_Ip_Get_SXOSC_CLK_Frequency/18 (read)Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency/16 (read)Clock_Ip_Get_FXOSC_CLK_Frequency/17 (read)Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14 (read)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Clock_Ip_Get_Zero_Frequency (Clock_Ip_Get_Zero_Frequency, funcdef_no=0, decl_uid=8838, cgraph_uid=1, symbol_order=12)

Modification phase of node Clock_Ip_Get_Zero_Frequency/12
Clock_Ip_Get_Zero_Frequency ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Clock_Ip_Get_SIRC_CLK_Frequency (Clock_Ip_Get_SIRC_CLK_Frequency, funcdef_no=3, decl_uid=8844, cgraph_uid=4, symbol_order=15)

Modification phase of node Clock_Ip_Get_SIRC_CLK_Frequency/15
Clock_Ip_Get_SIRC_CLK_Frequency ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return 32000;

}



;; Function Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency (Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency, funcdef_no=4, decl_uid=8846, cgraph_uid=5, symbol_order=16)

Modification phase of node Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency/16
Clock_Ip_Get_SIRC_STANDBY_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG Frequency => 32000
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct SIRC_Type *)1076658176B].MISCELLANEOUS_IN;
  _2 = _1 >> 8;
  _3 = _2 & 1;
  _5 = Clock_Ip_u32EnableClock[_3];
  Frequency_6 = _5 & 32000;
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  return Frequency_6;

}



;; Function Clock_Ip_Get_FXOSC_CLK_Frequency (Clock_Ip_Get_FXOSC_CLK_Frequency, funcdef_no=5, decl_uid=8848, cgraph_uid=6, symbol_order=17)

Modification phase of node Clock_Ip_Get_FXOSC_CLK_Frequency/17
Clock_Ip_Get_FXOSC_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_7 = Clock_Ip_u32Fxosc;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 & 2097152;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct FXOSC_Type *)1076707328B].CTRL;
  _4 = _3 & 1;
  _8 = Clock_Ip_u32EnableClock[_4];
  Frequency_9 = Frequency_7 & _8;
  # DEBUG Frequency => Frequency_9

  <bb 4> [local count: 1073741824]:
  # Frequency_5 = PHI <Frequency_9(3), 0(2)>
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  return Frequency_5;

}



;; Function Clock_Ip_Get_SXOSC_CLK_Frequency (Clock_Ip_Get_SXOSC_CLK_Frequency, funcdef_no=6, decl_uid=8850, cgraph_uid=7, symbol_order=18)

Modification phase of node Clock_Ip_Get_SXOSC_CLK_Frequency/18
Clock_Ip_Get_SXOSC_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_7 = Clock_Ip_u32Sxosc;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 & 524288;
  if (_2 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct SXOSC_Type *)1076674560B].SXOSC_CTRL;
  _4 = _3 & 1;
  _8 = Clock_Ip_u32EnableClock[_4];
  Frequency_9 = Frequency_7 & _8;
  # DEBUG Frequency => Frequency_9

  <bb 4> [local count: 1073741824]:
  # Frequency_5 = PHI <Frequency_9(3), 0(2)>
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  return Frequency_5;

}



;; Function Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency (Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency, funcdef_no=8, decl_uid=8854, cgraph_uid=9, symbol_order=20)

Modification phase of node Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency/20
Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency ()
{
  static const uint32 Clock_Ip_apfTableDividerValue[4] = {2, 2, 16, 1};
  uint32 DividerValue;
  uint32 Divider;
  long unsigned int _1;
  long unsigned int iftmp.0_2;
  long unsigned int iftmp.0_6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Frequency => 48000000
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct CONFIGURATION_GPR_Type *)1077526528B].CONFIG_REG_GPR;
  Divider_4 = _1 & 3;
  # DEBUG Divider => Divider_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  DividerValue_5 = Clock_Ip_apfTableDividerValue[Divider_4];
  # DEBUG DividerValue => DividerValue_5
  # DEBUG BEGIN_STMT
  if (DividerValue_5 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  iftmp.0_6 = 48000000 / DividerValue_5;

  <bb 4> [local count: 1073741824]:
  # iftmp.0_2 = PHI <iftmp.0_6(3), 0(2)>
  # DEBUG Frequency => iftmp.0_2
  # DEBUG BEGIN_STMT
  return iftmp.0_2;

}



;; Function Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency (Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency, funcdef_no=2, decl_uid=8842, cgraph_uid=3, symbol_order=14)

Modification phase of node Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency/14
Clock_Ip_Get_FIRC_STANDBY_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct FIRC_Type *)1076690944B].STDBY_ENABLE;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableClock[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_FIRC_CLK_Frequency (Clock_Ip_Get_FIRC_CLK_Frequency, funcdef_no=1, decl_uid=8840, cgraph_uid=2, symbol_order=13)

Modification phase of node Clock_Ip_Get_FIRC_CLK_Frequency/13
Clock_Ip_Get_FIRC_CLK_Frequency ()
{
  uint32 _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _3 = Clock_Ip_Get_FIRC_POSTDIV_CLK_Frequency ();
  return _3;

}



;; Function Clock_Ip_Get_emac_mii_rx_Frequency (Clock_Ip_Get_emac_mii_rx_Frequency, funcdef_no=12, decl_uid=8862, cgraph_uid=13, symbol_order=24)

Modification phase of node Clock_Ip_Get_emac_mii_rx_Frequency/24
Clock_Ip_Get_emac_mii_rx_Frequency ()
{
  uint32 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_axExtSignalFreqEntries[0].Frequency;
  return _2;

}



;; Function Clock_Ip_Get_emac_mii_rmii_tx_Frequency (Clock_Ip_Get_emac_mii_rmii_tx_Frequency, funcdef_no=13, decl_uid=8864, cgraph_uid=14, symbol_order=25)

Modification phase of node Clock_Ip_Get_emac_mii_rmii_tx_Frequency/25
Clock_Ip_Get_emac_mii_rmii_tx_Frequency ()
{
  uint32 _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _2 = Clock_Ip_axExtSignalFreqEntries[1].Frequency;
  return _2;

}



;; Function Clock_Ip_Get_SCS_CLK_Frequency (Clock_Ip_Get_SCS_CLK_Frequency, funcdef_no=14, decl_uid=8866, cgraph_uid=15, symbol_order=26)

Modification phase of node Clock_Ip_Get_SCS_CLK_Frequency/26
Clock_Ip_Get_SCS_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_7 = _4 ();
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_CORE_CLK_Frequency (Clock_Ip_Get_CORE_CLK_Frequency, funcdef_no=15, decl_uid=8868, cgraph_uid=16, symbol_order=27)

Modification phase of node Clock_Ip_Get_CORE_CLK_Frequency/27
Clock_Ip_Get_CORE_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_AIPS_PLAT_CLK_Frequency (Clock_Ip_Get_AIPS_PLAT_CLK_Frequency, funcdef_no=16, decl_uid=8870, cgraph_uid=17, symbol_order=28)

Modification phase of node Clock_Ip_Get_AIPS_PLAT_CLK_Frequency/28
Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_1;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_1;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_AIPS_SLOW_CLK_Frequency (Clock_Ip_Get_AIPS_SLOW_CLK_Frequency, funcdef_no=17, decl_uid=8872, cgraph_uid=18, symbol_order=29)

Modification phase of node Clock_Ip_Get_AIPS_SLOW_CLK_Frequency/29
Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_2;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_2;
  _8 = _7 >> 16;
  _9 = _8 & 15;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_HSE_CLK_Frequency (Clock_Ip_Get_HSE_CLK_Frequency, funcdef_no=18, decl_uid=8874, cgraph_uid=19, symbol_order=30)

Modification phase of node Clock_Ip_Get_HSE_CLK_Frequency/30
Clock_Ip_Get_HSE_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_3;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_3;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_DCM_CLK_Frequency (Clock_Ip_Get_DCM_CLK_Frequency, funcdef_no=19, decl_uid=8876, cgraph_uid=20, symbol_order=31)

Modification phase of node Clock_Ip_Get_DCM_CLK_Frequency/31
Clock_Ip_Get_DCM_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_4;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_4;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_LBIST_CLK_Frequency (Clock_Ip_Get_LBIST_CLK_Frequency, funcdef_no=20, decl_uid=8878, cgraph_uid=21, symbol_order=32)

Modification phase of node Clock_Ip_Get_LBIST_CLK_Frequency/32
Clock_Ip_Get_LBIST_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_5;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_5;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_QSPI_MEM_CLK_Frequency (Clock_Ip_Get_QSPI_MEM_CLK_Frequency, funcdef_no=21, decl_uid=8880, cgraph_uid=22, symbol_order=33)

Modification phase of node Clock_Ip_Get_QSPI_MEM_CLK_Frequency/33
Clock_Ip_Get_QSPI_MEM_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfTableProducerClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_6;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_0_DC_6;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency (Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency, funcdef_no=22, decl_uid=8882, cgraph_uid=23, symbol_order=34)

Modification phase of node Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency/34
Clock_Ip_Get_CLKOUT_RUN_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_6_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 63;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_6_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_6_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 63;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_ADC0_CLK_Frequency (Clock_Ip_Get_ADC0_CLK_Frequency, funcdef_no=23, decl_uid=8884, cgraph_uid=24, symbol_order=35)

Modification phase of node Clock_Ip_Get_ADC0_CLK_Frequency/35
Clock_Ip_Get_ADC0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 8;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_ADC1_CLK_Frequency (Clock_Ip_Get_ADC1_CLK_Frequency, funcdef_no=24, decl_uid=8886, cgraph_uid=25, symbol_order=36)

Modification phase of node Clock_Ip_Get_ADC1_CLK_Frequency/36
Clock_Ip_Get_ADC1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 9;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_BCTU0_CLK_Frequency (Clock_Ip_Get_BCTU0_CLK_Frequency, funcdef_no=25, decl_uid=8888, cgraph_uid=26, symbol_order=37)

Modification phase of node Clock_Ip_Get_BCTU0_CLK_Frequency/37
Clock_Ip_Get_BCTU0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 1;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_DMAMUX0_CLK_Frequency (Clock_Ip_Get_DMAMUX0_CLK_Frequency, funcdef_no=26, decl_uid=8900, cgraph_uid=27, symbol_order=38)

Modification phase of node Clock_Ip_Get_DMAMUX0_CLK_Frequency/38
Clock_Ip_Get_DMAMUX0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_DMAMUX1_CLK_Frequency (Clock_Ip_Get_DMAMUX1_CLK_Frequency, funcdef_no=27, decl_uid=8902, cgraph_uid=28, symbol_order=39)

Modification phase of node Clock_Ip_Get_DMAMUX1_CLK_Frequency/39
Clock_Ip_Get_DMAMUX1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 >> 1;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_CLK_Frequency (Clock_Ip_Get_EDMA0_CLK_Frequency, funcdef_no=28, decl_uid=8904, cgraph_uid=29, symbol_order=40)

Modification phase of node Clock_Ip_Get_EDMA0_CLK_Frequency/40
Clock_Ip_Get_EDMA0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 3;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency, funcdef_no=29, decl_uid=8906, cgraph_uid=30, symbol_order=41)

Modification phase of node Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency/41
Clock_Ip_Get_EDMA0_TCD0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 4;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency, funcdef_no=30, decl_uid=8908, cgraph_uid=31, symbol_order=42)

Modification phase of node Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency/42
Clock_Ip_Get_EDMA0_TCD1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 5;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency, funcdef_no=31, decl_uid=8910, cgraph_uid=32, symbol_order=43)

Modification phase of node Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency/43
Clock_Ip_Get_EDMA0_TCD2_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 6;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency, funcdef_no=32, decl_uid=8912, cgraph_uid=33, symbol_order=44)

Modification phase of node Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency/44
Clock_Ip_Get_EDMA0_TCD3_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 7;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency, funcdef_no=33, decl_uid=8914, cgraph_uid=34, symbol_order=45)

Modification phase of node Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency/45
Clock_Ip_Get_EDMA0_TCD4_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 8;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency, funcdef_no=34, decl_uid=8916, cgraph_uid=35, symbol_order=46)

Modification phase of node Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency/46
Clock_Ip_Get_EDMA0_TCD5_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 9;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency, funcdef_no=35, decl_uid=8918, cgraph_uid=36, symbol_order=47)

Modification phase of node Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency/47
Clock_Ip_Get_EDMA0_TCD6_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 10;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency, funcdef_no=36, decl_uid=8920, cgraph_uid=37, symbol_order=48)

Modification phase of node Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency/48
Clock_Ip_Get_EDMA0_TCD7_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 11;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency, funcdef_no=37, decl_uid=8922, cgraph_uid=38, symbol_order=49)

Modification phase of node Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency/49
Clock_Ip_Get_EDMA0_TCD8_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 12;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency, funcdef_no=38, decl_uid=8924, cgraph_uid=39, symbol_order=50)

Modification phase of node Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency/50
Clock_Ip_Get_EDMA0_TCD9_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 13;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency, funcdef_no=39, decl_uid=8926, cgraph_uid=40, symbol_order=51)

Modification phase of node Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency/51
Clock_Ip_Get_EDMA0_TCD10_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 14;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency, funcdef_no=40, decl_uid=8928, cgraph_uid=41, symbol_order=52)

Modification phase of node Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency/52
Clock_Ip_Get_EDMA0_TCD11_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 15;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency, funcdef_no=41, decl_uid=8930, cgraph_uid=42, symbol_order=53)

Modification phase of node Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency/53
Clock_Ip_Get_EDMA0_TCD12_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 4;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency, funcdef_no=42, decl_uid=8932, cgraph_uid=43, symbol_order=54)

Modification phase of node Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency/54
Clock_Ip_Get_EDMA0_TCD13_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 5;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency, funcdef_no=43, decl_uid=8934, cgraph_uid=44, symbol_order=55)

Modification phase of node Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency/55
Clock_Ip_Get_EDMA0_TCD14_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 6;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency, funcdef_no=44, decl_uid=8936, cgraph_uid=45, symbol_order=56)

Modification phase of node Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency/56
Clock_Ip_Get_EDMA0_TCD15_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 7;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency, funcdef_no=45, decl_uid=8938, cgraph_uid=46, symbol_order=57)

Modification phase of node Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency/57
Clock_Ip_Get_EDMA0_TCD16_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 8;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency, funcdef_no=46, decl_uid=8940, cgraph_uid=47, symbol_order=58)

Modification phase of node Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency/58
Clock_Ip_Get_EDMA0_TCD17_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 9;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency, funcdef_no=47, decl_uid=8942, cgraph_uid=48, symbol_order=59)

Modification phase of node Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency/59
Clock_Ip_Get_EDMA0_TCD18_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 10;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency, funcdef_no=48, decl_uid=8944, cgraph_uid=49, symbol_order=60)

Modification phase of node Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency/60
Clock_Ip_Get_EDMA0_TCD19_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 11;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency, funcdef_no=49, decl_uid=8946, cgraph_uid=50, symbol_order=61)

Modification phase of node Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency/61
Clock_Ip_Get_EDMA0_TCD20_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 12;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency, funcdef_no=50, decl_uid=8948, cgraph_uid=51, symbol_order=62)

Modification phase of node Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency/62
Clock_Ip_Get_EDMA0_TCD21_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 13;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency, funcdef_no=51, decl_uid=8950, cgraph_uid=52, symbol_order=63)

Modification phase of node Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency/63
Clock_Ip_Get_EDMA0_TCD22_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 14;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency, funcdef_no=52, decl_uid=8952, cgraph_uid=53, symbol_order=64)

Modification phase of node Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency/64
Clock_Ip_Get_EDMA0_TCD23_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 15;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency, funcdef_no=53, decl_uid=8954, cgraph_uid=54, symbol_order=65)

Modification phase of node Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency/65
Clock_Ip_Get_EDMA0_TCD24_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 16;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency, funcdef_no=54, decl_uid=8956, cgraph_uid=55, symbol_order=66)

Modification phase of node Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency/66
Clock_Ip_Get_EDMA0_TCD25_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 17;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency, funcdef_no=55, decl_uid=8958, cgraph_uid=56, symbol_order=67)

Modification phase of node Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency/67
Clock_Ip_Get_EDMA0_TCD26_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 18;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency, funcdef_no=56, decl_uid=8960, cgraph_uid=57, symbol_order=68)

Modification phase of node Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency/68
Clock_Ip_Get_EDMA0_TCD27_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 19;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency, funcdef_no=57, decl_uid=8962, cgraph_uid=58, symbol_order=69)

Modification phase of node Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency/69
Clock_Ip_Get_EDMA0_TCD28_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 20;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency, funcdef_no=58, decl_uid=8964, cgraph_uid=59, symbol_order=70)

Modification phase of node Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency/70
Clock_Ip_Get_EDMA0_TCD29_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 21;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency, funcdef_no=59, decl_uid=8966, cgraph_uid=60, symbol_order=71)

Modification phase of node Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency/71
Clock_Ip_Get_EDMA0_TCD30_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 22;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency (Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency, funcdef_no=60, decl_uid=8968, cgraph_uid=61, symbol_order=72)

Modification phase of node Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency/72
Clock_Ip_Get_EDMA0_TCD31_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 23;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EMIOS0_CLK_Frequency (Clock_Ip_Get_EMIOS0_CLK_Frequency, funcdef_no=61, decl_uid=8984, cgraph_uid=62, symbol_order=73)

Modification phase of node Clock_Ip_Get_EMIOS0_CLK_Frequency/73
Clock_Ip_Get_EMIOS0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 2;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EMIOS1_CLK_Frequency (Clock_Ip_Get_EMIOS1_CLK_Frequency, funcdef_no=62, decl_uid=8986, cgraph_uid=63, symbol_order=74)

Modification phase of node Clock_Ip_Get_EMIOS1_CLK_Frequency/74
Clock_Ip_Get_EMIOS1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 3;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LCU0_CLK_Frequency (Clock_Ip_Get_LCU0_CLK_Frequency, funcdef_no=63, decl_uid=9008, cgraph_uid=64, symbol_order=75)

Modification phase of node Clock_Ip_Get_LCU0_CLK_Frequency/75
Clock_Ip_Get_LCU0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 6;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LCU1_CLK_Frequency (Clock_Ip_Get_LCU1_CLK_Frequency, funcdef_no=64, decl_uid=9010, cgraph_uid=65, symbol_order=76)

Modification phase of node Clock_Ip_Get_LCU1_CLK_Frequency/76
Clock_Ip_Get_LCU1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 7;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_TCM_CM7_0_CLK_Frequency (Clock_Ip_Get_TCM_CM7_0_CLK_Frequency, funcdef_no=65, decl_uid=9072, cgraph_uid=66, symbol_order=77)

Modification phase of node Clock_Ip_Get_TCM_CM7_0_CLK_Frequency/77
Clock_Ip_Get_TCM_CM7_0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 >> 30;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_TEMPSENSE_CLK_Frequency (Clock_Ip_Get_TEMPSENSE_CLK_Frequency, funcdef_no=66, decl_uid=9074, cgraph_uid=67, symbol_order=78)

Modification phase of node Clock_Ip_Get_TEMPSENSE_CLK_Frequency/78
Clock_Ip_Get_TEMPSENSE_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_CORE_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 31;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_CMP0_CLK_Frequency (Clock_Ip_Get_CMP0_CLK_Frequency, funcdef_no=67, decl_uid=8892, cgraph_uid=68, symbol_order=79)

Modification phase of node Clock_Ip_Get_CMP0_CLK_Frequency/79
Clock_Ip_Get_CMP0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 28;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_CMP1_CLK_Frequency (Clock_Ip_Get_CMP1_CLK_Frequency, funcdef_no=68, decl_uid=8894, cgraph_uid=69, symbol_order=80)

Modification phase of node Clock_Ip_Get_CMP1_CLK_Frequency/80
Clock_Ip_Get_CMP1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 29;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_EIM_CLK_Frequency (Clock_Ip_Get_EIM_CLK_Frequency, funcdef_no=69, decl_uid=8970, cgraph_uid=70, symbol_order=81)

Modification phase of node Clock_Ip_Get_EIM_CLK_Frequency/81
Clock_Ip_Get_EIM_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 22;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_ERM0_CLK_Frequency (Clock_Ip_Get_ERM0_CLK_Frequency, funcdef_no=70, decl_uid=8988, cgraph_uid=71, symbol_order=82)

Modification phase of node Clock_Ip_Get_ERM0_CLK_Frequency/82
Clock_Ip_Get_ERM0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 23;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPI2C0_CLK_Frequency (Clock_Ip_Get_LPI2C0_CLK_Frequency, funcdef_no=71, decl_uid=9012, cgraph_uid=72, symbol_order=83)

Modification phase of node Clock_Ip_Get_LPI2C0_CLK_Frequency/83
Clock_Ip_Get_LPI2C0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 20;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPI2C1_CLK_Frequency (Clock_Ip_Get_LPI2C1_CLK_Frequency, funcdef_no=72, decl_uid=9014, cgraph_uid=73, symbol_order=84)

Modification phase of node Clock_Ip_Get_LPI2C1_CLK_Frequency/84
Clock_Ip_Get_LPI2C1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 21;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPSPI0_CLK_Frequency (Clock_Ip_Get_LPSPI0_CLK_Frequency, funcdef_no=73, decl_uid=9016, cgraph_uid=74, symbol_order=85)

Modification phase of node Clock_Ip_Get_LPSPI0_CLK_Frequency/85
Clock_Ip_Get_LPSPI0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 22;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPSPI1_CLK_Frequency (Clock_Ip_Get_LPSPI1_CLK_Frequency, funcdef_no=74, decl_uid=9018, cgraph_uid=75, symbol_order=86)

Modification phase of node Clock_Ip_Get_LPSPI1_CLK_Frequency/86
Clock_Ip_Get_LPSPI1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 23;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPSPI2_CLK_Frequency (Clock_Ip_Get_LPSPI2_CLK_Frequency, funcdef_no=75, decl_uid=9020, cgraph_uid=76, symbol_order=87)

Modification phase of node Clock_Ip_Get_LPSPI2_CLK_Frequency/87
Clock_Ip_Get_LPSPI2_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 24;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPSPI3_CLK_Frequency (Clock_Ip_Get_LPSPI3_CLK_Frequency, funcdef_no=76, decl_uid=9022, cgraph_uid=77, symbol_order=88)

Modification phase of node Clock_Ip_Get_LPSPI3_CLK_Frequency/88
Clock_Ip_Get_LPSPI3_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 25;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPUART0_CLK_Frequency (Clock_Ip_Get_LPUART0_CLK_Frequency, funcdef_no=77, decl_uid=9024, cgraph_uid=78, symbol_order=89)

Modification phase of node Clock_Ip_Get_LPUART0_CLK_Frequency/89
Clock_Ip_Get_LPUART0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 10;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPUART1_CLK_Frequency (Clock_Ip_Get_LPUART1_CLK_Frequency, funcdef_no=78, decl_uid=9026, cgraph_uid=79, symbol_order=90)

Modification phase of node Clock_Ip_Get_LPUART1_CLK_Frequency/90
Clock_Ip_Get_LPUART1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 11;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPUART2_CLK_Frequency (Clock_Ip_Get_LPUART2_CLK_Frequency, funcdef_no=79, decl_uid=9028, cgraph_uid=80, symbol_order=91)

Modification phase of node Clock_Ip_Get_LPUART2_CLK_Frequency/91
Clock_Ip_Get_LPUART2_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 12;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_LPUART3_CLK_Frequency (Clock_Ip_Get_LPUART3_CLK_Frequency, funcdef_no=80, decl_uid=9030, cgraph_uid=81, symbol_order=92)

Modification phase of node Clock_Ip_Get_LPUART3_CLK_Frequency/92
Clock_Ip_Get_LPUART3_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 13;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_PIT0_CLK_Frequency (Clock_Ip_Get_PIT0_CLK_Frequency, funcdef_no=81, decl_uid=9034, cgraph_uid=82, symbol_order=93)

Modification phase of node Clock_Ip_Get_PIT0_CLK_Frequency/93
Clock_Ip_Get_PIT0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 12;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_PIT1_CLK_Frequency (Clock_Ip_Get_PIT1_CLK_Frequency, funcdef_no=82, decl_uid=9036, cgraph_uid=83, symbol_order=94)

Modification phase of node Clock_Ip_Get_PIT1_CLK_Frequency/94
Clock_Ip_Get_PIT1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 13;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_PIT2_CLK_Frequency (Clock_Ip_Get_PIT2_CLK_Frequency, funcdef_no=83, decl_uid=9038, cgraph_uid=84, symbol_order=95)

Modification phase of node Clock_Ip_Get_PIT2_CLK_Frequency/95
Clock_Ip_Get_PIT2_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 >> 31;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_SAI0_CLK_Frequency (Clock_Ip_Get_SAI0_CLK_Frequency, funcdef_no=84, decl_uid=9052, cgraph_uid=85, symbol_order=96)

Modification phase of node Clock_Ip_Get_SAI0_CLK_Frequency/96
Clock_Ip_Get_SAI0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 27;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_SAI1_CLK_Frequency (Clock_Ip_Get_SAI1_CLK_Frequency, funcdef_no=85, decl_uid=9054, cgraph_uid=86, symbol_order=97)

Modification phase of node Clock_Ip_Get_SAI1_CLK_Frequency/97
Clock_Ip_Get_SAI1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 >> 23;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_TRGMUX0_CLK_Frequency (Clock_Ip_Get_TRGMUX0_CLK_Frequency, funcdef_no=86, decl_uid=9078, cgraph_uid=87, symbol_order=98)

Modification phase of node Clock_Ip_Get_TRGMUX0_CLK_Frequency/98
Clock_Ip_Get_TRGMUX0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_TSENSE0_CLK_Frequency (Clock_Ip_Get_TSENSE0_CLK_Frequency, funcdef_no=87, decl_uid=9080, cgraph_uid=88, symbol_order=99)

Modification phase of node Clock_Ip_Get_TSENSE0_CLK_Frequency/99
Clock_Ip_Get_TSENSE0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 >> 17;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_WKPU0_CLK_Frequency (Clock_Ip_Get_WKPU0_CLK_Frequency, funcdef_no=88, decl_uid=9082, cgraph_uid=89, symbol_order=100)

Modification phase of node Clock_Ip_Get_WKPU0_CLK_Frequency/100
Clock_Ip_Get_WKPU0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 >> 13;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_CRC0_CLK_Frequency (Clock_Ip_Get_CRC0_CLK_Frequency, funcdef_no=89, decl_uid=8896, cgraph_uid=90, symbol_order=101)

Modification phase of node Clock_Ip_Get_CRC0_CLK_Frequency/101
Clock_Ip_Get_CRC0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB3_STAT;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_FLEXIO0_CLK_Frequency (Clock_Ip_Get_FLEXIO0_CLK_Frequency, funcdef_no=90, decl_uid=9002, cgraph_uid=91, symbol_order=102)

Modification phase of node Clock_Ip_Get_FLEXIO0_CLK_Frequency/102
Clock_Ip_Get_FLEXIO0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 9;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_I3C0_CLK_Frequency (Clock_Ip_Get_I3C0_CLK_Frequency, funcdef_no=91, decl_uid=9004, cgraph_uid=92, symbol_order=103)

Modification phase of node Clock_Ip_Get_I3C0_CLK_Frequency/103
Clock_Ip_Get_I3C0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN0_COFB1_STAT;
  _2 = _1 >> 16;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_INTM_CLK_Frequency (Clock_Ip_Get_INTM_CLK_Frequency, funcdef_no=92, decl_uid=9006, cgraph_uid=93, symbol_order=104)

Modification phase of node Clock_Ip_Get_INTM_CLK_Frequency/104
Clock_Ip_Get_INTM_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 31;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_MSCM_CLK_Frequency (Clock_Ip_Get_MSCM_CLK_Frequency, funcdef_no=93, decl_uid=9032, cgraph_uid=94, symbol_order=105)

Modification phase of node Clock_Ip_Get_MSCM_CLK_Frequency/105
Clock_Ip_Get_MSCM_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 24;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_SEMA42_CLK_Frequency (Clock_Ip_Get_SEMA42_CLK_Frequency, funcdef_no=94, decl_uid=9056, cgraph_uid=95, symbol_order=106)

Modification phase of node Clock_Ip_Get_SEMA42_CLK_Frequency/106
Clock_Ip_Get_SEMA42_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 24;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_QSPI0_RAM_CLK_Frequency (Clock_Ip_Get_QSPI0_RAM_CLK_Frequency, funcdef_no=95, decl_uid=9040, cgraph_uid=96, symbol_order=107)

Modification phase of node Clock_Ip_Get_QSPI0_RAM_CLK_Frequency/107
Clock_Ip_Get_QSPI0_RAM_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_PLAT_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 >> 19;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency (Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency, funcdef_no=129, decl_uid=9046, cgraph_uid=97, symbol_order=108)

Modification phase of node Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency/108
Clock_Ip_Get_QSPI0_TX_MEM_CLK_Frequency ()
{
  uint32 retval.130;

  <bb 2> [local count: 1073741824]:
  retval.130_3 = Clock_Ip_Get_QSPI0_RAM_CLK_Frequency (); [tail call]
  return retval.130_3;

}



;; Function Clock_Ip_Get_SIUL0_CLK_Frequency (Clock_Ip_Get_SIUL0_CLK_Frequency, funcdef_no=97, decl_uid=9058, cgraph_uid=98, symbol_order=109)

Modification phase of node Clock_Ip_Get_SIUL0_CLK_Frequency/109
Clock_Ip_Get_SIUL0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 >> 10;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_SWT0_CLK_Frequency (Clock_Ip_Get_SWT0_CLK_Frequency, funcdef_no=98, decl_uid=9070, cgraph_uid=99, symbol_order=110)

Modification phase of node Clock_Ip_Get_SWT0_CLK_Frequency/110
Clock_Ip_Get_SWT0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_AIPS_SLOW_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 28;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency (Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency, funcdef_no=99, decl_uid=8890, cgraph_uid=100, symbol_order=111)

Modification phase of node Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency/111
Clock_Ip_Get_CLKOUT_STANDBY_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_5_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 63;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_5_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_5_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_EMAC_RX_CLK_Frequency (Clock_Ip_Get_EMAC_RX_CLK_Frequency, funcdef_no=100, decl_uid=8972, cgraph_uid=101, symbol_order=112)

Modification phase of node Clock_Ip_Get_EMAC_RX_CLK_Frequency/112
Clock_Ip_Get_EMAC_RX_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_7_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_7_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_7_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 63;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_EMAC0_RX_CLK_Frequency (Clock_Ip_Get_EMAC0_RX_CLK_Frequency, funcdef_no=101, decl_uid=8974, cgraph_uid=102, symbol_order=113)

Modification phase of node Clock_Ip_Get_EMAC0_RX_CLK_Frequency/113
Clock_Ip_Get_EMAC0_RX_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_EMAC_RX_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_EMAC_TS_CLK_Frequency (Clock_Ip_Get_EMAC_TS_CLK_Frequency, funcdef_no=102, decl_uid=8976, cgraph_uid=103, symbol_order=114)

Modification phase of node Clock_Ip_Get_EMAC_TS_CLK_Frequency/114
Clock_Ip_Get_EMAC_TS_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_9_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_9_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_9_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 63;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_EMAC0_TS_CLK_Frequency (Clock_Ip_Get_EMAC0_TS_CLK_Frequency, funcdef_no=103, decl_uid=8978, cgraph_uid=104, symbol_order=115)

Modification phase of node Clock_Ip_Get_EMAC0_TS_CLK_Frequency/115
Clock_Ip_Get_EMAC0_TS_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_EMAC_TS_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_EMAC_TX_CLK_Frequency (Clock_Ip_Get_EMAC_TX_CLK_Frequency, funcdef_no=104, decl_uid=8980, cgraph_uid=105, symbol_order=116)

Modification phase of node Clock_Ip_Get_EMAC_TX_CLK_Frequency/116
Clock_Ip_Get_EMAC_TX_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_8_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_8_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_8_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 63;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_EMAC0_TX_CLK_Frequency (Clock_Ip_Get_EMAC0_TX_CLK_Frequency, funcdef_no=105, decl_uid=8982, cgraph_uid=106, symbol_order=117)

Modification phase of node Clock_Ip_Get_EMAC0_TX_CLK_Frequency/117
Clock_Ip_Get_EMAC0_TX_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_5 = Clock_Ip_Get_EMAC_TX_CLK_Frequency ();
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 & 1;
  _6 = Clock_Ip_u32EnableGate[_2];
  Frequency_7 = Frequency_5 & _6;
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_FLEXCANA_CLK_Frequency (Clock_Ip_Get_FLEXCANA_CLK_Frequency, funcdef_no=106, decl_uid=8990, cgraph_uid=107, symbol_order=118)

Modification phase of node Clock_Ip_Get_FLEXCANA_CLK_Frequency/118
Clock_Ip_Get_FLEXCANA_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_3_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_3_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_3_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 3;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_FLEXCAN0_CLK_Frequency (Clock_Ip_Get_FLEXCAN0_CLK_Frequency, funcdef_no=107, decl_uid=8992, cgraph_uid=108, symbol_order=119)

Modification phase of node Clock_Ip_Get_FLEXCAN0_CLK_Frequency/119
Clock_Ip_Get_FLEXCAN0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_FLEXCANA_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 1;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_FLEXCAN1_CLK_Frequency (Clock_Ip_Get_FLEXCAN1_CLK_Frequency, funcdef_no=108, decl_uid=8994, cgraph_uid=109, symbol_order=120)

Modification phase of node Clock_Ip_Get_FLEXCAN1_CLK_Frequency/120
Clock_Ip_Get_FLEXCAN1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_FLEXCANA_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 2;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_FLEXCAN2_CLK_Frequency (Clock_Ip_Get_FLEXCAN2_CLK_Frequency, funcdef_no=109, decl_uid=8996, cgraph_uid=110, symbol_order=121)

Modification phase of node Clock_Ip_Get_FLEXCAN2_CLK_Frequency/121
Clock_Ip_Get_FLEXCAN2_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_FLEXCANA_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 3;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_FLEXCANB_CLK_Frequency (Clock_Ip_Get_FLEXCANB_CLK_Frequency, funcdef_no=110, decl_uid=8998, cgraph_uid=111, symbol_order=122)

Modification phase of node Clock_Ip_Get_FLEXCANB_CLK_Frequency/122
Clock_Ip_Get_FLEXCANB_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_4_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_4_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_4_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 3;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_FLEXCAN3_CLK_Frequency (Clock_Ip_Get_FLEXCAN3_CLK_Frequency, funcdef_no=111, decl_uid=9000, cgraph_uid=112, symbol_order=123)

Modification phase of node Clock_Ip_Get_FLEXCAN3_CLK_Frequency/123
Clock_Ip_Get_FLEXCAN3_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_FLEXCANB_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB2_STAT;
  _2 = _1 >> 4;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_QSPI_SFCK_CLK_Frequency (Clock_Ip_Get_QSPI_SFCK_CLK_Frequency, funcdef_no=112, decl_uid=9042, cgraph_uid=113, symbol_order=124)

Modification phase of node Clock_Ip_Get_QSPI_SFCK_CLK_Frequency/124
Clock_Ip_Get_QSPI_SFCK_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_10_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_10_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_10_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency (Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency, funcdef_no=113, decl_uid=9044, cgraph_uid=114, symbol_order=125)

Modification phase of node Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency/125
Clock_Ip_Get_QSPI0_SFCK_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_QSPI_SFCK_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB1_STAT;
  _2 = _1 >> 19;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_STMA_CLK_Frequency (Clock_Ip_Get_STMA_CLK_Frequency, funcdef_no=117, decl_uid=9062, cgraph_uid=118, symbol_order=129)

Modification phase of node Clock_Ip_Get_STMA_CLK_Frequency/129
Clock_Ip_Get_STMA_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_1_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_1_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_1_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 1;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_STM0_CLK_Frequency (Clock_Ip_Get_STM0_CLK_Frequency, funcdef_no=118, decl_uid=9064, cgraph_uid=119, symbol_order=130)

Modification phase of node Clock_Ip_Get_STM0_CLK_Frequency/130
Clock_Ip_Get_STM0_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_STMA_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB0_STAT;
  _2 = _1 >> 29;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_STMB_CLK_Frequency (Clock_Ip_Get_STMB_CLK_Frequency, funcdef_no=119, decl_uid=9066, cgraph_uid=120, symbol_order=131)

Modification phase of node Clock_Ip_Get_STMB_CLK_Frequency/131
Clock_Ip_Get_STMB_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_2_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 31;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_2_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_2_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 1;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_STM1_CLK_Frequency (Clock_Ip_Get_STM1_CLK_Frequency, funcdef_no=120, decl_uid=9068, cgraph_uid=121, symbol_order=132)

Modification phase of node Clock_Ip_Get_STM1_CLK_Frequency/132
Clock_Ip_Get_STM1_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _7;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_STMB_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN2_COFB0_STAT;
  _2 = _1 >> 29;
  _3 = _2 & 1;
  _7 = Clock_Ip_u32EnableGate[_3];
  Frequency_8 = Frequency_6 & _7;
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  return Frequency_8;

}



;; Function Clock_Ip_Get_TRACE_CLK_Frequency (Clock_Ip_Get_TRACE_CLK_Frequency, funcdef_no=121, decl_uid=9076, cgraph_uid=122, symbol_order=133)

Modification phase of node Clock_Ip_Get_TRACE_CLK_Frequency/133
Clock_Ip_Get_TRACE_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  uint32 (*<Taec>) (void) _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _13;
  long unsigned int _15;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_11_CSS;
  _2 = _1 >> 24;
  _3 = _2 & 15;
  _4 = Clock_Ip_apfFreqTableClkSrc[_3];
  Frequency_12 = _4 ();
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  _5 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_11_DC_0;
  _6 = _5 >> 31;
  _13 = Clock_Ip_u32EnableDivider[_6];
  Frequency_14 = Frequency_12 & _13;
  # DEBUG Frequency => Frequency_14
  # DEBUG BEGIN_STMT
  _7 ={v} MEM[(struct MC_CGM_Type *)1076723712B].MUX_11_DC_0;
  _8 = _7 >> 16;
  _9 = _8 & 7;
  _15 = _9 + 1;
  Frequency_16 = Frequency_14 / _15;
  # DEBUG Frequency => Frequency_16
  # DEBUG BEGIN_STMT
  return Frequency_16;

}



;; Function Clock_Ip_Get_PLL_CLK_Frequency (Clock_Ip_Get_PLL_CLK_Frequency, funcdef_no=7, decl_uid=8852, cgraph_uid=8, symbol_order=19)

Modification phase of node Clock_Ip_Get_PLL_CLK_Frequency/19
Clock_Ip_Get_PLL_CLK_Frequency ()
{
  uint32 Frequency;
  long unsigned int _2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _3 = _2 & 16777216;
  if (_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870912]:
  Frequency_6 = Clock_Ip_Get_PLL_CLK_Frequency.part.0 ();

  <bb 4> [local count: 1073741824]:
  # Frequency_5 = PHI <Frequency_6(3), 0(2)>
  # DEBUG Frequency => Frequency_5
  # DEBUG BEGIN_STMT
  return Frequency_5;

}



;; Function Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency (Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency, funcdef_no=9, decl_uid=8856, cgraph_uid=10, symbol_order=21)

Modification phase of node Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency/21
Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency ()
{
  uint32 DividerValue;
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int iftmp.1_3;
  long unsigned int iftmp.1_8;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_6 = Clock_Ip_Get_PLL_CLK_Frequency ();
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PLL_Type *)1076756480B].PLLDV;
  _2 = _1 >> 25;
  DividerValue_7 = _2 & 63;
  # DEBUG DividerValue => DividerValue_7
  # DEBUG BEGIN_STMT
  if (DividerValue_7 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  iftmp.1_8 = Frequency_6 / DividerValue_7;

  <bb 4> [local count: 1073741824]:
  # iftmp.1_3 = PHI <iftmp.1_8(3), 0(2)>
  # DEBUG Frequency => iftmp.1_3
  # DEBUG BEGIN_STMT
  return iftmp.1_3;

}



;; Function Clock_Ip_Get_PLL_PHI1_Frequency (Clock_Ip_Get_PLL_PHI1_Frequency, funcdef_no=11, decl_uid=8860, cgraph_uid=12, symbol_order=23)

Modification phase of node Clock_Ip_Get_PLL_PHI1_Frequency/23
Clock_Ip_Get_PLL_PHI1_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _9;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_8 = Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency ();
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PLL_Type *)1076756480B].PLLODIV[1];
  _2 = _1 >> 31;
  _9 = Clock_Ip_u32EnableDivider[_2];
  Frequency_10 = Frequency_8 & _9;
  # DEBUG Frequency => Frequency_10
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct PLL_Type *)1076756480B].PLLODIV[1];
  _4 = _3 >> 16;
  _5 = _4 & 15;
  _11 = _5 + 1;
  Frequency_12 = Frequency_10 / _11;
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  return Frequency_12;

}



;; Function Clock_Ip_Get_PLL_PHI0_Frequency (Clock_Ip_Get_PLL_PHI0_Frequency, funcdef_no=10, decl_uid=8858, cgraph_uid=11, symbol_order=22)

Modification phase of node Clock_Ip_Get_PLL_PHI0_Frequency/22
Clock_Ip_Get_PLL_PHI0_Frequency ()
{
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _9;
  long unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Frequency_8 = Clock_Ip_Get_PLL_POSTDIV_CLK_Frequency ();
  # DEBUG Frequency => Frequency_8
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct PLL_Type *)1076756480B].PLLODIV[0];
  _2 = _1 >> 31;
  _9 = Clock_Ip_u32EnableDivider[_2];
  Frequency_10 = Frequency_8 & _9;
  # DEBUG Frequency => Frequency_10
  # DEBUG BEGIN_STMT
  _3 ={v} MEM[(struct PLL_Type *)1076756480B].PLLODIV[0];
  _4 = _3 >> 16;
  _5 = _4 & 15;
  _11 = _5 + 1;
  Frequency_12 = Frequency_10 / _11;
  # DEBUG Frequency => Frequency_12
  # DEBUG BEGIN_STMT
  return Frequency_12;

}



;; Function Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall (Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall, funcdef_no=114, decl_uid=8836, cgraph_uid=115, symbol_order=126)

Modification phase of node Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall/126
Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall ()
{
  uint32 Frequency;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _3 = _2 >> 2;
  _4 = _3 & 1;
  _5 = Clock_Ip_u32EnableGate[_4];
  if (_5 == 4294967295)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072224]:
  Frequency_1 = Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall.part.0 ();

  <bb 4> [local count: 1073741824]:
  # Frequency_7 = PHI <Frequency_1(3), 0(2)>
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  return Frequency_7;

}



;; Function Clock_Ip_Get_RTC_CLK_Frequency (Clock_Ip_Get_RTC_CLK_Frequency, funcdef_no=115, decl_uid=9048, cgraph_uid=116, symbol_order=127)

Modification phase of node Clock_Ip_Get_RTC_CLK_Frequency/127
Clock_Ip_Get_RTC_CLK_Frequency ()
{
  uint32 Frequency;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Frequency_3 = Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall ();
  # DEBUG Frequency => Frequency_3
  # DEBUG BEGIN_STMT
  return Frequency_3;

}



;; Function Clock_Ip_Get_RTC0_CLK_Frequency (Clock_Ip_Get_RTC0_CLK_Frequency, funcdef_no=116, decl_uid=9050, cgraph_uid=117, symbol_order=128)

Modification phase of node Clock_Ip_Get_RTC0_CLK_Frequency/128
Clock_Ip_Get_RTC0_CLK_Frequency ()
{
  uint32 Frequency;
  uint32 Frequency;
  long unsigned int _1;
  long unsigned int _2;
  long unsigned int _3;
  long unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Clock_Ip_Get_RTC_CLK_Frequency
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Frequency_7 = Clock_Ip_Get_RTC_CLK_Frequency_TrustedCall ();
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  # DEBUG Frequency => NULL
  # DEBUG Frequency => Frequency_7
  # DEBUG BEGIN_STMT
  _1 ={v} MEM[(struct MC_ME_Type *)1076740096B].PRTN1_COFB1_STAT;
  _2 = _1 >> 2;
  _3 = _2 & 1;
  _5 = Clock_Ip_u32EnableGate[_3];
  Frequency_6 = _5 & Frequency_7;
  # DEBUG Frequency => Frequency_6
  # DEBUG BEGIN_STMT
  return Frequency_6;

}



;; Function Clock_Ip_SetExternalOscillatorFrequency (Clock_Ip_SetExternalOscillatorFrequency, funcdef_no=123, decl_uid=8812, cgraph_uid=124, symbol_order=135)

Modification phase of node Clock_Ip_SetExternalOscillatorFrequency/135
Clock_Ip_SetExternalOscillatorFrequency (Clock_Ip_NameType ExtOscName, uint32 Frequency)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  switch (ExtOscName_2(D)) <default: <L4> [33.33%], case 5: <L0> [33.33%], case 6: <L1> [33.33%]>

  <bb 3> [local count: 357878150]:
<L0>:
  # DEBUG BEGIN_STMT
  Clock_Ip_u32Fxosc = Frequency_4(D);
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 357878150]:
<L1>:
  # DEBUG BEGIN_STMT
  Clock_Ip_u32Sxosc = Frequency_4(D);
  # DEBUG BEGIN_STMT

  <bb 5> [local count: 1073634451]:
<L4>:
  return;

}



;; Function Clock_Ip_SetExternalSignalFrequency (Clock_Ip_SetExternalSignalFrequency, funcdef_no=124, decl_uid=8807, cgraph_uid=125, symbol_order=136)

Modification phase of node Clock_Ip_SetExternalSignalFrequency/136
Clock_Ip_SetExternalSignalFrequency (Clock_Ip_NameType SignalName, uint32 Frequency)
{
  uint32 Index;
  <unnamed type> _1;

  <bb 2> [local count: 397250652]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 715863675]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_axExtSignalFreqEntries[Index_2].Name;
  if (_1 == SignalName_6(D))
    goto <bb 4>; [5.50%]
  else
    goto <bb 5>; [94.50%]

  <bb 4> [local count: 39372502]:
  # Index_4 = PHI <Index_2(3)>
  # DEBUG BEGIN_STMT
  Clock_Ip_axExtSignalFreqEntries[Index_4].Frequency = Frequency_8(D);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 676491173]:
  # DEBUG BEGIN_STMT
  Index_7 = Index_2 + 1;
  # DEBUG Index => Index_7

  <bb 6> [local count: 1073741824]:
  # Index_2 = PHI <0(2), Index_7(5)>
  # DEBUG Index => Index_2
  # DEBUG BEGIN_STMT
  if (Index_2 != 2)
    goto <bb 3>; [66.67%]
  else
    goto <bb 7>; [33.33%]

  <bb 7> [local count: 397250652]:
  return;

}



;; Function Clock_Ip_GetFreq (Clock_Ip_GetFreq, funcdef_no=125, decl_uid=8809, cgraph_uid=126, symbol_order=137)

Modification phase of node Clock_Ip_GetFreq/137
Clock_Ip_GetFreq (Clock_Ip_NameType ClockName)
{
  uint32 (*<Taec>) (void) _1;
  uint32 _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = Clock_Ip_apfFreqTable[ClockName_3(D)];
  _5 = _1 ();
  return _5;

}


