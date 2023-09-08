
IPA constant propagation start:
Determining dynamic type for call: Result_9 = NvM_Queue_InsertStandard.part.0 (BlockIndex_4(D), DataAddress_7(D), NvMRequestAsyncPtr_6(D));
  Starting walk at: Result_9 = NvM_Queue_InsertStandard.part.0 (BlockIndex_4(D), DataAddress_7(D), NvMRequestAsyncPtr_6(D));
  instance pointer: DataAddress_7(D)  Outer instance pointer: DataAddress_7(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_9 = NvM_Queue_InsertStandard.part.0 (BlockIndex_4(D), DataAddress_7(D), NvMRequestAsyncPtr_6(D));
  Starting walk at: Result_9 = NvM_Queue_InsertStandard.part.0 (BlockIndex_4(D), DataAddress_7(D), NvMRequestAsyncPtr_6(D));
  instance pointer: NvMRequestAsyncPtr_6(D)  Outer instance pointer: NvMRequestAsyncPtr_6(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_6 = NvM_Queue_InsertStandard (BlockIndex_2(D), DataAddress_3(D), NvMRequestAsyncPtr_4(D));
  Starting walk at: Result_6 = NvM_Queue_InsertStandard (BlockIndex_2(D), DataAddress_3(D), NvMRequestAsyncPtr_4(D));
  instance pointer: DataAddress_3(D)  Outer instance pointer: DataAddress_3(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: Result_6 = NvM_Queue_InsertStandard (BlockIndex_2(D), DataAddress_3(D), NvMRequestAsyncPtr_4(D));
  Starting walk at: Result_6 = NvM_Queue_InsertStandard (BlockIndex_2(D), DataAddress_3(D), NvMRequestAsyncPtr_4(D));
  instance pointer: NvMRequestAsyncPtr_4(D)  Outer instance pointer: NvMRequestAsyncPtr_4(D) offset: 0 (bits) vtbl reference: 

IPA structures before propagation:

Jump functions:
  Jump functions of caller  NvM_Queue_InsertStandard.part.0/15:
  Jump functions of caller  NvM_Queue_CheckFullStandard.part.0/14:
  Jump functions of caller  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/13:
  Jump functions of caller  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12:
  Jump functions of caller  NvM_Queue_RemoveFirstItem/7:
  Jump functions of caller  NvM_Queue_InsertStandard/6:
    callsite  NvM_Queue_InsertStandard/6 -> NvM_Queue_InsertStandard.part.0/15 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
    callsite  NvM_Queue_InsertStandard/6 -> NvM_Queue_CheckFullStandard/4 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
  Jump functions of caller  NvM_Queue_InsertImmediate/5:
    callsite  NvM_Queue_InsertImmediate/5 -> NvM_Queue_InsertStandard/6 : 
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffff
         Unknown VR
       param 1: PASS THROUGH: 1, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
       param 2: PASS THROUGH: 2, op nop_expr, agg_preserved
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  NvM_Queue_CheckFullStandard/4:
    callsite  NvM_Queue_CheckFullStandard/4 -> NvM_Queue_CheckFullStandard.part.0/14 : 
  Jump functions of caller  Nvm_Queue_CheckEmpty/3:

 Propagating constants:

Not considering NvM_Queue_RemoveFirstItem for cloning; -fipa-cp-clone disabled.
Not considering NvM_Queue_InsertStandard for cloning; -fipa-cp-clone disabled.
Not considering NvM_Queue_InsertImmediate for cloning; -fipa-cp-clone disabled.
Not considering NvM_Queue_CheckFullStandard for cloning; -fipa-cp-clone disabled.
Not considering Nvm_Queue_CheckEmpty for cloning; -fipa-cp-clone disabled.

overall_size: 108, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: NvM_Queue_InsertStandard.part.0/15:
    param [0]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [1]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
    param [2]: VARIABLE
         ctxs: VARIABLE
         Bits unusable (BOTTOM)
         VARYING
        AGGS VARIABLE
  Node: NvM_Queue_CheckFullStandard.part.0/14:
  Node: NvM_Queue_RemoveFirstItem/7:
  Node: NvM_Queue_InsertStandard/6:
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
  Node: NvM_Queue_InsertImmediate/5:
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
  Node: NvM_Queue_CheckFullStandard/4:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Nvm_Queue_CheckEmpty/3:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

NvM_Queue_InsertStandard.part.0/15 (NvM_Queue_InsertStandard.part.0) @06e662a0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_AdminBlockTable/8 (write)NvM_Queue_IndexStandard/0 (read)NvM_Queue_IndexStandard/0 (write)NvM_Queue_CancelledStandardJobs/1 (read)NvM_BlockDescriptorTable/9 (read)NvM_Queue_Standard/2 (read)NvM_GlobalBlockNumber/10 (read)NvM_CurrentServiceId/11 (read)NvM_Queue_Standard/2 (write)NvM_Queue_Standard/2 (read)NvM_BlockDescriptorTable/9 (read)NvM_Queue_Standard/2 (write)NvM_Queue_Standard/2 (read)NvM_Queue_Standard/2 (write)NvM_Queue_Standard/2 (write)NvM_Queue_Standard/2 (write)
  Referring: 
  Availability: local
  Function flags: count:56340442 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_Queue_InsertStandard/6 (56340442 (estimated locally),0.50 per call) 
  Calls: 
NvM_Queue_CheckFullStandard.part.0/14 (NvM_Queue_CheckFullStandard.part.0) @06e668c0
  Type: function definition analyzed
  Visibility: prevailing_def_ironly artificial
  References: NvM_AdminBlockTable/8 (read)
  Referring: 
  Availability: local
  Function flags: count:1073741824 (estimated locally) first_run:1 body local split_part optimize_size
  Called by: NvM_Queue_CheckFullStandard/4 (71079562 (estimated locally),0.07 per call) 
  Calls: 
SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/13 (SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @06b27620
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Queue_RemoveFirstItem/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0) @06b27540
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: NvM_Queue_RemoveFirstItem/7 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
NvM_CurrentServiceId/11 (NvM_CurrentServiceId) @06e60048
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Queue_InsertStandard.part.0/15 (read)
  Availability: not_available
  Varpool flags:
NvM_GlobalBlockNumber/10 (NvM_GlobalBlockNumber) @06e60000
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Queue_InsertStandard.part.0/15 (read)
  Availability: not_available
  Varpool flags:
NvM_BlockDescriptorTable/9 (NvM_BlockDescriptorTable) @06b21f78
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Queue_InsertStandard.part.0/15 (read)NvM_Queue_InsertStandard.part.0/15 (read)
  Availability: not_available
  Varpool flags: read-only
NvM_AdminBlockTable/8 (NvM_AdminBlockTable) @06b217e0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: NvM_Queue_CheckFullStandard.part.0/14 (read)NvM_Queue_InsertStandard.part.0/15 (write)
  Availability: not_available
  Varpool flags:
NvM_Queue_RemoveFirstItem/7 (NvM_Queue_RemoveFirstItem) @06dd2460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_Queue_IndexStandard/0 (read)NvM_Queue_IndexStandard/0 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/13 (1073741824 (estimated locally),1.00 per call) SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0/12 (1073741824 (estimated locally),1.00 per call) 
NvM_Queue_InsertStandard/6 (NvM_Queue_InsertStandard) @06dd2ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:112680884 (estimated locally) body optimize_size
  Called by: NvM_Queue_InsertImmediate/5 (1073741824 (estimated locally),1.00 per call) 
  Calls: NvM_Queue_InsertStandard.part.0/15 (56340442 (estimated locally),0.50 per call) NvM_Queue_CheckFullStandard/4 (112680884 (estimated locally),1.00 per call) 
NvM_Queue_InsertImmediate/5 (NvM_Queue_InsertImmediate) @06dd2c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: NvM_Queue_InsertStandard/6 (1073741824 (estimated locally),1.00 per call) 
NvM_Queue_CheckFullStandard/4 (NvM_Queue_CheckFullStandard) @06dd2a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_Queue_IndexStandard/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: NvM_Queue_InsertStandard/6 (112680884 (estimated locally),1.00 per call) 
  Calls: NvM_Queue_CheckFullStandard.part.0/14 (71079562 (estimated locally),0.07 per call) 
Nvm_Queue_CheckEmpty/3 (Nvm_Queue_CheckEmpty) @06dd28c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: NvM_Queue_IndexStandard/0 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
NvM_Queue_Standard/2 (NvM_Queue_Standard) @06d54f30
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_Queue_InsertStandard.part.0/15 (read)NvM_Queue_InsertStandard.part.0/15 (write)NvM_Queue_InsertStandard.part.0/15 (read)NvM_Queue_InsertStandard.part.0/15 (write)NvM_Queue_InsertStandard.part.0/15 (read)NvM_Queue_InsertStandard.part.0/15 (write)NvM_Queue_InsertStandard.part.0/15 (write)NvM_Queue_InsertStandard.part.0/15 (write)
  Availability: available
  Varpool flags:
NvM_Queue_CancelledStandardJobs/1 (NvM_Queue_CancelledStandardJobs) @06d54ee8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_Queue_InsertStandard.part.0/15 (read)
  Availability: available
  Varpool flags:
NvM_Queue_IndexStandard/0 (NvM_Queue_IndexStandard) @06d54ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: NvM_Queue_CheckFullStandard/4 (read)Nvm_Queue_CheckEmpty/3 (read)NvM_Queue_InsertStandard.part.0/15 (read)NvM_Queue_InsertStandard.part.0/15 (write)NvM_Queue_RemoveFirstItem/7 (read)NvM_Queue_RemoveFirstItem/7 (write)
  Availability: available
  Varpool flags:

;; Function Nvm_Queue_CheckEmpty (Nvm_Queue_CheckEmpty, funcdef_no=0, decl_uid=7689, cgraph_uid=1, symbol_order=3)

Modification phase of node Nvm_Queue_CheckEmpty/3
Nvm_Queue_CheckEmpty ()
{
  uint8 Result;
  short unsigned int NvM_Queue_IndexStandard.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.0_1 = NvM_Queue_IndexStandard;
  if (NvM_Queue_IndexStandard.0_1 == 65535)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 0

  <bb 4> [local count: 1073741824]:
  # Result_2 = PHI <1(2), 0(3)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function NvM_Queue_CheckFullStandard (NvM_Queue_CheckFullStandard, funcdef_no=1, decl_uid=7687, cgraph_uid=2, symbol_order=4)

Modification phase of node NvM_Queue_CheckFullStandard/4
NvM_Queue_CheckFullStandard (NvM_BlockIdType BlockId)
{
  Std_ReturnType Result;
  short unsigned int NvM_Queue_IndexStandard.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.1_1 = NvM_Queue_IndexStandard;
  if (NvM_Queue_IndexStandard.1_1 == 65535)
    goto <bb 7>; [34.00%]
  else
    goto <bb 3>; [66.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  if (NvM_Queue_IndexStandard.1_1 <= 1)
    goto <bb 7>; [41.00%]
  else
    goto <bb 4>; [59.00%]

  <bb 4> [local count: 418115066]:
  # DEBUG BEGIN_STMT
  if (NvM_Queue_IndexStandard.1_1 == 2)
    goto <bb 5>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 5> [local count: 142159123]:
  # DEBUG BEGIN_STMT
  if (BlockId_5(D) == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 6> [local count: 71079562]:
  # DEBUG D#1 => BlockId_5(D)
  Result_2 = NvM_Queue_CheckFullStandard.part.0 ();

  <bb 7> [local count: 1073741824]:
  # Result_3 = PHI <0(2), 0(3), 1(4), 0(5), Result_2(6)>
  # DEBUG Result => Result_3
  # DEBUG BEGIN_STMT
  return Result_3;

}



;; Function NvM_Queue_InsertStandard (NvM_Queue_InsertStandard, funcdef_no=3, decl_uid=7683, cgraph_uid=4, symbol_order=6)

Modification phase of node NvM_Queue_InsertStandard/6
NvM_Queue_InsertStandard (uint16 BlockIndex, uint8 * DataAddress, void (*NvM_CurrentFunctionPtrType) (void) NvMRequestAsyncPtr)
{
  Std_ReturnType Result;

  <bb 2> [local count: 112680884]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG Found => 0
  # DEBUG BEGIN_STMT
  # DEBUG Priority => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Result_5 = NvM_Queue_CheckFullStandard (BlockIndex_4(D));
  # DEBUG Result => Result_5
  # DEBUG BEGIN_STMT
  if (Result_5 == 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 56340442]:
  Result_9 = NvM_Queue_InsertStandard.part.0 (BlockIndex_4(D), DataAddress_7(D), NvMRequestAsyncPtr_6(D));

  <bb 4> [local count: 112680885]:
  # Result_2 = PHI <Result_5(2), Result_9(3)>
  # DEBUG Result => Result_2
  # DEBUG BEGIN_STMT
  return Result_2;

}



;; Function NvM_Queue_InsertImmediate (NvM_Queue_InsertImmediate, funcdef_no=2, decl_uid=7693, cgraph_uid=3, symbol_order=5)

Modification phase of node NvM_Queue_InsertImmediate/5
NvM_Queue_InsertImmediate (uint16 BlockIndex, uint8 * DataAddress, void (*NvM_CurrentFunctionPtrType) (void) NvMRequestAsyncPtr)
{
  Std_ReturnType Result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG Result => 1
  # DEBUG BEGIN_STMT
  # DEBUG Index => 0
  # DEBUG BEGIN_STMT
  Result_6 = NvM_Queue_InsertStandard (BlockIndex_2(D), DataAddress_3(D), NvMRequestAsyncPtr_4(D));
  # DEBUG Result => Result_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return Result_6;

}



;; Function NvM_Queue_RemoveFirstItem (NvM_Queue_RemoveFirstItem, funcdef_no=4, decl_uid=7685, cgraph_uid=5, symbol_order=7)

Modification phase of node NvM_Queue_RemoveFirstItem/7
NvM_Queue_RemoveFirstItem ()
{
  short unsigned int NvM_Queue_IndexStandard.12_1;
  short unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  SchM_Enter_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  NvM_Queue_IndexStandard.12_1 = NvM_Queue_IndexStandard;
  _2 = NvM_Queue_IndexStandard.12_1 + 65535;
  NvM_Queue_IndexStandard = _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  SchM_Exit_NvM_SCHM_NVM_EXCLUSIVE_AREA_0 ();
  return;

}


