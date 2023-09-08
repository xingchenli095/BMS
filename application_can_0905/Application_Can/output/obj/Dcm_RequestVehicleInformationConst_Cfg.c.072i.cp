
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Rte_Call_Dcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/4:
  Jump functions of caller  Rte_Call_Dcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/3:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Rte_Call_Dcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/4 (Rte_Call_Dcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData) @06c15000
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspVehInfoData/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Rte_Call_Dcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/3 (Rte_Call_Dcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData) @06c0bd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_DspVehInfoData/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_DspVehInfoUsed/2 (Dcm_DspVehInfoUsed) @06bd7480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DspVehInfoData/1 (Dcm_DspVehInfoData) @06bd7438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Rte_Call_Dcm_InfotypeServices_Service09_VinMessageCount_GetInfotypeValueData/3 (addr)Rte_Call_Dcm_InfotypeServices_Service09_VehicleIdentificationNumber_GetInfotypeValueData/4 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_DspVehInfo/0 (Dcm_DspVehInfo) @06bd73f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
