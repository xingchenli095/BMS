
IPA constant propagation start:
Determining dynamic type for call: RetVal_13 = Fls_CheckInputParamReadCompareJob (SourceAddress_9(D), TargetAddressPtr_10(D), Length_11(D), 8);
  Starting walk at: RetVal_13 = Fls_CheckInputParamReadCompareJob (SourceAddress_9(D), TargetAddressPtr_10(D), Length_11(D), 8);
  instance pointer: TargetAddressPtr_10(D)  Outer instance pointer: TargetAddressPtr_10(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: RetVal_13 = Fls_CheckInputParamReadCompareJob (SourceAddress_9(D), TargetAddressPtr_10(D), Length_11(D), 7);
  Starting walk at: RetVal_13 = Fls_CheckInputParamReadCompareJob (SourceAddress_9(D), TargetAddressPtr_10(D), Length_11(D), 7);
  instance pointer: TargetAddressPtr_10(D)  Outer instance pointer: TargetAddressPtr_10(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Fls_DoJobDataTransfer.part.0/63:
    callsite  Fls_DoJobDataTransfer.part.0/63 -> Fls_CalcMaxTransferAddrEnd/24 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_DoJobDataTransfer.part.0/63 -> Fls_CalcSectorTransferOffset/25 : 
    callsite  Fls_DoJobDataTransfer.part.0/63 -> Fls_CalcSectorTransferLength/26 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_DoJobDataTransfer.part.0/63 -> Fls_ProcessJobDataTransfer/28 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_CheckInputParamReadCompareJob.part.0/62:
  Jump functions of caller  Fls_GetSectorStartAddr.part.0/61:
  Jump functions of caller  Fls_IPW_SectorWrite/60:
  Jump functions of caller  Fls_IPW_SectorRead/59:
  Jump functions of caller  Det_ASR43_ReportTransientFault/58:
  Jump functions of caller  Fls_IPW_SectorErase/57:
  Jump functions of caller  Fls_IPW_LLDMainFunction/56:
  Jump functions of caller  Fls_IPW_AbortSuspended/55:
  Jump functions of caller  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13/54:
  Jump functions of caller  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13/53:
  Jump functions of caller  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12/52:
  Jump functions of caller  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12/51:
  Jump functions of caller  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11/50:
  Jump functions of caller  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11/49:
  Jump functions of caller  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10/48:
  Jump functions of caller  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10/47:
  Jump functions of caller  Fls_IPW_Init/46:
  Jump functions of caller  Det_ASR40_ReportError/45:
  Jump functions of caller  Fls_LLDClrJobResult/44:
  Jump functions of caller  Fls_MainFunction/42:
    callsite  Fls_MainFunction/42 -> Fls_MainFunction_CheckJobResult/41 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
    callsite  Fls_MainFunction/42 -> Fls_ProcessRequestedJobs/31 : 
    callsite  Fls_MainFunction/42 -> Fls_LLDClrJobResult/44 : 
  Jump functions of caller  Fls_MainFunction_CheckJobResult/41:
    indirect simple callsite, calling param -1, offset 0, for stmt _4 ();
    indirect simple callsite, calling param -1, offset 0, for stmt _2 ();
  Jump functions of caller  Fls_GetVersionInfo/40:
  Jump functions of caller  Fls_SetMode/39:
  Jump functions of caller  Fls_Compare/38:
    callsite  Fls_Compare/38 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Compare/38 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Compare/38 -> Fls_CheckInputParamReadCompareJob/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: CONST: 8
         value: 0x8, mask: 0x0
         Unknown VR
  Jump functions of caller  Fls_Read/37:
    callsite  Fls_Read/37 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Read/37 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Read/37 -> Fls_CheckInputParamReadCompareJob/22 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: CONST: 7
         value: 0x7, mask: 0x0
         Unknown VR
  Jump functions of caller  Fls_GetJobResult/36:
  Jump functions of caller  Fls_GetStatus/35:
  Jump functions of caller  Fls_Write/34:
    callsite  Fls_Write/34 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Write/34 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Write/34 -> Fls_IsAddrPageEndAligned/19 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Write/34 -> Fls_IsAddrPageStartAligned/18 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_Erase/33:
    callsite  Fls_Erase/33 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Erase/33 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Erase/33 -> Fls_IsAddrSectorEndAligned/21 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_Erase/33 -> Fls_IsAddrSectorStartAligned/20 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_Init/32:
  Jump functions of caller  Fls_ProcessRequestedJobs/31:
    callsite  Fls_ProcessRequestedJobs/31 -> Fls_DoJobDataTransfer/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_ProcessRequestedJobs/31 -> Fls_DoJobDataTransfer/29 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_ProcessRequestedJobs/31 -> Fls_DoJobErase/23 : 
  Jump functions of caller  Fls_DoJobDataTransfer/29:
    callsite  Fls_DoJobDataTransfer/29 -> Fls_DoJobDataTransfer.part.0/63 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_ProcessJobDataTransfer/28:
    callsite  Fls_ProcessJobDataTransfer/28 -> Fls_DoJobWrite/27 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_DoJobWrite/27:
  Jump functions of caller  Fls_CalcSectorTransferLength/26:
  Jump functions of caller  Fls_CalcSectorTransferOffset/25:
    callsite  Fls_CalcSectorTransferOffset/25 -> Fls_GetSectorStartAddr/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_CalcMaxTransferAddrEnd/24:
  Jump functions of caller  Fls_DoJobErase/23:
    callsite  Fls_DoJobErase/23 -> Fls_CalcSectorTransferOffset/25 : 
  Jump functions of caller  Fls_CheckInputParamReadCompareJob/22:
    callsite  Fls_CheckInputParamReadCompareJob/22 -> Fls_CheckInputParamReadCompareJob.part.0/62 : 
       param 0: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Fls_IsAddrSectorEndAligned/21:
    callsite  Fls_IsAddrSectorEndAligned/21 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IsAddrSectorStartAligned/20:
    callsite  Fls_IsAddrSectorStartAligned/20 -> Fls_GetSectorStartAddr/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IsAddrSectorStartAligned/20 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IsAddrPageEndAligned/19:
    callsite  Fls_IsAddrPageEndAligned/19 -> Fls_GetSectorStartAddr/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IsAddrPageEndAligned/19 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IsAddrPageStartAligned/18:
    callsite  Fls_IsAddrPageStartAligned/18 -> Fls_IsAddrPageAligned/17 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IsAddrPageAligned/17:
    callsite  Fls_IsAddrPageAligned/17 -> Fls_GetSectorIndexByAddr/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_GetSectorStartAddr/16:
    callsite  Fls_GetSectorStartAddr/16 -> Fls_GetSectorStartAddr.part.0/61 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_GetSectorIndexByAddr/15:

 Propagating constants:

Not considering Fls_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Fls_GetVersionInfo for cloning; -fipa-cp-clone disabled.
Not considering Fls_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Fls_Compare for cloning; -fipa-cp-clone disabled.
Not considering Fls_Read for cloning; -fipa-cp-clone disabled.
Not considering Fls_GetJobResult for cloning; -fipa-cp-clone disabled.
Not considering Fls_GetStatus for cloning; -fipa-cp-clone disabled.
Not considering Fls_Write for cloning; -fipa-cp-clone disabled.
Not considering Fls_Erase for cloning; -fipa-cp-clone disabled.
Not considering Fls_Init for cloning; -fipa-cp-clone disabled.

overall_size: 784, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Fls_DoJobDataTransfer.part.0/63:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_CheckInputParamReadCompareJob.part.0/62:
    param [0]: 8 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
               7 [loc_time: 1, loc_size: 8, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x8, mask = 0xf
         uint8 [7, 8]
        AGGS VARIABLE
  Node: Fls_GetSectorStartAddr.part.0/61:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_LLDClrJobResult/44:
  Node: Fls_MainFunction/42:
  Node: Fls_MainFunction_CheckJobResult/41:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_GetVersionInfo/40:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fls_SetMode/39:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fls_Compare/38:
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
  Node: Fls_Read/37:
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
  Node: Fls_GetJobResult/36:
  Node: Fls_GetStatus/35:
  Node: Fls_Write/34:
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
  Node: Fls_Erase/33:
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
  Node: Fls_Init/32:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fls_ProcessRequestedJobs/31:
  Node: Fls_DoJobDataTransfer/29:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_ProcessJobDataTransfer/28:
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
  Node: Fls_DoJobWrite/27:
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
  Node: Fls_CalcSectorTransferLength/26:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_CalcSectorTransferOffset/25:
  Node: Fls_CalcMaxTransferAddrEnd/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_DoJobErase/23:
  Node: Fls_CheckInputParamReadCompareJob/22:
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
    param [3]: 7 [loc_time: 1, loc_size: 38, prop_time: 0, prop_size: 0]
               8 [loc_time: 1, loc_size: 38, prop_time: 0, prop_size: 0]
         ctxs: VARIABLE
         Bits: value = 0x8, mask = 0xf
         uint8 [7, 8]
        AGGS VARIABLE
  Node: Fls_IsAddrSectorEndAligned/21:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IsAddrSectorStartAligned/20:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IsAddrPageEndAligned/19:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IsAddrPageStartAligned/18:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IsAddrPageAligned/17:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_GetSectorStartAddr/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_GetSectorIndexByAddr/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE

IPA decision stage:

Propagated bits info for function Fls_CheckInputParamReadCompareJob.part.0/62:
 param 0: value = 0x8, mask = 0xf
Propagated bits info for function Fls_CheckInputParamReadCompareJob/22:
 param 3: value = 0x8, mask = 0xf

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Fls_DoJobDataTransfer.part.0/63 (Fls_DoJobDataTransfer.part.0) @0708cb60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrIt/1 (write)Fls_pConfigPtr/8 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobAddrIt/1 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobSectorIt/3 (write)Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrEnd/2 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fls_DoJobDataTransfer/29 (114863532 (estimated locally),0.50 per call) 
  Calls: Fls_CalcMaxTransferAddrEnd/24 (114863532 (estimated locally),1.00 per call) Fls_CalcSectorTransferOffset/25 (1073741824 (estimated locally),9.35 per call) Fls_CalcSectorTransferLength/26 (1073741824 (estimated locally),9.35 per call) Fls_ProcessJobDataTransfer/28 (1073741824 (estimated locally),9.35 per call) 
Fls_CheckInputParamReadCompareJob.part.0/62 (Fls_CheckInputParamReadCompareJob.part.0) @0708cd20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fls_CheckInputParamReadCompareJob/22 (34684796 (estimated locally),0.03 per call) 
  Calls: Det_ASR40_ReportError/45 (1073741824 (estimated locally),1.00 per call) 
Fls_GetSectorStartAddr.part.0/61 (Fls_GetSectorStartAddr.part.0) @06e80700
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fls_GetSectorStartAddr/16 (536870912 (estimated locally),0.50 per call) 
  Calls: 
Fls_IPW_SectorWrite/60 (Fls_IPW_SectorWrite) @07066540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_DoJobWrite/27 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_IPW_SectorRead/59 (Fls_IPW_SectorRead) @070662a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_ProcessJobDataTransfer/28 (268435456 (estimated locally),0.25 per call) Fls_ProcessJobDataTransfer/28 (268435456 (estimated locally),0.25 per call) 
  Calls: 
Det_ASR43_ReportTransientFault/58 (Det_ASR43_ReportTransientFault) @07048d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_ProcessJobDataTransfer/28 (68451041 (estimated locally),0.06 per call) Fls_ProcessJobDataTransfer/28 (54331336 (estimated locally),0.05 per call) Fls_DoJobWrite/27 (217325345 (estimated locally),0.20 per call) Fls_DoJobErase/23 (53788023 (estimated locally),0.05 per call) 
  Calls: 
Fls_IPW_SectorErase/57 (Fls_IPW_SectorErase) @07048c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_DoJobErase/23 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Fls_IPW_LLDMainFunction/56 (Fls_IPW_LLDMainFunction) @070487e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_MainFunction/42 (84331683 (estimated locally),0.08 per call) 
  Calls: 
Fls_IPW_AbortSuspended/55 (Fls_IPW_AbortSuspended) @07048700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_MainFunction/42 (51723432 (estimated locally),0.05 per call) 
  Calls: 
SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13/54 (SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13) @070482a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Compare/38 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13/53 (SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13) @070480e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Compare/38 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12/52 (SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12) @07036ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Read/37 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12/51 (SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12) @07036d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Read/37 (354334802 (estimated locally),0.33 per call) 
  Calls: 
SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11/50 (SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11) @07036620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Write/34 (58164058 (estimated locally),0.05 per call) Fls_Write/34 (29963302 (estimated locally),0.03 per call) 
  Calls: 
SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11/49 (SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11) @07036540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Write/34 (88127360 (estimated locally),0.08 per call) 
  Calls: 
SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10/48 (SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10) @06fbca80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Erase/33 (54840397 (estimated locally),0.05 per call) Fls_Erase/33 (28251114 (estimated locally),0.03 per call) 
  Calls: 
SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10/47 (SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10) @06fbcee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Erase/33 (83091511 (estimated locally),0.08 per call) 
  Calls: 
Fls_IPW_Init/46 (Fls_IPW_Init) @06fbcb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_Init/32 (707143087 (estimated locally),0.66 per call) 
  Calls: 
Det_ASR40_ReportError/45 (Det_ASR40_ReportError) @06fbc9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_GetVersionInfo/40 (187153200 (estimated locally),0.17 per call) Fls_SetMode/39 (179445538 (estimated locally),0.17 per call) Fls_SetMode/39 (187153200 (estimated locally),0.17 per call) Fls_Compare/38 (120473833 (estimated locally),0.11 per call) Fls_Read/37 (120473833 (estimated locally),0.11 per call) Fls_GetJobResult/36 (187153200 (estimated locally),0.17 per call) Fls_Write/34 (29963302 (estimated locally),0.03 per call) Fls_Write/34 (37768869 (estimated locally),0.04 per call) Fls_Write/34 (377688687 (estimated locally),0.35 per call) Fls_Write/34 (248034361 (estimated locally),0.23 per call) Fls_Write/34 (322122547 (estimated locally),0.30 per call) Fls_Erase/33 (28251114 (estimated locally),0.03 per call) Fls_Erase/33 (420493404 (estimated locally),0.39 per call) Fls_Erase/33 (248034361 (estimated locally),0.23 per call) Fls_Erase/33 (322122547 (estimated locally),0.30 per call) Fls_Init/32 (179445537 (estimated locally),0.17 per call) Fls_Init/32 (187153200 (estimated locally),0.17 per call) Fls_CheckInputParamReadCompareJob/22 (395019561 (estimated locally),0.37 per call) Fls_CheckInputParamReadCompareJob/22 (292574246 (estimated locally),0.27 per call) Fls_CheckInputParamReadCompareJob/22 (187153200 (estimated locally),0.17 per call) Fls_CheckInputParamReadCompareJob.part.0/62 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_LLDClrJobResult/44 (Fls_LLDClrJobResult) @06fbc7e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_eLLDJobResult/6 (write)Fls_eLLDJob/7 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_MainFunction/42 (51723432 (estimated locally),0.05 per call) 
  Calls: 
Fls_MainFunction/42 (Fls_MainFunction) @06fbc460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/8 (read)Fls_eJobResult/11 (read)Fls_u8JobStart/14 (read)Fls_u8JobStart/14 (write)Fls_eLLDJob/7 (read)Fls_eLLDJobResult/6 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_MainFunction_CheckJobResult/41 (255550554 (estimated locally),0.24 per call) Fls_ProcessRequestedJobs/31 (84331683 (estimated locally),0.08 per call) Fls_IPW_LLDMainFunction/56 (84331683 (estimated locally),0.08 per call) Fls_IPW_AbortSuspended/55 (51723432 (estimated locally),0.05 per call) Fls_LLDClrJobResult/44 (51723432 (estimated locally),0.05 per call) 
Fls_MainFunction_CheckJobResult/41 (Fls_MainFunction_CheckJobResult) @06fbc2a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_eJobResult/11 (write)Fls_pConfigPtr/8 (read)Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fls_MainFunction/42 (255550554 (estimated locally),0.24 per call) 
  Calls: 
   Indirect call(267765870 (estimated locally),0.25 per call) 
   Indirect call(375809638 (estimated locally),0.35 per call) 
Fls_GetVersionInfo/40 (Fls_GetVersionInfo) @06fbc0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/45 (187153200 (estimated locally),0.17 per call) 
Fls_SetMode/39 (Fls_SetMode) @06f52ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/8 (read)Fls_eJobResult/11 (read)Fls_u32MaxRead/9 (write)Fls_u32MaxWrite/10 (write)Fls_u32MaxRead/9 (write)Fls_u32MaxWrite/10 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/45 (179445538 (estimated locally),0.17 per call) Det_ASR40_ReportError/45 (187153200 (estimated locally),0.17 per call) 
Fls_Compare/38 (Fls_Compare) @06f52d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_eJobResult/11 (read)Fls_u32JobSectorIt/3 (write)Fls_u32JobSectorEnd/5 (write)Fls_u32JobAddrIt/1 (write)Fls_u32JobAddrEnd/2 (write)Fls_pJobDataSrcPtr/12 (write)Fls_eJob/4 (write)Fls_u8JobStart/14 (write)Fls_eJobResult/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13/54 (354334802 (estimated locally),0.33 per call) Fls_GetSectorIndexByAddr/15 (233860969 (estimated locally),0.22 per call) Det_ASR40_ReportError/45 (120473833 (estimated locally),0.11 per call) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13/53 (354334802 (estimated locally),0.33 per call) Fls_GetSectorIndexByAddr/15 (354334802 (estimated locally),0.33 per call) Fls_CheckInputParamReadCompareJob/22 (1073741824 (estimated locally),1.00 per call) 
Fls_Read/37 (Fls_Read) @06f52b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_eJobResult/11 (read)Fls_u32JobSectorIt/3 (write)Fls_u32JobSectorEnd/5 (write)Fls_u32JobAddrIt/1 (write)Fls_u32JobAddrEnd/2 (write)Fls_pJobDataDestPtr/13 (write)Fls_eJob/4 (write)Fls_u8JobStart/14 (write)Fls_eJobResult/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12/52 (354334802 (estimated locally),0.33 per call) Fls_GetSectorIndexByAddr/15 (233860969 (estimated locally),0.22 per call) Det_ASR40_ReportError/45 (120473833 (estimated locally),0.11 per call) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12/51 (354334802 (estimated locally),0.33 per call) Fls_GetSectorIndexByAddr/15 (354334802 (estimated locally),0.33 per call) Fls_CheckInputParamReadCompareJob/22 (1073741824 (estimated locally),1.00 per call) 
Fls_GetJobResult/36 (Fls_GetJobResult) @06f529a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/8 (read)Fls_eJobResult/11 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/45 (187153200 (estimated locally),0.17 per call) 
Fls_GetStatus/35 (Fls_GetStatus) @06f527e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/8 (read)Fls_eJobResult/11 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Fls_Write/34 (Fls_Write) @06f52620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/8 (read)Fls_eJobResult/11 (read)Fls_u32JobSectorIt/3 (write)Fls_u32JobSectorEnd/5 (write)Fls_u32JobAddrEnd/2 (write)Fls_u32JobAddrIt/1 (write)Fls_pJobDataSrcPtr/12 (write)Fls_eJob/4 (write)Fls_u8JobStart/14 (write)Fls_eJobResult/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11/50 (58164058 (estimated locally),0.05 per call) Fls_GetSectorIndexByAddr/15 (58164058 (estimated locally),0.05 per call) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11/50 (29963302 (estimated locally),0.03 per call) Det_ASR40_ReportError/45 (29963302 (estimated locally),0.03 per call) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11/49 (88127360 (estimated locally),0.08 per call) Fls_GetSectorIndexByAddr/15 (88127360 (estimated locally),0.08 per call) Det_ASR40_ReportError/45 (37768869 (estimated locally),0.04 per call) Det_ASR40_ReportError/45 (377688687 (estimated locally),0.35 per call) Fls_IsAddrPageEndAligned/19 (251792457 (estimated locally),0.23 per call) Det_ASR40_ReportError/45 (248034361 (estimated locally),0.23 per call) Fls_IsAddrPageStartAligned/18 (751619277 (estimated locally),0.70 per call) Det_ASR40_ReportError/45 (322122547 (estimated locally),0.30 per call) 
Fls_Erase/33 (Fls_Erase) @06f52460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/8 (read)Fls_eJobResult/11 (read)Fls_u32JobSectorIt/3 (write)Fls_u32JobSectorEnd/5 (write)Fls_u32JobAddrIt/1 (write)Fls_u32JobAddrEnd/2 (write)Fls_eJob/4 (write)Fls_u8JobStart/14 (write)Fls_eJobResult/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10/48 (54840397 (estimated locally),0.05 per call) SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10/48 (28251114 (estimated locally),0.03 per call) Det_ASR40_ReportError/45 (28251114 (estimated locally),0.03 per call) SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10/47 (83091511 (estimated locally),0.08 per call) Fls_GetSectorIndexByAddr/15 (83091511 (estimated locally),0.08 per call) Fls_GetSectorIndexByAddr/15 (83091511 (estimated locally),0.08 per call) Det_ASR40_ReportError/45 (420493404 (estimated locally),0.39 per call) Fls_IsAddrSectorEndAligned/21 (251792457 (estimated locally),0.23 per call) Det_ASR40_ReportError/45 (248034361 (estimated locally),0.23 per call) Fls_IsAddrSectorStartAligned/20 (751619277 (estimated locally),0.70 per call) Det_ASR40_ReportError/45 (322122547 (estimated locally),0.30 per call) 
Fls_Init/32 (Fls_Init) @06f522a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_eJobResult/11 (read)Fls_pConfigPtr/8 (write)Fls_u32MaxRead/9 (write)Fls_u32MaxWrite/10 (write)Fls_u32MaxRead/9 (write)Fls_u32MaxWrite/10 (write)Fls_eLLDJobResult/6 (read)Fls_eJobResult/11 (write)Fls_pConfigPtr/8 (write)Fls_eJobResult/11 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_IPW_Init/46 (707143087 (estimated locally),0.66 per call) Det_ASR40_ReportError/45 (179445537 (estimated locally),0.17 per call) Det_ASR40_ReportError/45 (187153200 (estimated locally),0.17 per call) 
Fls_ProcessRequestedJobs/31 (Fls_ProcessRequestedJobs) @06f520e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_eJob/4 (read)Fls_u32MaxWrite/10 (read)Fls_u32MaxRead/9 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fls_MainFunction/42 (84331683 (estimated locally),0.08 per call) 
  Calls: Fls_DoJobDataTransfer/29 (474808634 (estimated locally),0.44 per call) Fls_DoJobDataTransfer/29 (244598387 (estimated locally),0.23 per call) Fls_DoJobErase/23 (354334802 (estimated locally),0.33 per call) 
Fls_DoJobDataTransfer/29 (Fls_DoJobDataTransfer) @06f48d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrEnd/2 (read)
  Referring: 
  Availability: local
  Function flags: count:229727064 (estimated locally) body local optimize_size
  Called by: Fls_ProcessRequestedJobs/31 (474808634 (estimated locally),0.44 per call) Fls_ProcessRequestedJobs/31 (244598387 (estimated locally),0.23 per call) 
  Calls: Fls_DoJobDataTransfer.part.0/63 (114863532 (estimated locally),0.50 per call) 
Fls_ProcessJobDataTransfer/28 (Fls_ProcessJobDataTransfer) @06f48b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_eJob/4 (read)Fls_pJobDataSrcPtr/12 (read)Fls_pJobDataSrcPtr/12 (write)Fls_pJobDataDestPtr/13 (read)Fls_pJobDataDestPtr/13 (read)Fls_pJobDataDestPtr/13 (write)Fls_pJobDataSrcPtr/12 (read)Fls_pJobDataSrcPtr/12 (read)Fls_pJobDataSrcPtr/12 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_DoJobDataTransfer.part.0/63 (1073741824 (estimated locally),9.35 per call) 
  Calls: Det_ASR43_ReportTransientFault/58 (68451041 (estimated locally),0.06 per call) Fls_IPW_SectorRead/59 (268435456 (estimated locally),0.25 per call) Det_ASR43_ReportTransientFault/58 (54331336 (estimated locally),0.05 per call) Fls_IPW_SectorRead/59 (268435456 (estimated locally),0.25 per call) Fls_DoJobWrite/27 (268435456 (estimated locally),0.25 per call) 
Fls_DoJobWrite/27 (Fls_DoJobWrite) @06f489a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)Fls_u32JobSectorIt/3 (read)Fls_pJobDataSrcPtr/12 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_ProcessJobDataTransfer/28 (268435456 (estimated locally),0.25 per call) 
  Calls: Det_ASR43_ReportTransientFault/58 (217325345 (estimated locally),0.20 per call) Fls_IPW_SectorWrite/60 (1073741824 (estimated locally),1.00 per call) 
Fls_CalcSectorTransferLength/26 (Fls_CalcSectorTransferLength) @06f487e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobSectorIt/3 (read)Fls_eJob/4 (read)Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrIt/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_DoJobDataTransfer.part.0/63 (1073741824 (estimated locally),9.35 per call) 
  Calls: 
Fls_CalcSectorTransferOffset/25 (Fls_CalcSectorTransferOffset) @06f48620
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_u32JobSectorIt/3 (read)Fls_u32JobAddrIt/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_DoJobDataTransfer.part.0/63 (1073741824 (estimated locally),9.35 per call) Fls_DoJobErase/23 (354334802 (estimated locally),0.33 per call) 
  Calls: Fls_GetSectorStartAddr/16 (1073741824 (estimated locally),1.00 per call) 
Fls_CalcMaxTransferAddrEnd/24 (Fls_CalcMaxTransferAddrEnd) @06f48460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_u32JobAddrEnd/2 (read)Fls_u32JobAddrIt/1 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_DoJobDataTransfer.part.0/63 (114863532 (estimated locally),1.00 per call) 
  Calls: 
Fls_DoJobErase/23 (Fls_DoJobErase) @06f482a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrEnd/2 (read)Fls_pConfigPtr/8 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrIt/1 (write)Fls_u32JobAddrIt/1 (read)Fls_u32JobAddrEnd/2 (read)Fls_pConfigPtr/8 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobSectorIt/3 (read)Fls_u32JobSectorIt/3 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fls_ProcessRequestedJobs/31 (354334802 (estimated locally),0.33 per call) 
  Calls: Det_ASR43_ReportTransientFault/58 (53788023 (estimated locally),0.05 per call) Fls_IPW_SectorErase/57 (354334802 (estimated locally),0.33 per call) Fls_CalcSectorTransferOffset/25 (354334802 (estimated locally),0.33 per call) 
Fls_CheckInputParamReadCompareJob/22 (Fls_CheckInputParamReadCompareJob) @06f480e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_Compare/38 (1073741824 (estimated locally),1.00 per call) Fls_Read/37 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_CheckInputParamReadCompareJob.part.0/62 (34684796 (estimated locally),0.03 per call) Det_ASR40_ReportError/45 (395019561 (estimated locally),0.37 per call) Det_ASR40_ReportError/45 (292574246 (estimated locally),0.27 per call) Det_ASR40_ReportError/45 (187153200 (estimated locally),0.17 per call) 
Fls_IsAddrSectorEndAligned/21 (Fls_IsAddrSectorEndAligned) @06f30d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_Erase/33 (251792457 (estimated locally),0.23 per call) 
  Calls: Fls_GetSectorIndexByAddr/15 (354334802 (estimated locally),0.33 per call) 
Fls_IsAddrSectorStartAligned/20 (Fls_IsAddrSectorStartAligned) @06f30a80
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_Erase/33 (751619277 (estimated locally),0.70 per call) 
  Calls: Fls_GetSectorStartAddr/16 (354334802 (estimated locally),0.33 per call) Fls_GetSectorIndexByAddr/15 (354334802 (estimated locally),0.33 per call) 
Fls_IsAddrPageEndAligned/19 (Fls_IsAddrPageEndAligned) @06f307e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_Write/34 (251792457 (estimated locally),0.23 per call) 
  Calls: Fls_GetSectorStartAddr/16 (1073741824 (estimated locally),1.00 per call) Fls_GetSectorIndexByAddr/15 (1073741824 (estimated locally),1.00 per call) 
Fls_IsAddrPageStartAligned/18 (Fls_IsAddrPageStartAligned) @06f30540
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_Write/34 (751619277 (estimated locally),0.70 per call) 
  Calls: Fls_IsAddrPageAligned/17 (354334802 (estimated locally),0.33 per call) 
Fls_IsAddrPageAligned/17 (Fls_IsAddrPageAligned) @06f302a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_IsAddrPageStartAligned/18 (354334802 (estimated locally),0.33 per call) 
  Calls: Fls_GetSectorIndexByAddr/15 (1073741824 (estimated locally),1.00 per call) 
Fls_GetSectorStartAddr/16 (Fls_GetSectorStartAddr) @06f300e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_CalcSectorTransferOffset/25 (1073741824 (estimated locally),1.00 per call) Fls_IsAddrSectorStartAligned/20 (354334802 (estimated locally),0.33 per call) Fls_IsAddrPageEndAligned/19 (1073741824 (estimated locally),1.00 per call) 
  Calls: Fls_GetSectorStartAddr.part.0/61 (536870912 (estimated locally),0.50 per call) 
Fls_GetSectorIndexByAddr/15 (Fls_GetSectorIndexByAddr) @06f22ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/8 (read)
  Referring: 
  Availability: local
  Function flags: count:114863532 (estimated locally) body local optimize_size
  Called by: Fls_Compare/38 (233860969 (estimated locally),0.22 per call) Fls_Compare/38 (354334802 (estimated locally),0.33 per call) Fls_Read/37 (233860969 (estimated locally),0.22 per call) Fls_Read/37 (354334802 (estimated locally),0.33 per call) Fls_Write/34 (58164058 (estimated locally),0.05 per call) Fls_Write/34 (88127360 (estimated locally),0.08 per call) Fls_Erase/33 (83091511 (estimated locally),0.08 per call) Fls_Erase/33 (83091511 (estimated locally),0.08 per call) Fls_IsAddrSectorEndAligned/21 (354334802 (estimated locally),0.33 per call) Fls_IsAddrSectorStartAligned/20 (354334802 (estimated locally),0.33 per call) Fls_IsAddrPageEndAligned/19 (1073741824 (estimated locally),1.00 per call) Fls_IsAddrPageAligned/17 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_u8JobStart/14 (Fls_u8JobStart) @06f0d7e0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Read/37 (write)Fls_Compare/38 (write)Fls_Erase/33 (write)Fls_Write/34 (write)Fls_MainFunction/42 (read)Fls_MainFunction/42 (write)
  Availability: available
  Varpool flags:
Fls_pJobDataDestPtr/13 (Fls_pJobDataDestPtr) @06f0d798
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_ProcessJobDataTransfer/28 (write)Fls_ProcessJobDataTransfer/28 (read)Fls_ProcessJobDataTransfer/28 (read)Fls_Read/37 (write)
  Availability: available
  Varpool flags:
Fls_pJobDataSrcPtr/12 (Fls_pJobDataSrcPtr) @06f0d750
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_DoJobWrite/27 (read)Fls_ProcessJobDataTransfer/28 (write)Fls_Write/34 (write)Fls_ProcessJobDataTransfer/28 (read)Fls_ProcessJobDataTransfer/28 (write)Fls_ProcessJobDataTransfer/28 (read)Fls_ProcessJobDataTransfer/28 (read)Fls_Compare/38 (write)
  Availability: available
  Varpool flags:
Fls_eJobResult/11 (Fls_eJobResult) @06f0d708
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_Read/37 (write)Fls_Compare/38 (write)Fls_SetMode/39 (read)Fls_Read/37 (read)Fls_MainFunction_CheckJobResult/41 (write)Fls_Init/32 (write)Fls_Init/32 (write)Fls_Erase/33 (write)Fls_Write/34 (write)Fls_Erase/33 (read)Fls_GetStatus/35 (read)Fls_Write/34 (read)Fls_GetJobResult/36 (read)Fls_Init/32 (read)Fls_Compare/38 (read)Fls_MainFunction/42 (read)
  Availability: available
  Varpool flags:
Fls_u32MaxWrite/10 (Fls_u32MaxWrite) @06f0d6c0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_ProcessRequestedJobs/31 (read)Fls_Init/32 (write)Fls_Init/32 (write)Fls_SetMode/39 (write)Fls_SetMode/39 (write)
  Availability: available
  Varpool flags:
Fls_u32MaxRead/9 (Fls_u32MaxRead) @06f0d678
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_ProcessRequestedJobs/31 (read)Fls_Init/32 (write)Fls_Init/32 (write)Fls_SetMode/39 (write)Fls_SetMode/39 (write)
  Availability: available
  Varpool flags:
Fls_pConfigPtr/8 (Fls_pConfigPtr) @06f0d630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Fls_DoJobErase/23 (read)Fls_IsAddrSectorStartAligned/20 (read)Fls_GetStatus/35 (read)Fls_GetJobResult/36 (read)Fls_CalcSectorTransferLength/26 (read)Fls_CheckInputParamReadCompareJob/22 (read)Fls_DoJobWrite/27 (read)Fls_DoJobDataTransfer.part.0/63 (read)Fls_MainFunction_CheckJobResult/41 (read)Fls_IsAddrPageAligned/17 (read)Fls_IsAddrPageStartAligned/18 (read)Fls_SetMode/39 (read)Fls_MainFunction_CheckJobResult/41 (read)Fls_Erase/33 (read)Fls_Write/34 (read)Fls_IsAddrPageEndAligned/19 (read)Fls_DoJobErase/23 (read)Fls_IsAddrSectorEndAligned/21 (read)Fls_Init/32 (write)Fls_Init/32 (write)Fls_GetSectorStartAddr.part.0/61 (read)Fls_GetSectorIndexByAddr/15 (read)Fls_MainFunction/42 (read)
  Availability: available
  Varpool flags:
Fls_eLLDJob/7 (Fls_eLLDJob) @06f0d5e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Fls_LLDClrJobResult/44 (write)Fls_MainFunction/42 (read)
  Availability: available
  Varpool flags:
Fls_eLLDJobResult/6 (Fls_eLLDJobResult) @06f0d5a0
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: Fls_Init/32 (read)Fls_LLDClrJobResult/44 (write)Fls_MainFunction/42 (read)
  Availability: available
  Varpool flags:
Fls_u32JobSectorEnd/5 (Fls_u32JobSectorEnd) @06f0d558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Fls_Write/34 (write)Fls_Read/37 (write)Fls_Erase/33 (write)Fls_Compare/38 (write)
  Availability: available
  Varpool flags:
Fls_eJob/4 (Fls_eJob) @06f0d510
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_ProcessJobDataTransfer/28 (read)Fls_ProcessRequestedJobs/31 (read)Fls_Erase/33 (write)Fls_Write/34 (write)Fls_Read/37 (write)Fls_CalcSectorTransferLength/26 (read)Fls_Compare/38 (write)
  Availability: available
  Varpool flags:
Fls_u32JobSectorIt/3 (Fls_u32JobSectorIt) @06f0d4c8
  Type: variable definition analyzed
  Visibility: force_output externally_visible public
  References: 
  Referring: Fls_DoJobWrite/27 (read)Fls_DoJobDataTransfer.part.0/63 (write)Fls_Erase/33 (write)Fls_Write/34 (write)Fls_DoJobErase/23 (read)Fls_CalcSectorTransferLength/26 (read)Fls_DoJobErase/23 (write)Fls_Read/37 (write)Fls_DoJobErase/23 (read)Fls_CalcSectorTransferOffset/25 (read)Fls_CalcSectorTransferLength/26 (read)Fls_DoJobErase/23 (read)Fls_DoJobErase/23 (read)Fls_DoJobErase/23 (read)Fls_DoJobDataTransfer.part.0/63 (read)Fls_DoJobDataTransfer.part.0/63 (read)Fls_Compare/38 (write)
  Availability: available
  Varpool flags:
Fls_u32JobAddrEnd/2 (Fls_u32JobAddrEnd) @06f0d480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Fls_DoJobErase/23 (read)Fls_DoJobDataTransfer/29 (read)Fls_Erase/33 (write)Fls_Write/34 (write)Fls_CalcMaxTransferAddrEnd/24 (read)Fls_Read/37 (write)Fls_DoJobErase/23 (read)Fls_DoJobDataTransfer.part.0/63 (read)Fls_Compare/38 (write)
  Availability: available
  Varpool flags:
Fls_u32JobAddrIt/1 (Fls_u32JobAddrIt) @06f0d438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Fls_DoJobErase/23 (read)Fls_DoJobDataTransfer/29 (read)Fls_Erase/33 (write)Fls_Write/34 (write)Fls_CalcSectorTransferLength/26 (read)Fls_DoJobErase/23 (write)Fls_DoJobErase/23 (read)Fls_DoJobErase/23 (read)Fls_CalcSectorTransferOffset/25 (read)Fls_Read/37 (write)Fls_CalcMaxTransferAddrEnd/24 (read)Fls_CalcSectorTransferLength/26 (read)Fls_DoJobDataTransfer.part.0/63 (read)Fls_DoJobDataTransfer.part.0/63 (read)Fls_DoJobDataTransfer.part.0/63 (write)Fls_DoJobDataTransfer.part.0/63 (read)Fls_Compare/38 (write)
  Availability: available
  Varpool flags:

;; Function Fls_GetSectorIndexByAddr (Fls_GetSectorIndexByAddr, funcdef_no=0, decl_uid=8929, cgraph_uid=2, symbol_order=15)

Modification phase of node Fls_GetSectorIndexByAddr/15
Fls_GetSectorIndexByAddr (const Fls_AddressType TargetAddress)
{
  Fls_SectorIndexType SectorIndex;
  const Fls_AddressType[<unknown>] * _2;
  long unsigned int _3;
  const struct Fls_ConfigType * Fls_pConfigPtr.17_4;
  long unsigned int _5;

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG SectorIndex => 0
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  _2 = Fls_pConfigPtr.17_4->paSectorEndAddr;
  _3 = *_2[SectorIndex_6];
  if (_3 >= TargetAddress_8(D))
    goto <bb 6>; [5.50%]
  else
    goto <bb 4>; [94.50%]

  <bb 4> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SectorIndex_9 = SectorIndex_6 + 1;
  # DEBUG SectorIndex => SectorIndex_9

  <bb 5> [local count: 1073741824]:
  # SectorIndex_6 = PHI <0(2), SectorIndex_9(4)>
  # DEBUG SectorIndex => SectorIndex_6
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.17_4 = Fls_pConfigPtr;
  _5 = Fls_pConfigPtr.17_4->u32SectorCount;
  if (_5 > SectorIndex_6)
    goto <bb 3>; [94.50%]
  else
    goto <bb 6>; [5.50%]

  <bb 6> [local count: 114863532]:
  # SectorIndex_1 = PHI <SectorIndex_6(3), SectorIndex_6(5)>
  # DEBUG BEGIN_STMT
  return SectorIndex_1;

}



;; Function Fls_CheckInputParamReadCompareJob (Fls_CheckInputParamReadCompareJob, funcdef_no=7, decl_uid=8946, cgraph_uid=9, symbol_order=22)

Modification phase of node Fls_CheckInputParamReadCompareJob/22
Adjusting mask for param 3 to 0xf
Setting value range of param 3 [7, 8]
Fls_CheckInputParamReadCompareJob (Fls_AddressType SourceAddress, const uint8 * TargetAddressPtr, Fls_LengthType Length, uint8 ApiId)
{
  Std_ReturnType RetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.30_1;
  const Fls_AddressType[<unknown>] * _3;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;
  long unsigned int _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG CheckInputTemp => 0
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.30_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.30_1 == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, ApiId_14(D), 5);
  # DEBUG BEGIN_STMT
  # DEBUG CheckInputTemp => 0
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  _3 = Fls_pConfigPtr.30_1->paSectorEndAddr;
  _5 = Fls_pConfigPtr.30_1->u32SectorCount;
  _6 = _5 + 4294967295;
  _7 = *_3[_6];
  _8 = _7 + 1;
  if (_8 <= SourceAddress_12(D))
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 292574246]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, ApiId_14(D), 2);
  # DEBUG BEGIN_STMT
  # DEBUG CheckInputTemp => 0
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 594014379]:
  # DEBUG BEGIN_STMT
  if (Length_13(D) == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 7> [local count: 397989633]:
  _9 = SourceAddress_12(D) + Length_13(D);
  if (_8 < _9)
    goto <bb 9>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 8> [local count: 198994816]:
  # DEBUG CheckInputTemp => 1
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (TargetAddressPtr_19(D) == 0B)
    goto <bb 10>; [17.43%]
  else
    goto <bb 11>; [82.57%]

  <bb 9> [local count: 395019561]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, ApiId_14(D), 3);
  # DEBUG BEGIN_STMT
  # DEBUG CheckInputTemp => 0
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 10> [local count: 34684796]:
  # DEBUG D#1 => SourceAddress_12(D)
  # DEBUG D#2 => TargetAddressPtr_19(D)
  # DEBUG D#3 => Length_13(D)
  RetVal_18 = Fls_CheckInputParamReadCompareJob.part.0 (ApiId_14(D));

  <bb 11> [local count: 1073741824]:
  # RetVal_10 = PHI <1(5), 0(8), RetVal_18(10), 1(3), 1(9)>
  # DEBUG RetVal => RetVal_10
  # DEBUG BEGIN_STMT
  return RetVal_10;

}



