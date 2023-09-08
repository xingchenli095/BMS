
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  PduR_GenericTpCancelReceive/34:
  Jump functions of caller  PduR_GenericTpCancelTransmit/33:
  Jump functions of caller  PduR_GenericTpTransmit/32:
  Jump functions of caller  PduR_GenericIfTransmit/30:
  Jump functions of caller  PduR_GenericTpTxConfirmation/28:
  Jump functions of caller  PduR_GenericTpRxIndication/27:
  Jump functions of caller  PduR_GenericTpCopyTxData/26:
  Jump functions of caller  PduR_GenericTpCopyRxData/25:
  Jump functions of caller  PduR_GenericTpStartOfReception/24:
  Jump functions of caller  PduR_GenericIfTriggerTransmit/22:
  Jump functions of caller  PduR_GenericIfTxConfirmation/20:
  Jump functions of caller  PduR_GenericIfRxIndication/19:
  Jump functions of caller  PduR_SecOCTxConfirmation/17:
  Jump functions of caller  PduR_SecOCRxIndication/16:
  Jump functions of caller  PduR_SecOCTransmit/15:
  Jump functions of caller  PduR_DcmIfTransmit/14:
  Jump functions of caller  PduR_DcmCancelReceive/13:
  Jump functions of caller  PduR_DcmCancelTransmit/12:
  Jump functions of caller  PduR_DcmTransmit/11:
  Jump functions of caller  PduR_ComTransmit/10:
  Jump functions of caller  PduR_CanTpTxConfirmation/9:
  Jump functions of caller  PduR_CanTpRxIndication/8:
  Jump functions of caller  PduR_CanTpCopyTxData/7:
  Jump functions of caller  PduR_CanTpCopyRxData/6:
  Jump functions of caller  PduR_CanTpStartOfReception/5:
  Jump functions of caller  PduR_CanNmTxConfirmation/4:
  Jump functions of caller  PduR_CanNmTriggerTransmit/3:
  Jump functions of caller  PduR_CanNmRxIndication/2:
  Jump functions of caller  PduR_CanIfTxConfirmation/1:
  Jump functions of caller  PduR_CanIfRxIndication/0:

 Propagating constants:

Not considering PduR_SecOCTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering PduR_SecOCRxIndication for cloning; -fipa-cp-clone disabled.
Not considering PduR_SecOCTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_DcmIfTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_DcmCancelReceive for cloning; -fipa-cp-clone disabled.
Not considering PduR_DcmCancelTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_DcmTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_ComTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanTpTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanTpRxIndication for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanTpCopyTxData for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanTpCopyRxData for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanTpStartOfReception for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanNmTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanNmTriggerTransmit for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanNmRxIndication for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanIfTxConfirmation for cloning; -fipa-cp-clone disabled.
Not considering PduR_CanIfRxIndication for cloning; -fipa-cp-clone disabled.

overall_size: 153, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: PduR_SecOCTxConfirmation/17:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_SecOCRxIndication/16:
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
  Node: PduR_SecOCTransmit/15:
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
  Node: PduR_DcmIfTransmit/14:
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
  Node: PduR_DcmCancelReceive/13:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_DcmCancelTransmit/12:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_DcmTransmit/11:
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
  Node: PduR_ComTransmit/10:
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
  Node: PduR_CanTpTxConfirmation/9:
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
  Node: PduR_CanTpRxIndication/8:
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
  Node: PduR_CanTpCopyTxData/7:
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
  Node: PduR_CanTpCopyRxData/6:
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
  Node: PduR_CanTpStartOfReception/5:
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
  Node: PduR_CanNmTxConfirmation/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_CanNmTriggerTransmit/3:
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
  Node: PduR_CanNmRxIndication/2:
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
  Node: PduR_CanIfTxConfirmation/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: PduR_CanIfRxIndication/0:
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

