
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Wdg_SetTriggerCondition/2:
  Jump functions of caller  Wdg_SetMode/1:
  Jump functions of caller  Wdg_Init/0:

 Propagating constants:

Not considering Wdg_SetTriggerCondition for cloning; -fipa-cp-clone disabled.
Not considering Wdg_SetMode for cloning; -fipa-cp-clone disabled.
Not considering Wdg_Init for cloning; -fipa-cp-clone disabled.

overall_size: 9, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000
 - context independent values, size: 3, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: Wdg_SetTriggerCondition/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Wdg_SetMode/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Wdg_Init/0:
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

Wdg_SetTriggerCondition/2 (Wdg_SetTriggerCondition) @06a7fc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Wdg_SetMode/1 (Wdg_SetMode) @06a7fa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Wdg_Init/0 (Wdg_Init) @06a7f8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Wdg_Init (Wdg_Init, funcdef_no=0, decl_uid=5373, cgraph_uid=1, symbol_order=0)

Modification phase of node Wdg_Init/0
Wdg_Init (const struct Wdg_ConfigType * ConfigPtr)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function Wdg_SetMode (Wdg_SetMode, funcdef_no=1, decl_uid=5375, cgraph_uid=2, symbol_order=1)

Modification phase of node Wdg_SetMode/1
Wdg_SetMode (WdgIf_ModeType Mode)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return 0;

}



;; Function Wdg_SetTriggerCondition (Wdg_SetTriggerCondition, funcdef_no=2, decl_uid=5377, cgraph_uid=3, symbol_order=2)

Modification phase of node Wdg_SetTriggerCondition/2
Wdg_SetTriggerCondition (uint16 timeout)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}


