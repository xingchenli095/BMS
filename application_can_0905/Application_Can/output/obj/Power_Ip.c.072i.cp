
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Power_Ip_CM7_DisableSleepOnExit/20:
  Jump functions of caller  Power_Ip_CM7_EnableSleepOnExit/19:
  Jump functions of caller  Power_Ip_DCM_GPR_GlobalPadkeepingConfig/18:
  Jump functions of caller  Power_Ip_MC_RGM_ResetInit/17:
  Jump functions of caller  Power_Ip_MC_RGM_GetResetRawValue/16:
  Jump functions of caller  Power_Ip_MC_RGM_GetResetReason/15:
  Jump functions of caller  Power_Ip_MC_RGM_PerformReset/14:
  Jump functions of caller  Power_Ip_MC_ME_SocTriggerResetEvent/13:
  Jump functions of caller  Power_Ip_MC_ME_DisablePartitionClock/12:
  Jump functions of caller  Power_Ip_MC_ME_ConfigCoreCOFBClock/11:
  Jump functions of caller  Power_Ip_MC_ME_EnablePartitionClock/10:
  Jump functions of caller  Power_Ip_ReportPowerErrorsEmptyCallback/9:
  Jump functions of caller  Power_Ip_DisableSleepOnExit/8:
  Jump functions of caller  Power_Ip_EnableSleepOnExit/7:
  Jump functions of caller  Power_Ip_InstallNotificationsCallback/6:
  Jump functions of caller  Power_Ip_Init/5:
  Jump functions of caller  Power_Ip_GetResetRawValue/4:
  Jump functions of caller  Power_Ip_GetResetReason/3:
  Jump functions of caller  Power_Ip_PerformReset/2:
  Jump functions of caller  Power_Ip_SetMode/1:

 Propagating constants:

Not considering Power_Ip_DisableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_EnableSleepOnExit for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_InstallNotificationsCallback for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_Init for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_GetResetRawValue for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_GetResetReason for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_PerformReset for cloning; -fipa-cp-clone disabled.
Not considering Power_Ip_SetMode for cloning; -fipa-cp-clone disabled.

overall_size: 53, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Power_Ip_DisableSleepOnExit/8:
  Node: Power_Ip_EnableSleepOnExit/7:
  Node: Power_Ip_InstallNotificationsCallback/6:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_Init/5:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_GetResetRawValue/4:
  Node: Power_Ip_GetResetReason/3:
  Node: Power_Ip_PerformReset/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Power_Ip_SetMode/1:
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

Power_Ip_CM7_DisableSleepOnExit/20 (Power_Ip_CM7_DisableSleepOnExit) @07020ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_DisableSleepOnExit/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_CM7_EnableSleepOnExit/19 (Power_Ip_CM7_EnableSleepOnExit) @07020d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_EnableSleepOnExit/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_DCM_GPR_GlobalPadkeepingConfig/18 (Power_Ip_DCM_GPR_GlobalPadkeepingConfig) @07020a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_Init/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_RGM_ResetInit/17 (Power_Ip_MC_RGM_ResetInit) @070209a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_Init/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_RGM_GetResetRawValue/16 (Power_Ip_MC_RGM_GetResetRawValue) @070207e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_GetResetRawValue/4 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_RGM_GetResetReason/15 (Power_Ip_MC_RGM_GetResetReason) @07020620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_GetResetReason/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_RGM_PerformReset/14 (Power_Ip_MC_RGM_PerformReset) @07020460
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_PerformReset/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_ME_SocTriggerResetEvent/13 (Power_Ip_MC_ME_SocTriggerResetEvent) @070202a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (273804165 (estimated locally),0.25 per call) 
  Calls: 
Power_Ip_MC_ME_DisablePartitionClock/12 (Power_Ip_MC_ME_DisablePartitionClock) @070201c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_ME_ConfigCoreCOFBClock/11 (Power_Ip_MC_ME_ConfigCoreCOFBClock) @070200e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_MC_ME_EnablePartitionClock/10 (Power_Ip_MC_ME_EnablePartitionClock) @07020000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Power_Ip_SetMode/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Power_Ip_ReportPowerErrorsEmptyCallback/9 (Power_Ip_ReportPowerErrorsEmptyCallback) @07018e00
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Power_Ip_pfReportErrorsCallback/0 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Power_Ip_DisableSleepOnExit/8 (Power_Ip_DisableSleepOnExit) @07018d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM7_DisableSleepOnExit/20 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_EnableSleepOnExit/7 (Power_Ip_EnableSleepOnExit) @07018b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_CM7_EnableSleepOnExit/19 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_InstallNotificationsCallback/6 (Power_Ip_InstallNotificationsCallback) @070189a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_pfReportErrorsCallback/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Power_Ip_Init/5 (Power_Ip_Init) @070187e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_DCM_GPR_GlobalPadkeepingConfig/18 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_RGM_ResetInit/17 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_GetResetRawValue/4 (Power_Ip_GetResetRawValue) @07018620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_RGM_GetResetRawValue/16 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_GetResetReason/3 (Power_Ip_GetResetReason) @07018460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_RGM_GetResetReason/15 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_PerformReset/2 (Power_Ip_PerformReset) @070182a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_RGM_PerformReset/14 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_SetMode/1 (Power_Ip_SetMode) @070180e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Power_Ip_MC_ME_SocTriggerResetEvent/13 (273804165 (estimated locally),0.25 per call) Power_Ip_MC_ME_DisablePartitionClock/12 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_ConfigCoreCOFBClock/11 (1073741824 (estimated locally),1.00 per call) Power_Ip_MC_ME_EnablePartitionClock/10 (1073741824 (estimated locally),1.00 per call) 
Power_Ip_pfReportErrorsCallback/0 (Power_Ip_pfReportErrorsCallback) @06f85d80
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Power_Ip_ReportPowerErrorsEmptyCallback/9 (addr)
  Referring: Power_Ip_InstallNotificationsCallback/6 (write)
  Availability: available
  Varpool flags: initialized

