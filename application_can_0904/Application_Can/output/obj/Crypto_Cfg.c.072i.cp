
IPA constant propagation start:
Determining dynamic type for call: _29 = Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate (ObjectId_44(D), Busy.25_27, RetVal.26_28, Job_45(D));
  Starting walk at: _29 = Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate (ObjectId_44(D), Busy.25_27, RetVal.26_28, Job_45(D));
  instance pointer: Job_45(D)  Outer instance pointer: Job_45(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Crypto_AL_MACVERIFY_AES_CMAC_Start (ObjectId_44(D), Job_45(D));
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (&RetVal, &Busy);
  Function call may change dynamic type:_15 = Crypto_AL_MACVERIFY_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  Function call may change dynamic type:_18 = Crypto_AL_MACVERIFY_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  Function call may change dynamic type:Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (&RetVal, &Busy);
  Function call may change dynamic type:_24 = Crypto_AL_MACVERIFY_AES_CMAC_Finish (ObjectId_44(D), Job_45(D));
Determining dynamic type for call: _29 = Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate (ObjectId_44(D), Busy.10_27, RetVal.11_28, Job_45(D));
  Starting walk at: _29 = Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate (ObjectId_44(D), Busy.10_27, RetVal.11_28, Job_45(D));
  instance pointer: Job_45(D)  Outer instance pointer: Job_45(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 = Crypto_AL_MACGENERATE_AES_CMAC_Start (ObjectId_44(D), Job_45(D));
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (&RetVal, &Busy);
  Function call may change dynamic type:_15 = Crypto_AL_MACGENERATE_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  Function call may change dynamic type:_18 = Crypto_AL_MACGENERATE_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  Function call may change dynamic type:Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (&RetVal, &Busy);
  Function call may change dynamic type:_24 = Crypto_AL_MACGENERATE_AES_CMAC_Finish (ObjectId_44(D), Job_45(D));

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Cancel/84:
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Finish/83:
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Update/82:
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/81:
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_Start/80:
  Jump functions of caller  Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/79:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Cancel/78:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Finish/77:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Update/76:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/75:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_Start/74:
  Jump functions of caller  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73:
  Jump functions of caller  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72:
  Jump functions of caller  Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/71:
  Jump functions of caller  Crypto_PL_MainFunction/70:
  Jump functions of caller  Crypto_PL_MACVERIFY_AES_CMAC_Cancel/69:
  Jump functions of caller  Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68:
  Jump functions of caller  Crypto_PL_MACVERIFY_AES_CMAC_Process/67:
    callsite  Crypto_PL_MACVERIFY_AES_CMAC_Process/67 -> Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Crypto_PL_MACGENERATE_AES_CMAC_Cancel/66:
  Jump functions of caller  Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65:
  Jump functions of caller  Crypto_PL_MACGENERATE_AES_CMAC_Process/64:
    callsite  Crypto_PL_MACGENERATE_AES_CMAC_Process/64 -> Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 2: UNKNOWN
         value: 0x0, mask: 0xff
         Unknown VR
       param 3: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering Crypto_PL_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_MACVERIFY_AES_CMAC_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_MACVERIFY_AES_CMAC_Process for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_MACGENERATE_AES_CMAC_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate for cloning; -fipa-cp-clone disabled.
Not considering Crypto_PL_MACGENERATE_AES_CMAC_Process for cloning; -fipa-cp-clone disabled.

overall_size: 349, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Crypto_PL_MainFunction/70:
  Node: Crypto_PL_MACVERIFY_AES_CMAC_Cancel/69:
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
  Node: Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68:
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
  Node: Crypto_PL_MACVERIFY_AES_CMAC_Process/67:
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
  Node: Crypto_PL_MACGENERATE_AES_CMAC_Cancel/66:
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
  Node: Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65:
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
  Node: Crypto_PL_MACGENERATE_AES_CMAC_Process/64:
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

Crypto_AL_MACVERIFY_AES_CMAC_Cancel/84 (Crypto_AL_MACVERIFY_AES_CMAC_Cancel) @06c8dee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Cancel/69 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_MACVERIFY_AES_CMAC_Finish/83 (Crypto_AL_MACVERIFY_AES_CMAC_Finish) @06c8dc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (40320000 (estimated locally),0.04 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68 (236223200 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_MACVERIFY_AES_CMAC_Update/82 (Crypto_AL_MACVERIFY_AES_CMAC_Update) @06c8db60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (40320000 (estimated locally),0.04 per call) 
  Calls: 
Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/81 (Crypto_AL_MACVERIFY_AES_CMAC_MainFunction) @06c8da80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MainFunction/70 (1073741824 (estimated locally),1.00 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (229965778 (estimated locally),0.21 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (509924117 (estimated locally),0.47 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68 (1073741824 (estimated locally),4.55 per call) 
  Calls: 
Crypto_AL_MACVERIFY_AES_CMAC_Start/80 (Crypto_AL_MACVERIFY_AES_CMAC_Start) @06c8d9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (329950898 (estimated locally),0.31 per call) 
  Calls: 
Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/79 (Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall) @06c8d8c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (73890617 (estimated locally),0.07 per call) 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_Cancel/78 (Crypto_AL_MACGENERATE_AES_CMAC_Cancel) @06c8d540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACGENERATE_AES_CMAC_Cancel/66 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_Finish/77 (Crypto_AL_MACGENERATE_AES_CMAC_Finish) @06c8d2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (40320000 (estimated locally),0.04 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65 (236223200 (estimated locally),1.00 per call) 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_Update/76 (Crypto_AL_MACGENERATE_AES_CMAC_Update) @06c8d1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (40320000 (estimated locally),0.04 per call) 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/75 (Crypto_AL_MACGENERATE_AES_CMAC_MainFunction) @06c8d0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MainFunction/70 (1073741824 (estimated locally),1.00 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (229965778 (estimated locally),0.21 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (509924117 (estimated locally),0.47 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65 (1073741824 (estimated locally),4.55 per call) 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_Start/74 (Crypto_AL_MACGENERATE_AES_CMAC_Start) @06c8d000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (329950898 (estimated locally),0.31 per call) 
  Calls: 
SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06c65e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (354334802 (estimated locally),0.33 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (73890617 (estimated locally),0.07 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (354334802 (estimated locally),0.33 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (73890617 (estimated locally),0.07 per call) 
  Calls: 
SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT) @06c65d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (354334802 (estimated locally),0.33 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (73890617 (estimated locally),0.07 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (354334802 (estimated locally),0.33 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (73890617 (estimated locally),0.07 per call) 
  Calls: 
Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/71 (Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall) @06c65c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (73890617 (estimated locally),0.07 per call) 
  Calls: 
Crypto_PL_MainFunction/70 (Crypto_PL_MainFunction) @06c65b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/81 (1073741824 (estimated locally),1.00 per call) Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/75 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_MACVERIFY_AES_CMAC_Cancel/69 (Crypto_PL_MACVERIFY_AES_CMAC_Cancel) @06c659a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACVERIFY_AES_CMAC_Cancel/84 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68 (Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate) @06c657e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (50592471 (estimated locally),0.05 per call) 
  Calls: Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/81 (1073741824 (estimated locally),4.55 per call) Crypto_AL_MACVERIFY_AES_CMAC_Finish/83 (236223200 (estimated locally),1.00 per call) 
Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (Crypto_PL_MACVERIFY_AES_CMAC_Process) @06c65620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (354334802 (estimated locally),0.33 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (354334802 (estimated locally),0.33 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (50592471 (estimated locally),0.05 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68 (50592471 (estimated locally),0.05 per call) Crypto_AL_MACVERIFY_AES_CMAC_Finish/83 (40320000 (estimated locally),0.04 per call) Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/81 (229965778 (estimated locally),0.21 per call) Crypto_AL_MACVERIFY_AES_CMAC_Update/82 (50592471 (estimated locally),0.05 per call) Crypto_AL_MACVERIFY_AES_CMAC_Update/82 (40320000 (estimated locally),0.04 per call) Crypto_AL_MACVERIFY_AES_CMAC_MainFunction/81 (509924117 (estimated locally),0.47 per call) Crypto_AL_MACVERIFY_AES_CMAC_Start/80 (329950898 (estimated locally),0.31 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (73890617 (estimated locally),0.07 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (73890617 (estimated locally),0.07 per call) Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall/79 (73890617 (estimated locally),0.07 per call) 
Crypto_PL_MACGENERATE_AES_CMAC_Cancel/66 (Crypto_PL_MACGENERATE_AES_CMAC_Cancel) @06c65460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Crypto_AL_MACGENERATE_AES_CMAC_Cancel/78 (1073741824 (estimated locally),1.00 per call) 
Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65 (Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate) @06c652a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:236223200 (estimated locally) body optimize_size
  Called by: Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (50592471 (estimated locally),0.05 per call) 
  Calls: Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/75 (1073741824 (estimated locally),4.55 per call) Crypto_AL_MACGENERATE_AES_CMAC_Finish/77 (236223200 (estimated locally),1.00 per call) 
Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (Crypto_PL_MACGENERATE_AES_CMAC_Process) @06c650e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)Crypto_DriverObjects/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (354334802 (estimated locally),0.33 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (354334802 (estimated locally),0.33 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (50592471 (estimated locally),0.05 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (50592471 (estimated locally),0.05 per call) Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65 (50592471 (estimated locally),0.05 per call) Crypto_AL_MACGENERATE_AES_CMAC_Finish/77 (40320000 (estimated locally),0.04 per call) Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/75 (229965778 (estimated locally),0.21 per call) Crypto_AL_MACGENERATE_AES_CMAC_Update/76 (50592471 (estimated locally),0.05 per call) Crypto_AL_MACGENERATE_AES_CMAC_Update/76 (40320000 (estimated locally),0.04 per call) Crypto_AL_MACGENERATE_AES_CMAC_MainFunction/75 (509924117 (estimated locally),0.47 per call) Crypto_AL_MACGENERATE_AES_CMAC_Start/74 (329950898 (estimated locally),0.31 per call) SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/73 (73890617 (estimated locally),0.07 per call) SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT/72 (73890617 (estimated locally),0.07 per call) Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall/71 (73890617 (estimated locally),0.07 per call) 
Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE/63 (Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE) @06c61900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE/62 (Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE) @06c618b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE/61 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE) @06c61870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE/60 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE) @06c61828
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE/59 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE) @06c617e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE/58 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE) @06c61798
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE/57 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE) @06c61750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE/56 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE) @06c61708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE/55 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE) @06c616c0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE/54 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE) @06c61678
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE/53 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE) @06c61630
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE/52 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE) @06c615e8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE/51 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE) @06c615a0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE/50 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE) @06c61558
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE/49 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE) @06c61510
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE/48 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE) @06c614c8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE/47 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE) @06c61480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE/46 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE) @06c61438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE/45 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE) @06c613f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE/44 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE) @06c613a8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE/43 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE) @06c61360
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE/42 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE) @06c61318
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE/41 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE) @06c612d0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE/40 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE) @06c61288
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE/39 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE) @06c61240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE/38 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE) @06c611f8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE/37 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE) @06c611b0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE/36 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE) @06c61168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE/35 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE) @06c61120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE/34 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE) @06c610d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE/33 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE) @06c61090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE/32 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE) @06c61048
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE/31 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE) @06c61000
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE/30 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE) @06c09c60
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE/29 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE) @06c09f78
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE/28 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE) @06c09f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE/27 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE) @06c09ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE/26 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE) @06c09ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE/25 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE) @06c09e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE/24 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE) @06c09e10
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE/23 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE) @06c09dc8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE/22 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE) @06c09d38
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE/21 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE) @06c09ca8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE/20 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE) @06c09c18
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE/19 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE) @06c09bd0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE/18 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE) @06c09b88
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE/17 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE) @06c09b40
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE/16 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE) @06c09af8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE/15 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE) @06c09ab0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE/14 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE) @06c09a68
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE/13 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE) @06c09a20
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE/12 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE) @06c099d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE/11 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE) @06c09990
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE/10 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE) @06c09948
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE/9 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE) @06c09900
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE/8 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE) @06c098b8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE/7 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE) @06c09870
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE/6 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE) @06c09828
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE/5 (Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE) @06c097e0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_KeyElements/2 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_DriverObjects/4 (Crypto_DriverObjects) @06c09798
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACGENERATE_AES_CMAC_Process/64 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)Crypto_PL_MACVERIFY_AES_CMAC_Process/67 (write)
  Availability: available
  Varpool flags: initialized
