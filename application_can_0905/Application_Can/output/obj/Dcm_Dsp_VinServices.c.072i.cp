
IPA constant propagation start:
Determining dynamic type for call: _9 (2, pBuffer_14);
  Starting walk at: _9 (2, pBuffer_14);
  instance pointer: pBuffer_14  Outer instance pointer: pBuffer_14 offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Internal_ReleaseLock/13:
  Jump functions of caller  Dcm_Internal_GetLock/12:
  Jump functions of caller  Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/11:
  Jump functions of caller  Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/9:
  Jump functions of caller  Dcm_Dsp_VinServices_UnlockService/5:
  Jump functions of caller  Dcm_Dsp_VinServices_LockService/4:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperCancel/3:
    indirect simple callsite, calling param -1, offset 0, for stmt _9 (2, pBuffer_14);
       param 0: CONST: 2
         value: 0x2, mask: 0x0
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_VinServices_HelperExecute/2:
  Jump functions of caller  Dcm_Dsp_VinServices_HelperInit/1:

 Propagating constants:

Not considering Dcm_Dsp_VinServices_UnlockService for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_VinServices_LockService for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_VinServices_HelperCancel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_VinServices_HelperExecute for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_VinServices_HelperInit for cloning; -fipa-cp-clone disabled.

overall_size: 90, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_VinServices_UnlockService/5:
  Node: Dcm_Dsp_VinServices_LockService/4:
  Node: Dcm_Dsp_VinServices_HelperCancel/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_VinServices_HelperExecute/2:
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
  Node: Dcm_Dsp_VinServices_HelperInit/1:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dcm_Internal_ReleaseLock/13 (Dcm_Internal_ReleaseLock) @06b911c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_VinServices_UnlockService/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_Internal_GetLock/12 (Dcm_Internal_GetLock) @06b91000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_VinServices_LockService/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/11 (Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType) @06cfdd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_VinServices_HelperExecute/2 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_DspReqVehInfoContext/10 (Dcm_DspReqVehInfoContext) @06b8c4c8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_VinServices_HelperExecute/2 (read)
  Availability: not_available
  Varpool flags:
Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/9 (Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType) @06cfdc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Dcm_Dsp_VinServices_HelperExecute/2 (536870913 (estimated locally),0.50 per call) 
  Calls: 
Dcm_DspVehInfoData/8 (Dcm_DspVehInfoData) @06b8c1b0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_VinServices_HelperInit/1 (read)Dcm_Dsp_VinServices_HelperCancel/3 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_DspVehInfoUsed/7 (Dcm_DspVehInfoUsed) @06b8c168
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_VinServices_HelperInit/1 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_DspVehInfo/6 (Dcm_DspVehInfo) @06b8c120
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Dcm_Dsp_VinServices_HelperInit/1 (read)Dcm_Dsp_VinServices_HelperInit/1 (read)Dcm_Dsp_VinServices_HelperInit/1 (read)Dcm_Dsp_VinServices_HelperCancel/3 (read)Dcm_Dsp_VinServices_HelperCancel/3 (read)
  Availability: not_available
  Varpool flags: read-only
Dcm_Dsp_VinServices_UnlockService/5 (Dcm_Dsp_VinServices_UnlockService) @06cfd9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsp_VinServices_ServiceBusy/0 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Internal_ReleaseLock/13 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_VinServices_LockService/4 (Dcm_Dsp_VinServices_LockService) @06cfd7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_Dsp_VinServices_ServiceBusy/0 (addr)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Internal_GetLock/12 (1073741824 (estimated locally),1.00 per call) 
Dcm_Dsp_VinServices_HelperCancel/3 (Dcm_Dsp_VinServices_HelperCancel) @06cfd620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DspVehInfo/6 (read)Dcm_DspVehInfo/6 (read)Dcm_DspVehInfoData/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(220117074 (estimated locally),0.21 per call) 
Dcm_Dsp_VinServices_HelperExecute/2 (Dcm_Dsp_VinServices_HelperExecute) @06cfd460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DspReqVehInfoContext/10 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType/11 (536870913 (estimated locally),0.50 per call) Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType/9 (536870913 (estimated locally),0.50 per call) 
Dcm_Dsp_VinServices_HelperInit/1 (Dcm_Dsp_VinServices_HelperInit) @06cfd1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Dcm_DspVehInfo/6 (read)Dcm_DspVehInfoUsed/7 (read)Dcm_DspVehInfo/6 (read)Dcm_DspVehInfo/6 (read)Dcm_DspVehInfoData/8 (read)
  Referring: 
  Availability: available
  Function flags: count:722985089 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Dcm_Dsp_VinServices_ServiceBusy/0 (Dcm_Dsp_VinServices_ServiceBusy) @06c91900
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: Dcm_Dsp_VinServices_LockService/4 (addr)Dcm_Dsp_VinServices_UnlockService/5 (addr)
  Availability: available
  Varpool flags: initialized

