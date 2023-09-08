
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  SchM_Deinit/3:
  Jump functions of caller  SchM_Init/2:
  Jump functions of caller  EcuM_SchM_Deinit/1:
  Jump functions of caller  EcuM_SchM_Init/0:

 Propagating constants:

Not considering EcuM_SchM_Deinit for cloning; -fipa-cp-clone disabled.
Not considering EcuM_SchM_Init for cloning; -fipa-cp-clone disabled.

overall_size: 8, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: EcuM_SchM_Deinit/1:
  Node: EcuM_SchM_Init/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

SchM_Deinit/3 (SchM_Deinit) @0728cd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_SchM_Deinit/1 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Init/2 (SchM_Init) @072908c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: EcuM_SchM_Init/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
EcuM_SchM_Deinit/1 (EcuM_SchM_Deinit) @07290540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Deinit/3 (1073741824 (estimated locally),1.00 per call) 
EcuM_SchM_Init/0 (EcuM_SchM_Init) @07290ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Init/2 (1073741824 (estimated locally),1.00 per call) 

;; Function EcuM_SchM_Init (EcuM_SchM_Init, funcdef_no=0, decl_uid=9851, cgraph_uid=1, symbol_order=0)

Modification phase of node EcuM_SchM_Init/0
EcuM_SchM_Init ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Init ();
  return;

}



;; Function EcuM_SchM_Deinit (EcuM_SchM_Deinit, funcdef_no=1, decl_uid=9853, cgraph_uid=2, symbol_order=1)

Modification phase of node EcuM_SchM_Deinit/1
EcuM_SchM_Deinit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Deinit ();
  return;

}


