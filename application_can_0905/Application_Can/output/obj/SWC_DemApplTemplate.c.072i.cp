
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  ServiceSwComponentDem_SetClearDTC_master_SetClearDTC/2:
  Jump functions of caller  ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData/1:
  Jump functions of caller  ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData/0:

 Propagating constants:

Not considering ServiceSwComponentDem_SetClearDTC_master_SetClearDTC for cloning; -fipa-cp-clone disabled.
Function ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData/1 is not versionable, reason: not a tree_versionable_function.
Not considering ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 3.000000
 - context independent values, size: 2, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ServiceSwComponentDem_SetClearDTC_master_SetClearDTC/2:
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
  Node: ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData/0:
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

ServiceSwComponentDem_SetClearDTC_master_SetClearDTC/2 (ServiceSwComponentDem_SetClearDTC_master_SetClearDTC) @06b4a9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData/1 (ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData) @06b4ae00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: 
  Calls: ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData/0 (1073741824 (estimated locally),1.00 per call) 
ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData/0 (ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData) @06b4ac40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body icf_merged optimize_size
  Called by: ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 

;; Function ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData, funcdef_no=0, decl_uid=5718, cgraph_uid=1, symbol_order=0)

Modification phase of node ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData/0
ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (uint8 * Data)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData (ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData, funcdef_no=4, decl_uid=5720, cgraph_uid=2, symbol_order=1)

Modification phase of node ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData/1
ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_ExtDataRec_0x01_ReadData (uint8 * Data)
{
  Std_ReturnType retval.3;

  <bb 2> [local count: 1073741824]:
  retval.3_2 = ServiceSwComponentDem_CBReadData_DemExternalCSDataElementClass_Session_ReadData (Data_1(D)); [tail call]
  return retval.3_2;

}



;; Function ServiceSwComponentDem_SetClearDTC_master_SetClearDTC (ServiceSwComponentDem_SetClearDTC_master_SetClearDTC, funcdef_no=2, decl_uid=5724, cgraph_uid=3, symbol_order=2)

Modification phase of node ServiceSwComponentDem_SetClearDTC_master_SetClearDTC/2
ServiceSwComponentDem_SetClearDTC_master_SetClearDTC (uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}