PduR_SecOCRTabLoIfConfigIdx/37 (PduR_SecOCRTabLoIfConfigIdx) @06b63d38
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_SecOCRxIndication/16 (read)PduR_SecOCTxConfirmation/17 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_SecOCRTabUpIfTxConfigIdx/36 (PduR_SecOCRTabUpIfTxConfigIdx) @06b63bd0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_SecOCTransmit/15 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_DcmRTabUpIfTxConfigIdx/35 (PduR_DcmRTabUpIfTxConfigIdx) @06b63a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_DcmIfTransmit/14 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_GenericTpCancelReceive/34 (PduR_GenericTpCancelReceive) @06b661c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_DcmCancelReceive/13 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericTpCancelTransmit/33 (PduR_GenericTpCancelTransmit) @06b66000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_DcmCancelTransmit/12 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericTpTransmit/32 (PduR_GenericTpTransmit) @06b60e00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_DcmTransmit/11 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_DcmRTabUpTpConfigIdx/31 (PduR_DcmRTabUpTpConfigIdx) @06b635a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_DcmTransmit/11 (read)PduR_DcmCancelTransmit/12 (read)PduR_DcmCancelReceive/13 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_GenericIfTransmit/30 (PduR_GenericIfTransmit) @06b60c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_SecOCTransmit/15 (1073741824 (estimated locally),1.00 per call) PduR_DcmIfTransmit/14 (1073741824 (estimated locally),1.00 per call) PduR_ComTransmit/10 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_ComRTabUpIfTxConfigIdx/29 (PduR_ComRTabUpIfTxConfigIdx) @06b633f0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_ComTransmit/10 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_GenericTpTxConfirmation/28 (PduR_GenericTpTxConfirmation) @06b60a80
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_CanTpTxConfirmation/9 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericTpRxIndication/27 (PduR_GenericTpRxIndication) @06b608c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_CanTpRxIndication/8 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericTpCopyTxData/26 (PduR_GenericTpCopyTxData) @06b60700
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_CanTpCopyTxData/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericTpCopyRxData/25 (PduR_GenericTpCopyRxData) @06b60540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_CanTpCopyRxData/6 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericTpStartOfReception/24 (PduR_GenericTpStartOfReception) @06b60380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_CanTpStartOfReception/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanTpRTabLoTpConfigIdx/23 (PduR_CanTpRTabLoTpConfigIdx) @06aeecf0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_CanTpCopyTxData/7 (read)PduR_CanTpRxIndication/8 (read)PduR_CanTpStartOfReception/5 (read)PduR_CanTpCopyRxData/6 (read)PduR_CanTpTxConfirmation/9 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_GenericIfTriggerTransmit/22 (PduR_GenericIfTriggerTransmit) @06b600e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_CanNmTriggerTransmit/3 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanNmRTabLoIfConfigIdx/21 (PduR_CanNmRTabLoIfConfigIdx) @06aee8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_CanNmRxIndication/2 (read)PduR_CanNmTriggerTransmit/3 (read)PduR_CanNmTxConfirmation/4 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_GenericIfTxConfirmation/20 (PduR_GenericIfTxConfirmation) @06b5ce00
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_SecOCTxConfirmation/17 (1073741824 (estimated locally),1.00 per call) PduR_CanNmTxConfirmation/4 (1073741824 (estimated locally),1.00 per call) PduR_CanIfTxConfirmation/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_GenericIfRxIndication/19 (PduR_GenericIfRxIndication) @06b5cc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: PduR_SecOCRxIndication/16 (1073741824 (estimated locally),1.00 per call) PduR_CanNmRxIndication/2 (1073741824 (estimated locally),1.00 per call) PduR_CanIfRxIndication/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
PduR_CanIfRTabLoIfConfigIdx/18 (PduR_CanIfRTabLoIfConfigIdx) @06aee630
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: PduR_CanIfRxIndication/0 (read)PduR_CanIfTxConfirmation/1 (read)
  Availability: not_available
  Varpool flags: read-only
