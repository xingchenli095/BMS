
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_ServiceSwComponentDcm_USER_DEFINE_MEMORY_Event_SetEventStatus/14:
  Jump functions of caller  Rte_Call_ServiceSwComponentDcm_Permanent_DTC_Event_SetEventStatus/13:
  Jump functions of caller  Rte_Call_ServiceSwComponentDcm_DTC_0x000002_Event_SetEventStatus/12:
  Jump functions of caller  Rte_Call_ServiceSwComponentDcm_DTC_0x000001_Event_SetEventStatus/11:
  Jump functions of caller  ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/10:
  Jump functions of caller  ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9:
  Jump functions of caller  ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/8:
  Jump functions of caller  ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/7:
  Jump functions of caller  ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/6:
  Jump functions of caller  ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/5:
  Jump functions of caller  ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/4:
  Jump functions of caller  ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey/3:
  Jump functions of caller  ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed/2:
  Jump functions of caller  ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey/1:
  Jump functions of caller  ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed/0:

 Propagating constants:

Not considering ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start for cloning; -fipa-cp-clone disabled.
Function ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/7 is not versionable, reason: not a tree_versionable_function.
Function ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/6 is not versionable, reason: not a tree_versionable_function.
Not considering ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication for cloning; -fipa-cp-clone disabled.
Function ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey/3 is not versionable, reason: not a tree_versionable_function.
Function ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed/2 is not versionable, reason: not a tree_versionable_function.
Not considering ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey for cloning; -fipa-cp-clone disabled.
Not considering ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed for cloning; -fipa-cp-clone disabled.

overall_size: 95, max_new_size: 11001
 - context independent values, size: 4, time_benefit: 1.000000
 - context independent values, size: 28, time_benefit: 2.000000
 - context independent values, size: 14, time_benefit: 2.000000
 - context independent values, size: -1, time_benefit: 4.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: -3, time_benefit: 6.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: 0, time_benefit: 3.000000
     Decided to specialize for all known contexts, code not going to grow.
 - context independent values, size: -1, time_benefit: 4.000000
     Decided to specialize for all known contexts, code not going to grow.

IPA lattices after all propagation:

Lattices:
  Node: ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/10:
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
  Node: ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9:
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
  Node: ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/8:
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
  Node: ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/7:
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
  Node: ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/6:
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
  Node: ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/5:
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
  Node: ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/4:
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
  Node: ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey/3:
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
  Node: ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed/2:
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
  Node: ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey/1:
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
  Node: ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed/0:
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

IPA decision stage:

 - Creating a specialized node of ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/5 for all known contexts.
 - Creating a specialized node of ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/4 for all known contexts.
 - Creating a specialized node of ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey/1 for all known contexts.
 - Creating a specialized node of ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed/0 for all known contexts.

IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed.constprop.0/18 (ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed.constprop) @06ce78c0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed/0
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey.constprop.0/17 (ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey.constprop) @06ce77e0
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey/1
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication.constprop.0/16 (ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication.constprop) @06ce7700
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/4
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation.constprop.0/15 (ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation.constprop) @06ce7380
  Type: function definition analyzed
  Visibility:
  References: 
  Referring: 
  Clone of ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/5
  Availability: local
  Function flags: count:1073741824 (estimated locally) local icf_merged optimize_size
  Called by: ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Rte_Call_ServiceSwComponentDcm_USER_DEFINE_MEMORY_Event_SetEventStatus/14 (Rte_Call_ServiceSwComponentDcm_USER_DEFINE_MEMORY_Event_SetEventStatus) @06bcf000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (106570798 (estimated locally),0.10 per call) 
  Calls: 
Rte_Call_ServiceSwComponentDcm_Permanent_DTC_Event_SetEventStatus/13 (Rte_Call_ServiceSwComponentDcm_Permanent_DTC_Event_SetEventStatus) @06bc4ee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (159060892 (estimated locally),0.15 per call) 
  Calls: 
Rte_Call_ServiceSwComponentDcm_DTC_0x000002_Event_SetEventStatus/12 (Rte_Call_ServiceSwComponentDcm_DTC_0x000002_Event_SetEventStatus) @06bc4e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (237404317 (estimated locally),0.22 per call) 
  Calls: 