Crypto_Keys/3 (Crypto_Keys) @06c09750
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Crypto_KeyType0/0 (addr)Crypto_KeyType1/1 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized
Crypto_KeyElements/2 (Crypto_KeyElements) @06c09708
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_IV_INIT_VALUE/5 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_KEY_INIT_VALUE/6 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CMAC_KEY_INIT_VALUE/7 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_HMAC_KEY_INIT_VALUE/8 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIPHASH_KEY_INIT_VALUE/9 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP256R1_INIT_VALUE/10 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_SECP384R1_INIT_VALUE/11 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_OWNPUBKEY_X25519_INIT_VALUE/12 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP256R1_INIT_VALUE/13 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_SECP384R1_INIT_VALUE/14 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_PRIVKEY_X25519_INIT_VALUE/15 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP256R1_INIT_VALUE/16 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_SECP384R1_INIT_VALUE/17 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_SHAREDVALUE_X25519_INIT_VALUE/18 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_ECCNIST_INIT_VALUE/19 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_X25519_INIT_VALUE/20 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP256R1_INIT_VALUE/21 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_SECP384R1_INIT_VALUE/22 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_X25519_INIT_VALUE/23 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_SIGNATURE_KEY_INIT_VALUE/24 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_CURRENT_TIME_INIT_VALUE/25 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_DATA_INIT_VALUE/26 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_EXTENSIONS_INIT_VALUE/27 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_ISSUER_INIT_VALUE/28 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_PARSING_FORMAT_INIT_VALUE/29 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SERIALNUMBER_INIT_VALUE/30 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_INIT_VALUE/31 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SIGNATURE_ALGORITHM_INIT_VALUE/32 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_INIT_VALUE/33 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_SUBJECT_PUBLIC_KEY_INIT_VALUE/34 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_AFTER_INIT_VALUE/35 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VALIDITY_NOT_BEFORE_INIT_VALUE/36 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CERTIFICATE_VERSION_INIT_VALUE/37 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_CTRDRBG_INIT_VALUE/38 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_COUNT_CTRDRBG_INIT_VALUE/39 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_SEED_STATE_SSG_INIT_VALUE/40 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_CTRDRBG_INIT_VALUE/41 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RANDOM_ALGORITHM_SSG_INIT_VALUE/42 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_PASSWORD_INIT_VALUE/43 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_SALT_INIT_VALUE/44 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_HMAC_SHA2256_INIT_VALUE/45 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ALGORITHM_SHA_SHA2256_INIT_VALUE/46 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_AES_EXPANDEDKEY_INIT_VALUE/47 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY1_INIT_VALUE/48 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_AESCMAC_SUBKEY2_INIT_VALUE/49 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_BARRETT_INIT_VALUE/50 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_RSA_ADDITIONAL_INPUT_INIT_VALUE/51 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_2NDKEY_INIT_VALUE/52 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_CIPHER_PROOF_INIT_VALUE/53 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYDERIVATION_ITERATIONS_INIT_VALUE/54 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_ALGORITHM_INIT_VALUE/55 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_CURVE_INIT_VALUE/56 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYEXCHANGE_BASE_INIT_VALUE/57 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_ALGORITHM_INIT_VALUE/58 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_KEY_INIT_VALUE/59 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_KEYGENERATE_SEED_INIT_VALUE/60 (addr)Crypto_CRYPTOKEYELEMENT_CRYPTO_KE_MAC_PROOF_INIT_VALUE/61 (addr)Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE/62 (addr)Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE/63 (addr)
  Referring: Crypto_KeyType1/1 (addr)Crypto_KeyType1/1 (addr)Crypto_KeyType0/0 (addr)Crypto_KeyType0/0 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_KeyType1/1 (Crypto_KeyType1) @06be65e8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_KeyElements/2 (addr)Crypto_KeyElements/2 (addr)
  Referring: Crypto_Keys/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
