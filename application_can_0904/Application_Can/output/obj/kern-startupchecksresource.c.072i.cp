
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Panic/2:
  Jump functions of caller  OS_StartupChecksResource/0:

 Propagating constants:

Not considering OS_StartupChecksResource for cloning; -fipa-cp-clone disabled.

overall_size: 26, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartupChecksResource/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nResources/3 (OS_nResources) @06cc8a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksResource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_Panic/2 (OS_Panic) @06ce8c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartupChecksResource/0 (220750581 (estimated locally),1.87 per call) OS_StartupChecksResource/0 (166566348 (estimated locally),1.41 per call) 
  Calls: 
OS_resourceTableBase/1 (OS_resourceTableBase) @06cc8948
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecksResource/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_StartupChecksResource/0 (OS_StartupChecksResource) @06ce8a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_resourceTableBase/1 (read)OS_nResources/3 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Panic/2 (220750581 (estimated locally),1.87 per call) OS_Panic/2 (166566348 (estimated locally),1.41 per call) 

;; Function OS_StartupChecksResource (OS_StartupChecksResource, funcdef_no=0, decl_uid=6517, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartupChecksResource/0
__attribute__((target ("general-regs-only")))
OS_StartupChecksResource ()
{
  const os_permission_t perms;
  const struct os_appcontext_t * const app;
  const struct os_resource_t * const resource;
  os_resourceid_t i;
  os_result_t result;
  const struct os_resource_t * OS_resourceTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  unsigned int _4;
  unsigned int _5;
  short unsigned int OS_nResources.2_6;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG i => 0
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_resourceTableBase.0_1 = OS_resourceTableBase;
  _2 = (unsigned int) i_10;
  _3 = _2 * 16;
  resource_16 = OS_resourceTableBase.0_1 + _3;
  # DEBUG resource => resource_16
  # DEBUG BEGIN_STMT
  app_17 = resource_16->app;
  # DEBUG app => app_17
  # DEBUG BEGIN_STMT
  if (app_17 == 0B)
    goto <bb 4>; [17.43%]
  else
    goto <bb 5>; [82.57%]

  <bb 4> [local count: 166566348]:
  # DEBUG BEGIN_STMT
  result_19 = OS_Panic (51);
  # DEBUG result => result_19

  <bb 5> [local count: 955630223]:
  # result_7 = PHI <result_19(4), result_9(3)>
  # DEBUG result => result_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  perms_20 = resource_16->permissions;
  # DEBUG perms => perms_20
  # DEBUG BEGIN_STMT
  if (app_17 != 0B)
    goto <bb 6>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 6> [local count: 668941156]:
  _4 = app_17->permissionBit;
  _5 = _4 & perms_20;
  if (_5 == 0)
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 220750581]:
  # DEBUG BEGIN_STMT
  result_22 = OS_Panic (50);
  # DEBUG result => result_22

  <bb 8> [local count: 955630223]:
  # result_8 = PHI <result_22(7), result_7(5), result_7(6)>
  # DEBUG result => result_8
  # DEBUG BEGIN_STMT
  i_23 = i_10 + 1;
  # DEBUG i => i_23

  <bb 9> [local count: 1073741824]:
  # result_9 = PHI <0(2), result_8(8)>
  # i_10 = PHI <0(2), i_23(8)>
  # DEBUG i => i_10
  # DEBUG result => result_9
  # DEBUG BEGIN_STMT
  OS_nResources.2_6 = OS_nResources;
  if (OS_nResources.2_6 > i_10)
    goto <bb 3>; [89.00%]
  else
    goto <bb 10>; [11.00%]

  <bb 10> [local count: 118111601]:
  # result_15 = PHI <result_9(9)>
  # DEBUG BEGIN_STMT
  return result_15;

}