Rte_Call_ServiceSwComponentDcm_DTC_0x000001_Event_SetEventStatus/11 (Rte_Call_ServiceSwComponentDcm_DTC_0x000001_Event_SetEventStatus) @06bc4d20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (354334802 (estimated locally),0.33 per call) 
  Calls: 
ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/10 (ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData) @06bc4380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9 (ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start) @06bc41c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: Rte_Call_ServiceSwComponentDcm_USER_DEFINE_MEMORY_Event_SetEventStatus/14 (106570798 (estimated locally),0.10 per call) Rte_Call_ServiceSwComponentDcm_Permanent_DTC_Event_SetEventStatus/13 (159060892 (estimated locally),0.15 per call) Rte_Call_ServiceSwComponentDcm_DTC_0x000002_Event_SetEventStatus/12 (237404317 (estimated locally),0.22 per call) Rte_Call_ServiceSwComponentDcm_DTC_0x000001_Event_SetEventStatus/11 (354334802 (estimated locally),0.33 per call) 
ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/8 (ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start) @06bc4000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/7 (ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation) @06ba50e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation.constprop/15 (1073741824 (estimated locally),1.00 per call) 
ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/6 (ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication) @06ba5e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication.constprop/16 (1073741824 (estimated locally),1.00 per call) 
ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/5 (ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation) @06ba5c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/4 (ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication) @06ba5a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey/3 (ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey) @06ba58c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey.constprop/17 (1073741824 (estimated locally),1.00 per call) 
ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed/2 (ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed) @06ba5700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed.constprop/18 (1073741824 (estimated locally),1.00 per call) 
ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey/1 (ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey) @06ba5540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed/0 (ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed) @06ba5380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: 

;; Function ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed (ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed, funcdef_no=0, decl_uid=5726, cgraph_uid=1, symbol_order=0)