Crypto_KeyType0/0 (Crypto_KeyType0) @06be65a0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_KeyElements/2 (addr)Crypto_KeyElements/2 (addr)
  Referring: Crypto_Keys/3 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known

;; Function Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate (Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate, funcdef_no=1, decl_uid=5606, cgraph_uid=2, symbol_order=65)

Modification phase of node Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate/65
Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate (uint32 ObjectId, boolean Busy, Std_ReturnType RetVal, struct Crypto_JobType * Job)
{
  unsigned char _1;
  unsigned char Busy.14_2;
  Std_ReturnType _11;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_MACGENERATE_AES_CMAC_Finish (ObjectId_6(D), Job_7(D));
  RetVal = _1;
  # DEBUG BEGIN_STMT
  if (_1 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 5> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (&RetVal, &Busy);
  # DEBUG BEGIN_STMT
  Busy.14_2 = Busy;
  if (Busy.14_2 == 1)
    goto <bb 6>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 6> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 236223201]:
  # DEBUG BEGIN_STMT
  _11 = RetVal;
  return _11;

}



;; Function Crypto_PL_MACGENERATE_AES_CMAC_Process (Crypto_PL_MACGENERATE_AES_CMAC_Process, funcdef_no=0, decl_uid=5598, cgraph_uid=1, symbol_order=64)

