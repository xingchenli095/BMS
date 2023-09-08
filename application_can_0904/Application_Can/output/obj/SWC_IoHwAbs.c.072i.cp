
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dio_WriteChannel/2:
  Jump functions of caller  SWC_IoHwAbs_SetDiscreteValue/1:
  Jump functions of caller  LedControl_IO/0:

 Propagating constants:

Not considering SWC_IoHwAbs_SetDiscreteValue for cloning; -fipa-cp-clone disabled.
Not considering LedControl_IO for cloning; -fipa-cp-clone disabled.

overall_size: 9, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: SWC_IoHwAbs_SetDiscreteValue/1:
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
  Node: LedControl_IO/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dio_WriteChannel/2 (Dio_WriteChannel) @06fbf7e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LedControl_IO/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SWC_IoHwAbs_SetDiscreteValue/1 (SWC_IoHwAbs_SetDiscreteValue) @06fbf620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LedControl_IO/0 (LedControl_IO) @06fbf460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dio_WriteChannel/2 (1073741824 (estimated locally),1.00 per call) 

;; Function LedControl_IO (LedControl_IO, funcdef_no=0, decl_uid=5718, cgraph_uid=1, symbol_order=0)

Modification phase of node LedControl_IO/0
LedControl_IO ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (8, 1);
  return;

}



;; Function SWC_IoHwAbs_SetDiscreteValue (SWC_IoHwAbs_SetDiscreteValue, funcdef_no=1, decl_uid=5721, cgraph_uid=2, symbol_order=1)

Modification phase of node SWC_IoHwAbs_SetDiscreteValue/1
SWC_IoHwAbs_SetDiscreteValue (uint32 pdav0, uint32 value)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