PduR_SecOCTxConfirmation/17 (PduR_SecOCTxConfirmation) @06b5ca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_SecOCRTabLoIfConfigIdx/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTxConfirmation/20 (1073741824 (estimated locally),1.00 per call) 
PduR_SecOCRxIndication/16 (PduR_SecOCRxIndication) @06b5c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_SecOCRTabLoIfConfigIdx/37 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfRxIndication/19 (1073741824 (estimated locally),1.00 per call) 
PduR_SecOCTransmit/15 (PduR_SecOCTransmit) @06b5c700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_SecOCRTabUpIfTxConfigIdx/36 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTransmit/30 (1073741824 (estimated locally),1.00 per call) 
PduR_DcmIfTransmit/14 (PduR_DcmIfTransmit) @06b5c540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_DcmRTabUpIfTxConfigIdx/35 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTransmit/30 (1073741824 (estimated locally),1.00 per call) 
PduR_DcmCancelReceive/13 (PduR_DcmCancelReceive) @06b5c380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_DcmRTabUpTpConfigIdx/31 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpCancelReceive/34 (1073741824 (estimated locally),1.00 per call) 
PduR_DcmCancelTransmit/12 (PduR_DcmCancelTransmit) @06b5c1c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_DcmRTabUpTpConfigIdx/31 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpCancelTransmit/33 (1073741824 (estimated locally),1.00 per call) 
PduR_DcmTransmit/11 (PduR_DcmTransmit) @06b5c000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_DcmRTabUpTpConfigIdx/31 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpTransmit/32 (1073741824 (estimated locally),1.00 per call) 
PduR_ComTransmit/10 (PduR_ComTransmit) @06af0e00
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_ComRTabUpIfTxConfigIdx/29 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTransmit/30 (1073741824 (estimated locally),1.00 per call) 
PduR_CanTpTxConfirmation/9 (PduR_CanTpTxConfirmation) @06af0c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanTpRTabLoTpConfigIdx/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpTxConfirmation/28 (1073741824 (estimated locally),1.00 per call) 
PduR_CanTpRxIndication/8 (PduR_CanTpRxIndication) @06af0a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanTpRTabLoTpConfigIdx/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpRxIndication/27 (1073741824 (estimated locally),1.00 per call) 
PduR_CanTpCopyTxData/7 (PduR_CanTpCopyTxData) @06af08c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanTpRTabLoTpConfigIdx/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpCopyTxData/26 (1073741824 (estimated locally),1.00 per call) 
PduR_CanTpCopyRxData/6 (PduR_CanTpCopyRxData) @06af0700
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanTpRTabLoTpConfigIdx/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpCopyRxData/25 (1073741824 (estimated locally),1.00 per call) 
PduR_CanTpStartOfReception/5 (PduR_CanTpStartOfReception) @06af0540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanTpRTabLoTpConfigIdx/23 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericTpStartOfReception/24 (1073741824 (estimated locally),1.00 per call) 
PduR_CanNmTxConfirmation/4 (PduR_CanNmTxConfirmation) @06af0380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanNmRTabLoIfConfigIdx/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTxConfirmation/20 (1073741824 (estimated locally),1.00 per call) 
PduR_CanNmTriggerTransmit/3 (PduR_CanNmTriggerTransmit) @06af01c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanNmRTabLoIfConfigIdx/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTriggerTransmit/22 (1073741824 (estimated locally),1.00 per call) 
PduR_CanNmRxIndication/2 (PduR_CanNmRxIndication) @06af0000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanNmRTabLoIfConfigIdx/21 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfRxIndication/19 (1073741824 (estimated locally),1.00 per call) 
PduR_CanIfTxConfirmation/1 (PduR_CanIfTxConfirmation) @06b3b460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanIfRTabLoIfConfigIdx/18 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfTxConfirmation/20 (1073741824 (estimated locally),1.00 per call) 
PduR_CanIfRxIndication/0 (PduR_CanIfRxIndication) @06b3b8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: PduR_CanIfRTabLoIfConfigIdx/18 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: PduR_GenericIfRxIndication/19 (1073741824 (estimated locally),1.00 per call) 

;; Function PduR_CanIfRxIndication (PduR_CanIfRxIndication, funcdef_no=0, decl_uid=5784, cgraph_uid=1, symbol_order=0)

Modification phase of node PduR_CanIfRxIndication/0
PduR_CanIfRxIndication (PduIdType RxPduId, struct PduInfoType * PduInfoPtr)
{
  unsigned char PduR_CanIfRTabLoIfConfigIdx.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_CanIfRTabLoIfConfigIdx.0_1 = PduR_CanIfRTabLoIfConfigIdx;
  PduR_GenericIfRxIndication (RxPduId_3(D), PduInfoPtr_4(D), PduR_CanIfRTabLoIfConfigIdx.0_1);
  return;

}



;; Function PduR_CanIfTxConfirmation (PduR_CanIfTxConfirmation, funcdef_no=1, decl_uid=5786, cgraph_uid=2, symbol_order=1)