;; Function Fls_CalcSectorTransferOffset (Fls_CalcSectorTransferOffset, funcdef_no=10, decl_uid=8954, cgraph_uid=12, symbol_order=25)

Modification phase of node Fls_CalcSectorTransferOffset/25
Fls_CalcSectorTransferOffset ()
{
  Fls_AddressType SectorAddrStart;
  long unsigned int Fls_u32JobSectorIt.65_1;
  long unsigned int Fls_u32JobAddrIt.66_2;
  Fls_AddressType _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorIt.65_1 ={v} Fls_u32JobSectorIt;
  SectorAddrStart_4 = Fls_GetSectorStartAddr (Fls_u32JobSectorIt.65_1);
  # DEBUG SectorAddrStart => SectorAddrStart_4
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt.66_2 = Fls_u32JobAddrIt;
  _5 = Fls_u32JobAddrIt.66_2 - SectorAddrStart_4;
  return _5;

}



;; Function Fls_DoJobDataTransfer.part.0 (Fls_DoJobDataTransfer.part.0, funcdef_no=32, decl_uid=9458, cgraph_uid=50, symbol_order=63)

Modification phase of node Fls_DoJobDataTransfer.part.0/63
Fls_DoJobDataTransfer.part.0 (const Fls_LengthType MaxTransfer)
{
  MemIf_JobResultType RetVal;
  Fls_AddressType u32MaxTransferAddrEnd;
  Fls_LLDReturnType TransferRetVal;
  Fls_AddressType SectorTransferOffset;
  Fls_AddressType u32SectorTransferLength;
  long unsigned int Fls_u32JobAddrIt.69_5;
  long unsigned int _6;
  const struct Fls_ConfigType * Fls_pConfigPtr.70_8;
  const Fls_AddressType[<unknown>] * _9;
  long unsigned int Fls_u32JobSectorIt.71_10;
  long unsigned int _11;
  long unsigned int Fls_u32JobAddrIt.72_12;
  long unsigned int Fls_u32JobSectorIt.73_13;
  long unsigned int _14;
  long unsigned int Fls_u32JobAddrIt.74_15;
  long unsigned int Fls_u32JobAddrEnd.76_17;
  long unsigned int Fls_u32JobAddrIt.74_18;

  <bb 15> [local count: 114863532]:

  <bb 2> [local count: 114863532]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  u32MaxTransferAddrEnd_2 = Fls_CalcMaxTransferAddrEnd (MaxTransfer_1(D));
  # DEBUG u32MaxTransferAddrEnd => u32MaxTransferAddrEnd_2

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SectorTransferOffset_3 = Fls_CalcSectorTransferOffset ();
  # DEBUG SectorTransferOffset => SectorTransferOffset_3
  # DEBUG BEGIN_STMT
  u32SectorTransferLength_4 = Fls_CalcSectorTransferLength (u32MaxTransferAddrEnd_2);
  # DEBUG u32SectorTransferLength => u32SectorTransferLength_4
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt.69_5 = Fls_u32JobAddrIt;
  _6 = u32SectorTransferLength_4 + Fls_u32JobAddrIt.69_5;
  Fls_u32JobAddrIt = _6;
  # DEBUG BEGIN_STMT
  TransferRetVal_7 = Fls_ProcessJobDataTransfer (SectorTransferOffset_3, u32SectorTransferLength_4);
  # DEBUG TransferRetVal => TransferRetVal_7
  # DEBUG BEGIN_STMT
  if (TransferRetVal_7 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 536870912]:
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.70_8 = Fls_pConfigPtr;
  _9 = Fls_pConfigPtr.70_8->paSectorEndAddr;
  Fls_u32JobSectorIt.71_10 ={v} Fls_u32JobSectorIt;
  _11 = *_9[Fls_u32JobSectorIt.71_10];
  Fls_u32JobAddrIt.72_12 = Fls_u32JobAddrIt;
  if (_11 < Fls_u32JobAddrIt.72_12)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorIt.73_13 ={v} Fls_u32JobSectorIt;
  _14 = Fls_u32JobSectorIt.73_13 + 1;
  Fls_u32JobSectorIt ={v} _14;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt.74_15 = Fls_u32JobAddrIt;
  if (u32MaxTransferAddrEnd_2 >= Fls_u32JobAddrIt.74_15)
    goto <bb 7>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 7> [local count: 1014686025]:
  if (TransferRetVal_7 == 0)
    goto <bb 8>; [94.50%]
  else
    goto <bb 9>; [5.50%]

  <bb 8> [local count: 958878293]:
  goto <bb 3>; [100.00%]

  <bb 9> [local count: 114863532]:
  # Fls_u32JobAddrIt.74_18 = PHI <Fls_u32JobAddrIt.74_15(6), Fls_u32JobAddrIt.74_15(7)>
  # TransferRetVal_16 = PHI <TransferRetVal_7(6), TransferRetVal_7(7)>
  # DEBUG BEGIN_STMT
  if (TransferRetVal_16 == 1)
    goto <bb 14>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 75809931]:
  # DEBUG BEGIN_STMT
  if (TransferRetVal_16 == 2)
    goto <bb 14>; [21.72%]
  else
    goto <bb 11>; [78.28%]

  <bb 11> [local count: 59344014]:
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrEnd.76_17 = Fls_u32JobAddrEnd;
  if (Fls_u32JobAddrEnd.76_17 < Fls_u32JobAddrIt.74_18)
    goto <bb 12>; [65.00%]
  else
    goto <bb 14>; [35.00%]

  <bb 12> [local count: 38573609]:
  if (TransferRetVal_16 == 0)
    goto <bb 13>; [65.00%]
  else
    goto <bb 14>; [35.00%]

  <bb 13> [local count: 25072846]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 14> [local count: 114863532]:
  # RetVal_19 = PHI <1(9), 4(10), 2(11), 2(12), 0(13)>
  # DEBUG RetVal => RetVal_19
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_19;

}



