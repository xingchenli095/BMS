
IPA constant propagation start:
Determining dynamic type for call: OS_startResLockTimingFp.3_26 (rd_42(D), _25);
  Starting walk at: OS_startResLockTimingFp.3_26 (rd_42(D), _25);
  instance pointer: rd_42(D)  Outer instance pointer: rd_42(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:is_41 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_16);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_CORTEXM_IntSetDisablingLevel/7:
  Jump functions of caller  OS_Error/4:
  Jump functions of caller  OS_GetResourceFromIsr/0:
    indirect simple callsite, calling param -1, offset 0, for stmt OS_startResLockTimingFp.3_26 (rd_42(D), _25);
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 1: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_GetResourceFromIsr for cloning; -fipa-cp-clone disabled.

overall_size: 69, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetResourceFromIsr/0:
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
    param [2]: BOTTOM
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

OS_startResLockTimingFp/8 (OS_startResLockTimingFp) @06c12c18
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromIsr/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_CORTEXM_IntSetDisablingLevel/7 (OS_CORTEXM_IntSetDisablingLevel) @06cdc2a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetResourceFromIsr/0 (206426865 (estimated locally),0.19 per call) OS_GetResourceFromIsr/0 (206426865 (estimated locally),0.19 per call) OS_GetResourceFromIsr/0 (412853730 (estimated locally),0.38 per call) 
  Calls: 
OS_kernDisableLevel/6 (OS_kernDisableLevel) @06c12b88
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromIsr/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_svc_GetResource/5 (OS_svc_GetResource) @06c12af8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromIsr/0 (addr)OS_GetResourceFromIsr/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/4 (OS_Error) @06cdc0e0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_GetResourceFromIsr/0 (412853730 (estimated locally),0.38 per call) OS_GetResourceFromIsr/0 (248034361 (estimated locally),0.23 per call) 
  Calls: 
OS_isrTableBase/3 (OS_isrTableBase) @06c12a68
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromIsr/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_resourceTableBase/2 (OS_resourceTableBase) @06c12a20
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromIsr/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c129d8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetResourceFromIsr/0 (read)OS_GetResourceFromIsr/0 (read)OS_GetResourceFromIsr/0 (write)
  Availability: not_available
  Varpool flags:
OS_GetResourceFromIsr/0 (OS_GetResourceFromIsr) @06c33000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_resourceTableBase/2 (read)OS_isrTableBase/3 (read)OS_kernelData/1 (read)OS_svc_GetResource/5 (addr)OS_svc_GetResource/5 (addr)OS_kernDisableLevel/6 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_startResLockTimingFp/8 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741823 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_CORTEXM_IntSetDisablingLevel/7 (206426865 (estimated locally),0.19 per call) OS_CORTEXM_IntSetDisablingLevel/7 (206426865 (estimated locally),0.19 per call) OS_CORTEXM_IntSetDisablingLevel/7 (412853730 (estimated locally),0.38 per call) OS_Error/4 (412853730 (estimated locally),0.38 per call) OS_Error/4 (248034361 (estimated locally),0.23 per call) 
   Indirect call(144498806 (estimated locally),0.13 per call) 