;; Function Dcm_Dsp_VinServices_HelperInit (Dcm_Dsp_VinServices_HelperInit, funcdef_no=0, decl_uid=6600, cgraph_uid=1, symbol_order=1)

Modification phase of node Dcm_Dsp_VinServices_HelperInit/1
Dcm_Dsp_VinServices_HelperInit (Dcm_DspVehInfoInfoTypeType VehInfoInfoType, struct Dcm_DspReqVehInfoContextType * svcContext, struct Dcm_DspMsgBufferCfgType * ResBuffer)
{
  uint16_least VehInfoDataIndex;
  const uint16 EndIndexOfVehInfoData;
  const uint16 StartIndexOfVehInfoData;
  uint16_least VehInfoDataSize;
  uint8_least vehInfoIndex;
  Std_ReturnType retVal;
  unsigned char _1;
  long unsigned int _2;
  unsigned char _3;
  unsigned char _4;
  long unsigned int _5;
  unsigned int _6;
  unsigned char _7;
  unsigned char _8;
  unsigned char _9;
  unsigned char _10;
  short unsigned int _11;
  unsigned char _12;
  long unsigned int _13;
  long unsigned int _14;
  long unsigned int _15;
  unsigned char _16;

  <bb 2> [local count: 722985089]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = VehInfoInfoType_22(D) & 31;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 16>; [50.00%]

  <bb 16> [local count: 361492544]:
  goto <bb 13>; [100.00%]

  <bb 3> [local count: 361492544]:
  # DEBUG BEGIN_STMT
  _2 = ResBuffer_28(D)->Size;
  if (_2 > 3)
    goto <bb 4>; [50.00%]
  else
    goto <bb 14>; [50.00%]

  <bb 4> [local count: 180746272]:
  # DEBUG BEGIN_STMT
  svcContext_29(D)->BufferCfgPtr = ResBuffer_28(D);
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 5> [local count: 715863676]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_DspVehInfo[vehInfoIndex_18].VehInfoInfoType;
  if (_3 == VehInfoInfoType_22(D))
    goto <bb 6>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 6> [local count: 243393649]:
  # DEBUG BEGIN_STMT
  _4 = Dcm_DspVehInfoUsed[0];
  _5 = vehInfoIndex_18;
  _6 = 1 << _5;
  _7 = (unsigned char) _6;
  _8 = _4 & _7;
  if (_8 != 0)
    goto <bb 7>; [27.00%]
  else
    goto <bb 12>; [73.00%]

  <bb 7> [local count: 65716285]:
  # DEBUG BEGIN_STMT
  # DEBUG VehInfoDataSize => 0
  # DEBUG BEGIN_STMT
  _9 = Dcm_DspVehInfo[vehInfoIndex_18].StartIndexOfVehInfoData;
  StartIndexOfVehInfoData_25 = (const uint16) _9;
  # DEBUG StartIndexOfVehInfoData => StartIndexOfVehInfoData_25
  # DEBUG BEGIN_STMT
  _10 = Dcm_DspVehInfo[vehInfoIndex_18].NumOfVehInfoData;
  _11 = (short unsigned int) _10;
  EndIndexOfVehInfoData_26 = _11 + StartIndexOfVehInfoData_25;
  # DEBUG EndIndexOfVehInfoData => EndIndexOfVehInfoData_26
  # DEBUG BEGIN_STMT
  # DEBUG VehInfoDataIndex => 2
  # DEBUG BEGIN_STMT
  VehInfoDataIndex_27 = (uint16_least) _9;
  # DEBUG VehInfoDataIndex => VehInfoDataIndex_27
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 131452287]:
  # DEBUG BEGIN_STMT
  _12 = Dcm_DspVehInfoData[VehInfoDataIndex_20].VehInfoDataSize;
  _13 = (long unsigned int) _12;
  VehInfoDataSize_33 = _13 + VehInfoDataSize_19;
  # DEBUG VehInfoDataSize => VehInfoDataSize_33
  # DEBUG BEGIN_STMT
  VehInfoDataIndex_34 = VehInfoDataIndex_20 + 1;
  # DEBUG VehInfoDataIndex => VehInfoDataIndex_34

  <bb 9> [local count: 197168573]:
  # VehInfoDataSize_19 = PHI <0(7), VehInfoDataSize_33(8)>
  # VehInfoDataIndex_20 = PHI <VehInfoDataIndex_27(7), VehInfoDataIndex_34(8)>
  # DEBUG VehInfoDataIndex => VehInfoDataIndex_20
  # DEBUG VehInfoDataSize => VehInfoDataSize_19
  # DEBUG BEGIN_STMT
  _14 = (long unsigned int) EndIndexOfVehInfoData_26;
  if (_14 > VehInfoDataIndex_20)
    goto <bb 8>; [66.67%]
  else
    goto <bb 10>; [33.33%]

  <bb 10> [local count: 65716285]:
  # VehInfoDataSize_24 = PHI <VehInfoDataSize_19(9)>
  # DEBUG BEGIN_STMT
  _15 = ResBuffer_28(D)->Size;
  if (_15 >= VehInfoDataSize_24)
    goto <bb 11>; [5.50%]
  else
    goto <bb 12>; [94.50%]

  <bb 11> [local count: 3614396]:
  # vehInfoIndex_17 = PHI <vehInfoIndex_18(10)>
  # DEBUG BEGIN_STMT
  _16 = (unsigned char) vehInfoIndex_17;
  svcContext_29(D)->currentVehInfoIdx = _16;
  # DEBUG BEGIN_STMT
  svcContext_29(D)->currentVehInfoDataIdx = 0;
  # DEBUG BEGIN_STMT
  svcContext_29(D)->BufferCfgPtr = ResBuffer_28(D);
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 15>; [100.00%]

  <bb 12> [local count: 712249280]:
  # DEBUG BEGIN_STMT
  vehInfoIndex_35 = vehInfoIndex_18 + 1;
  # DEBUG vehInfoIndex => vehInfoIndex_35

  <bb 13> [local count: 1073741824]:
  # vehInfoIndex_18 = PHI <vehInfoIndex_35(12), 0(16)>
  # DEBUG vehInfoIndex => vehInfoIndex_18
  # DEBUG BEGIN_STMT
  if (vehInfoIndex_18 != 2)
    goto <bb 5>; [66.67%]
  else
    goto <bb 14>; [33.33%]

  <bb 14> [local count: 538624424]:
  # DEBUG retVal => NULL
  # DEBUG BEGIN_STMT
  svcContext_29(D)->nrc = 49;

  <bb 15> [local count: 722985092]:
  # retVal_38 = PHI <0(11), 1(14), 0(4)>
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_38;

}