;; Function Fls_Init (Fls_Init, funcdef_no=17, decl_uid=8466, cgraph_uid=19, symbol_order=32)

Modification phase of node Fls_Init/32
Fls_Init (const struct Fls_ConfigType * ConfigPtr)
{
  unsigned char Fls_eJobResult.0_1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _12;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  if (ConfigPtr_9(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 0, 1);
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 886588623]:
  # DEBUG BEGIN_STMT
  Fls_eJobResult.0_1 = Fls_eJobResult;
  if (Fls_eJobResult.0_1 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 179445537]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 0, 6);
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 707143087]:
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr = ConfigPtr_9(D);
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY NULL
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = ConfigPtr_9(D)->eDefaultMode;
  if (_2 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 353571543]:
  # DEBUG BEGIN_STMT
  _3 = ConfigPtr_9(D)->u32MaxReadNormalMode;
  Fls_u32MaxRead = _3;
  # DEBUG BEGIN_STMT
  _4 = ConfigPtr_9(D)->u32MaxWriteNormalMode;
  Fls_u32MaxWrite = _4;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 353571543]:
  # DEBUG BEGIN_STMT
  _5 = ConfigPtr_9(D)->u32MaxReadFastMode;
  Fls_u32MaxRead = _5;
  # DEBUG BEGIN_STMT
  _6 = ConfigPtr_9(D)->u32MaxWriteFastMode;
  Fls_u32MaxWrite = _6;

  <bb 9> [local count: 707143087]:
  # DEBUG BEGIN_STMT
  Fls_IPW_Init ();
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Fls_LLDGetJobResult
  # DEBUG BEGIN_STMT
  _12 ={v} Fls_eLLDJobResult;
  if (_12 == 1)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 240428649]:
  # DEBUG BEGIN_STMT
  Fls_eJobResult = 1;
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr = 0B;
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 466714436]:
  # DEBUG BEGIN_STMT
  Fls_eJobResult = 0;

  <bb 12> [local count: 1073741824]:
  return;

}



