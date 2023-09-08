
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  CanIf_CheckTrcvWakeFlagIndication/17:
  Jump functions of caller  CanIf_ClearTrcvWufFlagIndication/16:
  Jump functions of caller  CanIf_ConfirmPnAvailability/15:
  Jump functions of caller  CanIf_TrcvModeIndication/14:
  Jump functions of caller  CanTrcv_CheckWakeup/13:
  Jump functions of caller  CanTrcv_CheckWakeFlag/12:
  Jump functions of caller  CanTrcv_ClearTrcvWufFlag/11:
  Jump functions of caller  CanTrcv_SetWakeupMode/10:
  Jump functions of caller  CanTrcv_GetBusWuReason/9:
  Jump functions of caller  CanTrcv_GetOpMode/8:
  Jump functions of caller  CanTrcv_SetOpMode/7:
  Jump functions of caller  CanTrcv_MainFunction/6:
  Jump functions of caller  CanTrcv_Init/5:

 Propagating constants:

Not considering CanTrcv_CheckWakeup for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_CheckWakeFlag for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_ClearTrcvWufFlag for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_SetWakeupMode for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_GetBusWuReason for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_GetOpMode for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_SetOpMode for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_MainFunction for cloning; -fipa-cp-clone disabled.
Not considering CanTrcv_Init for cloning; -fipa-cp-clone disabled.

overall_size: 83, max_new_size: 11001
 - context independent values, size: 12, time_benefit: 1.000000
 - context independent values, size: 7, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000
 - context independent values, size: 8, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: CanTrcv_CheckWakeup/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTrcv_CheckWakeFlag/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTrcv_ClearTrcvWufFlag/11:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: CanTrcv_SetWakeupMode/10:
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
  Node: CanTrcv_GetBusWuReason/9:
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
  Node: CanTrcv_GetOpMode/8:
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
  Node: CanTrcv_SetOpMode/7:
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
  Node: CanTrcv_MainFunction/6:
  Node: CanTrcv_Init/5:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

CanIf_CheckTrcvWakeFlagIndication/17 (CanIf_CheckTrcvWakeFlagIndication) @06d8fd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTrcv_CheckWakeFlag/12 (88583700 (estimated locally),0.08 per call) 
  Calls: 
CanIf_ClearTrcvWufFlagIndication/16 (CanIf_ClearTrcvWufFlagIndication) @06d8fb60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTrcv_ClearTrcvWufFlag/11 (536870913 (estimated locally),0.50 per call) 
  Calls: 
CanIf_ConfirmPnAvailability/15 (CanIf_ConfirmPnAvailability) @06d8f700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTrcv_SetOpMode/7 (116930485 (estimated locally),0.11 per call) 
  Calls: 
CanIf_TrcvModeIndication/14 (CanIf_TrcvModeIndication) @06d8f620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: CanTrcv_SetOpMode/7 (354334802 (estimated locally),0.33 per call) 
  Calls: 
CanTrcv_CheckWakeup/13 (CanTrcv_CheckWakeup) @06d8f2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_WakeFlag/2 (read)CanTrcv_TrcvWakeupMode/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTrcv_CheckWakeFlag/12 (CanTrcv_CheckWakeFlag) @06d8f0e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_WakeFlag/2 (read)CanTrcv_TrcvWakeupMode/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_CheckTrcvWakeFlagIndication/17 (88583700 (estimated locally),0.08 per call) 
CanTrcv_ClearTrcvWufFlag/11 (CanTrcv_ClearTrcvWufFlag) @06d89ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_WakeFlag/2 (write)CanTrcv_TrcvMode/3 (read)CanTrcv_TrcvMode/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_ClearTrcvWufFlagIndication/16 (536870913 (estimated locally),0.50 per call) 
CanTrcv_SetWakeupMode/10 (CanTrcv_SetWakeupMode) @06d89d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_TrcvWakeupMode/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTrcv_GetBusWuReason/9 (CanTrcv_GetBusWuReason) @06d89b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_WUReason/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTrcv_GetOpMode/8 (CanTrcv_GetOpMode) @06d899a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_TrcvMode/3 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTrcv_SetOpMode/7 (CanTrcv_SetOpMode) @06d897e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (read)CanTrcv_TrcvMode/3 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: CanIf_ConfirmPnAvailability/15 (116930485 (estimated locally),0.11 per call) CanIf_TrcvModeIndication/14 (354334802 (estimated locally),0.33 per call) 
CanTrcv_MainFunction/6 (CanTrcv_MainFunction) @06d89620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTrcv_Init/5 (CanTrcv_Init) @06d89460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: CanTrcv_IsInit/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
CanTrcv_TrcvWakeupMode/4 (CanTrcv_TrcvWakeupMode) @06d0be10
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanTrcv_SetWakeupMode/10 (write)CanTrcv_CheckWakeFlag/12 (read)CanTrcv_CheckWakeup/13 (read)
  Availability: available
  Varpool flags: initialized
