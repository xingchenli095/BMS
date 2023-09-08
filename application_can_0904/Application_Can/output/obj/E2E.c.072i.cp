
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  E2E_GetVersionInfo/0:

 Propagating constants:

Not considering E2E_GetVersionInfo for cloning; -fipa-cp-clone disabled.

overall_size: 15, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: E2E_GetVersionInfo/0:
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

E2E_GetVersionInfo/0 (E2E_GetVersionInfo) @06a81620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:170418166 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function E2E_GetVersionInfo (E2E_GetVersionInfo, funcdef_no=0, decl_uid=5370, cgraph_uid=1, symbol_order=0)

Modification phase of node E2E_GetVersionInfo/0
E2E_GetVersionInfo (struct Std_VersionInfoType * VersionInfo)
{
  uint32 i;
  uint8 * _1;

  <bb 2> [local count: 170418166]:
  # DEBUG BEGIN_STMT
  if (VersionInfo_5(D) != 0B)
    goto <bb 7>; [70.00%]
  else
    goto <bb 6>; [30.00%]

  <bb 7> [local count: 119292716]:
  goto <bb 4>; [100.00%]

  <bb 3> [local count: 954449109]:
  # DEBUG BEGIN_STMT
  _1 = VersionInfo_5(D) + i_2;
  *_1 = 0;
  # DEBUG BEGIN_STMT
  i_13 = i_2 + 1;
  # DEBUG i => i_13

  <bb 4> [local count: 1073741824]:
  # i_2 = PHI <i_13(3), 0(7)>
  # DEBUG i => i_2
  # DEBUG BEGIN_STMT
  if (i_2 != 8)
    goto <bb 3>; [88.89%]
  else
    goto <bb 5>; [11.11%]

  <bb 5> [local count: 119292717]:
  # DEBUG BEGIN_STMT
  VersionInfo_5(D)->vendorID = 1;
  # DEBUG BEGIN_STMT
  VersionInfo_5(D)->moduleID = 207;
  # DEBUG BEGIN_STMT
  VersionInfo_5(D)->sw_major_version = 2;
  # DEBUG BEGIN_STMT
  VersionInfo_5(D)->sw_minor_version = 0;
  # DEBUG BEGIN_STMT
  VersionInfo_5(D)->sw_patch_version = 18;

  <bb 6> [local count: 170418167]:
  return;

}


