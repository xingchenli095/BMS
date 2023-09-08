
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ReleaseLocks/0:

 Propagating constants:

Not considering OS_ReleaseLocks for cloning; -fipa-cp-clone disabled.

overall_size: 14, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_ReleaseLocks/0:
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

OS_resourceTableBase/1 (OS_resourceTableBase) @05ff46c0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_ReleaseLocks/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_ReleaseLocks/0 (OS_ReleaseLocks) @06019b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_resourceTableBase/1 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_ReleaseLocks (OS_ReleaseLocks, funcdef_no=0, decl_uid=6848, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_ReleaseLocks/0
__attribute__((target ("general-regs-only")))
OS_ReleaseLocks (os_objectid_t head)
{
  struct os_resourcedynamic_t * rd;
  os_objectid_t lock;
  const struct os_resource_t * OS_resourceTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_resource_t * _4;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG lock => head_7(D)
  # DEBUG BEGIN_STMT
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_resourceTableBase.0_1 = OS_resourceTableBase;
  _2 = lock_5 & 16777215;
  _3 = _2 * 16;
  _4 = OS_resourceTableBase.0_1 + _3;
  rd_9 = _4->dynamic;
  # DEBUG rd => rd_9
  # DEBUG BEGIN_STMT
  lock_10 = rd_9->next;
  # DEBUG lock => lock_10
  # DEBUG BEGIN_STMT
  rd_9->next = 4294967295;
  # DEBUG BEGIN_STMT
  rd_9->takenBy = 255;
  # DEBUG BEGIN_STMT
  rd_9->lastPrio = 0;

  <bb 4> [local count: 1073741824]:
  # lock_5 = PHI <head_7(D)(2), lock_10(3)>
  # DEBUG lock => lock_5
  # DEBUG BEGIN_STMT
  if (lock_5 != 4294967295)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


