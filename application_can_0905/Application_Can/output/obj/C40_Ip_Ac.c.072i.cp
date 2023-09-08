
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  C40_Ip_AccessCode/0:
    indirect simple callsite, calling param 0, offset 0, for stmt CallBack_13(D) ();

 Propagating constants:

Not considering C40_Ip_AccessCode for cloning; -fipa-cp-clone disabled.

overall_size: 19, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: C40_Ip_AccessCode/0:
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

C40_Ip_pFlashBaseAddress/1 (C40_Ip_pFlashBaseAddress) @06db25a0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: C40_Ip_AccessCode/0 (read)
  Availability: not_available
  Varpool flags: read-only
C40_Ip_AccessCode/0 (C40_Ip_AccessCode) @06d79e00
  Type: function definition analyzed
  Visibility: externally_visible public section:.acfls_code_rom
  References: C40_Ip_pFlashBaseAddress/1 (read)
  Referring: 
  Availability: available
  Function flags: count:59055801 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(55807731 (estimated locally),0.94 per call)  of param:0 (vptr maybe changed)

;; Function C40_Ip_AccessCode (C40_Ip_AccessCode, funcdef_no=0, decl_uid=8180, cgraph_uid=1, symbol_order=0)

Modification phase of node C40_Ip_AccessCode/0
__attribute__((section (".acfls_code_rom")))
C40_Ip_AccessCode (void (*<T4c8>) (void) CallBack)
{
  struct FLASH_Type * C40_Ip_pFlashBaseAddress.0_1;
  long unsigned int _2;
  long unsigned int _4;
  long unsigned int _5;
  long unsigned int _6;
  long unsigned int _7;
  long unsigned int _8;

  <bb 2> [local count: 59055801]:
  # DEBUG BEGIN_STMT
  C40_Ip_pFlashBaseAddress.0_1 = C40_Ip_pFlashBaseAddress;
  _2 ={v} C40_Ip_pFlashBaseAddress.0_1->MCR;
  _4 = _2 | 1;
  C40_Ip_pFlashBaseAddress.0_1->MCR ={v} _4;
  # DEBUG BEGIN_STMT
  goto <bb 5>; [100.00%]

  <bb 3> [local count: 1014686025]:
  # DEBUG BEGIN_STMT
  if (CallBack_13(D) != 0B)
    goto <bb 4>; [5.50%]
  else
    goto <bb 8>; [94.50%]

  <bb 8> [local count: 958878293]:
  goto <bb 6>; [100.00%]

  <bb 4> [local count: 55807731]:
  # DEBUG BEGIN_STMT
  CallBack_13(D) ();

  <bb 5> [local count: 114863532]:

  <bb 6> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  _5 ={v} C40_Ip_pFlashBaseAddress.0_1->MCRS;
  _6 = _5 & 32768;
  if (_6 == 0)
    goto <bb 3>; [94.50%]
  else
    goto <bb 7>; [5.50%]

  <bb 7> [local count: 59055800]:
  # DEBUG BEGIN_STMT
  _7 ={v} C40_Ip_pFlashBaseAddress.0_1->MCR;
  _8 = _7 & 4294967294;
  C40_Ip_pFlashBaseAddress.0_1->MCR ={v} _8;
  return;

}


