
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_ShutdownNoHooks/2:
  Jump functions of caller  OS_StartupChecks/0:
    indirect simple callsite, calling param -1, offset 0, for stmt _2 = _3 ();

 Propagating constants:

Not considering OS_StartupChecks for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_StartupChecks/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_ShutdownNoHooks/2 (OS_ShutdownNoHooks) @06cacc40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_StartupChecks/0 (38976828 (estimated locally),0.33 per call) 
  Calls: 
OS_startupCheckFunc/1 (OS_startupCheckFunc) @06c87900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_StartupChecks/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_StartupChecks/0 (OS_StartupChecks) @06caca80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_startupCheckFunc/1 (addr)
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_ShutdownNoHooks/2 (38976828 (estimated locally),0.33 per call) 
   Indirect call(955630223 (estimated locally),8.09 per call) 

;; Function OS_StartupChecks (OS_StartupChecks, funcdef_no=0, decl_uid=6497, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_StartupChecks/0
__attribute__((target ("general-regs-only")))
OS_StartupChecks ()
{
  os_result_t (*os_schkfunc_t) (void) * fct;
  os_result_t result;
  unsigned char _2;
  os_result_t (*<T5ab>) (void) _3;

  <bb 2> [local count: 118111600]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG fct => &OS_startupCheckFunc[0]
  # DEBUG BEGIN_STMT
  goto <bb 6>; [100.00%]

  <bb 3> [local count: 955630223]:
  # DEBUG BEGIN_STMT
  _2 = _3 ();
  if (_2 != 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 477815111]:
  # DEBUG BEGIN_STMT
  # DEBUG result => 22

  <bb 5> [local count: 955630223]:
  # result_4 = PHI <result_5(3), 22(4)>
  # DEBUG result => result_4
  # DEBUG BEGIN_STMT
  fct_12 = fct_6 + 4;
  # DEBUG fct => fct_12

  <bb 6> [local count: 1073741824]:
  # result_5 = PHI <0(2), result_4(5)>
  # fct_6 = PHI <&OS_startupCheckFunc[0](2), fct_12(5)>
  # DEBUG fct => fct_6
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  _3 = *fct_6;
  if (_3 != 0B)
    goto <bb 3>; [89.00%]
  else
    goto <bb 7>; [11.00%]

  <bb 7> [local count: 118111601]:
  # result_1 = PHI <result_5(6)>
  # DEBUG BEGIN_STMT
  if (result_1 != 0)
    goto <bb 8>; [33.00%]
  else
    goto <bb 9>; [67.00%]

  <bb 8> [local count: 38976828]:
  # DEBUG BEGIN_STMT
  OS_ShutdownNoHooks ();

  <bb 9> [local count: 118111601]:
  return;

}


