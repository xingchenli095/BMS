
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  boardNmiCallBack/0:

 Propagating constants:

Not considering boardNmiCallBack for cloning; -fipa-cp-clone disabled.

overall_size: 2, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: boardNmiCallBack/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

boardNmiCallBack/0 (boardNmiCallBack) @06cdb9a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:107374 (estimated locally) body executed_once optimize_size
  Called by: 
  Calls: 

;; Function boardNmiCallBack (boardNmiCallBack, funcdef_no=0, decl_uid=5515, cgraph_uid=1, symbol_order=0) (executed once)

Modification phase of node boardNmiCallBack/0
boardNmiCallBack ()
{
  <bb 2> [local count: 107374]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG confusion => 0

  <bb 3> [local count: 1073741824]:
  # DEBUG confusion => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG confusion => NULL

  <bb 4> [local count: 1073741824]:
  goto <bb 3>; [100.00%]

}