;; Function Fls_Erase (Fls_Erase, funcdef_no=18, decl_uid=8473, cgraph_uid=20, symbol_order=33)

Modification phase of node Fls_Erase/33
Fls_Erase (Fls_AddressType TargetAddress, Fls_LengthType Length)
{
  Fls_SectorIndexType TmpJobSectorEnd;
  Fls_SectorIndexType TmpJobSectorIt;
  Std_ReturnType RetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.6_1;
  unsigned char _2;
  long unsigned int _3;
  long unsigned int _4;
  unsigned char _5;
  unsigned char Fls_eJobResult.7_6;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.6_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.6_1 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 1, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 12>; [100.00%]

  <bb 4> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _2 = Fls_IsAddrSectorStartAligned (TargetAddress_10(D));
  if (_2 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 1, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 503584915]:
  # DEBUG BEGIN_STMT
  if (Length_11(D) == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 251792457]:
  _3 = TargetAddress_10(D) + Length_11(D);
  _4 = _3 + 4294967295;
  _5 = Fls_IsAddrSectorEndAligned (_4);
  if (_5 == 0)
    goto <bb 8>; [67.00%]
  else
    goto <bb 9>; [33.00%]

  <bb 8> [local count: 420493404]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 1, 3);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 83091511]:
  # DEBUG BEGIN_STMT
  TmpJobSectorIt_12 = Fls_GetSectorIndexByAddr (TargetAddress_10(D));
  # DEBUG TmpJobSectorIt => TmpJobSectorIt_12
  # DEBUG BEGIN_STMT
  TmpJobSectorEnd_13 = Fls_GetSectorIndexByAddr (_4);
  # DEBUG TmpJobSectorEnd => TmpJobSectorEnd_13
  # DEBUG BEGIN_STMT
  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_10 ();
  # DEBUG BEGIN_STMT
  Fls_eJobResult.7_6 = Fls_eJobResult;
  if (Fls_eJobResult.7_6 == 2)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 28251114]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 1, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10 ();
  goto <bb 12>; [100.00%]

  <bb 11> [local count: 54840397]:
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorIt ={v} TmpJobSectorIt_12;
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorEnd = TmpJobSectorEnd_13;
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt = TargetAddress_10(D);
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrEnd = _4;
  # DEBUG BEGIN_STMT
  Fls_eJob = 0;
  # DEBUG BEGIN_STMT
  Fls_u8JobStart = 1;
  # DEBUG BEGIN_STMT
  Fls_eJobResult = 2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_10 ();

  <bb 12> [local count: 1073741824]:
  # RetVal_7 = PHI <1(3), 1(5), 1(8), 1(10), 0(11)>
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Fls_Write (Fls_Write, funcdef_no=19, decl_uid=8470, cgraph_uid=21, symbol_order=34)