Modification phase of node Crypto_PL_MACGENERATE_AES_CMAC_Process/64
Crypto_PL_MACGENERATE_AES_CMAC_Process (uint32 ObjectId, struct Crypto_JobType * Job)
{
  boolean Busy;
  Std_ReturnType RetVal;
  const struct Crypto_JobPrimitiveInfoType * _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  const struct Crypto_JobPrimitiveInfoType * _7;
  unsigned char _8;
  unsigned char RetVal.4_9;
  unsigned char Busy.5_10;
  unsigned char RetVal.6_11;
  unsigned char _12;
  const struct Crypto_JobPrimitiveInfoType * _13;
  unsigned char _14;
  unsigned char _15;
  const struct Crypto_JobPrimitiveInfoType * _16;
  unsigned char _17;
  unsigned char _18;
  unsigned char Busy.8_19;
  unsigned char RetVal.9_20;
  unsigned char _21;
  const struct Crypto_JobPrimitiveInfoType * _22;
  unsigned char _23;
  unsigned char _24;
  const struct Crypto_JobPrimitiveInfoType * _25;
  unsigned char _26;
  unsigned char Busy.10_27;
  unsigned char RetVal.11_28;
  unsigned char _29;
  unsigned char RetVal.12_30;
  Std_ReturnType _80;
  unsigned char _83;
  unsigned char _84;
  unsigned char _85;
  unsigned char _86;
  unsigned char _87;
  unsigned char _88;
  unsigned char _89;
  unsigned char _90;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  RetVal = 0;
  # DEBUG BEGIN_STMT
  Busy = 1;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => &Crypto_DriverObjects[ObjectId_44(D)]
  # DEBUG DriverObj => D#1
  # DEBUG BEGIN_STMT
  _1 = Job_45(D)->jobPrimitiveInfo;
  _2 = _1->processingType;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _83 = _3 & 7;
  if (_83 == 7)
    goto <bb 4>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  _4 = Crypto_AL_MACGENERATE_AES_CMAC_SyncSingleCall (ObjectId_44(D), Job_45(D));
  RetVal = _4;
  # DEBUG BEGIN_STMT
  if (_4 == 8)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 48767807]:
  if (_4 == 6)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 41703864]:
  # DEBUG BEGIN_STMT
  RetVal = 1;

  <bb 7> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  Job_45(D)->jobState = 0;
  goto <bb 32>; [100.00%]

  <bb 8> [local count: 999851206]:
  # DEBUG BEGIN_STMT
  _5 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _84 = _5 & 1;
  if (_84 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 9> [local count: 329950898]:
  # DEBUG BEGIN_STMT
  _6 = Crypto_AL_MACGENERATE_AES_CMAC_Start (ObjectId_44(D), Job_45(D));
  RetVal = _6;
  # DEBUG BEGIN_STMT
  if (_6 == 8)
    goto <bb 11>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 217767592]:
  if (_6 == 6)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 186224287]:
  # DEBUG BEGIN_STMT
  RetVal = 1;

  <bb 12> [local count: 329950898]:
  # DEBUG BEGIN_STMT
  _7 = Job_45(D)->jobPrimitiveInfo;
  _8 = _7->processingType;
  if (_8 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 13> [local count: 112183305]:
  RetVal.4_9 = RetVal;
  if (RetVal.4_9 == 0)
    goto <bb 36>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 36> [local count: 56091653]:

  <bb 14> [local count: 509924117]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (&RetVal, &Busy);
  # DEBUG BEGIN_STMT
  Busy.5_10 = Busy;
  if (Busy.5_10 == 1)
    goto <bb 38>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 38> [local count: 453832464]:
  goto <bb 14>; [100.00%]

  <bb 15> [local count: 999851206]:
  # DEBUG BEGIN_STMT
  RetVal.6_11 = RetVal;
  if (RetVal.6_11 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 16> [local count: 499925602]:
  _12 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _85 = _12 & 2;
  if (_85 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 17> [local count: 249962801]:
  # DEBUG BEGIN_STMT
  _13 = Job_45(D)->jobPrimitiveInfo;
  _14 = _13->processingType;
  if (_14 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 18> [local count: 124981401]:
  _86 = _12 & 3;
  if (_86 != 3)
    goto <bb 19>; [66.00%]
  else
    goto <bb 21>; [34.00%]

  <bb 19> [local count: 82487724]:
  _87 = _12 & 7;
  if (_87 != 7)
    goto <bb 20>; [48.88%]
  else
    goto <bb 21>; [51.12%]

  <bb 20> [local count: 40320000]:
  # DEBUG BEGIN_STMT
  _15 = Crypto_AL_MACGENERATE_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  RetVal = _15;

  <bb 21> [local count: 249962801]:
  # DEBUG BEGIN_STMT
  _16 = Job_45(D)->jobPrimitiveInfo;
  _17 = _16->processingType;
  if (_17 == 1)
    goto <bb 22>; [20.24%]
  else
    goto <bb 24>; [79.76%]

  <bb 22> [local count: 50592471]:
  # DEBUG BEGIN_STMT
  _18 = Crypto_AL_MACGENERATE_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  RetVal = _18;
  # DEBUG BEGIN_STMT
  if (_18 == 0)
    goto <bb 35>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 35> [local count: 25296235]:

  <bb 23> [local count: 229965778]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (&RetVal, &Busy);
  # DEBUG BEGIN_STMT
  Busy.8_19 = Busy;
  if (Busy.8_19 == 1)
    goto <bb 37>; [89.00%]
  else
    goto <bb 24>; [11.00%]

  <bb 37> [local count: 204669542]:
  goto <bb 23>; [100.00%]

  <bb 24> [local count: 999851207]:
  # DEBUG BEGIN_STMT
  RetVal.9_20 = RetVal;
  if (RetVal.9_20 == 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 25> [local count: 499925603]:
  _21 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _88 = _21 & 4;
  if (_88 != 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 26> [local count: 249962802]:
  # DEBUG BEGIN_STMT
  _22 = Job_45(D)->jobPrimitiveInfo;
  _23 = _22->processingType;
  if (_23 == 0)
    goto <bb 27>; [50.00%]
  else
    goto <bb 30>; [50.00%]

  <bb 27> [local count: 124981401]:
  _89 = _21 & 3;
  if (_89 != 3)
    goto <bb 28>; [66.00%]
  else
    goto <bb 30>; [34.00%]

  <bb 28> [local count: 82487725]:
  _90 = _21 & 7;
  if (_90 != 7)
    goto <bb 29>; [48.88%]
  else
    goto <bb 30>; [51.12%]

  <bb 29> [local count: 40320000]:
  # DEBUG BEGIN_STMT
  _24 = Crypto_AL_MACGENERATE_AES_CMAC_Finish (ObjectId_44(D), Job_45(D));
  RetVal = _24;

  <bb 30> [local count: 249962802]:
  # DEBUG BEGIN_STMT
  _25 = Job_45(D)->jobPrimitiveInfo;
  _26 = _25->processingType;
  if (_26 == 1)
    goto <bb 31>; [20.24%]
  else
    goto <bb 32>; [79.76%]

  <bb 31> [local count: 50592471]:
  # DEBUG BEGIN_STMT
  Busy.10_27 = Busy;
  RetVal.11_28 = RetVal;
  _29 = Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate (ObjectId_44(D), Busy.10_27, RetVal.11_28, Job_45(D));
  RetVal = _29;
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  Job_45(D)->jobState = 0;

  <bb 32> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  RetVal.12_30 = RetVal;
  if (RetVal.12_30 != 0)
    goto <bb 33>; [33.00%]
  else
    goto <bb 34>; [67.00%]

  <bb 33> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  Job_45(D)->jobState = 0;

  <bb 34> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _80 = RetVal;
  RetVal ={v} {CLOBBER};
  Busy ={v} {CLOBBER};
  return _80;

}



;; Function Crypto_PL_MACGENERATE_AES_CMAC_Cancel (Crypto_PL_MACGENERATE_AES_CMAC_Cancel, funcdef_no=2, decl_uid=5601, cgraph_uid=3, symbol_order=66)

Modification phase of node Crypto_PL_MACGENERATE_AES_CMAC_Cancel/66
Crypto_PL_MACGENERATE_AES_CMAC_Cancel (uint32 ObjectId, struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_AL_MACGENERATE_AES_CMAC_Cancel (ObjectId_2(D), Job_3(D));
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate (Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate, funcdef_no=4, decl_uid=5617, cgraph_uid=5, symbol_order=68)

Modification phase of node Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate/68
Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate (uint32 ObjectId, boolean Busy, Std_ReturnType RetVal, struct Crypto_JobType * Job)
{
  unsigned char _1;
  unsigned char Busy.29_2;
  Std_ReturnType _11;

  <bb 2> [local count: 236223200]:
  # DEBUG BEGIN_STMT
  _1 = Crypto_AL_MACVERIFY_AES_CMAC_Finish (ObjectId_6(D), Job_7(D));
  RetVal = _1;
  # DEBUG BEGIN_STMT
  if (_1 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 5> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (&RetVal, &Busy);
  # DEBUG BEGIN_STMT
  Busy.29_2 = Busy;
  if (Busy.29_2 == 1)
    goto <bb 6>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 6> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 236223201]:
  # DEBUG BEGIN_STMT
  _11 = RetVal;
  return _11;

}



;; Function Crypto_PL_MACVERIFY_AES_CMAC_Process (Crypto_PL_MACVERIFY_AES_CMAC_Process, funcdef_no=3, decl_uid=5609, cgraph_uid=4, symbol_order=67)

Modification phase of node Crypto_PL_MACVERIFY_AES_CMAC_Process/67
Crypto_PL_MACVERIFY_AES_CMAC_Process (uint32 ObjectId, struct Crypto_JobType * Job)
{
  boolean Busy;
  Std_ReturnType RetVal;
  const struct Crypto_JobPrimitiveInfoType * _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;
  const struct Crypto_JobPrimitiveInfoType * _7;
  unsigned char _8;
  unsigned char RetVal.19_9;
  unsigned char Busy.20_10;
  unsigned char RetVal.21_11;
  unsigned char _12;
  const struct Crypto_JobPrimitiveInfoType * _13;
  unsigned char _14;
  unsigned char _15;
  const struct Crypto_JobPrimitiveInfoType * _16;
  unsigned char _17;
  unsigned char _18;
  unsigned char Busy.23_19;
  unsigned char RetVal.24_20;
  unsigned char _21;
  const struct Crypto_JobPrimitiveInfoType * _22;
  unsigned char _23;
  unsigned char _24;
  const struct Crypto_JobPrimitiveInfoType * _25;
  unsigned char _26;
  unsigned char Busy.25_27;
  unsigned char RetVal.26_28;
  unsigned char _29;
  unsigned char RetVal.27_30;
  Std_ReturnType _80;
  unsigned char _83;
  unsigned char _84;
  unsigned char _85;
  unsigned char _86;
  unsigned char _87;
  unsigned char _88;
  unsigned char _89;
  unsigned char _90;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  RetVal = 0;
  # DEBUG BEGIN_STMT
  Busy = 1;
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => &Crypto_DriverObjects[ObjectId_44(D)]
  # DEBUG DriverObj => D#2
  # DEBUG BEGIN_STMT
  _1 = Job_45(D)->jobPrimitiveInfo;
  _2 = _1->processingType;
  if (_2 == 1)
    goto <bb 3>; [34.00%]
  else
    goto <bb 8>; [66.00%]

  <bb 3> [local count: 365072220]:
  _3 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _83 = _3 & 7;
  if (_83 == 7)
    goto <bb 4>; [20.24%]
  else
    goto <bb 8>; [79.76%]

  <bb 4> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  _4 = Crypto_AL_MACVERIFY_AES_CMAC_SyncSingleCall (ObjectId_44(D), Job_45(D));
  RetVal = _4;
  # DEBUG BEGIN_STMT
  if (_4 == 8)
    goto <bb 6>; [34.00%]
  else
    goto <bb 5>; [66.00%]

  <bb 5> [local count: 48767807]:
  if (_4 == 6)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 41703864]:
  # DEBUG BEGIN_STMT
  RetVal = 1;

  <bb 7> [local count: 73890617]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  Job_45(D)->jobState = 0;
  goto <bb 32>; [100.00%]

  <bb 8> [local count: 999851206]:
  # DEBUG BEGIN_STMT
  _5 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _84 = _5 & 1;
  if (_84 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 15>; [67.00%]

  <bb 9> [local count: 329950898]:
  # DEBUG BEGIN_STMT
  _6 = Crypto_AL_MACVERIFY_AES_CMAC_Start (ObjectId_44(D), Job_45(D));
  RetVal = _6;
  # DEBUG BEGIN_STMT
  if (_6 == 8)
    goto <bb 11>; [34.00%]
  else
    goto <bb 10>; [66.00%]

  <bb 10> [local count: 217767592]:
  if (_6 == 6)
    goto <bb 11>; [34.00%]
  else
    goto <bb 12>; [66.00%]

  <bb 11> [local count: 186224287]:
  # DEBUG BEGIN_STMT
  RetVal = 1;

  <bb 12> [local count: 329950898]:
  # DEBUG BEGIN_STMT
  _7 = Job_45(D)->jobPrimitiveInfo;
  _8 = _7->processingType;
  if (_8 == 1)
    goto <bb 13>; [34.00%]
  else
    goto <bb 15>; [66.00%]

  <bb 13> [local count: 112183305]:
  RetVal.19_9 = RetVal;
  if (RetVal.19_9 == 0)
    goto <bb 36>; [50.00%]
  else
    goto <bb 15>; [50.00%]

  <bb 36> [local count: 56091653]:

  <bb 14> [local count: 509924117]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (&RetVal, &Busy);
  # DEBUG BEGIN_STMT
  Busy.20_10 = Busy;
  if (Busy.20_10 == 1)
    goto <bb 38>; [89.00%]
  else
    goto <bb 15>; [11.00%]

  <bb 38> [local count: 453832464]:
  goto <bb 14>; [100.00%]

  <bb 15> [local count: 999851206]:
  # DEBUG BEGIN_STMT
  RetVal.21_11 = RetVal;
  if (RetVal.21_11 == 0)
    goto <bb 16>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 16> [local count: 499925602]:
  _12 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _85 = _12 & 2;
  if (_85 != 0)
    goto <bb 17>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 17> [local count: 249962801]:
  # DEBUG BEGIN_STMT
  _13 = Job_45(D)->jobPrimitiveInfo;
  _14 = _13->processingType;
  if (_14 == 0)
    goto <bb 18>; [50.00%]
  else
    goto <bb 21>; [50.00%]

  <bb 18> [local count: 124981401]:
  _86 = _12 & 3;
  if (_86 != 3)
    goto <bb 19>; [66.00%]
  else
    goto <bb 21>; [34.00%]

  <bb 19> [local count: 82487724]:
  _87 = _12 & 7;
  if (_87 != 7)
    goto <bb 20>; [48.88%]
  else
    goto <bb 21>; [51.12%]

  <bb 20> [local count: 40320000]:
  # DEBUG BEGIN_STMT
  _15 = Crypto_AL_MACVERIFY_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  RetVal = _15;

  <bb 21> [local count: 249962801]:
  # DEBUG BEGIN_STMT
  _16 = Job_45(D)->jobPrimitiveInfo;
  _17 = _16->processingType;
  if (_17 == 1)
    goto <bb 22>; [20.24%]
  else
    goto <bb 24>; [79.76%]

  <bb 22> [local count: 50592471]:
  # DEBUG BEGIN_STMT
  _18 = Crypto_AL_MACVERIFY_AES_CMAC_Update (ObjectId_44(D), Job_45(D));
  RetVal = _18;
  # DEBUG BEGIN_STMT
  if (_18 == 0)
    goto <bb 35>; [50.00%]
  else
    goto <bb 24>; [50.00%]

  <bb 35> [local count: 25296235]:

  <bb 23> [local count: 229965778]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (&RetVal, &Busy);
  # DEBUG BEGIN_STMT
  Busy.23_19 = Busy;
  if (Busy.23_19 == 1)
    goto <bb 37>; [89.00%]
  else
    goto <bb 24>; [11.00%]

  <bb 37> [local count: 204669542]:
  goto <bb 23>; [100.00%]

  <bb 24> [local count: 999851207]:
  # DEBUG BEGIN_STMT
  RetVal.24_20 = RetVal;
  if (RetVal.24_20 == 0)
    goto <bb 25>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 25> [local count: 499925603]:
  _21 = Job_45(D)->jobPrimitiveInputOutput.mode;
  _88 = _21 & 4;
  if (_88 != 0)
    goto <bb 26>; [50.00%]
  else
    goto <bb 32>; [50.00%]

  <bb 26> [local count: 249962802]:
  # DEBUG BEGIN_STMT
  _22 = Job_45(D)->jobPrimitiveInfo;
  _23 = _22->processingType;
  if (_23 == 0)
    goto <bb 27>; [50.00%]
  else
    goto <bb 30>; [50.00%]

  <bb 27> [local count: 124981401]:
  _89 = _21 & 3;
  if (_89 != 3)
    goto <bb 28>; [66.00%]
  else
    goto <bb 30>; [34.00%]

  <bb 28> [local count: 82487725]:
  _90 = _21 & 7;
  if (_90 != 7)
    goto <bb 29>; [48.88%]
  else
    goto <bb 30>; [51.12%]

  <bb 29> [local count: 40320000]:
  # DEBUG BEGIN_STMT
  _24 = Crypto_AL_MACVERIFY_AES_CMAC_Finish (ObjectId_44(D), Job_45(D));
  RetVal = _24;

  <bb 30> [local count: 249962802]:
  # DEBUG BEGIN_STMT
  _25 = Job_45(D)->jobPrimitiveInfo;
  _26 = _25->processingType;
  if (_26 == 1)
    goto <bb 31>; [20.24%]
  else
    goto <bb 32>; [79.76%]

  <bb 31> [local count: 50592471]:
  # DEBUG BEGIN_STMT
  Busy.25_27 = Busy;
  RetVal.26_28 = RetVal;
  _29 = Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate (ObjectId_44(D), Busy.25_27, RetVal.26_28, Job_45(D));
  RetVal = _29;
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  Job_45(D)->jobState = 0;

  <bb 32> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  RetVal.27_30 = RetVal;
  if (RetVal.27_30 != 0)
    goto <bb 33>; [33.00%]
  else
    goto <bb 34>; [67.00%]

  <bb 33> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].DriverObjectState = 0;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].CurrentJob = 0B;
  # DEBUG BEGIN_STMT
  MEM[(struct Crypto_DriverObject *)&Crypto_DriverObjects][ObjectId_44(D)].SkipPeriodicMainFunction = 1;
  # DEBUG BEGIN_STMT
  SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT ();
  # DEBUG BEGIN_STMT
  Job_45(D)->jobState = 0;

  <bb 34> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _80 = RetVal;
  RetVal ={v} {CLOBBER};
  Busy ={v} {CLOBBER};
  return _80;

}



;; Function Crypto_PL_MACVERIFY_AES_CMAC_Cancel (Crypto_PL_MACVERIFY_AES_CMAC_Cancel, funcdef_no=5, decl_uid=5612, cgraph_uid=6, symbol_order=69)

Modification phase of node Crypto_PL_MACVERIFY_AES_CMAC_Cancel/69
Crypto_PL_MACVERIFY_AES_CMAC_Cancel (uint32 ObjectId, struct Crypto_JobType * Job)
{
  Std_ReturnType RetVal;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  RetVal_5 = Crypto_AL_MACVERIFY_AES_CMAC_Cancel (ObjectId_2(D), Job_3(D));
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function Crypto_PL_MainFunction (Crypto_PL_MainFunction, funcdef_no=6, decl_uid=5621, cgraph_uid=7, symbol_order=70)

Modification phase of node Crypto_PL_MainFunction/70
Crypto_PL_MainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Crypto_AL_MACGENERATE_AES_CMAC_MainFunction (0B, 0B);
  # DEBUG BEGIN_STMT
  Crypto_AL_MACVERIFY_AES_CMAC_MainFunction (0B, 0B);
  return;

}