CanTrcv_TrcvMode/3 (CanTrcv_TrcvMode) @06d0bdc8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanTrcv_SetOpMode/7 (write)CanTrcv_GetOpMode/8 (read)CanTrcv_ClearTrcvWufFlag/11 (read)CanTrcv_ClearTrcvWufFlag/11 (write)
  Availability: available
  Varpool flags: initialized
CanTrcv_WakeFlag/2 (CanTrcv_WakeFlag) @06d0bd80
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanTrcv_ClearTrcvWufFlag/11 (write)CanTrcv_CheckWakeFlag/12 (read)CanTrcv_CheckWakeup/13 (read)
  Availability: available
  Varpool flags: initialized
CanTrcv_IsInit/1 (CanTrcv_IsInit) @06d0bd38
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: CanTrcv_ClearTrcvWufFlag/11 (read)CanTrcv_CheckWakeFlag/12 (read)CanTrcv_Init/5 (write)CanTrcv_SetWakeupMode/10 (read)CanTrcv_SetOpMode/7 (read)CanTrcv_GetOpMode/8 (read)CanTrcv_GetBusWuReason/9 (read)CanTrcv_CheckWakeup/13 (read)
  Availability: available
  Varpool flags: initialized
CanTrcv_WUReason/0 (CanTrcv_WUReason) @06d0bcf0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: CanTrcv_GetBusWuReason/9 (read)
  Availability: available
  Varpool flags: initialized

;; Function CanTrcv_Init (CanTrcv_Init, funcdef_no=0, decl_uid=5505, cgraph_uid=1, symbol_order=5)

Modification phase of node CanTrcv_Init/5
CanTrcv_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit = 1;
  return;

}



;; Function CanTrcv_MainFunction (CanTrcv_MainFunction, funcdef_no=1, decl_uid=5507, cgraph_uid=2, symbol_order=6)

Modification phase of node CanTrcv_MainFunction/6
CanTrcv_MainFunction ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function CanTrcv_SetOpMode (CanTrcv_SetOpMode, funcdef_no=2, decl_uid=5510, cgraph_uid=3, symbol_order=7)

Modification phase of node CanTrcv_SetOpMode/7
CanTrcv_SetOpMode (uint8 Transceiver, CanTrcv_TrcvModeType OpMode)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.1_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.1_1 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  CanTrcv_TrcvMode = OpMode_5(D);
  # DEBUG BEGIN_STMT
  CanIf_TrcvModeIndication (Transceiver_7(D), OpMode_5(D));
  # DEBUG BEGIN_STMT
  if (OpMode_5(D) == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 4> [local count: 116930485]:
  # DEBUG BEGIN_STMT
  CanIf_ConfirmPnAvailability (Transceiver_7(D));

  <bb 6> [local count: 1073741824]:
  # RetVal_2 = PHI <1(2), 0(4), 0(3)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function CanTrcv_GetOpMode (CanTrcv_GetOpMode, funcdef_no=3, decl_uid=5513, cgraph_uid=4, symbol_order=8)

Modification phase of node CanTrcv_GetOpMode/8
CanTrcv_GetOpMode (uint8 Transceiver, CanTrcv_TrcvModeType * OpMode)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.2_1;
  <unnamed type> CanTrcv_TrcvMode.3_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.2_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.2_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanTrcv_TrcvMode.3_2 = CanTrcv_TrcvMode;
  *OpMode_6(D) = CanTrcv_TrcvMode.3_2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_3 = PHI <1(2), 0(3)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function CanTrcv_GetBusWuReason (CanTrcv_GetBusWuReason, funcdef_no=4, decl_uid=5516, cgraph_uid=5, symbol_order=9)

Modification phase of node CanTrcv_GetBusWuReason/9
CanTrcv_GetBusWuReason (uint8 Transceiver, CanTrcv_TrcvWakeupReasonType * reason)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.4_1;
  <unnamed type> CanTrcv_WUReason.5_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.4_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.4_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanTrcv_WUReason.5_2 = CanTrcv_WUReason;
  *reason_6(D) = CanTrcv_WUReason.5_2;
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_3 = PHI <1(2), 0(3)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function CanTrcv_SetWakeupMode (CanTrcv_SetWakeupMode, funcdef_no=5, decl_uid=5519, cgraph_uid=6, symbol_order=10)

Modification phase of node CanTrcv_SetWakeupMode/10
CanTrcv_SetWakeupMode (uint8 Transceiver, CanTrcv_TrcvWakeupModeType TrcvWakeupMode)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.6_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.6_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.6_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanTrcv_TrcvWakeupMode = TrcvWakeupMode_5(D);
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 4> [local count: 1073741824]:
  # RetVal_2 = PHI <1(2), 0(3)>
  # DEBUG RetVal => RetVal_2
  # DEBUG BEGIN_STMT
  return RetVal_2;

}



