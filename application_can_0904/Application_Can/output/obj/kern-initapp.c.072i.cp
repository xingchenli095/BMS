
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_InitApp/0:

 Propagating constants:

Not considering OS_InitApp for cloning; -fipa-cp-clone disabled.

overall_size: 12, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_InitApp/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_nApps/2 (OS_nApps) @06c88798
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitApp/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_appTableBase/1 (OS_appTableBase) @06c88750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_InitApp/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_InitApp/0 (OS_InitApp) @06ca8a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_appTableBase/1 (read)OS_nApps/2 (read)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function OS_InitApp (OS_InitApp, funcdef_no=0, decl_uid=6764, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_InitApp/0
__attribute__((target ("general-regs-only")))
OS_InitApp ()
{
  struct os_appdynamic_t * ad;
  const struct os_appcontext_t * ap;
  os_applicationid_t a;
  const struct os_appcontext_t * OS_appTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  unsigned char OS_nApps.2_4;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG myCoreId => 0
  # DEBUG BEGIN_STMT
  # DEBUG a => 0
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  OS_appTableBase.0_1 = OS_appTableBase;
  _2 = (unsigned int) a_5;
  _3 = _2 * 64;
  ap_8 = OS_appTableBase.0_1 + _3;
  # DEBUG ap => ap_8
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ad_9 = ap_8->dynamic;
  # DEBUG ad => ad_9
  # DEBUG BEGIN_STMT
  ad_9->appstate = 2;
  # DEBUG BEGIN_STMT
  a_11 = a_5 + 1;
  # DEBUG a => a_11

  <bb 4> [local count: 1073741824]:
  # a_5 = PHI <0(2), a_11(3)>
  # DEBUG a => a_5
  # DEBUG BEGIN_STMT
  OS_nApps.2_4 = OS_nApps;
  if (OS_nApps.2_4 > a_5)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 118111601]:
  return;

}