;; Function Dcm_Dsp_VinServices_HelperExecute (Dcm_Dsp_VinServices_HelperExecute, funcdef_no=1, decl_uid=6604, cgraph_uid=2, symbol_order=2)

Modification phase of node Dcm_Dsp_VinServices_HelperExecute/2
Dcm_Dsp_VinServices_HelperExecute (Dcm_OpStatusType OpStatus, Dcm_DspVehInfoInfoTypeType VehInfoInfoType, struct Dcm_DspReqVehInfoContextType * svcContext)
{
  Std_ReturnType retVal;
  unsigned char _1;
  struct Dcm_DspMsgBufferCfgType * _2;
  unsigned char _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = VehInfoInfoType_6(D) & 31;
  if (_1 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _2 = svcContext_9(D)->BufferCfgPtr;
  retVal_13 = Dcm_RequestVehicleInformation_HelperExecuteAvailableInfoType (VehInfoInfoType_6(D), _2);
  # DEBUG retVal => retVal_13
  # DEBUG BEGIN_STMT
  if (retVal_13 == 1)
    goto <bb 4>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 4> [local count: 182536110]:
  # DEBUG BEGIN_STMT
  _3 = Dcm_DspReqVehInfoContext.nrc;
  svcContext_9(D)->nrc = _3;
  goto <bb 6>; [100.00%]

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  retVal_11 = Dcm_RequestVehicleInformation_HelperExecuteNonAvailableInfoType (OpStatus_8(D), svcContext_9(D));
  # DEBUG retVal => retVal_11

  <bb 6> [local count: 1073741824]:
  # retVal_4 = PHI <1(4), retVal_11(5), retVal_13(3)>
  # DEBUG retVal => retVal_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return retVal_4;

}



;; Function Dcm_Dsp_VinServices_HelperCancel (Dcm_Dsp_VinServices_HelperCancel, funcdef_no=2, decl_uid=6606, cgraph_uid=3, symbol_order=3)

Modification phase of node Dcm_Dsp_VinServices_HelperCancel/3
Dcm_Dsp_VinServices_HelperCancel (struct Dcm_DspReqVehInfoContextType * svcContext)
{
  uint8 * const pBuffer;
  const uint8 currDataIdx;
  unsigned char _1;
  int _2;
  unsigned char _3;
  unsigned char _4;
  int _5;
  int _6;
  int _7;
  struct Dcm_DspMsgBufferCfgType * _8;
  Std_ReturnType (*<T73e>) (Dcm_OpStatusType, uint8 *) _9;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = svcContext_12(D)->currentVehInfoIdx;
  if (_1 <= 1)
    goto <bb 3>; [41.00%]
  else
    goto <bb 5>; [59.00%]

  <bb 3> [local count: 440234148]:
  # DEBUG BEGIN_STMT
  _2 = (int) _1;
  # DEBUG D#1 => &Dcm_DspVehInfo[_2]
  # DEBUG pVehInfo => D#1
  # DEBUG BEGIN_STMT
  currDataIdx_13 = svcContext_12(D)->currentVehInfoDataIdx;
  # DEBUG currDataIdx => currDataIdx_13
  # DEBUG BEGIN_STMT
  _3 = MEM[(const struct Dcm_DspVehInfoType *)&Dcm_DspVehInfo][_2].NumOfVehInfoData;
  if (_3 > currDataIdx_13)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 220117074]:
  # DEBUG BEGIN_STMT
  _4 = MEM[(const struct Dcm_DspVehInfoType *)&Dcm_DspVehInfo][_2].StartIndexOfVehInfoData;
  _5 = (int) _4;
  _6 = (int) currDataIdx_13;
  _7 = _5 + _6;
  # DEBUG D#2 => &Dcm_DspVehInfoData[_7]
  # DEBUG pVehInfoData => D#2
  # DEBUG BEGIN_STMT
  _8 = svcContext_12(D)->BufferCfgPtr;
  pBuffer_14 = _8->BufferPtr;
  # DEBUG pBuffer => pBuffer_14
  # DEBUG BEGIN_STMT
  _9 = MEM[(const struct Dcm_DspVehInfoDataType *)&Dcm_DspVehInfoData][_7].GetInfotypeValueDataFunctionPointer;
  _9 (2, pBuffer_14);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  svcContext_12(D)->currentVehInfoIdx = 2;
  # DEBUG BEGIN_STMT
  svcContext_12(D)->currentVehInfoDataIdx = 0;
  # DEBUG BEGIN_STMT
  svcContext_12(D)->BufferCfgPtr = 0B;
  # DEBUG BEGIN_STMT
  svcContext_12(D)->nrc = 0;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_VinServices_LockService (Dcm_Dsp_VinServices_LockService, funcdef_no=3, decl_uid=6594, cgraph_uid=4, symbol_order=4)

Modification phase of node Dcm_Dsp_VinServices_LockService/4
Dcm_Dsp_VinServices_LockService ()
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 31
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  RetVal_3 = Dcm_Internal_GetLock (&Dcm_Dsp_VinServices_ServiceBusy);
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function Dcm_Dsp_VinServices_UnlockService (Dcm_Dsp_VinServices_UnlockService, funcdef_no=4, decl_uid=6596, cgraph_uid=5, symbol_order=5)

Modification phase of node Dcm_Dsp_VinServices_UnlockService/5
Dcm_Dsp_VinServices_UnlockService ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Dcm_Internal_ReleaseLock (&Dcm_Dsp_VinServices_ServiceBusy);
  # DEBUG BEGIN_STMT
  return;

}