;; Function OS_GetResourceFromIsr (OS_GetResourceFromIsr, funcdef_no=0, decl_uid=6846, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetResourceFromIsr/0
__attribute__((target ("general-regs-only")))
OS_GetResourceFromIsr (os_resourceid_t r, struct os_resourcedynamic_t * rd, os_paramtype_t * p)
{
  os_prio_t newLevel;
  const struct os_appcontext_t * app;
  const struct os_isr_t * isrp;
  os_intstatus_t is;
  const struct os_resource_t * rs;
  os_result_t result;
  const struct os_resource_t * OS_resourceTableBase.0_1;
  unsigned int _2;
  unsigned int _3;
  const struct os_isr_t * OS_isrTableBase.1_4;
  short unsigned int _5;
  unsigned int _6;
  unsigned int _7;
  unsigned int _8;
  unsigned int _9;
  unsigned int _10;
  short unsigned int _11;
  unsigned int _12;
  unsigned int _13;
  short unsigned int _14;
  unsigned int _15;
  short unsigned int OS_kernDisableLevel.2_16;
  unsigned int _17;
  unsigned int _18;
  short unsigned int _19;
  short unsigned int _20;
  short unsigned int _21;
  const os_tick_t * _22;
  unsigned int _23;
  const os_tick_t * _24;
  unsigned int _25;
  void (*<T63c>) (struct os_resourcedynamic_t *, os_tick_t) OS_startResLockTimingFp.3_26;
  short unsigned int _27;
  short unsigned int _28;

  <bb 2> [local count: 1073741823]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  # DEBUG result => 0
  # DEBUG BEGIN_STMT
  OS_resourceTableBase.0_1 = OS_resourceTableBase;
  _2 = (unsigned int) r_33(D);
  _3 = _2 * 16;
  rs_34 = OS_resourceTableBase.0_1 + _3;
  # DEBUG rs => rs_34
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_isrTableBase.1_4 = OS_isrTableBase;
  _5 = OS_kernelData.isrCurrent;
  _6 = (unsigned int) _5;
  _7 = _6 * 68;
  isrp_35 = OS_isrTableBase.1_4 + _7;
  # DEBUG isrp => isrp_35
  # DEBUG BEGIN_STMT
  app_36 = isrp_35->app;
  # DEBUG app => app_36
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (app_36 != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 3> [local count: 751619277]:
  _8 = app_36->permissionBit;
  _9 = rs_34->permissions;
  _10 = _8 & _9;
  if (_10 == 0)
    goto <bb 4>; [33.00%]
  else
    goto <bb 5>; [67.00%]

  <bb 4> [local count: 248034361]:
  # DEBUG BEGIN_STMT
  result_39 = OS_Error (&OS_svc_GetResource, 37, p_37(D));
  # DEBUG result => result_39
  goto <bb 13>; [100.00%]

  <bb 5> [local count: 825707462]:
  # DEBUG BEGIN_STMT
  _11 = isrp_35->arch.priority;
  _12 = (unsigned int) _11;
  _13 = 272 - _12;
  _14 = rs_34->prio;
  _15 = (unsigned int) _14;
  if (_13 > _15)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 412853730]:
  # DEBUG BEGIN_STMT
  result_52 = OS_Error (&OS_svc_GetResource, 26, p_37(D));
  # DEBUG result => result_52
  goto <bb 13>; [100.00%]

  <bb 7> [local count: 412853730]:
  # DEBUG BEGIN_STMT
  OS_kernDisableLevel.2_16 = OS_kernDisableLevel;
  is_41 = OS_CORTEXM_IntSetDisablingLevel (OS_kernDisableLevel.2_16);
  # DEBUG is => is_41
  # DEBUG BEGIN_STMT
  _17 = OS_kernelData.isrLastLock;
  rd_42(D)->next = _17;
  # DEBUG BEGIN_STMT
  _18 = _2 | 67108864;
  OS_kernelData.isrLastLock = _18;
  # DEBUG BEGIN_STMT
  _19 = 272 - is_41;
  rd_42(D)->lastPrio = _19;
  # DEBUG BEGIN_STMT
  _20 = isrp_35->isrId;
  _21 = _20 + 256;
  rd_42(D)->takenBy = _21;
  # DEBUG BEGIN_STMT
  _22 = isrp_35->resourceLockTime;
  if (_22 != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 10>; [30.00%]

  <bb 8> [local count: 288997611]:
  _23 = _2 * 4;
  _24 = _22 + _23;
  _25 = *_24;
  if (_25 != 0)
    goto <bb 9>; [50.00%]
  else
    goto <bb 10>; [50.00%]

  <bb 9> [local count: 144498806]:
  # DEBUG BEGIN_STMT
  OS_startResLockTimingFp.3_26 = OS_startResLockTimingFp;
  OS_startResLockTimingFp.3_26 (rd_42(D), _25);

  <bb 10> [local count: 412853730]:
  # DEBUG BEGIN_STMT
  _27 = rs_34->prio;
  _28 = rd_42(D)->lastPrio;
  if (_27 > _28)
    goto <bb 11>; [50.00%]
  else
    goto <bb 12>; [50.00%]

  <bb 11> [local count: 206426865]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  newLevel_49 = 272 - _27;
  # DEBUG newLevel => newLevel_49
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (newLevel_49);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 206426865]:
  # DEBUG BEGIN_STMT
  OS_CORTEXM_IntSetDisablingLevel (is_41);

  <bb 13> [local count: 1073741824]:
  # result_29 = PHI <result_39(4), result_52(6), 0(11), 0(12)>
  # DEBUG result => result_29
  # DEBUG BEGIN_STMT
  return result_29;

}