Modification phase of node Fls_Write/34
Fls_Write (Fls_AddressType TargetAddress, const uint8 * SourceAddressPtr, Fls_LengthType Length)
{
  Fls_AddressType TmpJobAddrEnd;
  Fls_SectorIndexType TmpJobSectorIt;
  Std_ReturnType RetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.18_1;
  unsigned char _2;
  long unsigned int _3;
  unsigned char _4;
  unsigned char Fls_eJobResult.19_5;
  long unsigned int _6;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.18_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.18_1 == 0B)
    goto <bb 3>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 3> [local count: 322122547]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 2, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 14>; [100.00%]

  <bb 4> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _2 = Fls_IsAddrPageStartAligned (TargetAddress_10(D));
  if (_2 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 2, 2);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 14>; [100.00%]

  <bb 6> [local count: 503584915]:
  # DEBUG BEGIN_STMT
  if (Length_11(D) == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 7> [local count: 251792457]:
  _3 = TargetAddress_10(D) + Length_11(D);
  _4 = Fls_IsAddrPageEndAligned (_3);
  if (_4 == 0)
    goto <bb 8>; [50.00%]
  else
    goto <bb 9>; [50.00%]

  <bb 8> [local count: 377688687]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 2, 3);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 14>; [100.00%]

  <bb 9> [local count: 125896229]:
  # DEBUG BEGIN_STMT
  if (SourceAddressPtr_12(D) == 0B)
    goto <bb 10>; [30.00%]
  else
    goto <bb 11>; [70.00%]

  <bb 10> [local count: 37768869]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 2, 4);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 14>; [100.00%]

  <bb 11> [local count: 88127360]:
  # DEBUG BEGIN_STMT
  TmpJobSectorIt_13 = Fls_GetSectorIndexByAddr (TargetAddress_10(D));
  # DEBUG TmpJobSectorIt => TmpJobSectorIt_13
  # DEBUG BEGIN_STMT
  TmpJobAddrEnd_14 = _3 + 4294967295;
  # DEBUG TmpJobAddrEnd => TmpJobAddrEnd_14
  # DEBUG BEGIN_STMT
  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_11 ();
  # DEBUG BEGIN_STMT
  Fls_eJobResult.19_5 = Fls_eJobResult;
  if (Fls_eJobResult.19_5 == 2)
    goto <bb 12>; [34.00%]
  else
    goto <bb 13>; [66.00%]

  <bb 12> [local count: 29963302]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 2, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11 ();
  goto <bb 14>; [100.00%]

  <bb 13> [local count: 58164058]:
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorIt ={v} TmpJobSectorIt_13;
  # DEBUG BEGIN_STMT
  _6 = Fls_GetSectorIndexByAddr (TmpJobAddrEnd_14);
  Fls_u32JobSectorEnd = _6;
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrEnd = TmpJobAddrEnd_14;
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt = TargetAddress_10(D);
  # DEBUG BEGIN_STMT
  Fls_pJobDataSrcPtr = SourceAddressPtr_12(D);
  # DEBUG BEGIN_STMT
  Fls_eJob = 1;
  # DEBUG BEGIN_STMT
  Fls_u8JobStart = 1;
  # DEBUG BEGIN_STMT
  Fls_eJobResult = 2;
  # DEBUG BEGIN_STMT
  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_11 ();

  <bb 14> [local count: 1073741824]:
  # RetVal_7 = PHI <1(3), 1(5), 1(8), 1(10), 1(12), 0(13)>
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function Fls_GetStatus (Fls_GetStatus, funcdef_no=20, decl_uid=8475, cgraph_uid=22, symbol_order=35)

