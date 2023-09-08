
IPA constant propagation start:
Determining dynamic type for call: Port_Ipw_SetGpioMode (u8MscrSiulInstance_30, u16MscrIdx_29, PinIndex_28(D), pConfigPtr_27(D));
  Starting walk at: Port_Ipw_SetGpioMode (u8MscrSiulInstance_30, u16MscrIdx_29, PinIndex_28(D), pConfigPtr_27(D));
  instance pointer: pConfigPtr_27(D)  Outer instance pointer: pConfigPtr_27(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06 ();
Determining dynamic type for call: Port_Ipw_SetGpioPadOutput (PinIndex_19(D), pConfigPtr_18(D));
  Starting walk at: Port_Ipw_SetGpioPadOutput (PinIndex_19(D), pConfigPtr_18(D));
  instance pointer: pConfigPtr_18(D)  Outer instance pointer: pConfigPtr_18(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (u8MscrSiulInstance_13(D), u16MscrIdx_15(D), 1);
Determining dynamic type for call: Port_Ipw_SetGpioPadOutput (PinIndex_19(D), pConfigPtr_18(D));
  Starting walk at: Port_Ipw_SetGpioPadOutput (PinIndex_19(D), pConfigPtr_18(D));
  instance pointer: pConfigPtr_18(D)  Outer instance pointer: pConfigPtr_18(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (u8MscrSiulInstance_13(D), u16MscrIdx_15(D), 1);
Determining dynamic type for call: Port_Ipw_SetPinDirection (PinIndex_19(D), ePadDirection_20, pConfigPtr_18(D));
  Starting walk at: Port_Ipw_SetPinDirection (PinIndex_19(D), ePadDirection_20, pConfigPtr_18(D));
  instance pointer: pConfigPtr_18(D)  Outer instance pointer: pConfigPtr_18(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Port_Ipw_SetGpioPadOutput (PinIndex_19(D), pConfigPtr_18(D));
  Function call may change dynamic type:Port_Ipw_SetGpioDirChangeability (u8MscrSiulInstance_13(D), u16MscrIdx_15(D), 1);
  Function call may change dynamic type:Port_Ipw_SetGpioPadOutput (PinIndex_19(D), pConfigPtr_18(D));
Determining dynamic type for call: Port_Ipw_Init_UnusedPins (pConfigPtr_20(D));
  Starting walk at: Port_Ipw_Init_UnusedPins (pConfigPtr_20(D));
  instance pointer: pConfigPtr_20(D)  Outer instance pointer: pConfigPtr_20(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:Siul2_Port_Ip_Init (5, _7);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/30:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/29:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/28:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/27:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/22:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/20:
  Jump functions of caller  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/19:
  Jump functions of caller  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/18:
  Jump functions of caller  Det_ASR40_ReportError/17:
  Jump functions of caller  Siul2_Port_Ip_Init/15:
  Jump functions of caller  Port_Ipw_RefreshPortDirection/14:
  Jump functions of caller  Port_Ipw_SetGpioPadOutput/13:
  Jump functions of caller  Port_Ipw_SetGpioDirChangeability/12:
  Jump functions of caller  Port_Ipw_SetPinMode/11:
    callsite  Port_Ipw_SetPinMode/11 -> Port_Ipw_SetGpioDirChangeability/12 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Port_Ipw_SetPinMode/11 -> Port_Ipw_SetAltMode/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/11 -> Port_Ipw_SetOnlyInputMode/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/11 -> Port_Ipw_SetGpioMode/8 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/11 -> Port_Ipw_SetInputMode/7 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Port_Ipw_SetPinMode/11 -> Port_Ipw_SetInoutMode/6 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Port_Ipw_SetAltMode/10:
  Jump functions of caller  Port_Ipw_SetOnlyInputMode/9:
    callsite  Port_Ipw_SetOnlyInputMode/9 -> Port_Ipw_SetGpioDirChangeability/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Port_Ipw_SetGpioMode/8:
    callsite  Port_Ipw_SetGpioMode/8 -> Port_Ipw_SetPinDirection/4 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetGpioMode/8 -> Port_Ipw_SetGpioPadOutput/13 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetGpioMode/8 -> Port_Ipw_SetGpioPadOutput/13 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Port_Ipw_SetGpioMode/8 -> Port_Ipw_SetGpioDirChangeability/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: CONST: 1
         value: 0x1, mask: 0x0
         Unknown VR
  Jump functions of caller  Port_Ipw_SetInputMode/7:
    callsite  Port_Ipw_SetInputMode/7 -> Port_Ipw_SetGpioDirChangeability/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
  Jump functions of caller  Port_Ipw_SetInoutMode/6:
    callsite  Port_Ipw_SetInoutMode/6 -> Port_Ipw_SetGpioDirChangeability/12 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    callsite  Port_Ipw_SetInoutMode/6 -> Port_Ipw_GetIndexForInoutEntry/5 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Port_Ipw_GetIndexForInoutEntry/5:
  Jump functions of caller  Port_Ipw_SetPinDirection/4:
  Jump functions of caller  Port_Ipw_Init/3:
    callsite  Port_Ipw_Init/3 -> Port_Ipw_Init_UnusedPins/2 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Port_Ipw_Init_UnusedPins/2:

 Propagating constants:

Not considering Port_Ipw_RefreshPortDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetGpioPadOutput for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetGpioDirChangeability for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetPinMode for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_SetPinDirection for cloning; -fipa-cp-clone disabled.
Not considering Port_Ipw_Init for cloning; -fipa-cp-clone disabled.

overall_size: 414, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Port_Ipw_RefreshPortDirection/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_SetGpioPadOutput/13:
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
  Node: Port_Ipw_SetGpioDirChangeability/12:
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
  Node: Port_Ipw_SetPinMode/11:
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
  Node: Port_Ipw_SetAltMode/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ipw_SetOnlyInputMode/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ipw_SetGpioMode/8:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ipw_SetInputMode/7:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ipw_SetInoutMode/6:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ipw_GetIndexForInoutEntry/5:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Port_Ipw_SetPinDirection/4:
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
  Node: Port_Ipw_Init/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Port_Ipw_Init_UnusedPins/2:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/30 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07) @0711ab60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/14 (315357973 (estimated locally),2.67 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/29 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07) @0711aa80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_RefreshPortDirection/14 (315357973 (estimated locally),2.67 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/28 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00) @0711a7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioDirChangeability/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/27 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00) @0711a700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetGpioDirChangeability/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Port_apInMuxSettings/26 (Port_apInMuxSettings) @0711f090
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_SetInputMode/7 (read)
  Availability: not_available
  Varpool flags: read-only
Port_apInMuxSettingsIndex/25 (Port_apInMuxSettingsIndex) @0711f048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_SetInputMode/7 (read)
  Availability: not_available
  Varpool flags: read-only
Port_au16NumInoutMuxSettings/24 (Port_au16NumInoutMuxSettings) @070e4ee8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_GetIndexForInoutEntry/5 (read)
  Availability: not_available
  Varpool flags: read-only
Port_apInoutMuxSettings/23 (Port_apInoutMuxSettings) @070e4b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_GetIndexForInoutEntry/5 (read)Port_Ipw_SetInoutMode/6 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/22 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06) @0711a000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/11 (154282513 (estimated locally),0.14 per call) 
  Calls: 
Port_apSiul2InstancePinModeAvailability/21 (Port_apSiul2InstancePinModeAvailability) @070e4828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_SetPinMode/11 (read)
  Availability: not_available
  Varpool flags: read-only
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/20 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06) @070bbee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/11 (154267087 (estimated locally),0.14 per call) 
  Calls: 
SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/19 (SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05) @070bbb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinDirection/4 (289780026 (estimated locally),0.27 per call) 
  Calls: 
SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/18 (SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05) @070bba80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinDirection/4 (289780026 (estimated locally),0.27 per call) 
  Calls: 
Det_ASR40_ReportError/17 (Det_ASR40_ReportError) @070bb9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_SetPinMode/11 (159058607 (estimated locally),0.15 per call) Port_Ipw_SetPinMode/11 (237400906 (estimated locally),0.22 per call) Port_Ipw_SetPinMode/11 (354329711 (estimated locally),0.33 per call) Port_Ipw_SetPinDirection/4 (237404317 (estimated locally),0.22 per call) Port_Ipw_SetPinDirection/4 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Port_au32Siul2BaseAddr/16 (Port_au32Siul2BaseAddr) @070db870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Port_Ipw_SetInoutMode/6 (read)Port_Ipw_SetGpioPadOutput/13 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_Init_UnusedPins/2 (read)Port_Ipw_SetInputMode/7 (read)Port_Ipw_SetInoutMode/6 (read)Port_Ipw_SetAltMode/10 (read)Port_Ipw_SetOnlyInputMode/9 (read)Port_Ipw_SetGpioMode/8 (read)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetInputMode/7 (read)Port_Ipw_RefreshPortDirection/14 (read)
  Availability: not_available
  Varpool flags: read-only
Siul2_Port_Ip_Init/15 (Siul2_Port_Ip_Init) @070bb700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Port_Ipw_Init/3 (97603132 (estimated locally),1.00 per call) 
  Calls: 
Port_Ipw_RefreshPortDirection/14 (Port_Ipw_RefreshPortDirection) @070bb540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: available
  Function flags: count:118111602 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07/30 (315357973 (estimated locally),2.67 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07/29 (315357973 (estimated locally),2.67 per call) 
Port_Ipw_SetGpioPadOutput/13 (Port_Ipw_SetGpioPadOutput) @070bb380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetGpioMode/8 (86669348 (estimated locally),0.08 per call) Port_Ipw_SetGpioMode/8 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Port_Ipw_SetGpioDirChangeability/12 (Port_Ipw_SetGpioDirChangeability) @070bb1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GPIODirChangeability/1 (read)Port_Ipw_au16GPIODirChangeability/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetPinMode/11 (12858162 (estimated locally),0.01 per call) Port_Ipw_SetGpioMode/8 (1073741823 (estimated locally),1.00 per call) Port_Ipw_SetOnlyInputMode/9 (1073741824 (estimated locally),1.00 per call) Port_Ipw_SetInputMode/7 (1073741824 (estimated locally),1.00 per call) Port_Ipw_SetInoutMode/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00/28 (1073741824 (estimated locally),1.00 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00/27 (1073741824 (estimated locally),1.00 per call) 
Port_Ipw_SetPinMode/11 (Port_Ipw_SetPinMode) @070bb000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_apSiul2InstancePinModeAvailability/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073726397 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06/22 (154282513 (estimated locally),0.14 per call) Port_Ipw_SetGpioDirChangeability/12 (12858162 (estimated locally),0.01 per call) Port_Ipw_SetAltMode/10 (12858162 (estimated locally),0.01 per call) Port_Ipw_SetOnlyInputMode/9 (12858162 (estimated locally),0.01 per call) Port_Ipw_SetGpioMode/8 (12858162 (estimated locally),0.01 per call) Port_Ipw_SetInputMode/7 (12858162 (estimated locally),0.01 per call) Port_Ipw_SetInoutMode/6 (12858162 (estimated locally),0.01 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06/20 (154267087 (estimated locally),0.14 per call) Det_ASR40_ReportError/17 (159058607 (estimated locally),0.15 per call) Det_ASR40_ReportError/17 (237400906 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354329711 (estimated locally),0.33 per call) 
Port_Ipw_SetAltMode/10 (Port_Ipw_SetAltMode) @070a8e00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Port_Ipw_SetPinMode/11 (12858162 (estimated locally),0.01 per call) 
  Calls: 
Port_Ipw_SetOnlyInputMode/9 (Port_Ipw_SetOnlyInputMode) @070a8c40
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Port_Ipw_SetPinMode/11 (12858162 (estimated locally),0.01 per call) 
  Calls: Port_Ipw_SetGpioDirChangeability/12 (1073741824 (estimated locally),1.00 per call) 
Port_Ipw_SetGpioMode/8 (Port_Ipw_SetGpioMode) @070a8a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Port_Ipw_SetPinMode/11 (12858162 (estimated locally),0.01 per call) 
  Calls: Port_Ipw_SetPinDirection/4 (1073741824 (estimated locally),1.00 per call) Port_Ipw_SetGpioPadOutput/13 (86669348 (estimated locally),0.08 per call) Port_Ipw_SetGpioPadOutput/13 (217325345 (estimated locally),0.20 per call) Port_Ipw_SetGpioDirChangeability/12 (1073741823 (estimated locally),1.00 per call) 
Port_Ipw_SetInputMode/7 (Port_Ipw_SetInputMode) @070a88c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32Siul2BaseAddr/16 (read)Port_apInMuxSettingsIndex/25 (read)Port_apInMuxSettings/26 (read)Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Port_Ipw_SetPinMode/11 (12858162 (estimated locally),0.01 per call) 
  Calls: Port_Ipw_SetGpioDirChangeability/12 (1073741824 (estimated locally),1.00 per call) 
Port_Ipw_SetInoutMode/6 (Port_Ipw_SetInoutMode) @070a8700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32Siul2BaseAddr/16 (read)Port_apInoutMuxSettings/23 (read)Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Port_Ipw_SetPinMode/11 (12858162 (estimated locally),0.01 per call) 
  Calls: Port_Ipw_SetGpioDirChangeability/12 (1073741824 (estimated locally),1.00 per call) Port_Ipw_GetIndexForInoutEntry/5 (1073741824 (estimated locally),1.00 per call) 
Port_Ipw_GetIndexForInoutEntry/5 (Port_Ipw_GetIndexForInoutEntry) @070a8540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_apInoutMuxSettings/23 (read)Port_au16NumInoutMuxSettings/24 (read)
  Referring: 
  Availability: local
  Function flags: count:78030430 (estimated locally) body local optimize_size
  Called by: Port_Ipw_SetInoutMode/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Port_Ipw_SetPinDirection/4 (Port_Ipw_SetPinDirection) @070a8380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GPIODirChangeability/1 (read)Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: Port_Ipw_SetGpioMode/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05/19 (289780026 (estimated locally),0.27 per call) SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05/18 (289780026 (estimated locally),0.27 per call) Det_ASR40_ReportError/17 (237404317 (estimated locally),0.22 per call) Det_ASR40_ReportError/17 (354334802 (estimated locally),0.33 per call) 
Port_Ipw_Init/3 (Port_Ipw_Init) @070a81c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Port_Ipw_au16GPIODirChangeability/1 (write)
  Referring: 
  Availability: available
  Function flags: count:97603133 (estimated locally) body optimize_size
  Called by: 
  Calls: Port_Ipw_Init_UnusedPins/2 (97603132 (estimated locally),1.00 per call) Siul2_Port_Ip_Init/15 (97603132 (estimated locally),1.00 per call) 
Port_Ipw_Init_UnusedPins/2 (Port_Ipw_Init_UnusedPins) @070a8000
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Port_au32Siul2BaseAddr/16 (read)Port_au32Siul2BaseAddr/16 (read)
  Referring: 
  Availability: local
  Function flags: count:118111602 (estimated locally) body local optimize_size
  Called by: Port_Ipw_Init/3 (97603132 (estimated locally),1.00 per call) 
  Calls: 
Port_Ipw_au16GPIODirChangeability/1 (Port_Ipw_au16GPIODirChangeability) @0704eb40
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Port_Ipw_Init/3 (write)Port_Ipw_SetPinDirection/4 (read)Port_Ipw_SetGpioDirChangeability/12 (read)Port_Ipw_SetGpioDirChangeability/12 (write)
  Availability: available
  Varpool flags:

;; Function Port_Ipw_Init (Port_Ipw_Init, funcdef_no=2, decl_uid=8623, cgraph_uid=3, symbol_order=3)

Modification phase of node Port_Ipw_Init/3
Port_Ipw_Init (const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8Imcr;
  uint16 u16ImcrIdx;
  uint8 u8ImcrSiulInstance;
  uint16 u16Counter;
  const struct Port_Siul2_ImcrConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Port_Siul2_ImcrConfigType * _4;
  unsigned int _5;
  short unsigned int _6;
  const struct Siul2_Port_Ip_PinSettingsConfig * _7;
  int _8;
  short unsigned int _18;

  <bb 2> [local count: 97603133]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG imcrBase => 1076428800B
  # DEBUG BEGIN_STMT
  # DEBUG u8ImcrSiulInstance => 0
  goto <bb 8>; [100.00%]

  <bb 3> [local count: 789698061]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_20(D)->pImcrConfig[0];
  _2 = (unsigned int) u16ImcrIdx_12;
  _3 = _2 * 2;
  _4 = _1 + _3;
  u8Imcr_25 = _4->u8ImcrIndex;
  # DEBUG u8Imcr => u8Imcr_25
  # DEBUG BEGIN_STMT
  if (u8Imcr_25 != 255)
    goto <bb 4>; [66.00%]
  else
    goto <bb 6>; [34.00%]

  <bb 4> [local count: 521200720]:
  # DEBUG BEGIN_STMT
  # DEBUG imcrBase => 1076428800B
  # DEBUG BEGIN_STMT
  if (u16ImcrIdx_12 <= 408)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 260600360]:
  # DEBUG BEGIN_STMT
  _18 = u16ImcrIdx_12 & 511;
  _5 = (unsigned int) _18;
  MEM[(struct SIUL2_Type *)1076428800B].IMCR[_5] ={v} 0;

  <bb 6> [local count: 789698061]:
  # DEBUG imcrBase => 1076428800B
  # DEBUG BEGIN_STMT
  u16ImcrIdx_27 = u16ImcrIdx_12 + 1;
  # DEBUG u16ImcrIdx => u16ImcrIdx_27

  <bb 7> [local count: 887301191]:
  # u16ImcrIdx_12 = PHI <u16ImcrIdx_27(6), 0(15)>
  # DEBUG imcrBase => 1076428800B
  # DEBUG u16ImcrIdx => u16ImcrIdx_12
  # DEBUG BEGIN_STMT
  _6 = pConfigPtr_20(D)->au16NumImcrs[0];
  if (_6 > u16ImcrIdx_12)
    goto <bb 3>; [89.00%]
  else
    goto <bb 17>; [11.00%]

  <bb 17> [local count: 97603131]:

  <bb 8> [local count: 195206264]:
  # u8ImcrSiulInstance_10 = PHI <0(2), 1(17)>
  # DEBUG imcrBase => 1076428800B
  # DEBUG u8ImcrSiulInstance => u8ImcrSiulInstance_10
  # DEBUG BEGIN_STMT
  if (u8ImcrSiulInstance_10 == 0)
    goto <bb 15>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 15> [local count: 97603132]:
  goto <bb 7>; [100.00%]

  <bb 9> [local count: 97603132]:
  # DEBUG BEGIN_STMT
  _7 = pConfigPtr_20(D)->IpConfigPtr;
  Siul2_Port_Ip_Init (5, _7);
  # DEBUG BEGIN_STMT
  Port_Ipw_Init_UnusedPins (pConfigPtr_20(D));
  # DEBUG BEGIN_STMT
  # DEBUG u8ImcrSiulInstance => 0
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 976138693]:
  # DEBUG BEGIN_STMT
  _8 = (int) u16Counter_9;
  Port_Ipw_au16GPIODirChangeability[0][_8] = 0;
  # DEBUG BEGIN_STMT
  u16Counter_24 = u16Counter_9 + 1;
  # DEBUG u16Counter => u16Counter_24

  <bb 11> [local count: 1073741824]:
  # u16Counter_9 = PHI <u16Counter_24(10), 0(14)>
  # DEBUG u16Counter => u16Counter_9
  # DEBUG BEGIN_STMT
  if (u16Counter_9 != 10)
    goto <bb 10>; [90.91%]
  else
    goto <bb 16>; [9.09%]

  <bb 16> [local count: 97603132]:

  <bb 12> [local count: 195206264]:
  # u8ImcrSiulInstance_11 = PHI <0(9), 1(16)>
  # DEBUG u8ImcrSiulInstance => u8ImcrSiulInstance_11
  # DEBUG BEGIN_STMT
  if (u8ImcrSiulInstance_11 == 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 14> [local count: 97603132]:
  goto <bb 11>; [100.00%]

  <bb 13> [local count: 97603132]:
  return;

}



;; Function Port_Ipw_SetPinDirection (Port_Ipw_SetPinDirection, funcdef_no=3, decl_uid=8627, cgraph_uid=4, symbol_order=4)

Modification phase of node Port_Ipw_SetPinDirection/4
Port_Ipw_SetPinDirection (Port_PinType PinIndex, Port_PinDirectionType eDirection, const struct Port_ConfigType * pConfigPtr)
{
  uint16 u16PinChangeDirFlagWord;
  uint8 u8PinDescBitOffset;
  Std_ReturnType PinDirError;
  uint32 u32LocalMSCR;
  uint8 u8MscrSiulInstance;
  uint16 u16MscrIdx;
  const struct Port_Siul2_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_Siul2_PinConfigType * _3;
  short unsigned int _4;
  long unsigned int _5;
  const uint32 * _6;
  long unsigned int _7;
  const uint32 * _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  int _12;
  short unsigned int _13;
  unsigned char _14;
  int _15;
  unsigned char _16;
  int _17;
  long unsigned int _18;
  short unsigned int _19;
  short unsigned int _20;
  long unsigned int _21;
  long unsigned int _22;
  long unsigned int _23;
  long unsigned int _24;
  long unsigned int _25;
  volatile uint32 * _26;
  long unsigned int _35;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_31(D)->pUsedPadConfig;
  _2 = PinIndex_32(D) * 24;
  _3 = _1 + _2;
  u16MscrIdx_33 = _3->u16MscrIdx;
  # DEBUG u16MscrIdx => u16MscrIdx_33
  # DEBUG BEGIN_STMT
  u8MscrSiulInstance_34 = _3->u8MscrSiulInstance;
  # DEBUG u8MscrSiulInstance => u8MscrSiulInstance_34
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG PinDirError => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _4 = pConfigPtr_31(D)->u16NumPins;
  _5 = (long unsigned int) _4;
  if (_5 <= PinIndex_32(D))
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 1, 10);
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  _6 = pConfigPtr_31(D)->pau32Port_PinToPartitionMap;
  _7 = PinIndex_32(D) * 4;
  _8 = _6 + _7;
  _9 = *_8;
  _10 = _9 & 1;
  if (_10 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 1, 240);
  goto <bb 16>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _11 = (unsigned char) u16MscrIdx_33;
  u8PinDescBitOffset_36 = _11 & 15;
  # DEBUG u8PinDescBitOffset => u8PinDescBitOffset_36
  # DEBUG BEGIN_STMT
  _12 = (int) u8MscrSiulInstance_34;
  _13 = u16MscrIdx_33 >> 4;
  _14 = (unsigned char) _13;
  _15 = (int) _14;
  u16PinChangeDirFlagWord_37 = Port_Ipw_au16GPIODirChangeability[_12][_15];
  # DEBUG u16PinChangeDirFlagWord => u16PinChangeDirFlagWord_37
  # DEBUG BEGIN_STMT
  _16 = _3->bDC;
  if (_16 == 1)
    goto <bb 8>; [20.24%]
  else
    goto <bb 7>; [79.76%]

  <bb 7> [local count: 384445357]:
  _17 = (int) u8PinDescBitOffset_36;
  _18 = 1 << _17;
  _19 = (short unsigned int) _18;
  _20 = _19 & u16PinChangeDirFlagWord_37;
  if (_20 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 8> [local count: 289780026]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_05 ();
  # DEBUG BEGIN_STMT
  _21 = Port_au32Siul2BaseAddr[_12];
  _22 = (long unsigned int) u16MscrIdx_33;
  _23 = _22 << 2;
  _24 = _21 + _23;
  _25 = _24 + 576;
  _26 = (volatile uint32 *) _25;
  u32LocalMSCR_39 ={v} *_26;
  # DEBUG u32LocalMSCR => u32LocalMSCR_39
  # DEBUG BEGIN_STMT
  if (eDirection_40(D) == 1)
    goto <bb 9>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 9> [local count: 98525209]:
  # DEBUG BEGIN_STMT
  u32LocalMSCR_44 = u32LocalMSCR_39 & 4294443007;
  # DEBUG u32LocalMSCR => u32LocalMSCR_44
  # DEBUG BEGIN_STMT
  u32LocalMSCR_45 = u32LocalMSCR_44 | 2097152;
  # DEBUG u32LocalMSCR => u32LocalMSCR_45
  goto <bb 15>; [100.00%]

  <bb 10> [local count: 191254817]:
  # DEBUG BEGIN_STMT
  if (eDirection_40(D) == 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 95627409]:
  # DEBUG BEGIN_STMT
  # DEBUG u32LocalMSCR => u32LocalMSCR_39 | 524288
  # DEBUG BEGIN_STMT
  _35 = u32LocalMSCR_39 & 4292870143;
  u32LocalMSCR_43 = _35 | 524288;
  # DEBUG u32LocalMSCR => u32LocalMSCR_43
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 95627409]:
  # DEBUG BEGIN_STMT
  if (eDirection_40(D) == 2)
    goto <bb 13>; [34.00%]
  else
    goto <bb 14>; [66.00%]

  <bb 13> [local count: 32513319]:
  # DEBUG BEGIN_STMT
  # DEBUG u32LocalMSCR => u32LocalMSCR_39 | 524288
  # DEBUG BEGIN_STMT
  u32LocalMSCR_42 = u32LocalMSCR_39 | 2621440;
  # DEBUG u32LocalMSCR => u32LocalMSCR_42
  goto <bb 15>; [100.00%]

  <bb 14> [local count: 63114090]:
  # DEBUG BEGIN_STMT
  # DEBUG u32LocalMSCR => u32LocalMSCR_39 & 4294443007
  # DEBUG BEGIN_STMT
  u32LocalMSCR_41 = u32LocalMSCR_39 & 4292345855;
  # DEBUG u32LocalMSCR => u32LocalMSCR_41

  <bb 15> [local count: 289780026]:
  # u32LocalMSCR_27 = PHI <u32LocalMSCR_45(9), u32LocalMSCR_43(11), u32LocalMSCR_42(13), u32LocalMSCR_41(14)>
  # DEBUG u32LocalMSCR => u32LocalMSCR_27
  # DEBUG BEGIN_STMT
  *_26 ={v} u32LocalMSCR_27;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_05 ();

  <bb 16> [local count: 1073741824]:
  # PinDirError_28 = PHI <0(3), 0(5), 0(15), 1(7)>
  # DEBUG PinDirError => PinDirError_28
  # DEBUG BEGIN_STMT
  return PinDirError_28;

}



;; Function Port_Ipw_SetGpioDirChangeability (Port_Ipw_SetGpioDirChangeability, funcdef_no=11, decl_uid=9031, cgraph_uid=12, symbol_order=12)

Modification phase of node Port_Ipw_SetGpioDirChangeability/12
Port_Ipw_SetGpioDirChangeability (uint8 u8ImcrSiulInstance, uint16 u16MscrIdx, boolean bStatus)
{
  uint8 u8PinBitOffset;
  uint16 u16PinDirFlagWord;
  unsigned char _1;
  int _2;
  unsigned char _3;
  int _4;
  int _5;
  long unsigned int _6;
  short unsigned int _7;
  int _8;
  long unsigned int _9;
  short unsigned int _10;
  short unsigned int _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_00 ();
  # DEBUG BEGIN_STMT
  _1 = (unsigned char) u16MscrIdx_15(D);
  u8PinBitOffset_16 = _1 & 15;
  # DEBUG u8PinBitOffset => u8PinBitOffset_16
  # DEBUG BEGIN_STMT
  _2 = (int) u8ImcrSiulInstance_17(D);
  _3 = _1 >> 4;
  _4 = (int) _3;
  u16PinDirFlagWord_18 = Port_Ipw_au16GPIODirChangeability[_2][_4];
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_18
  # DEBUG BEGIN_STMT
  if (bStatus_19(D) == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  _5 = (int) u8PinBitOffset_16;
  _6 = 1 << _5;
  _7 = (short unsigned int) _6;
  u16PinDirFlagWord_21 = _7 | u16PinDirFlagWord_18;
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_21
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _8 = (int) u8PinBitOffset_16;
  _9 = 1 << _8;
  _10 = (short unsigned int) _9;
  _11 = ~_10;
  u16PinDirFlagWord_20 = _11 & u16PinDirFlagWord_18;
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_20

  <bb 5> [local count: 1073741824]:
  # u16PinDirFlagWord_12 = PHI <u16PinDirFlagWord_21(3), u16PinDirFlagWord_20(4)>
  # DEBUG u16PinDirFlagWord => u16PinDirFlagWord_12
  # DEBUG BEGIN_STMT
  Port_Ipw_au16GPIODirChangeability[_2][_4] = u16PinDirFlagWord_12;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_00 ();
  return;

}



;; Function Port_Ipw_SetGpioPadOutput (Port_Ipw_SetGpioPadOutput, funcdef_no=12, decl_uid=9034, cgraph_uid=13, symbol_order=13)

Modification phase of node Port_Ipw_SetGpioPadOutput/13
Port_Ipw_SetGpioPadOutput (Port_PinType PinIndex, const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8LocalPDO;
  uint8 u8MscrSiulInstance;
  uint16 u16MscrIdx;
  const struct Port_Siul2_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_Siul2_PinConfigType * _3;
  int _4;
  long unsigned int _5;
  short unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  volatile uint8 * _10;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_13(D)->pUsedPadConfig;
  _2 = PinIndex_14(D) * 24;
  _3 = _1 + _2;
  u16MscrIdx_15 = _3->u16MscrIdx;
  # DEBUG u16MscrIdx => u16MscrIdx_15
  # DEBUG BEGIN_STMT
  u8MscrSiulInstance_16 = _3->u8MscrSiulInstance;
  # DEBUG u8MscrSiulInstance => u8MscrSiulInstance_16
  # DEBUG BEGIN_STMT
  u8LocalPDO_17 = _3->u8PDO;
  # DEBUG u8LocalPDO => u8LocalPDO_17
  # DEBUG BEGIN_STMT
  if (u8LocalPDO_17 != 2)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  _4 = (int) u8MscrSiulInstance_16;
  _5 = Port_au32Siul2BaseAddr[_4];
  _6 = u16MscrIdx_15 ^ 3;
  _7 = (long unsigned int) _6;
  _8 = _5 + _7;
  _9 = _8 + 4864;
  _10 = (volatile uint8 *) _9;
  *_10 ={v} u8LocalPDO_17;

  <bb 4> [local count: 1073741824]:
  return;

}



;; Function Port_Ipw_SetPinMode (Port_Ipw_SetPinMode, funcdef_no=10, decl_uid=8633, cgraph_uid=11, symbol_order=11)

Modification phase of node Port_Ipw_SetPinMode/11
Port_Ipw_SetPinMode (Port_PinType PinIndex, Port_PinModeType PinMode, const struct Port_ConfigType * pConfigPtr)
{
  uint8 u8PinDescBitOffset;
  uint16 u16PinDescWord;
  uint8 u8MscrSiulInstance;
  uint16 u16MscrIdx;
  Std_ReturnType PinModeError;
  const struct Port_Siul2_PinConfigType * _1;
  long unsigned int _2;
  const struct Port_Siul2_PinConfigType * _3;
  short unsigned int _4;
  long unsigned int _5;
  const uint32 * _6;
  long unsigned int _7;
  const uint32 * _8;
  long unsigned int _9;
  long unsigned int _10;
  unsigned char _11;
  unsigned char _12;
  int _13;
  const uint16[39][10] * _14;
  int _15;
  short unsigned int _16;
  int _17;
  int _18;
  long unsigned int _19;
  short unsigned int _20;
  short unsigned int _21;

  <bb 2> [local count: 1073726397]:
  # DEBUG BEGIN_STMT
  # DEBUG PinModeError => 0
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_27(D)->pUsedPadConfig;
  _2 = PinIndex_28(D) * 24;
  _3 = _1 + _2;
  u16MscrIdx_29 = _3->u16MscrIdx;
  # DEBUG u16MscrIdx => u16MscrIdx_29
  # DEBUG BEGIN_STMT
  u8MscrSiulInstance_30 = _3->u8MscrSiulInstance;
  # DEBUG u8MscrSiulInstance => u8MscrSiulInstance_30
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG CoreId => 0
  # DEBUG BEGIN_STMT
  _4 = pConfigPtr_27(D)->u16NumPins;
  _5 = (long unsigned int) _4;
  if (_5 <= PinIndex_28(D))
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354329711]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 4, 10);
  goto <bb 18>; [100.00%]

  <bb 4> [local count: 719396686]:
  # DEBUG BEGIN_STMT
  _6 = pConfigPtr_27(D)->pau32Port_PinToPartitionMap;
  _7 = PinIndex_28(D) * 4;
  _8 = _6 + _7;
  _9 = *_8;
  _10 = _9 & 1;
  if (_10 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237400906]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 4, 240);
  goto <bb 18>; [100.00%]

  <bb 6> [local count: 481995779]:
  # DEBUG BEGIN_STMT
  _11 = _3->bMC;
  if (_11 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159058607]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (124, 0, 4, 14);
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 322937172]:
  # DEBUG BEGIN_STMT
  if (PinMode_31(D) > 38)
    goto <bb 18>; [52.23%]
  else
    goto <bb 9>; [47.77%]

  <bb 9> [local count: 154267087]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_06 ();
  # DEBUG BEGIN_STMT
  _12 = (unsigned char) u16MscrIdx_29;
  u8PinDescBitOffset_33 = _12 & 15;
  # DEBUG u8PinDescBitOffset => u8PinDescBitOffset_33
  # DEBUG BEGIN_STMT
  _13 = (int) u8MscrSiulInstance_30;
  _14 = Port_apSiul2InstancePinModeAvailability[_13];
  _15 = (int) PinMode_31(D);
  _16 = u16MscrIdx_29 >> 4;
  _17 = (int) _16;
  u16PinDescWord_34 = *_14[_15][_17];
  # DEBUG u16PinDescWord => u16PinDescWord_34
  # DEBUG BEGIN_STMT
  _18 = (int) u8PinDescBitOffset_33;
  _19 = 1 << _18;
  _20 = (short unsigned int) _19;
  _21 = _20 & u16PinDescWord_34;
  if (_21 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 17>; [50.00%]

  <bb 10> [local count: 77133543]:
  # DEBUG BEGIN_STMT
  switch (PinMode_31(D)) <default: <L32> [16.67%], case 0: <L23> [16.67%], case 1 ... 7: <L25> [16.67%], case 18: <L24> [16.67%], case 19 ... 25: <L16> [16.67%], case 32 ... 38: <L9> [16.67%]>

  <bb 11> [local count: 12858162]:
<L9>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetInoutMode (u8MscrSiulInstance_30, u16MscrIdx_29, PinMode_31(D));
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 12> [local count: 12858162]:
<L16>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetInputMode (u8MscrSiulInstance_30, u16MscrIdx_29, PinMode_31(D));
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 13> [local count: 12858162]:
<L23>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioMode (u8MscrSiulInstance_30, u16MscrIdx_29, PinIndex_28(D), pConfigPtr_27(D));
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 14> [local count: 12858162]:
<L24>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetOnlyInputMode (u8MscrSiulInstance_30, u16MscrIdx_29);
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 15> [local count: 12858162]:
<L25>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetAltMode (u8MscrSiulInstance_30, u16MscrIdx_29, PinMode_31(D));
  # DEBUG BEGIN_STMT
  goto <bb 17>; [100.00%]

  <bb 16> [local count: 12858162]:
<L32>:
  # DEBUG BEGIN_STMT
  Port_Ipw_SetGpioDirChangeability (u8MscrSiulInstance_30, u16MscrIdx_29, 0);
  # DEBUG BEGIN_STMT

  <bb 17> [local count: 154282513]:
  # PinModeError_22 = PHI <0(12), 13(9), 0(11), 0(16), 0(15), 0(14), 0(13)>
  # DEBUG PinModeError => PinModeError_22
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_06 ();

  <bb 18> [local count: 1073741824]:
  # PinModeError_23 = PHI <0(3), 0(5), 0(7), 13(8), PinModeError_22(17)>
  # DEBUG PinModeError => PinModeError_23
  # DEBUG BEGIN_STMT
  return PinModeError_23;

}



