
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Switch_Dcm_DcmCommunicationControl_CanNetwork/2:

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

SchM_Switch_Dcm_DcmCommunicationControl_CanNetwork/2 (SchM_Switch_Dcm_DcmCommunicationControl_CanNetwork) @06c4bd20
  Type: function
  Visibility: external public
  Address is taken.
  References: 
  Referring: Dcm_CommunicationControlLookUpTable/1 (addr)
  Availability: not_available
  Function flags: optimize_size
  Called by: 
  Calls: 
Dcm_CommunicationControlLookUpTable/1 (Dcm_CommunicationControlLookUpTable) @06c23438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: SchM_Switch_Dcm_DcmCommunicationControl_CanNetwork/2 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
Dcm_CommunicationControlAllChannel/0 (Dcm_CommunicationControlAllChannel) @06c233f0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known