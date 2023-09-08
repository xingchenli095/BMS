
IPA constant propagation start:
Determining dynamic type for call: _3 (cs_6(D));
  Starting walk at: _3 (cs_6(D));
  instance pointer: cs_6(D)  Outer instance pointer: cs_6(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetCount/0:
    indirect aggregate callsite, calling param 0, offset 32, by reference, for stmt _3 (cs_6(D));
       param 0: PASS THROUGH: 0, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_GetCount for cloning; -fipa-cp-clone disabled.

overall_size: 16, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetCount/0:
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

OS_GetCount/0 (OS_GetCount) @06c27c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(375809638 (estimated locally),0.35 per call)  of param:0 loaded from aggregate passed by reference at offset 32 (vptr maybe changed)

;; Function OS_GetCount (OS_GetCount, funcdef_no=0, decl_uid=6443, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetCount/0
__attribute__((target ("general-regs-only")))
OS_GetCount (const struct os_counter_t * cs)
{
  struct os_counterdynamic_t * cd;
  os_tick_t count;
  const struct os_hwt_t * _1;
  unsigned char _2;
  void (*<T540>) (const struct os_counter_t *) _3;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  cd_7 = cs_6(D)->dynamic;
  # DEBUG cd => cd_7
  # DEBUG BEGIN_STMT
  _1 = cs_6(D)->hwt;
  if (_1 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619277]:
  # DEBUG BEGIN_STMT
  _2 = cd_7->lock;
  if (_2 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 5>; [50.00%]

  <bb 4> [local count: 375809638]:
  # DEBUG BEGIN_STMT
  _3 = cs_6(D)->updFunc;
  _3 (cs_6(D));

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  count_9 = cd_7->current;
  # DEBUG count => count_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return count_9;

}