;; Function Port_Ipw_RefreshPortDirection (Port_Ipw_RefreshPortDirection, funcdef_no=13, decl_uid=8629, cgraph_uid=14, symbol_order=14)

Modification phase of node Port_Ipw_RefreshPortDirection/14
Port_Ipw_RefreshPortDirection (const struct Port_ConfigType * pConfigPtr)
{
  uint32 u32LocalMSCR;
  uint8 u8MscrSiulInstance;
  uint16 u16MscrIdx;
  uint16 u16PinIndex;
  uint16 u16NumPins;
  const struct Port_Siul2_PinConfigType * _1;
  unsigned int _2;
  unsigned int _3;
  const struct Port_Siul2_PinConfigType * _4;
  unsigned char _5;
  int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;
  long unsigned int _10;
  long unsigned int _11;
  volatile uint32 * _12;
  const struct Port_Siul2_PinConfigType * _13;
  const struct Port_Siul2_PinConfigType * _14;
  long unsigned int _15;
  long unsigned int _16;
  long unsigned int _17;

  <bb 2> [local count: 118111602]:
  # DEBUG BEGIN_STMT
  u16NumPins_25 = pConfigPtr_24(D)->u16NumPins;
  # DEBUG u16NumPins => u16NumPins_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG u16PinIndex => 0
  goto <bb 12>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _1 = pConfigPtr_24(D)->pUsedPadConfig;
  _2 = (unsigned int) u16PinIndex_18;
  _3 = _2 * 24;
  _4 = _1 + _3;
  _5 = _4->bDC;
  if (_5 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 4> [local count: 315357973]:
  # DEBUG BEGIN_STMT
  u16MscrIdx_26 = _4->u16MscrIdx;
  # DEBUG u16MscrIdx => u16MscrIdx_26
  # DEBUG BEGIN_STMT
  u8MscrSiulInstance_27 = _4->u8MscrSiulInstance;
  # DEBUG u8MscrSiulInstance => u8MscrSiulInstance_27
  # DEBUG BEGIN_STMT
  SchM_Enter_Port_PORT_EXCLUSIVE_AREA_07 ();
  # DEBUG BEGIN_STMT
  _6 = (int) u8MscrSiulInstance_27;
  _7 = Port_au32Siul2BaseAddr[_6];
  _8 = (long unsigned int) u16MscrIdx_26;
  _9 = _8 << 2;
  _10 = _7 + _9;
  _11 = _10 + 576;
  _12 = (volatile uint32 *) _11;
  u32LocalMSCR_29 ={v} *_12;
  # DEBUG u32LocalMSCR => u32LocalMSCR_29
  # DEBUG BEGIN_STMT
  _13 = pConfigPtr_24(D)->pUsedPadConfig;
  _14 = _13 + _3;
  _15 = _14->u32MSCR;
  _16 = _15 & 2097152;
  if (_16 != 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  u32LocalMSCR_31 = u32LocalMSCR_29 | 2097152;
  # DEBUG u32LocalMSCR => u32LocalMSCR_31
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  u32LocalMSCR_30 = u32LocalMSCR_29 & 4292870143;
  # DEBUG u32LocalMSCR => u32LocalMSCR_30

  <bb 7> [local count: 315357973]:
  # u32LocalMSCR_19 = PHI <u32LocalMSCR_31(5), u32LocalMSCR_30(6)>
  # DEBUG u32LocalMSCR => u32LocalMSCR_19
  # DEBUG BEGIN_STMT
  _17 = _15 & 524288;
  if (_17 != 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  u32LocalMSCR_33 = u32LocalMSCR_19 | 524288;
  # DEBUG u32LocalMSCR => u32LocalMSCR_33
  goto <bb 10>; [100.00%]

  <bb 9> [local count: 157678987]:
  # DEBUG BEGIN_STMT
  u32LocalMSCR_32 = u32LocalMSCR_19 & 4294443007;
  # DEBUG u32LocalMSCR => u32LocalMSCR_32

  <bb 10> [local count: 315357973]:
  # u32LocalMSCR_20 = PHI <u32LocalMSCR_33(8), u32LocalMSCR_32(9)>
  # DEBUG u32LocalMSCR => u32LocalMSCR_20
  # DEBUG BEGIN_STMT
  *_12 ={v} u32LocalMSCR_20;
  # DEBUG BEGIN_STMT
  SchM_Exit_Port_PORT_EXCLUSIVE_AREA_07 ();

  <bb 11> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  u16PinIndex_36 = u16PinIndex_18 + 1;
  # DEBUG u16PinIndex => u16PinIndex_36

  <bb 12> [local count: 1073741824]:
  # u16PinIndex_18 = PHI <0(2), u16PinIndex_36(11)>
  # DEBUG u16PinIndex => u16PinIndex_18
  # DEBUG BEGIN_STMT
  if (u16PinIndex_18 < u16NumPins_25)
    goto <bb 3>; [89.00%]
  else
    goto <bb 13>; [11.00%]

  <bb 13> [local count: 118111601]:
  return;

}