Modification phase of node Fls_GetStatus/35
Fls_GetStatus ()
{
  MemIf_StatusType RetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.26_1;
  unsigned char Fls_eJobResult.27_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.26_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.26_1 == 0B)
    goto <bb 5>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  Fls_eJobResult.27_2 = Fls_eJobResult;
  if (Fls_eJobResult.27_2 == 2)
    goto <bb 5>; [21.72%]
  else
    goto <bb 4>; [78.28%]

  <bb 4> [local count: 588367571]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1

  <bb 5> [local count: 1073741824]:
  # RetVal_3 = PHI <0(2), 2(3), 1(4)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function Fls_GetJobResult (Fls_GetJobResult, funcdef_no=21, decl_uid=8477, cgraph_uid=23, symbol_order=36)

Modification phase of node Fls_GetJobResult/36
Fls_GetJobResult ()
{
  MemIf_JobResultType RetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.28_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.28_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.28_1 == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 5, 5);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  RetVal_5 = Fls_eJobResult;
  # DEBUG RetVal => RetVal_5

  <bb 5> [local count: 1073741824]:
  # RetVal_2 = PHI <1(3), RetVal_5(4)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function Fls_Read (Fls_Read, funcdef_no=22, decl_uid=8481, cgraph_uid=24, symbol_order=37)

