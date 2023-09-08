
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RestartApplication/2:
  Jump functions of caller  OS_QuarantineApplication/1:
  Jump functions of caller  OS_LocalTerminateApplication/0:

 Propagating constants:

Not considering OS_LocalTerminateApplication for cloning; -fipa-cp-clone disabled.

overall_size: 13, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_LocalTerminateApplication/0:
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

OS_RestartApplication/2 (OS_RestartApplication) @06c1ad20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalTerminateApplication/0 (69609308 (estimated locally),0.06 per call) 
  Calls: 
OS_QuarantineApplication/1 (OS_QuarantineApplication) @06c1ac40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_LocalTerminateApplication/0 (343919506 (estimated locally),0.32 per call) 
  Calls: 
OS_LocalTerminateApplication/0 (OS_LocalTerminateApplication) @06c1aa80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_RestartApplication/2 (69609308 (estimated locally),0.06 per call) OS_QuarantineApplication/1 (343919506 (estimated locally),0.32 per call) 

;; Function OS_LocalTerminateApplication (OS_LocalTerminateApplication, funcdef_no=0, decl_uid=6243, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_LocalTerminateApplication/0
__attribute__((target ("general-regs-only")))
OS_LocalTerminateApplication (const struct os_appcontext_t * app, os_restart_t restart)
{
  struct os_appdynamic_t * appd;
  os_errorresult_t result;
  unsigned char _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  appd_6 = app_5(D)->dynamic;
  # DEBUG appd => appd_6
  # DEBUG BEGIN_STMT
  _1 = appd_6->appstate;
  if (_1 != 2)
    goto <bb 5>; [67.97%]
  else
    goto <bb 3>; [32.03%]

  <bb 3> [local count: 343919506]:
  # DEBUG BEGIN_STMT
  OS_QuarantineApplication (app_5(D));
  # DEBUG BEGIN_STMT
  if (restart_8(D) == 1)
    goto <bb 4>; [20.24%]
  else
    goto <bb 5>; [79.76%]

  <bb 4> [local count: 69609308]:
  # DEBUG BEGIN_STMT
  OS_RestartApplication (app_5(D));

  <bb 5> [local count: 1073741824]:
  # result_2 = PHI <154(2), 0(3), 0(4)>
  # DEBUG result => result_2
  # DEBUG BEGIN_STMT
  return result_2;

}