Modification phase of node PduR_CanIfTxConfirmation/1
PduR_CanIfTxConfirmation (PduIdType TxPduId)
{
  unsigned char PduR_CanIfRTabLoIfConfigIdx.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_CanIfRTabLoIfConfigIdx.1_1 = PduR_CanIfRTabLoIfConfigIdx;
  PduR_GenericIfTxConfirmation (TxPduId_3(D), PduR_CanIfRTabLoIfConfigIdx.1_1);
  return;

}



;; Function PduR_CanNmRxIndication (PduR_CanNmRxIndication, funcdef_no=2, decl_uid=5789, cgraph_uid=3, symbol_order=2)

Modification phase of node PduR_CanNmRxIndication/2
PduR_CanNmRxIndication (PduIdType RxPduId, struct PduInfoType * PduInfoPtr)
{
  unsigned char PduR_CanNmRTabLoIfConfigIdx.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_CanNmRTabLoIfConfigIdx.2_1 = PduR_CanNmRTabLoIfConfigIdx;
  PduR_GenericIfRxIndication (RxPduId_3(D), PduInfoPtr_4(D), PduR_CanNmRTabLoIfConfigIdx.2_1);
  return;

}



;; Function PduR_CanNmTriggerTransmit (PduR_CanNmTriggerTransmit, funcdef_no=3, decl_uid=5792, cgraph_uid=4, symbol_order=3)