Modification phase of node Fls_Read/37
Fls_Read (Fls_AddressType SourceAddress, uint8 * TargetAddressPtr, Fls_LengthType Length)
{
  Fls_AddressType TmpJobAddrEnd;
  Fls_SectorIndexType TmpJobSectorIt;
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char Fls_eJobResult.29_2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG TmpJobSectorIt => 0
  # DEBUG BEGIN_STMT
  # DEBUG TmpJobAddrEnd => 0
  # DEBUG BEGIN_STMT
  RetVal_13 = Fls_CheckInputParamReadCompareJob (SourceAddress_9(D), TargetAddressPtr_10(D), Length_11(D), 7);
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  if (RetVal_13 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  TmpJobSectorIt_14 = Fls_GetSectorIndexByAddr (SourceAddress_9(D));
  # DEBUG TmpJobSectorIt => TmpJobSectorIt_14
  # DEBUG BEGIN_STMT
  _1 = SourceAddress_9(D) + Length_11(D);
  TmpJobAddrEnd_15 = _1 + 4294967295;
  # DEBUG TmpJobAddrEnd => TmpJobAddrEnd_15
  # DEBUG BEGIN_STMT
  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_12 ();
  # DEBUG BEGIN_STMT
  Fls_eJobResult.29_2 = Fls_eJobResult;
  if (Fls_eJobResult.29_2 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 7, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorIt ={v} TmpJobSectorIt_14;
  # DEBUG BEGIN_STMT
  _3 = Fls_GetSectorIndexByAddr (TmpJobAddrEnd_15);
  Fls_u32JobSectorEnd = _3;
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt = SourceAddress_9(D);
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrEnd = TmpJobAddrEnd_15;
  # DEBUG BEGIN_STMT
  Fls_pJobDataDestPtr = TargetAddressPtr_10(D);
  # DEBUG BEGIN_STMT
  Fls_eJob = 2;
  # DEBUG BEGIN_STMT
  Fls_u8JobStart = 1;
  # DEBUG BEGIN_STMT
  Fls_eJobResult = 2;

  <bb 6> [local count: 354334802]:
  # RetVal_4 = PHI <1(4), 0(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_12 ();

  <bb 7> [local count: 1073741824]:
  # RetVal_5 = PHI <RetVal_13(2), RetVal_4(6)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Fls_Compare (Fls_Compare, funcdef_no=23, decl_uid=8485, cgraph_uid=25, symbol_order=38)

Modification phase of node Fls_Compare/38
Fls_Compare (Fls_AddressType SourceAddress, const uint8 * TargetAddressPtr, Fls_LengthType Length)
{
  Fls_AddressType TmpJobAddrEnd;
  Fls_SectorIndexType TmpJobSectorIt;
  Std_ReturnType RetVal;
  long unsigned int _1;
  unsigned char Fls_eJobResult.35_2;
  long unsigned int _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RetVal_13 = Fls_CheckInputParamReadCompareJob (SourceAddress_9(D), TargetAddressPtr_10(D), Length_11(D), 8);
  # DEBUG RetVal => RetVal_13
  # DEBUG BEGIN_STMT
  if (RetVal_13 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  TmpJobSectorIt_14 = Fls_GetSectorIndexByAddr (SourceAddress_9(D));
  # DEBUG TmpJobSectorIt => TmpJobSectorIt_14
  # DEBUG BEGIN_STMT
  _1 = SourceAddress_9(D) + Length_11(D);
  TmpJobAddrEnd_15 = _1 + 4294967295;
  # DEBUG TmpJobAddrEnd => TmpJobAddrEnd_15
  # DEBUG BEGIN_STMT
  SchM_Enter_Fls_FLS_EXCLUSIVE_AREA_13 ();
  # DEBUG BEGIN_STMT
  Fls_eJobResult.35_2 = Fls_eJobResult;
  if (Fls_eJobResult.35_2 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 8, 6);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  Fls_u32JobSectorIt ={v} TmpJobSectorIt_14;
  # DEBUG BEGIN_STMT
  _3 = Fls_GetSectorIndexByAddr (TmpJobAddrEnd_15);
  Fls_u32JobSectorEnd = _3;
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrIt = SourceAddress_9(D);
  # DEBUG BEGIN_STMT
  Fls_u32JobAddrEnd = TmpJobAddrEnd_15;
  # DEBUG BEGIN_STMT
  Fls_pJobDataSrcPtr = TargetAddressPtr_10(D);
  # DEBUG BEGIN_STMT
  Fls_eJob = 3;
  # DEBUG BEGIN_STMT
  Fls_u8JobStart = 1;
  # DEBUG BEGIN_STMT
  Fls_eJobResult = 2;

  <bb 6> [local count: 354334802]:
  # RetVal_4 = PHI <1(4), 0(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  SchM_Exit_Fls_FLS_EXCLUSIVE_AREA_13 ();

  <bb 7> [local count: 1073741824]:
  # RetVal_5 = PHI <RetVal_13(2), RetVal_4(6)>
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Fls_SetMode (Fls_SetMode, funcdef_no=24, decl_uid=8487, cgraph_uid=26, symbol_order=39)

Modification phase of node Fls_SetMode/39
Fls_SetMode (MemIf_ModeType Mode)
{
  const struct Fls_ConfigType * Fls_pConfigPtr.36_1;
  unsigned char Fls_eJobResult.37_2;
  long unsigned int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.36_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.36_1 == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 9, 5);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  Fls_eJobResult.37_2 = Fls_eJobResult;
  if (Fls_eJobResult.37_2 == 2)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 179445538]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 9, 6);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 707143088]:
  # DEBUG BEGIN_STMT
  switch (Mode_9(D)) <default: <L10> [33.33%], case 0: <L5> [33.33%], case 1: <L4> [33.33%]>

  <bb 7> [local count: 235690791]:
<L4>:
  # DEBUG BEGIN_STMT
  _3 = Fls_pConfigPtr.36_1->u32MaxReadFastMode;
  Fls_u32MaxRead = _3;
  # DEBUG BEGIN_STMT
  _4 = Fls_pConfigPtr.36_1->u32MaxWriteFastMode;
  Fls_u32MaxWrite = _4;
  # DEBUG BEGIN_STMT
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 235690791]:
<L5>:
  # DEBUG BEGIN_STMT
  _5 = Fls_pConfigPtr.36_1->u32MaxReadNormalMode;
  Fls_u32MaxRead = _5;
  # DEBUG BEGIN_STMT
  _6 = Fls_pConfigPtr.36_1->u32MaxWriteNormalMode;
  Fls_u32MaxWrite = _6;
  # DEBUG BEGIN_STMT

  <bb 9> [local count: 1073671112]:
<L10>:
  return;

}