Modification phase of node ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed/0
ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed (const uint8 * SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, uint8 * Seed, Dcm_NegativeResponseCodeType * ErrorCode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey (ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey, funcdef_no=1, decl_uid=5730, cgraph_uid=2, symbol_order=1)

Modification phase of node ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey/1
ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey (const uint8 * Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType * ErrorCode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed (ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed, funcdef_no=12, decl_uid=5735, cgraph_uid=3, symbol_order=2)

Modification phase of node ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed/2
ServiceSwComponentDcm_SecurityAccess_Level_3_GetSeed (const uint8 * SecurityAccessDataRecord, Dcm_OpStatusType OpStatus, uint8 * Seed, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Std_ReturnType retval.12;

  <bb 2> [local count: 1073741824]:
  retval.12_5 = ServiceSwComponentDcm_SecurityAccess_Level_1_GetSeed (SecurityAccessDataRecord_1(D), OpStatus_2(D), Seed_3(D), ErrorCode_4(D)); [tail call]
  return retval.12_5;

}



;; Function ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey (ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey, funcdef_no=16, decl_uid=5739, cgraph_uid=4, symbol_order=3)

Modification phase of node ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey/3
ServiceSwComponentDcm_SecurityAccess_Level_3_CompareKey (const uint8 * Key, Dcm_OpStatusType OpStatus, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Std_ReturnType retval.14;

  <bb 2> [local count: 1073741824]:
  retval.14_4 = ServiceSwComponentDcm_SecurityAccess_Level_1_CompareKey (Key_1(D), OpStatus_2(D), ErrorCode_3(D)); [tail call]
  return retval.14_4;

}



;; Function ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication (ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication, funcdef_no=4, decl_uid=5746, cgraph_uid=5, symbol_order=4)

Modification phase of node ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication/4
ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication (uint8 SID, const uint8 * RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType * ErrorCode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation (ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation, funcdef_no=5, decl_uid=5751, cgraph_uid=6, symbol_order=5)

Modification phase of node ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation/5
ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation (uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication (ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication, funcdef_no=18, decl_uid=5758, cgraph_uid=7, symbol_order=6)

Modification phase of node ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication/6
ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Indication (uint8 SID, const uint8 * RequestData, uint16 DataSize, uint8 ReqType, uint16 SourceAddress, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Std_ReturnType retval.15;

  <bb 2> [local count: 1073741824]:
  retval.15_7 = ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Indication (SID_1(D), RequestData_2(D), DataSize_3(D), ReqType_4(D), SourceAddress_5(D), ErrorCode_6(D)); [tail call]
  return retval.15_7;

}



;; Function ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation (ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation, funcdef_no=14, decl_uid=5763, cgraph_uid=8, symbol_order=7)

Modification phase of node ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation/7
ServiceSwComponentDcm_ServiceRequestSupplierNotification_DcmDslServiceRequestSupplierNotification_0_Confirmation (uint8 SID, uint8 ReqType, uint16 SourceAddress, Dcm_ConfirmationStatusType ConfirmationStatus)
{
  Std_ReturnType retval.13;

  <bb 2> [local count: 1073741824]:
  retval.13_5 = ServiceSwComponentDcm_ServiceRequestManufacturerNotification_DcmDslServiceRequestManufacturerNotification_0_Confirmation (SID_1(D), ReqType_2(D), SourceAddress_3(D), ConfirmationStatus_4(D)); [tail call]
  return retval.13_5;

}



;; Function ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start (ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start, funcdef_no=8, decl_uid=5769, cgraph_uid=9, symbol_order=8)

Modification phase of node ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start/8
ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_LOOPBACK_Start (const uint8 * dataIn0, Dcm_OpStatusType OpStatus, uint8 * dataOut0, uint16 * currentDataLength, Dcm_NegativeResponseCodeType * ErrorCode)
{
  uint16 bytesToCopy;
  uint16 iLoop;
  short unsigned int _1;
  sizetype _2;
  const uint8 * _3;
  uint8 * _4;
  unsigned char _5;
  short unsigned int _6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = *currentDataLength_10(D);
  bytesToCopy_11 = _1 >> 3;
  # DEBUG bytesToCopy => bytesToCopy_11
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG iLoop => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = (sizetype) iLoop_7;
  _3 = dataIn0_13(D) + _2;
  _4 = dataOut0_14(D) + _2;
  _5 = *_3;
  *_4 = _5;
  # DEBUG BEGIN_STMT
  iLoop_16 = iLoop_7 + 1;
  # DEBUG iLoop => iLoop_16

  <bb 4> [local count: 1073741824]:
  # iLoop_7 = PHI <0(2), iLoop_16(3)>
  # DEBUG iLoop => iLoop_7
  # DEBUG BEGIN_STMT
  if (iLoop_7 < bytesToCopy_11)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  _6 = _1 & 65528;
  *currentDataLength_10(D) = _6;
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start (ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start, funcdef_no=9, decl_uid=5721, cgraph_uid=10, symbol_order=9)

Modification phase of node ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start/9
ServiceSwComponentDcm_RoutineServices_DIAGNOSTIC_TRIGGER_DTC_Start (uint8 dataIn0, Dcm_OpStatusType OpStatus, uint8 * dataOut0, Dcm_NegativeResponseCodeType * ErrorCode)
{
  Std_ReturnType ret_Call;
  unsigned char _3;
  unsigned char _4;
  unsigned char _17;
  unsigned char _18;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG arg_Call_EventStatus => 0
  # DEBUG BEGIN_STMT
  # DEBUG ret_Call => 0
  # DEBUG BEGIN_STMT
  _3 = dataIn0_5(D) & 1;
  if (_3 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  ret_Call_14 = Rte_Call_ServiceSwComponentDcm_DTC_0x000001_Event_SetEventStatus (1);
  # DEBUG ret_Call => ret_Call_14
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 719407022]:
  # DEBUG BEGIN_STMT
  _4 = dataIn0_5(D) & 2;
  if (_4 != 0)
    goto <bb 5>; [33.00%]
  else
    goto <bb 6>; [67.00%]

  <bb 5> [local count: 237404317]:
  # DEBUG BEGIN_STMT
  ret_Call_12 = Rte_Call_ServiceSwComponentDcm_DTC_0x000002_Event_SetEventStatus (1);
  # DEBUG ret_Call => ret_Call_12
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 482002704]:
  # DEBUG BEGIN_STMT
  _17 = dataIn0_5(D) & 4;
  if (_17 != 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 159060892]:
  # DEBUG BEGIN_STMT
  ret_Call_10 = Rte_Call_ServiceSwComponentDcm_Permanent_DTC_Event_SetEventStatus (1);
  # DEBUG ret_Call => ret_Call_10
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 322941812]:
  # DEBUG BEGIN_STMT
  _18 = dataIn0_5(D) & 8;
  if (_18 != 0)
    goto <bb 9>; [33.00%]
  else
    goto <bb 10>; [67.00%]

  <bb 9> [local count: 106570798]:
  # DEBUG BEGIN_STMT
  ret_Call_8 = Rte_Call_ServiceSwComponentDcm_USER_DEFINE_MEMORY_Event_SetEventStatus (1);
  # DEBUG ret_Call => ret_Call_8

  <bb 10> [local count: 1073741824]:
  # ret_Call_1 = PHI <ret_Call_14(3), ret_Call_12(5), ret_Call_10(7), 0(8), ret_Call_8(9)>
  # DEBUG ret_Call => ret_Call_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *dataOut0_15(D) = ret_Call_1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData (ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData, funcdef_no=10, decl_uid=5772, cgraph_uid=11, symbol_order=10)

Modification phase of node ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/10
ServiceSwComponentDcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData (Dcm_OpStatusType OpStatus, uint8 * DataValueBuffer)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *DataValueBuffer_2(D) = 4;
  # DEBUG BEGIN_STMT
  return 0;

}