Modification phase of node PduR_CanNmTriggerTransmit/3
PduR_CanNmTriggerTransmit (PduIdType TxPduId, struct PduInfoType * PduInfoPtr)
{
  Std_ReturnType RetVal;
  unsigned char PduR_CanNmRTabLoIfConfigIdx.3_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_CanNmRTabLoIfConfigIdx.3_1 = PduR_CanNmRTabLoIfConfigIdx;
  RetVal_6 = PduR_GenericIfTriggerTransmit (TxPduId_3(D), PduInfoPtr_4(D), PduR_CanNmRTabLoIfConfigIdx.3_1);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function PduR_CanNmTxConfirmation (PduR_CanNmTxConfirmation, funcdef_no=4, decl_uid=5794, cgraph_uid=5, symbol_order=4)

Modification phase of node PduR_CanNmTxConfirmation/4
PduR_CanNmTxConfirmation (PduIdType TxPduId)
{
  unsigned char PduR_CanNmRTabLoIfConfigIdx.4_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_CanNmRTabLoIfConfigIdx.4_1 = PduR_CanNmRTabLoIfConfigIdx;
  PduR_GenericIfTxConfirmation (TxPduId_3(D), PduR_CanNmRTabLoIfConfigIdx.4_1);
  return;

}



;; Function PduR_CanTpStartOfReception (PduR_CanTpStartOfReception, funcdef_no=5, decl_uid=5798, cgraph_uid=6, symbol_order=5)

Modification phase of node PduR_CanTpStartOfReception/5
PduR_CanTpStartOfReception (PduIdType RxPduId, PduLengthType TpSduLength, PduLengthType * BufferSizePtr)
{
  BufReq_ReturnType RetVal;
  unsigned char PduR_CanTpRTabLoTpConfigIdx.5_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_CanTpRTabLoTpConfigIdx.5_1 = PduR_CanTpRTabLoTpConfigIdx;
  RetVal_7 = PduR_GenericTpStartOfReception (RxPduId_3(D), TpSduLength_4(D), BufferSizePtr_5(D), PduR_CanTpRTabLoTpConfigIdx.5_1);
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function PduR_CanTpCopyRxData (PduR_CanTpCopyRxData, funcdef_no=6, decl_uid=5802, cgraph_uid=7, symbol_order=6)

Modification phase of node PduR_CanTpCopyRxData/6
PduR_CanTpCopyRxData (PduIdType RxPduId, const struct PduInfoType * PduInfoPtr, PduLengthType * BufferSizePtr)
{
  BufReq_ReturnType RetVal;
  unsigned char PduR_CanTpRTabLoTpConfigIdx.6_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_CanTpRTabLoTpConfigIdx.6_1 = PduR_CanTpRTabLoTpConfigIdx;
  RetVal_7 = PduR_GenericTpCopyRxData (RxPduId_3(D), PduInfoPtr_4(D), BufferSizePtr_5(D), PduR_CanTpRTabLoTpConfigIdx.6_1);
  # DEBUG RetVal => RetVal_7
  # DEBUG BEGIN_STMT
  return RetVal_7;

}



;; Function PduR_CanTpCopyTxData (PduR_CanTpCopyTxData, funcdef_no=7, decl_uid=5807, cgraph_uid=8, symbol_order=7)

Modification phase of node PduR_CanTpCopyTxData/7
PduR_CanTpCopyTxData (PduIdType TxPduId, struct PduInfoType * PduInfoPtr, struct RetryInfoType * RetryInfoPtr, PduLengthType * AvailableDataPtr)
{
  BufReq_ReturnType RetVal;
  unsigned char PduR_CanTpRTabLoTpConfigIdx.7_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_CanTpRTabLoTpConfigIdx.7_1 = PduR_CanTpRTabLoTpConfigIdx;
  RetVal_8 = PduR_GenericTpCopyTxData (TxPduId_3(D), PduInfoPtr_4(D), RetryInfoPtr_5(D), AvailableDataPtr_6(D), PduR_CanTpRTabLoTpConfigIdx.7_1);
  # DEBUG RetVal => RetVal_8
  # DEBUG BEGIN_STMT
  return RetVal_8;

}



;; Function PduR_CanTpRxIndication (PduR_CanTpRxIndication, funcdef_no=8, decl_uid=5810, cgraph_uid=9, symbol_order=8)

Modification phase of node PduR_CanTpRxIndication/8
PduR_CanTpRxIndication (PduIdType RxPduId, NotifResultType Result)
{
  unsigned char PduR_CanTpRTabLoTpConfigIdx.8_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_CanTpRTabLoTpConfigIdx.8_1 = PduR_CanTpRTabLoTpConfigIdx;
  PduR_GenericTpRxIndication (RxPduId_3(D), Result_4(D), PduR_CanTpRTabLoTpConfigIdx.8_1);
  return;

}



;; Function PduR_CanTpTxConfirmation (PduR_CanTpTxConfirmation, funcdef_no=9, decl_uid=5813, cgraph_uid=10, symbol_order=9)

Modification phase of node PduR_CanTpTxConfirmation/9
PduR_CanTpTxConfirmation (PduIdType TxPduId, NotifResultType Result)
{
  unsigned char PduR_CanTpRTabLoTpConfigIdx.9_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_CanTpRTabLoTpConfigIdx.9_1 = PduR_CanTpRTabLoTpConfigIdx;
  PduR_GenericTpTxConfirmation (TxPduId_3(D), Result_4(D), PduR_CanTpRTabLoTpConfigIdx.9_1);
  return;

}



;; Function PduR_ComTransmit (PduR_ComTransmit, funcdef_no=10, decl_uid=5816, cgraph_uid=11, symbol_order=10)

Modification phase of node PduR_ComTransmit/10
PduR_ComTransmit (PduIdType TxPduId, const struct PduInfoType * PduInfoPtr)
{
  Std_ReturnType RetVal;
  unsigned char PduR_ComRTabUpIfTxConfigIdx.10_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_ComRTabUpIfTxConfigIdx.10_1 = PduR_ComRTabUpIfTxConfigIdx;
  RetVal_6 = PduR_GenericIfTransmit (TxPduId_3(D), PduInfoPtr_4(D), PduR_ComRTabUpIfTxConfigIdx.10_1);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function PduR_DcmTransmit (PduR_DcmTransmit, funcdef_no=11, decl_uid=5822, cgraph_uid=12, symbol_order=11)

Modification phase of node PduR_DcmTransmit/11
PduR_DcmTransmit (PduIdType TxPduId, const struct PduInfoType * PduInfoPtr)
{
  Std_ReturnType RetVal;
  unsigned char PduR_DcmRTabUpTpConfigIdx.11_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_DcmRTabUpTpConfigIdx.11_1 = PduR_DcmRTabUpTpConfigIdx;
  RetVal_6 = PduR_GenericTpTransmit (TxPduId_3(D), PduInfoPtr_4(D), PduR_DcmRTabUpTpConfigIdx.11_1);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function PduR_DcmCancelTransmit (PduR_DcmCancelTransmit, funcdef_no=12, decl_uid=5824, cgraph_uid=13, symbol_order=12)

Modification phase of node PduR_DcmCancelTransmit/12
PduR_DcmCancelTransmit (PduIdType TxPduId)
{
  Std_ReturnType RetVal;
  unsigned char PduR_DcmRTabUpTpConfigIdx.12_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_DcmRTabUpTpConfigIdx.12_1 = PduR_DcmRTabUpTpConfigIdx;
  RetVal_5 = PduR_GenericTpCancelTransmit (TxPduId_3(D), PduR_DcmRTabUpTpConfigIdx.12_1);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function PduR_DcmCancelReceive (PduR_DcmCancelReceive, funcdef_no=13, decl_uid=5826, cgraph_uid=14, symbol_order=13)

Modification phase of node PduR_DcmCancelReceive/13
PduR_DcmCancelReceive (PduIdType RxPduId)
{
  Std_ReturnType RetVal;
  unsigned char PduR_DcmRTabUpTpConfigIdx.13_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_DcmRTabUpTpConfigIdx.13_1 = PduR_DcmRTabUpTpConfigIdx;
  RetVal_5 = PduR_GenericTpCancelReceive (RxPduId_3(D), PduR_DcmRTabUpTpConfigIdx.13_1);
  # DEBUG RetVal => RetVal_5
  # DEBUG BEGIN_STMT
  return RetVal_5;

}



;; Function PduR_DcmIfTransmit (PduR_DcmIfTransmit, funcdef_no=14, decl_uid=5819, cgraph_uid=15, symbol_order=14)

Modification phase of node PduR_DcmIfTransmit/14
PduR_DcmIfTransmit (PduIdType TxPduId, const struct PduInfoType * PduInfoPtr)
{
  Std_ReturnType RetVal;
  unsigned char PduR_DcmRTabUpIfTxConfigIdx.14_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_DcmRTabUpIfTxConfigIdx.14_1 = PduR_DcmRTabUpIfTxConfigIdx;
  RetVal_6 = PduR_GenericIfTransmit (TxPduId_3(D), PduInfoPtr_4(D), PduR_DcmRTabUpIfTxConfigIdx.14_1);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function PduR_SecOCTransmit (PduR_SecOCTransmit, funcdef_no=15, decl_uid=5829, cgraph_uid=16, symbol_order=15)

Modification phase of node PduR_SecOCTransmit/15
PduR_SecOCTransmit (PduIdType TxPduId, const struct PduInfoType * PduInfoPtr)
{
  Std_ReturnType RetVal;
  unsigned char PduR_SecOCRTabUpIfTxConfigIdx.15_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  PduR_SecOCRTabUpIfTxConfigIdx.15_1 = PduR_SecOCRTabUpIfTxConfigIdx;
  RetVal_6 = PduR_GenericIfTransmit (TxPduId_3(D), PduInfoPtr_4(D), PduR_SecOCRTabUpIfTxConfigIdx.15_1);
  # DEBUG RetVal => RetVal_6
  # DEBUG BEGIN_STMT
  return RetVal_6;

}



;; Function PduR_SecOCRxIndication (PduR_SecOCRxIndication, funcdef_no=16, decl_uid=5832, cgraph_uid=17, symbol_order=16)

Modification phase of node PduR_SecOCRxIndication/16
PduR_SecOCRxIndication (PduIdType RxPduId, struct PduInfoType * PduInfoPtr)
{
  unsigned char PduR_SecOCRTabLoIfConfigIdx.16_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_SecOCRTabLoIfConfigIdx.16_1 = PduR_SecOCRTabLoIfConfigIdx;
  PduR_GenericIfRxIndication (RxPduId_3(D), PduInfoPtr_4(D), PduR_SecOCRTabLoIfConfigIdx.16_1);
  return;

}



;; Function PduR_SecOCTxConfirmation (PduR_SecOCTxConfirmation, funcdef_no=17, decl_uid=5834, cgraph_uid=18, symbol_order=17)

Modification phase of node PduR_SecOCTxConfirmation/17
PduR_SecOCTxConfirmation (PduIdType TxPduId)
{
  unsigned char PduR_SecOCRTabLoIfConfigIdx.17_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  PduR_SecOCRTabLoIfConfigIdx.17_1 = PduR_SecOCRTabLoIfConfigIdx;
  PduR_GenericIfTxConfirmation (TxPduId_3(D), PduR_SecOCRTabLoIfConfigIdx.17_1);
  return;

}