;; Function Fls_GetVersionInfo (Fls_GetVersionInfo, funcdef_no=25, decl_uid=8489, cgraph_uid=27, symbol_order=40)

Modification phase of node Fls_GetVersionInfo/40
Fls_GetVersionInfo (struct Std_VersionInfoType * VersionInfoPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (VersionInfoPtr_2(D) == 0B)
    goto <bb 3>; [17.43%]
  else
    goto <bb 4>; [82.57%]

  <bb 3> [local count: 187153200]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (92, 0, 16, 10);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 886588625]:
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->moduleID = 92;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->vendorID = 43;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_major_version = 2;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_minor_version = 0;
  # DEBUG BEGIN_STMT
  VersionInfoPtr_2(D)->sw_patch_version = 1;

  <bb 5> [local count: 1073741824]:
  return;

}



;; Function Fls_MainFunction (Fls_MainFunction, funcdef_no=27, decl_uid=8889, cgraph_uid=29, symbol_order=42)

Modification phase of node Fls_MainFunction/42
Fls_MainFunction ()
{
  MemIf_JobResultType WorkResult;
  const struct Fls_ConfigType * Fls_pConfigPtr.42_1;
  unsigned char Fls_eJobResult.43_2;
  unsigned char Fls_u8JobStart.44_3;
  <unnamed type> Fls_eLLDJob.45_4;
  unsigned char _18;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.42_1 = Fls_pConfigPtr;
  if (Fls_pConfigPtr.42_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 11>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  Fls_eJobResult.43_2 = Fls_eJobResult;
  if (Fls_eJobResult.43_2 == 2)
    goto <bb 4>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 4> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  # DEBUG WorkResult => 0
  # DEBUG BEGIN_STMT
  Fls_u8JobStart.44_3 = Fls_u8JobStart;
  if (Fls_u8JobStart.44_3 == 1)
    goto <bb 5>; [20.24%]
  else
    goto <bb 6>; [79.76%]

  <bb 5> [local count: 51723432]:
  # DEBUG BEGIN_STMT
  Fls_u8JobStart = 0;
  # DEBUG BEGIN_STMT
  Fls_LLDClrJobResult ();
  # DEBUG BEGIN_STMT
  Fls_IPW_AbortSuspended ();

  <bb 6> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  Fls_eLLDJob.45_4 = Fls_eLLDJob;
  if (Fls_eLLDJob.45_4 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 84331683]:
  # DEBUG BEGIN_STMT
  Fls_IPW_LLDMainFunction ();

  <bb 8> [local count: 255550554]:
  # DEBUG BEGIN_STMT
  # DEBUG INLINE_ENTRY Fls_LLDGetJobResult
  # DEBUG BEGIN_STMT
  _18 ={v} Fls_eLLDJobResult;
  # DEBUG WorkResult => _18
  # DEBUG BEGIN_STMT
  if (_18 == 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 84331683]:
  # DEBUG BEGIN_STMT
  WorkResult_16 = Fls_ProcessRequestedJobs ();
  # DEBUG WorkResult => WorkResult_16

  <bb 10> [local count: 255550554]:
  # WorkResult_5 = PHI <_18(8), WorkResult_16(9)>
  # DEBUG WorkResult => WorkResult_5
  # DEBUG BEGIN_STMT
  Fls_MainFunction_CheckJobResult (WorkResult_5);

  <bb 11> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


