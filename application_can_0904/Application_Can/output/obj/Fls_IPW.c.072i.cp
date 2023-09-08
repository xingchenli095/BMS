
IPA constant propagation start:
Determining dynamic type for call: LldRetVal_13 = Fls_IPW_SectorWriteC40Jobs (SectorOffset_8(D), Length_9(D), JobDataSrcPtr_10(D), Asynch_11(D));
  Starting walk at: LldRetVal_13 = Fls_IPW_SectorWriteC40Jobs (SectorOffset_8(D), Length_9(D), JobDataSrcPtr_10(D), Asynch_11(D));
  instance pointer: JobDataSrcPtr_10(D)  Outer instance pointer: JobDataSrcPtr_10(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Fls_IPW_TranslateReturnCode.part.0/36:
  Jump functions of caller  C40_Ip_MainInterfaceWrite/35:
  Jump functions of caller  C40_Ip_MainInterfaceSectorErase/34:
  Jump functions of caller  C40_Ip_SetAsyncMode/33:
  Jump functions of caller  C40_Ip_ClearLock/32:
  Jump functions of caller  C40_Ip_GetSectorNumberFromAddress/31:
  Jump functions of caller  C40_Ip_Compare/30:
  Jump functions of caller  C40_Ip_Read/29:
  Jump functions of caller  Det_ASR43_ReportRuntimeError/26:
  Jump functions of caller  Det_ASR43_ReportTransientFault/25:
  Jump functions of caller  C40_Ip_SetLock/24:
  Jump functions of caller  C40_Ip_MainInterfaceWriteStatus/23:
  Jump functions of caller  C40_Ip_MainInterfaceSectorEraseStatus/22:
  Jump functions of caller  C40_Ip_Init/19:
  Jump functions of caller  Fls_IPW_TranslateReturnCode/16:
    callsite  Fls_IPW_TranslateReturnCode/16 -> Fls_IPW_TranslateReturnCode.part.0/36 : 
  Jump functions of caller  Fls_IPW_CallAccessCodeErase/15:
  Jump functions of caller  Fls_IPW_CallAccessCodeWrite/14:
  Jump functions of caller  Fls_IPW_SectorWriteC40Jobs/13:
    callsite  Fls_IPW_SectorWriteC40Jobs/13 -> Fls_IPW_TranslateReturnCode/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IPW_SectorWriteC40Jobs/13 -> Fls_IPW_TranslateReturnCode/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IPW_SectorWriteC40Jobs/13 -> Fls_IPW_CallAccessCodeWrite/14 : 
  Jump functions of caller  Fls_IPW_SectorEraseC40Jobs/12:
    callsite  Fls_IPW_SectorEraseC40Jobs/12 -> Fls_IPW_TranslateReturnCode/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IPW_SectorEraseC40Jobs/12 -> Fls_IPW_TranslateReturnCode/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IPW_SectorEraseC40Jobs/12 -> Fls_IPW_CallAccessCodeErase/15 : 
  Jump functions of caller  Fls_IPW_LLDMainFunctionC40Jobs/11:
    callsite  Fls_IPW_LLDMainFunctionC40Jobs/11 -> Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  Fls_IPW_LLDMainFunctionC40Jobs/11 -> Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10:
  Jump functions of caller  Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9:
  Jump functions of caller  Fls_IPW_SectorWrite/8:
    callsite  Fls_IPW_SectorWrite/8 -> Fls_IPW_SectorWriteC40Jobs/13 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 3: PASS THROUGH: 3, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Fls_IPW_SectorErase/7:
    callsite  Fls_IPW_SectorErase/7 -> Fls_IPW_SectorEraseC40Jobs/12 : 
       param 0: PASS THROUGH: 2, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
       param 1: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IPW_SectorRead/6:
    callsite  Fls_IPW_SectorRead/6 -> Fls_IPW_TranslateReturnCode/16 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Fls_IPW_LLDMainFunction/5:
    callsite  Fls_IPW_LLDMainFunction/5 -> Fls_IPW_LLDMainFunctionC40Jobs/11 : 
  Jump functions of caller  Fls_IPW_ClearHVJob/4:
  Jump functions of caller  Fls_IPW_AbortSuspended/3:
  Jump functions of caller  Fls_IPW_Init/2:
  Jump functions of caller  C40_Ip_AccessCode/0:

 Propagating constants:

Not considering Fls_IPW_SectorWrite for cloning; -fipa-cp-clone disabled.
Not considering Fls_IPW_SectorErase for cloning; -fipa-cp-clone disabled.
Not considering Fls_IPW_SectorRead for cloning; -fipa-cp-clone disabled.
Not considering Fls_IPW_LLDMainFunction for cloning; -fipa-cp-clone disabled.
Function Fls_IPW_ClearHVJob/4 is not versionable, reason: not a tree_versionable_function.
Not considering Fls_IPW_AbortSuspended for cloning; -fipa-cp-clone disabled.
Not considering Fls_IPW_Init for cloning; -fipa-cp-clone disabled.

overall_size: 365, max_new_size: 11001
 - context independent values, size: 13, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Fls_IPW_TranslateReturnCode.part.0/36:
  Node: Fls_IPW_TranslateReturnCode/16:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IPW_CallAccessCodeWrite/14:
  Node: Fls_IPW_SectorWriteC40Jobs/13:
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
  Node: Fls_IPW_SectorEraseC40Jobs/12:
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
  Node: Fls_IPW_LLDMainFunctionC40Jobs/11:
  Node: Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: Fls_IPW_SectorWrite/8:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fls_IPW_SectorErase/7:
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
  Node: Fls_IPW_SectorRead/6:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Fls_IPW_LLDMainFunction/5:
  Node: Fls_IPW_ClearHVJob/4:
  Node: Fls_IPW_AbortSuspended/3:
  Node: Fls_IPW_Init/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Fls_IPW_TranslateReturnCode.part.0/36 (Fls_IPW_TranslateReturnCode.part.0) @06f3fe00
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: Fls_IPW_TranslateReturnCode/16 (214748368 (estimated locally),0.20 per call) 
  Calls: Det_ASR43_ReportRuntimeError/26 (1073741824 (estimated locally),1.00 per call) 
C40_Ip_MainInterfaceWrite/35 (C40_Ip_MainInterfaceWrite) @06ed80e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (217325345 (estimated locally),0.20 per call) 
  Calls: 
C40_Ip_MainInterfaceSectorErase/34 (C40_Ip_MainInterfaceSectorErase) @06ed8b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorEraseC40Jobs/12 (217325345 (estimated locally),0.20 per call) 
  Calls: 
C40_Ip_SetAsyncMode/33 (C40_Ip_SetAsyncMode) @06ed8a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (217325345 (estimated locally),0.20 per call) Fls_IPW_SectorEraseC40Jobs/12 (217325345 (estimated locally),0.20 per call) 
  Calls: 
C40_Ip_ClearLock/32 (C40_Ip_ClearLock) @06ed89a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (1073741823 (estimated locally),1.00 per call) Fls_IPW_SectorEraseC40Jobs/12 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_GetSectorNumberFromAddress/31 (C40_Ip_GetSectorNumberFromAddress) @06ed88c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (1073741823 (estimated locally),1.00 per call) Fls_IPW_SectorEraseC40Jobs/12 (1073741823 (estimated locally),1.00 per call) 
  Calls: 
C40_Ip_Compare/30 (C40_Ip_Compare) @06ed8540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorRead/6 (161061274 (estimated locally),0.15 per call) 
  Calls: 
C40_Ip_Read/29 (C40_Ip_Read) @06ed8460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorRead/6 (375809639 (estimated locally),0.35 per call) 
  Calls: 
Fls_u32JobAddrEnd/28 (Fls_u32JobAddrEnd) @06ed7ab0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (read)Fls_IPW_SectorWriteC40Jobs/13 (read)
  Availability: not_available
  Varpool flags:
Fls_u32JobAddrIt/27 (Fls_u32JobAddrIt) @06ed75a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (read)Fls_IPW_SectorWriteC40Jobs/13 (read)
  Availability: not_available
  Varpool flags:
Det_ASR43_ReportRuntimeError/26 (Det_ASR43_ReportRuntimeError) @06ed8000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_TranslateReturnCode/16 (214748364 (estimated locally),0.20 per call) Fls_IPW_TranslateReturnCode.part.0/36 (1073741824 (estimated locally),1.00 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (23487150 (estimated locally),0.02 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (26543832 (estimated locally),0.02 per call) 
  Calls: 
Det_ASR43_ReportTransientFault/25 (Det_ASR43_ReportTransientFault) @06ed0ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (116043230 (estimated locally),0.11 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (117757206 (estimated locally),0.11 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (230354472 (estimated locally),0.21 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (131145414 (estimated locally),0.12 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (256544238 (estimated locally),0.24 per call) 
  Calls: 
C40_Ip_SetLock/24 (C40_Ip_SetLock) @06ed0e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (80115099 (estimated locally),0.07 per call) Fls_IPW_SectorEraseC40Jobs/12 (120473832 (estimated locally),0.11 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (471265287 (estimated locally),0.44 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (524845004 (estimated locally),0.49 per call) 
  Calls: 
C40_Ip_MainInterfaceWriteStatus/23 (C40_Ip_MainInterfaceWriteStatus) @06ed0c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (120473832 (estimated locally),0.11 per call) Fls_IPW_LLDMainFunctionC40Jobs/11 (173338695 (estimated locally),0.16 per call) 
  Calls: 
C40_Ip_MainInterfaceSectorEraseStatus/22 (C40_Ip_MainInterfaceSectorEraseStatus) @06ed0b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_SectorEraseC40Jobs/12 (120473832 (estimated locally),0.11 per call) Fls_IPW_LLDMainFunctionC40Jobs/11 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Fls_u32JobSectorIt/21 (Fls_u32JobSectorIt) @06eb1c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_IPW_SectorEraseC40Jobs/12 (read)Fls_IPW_SectorRead/6 (read)Fls_IPW_SectorWriteC40Jobs/13 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (read)Fls_IPW_SectorErase/7 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (read)Fls_IPW_SectorWriteC40Jobs/13 (read)Fls_IPW_LLDMainFunction/5 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (read)Fls_IPW_SectorRead/6 (read)Fls_IPW_SectorWrite/8 (read)
  Availability: not_available
  Varpool flags:
Fls_eLLDJob/20 (Fls_eLLDJob) @06eb17e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_LLDMainFunctionC40Jobs/11 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (write)Fls_IPW_SectorWriteC40Jobs/13 (write)Fls_IPW_Init/2 (write)
  Availability: not_available
  Varpool flags:
C40_Ip_Init/19 (C40_Ip_Init) @06ed0620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_Init/2 (354334802 (estimated locally),0.33 per call) 
  Calls: 
Fls_pConfigPtr/18 (Fls_pConfigPtr) @06eb1750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_IPW_SectorEraseC40Jobs/12 (read)Fls_IPW_SectorWriteC40Jobs/13 (read)Fls_IPW_CallAccessCodeWrite/14 (read)Fls_IPW_SectorWrite/8 (read)Fls_IPW_SectorWriteC40Jobs/13 (read)Fls_IPW_Init/2 (read)Fls_IPW_LLDMainFunction/5 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (read)Fls_IPW_SectorErase/7 (read)Fls_IPW_SectorRead/6 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (read)
  Availability: not_available
  Varpool flags:
Fls_eLLDJobResult/17 (Fls_eLLDJobResult) @06eb1708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_SectorWriteC40Jobs/13 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (write)Fls_IPW_SectorWriteC40Jobs/13 (write)Fls_IPW_SectorWriteC40Jobs/13 (write)Fls_IPW_Init/2 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (write)Fls_IPW_SectorWriteC40Jobs/13 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (write)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (write)Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_Init/2 (write)Fls_IPW_Init/2 (read)Fls_IPW_Init/2 (write)Fls_IPW_LLDMainFunction/5 (read)
  Availability: not_available
  Varpool flags:
Fls_IPW_TranslateReturnCode/16 (Fls_IPW_TranslateReturnCode) @06ed0460
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fls_IPW_SectorRead/6 (536870913 (estimated locally),0.50 per call) Fls_IPW_SectorWriteC40Jobs/13 (609805535 (estimated locally),0.57 per call) Fls_IPW_SectorWriteC40Jobs/13 (58887609 (estimated locally),0.05 per call) Fls_IPW_SectorEraseC40Jobs/12 (609805535 (estimated locally),0.57 per call) Fls_IPW_SectorEraseC40Jobs/12 (58887609 (estimated locally),0.05 per call) 
  Calls: Det_ASR43_ReportRuntimeError/26 (214748364 (estimated locally),0.20 per call) Fls_IPW_TranslateReturnCode.part.0/36 (214748368 (estimated locally),0.20 per call) 
Fls_IPW_CallAccessCodeErase/15 (Fls_IPW_CallAccessCodeErase) @06ed02a0
  Type: function definition analyzed alias
  Visibility: prevailing_def_ironly
  References: Fls_IPW_CallAccessCodeWrite/14 (alias)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: Fls_IPW_SectorEraseC40Jobs/12 (120473832 (estimated locally),0.11 per call) 
  Calls: 
Fls_IPW_CallAccessCodeWrite/14 (Fls_IPW_CallAccessCodeWrite) @06ed00e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/18 (read)
  Referring: Fls_IPW_CallAccessCodeErase/15 (alias)
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local icf_merged optimize_size
  Called by: Fls_IPW_SectorWriteC40Jobs/13 (120473832 (estimated locally),0.11 per call) 
  Calls: C40_Ip_AccessCode/0 (1073741824 (estimated locally),1.00 per call) 
Fls_IPW_SectorWriteC40Jobs/13 (Fls_IPW_SectorWriteC40Jobs) @06eb6ee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_Ipw_xVirtualSectorInUse/1 (write)Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_u32JobAddrIt/27 (read)Fls_u32JobAddrEnd/28 (read)Fls_Ipw_xVirtualSectorInUse/1 (read)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJob/20 (write)Fls_eLLDJobResult/17 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fls_IPW_SectorWrite/8 (354334802 (estimated locally),0.33 per call) 
  Calls: Fls_IPW_TranslateReturnCode/16 (609805535 (estimated locally),0.57 per call) Fls_IPW_TranslateReturnCode/16 (58887609 (estimated locally),0.05 per call) C40_Ip_SetLock/24 (80115099 (estimated locally),0.07 per call) C40_Ip_MainInterfaceWriteStatus/23 (120473832 (estimated locally),0.11 per call) Fls_IPW_CallAccessCodeWrite/14 (120473832 (estimated locally),0.11 per call) C40_Ip_MainInterfaceWrite/35 (217325345 (estimated locally),0.20 per call) C40_Ip_SetAsyncMode/33 (217325345 (estimated locally),0.20 per call) C40_Ip_ClearLock/32 (1073741823 (estimated locally),1.00 per call) C40_Ip_GetSectorNumberFromAddress/31 (1073741823 (estimated locally),1.00 per call) 
Fls_IPW_SectorEraseC40Jobs/12 (Fls_IPW_SectorEraseC40Jobs) @06eb6d20
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_Ipw_xVirtualSectorInUse/1 (write)Fls_Ipw_xVirtualSectorInUse/1 (read)Fls_eLLDJobResult/17 (write)Fls_Ipw_xVirtualSectorInUse/1 (read)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJob/20 (write)Fls_eLLDJobResult/17 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741823 (estimated locally) body local optimize_size
  Called by: Fls_IPW_SectorErase/7 (354334802 (estimated locally),0.33 per call) 
  Calls: Fls_IPW_TranslateReturnCode/16 (609805535 (estimated locally),0.57 per call) Fls_IPW_TranslateReturnCode/16 (58887609 (estimated locally),0.05 per call) C40_Ip_SetLock/24 (120473832 (estimated locally),0.11 per call) C40_Ip_MainInterfaceSectorEraseStatus/22 (120473832 (estimated locally),0.11 per call) Fls_IPW_CallAccessCodeErase/15 (120473832 (estimated locally),0.11 per call) C40_Ip_MainInterfaceSectorErase/34 (217325345 (estimated locally),0.20 per call) C40_Ip_SetAsyncMode/33 (217325345 (estimated locally),0.20 per call) C40_Ip_ClearLock/32 (1073741823 (estimated locally),1.00 per call) C40_Ip_GetSectorNumberFromAddress/31 (1073741823 (estimated locally),1.00 per call) 
Fls_IPW_LLDMainFunctionC40Jobs/11 (Fls_IPW_LLDMainFunctionC40Jobs) @06eb6b60
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_eLLDJob/20 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_IPW_LLDMainFunction/5 (120473832 (estimated locally),0.11 per call) 
  Calls: Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (173338695 (estimated locally),0.16 per call) C40_Ip_MainInterfaceWriteStatus/23 (173338695 (estimated locally),0.16 per call) Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (217325345 (estimated locally),0.20 per call) C40_Ip_MainInterfaceSectorEraseStatus/22 (217325345 (estimated locally),0.20 per call) 
Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus) @06eb69a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_u32JobAddrIt/27 (read)Fls_u32JobAddrEnd/28 (read)Fls_Ipw_xVirtualSectorInUse/1 (read)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_IPW_LLDMainFunctionC40Jobs/11 (173338695 (estimated locally),0.16 per call) 
  Calls: Det_ASR43_ReportRuntimeError/26 (23487150 (estimated locally),0.02 per call) Det_ASR43_ReportTransientFault/25 (116043230 (estimated locally),0.11 per call) Det_ASR43_ReportTransientFault/25 (117757206 (estimated locally),0.11 per call) Det_ASR43_ReportTransientFault/25 (230354472 (estimated locally),0.21 per call) C40_Ip_SetLock/24 (471265287 (estimated locally),0.44 per call) 
Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus) @06eb67e0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Fls_Ipw_xVirtualSectorInUse/1 (read)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJob/20 (write)Fls_eLLDJobResult/17 (write)Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_u32JobAddrIt/27 (read)Fls_u32JobSectorIt/21 (read)Fls_u32JobSectorIt/21 (write)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Fls_IPW_LLDMainFunctionC40Jobs/11 (217325345 (estimated locally),0.20 per call) 
  Calls: Det_ASR43_ReportRuntimeError/26 (26543832 (estimated locally),0.02 per call) Det_ASR43_ReportTransientFault/25 (131145414 (estimated locally),0.12 per call) Det_ASR43_ReportTransientFault/25 (256544238 (estimated locally),0.24 per call) C40_Ip_SetLock/24 (524845004 (estimated locally),0.49 per call) 
Fls_IPW_SectorWrite/8 (Fls_IPW_SectorWrite) @06eb6620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_IPW_SectorWriteC40Jobs/13 (354334802 (estimated locally),0.33 per call) 
Fls_IPW_SectorErase/7 (Fls_IPW_SectorErase) @06eb6460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_IPW_SectorEraseC40Jobs/12 (354334802 (estimated locally),0.33 per call) 
Fls_IPW_SectorRead/6 (Fls_IPW_SectorRead) @06eb62a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_u32JobSectorIt/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_IPW_TranslateReturnCode/16 (536870913 (estimated locally),0.50 per call) C40_Ip_Compare/30 (161061274 (estimated locally),0.15 per call) C40_Ip_Read/29 (375809639 (estimated locally),0.35 per call) 
Fls_IPW_LLDMainFunction/5 (Fls_IPW_LLDMainFunction) @06eb60e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_pConfigPtr/18 (read)Fls_u32JobSectorIt/21 (read)Fls_eLLDJobResult/17 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Fls_IPW_LLDMainFunctionC40Jobs/11 (120473832 (estimated locally),0.11 per call) 
Fls_IPW_ClearHVJob/4 (Fls_IPW_ClearHVJob) @06e8a7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: Fls_IPW_AbortSuspended/3 (1073741824 (estimated locally),1.00 per call) 
Fls_IPW_AbortSuspended/3 (Fls_IPW_AbortSuspended) @06e8ae00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: Fls_IPW_ClearHVJob/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Fls_IPW_Init/2 (Fls_IPW_Init) @06e8ac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (read)Fls_pConfigPtr/18 (read)Fls_eLLDJobResult/17 (write)Fls_eLLDJobResult/17 (write)Fls_eLLDJob/20 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: C40_Ip_Init/19 (354334802 (estimated locally),0.33 per call) 
Fls_Ipw_xVirtualSectorInUse/1 (Fls_Ipw_xVirtualSectorInUse) @06eb1000
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Fls_IPW_LLDMainFunctionC40Jobs_CheckWriteStatus/10 (read)Fls_IPW_SectorEraseC40Jobs/12 (read)Fls_IPW_LLDMainFunctionC40Jobs_CheckEraseStatus/9 (read)Fls_IPW_SectorEraseC40Jobs/12 (write)Fls_IPW_SectorEraseC40Jobs/12 (read)Fls_IPW_SectorWriteC40Jobs/13 (write)Fls_IPW_SectorWriteC40Jobs/13 (read)
  Availability: available
  Varpool flags: initialized
C40_Ip_AccessCode/0 (C40_Ip_AccessCode) @06e38700
  Type: function
  Visibility: external public section:.acfls_code_rom
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Fls_IPW_CallAccessCodeWrite/14 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function Fls_IPW_TranslateReturnCode (Fls_IPW_TranslateReturnCode, funcdef_no=14, decl_uid=8635, cgraph_uid=16, symbol_order=16)

Modification phase of node Fls_IPW_TranslateReturnCode/16
Fls_IPW_TranslateReturnCode (C40_Ip_StatusType ReturnCode)
{
  Fls_LLDReturnType LldRetVal;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  switch (ReturnCode_2(D)) <default: <L4> [20.00%], case 11892: <L2> [20.00%], case 13260: <L3> [20.00%], case 23205: <L7> [20.00%], case 59202: <L1> [20.00%]>

  <bb 3> [local count: 214748364]:
<L1>:
  # DEBUG BEGIN_STMT
  # DEBUG LldRetVal => 3
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 214748368]:
<L2>:
  # DEBUG D#1 => ReturnCode_2(D)
  LldRetVal_7 = Fls_IPW_TranslateReturnCode.part.0 ();
  goto <bb 7>; [100.00%]

  <bb 5> [local count: 214748364]:
<L3>:
  # DEBUG BEGIN_STMT
  # DEBUG LldRetVal => 2
  # DEBUG BEGIN_STMT
  Det_ASR43_ReportRuntimeError (92, 0, 6, 8);
  # DEBUG BEGIN_STMT
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 214748364]:
<L4>:
  # DEBUG BEGIN_STMT
  # DEBUG LldRetVal => 1
  # DEBUG BEGIN_STMT

  <bb 7> [local count: 1073741824]:
  # LldRetVal_1 = PHI <0(2), 3(3), LldRetVal_7(4), 2(5), 1(6)>
<L7>:
  # DEBUG LldRetVal => LldRetVal_1
  # DEBUG BEGIN_STMT
  return LldRetVal_1;

}



;; Function Fls_IPW_Init (Fls_IPW_Init, funcdef_no=0, decl_uid=8499, cgraph_uid=2, symbol_order=2)

Modification phase of node Fls_IPW_Init/2
Fls_IPW_Init ()
{
  unsigned char Fls_eLLDJobResult.0_1;
  const struct Fls_ConfigType * Fls_pConfigPtr.1_2;
  const struct Fls_InternalConfigType * _3;
  <unnamed type> _4;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fls_eLLDJobResult ={v} 0;
  # DEBUG BEGIN_STMT
  Fls_eLLDJobResult.0_1 ={v} Fls_eLLDJobResult;
  if (Fls_eLLDJobResult.0_1 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.1_2 = Fls_pConfigPtr;
  _3 = Fls_pConfigPtr.1_2->pFlsInternalCfgConfig;
  _4 = C40_Ip_Init (_3);
  if (_4 == 23205)
    goto <bb 4>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 4> [local count: 120473833]:
  # DEBUG BEGIN_STMT
  Fls_eLLDJobResult ={v} 0;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 233860969]:
  # DEBUG BEGIN_STMT
  Fls_eLLDJobResult ={v} 1;

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Fls_eLLDJob = 0;
  return;

}



;; Function Fls_IPW_AbortSuspended (Fls_IPW_AbortSuspended, funcdef_no=1, decl_uid=8501, cgraph_uid=3, symbol_order=3)

Modification phase of node Fls_IPW_AbortSuspended/3
Fls_IPW_AbortSuspended ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Fls_IPW_ClearHVJob (Fls_IPW_ClearHVJob, funcdef_no=17, decl_uid=8503, cgraph_uid=4, symbol_order=4)

Modification phase of node Fls_IPW_ClearHVJob/4
Fls_IPW_ClearHVJob ()
{
  <bb 2> [local count: 1073741824]:
  Fls_IPW_AbortSuspended (); [tail call]
  return;

}



;; Function Fls_IPW_LLDMainFunction (Fls_IPW_LLDMainFunction, funcdef_no=3, decl_uid=8507, cgraph_uid=5, symbol_order=5)

Modification phase of node Fls_IPW_LLDMainFunction/5
Fls_IPW_LLDMainFunction ()
{
  Fls_HwChType HwCh;
  const struct Fls_ConfigType * Fls_pConfigPtr.2_1;
  const Fls_HwChType[<unknown>] * _2;
  long unsigned int Fls_u32JobSectorIt.3_3;
  unsigned char Fls_eLLDJobResult.4_4;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.2_1 = Fls_pConfigPtr;
  _2 = Fls_pConfigPtr.2_1->paHwCh;
  Fls_u32JobSectorIt.3_3 ={v} Fls_u32JobSectorIt;
  HwCh_7 = *_2[Fls_u32JobSectorIt.3_3];
  # DEBUG HwCh => HwCh_7
  # DEBUG BEGIN_STMT
  Fls_eLLDJobResult.4_4 ={v} Fls_eLLDJobResult;
  if (Fls_eLLDJobResult.4_4 == 2)
    goto <bb 3>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  if (HwCh_7 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 120473832]:
  # DEBUG BEGIN_STMT
  Fls_IPW_LLDMainFunctionC40Jobs ();

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Fls_IPW_SectorRead (Fls_IPW_SectorRead, funcdef_no=4, decl_uid=8512, cgraph_uid=6, symbol_order=6)

Modification phase of node Fls_IPW_SectorRead/6
Fls_IPW_SectorRead (const Fls_AddressType SectorOffset, const Fls_AddressType Length, uint8 * JobDataDestPtr, const uint8 * JobDataSrcPtr)
{
  uint32 ReadStartAddress;
  C40_Ip_StatusType ReturnCode;
  Fls_HwChType HwCh;
  Fls_LLDReturnType LldRetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.19_1;
  const Fls_HwChType[<unknown>] * _2;
  long unsigned int Fls_u32JobSectorIt.20_3;
  const struct Fls_Flash_InternalSectorInfoType * const[<unknown>] * _4;
  long unsigned int Fls_u32JobSectorIt.22_5;
  const struct Fls_Flash_InternalSectorInfoType * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG LldRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ReturnCode => 10212
  # DEBUG BEGIN_STMT
  # DEBUG ReadStartAddress => 0
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.19_1 = Fls_pConfigPtr;
  _2 = Fls_pConfigPtr.19_1->paHwCh;
  Fls_u32JobSectorIt.20_3 ={v} Fls_u32JobSectorIt;
  HwCh_12 = *_2[Fls_u32JobSectorIt.20_3];
  # DEBUG HwCh => HwCh_12
  # DEBUG BEGIN_STMT
  if (HwCh_12 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = Fls_pConfigPtr.19_1->pSectorList;
  Fls_u32JobSectorIt.22_5 ={v} Fls_u32JobSectorIt;
  _6 = *_4[Fls_u32JobSectorIt.22_5];
  ReadStartAddress_13 = _6->pSectorStartAddressPtr;
  # DEBUG ReadStartAddress => ReadStartAddress_13
  # DEBUG BEGIN_STMT
  ReadStartAddress_15 = ReadStartAddress_13 + SectorOffset_14(D);
  # DEBUG ReadStartAddress => ReadStartAddress_15
  # DEBUG BEGIN_STMT
  if (JobDataDestPtr_16(D) != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 4> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  ReturnCode_22 = C40_Ip_Read (ReadStartAddress_15, Length_17(D), JobDataDestPtr_16(D));
  # DEBUG ReturnCode => ReturnCode_22
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 161061274]:
  # DEBUG BEGIN_STMT
  ReturnCode_20 = C40_Ip_Compare (ReadStartAddress_15, Length_17(D), JobDataSrcPtr_18(D));
  # DEBUG ReturnCode => ReturnCode_20

  <bb 6> [local count: 536870913]:
  # ReturnCode_8 = PHI <ReturnCode_22(4), ReturnCode_20(5)>
  # DEBUG ReturnCode => ReturnCode_8
  # DEBUG BEGIN_STMT
  LldRetVal_24 = Fls_IPW_TranslateReturnCode (ReturnCode_8);
  # DEBUG LldRetVal => LldRetVal_24

  <bb 7> [local count: 1073741824]:
  # LldRetVal_7 = PHI <1(2), LldRetVal_24(6)>
  # DEBUG LldRetVal => LldRetVal_7
  # DEBUG BEGIN_STMT
  return LldRetVal_7;

}



;; Function Fls_IPW_SectorErase (Fls_IPW_SectorErase, funcdef_no=5, decl_uid=8516, cgraph_uid=7, symbol_order=7)

Modification phase of node Fls_IPW_SectorErase/7
Fls_IPW_SectorErase (const Fls_AddressType SectorOffset, const Fls_LengthType PhysicalSectorSize, const boolean Asynch)
{
  Fls_HwChType HwCh;
  Fls_LLDReturnType LldRetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.23_1;
  const Fls_HwChType[<unknown>] * _2;
  long unsigned int Fls_u32JobSectorIt.24_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG LldRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.23_1 = Fls_pConfigPtr;
  _2 = Fls_pConfigPtr.23_1->paHwCh;
  Fls_u32JobSectorIt.24_3 ={v} Fls_u32JobSectorIt;
  HwCh_7 = *_2[Fls_u32JobSectorIt.24_3];
  # DEBUG HwCh => HwCh_7
  # DEBUG BEGIN_STMT
  if (HwCh_7 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  LldRetVal_11 = Fls_IPW_SectorEraseC40Jobs (Asynch_8(D), SectorOffset_9(D));
  # DEBUG LldRetVal => LldRetVal_11

  <bb 4> [local count: 1073741824]:
  # LldRetVal_4 = PHI <1(2), LldRetVal_11(3)>
  # DEBUG LldRetVal => LldRetVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return LldRetVal_4;

}



;; Function Fls_IPW_SectorWrite (Fls_IPW_SectorWrite, funcdef_no=6, decl_uid=8521, cgraph_uid=8, symbol_order=8)

Modification phase of node Fls_IPW_SectorWrite/8
Fls_IPW_SectorWrite (const Fls_AddressType SectorOffset, const Fls_AddressType Length, const uint8 * JobDataSrcPtr, const boolean Asynch)
{
  Fls_HwChType HwCh;
  Fls_LLDReturnType LldRetVal;
  const struct Fls_ConfigType * Fls_pConfigPtr.31_1;
  const Fls_HwChType[<unknown>] * _2;
  long unsigned int Fls_u32JobSectorIt.32_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG LldRetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Fls_pConfigPtr.31_1 = Fls_pConfigPtr;
  _2 = Fls_pConfigPtr.31_1->paHwCh;
  Fls_u32JobSectorIt.32_3 ={v} Fls_u32JobSectorIt;
  HwCh_7 = *_2[Fls_u32JobSectorIt.32_3];
  # DEBUG HwCh => HwCh_7
  # DEBUG BEGIN_STMT
  if (HwCh_7 == 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  LldRetVal_13 = Fls_IPW_SectorWriteC40Jobs (SectorOffset_8(D), Length_9(D), JobDataSrcPtr_10(D), Asynch_11(D));
  # DEBUG LldRetVal => LldRetVal_13

  <bb 4> [local count: 1073741824]:
  # LldRetVal_4 = PHI <1(2), LldRetVal_13(3)>
  # DEBUG LldRetVal => LldRetVal_4
  # DEBUG BEGIN_STMT
  return LldRetVal_4;

}


