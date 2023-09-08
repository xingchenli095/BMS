
IPA constant propagation start:
Determining dynamic type for call: _9 = Dem_UpdatePID01value (EventId_19, _6, _8, &PID01);
  Starting walk at: _9 = Dem_UpdatePID01value (EventId_19, _6, _8, &PID01);
  instance pointer: &PID01  Outer instance pointer: PID01 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:ReadinessGroup_45 = Dem_GbiOBDReadinessGroup (EventId_19);
  Function call may change dynamic type:_3 = Dem_InternalGetIndicatorStatus (0, 1);
  Function call may change dynamic type:ReadinessGroup_45 = Dem_GbiOBDReadinessGroup (EventId_19);
  Function call may change dynamic type:_9 = Dem_UpdatePID01value (EventId_19, _6, _8, &PID01);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dem_GetVisibleCmbDTC/41:
  Jump functions of caller  Dem_SelectEntryOfOBDFreezeFrameEvent/37:
  Jump functions of caller  TS_MemCpy32/34:
  Jump functions of caller  Dem_GetVisibleObdDTC/32:
  Jump functions of caller  Dem_InternalGetIndicatorStatus/31:
  Jump functions of caller  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30:
  Jump functions of caller  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28:
  Jump functions of caller  Dem_GbiOBDReadinessGroup/27:
  Jump functions of caller  Det_ASR40_ReportError/26:
  Jump functions of caller  Dem_UpdatePID01value/24:
  Jump functions of caller  Dem_DcmGetDTRData/23:
  Jump functions of caller  Dem_DcmGetNumTIDsOfOBDMID/22:
  Jump functions of caller  Dem_DcmGetAvailableOBDMIDs/21:
  Jump functions of caller  Dem_DcmGetDTCOfOBDFreezeFrame/20:
  Jump functions of caller  Dem_DcmReadDataOfOBDFreezeFrame/19:
  Jump functions of caller  Dem_DcmReadDataOfPID91/18:
  Jump functions of caller  Dem_DcmReadDataOfPID1C/17:
  Jump functions of caller  Dem_DcmReadDataOfPID4E/16:
  Jump functions of caller  Dem_DcmReadDataOfPID4D/15:
  Jump functions of caller  Dem_DcmReadDataOfPID41/14:
  Jump functions of caller  Dem_DcmReadDataOfPID31/13:
  Jump functions of caller  Dem_DcmReadDataOfPID30/12:
  Jump functions of caller  Dem_DcmReadDataOfPID21/11:
  Jump functions of caller  Dem_DcmReadDataOfPID01/10:
    callsite  Dem_DcmReadDataOfPID01/10 -> Dem_UpdatePID01value/24 : 
       param 0: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [1, 15]
       param 1: UNKNOWN
         value: 0x0, mask: 0xf
         VR  [0, 10]
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: UNKNOWN
         value: 0x0, mask: 0xfffffffc
         VR  ~[0, 0]
  Jump functions of caller  Dem_DcmGetInfoTypeValue0B/9:
  Jump functions of caller  Dem_DcmGetInfoTypeValue08/8:
  Jump functions of caller  Dem_RepIUMPRDenRelease/7:
  Jump functions of caller  Dem_RepIUMPRDenLock/6:
  Jump functions of caller  Dem_RepIUMPRFaultDetect/5:
  Jump functions of caller  Dem_ResetReadiness/4:
  Jump functions of caller  Dem_GetPfcCycleQualified/3:
  Jump functions of caller  Dem_SetPfcCycleQualified/2:
  Jump functions of caller  Dem_SetPtoStatus/1:
  Jump functions of caller  Dem_SetEventDisabled/0:

 Propagating constants:

Not considering Dem_DcmGetDTRData for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmGetNumTIDsOfOBDMID for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmGetAvailableOBDMIDs for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmGetDTCOfOBDFreezeFrame for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfOBDFreezeFrame for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID91 for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID1C for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID4E for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID4D for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID41 for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID31 for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID30 for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID21 for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmReadDataOfPID01 for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmGetInfoTypeValue0B for cloning; -fipa-cp-clone disabled.
Not considering Dem_DcmGetInfoTypeValue08 for cloning; -fipa-cp-clone disabled.
Not considering Dem_RepIUMPRDenRelease for cloning; -fipa-cp-clone disabled.
Not considering Dem_RepIUMPRDenLock for cloning; -fipa-cp-clone disabled.
Not considering Dem_RepIUMPRFaultDetect for cloning; -fipa-cp-clone disabled.
Not considering Dem_ResetReadiness for cloning; -fipa-cp-clone disabled.
Not considering Dem_GetPfcCycleQualified for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetPfcCycleQualified for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetPtoStatus for cloning; -fipa-cp-clone disabled.
Not considering Dem_SetEventDisabled for cloning; -fipa-cp-clone disabled.

overall_size: 698, max_new_size: 11001
 - context independent values, size: 26, time_benefit: 2.000000
 - context independent values, size: 18, time_benefit: 1.000000
 - context independent values, size: 18, time_benefit: 1.000000
 - context independent values, size: 11, time_benefit: 1.000000
 - context independent values, size: 11, time_benefit: 1.000000
 - context independent values, size: 11, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Dem_UpdatePID01value/24:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         const Dem_EventIdType [1, 15]
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xf
         const uint16 [0, 10]
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [3]: VARIABLE
         ctxs: VARIABLE
         Bits: value = 0x0, mask = 0xfffffffc
         uint8 * ~[0B, 0B]
        AGGS VARIABLE
  Node: Dem_DcmGetDTRData/23:
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
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [5]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [6]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmGetNumTIDsOfOBDMID/22:
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
  Node: Dem_DcmGetAvailableOBDMIDs/21:
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
  Node: Dem_DcmGetDTCOfOBDFreezeFrame/20:
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
  Node: Dem_DcmReadDataOfOBDFreezeFrame/19:
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
  Node: Dem_DcmReadDataOfPID91/18:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID1C/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID4E/16:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID4D/15:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID41/14:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID31/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID30/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID21/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmReadDataOfPID01/10:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_DcmGetInfoTypeValue0B/9:
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
  Node: Dem_DcmGetInfoTypeValue08/8:
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
  Node: Dem_RepIUMPRDenRelease/7:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_RepIUMPRDenLock/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_RepIUMPRFaultDetect/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_ResetReadiness/4:
  Node: Dem_GetPfcCycleQualified/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SetPfcCycleQualified/2:
  Node: Dem_SetPtoStatus/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dem_SetEventDisabled/0:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM

IPA decision stage:

Propagated bits info for function Dem_UpdatePID01value/24:
 param 0: value = 0x0, mask = 0xf
 param 1: value = 0x0, mask = 0xf
 param 3: value = 0x0, mask = 0xfffffffc

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dem_GetVisibleCmbDTC/41 (Dem_GetVisibleCmbDTC) @06e47ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmGetDTCOfOBDFreezeFrame/20 (15021023 (estimated locally),0.01 per call) 
  Calls: 
Dem_EventMem/40 (Dem_EventMem) @06e5ea20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmGetDTCOfOBDFreezeFrame/20 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_EntryOBDFF/39 (Dem_EntryOBDFF) @06e5e240
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmReadDataOfOBDFreezeFrame/19 (addr)
  Availability: not_available
  Varpool flags:
Dem_PidClass/38 (Dem_PidClass) @06e5e1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmReadDataOfOBDFreezeFrame/19 (read)Dem_DcmReadDataOfOBDFreezeFrame/19 (read)Dem_DcmReadDataOfOBDFreezeFrame/19 (read)Dem_DcmReadDataOfOBDFreezeFrame/19 (read)Dem_DcmReadDataOfOBDFreezeFrame/19 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_SelectEntryOfOBDFreezeFrameEvent/37 (Dem_SelectEntryOfOBDFreezeFrameEvent) @06e47b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmGetDTCOfOBDFreezeFrame/20 (74214541 (estimated locally),0.07 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (317256873 (estimated locally),0.30 per call) 
  Calls: 
Dem_ObdCompliancyPID1CByte/36 (Dem_ObdCompliancyPID1CByte) @06e555a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmReadDataOfPID1C/17 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_ObdReadinessPID41ByteB/35 (Dem_ObdReadinessPID41ByteB) @06e4eb40
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmReadDataOfPID41/14 (read)
  Availability: not_available
  Varpool flags: read-only
TS_MemCpy32/34 (TS_MemCpy32) @06e470e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmReadDataOfOBDFreezeFrame/19 (23493506 (estimated locally),0.02 per call) Dem_DcmReadDataOfPID41/14 (71618580 (estimated locally),0.42 per call) Dem_DcmReadDataOfPID01/10 (71618579 (estimated locally),0.42 per call) 
  Calls: 
Dem_ObdReadinessForceCompleteMask/33 (Dem_ObdReadinessForceCompleteMask) @06e438b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmReadDataOfPID01/10 (read)Dem_DcmReadDataOfPID41/14 (read)
  Availability: not_available
  Varpool flags: read-only
Dem_GetVisibleObdDTC/32 (Dem_GetVisibleObdDTC) @06e47000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmReadDataOfPID01/10 (1002123242 (estimated locally),5.91 per call) 
  Calls: 
Dem_InternalGetIndicatorStatus/31 (Dem_InternalGetIndicatorStatus) @06e13ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmReadDataOfPID01/10 (71618580 (estimated locally),0.42 per call) 
  Calls: 
SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06e13380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmGetDTCOfOBDFreezeFrame/20 (74214541 (estimated locally),0.07 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (23493506 (estimated locally),0.02 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (317256873 (estimated locally),0.30 per call) Dem_DcmReadDataOfPID41/14 (1002123245 (estimated locally),5.91 per call) Dem_ResetReadiness/4 (330700670 (estimated locally),2.36 per call) Dem_SetEventDisabled/0 (60680543 (estimated locally),0.06 per call) 
  Calls: 
Dem_NvData/29 (Dem_NvData) @06e153a8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_ResetReadiness/4 (read)Dem_DcmReadDataOfPID01/10 (read)Dem_UpdatePID01value/24 (read)Dem_SetEventDisabled/0 (write)Dem_SetPfcCycleQualified/2 (write)Dem_GetPfcCycleQualified/3 (read)Dem_UpdatePID01value/24 (read)Dem_ResetReadiness/4 (write)Dem_SetEventDisabled/0 (read)Dem_DcmReadDataOfPID41/14 (read)Dem_DcmReadDataOfPID41/14 (read)
  Availability: not_available
  Varpool flags:
SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0) @06e132a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmGetDTCOfOBDFreezeFrame/20 (74214541 (estimated locally),0.07 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (23493506 (estimated locally),0.02 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (317256873 (estimated locally),0.30 per call) Dem_DcmReadDataOfPID41/14 (1002123245 (estimated locally),5.91 per call) Dem_ResetReadiness/4 (330700670 (estimated locally),2.36 per call) Dem_SetEventDisabled/0 (60680543 (estimated locally),0.06 per call) 
  Calls: 
Dem_GbiOBDReadinessGroup/27 (Dem_GbiOBDReadinessGroup) @06e131c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmReadDataOfPID41/14 (1002123245 (estimated locally),5.91 per call) Dem_DcmReadDataOfPID01/10 (1002123245 (estimated locally),5.91 per call) Dem_ResetReadiness/4 (1002123244 (estimated locally),7.15 per call) Dem_SetEventDisabled/0 (183880435 (estimated locally),0.17 per call) 
  Calls: 
Det_ASR40_ReportError/26 (Det_ASR40_ReportError) @06e130e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dem_DcmGetDTRData/23 (440077712 (estimated locally),0.41 per call) Dem_DcmGetDTRData/23 (524845003 (estimated locally),0.49 per call) Dem_DcmGetNumTIDsOfOBDMID/22 (95672716 (estimated locally),0.09 per call) Dem_DcmGetNumTIDsOfOBDMID/22 (524845004 (estimated locally),0.49 per call) Dem_DcmGetAvailableOBDMIDs/21 (95672716 (estimated locally),0.09 per call) Dem_DcmGetAvailableOBDMIDs/21 (524845004 (estimated locally),0.49 per call) Dem_DcmGetDTCOfOBDFreezeFrame/20 (149563954 (estimated locally),0.14 per call) Dem_DcmGetDTCOfOBDFreezeFrame/20 (95672716 (estimated locally),0.09 per call) Dem_DcmGetDTCOfOBDFreezeFrame/20 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (135967231 (estimated locally),0.13 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfOBDFreezeFrame/19 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID91/18 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID91/18 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID1C/17 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID1C/17 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID4E/16 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID4E/16 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID4D/15 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID4D/15 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID41/14 (15118225 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID41/14 (82936132 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID31/13 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID31/13 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID30/12 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID30/12 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID21/11 (95672716 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID21/11 (524845004 (estimated locally),0.49 per call) Dem_DcmReadDataOfPID01/10 (15118225 (estimated locally),0.09 per call) Dem_DcmReadDataOfPID01/10 (82936132 (estimated locally),0.49 per call) Dem_DcmGetInfoTypeValue0B/9 (155198765 (estimated locally),0.14 per call) Dem_DcmGetInfoTypeValue0B/9 (181135951 (estimated locally),0.17 per call) Dem_DcmGetInfoTypeValue0B/9 (524845004 (estimated locally),0.49 per call) Dem_DcmGetInfoTypeValue08/8 (155198765 (estimated locally),0.14 per call) Dem_DcmGetInfoTypeValue08/8 (181135951 (estimated locally),0.17 per call) Dem_DcmGetInfoTypeValue08/8 (524845004 (estimated locally),0.49 per call) Dem_RepIUMPRDenRelease/7 (524845004 (estimated locally),0.49 per call) Dem_RepIUMPRDenLock/6 (524845004 (estimated locally),0.49 per call) Dem_RepIUMPRFaultDetect/5 (524845004 (estimated locally),0.49 per call) Dem_ResetReadiness/4 (68480364 (estimated locally),0.49 per call) Dem_GetPfcCycleQualified/3 (95672716 (estimated locally),0.09 per call) Dem_GetPfcCycleQualified/3 (524845004 (estimated locally),0.49 per call) Dem_SetPfcCycleQualified/2 (524845004 (estimated locally),0.49 per call) Dem_SetPtoStatus/1 (227682401 (estimated locally),0.21 per call) Dem_SetPtoStatus/1 (524845004 (estimated locally),0.49 per call) Dem_SetEventDisabled/0 (183880435 (estimated locally),0.17 per call) Dem_SetEventDisabled/0 (181135951 (estimated locally),0.17 per call) Dem_SetEventDisabled/0 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Dem_InitializationState/25 (Dem_InitializationState) @06e151f8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dem_DcmGetAvailableOBDMIDs/21 (read)Dem_DcmGetNumTIDsOfOBDMID/22 (read)Dem_SetEventDisabled/0 (read)Dem_SetPtoStatus/1 (read)Dem_SetPfcCycleQualified/2 (read)Dem_GetPfcCycleQualified/3 (read)Dem_ResetReadiness/4 (read)Dem_RepIUMPRFaultDetect/5 (read)Dem_RepIUMPRDenLock/6 (read)Dem_RepIUMPRDenRelease/7 (read)Dem_DcmGetInfoTypeValue08/8 (read)Dem_DcmGetInfoTypeValue0B/9 (read)Dem_DcmReadDataOfPID01/10 (read)Dem_DcmReadDataOfPID21/11 (read)Dem_DcmReadDataOfPID30/12 (read)Dem_DcmReadDataOfPID31/13 (read)Dem_DcmReadDataOfPID41/14 (read)Dem_DcmReadDataOfPID4D/15 (read)Dem_DcmReadDataOfPID4E/16 (read)Dem_DcmReadDataOfPID1C/17 (read)Dem_DcmReadDataOfPID91/18 (read)Dem_DcmReadDataOfOBDFreezeFrame/19 (read)Dem_DcmGetDTCOfOBDFreezeFrame/20 (read)Dem_DcmGetDTRData/23 (read)
  Availability: not_available
  Varpool flags:
Dem_UpdatePID01value/24 (Dem_UpdatePID01value) @06e0cee0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly
  References: Dem_NvData/29 (read)Dem_NvData/29 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) body local optimize_size
  Called by: Dem_DcmReadDataOfPID01/10 (330700671 (estimated locally),1.95 per call) 
  Calls: 
Dem_DcmGetDTRData/23 (Dem_DcmGetDTRData) @06e0cb60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (440077712 (estimated locally),0.41 per call) Det_ASR40_ReportError/26 (524845003 (estimated locally),0.49 per call) 
Dem_DcmGetNumTIDsOfOBDMID/22 (Dem_DcmGetNumTIDsOfOBDMID) @06e0c7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmGetAvailableOBDMIDs/21 (Dem_DcmGetAvailableOBDMIDs) @06e0c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmGetDTCOfOBDFreezeFrame/20 (Dem_DcmGetDTCOfOBDFreezeFrame) @06e0c0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_EventMem/40 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dem_GetVisibleCmbDTC/41 (15021023 (estimated locally),0.01 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (74214541 (estimated locally),0.07 per call) Dem_SelectEntryOfOBDFreezeFrameEvent/37 (74214541 (estimated locally),0.07 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (74214541 (estimated locally),0.07 per call) Det_ASR40_ReportError/26 (149563954 (estimated locally),0.14 per call) Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfOBDFreezeFrame/19 (Dem_DcmReadDataOfOBDFreezeFrame) @06baec40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_PidClass/38 (read)Dem_PidClass/38 (read)Dem_PidClass/38 (read)Dem_PidClass/38 (read)Dem_PidClass/38 (read)Dem_EntryOBDFF/39 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (23493506 (estimated locally),0.02 per call) TS_MemCpy32/34 (23493506 (estimated locally),0.02 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (23493506 (estimated locally),0.02 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (317256873 (estimated locally),0.30 per call) Dem_SelectEntryOfOBDFreezeFrameEvent/37 (317256873 (estimated locally),0.30 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (317256873 (estimated locally),0.30 per call) Det_ASR40_ReportError/26 (135967231 (estimated locally),0.13 per call) Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID91/18 (Dem_DcmReadDataOfPID91) @06bae7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID1C/17 (Dem_DcmReadDataOfPID1C) @06bae460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_ObdCompliancyPID1CByte/36 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID4E/16 (Dem_DcmReadDataOfPID4E) @06bae0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID4D/15 (Dem_DcmReadDataOfPID4D) @06ba8d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID41/14 (Dem_DcmReadDataOfPID41) @06ba89a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_ObdReadinessPID41ByteB/35 (read)Dem_NvData/29 (read)Dem_NvData/29 (read)Dem_ObdReadinessForceCompleteMask/33 (read)
  Referring: 
  Availability: available
  Function flags: count:169672937 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/34 (71618580 (estimated locally),0.42 per call) SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (1002123245 (estimated locally),5.91 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (1002123245 (estimated locally),5.91 per call) Dem_GbiOBDReadinessGroup/27 (1002123245 (estimated locally),5.91 per call) Det_ASR40_ReportError/26 (15118225 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (82936132 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID31/13 (Dem_DcmReadDataOfPID31) @06ba8380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID30/12 (Dem_DcmReadDataOfPID30) @06ba8000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID21/11 (Dem_DcmReadDataOfPID21) @06de7c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmReadDataOfPID01/10 (Dem_DcmReadDataOfPID01) @06de78c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_NvData/29 (read)Dem_ObdReadinessForceCompleteMask/33 (read)
  Referring: 
  Availability: available
  Function flags: count:169672937 (estimated locally) body optimize_size
  Called by: 
  Calls: TS_MemCpy32/34 (71618579 (estimated locally),0.42 per call) Dem_GetVisibleObdDTC/32 (1002123242 (estimated locally),5.91 per call) Dem_UpdatePID01value/24 (330700671 (estimated locally),1.95 per call) Dem_GbiOBDReadinessGroup/27 (1002123245 (estimated locally),5.91 per call) Dem_InternalGetIndicatorStatus/31 (71618580 (estimated locally),0.42 per call) Det_ASR40_ReportError/26 (15118225 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (82936132 (estimated locally),0.49 per call) 
Dem_DcmGetInfoTypeValue0B/9 (Dem_DcmGetInfoTypeValue0B) @06de7380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (155198765 (estimated locally),0.14 per call) Det_ASR40_ReportError/26 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_DcmGetInfoTypeValue08/8 (Dem_DcmGetInfoTypeValue08) @06de3ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (155198765 (estimated locally),0.14 per call) Det_ASR40_ReportError/26 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_RepIUMPRDenRelease/7 (Dem_RepIUMPRDenRelease) @06de3a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_RepIUMPRDenLock/6 (Dem_RepIUMPRDenLock) @06de37e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_RepIUMPRFaultDetect/5 (Dem_RepIUMPRFaultDetect) @06de3540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_ResetReadiness/4 (Dem_ResetReadiness) @06de32a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_NvData/29 (read)Dem_NvData/29 (write)
  Referring: 
  Availability: available
  Function flags: count:140098944 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (330700670 (estimated locally),2.36 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (330700670 (estimated locally),2.36 per call) Dem_GbiOBDReadinessGroup/27 (1002123244 (estimated locally),7.15 per call) Det_ASR40_ReportError/26 (68480364 (estimated locally),0.49 per call) 
Dem_GetPfcCycleQualified/3 (Dem_GetPfcCycleQualified) @06dcb000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_NvData/29 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_SetPfcCycleQualified/2 (Dem_SetPfcCycleQualified) @06dcbc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_NvData/29 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_SetPtoStatus/1 (Dem_SetPtoStatus) @06dcb9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/26 (227682401 (estimated locally),0.21 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 
Dem_SetEventDisabled/0 (Dem_SetEventDisabled) @06dcb620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dem_InitializationState/25 (read)Dem_NvData/29 (read)Dem_NvData/29 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/30 (60680543 (estimated locally),0.06 per call) SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0/28 (60680543 (estimated locally),0.06 per call) Dem_GbiOBDReadinessGroup/27 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/26 (183880435 (estimated locally),0.17 per call) Det_ASR40_ReportError/26 (181135951 (estimated locally),0.17 per call) Det_ASR40_ReportError/26 (524845004 (estimated locally),0.49 per call) 

;; Function Dem_SetEventDisabled (Dem_SetEventDisabled, funcdef_no=0, decl_uid=6260, cgraph_uid=1, symbol_order=0)

Modification phase of node Dem_SetEventDisabled/0
Dem_SetEventDisabled (Dem_EventIdType EventId)
{
  const Dem_EventOBDReadinessGroupType ReadinessGroup;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.0_1;
  long unsigned int _2;
  int _3;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.0_1 = Dem_InitializationState;
  if (Dem_InitializationState.0_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 81, 32);
  goto <bb 11>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (EventId_10(D) == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 81, 18);
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (EventId_10(D) > 14)
    goto <bb 7>; [50.00%]
  else
    goto <bb 8>; [50.00%]

  <bb 7> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 81, 16);
  goto <bb 11>; [100.00%]

  <bb 8> [local count: 183880435]:
  # DEBUG BEGIN_STMT
  ReadinessGroup_12 = Dem_GbiOBDReadinessGroup (EventId_10(D));
  # DEBUG ReadinessGroup => ReadinessGroup_12
  # DEBUG BEGIN_STMT
  if (ReadinessGroup_12 <= 10)
    goto <bb 9>; [33.00%]
  else
    goto <bb 11>; [67.00%]

  <bb 9> [local count: 60680543]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _2 = Dem_NvData.ReadinessEnableStatus;
  _3 = (int) ReadinessGroup_12;
  _4 = 1 << _3;
  _5 = ~_4;
  _6 = _2 & _5;
  Dem_NvData.ReadinessEnableStatus = _6;
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 11> [local count: 1073741824]:
  # Result_7 = PHI <1(3), 1(5), 1(7), 0(9), 0(8)>
  # DEBUG Result => Result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_7;

}



;; Function Dem_SetPtoStatus (Dem_SetPtoStatus, funcdef_no=1, decl_uid=6318, cgraph_uid=2, symbol_order=1)

Modification phase of node Dem_SetPtoStatus/1
Dem_SetPtoStatus (boolean PtoStatus)
{
  <unnamed type> Dem_InitializationState.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.1_1 = Dem_InitializationState;
  if (Dem_InitializationState.1_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 121, 32);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PtoStatus_4(D) > 1)
    goto <bb 5>; [41.48%]
  else
    goto <bb 6>; [58.52%]

  <bb 5> [local count: 227682401]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 121, 18);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_SetPfcCycleQualified (Dem_SetPfcCycleQualified, funcdef_no=2, decl_uid=6312, cgraph_uid=3, symbol_order=2)

Modification phase of node Dem_SetPfcCycleQualified/2
Dem_SetPfcCycleQualified ()
{
  <unnamed type> Dem_InitializationState.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.2_1 = Dem_InitializationState;
  if (Dem_InitializationState.2_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 170, 32);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  Dem_NvData.PfcStatus = 1;

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_GetPfcCycleQualified (Dem_GetPfcCycleQualified, funcdef_no=3, decl_uid=6314, cgraph_uid=4, symbol_order=3)

Modification phase of node Dem_GetPfcCycleQualified/3
Dem_GetPfcCycleQualified (boolean * isqualified)
{
  <unnamed type> Dem_InitializationState.3_1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.3_1 = Dem_InitializationState;
  if (Dem_InitializationState.3_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 171, 32);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (isqualified_5(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 171, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  _2 = Dem_NvData.PfcStatus;
  *isqualified_5(D) = _2;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_ResetReadiness (Dem_ResetReadiness, funcdef_no=4, decl_uid=6316, cgraph_uid=5, symbol_order=4)

Modification phase of node Dem_ResetReadiness/4
Dem_ResetReadiness ()
{
  Dem_DTCStatusMaskType NewDTCStatusMask;
  Dem_DTCStatusMaskType OldDTCStatusMask;
  const Dem_EventOBDReadinessGroupType ReadinessGroup;
  Dem_EventIdType EvId;
  <unnamed type> Dem_InitializationState.4_1;
  int _2;
  unsigned char _9;

  <bb 2> [local count: 140098944]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.4_1 = Dem_InitializationState;
  if (Dem_InitializationState.4_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 11>; [51.12%]

  <bb 11> [local count: 71618580]:
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 68480364]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 172, 32);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 1002123244]:
  # DEBUG BEGIN_STMT
  ReadinessGroup_11 = Dem_GbiOBDReadinessGroup (EvId_3);
  # DEBUG ReadinessGroup => ReadinessGroup_11
  # DEBUG BEGIN_STMT
  if (ReadinessGroup_11 <= 10)
    goto <bb 5>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 5> [local count: 330700670]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = (int) EvId_3;
  # DEBUG D#1 => &Dem_NvData.DTCStatusMask[_2]
  # DEBUG EventDTCStatusPtr => D#1
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  OldDTCStatusMask_13 = MEM[(Dem_DTCStatusMaskType *)&Dem_NvData].DTCStatusMask[_2];
  # DEBUG OldDTCStatusMask => OldDTCStatusMask_13
  # DEBUG BEGIN_STMT
  # DEBUG NewDTCStatusMask => OldDTCStatusMask_13
  # DEBUG BEGIN_STMT
  _9 = OldDTCStatusMask_13 & 12;
  if (_9 == 0)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 165350335]:
  # DEBUG BEGIN_STMT
  NewDTCStatusMask_14 = OldDTCStatusMask_13 | 16;
  # DEBUG NewDTCStatusMask => NewDTCStatusMask_14
  # DEBUG BEGIN_STMT
  MEM[(Dem_DTCStatusMaskType *)&Dem_NvData].DTCStatusMask[_2] = NewDTCStatusMask_14;

  <bb 7> [local count: 330700670]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();

  <bb 8> [local count: 1002123244]:
  # DEBUG BEGIN_STMT
  EvId_17 = EvId_3 + 1;
  # DEBUG EvId => EvId_17

  <bb 9> [local count: 1073741824]:
  # EvId_3 = PHI <EvId_17(8), 1(11)>
  # DEBUG EvId => EvId_3
  # DEBUG BEGIN_STMT
  if (EvId_3 != 15)
    goto <bb 4>; [93.33%]
  else
    goto <bb 10>; [6.67%]

  <bb 10> [local count: 140098944]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dem_RepIUMPRFaultDetect (Dem_RepIUMPRFaultDetect, funcdef_no=5, decl_uid=6087, cgraph_uid=6, symbol_order=5)

Modification phase of node Dem_RepIUMPRFaultDetect/5
Dem_RepIUMPRFaultDetect (Dem_RatioIdType RatioID)
{
  <unnamed type> Dem_InitializationState.5_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.5_1 = Dem_InitializationState;
  if (Dem_InitializationState.5_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 115, 32);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_RepIUMPRDenLock (Dem_RepIUMPRDenLock, funcdef_no=6, decl_uid=6089, cgraph_uid=7, symbol_order=6)

Modification phase of node Dem_RepIUMPRDenLock/6
Dem_RepIUMPRDenLock (Dem_RatioIdType RatioID)
{
  <unnamed type> Dem_InitializationState.6_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.6_1 = Dem_InitializationState;
  if (Dem_InitializationState.6_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 113, 32);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_RepIUMPRDenRelease (Dem_RepIUMPRDenRelease, funcdef_no=7, decl_uid=6091, cgraph_uid=8, symbol_order=7)

Modification phase of node Dem_RepIUMPRDenRelease/7
Dem_RepIUMPRDenRelease (Dem_RatioIdType RatioID)
{
  <unnamed type> Dem_InitializationState.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.7_1 = Dem_InitializationState;
  if (Dem_InitializationState.7_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 114, 32);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmGetInfoTypeValue08 (Dem_DcmGetInfoTypeValue08, funcdef_no=8, decl_uid=6095, cgraph_uid=9, symbol_order=8)

Modification phase of node Dem_DcmGetInfoTypeValue08/8
Dem_DcmGetInfoTypeValue08 (Dcm_OpStatusType OpStatus, uint8 * Iumprdata08, uint8 * Iumprdata08BufferSize)
{
  <unnamed type> Dem_InitializationState.8_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.8_1 = Dem_InitializationState;
  if (Dem_InitializationState.8_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 107, 32);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (OpStatus_4(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 107, 18);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (Iumprdata08_5(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 303660150]:
  if (Iumprdata08BufferSize_6(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 155198765]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 107, 17);

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmGetInfoTypeValue0B (Dem_DcmGetInfoTypeValue0B, funcdef_no=9, decl_uid=6099, cgraph_uid=10, symbol_order=9)

Modification phase of node Dem_DcmGetInfoTypeValue0B/9
Dem_DcmGetInfoTypeValue0B (Dcm_OpStatusType OpStatus, uint8 * Iumprdata0B, uint8 * Iumprdata0BBufferSize)
{
  <unnamed type> Dem_InitializationState.9_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.9_1 = Dem_InitializationState;
  if (Dem_InitializationState.9_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 108, 32);
  goto <bb 9>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (OpStatus_4(D) != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 181135951]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 108, 18);
  goto <bb 9>; [100.00%]

  <bb 6> [local count: 367760870]:
  # DEBUG BEGIN_STMT
  if (Iumprdata0B_5(D) == 0B)
    goto <bb 8>; [17.43%]
  else
    goto <bb 7>; [82.57%]

  <bb 7> [local count: 303660150]:
  if (Iumprdata0BBufferSize_6(D) == 0B)
    goto <bb 8>; [30.00%]
  else
    goto <bb 9>; [70.00%]

  <bb 8> [local count: 155198765]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 108, 17);

  <bb 9> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmReadDataOfPID01 (Dem_DcmReadDataOfPID01, funcdef_no=10, decl_uid=6101, cgraph_uid=11, symbol_order=10)

Modification phase of node Dem_DcmReadDataOfPID01/10
Dem_DcmReadDataOfPID01 (uint8 * PID01value)
{
  const uint32 ObdDtc;
  uint8 PID01[4];
  Dem_EventIdType EventId;
  Dem_EventOBDReadinessGroupType ReadinessGroup;
  boolean ReadinessGroupChecked[11];
  <unnamed type> Dem_InitializationState.10_1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  short unsigned int _6;
  int _7;
  unsigned char _8;
  unsigned char _9;
  int _10;
  unsigned char _11;
  unsigned char _12;
  unsigned char _14;
  unsigned char _15;
  unsigned char Dem_ObdReadinessForceCompleteMask.12_16;
  unsigned char _17;
  unsigned char _28;
  unsigned char _32;

  <bb 2> [local count: 169672937]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.10_1 = Dem_InitializationState;
  if (Dem_InitializationState.10_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 82936132]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 97, 32);
  goto <bb 23>; [100.00%]

  <bb 4> [local count: 86736805]:
  # DEBUG BEGIN_STMT
  if (PID01value_30(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 15118225]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 97, 17);
  goto <bb 23>; [100.00%]

  <bb 6> [local count: 71618580]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PID01 = "\x00";
  # DEBUG BEGIN_STMT
  # DEBUG ObdReadinessEngineTypeMask => 8
  # DEBUG BEGIN_STMT
  PID01[1] = 8;
  # DEBUG BEGIN_STMT
  # DEBUG ReadinessGroup => 0
  goto <bb 8>; [100.00%]

  <bb 7> [local count: 788148287]:
  # DEBUG BEGIN_STMT
  _2 = (int) ReadinessGroup_18;
  ReadinessGroupChecked[_2] = 0;
  # DEBUG BEGIN_STMT
  ReadinessGroup_50 = ReadinessGroup_18 + 1;
  # DEBUG ReadinessGroup => ReadinessGroup_50

  <bb 8> [local count: 859766868]:
  # ReadinessGroup_18 = PHI <0(6), ReadinessGroup_50(7)>
  # DEBUG ReadinessGroup => ReadinessGroup_18
  # DEBUG BEGIN_STMT
  if (ReadinessGroup_18 != 11)
    goto <bb 7>; [91.67%]
  else
    goto <bb 9>; [8.33%]

  <bb 9> [local count: 71618580]:
  # DEBUG BEGIN_STMT
  _3 = Dem_InternalGetIndicatorStatus (0, 1);
  if (_3 != 0)
    goto <bb 10>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 10> [local count: 35809290]:
  # DEBUG BEGIN_STMT
  _4 = PID01[0];
  _5 = _4 | 128;
  PID01[0] = _5;

  <bb 11> [local count: 71618580]:
  # EventId_22 = PHI <1(10), 1(9)>
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 1002123245]:
  # DEBUG BEGIN_STMT
  ReadinessGroup_45 = Dem_GbiOBDReadinessGroup (EventId_19);
  # DEBUG ReadinessGroup => ReadinessGroup_45
  # DEBUG BEGIN_STMT
  if (ReadinessGroup_45 <= 10)
    goto <bb 13>; [33.00%]
  else
    goto <bb 14>; [67.00%]

  <bb 13> [local count: 330700671]:
  # DEBUG BEGIN_STMT
  _6 = (short unsigned int) ReadinessGroup_45;
  _7 = (int) ReadinessGroup_45;
  _8 = ReadinessGroupChecked[_7];
  _9 = Dem_UpdatePID01value (EventId_19, _6, _8, &PID01);
  ReadinessGroupChecked[_7] = _9;

  <bb 14> [local count: 1002123245]:
  # DEBUG BEGIN_STMT
  EventId_48 = EventId_19 + 1;
  # DEBUG EventId => EventId_48

  <bb 15> [local count: 1073741824]:
  # EventId_19 = PHI <EventId_22(11), EventId_48(14)>
  # DEBUG EventId => EventId_19
  # DEBUG BEGIN_STMT
  if (EventId_19 != 15)
    goto <bb 12>; [93.33%]
  else
    goto <bb 24>; [6.67%]

  <bb 24> [local count: 71618580]:
  goto <bb 21>; [100.00%]

  <bb 16> [local count: 1002123242]:
  # DEBUG BEGIN_STMT
  ObdDtc_41 = Dem_GetVisibleObdDTC (EventId_20);
  # DEBUG ObdDtc => ObdDtc_41
  # DEBUG BEGIN_STMT
  if (ObdDtc_41 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 17> [local count: 501061621]:
  _10 = (int) EventId_20;
  _11 = Dem_NvData.DTCStatusMask[_10];
  _28 = _11 & 8;
  if (_28 != 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 20>; [50.00%]

  <bb 18> [local count: 250530810]:
  # DEBUG BEGIN_STMT
  _12 = PID01[0];
  _32 = _12 & 127;
  if (_32 != 127)
    goto <bb 19>; [66.00%]
  else
    goto <bb 20>; [34.00%]

  <bb 19> [local count: 165350335]:
  # DEBUG BEGIN_STMT
  _14 = _12 + 1;
  PID01[0] = _14;

  <bb 20> [local count: 1002123243]:
  # DEBUG BEGIN_STMT
  EventId_43 = EventId_20 + 1;
  # DEBUG EventId => EventId_43

  <bb 21> [local count: 1073741820]:
  # EventId_20 = PHI <EventId_43(20), 1(24)>
  # DEBUG EventId => EventId_20
  # DEBUG BEGIN_STMT
  if (EventId_20 != 15)
    goto <bb 16>; [93.33%]
  else
    goto <bb 22>; [6.67%]

  <bb 22> [local count: 71618579]:
  # DEBUG BEGIN_STMT
  _15 = PID01[1];
  Dem_ObdReadinessForceCompleteMask.12_16 = Dem_ObdReadinessForceCompleteMask;
  _17 = _15 & Dem_ObdReadinessForceCompleteMask.12_16;
  PID01[1] = _17;
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (PID01value_30(D), &PID01[0], 4);
  ReadinessGroupChecked ={v} {CLOBBER};
  PID01 ={v} {CLOBBER};

  <bb 23> [local count: 169672936]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DcmReadDataOfPID21 (Dem_DcmReadDataOfPID21, funcdef_no=11, decl_uid=6103, cgraph_uid=12, symbol_order=11)

Modification phase of node Dem_DcmReadDataOfPID21/11
Dem_DcmReadDataOfPID21 (uint8 * PID21value)
{
  <unnamed type> Dem_InitializationState.13_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.13_1 = Dem_InitializationState;
  if (Dem_InitializationState.13_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 100, 32);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID21value_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 100, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  *PID21value_4(D) = 0;
  # DEBUG BEGIN_STMT
  MEM[(uint8 *)PID21value_4(D) + 1B] = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DcmReadDataOfPID30 (Dem_DcmReadDataOfPID30, funcdef_no=12, decl_uid=6105, cgraph_uid=13, symbol_order=12)

Modification phase of node Dem_DcmReadDataOfPID30/12
Dem_DcmReadDataOfPID30 (uint8 * PID30value)
{
  <unnamed type> Dem_InitializationState.14_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.14_1 = Dem_InitializationState;
  if (Dem_InitializationState.14_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 101, 32);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID30value_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 101, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  *PID30value_4(D) = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DcmReadDataOfPID31 (Dem_DcmReadDataOfPID31, funcdef_no=13, decl_uid=6107, cgraph_uid=14, symbol_order=13)

Modification phase of node Dem_DcmReadDataOfPID31/13
Dem_DcmReadDataOfPID31 (uint8 * PID31value)
{
  <unnamed type> Dem_InitializationState.15_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.15_1 = Dem_InitializationState;
  if (Dem_InitializationState.15_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 102, 32);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID31value_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 102, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  *PID31value_4(D) = 0;
  # DEBUG BEGIN_STMT
  MEM[(uint8 *)PID31value_4(D) + 1B] = 0;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DcmReadDataOfPID41 (Dem_DcmReadDataOfPID41, funcdef_no=14, decl_uid=6109, cgraph_uid=15, symbol_order=14)

Modification phase of node Dem_DcmReadDataOfPID41/14
Dem_DcmReadDataOfPID41 (uint8 * PID41value)
{
  const Dem_EventOBDReadinessGroupType ReadinessGroup;
  Dem_EventIdType EvId;
  uint8 PID41[4];
  <unnamed type> Dem_InitializationState.16_1;
  unsigned char Dem_ObdReadinessPID41ByteB.17_2;
  long unsigned int _3;
  int _4;
  long unsigned int _5;
  long unsigned int _6;
  unsigned char _7;
  unsigned int _8;
  unsigned int _9;
  unsigned char _10;
  unsigned int _11;
  unsigned int _12;
  unsigned char _13;
  unsigned char _14;
  int _15;
  unsigned char _16;
  unsigned char _17;
  unsigned int _18;
  unsigned int _19;
  unsigned int _20;
  unsigned char _21;
  unsigned int _22;
  unsigned int _23;
  unsigned int _24;
  unsigned int _25;
  unsigned char _26;
  unsigned char _27;
  unsigned char _28;
  unsigned char Dem_ObdReadinessForceCompleteMask.18_29;
  unsigned char _30;
  unsigned char _36;
  unsigned char _41;

  <bb 2> [local count: 169672937]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.16_1 = Dem_InitializationState;
  if (Dem_InitializationState.16_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 82936132]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 103, 32);
  goto <bb 15>; [100.00%]

  <bb 4> [local count: 86736805]:
  # DEBUG BEGIN_STMT
  if (PID41value_38(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 15118225]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 103, 17);
  goto <bb 15>; [100.00%]

  <bb 6> [local count: 71618580]:
  # DEBUG BEGIN_STMT
  PID41 = "\x00";
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_ObdReadinessPID41ByteB.17_2 = Dem_ObdReadinessPID41ByteB;
  PID41[1] = Dem_ObdReadinessPID41ByteB.17_2;
  # DEBUG BEGIN_STMT
  # DEBUG EvId => 1
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 1002123245]:
  # DEBUG BEGIN_STMT
  ReadinessGroup_46 = Dem_GbiOBDReadinessGroup (EvId_31);
  # DEBUG ReadinessGroup => ReadinessGroup_46
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (ReadinessGroup_46 <= 10)
    goto <bb 8>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 8> [local count: 501061622]:
  # DEBUG BEGIN_STMT
  _3 = Dem_NvData.ReadinessEnableStatus;
  _4 = (int) ReadinessGroup_46;
  _5 = _3 >> _4;
  _6 = _5 & 1;
  if (_6 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 250530811]:
  # DEBUG BEGIN_STMT
  _7 = ReadinessGroup_46 >> 3;
  _8 = (unsigned int) _7;
  _9 = 2 - _8;
  _10 = PID41[_9];
  _36 = ReadinessGroup_46 & 7;
  _11 = (unsigned int) _36;
  _12 = 1 << _11;
  _13 = (unsigned char) _12;
  _14 = _10 | _13;
  PID41[_9] = _14;

  <bb 10> [local count: 501061622]:
  # DEBUG BEGIN_STMT
  _15 = (int) EvId_31;
  _16 = Dem_NvData.DTCStatusMask[_15];
  _41 = _16 & 64;
  if (_41 != 0)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 250530811]:
  # DEBUG BEGIN_STMT
  _17 = ReadinessGroup_46 >> 3;
  _18 = (unsigned int) _17;
  _19 = _18 * 2;
  _20 = 3 - _19;
  _21 = PID41[_20];
  _22 = (unsigned int) ReadinessGroup_46;
  _23 = _18 * 4;
  _24 = _22 - _23;
  _25 = 1 << _24;
  _26 = (unsigned char) _25;
  _27 = _21 | _26;
  PID41[_20] = _27;

  <bb 12> [local count: 1002123245]:
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EvId_51 = EvId_31 + 1;
  # DEBUG EvId => EvId_51

  <bb 13> [local count: 1073741824]:
  # EvId_31 = PHI <1(6), EvId_51(12)>
  # DEBUG EvId => EvId_31
  # DEBUG BEGIN_STMT
  if (EvId_31 != 15)
    goto <bb 7>; [93.33%]
  else
    goto <bb 14>; [6.67%]

  <bb 14> [local count: 71618580]:
  # DEBUG BEGIN_STMT
  _28 = PID41[1];
  Dem_ObdReadinessForceCompleteMask.18_29 = Dem_ObdReadinessForceCompleteMask;
  _30 = _28 & Dem_ObdReadinessForceCompleteMask.18_29;
  PID41[1] = _30;
  # DEBUG BEGIN_STMT
  TS_MemCpy32 (PID41value_38(D), &PID41[0], 4);
  PID41 ={v} {CLOBBER};

  <bb 15> [local count: 169672937]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DcmReadDataOfPID4D (Dem_DcmReadDataOfPID4D, funcdef_no=15, decl_uid=6111, cgraph_uid=16, symbol_order=15)

Modification phase of node Dem_DcmReadDataOfPID4D/15
Dem_DcmReadDataOfPID4D (uint8 * PID4Dvalue)
{
  <unnamed type> Dem_InitializationState.19_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.19_1 = Dem_InitializationState;
  if (Dem_InitializationState.19_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 104, 32);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID4Dvalue_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 104, 17);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmReadDataOfPID4E (Dem_DcmReadDataOfPID4E, funcdef_no=16, decl_uid=6113, cgraph_uid=17, symbol_order=16)

Modification phase of node Dem_DcmReadDataOfPID4E/16
Dem_DcmReadDataOfPID4E (uint8 * PID4Evalue)
{
  <unnamed type> Dem_InitializationState.20_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.20_1 = Dem_InitializationState;
  if (Dem_InitializationState.20_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 105, 32);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID4Evalue_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 105, 17);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmReadDataOfPID1C (Dem_DcmReadDataOfPID1C, funcdef_no=17, decl_uid=6115, cgraph_uid=18, symbol_order=17)

Modification phase of node Dem_DcmReadDataOfPID1C/17
Dem_DcmReadDataOfPID1C (uint8 * PID1Cvalue)
{
  <unnamed type> Dem_InitializationState.21_1;
  unsigned char Dem_ObdCompliancyPID1CByte.22_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.21_1 = Dem_InitializationState;
  if (Dem_InitializationState.21_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 99, 32);
  goto <bb 7>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID1Cvalue_5(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 99, 17);
  goto <bb 7>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  Dem_ObdCompliancyPID1CByte.22_2 = Dem_ObdCompliancyPID1CByte;
  *PID1Cvalue_5(D) = Dem_ObdCompliancyPID1CByte.22_2;

  <bb 7> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Dem_DcmReadDataOfPID91 (Dem_DcmReadDataOfPID91, funcdef_no=18, decl_uid=6140, cgraph_uid=19, symbol_order=18)

Modification phase of node Dem_DcmReadDataOfPID91/18
Dem_DcmReadDataOfPID91 (uint8 * PID91value)
{
  <unnamed type> Dem_InitializationState.23_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.23_1 = Dem_InitializationState;
  if (Dem_InitializationState.23_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 106, 32);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (PID91value_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 106, 17);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmReadDataOfOBDFreezeFrame (Dem_DcmReadDataOfOBDFreezeFrame, funcdef_no=19, decl_uid=6120, cgraph_uid=20, symbol_order=19)

Modification phase of node Dem_DcmReadDataOfOBDFreezeFrame/19
Dem_DcmReadDataOfOBDFreezeFrame (uint8 PID, uint8 DataElementIndexOfPID, uint8 * DestBuffer, uint16 * BufSize)
{
  const Dem_SizeEntryDataType ObdFFDataIdx;
  Dem_EntryDataType * OBDFFStoredData;
  Dem_SizeEntryDataType StartByte;
  uint8_least PidClassIterator;
  boolean EntryFound;
  Dem_SizeEvMemEntryType SelectedEntryIndex;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.24_1;
  unsigned char _2;
  unsigned char _4;
  unsigned char _5;
  short unsigned int _6;
  short unsigned int _7;
  const uint8 * _8;
  sizetype _9;
  const uint8 * _10;
  unsigned char _11;
  short unsigned int _12;
  const Dem_OBDFFDataElementOffsetType * _13;
  const Dem_OBDFFDataElementOffsetType * _15;
  unsigned char _16;
  short unsigned int _17;
  unsigned char SelectedEntryIndex.25_18;
  int _19;
  sizetype _20;
  Dem_EntryDataType * _21;
  unsigned char _22;
  long unsigned int _23;
  unsigned char _24;
  short unsigned int _25;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.24_1 = Dem_InitializationState;
  if (Dem_InitializationState.24_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 82, 32);
  goto <bb 18>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DestBuffer_33(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 82, 17);
  goto <bb 18>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  if (BufSize_34(D) == 0B)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 135967231]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 82, 17);
  goto <bb 18>; [100.00%]

  <bb 8> [local count: 317256873]:
  # DEBUG BEGIN_STMT
  SelectedEntryIndex = 0;
  # DEBUG BEGIN_STMT
  # DEBUG EntryFound => 0
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryFound_38 = Dem_SelectEntryOfOBDFreezeFrameEvent (&SelectedEntryIndex, 1);
  # DEBUG EntryFound => EntryFound_38
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (EntryFound_38 == 1)
    goto <bb 19>; [34.00%]
  else
    goto <bb 17>; [66.00%]

  <bb 19> [local count: 107867337]:
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 210568583]:
  # DEBUG BEGIN_STMT
  _2 = Dem_PidClass[PidClassIterator_28].ParameterId;
  if (_2 == PID_40(D))
    goto <bb 10>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 10> [local count: 71593318]:
  if (_2 != 255)
    goto <bb 11>; [66.00%]
  else
    goto <bb 12>; [34.00%]

  <bb 11> [local count: 47251590]:
  # DEBUG BEGIN_STMT
  _4 = Dem_PidClass[PidClassIterator_28].NumSegDataElements;
  if (_4 > DataElementIndexOfPID_41(D))
    goto <bb 14>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 12> [local count: 207969746]:
  # DEBUG BEGIN_STMT
  _5 = Dem_PidClass[PidClassIterator_28].Size;
  _6 = (short unsigned int) _5;
  StartByte_42 = _6 + StartByte_29;
  # DEBUG StartByte => StartByte_42
  # DEBUG BEGIN_STMT
  PidClassIterator_43 = PidClassIterator_28 + 1;
  # DEBUG PidClassIterator => PidClassIterator_43

  <bb 13> [local count: 315837083]:
  # PidClassIterator_28 = PHI <PidClassIterator_43(12), 0(19)>
  # StartByte_29 = PHI <StartByte_42(12), 0(19)>
  # DEBUG StartByte => StartByte_29
  # DEBUG PidClassIterator => PidClassIterator_28
  # DEBUG BEGIN_STMT
  if (PidClassIterator_28 != 2)
    goto <bb 9>; [66.67%]
  else
    goto <bb 14>; [33.33%]

  <bb 14> [local count: 107867337]:
  # PidClassIterator_3 = PHI <PidClassIterator_28(11), PidClassIterator_28(13)>
  # StartByte_14 = PHI <StartByte_29(11), StartByte_29(13)>
  # DEBUG BEGIN_STMT
  if (PidClassIterator_3 != 2)
    goto <bb 15>; [66.00%]
  else
    goto <bb 17>; [34.00%]

  <bb 15> [local count: 71192443]:
  # DEBUG BEGIN_STMT
  _7 = *BufSize_34(D);
  _8 = Dem_PidClass[PidClassIterator_3].ObdFFPidDataElementSize;
  _9 = (sizetype) DataElementIndexOfPID_41(D);
  _10 = _8 + _9;
  _11 = *_10;
  _12 = (short unsigned int) _11;
  if (_7 >= _12)
    goto <bb 16>; [33.00%]
  else
    goto <bb 17>; [67.00%]

  <bb 16> [local count: 23493506]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _13 = Dem_PidClass[PidClassIterator_3].ObdFFPidDataElementOffset;
  _15 = _13 + _9;
  _16 = *_15;
  _17 = (short unsigned int) _16;
  ObdFFDataIdx_44 = StartByte_14 + _17;
  # DEBUG ObdFFDataIdx => ObdFFDataIdx_44
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  SelectedEntryIndex.25_18 = SelectedEntryIndex;
  _19 = (int) SelectedEntryIndex.25_18;
  OBDFFStoredData_46 = &Dem_EntryOBDFF[_19].OBDFFData;
  # DEBUG OBDFFStoredData => OBDFFStoredData_46
  # DEBUG BEGIN_STMT
  _20 = (sizetype) ObdFFDataIdx_44;
  _21 = OBDFFStoredData_46 + _20;
  _22 = *_10;
  _23 = (long unsigned int) _22;
  TS_MemCpy32 (DestBuffer_33(D), _21, _23);
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  _24 = *_10;
  _25 = (short unsigned int) _24;
  *BufSize_34(D) = _25;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 17> [local count: 317256873]:
  # Result_26 = PHI <1(8), 1(14), 1(15), 0(16)>
  # DEBUG Result => Result_26
  SelectedEntryIndex ={v} {CLOBBER};

  <bb 18> [local count: 1073741824]:
  # Result_27 = PHI <1(3), 1(5), 1(7), Result_26(17)>
  # DEBUG Result => Result_27
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_27;

}



;; Function Dem_DcmGetDTCOfOBDFreezeFrame (Dem_DcmGetDTCOfOBDFreezeFrame, funcdef_no=20, decl_uid=6124, cgraph_uid=21, symbol_order=20)

Modification phase of node Dem_DcmGetDTCOfOBDFreezeFrame/20
Dem_DcmGetDTCOfOBDFreezeFrame (uint8 FrameNumber, uint32 * DTC, Dem_DTCFormatType DTCFormat)
{
  uint32 DtcTempValue;
  Dem_SizeEvMemEntryType SelectedEntryIndex;
  boolean EntryFound;
  Dem_EventIdType StoredOBDFFEventId;
  Std_ReturnType Result;
  <unnamed type> Dem_InitializationState.26_1;
  struct Dem_EventMemoryEntryType * _2;
  unsigned char SelectedEntryIndex.27_3;
  unsigned int _4;
  unsigned int _5;
  struct Dem_EventMemoryEntryType * _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.26_1 = Dem_InitializationState;
  if (Dem_InitializationState.26_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 83, 32);
  goto <bb 16>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (DTC_13(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 83, 17);
  goto <bb 16>; [100.00%]

  <bb 6> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_14(D) > 2)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 149563954]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 83, 18);
  goto <bb 16>; [100.00%]

  <bb 8> [local count: 303660150]:
  # DEBUG BEGIN_STMT
  if (FrameNumber_15(D) == 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 9> [local count: 151830075]:
  # DEBUG BEGIN_STMT
  if (DTCFormat_14(D) != 2)
    goto <bb 10>; [48.88%]
  else
    goto <bb 16>; [51.12%]

  <bb 10> [local count: 74214541]:
  # DEBUG BEGIN_STMT
  # DEBUG StoredOBDFFEventId => 0
  # DEBUG BEGIN_STMT
  # DEBUG EntryFound => 0
  # DEBUG BEGIN_STMT
  SelectedEntryIndex = 0;
  # DEBUG BEGIN_STMT
  SchM_Enter_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  EntryFound_19 = Dem_SelectEntryOfOBDFreezeFrameEvent (&SelectedEntryIndex, 1);
  # DEBUG EntryFound => EntryFound_19
  # DEBUG BEGIN_STMT
  if (EntryFound_19 == 1)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 25232944]:
  # DEBUG BEGIN_STMT
  _2 = Dem_EventMem[0];
  SelectedEntryIndex.27_3 = SelectedEntryIndex;
  _4 = (unsigned int) SelectedEntryIndex.27_3;
  _5 = _4 * 16;
  _6 = _2 + _5;
  StoredOBDFFEventId_20 = _6->EventId;
  # DEBUG StoredOBDFFEventId => StoredOBDFFEventId_20

  <bb 12> [local count: 74214541]:
  # StoredOBDFFEventId_9 = PHI <0(10), StoredOBDFFEventId_20(11)>
  # DEBUG StoredOBDFFEventId => StoredOBDFFEventId_9
  # DEBUG BEGIN_STMT
  SchM_Exit_Dem_SCHM_DEM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  if (EntryFound_19 == 1)
    goto <bb 13>; [20.24%]
  else
    goto <bb 15>; [79.76%]

  <bb 13> [local count: 15021023]:
  # DEBUG BEGIN_STMT
  # DEBUG DtcTempValue => 0
  # DEBUG BEGIN_STMT
  DtcTempValue_23 = Dem_GetVisibleCmbDTC (DTCFormat_14(D), StoredOBDFFEventId_9);
  # DEBUG DtcTempValue => DtcTempValue_23
  # DEBUG BEGIN_STMT
  if (DtcTempValue_23 != 0)
    goto <bb 14>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 14> [local count: 7510512]:
  # DEBUG BEGIN_STMT
  *DTC_13(D) = DtcTempValue_23;
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 15> [local count: 74214541]:
  # Result_7 = PHI <1(12), 1(13), 0(14)>
  # DEBUG Result => Result_7
  SelectedEntryIndex ={v} {CLOBBER};

  <bb 16> [local count: 1073741824]:
  # Result_8 = PHI <1(3), 1(5), 1(7), 1(8), 1(9), Result_7(15)>
  # DEBUG Result => Result_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_8;

}



;; Function Dem_DcmGetAvailableOBDMIDs (Dem_DcmGetAvailableOBDMIDs, funcdef_no=21, decl_uid=6127, cgraph_uid=22, symbol_order=21)

Modification phase of node Dem_DcmGetAvailableOBDMIDs/21
Dem_DcmGetAvailableOBDMIDs (uint8 Obdmid, uint32 * Obdmidvalue)
{
  <unnamed type> Dem_InitializationState.28_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.28_1 = Dem_InitializationState;
  if (Dem_InitializationState.28_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 163, 32);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (Obdmidvalue_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 163, 17);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmGetNumTIDsOfOBDMID (Dem_DcmGetNumTIDsOfOBDMID, funcdef_no=22, decl_uid=6130, cgraph_uid=23, symbol_order=22)

Modification phase of node Dem_DcmGetNumTIDsOfOBDMID/22
Dem_DcmGetNumTIDsOfOBDMID (uint8 Obdmid, uint8 * numberOfTIDs)
{
  <unnamed type> Dem_InitializationState.29_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.29_1 = Dem_InitializationState;
  if (Dem_InitializationState.29_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 164, 32);
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (numberOfTIDs_4(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 164, 17);

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}



;; Function Dem_DcmGetDTRData (Dem_DcmGetDTRData, funcdef_no=23, decl_uid=6138, cgraph_uid=24, symbol_order=23)

Modification phase of node Dem_DcmGetDTRData/23
Dem_DcmGetDTRData (uint8 Obdmid, uint8 TIDindex, uint8 * TIDvalue, uint8 * UaSID, uint16 * Testvalue, uint16 * Lowlimvalue, uint16 * Upplimvalue)
{
  <unnamed type> Dem_InitializationState.30_1;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dem_InitializationState.30_1 = Dem_InitializationState;
  if (Dem_InitializationState.30_1 != 2)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845003]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 165, 32);
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 548896820]:
  # DEBUG BEGIN_STMT
  if (TIDvalue_4(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 5> [local count: 453224103]:
  if (UaSID_5(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 6>; [70.00%]

  <bb 6> [local count: 317256872]:
  if (Testvalue_6(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 7>; [70.00%]

  <bb 7> [local count: 222079810]:
  if (Lowlimvalue_7(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 8> [local count: 155455867]:
  if (Upplimvalue_8(D) == 0B)
    goto <bb 9>; [30.00%]
  else
    goto <bb 10>; [70.00%]

  <bb 9> [local count: 440077712]:
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (54, 0, 165, 17);

  <bb 10> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 1;

}