;; Function CanTrcv_ClearTrcvWufFlag (CanTrcv_ClearTrcvWufFlag, funcdef_no=6, decl_uid=5521, cgraph_uid=7, symbol_order=11)

Modification phase of node CanTrcv_ClearTrcvWufFlag/11
CanTrcv_ClearTrcvWufFlag (uint8 Transceiver)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.7_1;
  <unnamed type> CanTrcv_TrcvMode.8_2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.7_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.7_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanTrcv_WakeFlag = 0;
  # DEBUG BEGIN_STMT
  CanTrcv_TrcvMode.8_2 = CanTrcv_TrcvMode;
  if (CanTrcv_TrcvMode.8_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  CanTrcv_TrcvMode = 2;

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanIf_ClearTrcvWufFlagIndication (Transceiver_9(D));
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 6> [local count: 1073741824]:
  # RetVal_3 = PHI <1(2), 0(5)>
  # DEBUG RetVal => RetVal_3
  # DEBUG BEGIN_STMT
  return RetVal_3;

}



;; Function CanTrcv_CheckWakeFlag (CanTrcv_CheckWakeFlag, funcdef_no=7, decl_uid=5523, cgraph_uid=8, symbol_order=12)

Modification phase of node CanTrcv_CheckWakeFlag/12
CanTrcv_CheckWakeFlag (uint8 Transceiver)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.9_1;
  unsigned char CanTrcv_WakeFlag.10_2;
  <unnamed type> CanTrcv_TrcvWakeupMode.11_3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.9_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.9_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 3> [local count: 536870911]:
  # DEBUG BEGIN_STMT
  CanTrcv_WakeFlag.10_2 = CanTrcv_WakeFlag;
  if (CanTrcv_WakeFlag.10_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 4> [local count: 268435456]:
  CanTrcv_TrcvWakeupMode.11_3 = CanTrcv_TrcvWakeupMode;
  if (CanTrcv_TrcvWakeupMode.11_3 == 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 7>; [67.00%]

  <bb 5> [local count: 88583700]:
  # DEBUG BEGIN_STMT
  CanIf_CheckTrcvWakeFlagIndication (Transceiver_7(D));

  <bb 7> [local count: 1073741824]:
  # RetVal_4 = PHI <1(2), 0(4), 0(3), 0(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}



;; Function CanTrcv_CheckWakeup (CanTrcv_CheckWakeup, funcdef_no=8, decl_uid=5525, cgraph_uid=9, symbol_order=13)

Modification phase of node CanTrcv_CheckWakeup/13
CanTrcv_CheckWakeup (uint8 Transceiver)
{
  Std_ReturnType RetVal;
  unsigned char CanTrcv_IsInit.12_1;
  unsigned char CanTrcv_WakeFlag.13_2;
  <unnamed type> CanTrcv_TrcvWakeupMode.14_3;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 1
  # DEBUG BEGIN_STMT
  CanTrcv_IsInit.12_1 = CanTrcv_IsInit;
  if (CanTrcv_IsInit.12_1 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  CanTrcv_WakeFlag.13_2 = CanTrcv_WakeFlag;
  if (CanTrcv_WakeFlag.13_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 4> [local count: 268435456]:
  CanTrcv_TrcvWakeupMode.14_3 = CanTrcv_TrcvWakeupMode;
  if (CanTrcv_TrcvWakeupMode.14_3 == 0)
    goto <bb 5>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 5> [local count: 134217728]:
  # DEBUG BEGIN_STMT
  # DEBUG RetVal => 0

  <bb 6> [local count: 1073741824]:
  # RetVal_4 = PHI <1(2), 1(3), 1(4), 0(5)>
  # DEBUG RetVal => RetVal_4
  # DEBUG BEGIN_STMT
  return RetVal_4;

}