;; Function Power_Ip_SetMode (Power_Ip_SetMode, funcdef_no=0, decl_uid=8352, cgraph_uid=1, symbol_order=1)

Modification phase of node Power_Ip_SetMode/1
Power_Ip_SetMode (const struct Power_Ip_ModeConfigType * ModeConfigPtr)
{
  Power_Ip_PowerModeType PowerMode;
  const struct Power_Ip_MC_ME_ModeConfigType * _1;
  const struct Power_Ip_MC_ME_ModeConfigType * _2;
  const struct Power_Ip_MC_ME_ModeConfigType * _3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PowerMode_7 = ModeConfigPtr_6(D)->PowerMode;
  # DEBUG PowerMode => PowerMode_7
  # DEBUG BEGIN_STMT
  _1 = ModeConfigPtr_6(D)->McMeModeConfigPtr;
  Power_Ip_MC_ME_EnablePartitionClock (_1);
  # DEBUG BEGIN_STMT
  _2 = ModeConfigPtr_6(D)->McMeModeConfigPtr;
  Power_Ip_MC_ME_ConfigCoreCOFBClock (_2);
  # DEBUG BEGIN_STMT
  _3 = ModeConfigPtr_6(D)->McMeModeConfigPtr;
  Power_Ip_MC_ME_DisablePartitionClock (_3);
  # DEBUG BEGIN_STMT
  if (PowerMode_7 <= 1)
    goto <bb 3>; [25.50%]
  else
    goto <bb 4>; [74.50%]

  <bb 3> [local count: 273804165]:
  # DEBUG BEGIN_STMT
  Power_Ip_MC_ME_SocTriggerResetEvent (PowerMode_7);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Power_Ip_PerformReset (Power_Ip_PerformReset, funcdef_no=1, decl_uid=8354, cgraph_uid=2, symbol_order=2)

Modification phase of node Power_Ip_PerformReset/2
Power_Ip_PerformReset (const struct Power_Ip_HwIPsConfigType * HwIPsConfigPtr)
{
  const struct Power_Ip_MC_RGM_ConfigType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = HwIPsConfigPtr_3(D)->McRgmConfigPtr;
  Power_Ip_MC_RGM_PerformReset (_1);
  return;

}



;; Function Power_Ip_GetResetReason (Power_Ip_GetResetReason, funcdef_no=2, decl_uid=8356, cgraph_uid=3, symbol_order=3)

Modification phase of node Power_Ip_GetResetReason/3
Power_Ip_GetResetReason ()
{
  Power_Ip_ResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG ResetReason => 27
  # DEBUG BEGIN_STMT
  ResetReason_3 = Power_Ip_MC_RGM_GetResetReason ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Power_Ip_GetResetRawValue (Power_Ip_GetResetRawValue, funcdef_no=3, decl_uid=8358, cgraph_uid=4, symbol_order=4)

Modification phase of node Power_Ip_GetResetRawValue/4
Power_Ip_GetResetRawValue ()
{
  Power_Ip_RawResetType ResetReason;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ResetReason_3 = Power_Ip_MC_RGM_GetResetRawValue ();
  # DEBUG ResetReason => ResetReason_3
  # DEBUG BEGIN_STMT
  return ResetReason_3;

}



;; Function Power_Ip_Init (Power_Ip_Init, funcdef_no=4, decl_uid=8350, cgraph_uid=5, symbol_order=5)

Modification phase of node Power_Ip_Init/5
Power_Ip_Init (const struct Power_Ip_HwIPsConfigType * HwIPsConfigPtr)
{
  const struct Power_Ip_MC_RGM_ConfigType * _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = HwIPsConfigPtr_3(D)->McRgmConfigPtr;
  Power_Ip_MC_RGM_ResetInit (_1);
  # DEBUG BEGIN_STMT
  Power_Ip_DCM_GPR_GlobalPadkeepingConfig (1);
  # DEBUG BEGIN_STMT
  return;

}



;; Function Power_Ip_InstallNotificationsCallback (Power_Ip_InstallNotificationsCallback, funcdef_no=5, decl_uid=8360, cgraph_uid=6, symbol_order=6)

Modification phase of node Power_Ip_InstallNotificationsCallback/6
Power_Ip_InstallNotificationsCallback (void (*Power_Ip_ReportErrorsCallbackType) (Power_Ip_ReportErrorType, uint8) ReportErrorsCallback)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Power_Ip_pfReportErrorsCallback = ReportErrorsCallback_2(D);
  return;

}



;; Function Power_Ip_EnableSleepOnExit (Power_Ip_EnableSleepOnExit, funcdef_no=6, decl_uid=8362, cgraph_uid=7, symbol_order=7)

Modification phase of node Power_Ip_EnableSleepOnExit/7
Power_Ip_EnableSleepOnExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM7_EnableSleepOnExit ();
  return;

}



;; Function Power_Ip_DisableSleepOnExit (Power_Ip_DisableSleepOnExit, funcdef_no=7, decl_uid=8364, cgraph_uid=8, symbol_order=8)

Modification phase of node Power_Ip_DisableSleepOnExit/8
Power_Ip_DisableSleepOnExit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Power_Ip_CM7_DisableSleepOnExit ();
  return;

}


