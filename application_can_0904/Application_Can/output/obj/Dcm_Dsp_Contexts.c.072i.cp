
IPA constant propagation start:
Determining dynamic type for call: result_8 = Dcm_Dsp_Context_Execute (BaseContext_4(D));
  Starting walk at: result_8 = Dcm_Dsp_Context_Execute (BaseContext_4(D));
  instance pointer: BaseContext_4(D)  Outer instance pointer: BaseContext_4(D) offset: 0 (bits) vtbl reference: 
Determining dynamic type for call: _6 (BaseContext_11(D));
  Starting walk at: _6 (BaseContext_11(D));
  instance pointer: BaseContext_11(D)  Outer instance pointer: BaseContext_11(D) offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:_6 (BaseContext_11(D));

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dcm_Dsp_Context_Cancel/2:
    callsite  Dcm_Dsp_Context_Cancel/2 -> Dcm_Dsp_Context_Execute/1 : 
       param 0: PASS THROUGH: 0, op nop_expr
         Aggregate passed by reference:
           offset: 80, cst: 2
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_Context_Execute/1:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (BaseContext_11(D));
       param 0: PASS THROUGH: 0, op nop_expr
         value: 0x0, mask: 0xffffffff
         Unknown VR
  Jump functions of caller  Dcm_Dsp_Context_Init/0:

 Propagating constants:

Not considering Dcm_Dsp_Context_Cancel for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_Context_Execute for cloning; -fipa-cp-clone disabled.
Not considering Dcm_Dsp_Context_Init for cloning; -fipa-cp-clone disabled.

overall_size: 37, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Dcm_Dsp_Context_Cancel/2:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_Context_Execute/1:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Dcm_Dsp_Context_Init/0:
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

Dcm_Dsp_Context_Cancel/2 (Dcm_Dsp_Context_Cancel) @06bb7d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dcm_Dsp_Context_Execute/1 (217325345 (estimated locally),0.20 per call) 
Dcm_Dsp_Context_Execute/1 (Dcm_Dsp_Context_Execute) @06bb7b60
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:118111600 (estimated locally) body optimize_size
  Called by: Dcm_Dsp_Context_Cancel/2 (217325345 (estimated locally),0.20 per call) 
  Calls: 
   Indirect call(1073741824 (estimated locally),9.09 per call) 
Dcm_Dsp_Context_Init/0 (Dcm_Dsp_Context_Init) @06bb79a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Dcm_Dsp_Context_Init (Dcm_Dsp_Context_Init, funcdef_no=0, decl_uid=5715, cgraph_uid=1, symbol_order=0)

Modification phase of node Dcm_Dsp_Context_Init/0
Dcm_Dsp_Context_Init (struct Dcm_Dsp_ContextBaseType * BaseContext, void * SpecialPtr, void (*Dcm_Dsp_ContextFunctionType) (struct Dcm_Dsp_ContextBase *) * FunctionConfig)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  BaseContext_2(D)->current_state = 0;
  # DEBUG BEGIN_STMT
  BaseContext_2(D)->next_state = 0;
  # DEBUG BEGIN_STMT
  BaseContext_2(D)->FunctionConfig = FunctionConfig_5(D);
  # DEBUG BEGIN_STMT
  BaseContext_2(D)->SpecialPtr = SpecialPtr_7(D);
  # DEBUG BEGIN_STMT
  BaseContext_2(D)->opstatus = 0;
  # DEBUG BEGIN_STMT
  BaseContext_2(D)->result = 30;
  # DEBUG BEGIN_STMT
  return;

}



;; Function Dcm_Dsp_Context_Execute (Dcm_Dsp_Context_Execute, funcdef_no=1, decl_uid=5717, cgraph_uid=2, symbol_order=1)

Modification phase of node Dcm_Dsp_Context_Execute/1
Dcm_Dsp_Context_Execute (struct Dcm_Dsp_ContextBaseType * BaseContext)
{
  unsigned char _1;
  void (*Dcm_Dsp_ContextFunctionType) (struct Dcm_Dsp_ContextBase *) * _2;
  unsigned int _3;
  unsigned int _4;
  void (*Dcm_Dsp_ContextFunctionType) (struct Dcm_Dsp_ContextBase *) * _5;
  void (*<T55d>) (struct Dcm_Dsp_ContextBase *) _6;
  unsigned char _7;
  unsigned char _8;
  Std_ReturnType _14;

  <bb 2> [local count: 118111600]:

  <bb 3> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = BaseContext_11(D)->next_state;
  BaseContext_11(D)->current_state = _1;
  # DEBUG BEGIN_STMT
  _2 = BaseContext_11(D)->FunctionConfig;
  _3 = (unsigned int) _1;
  _4 = _3 * 4;
  _5 = _2 + _4;
  _6 = *_5;
  _6 (BaseContext_11(D));
  # DEBUG BEGIN_STMT
  _7 = BaseContext_11(D)->current_state;
  _8 = BaseContext_11(D)->next_state;
  if (_7 != _8)
    goto <bb 5>; [89.00%]
  else
    goto <bb 4>; [11.00%]

  <bb 5> [local count: 955630223]:
  goto <bb 3>; [100.00%]

  <bb 4> [local count: 118111601]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _14 = BaseContext_11(D)->result;
  return _14;

}



;; Function Dcm_Dsp_Context_Cancel (Dcm_Dsp_Context_Cancel, funcdef_no=2, decl_uid=5719, cgraph_uid=3, symbol_order=2)

Modification phase of node Dcm_Dsp_Context_Cancel/2
Dcm_Dsp_Context_Cancel (struct Dcm_Dsp_ContextBaseType * BaseContext)
{
  Std_ReturnType result;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  result_5 = BaseContext_4(D)->result;
  # DEBUG result => result_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (result_5 == 10)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
  # DEBUG BEGIN_STMT
  BaseContext_4(D)->opstatus = 2;
  # DEBUG BEGIN_STMT
  result_8 = Dcm_Dsp_Context_Execute (BaseContext_4(D));
  # DEBUG result => result_8

  <bb 4> [local count: 1073741824]:
  # result_1 = PHI <result_5(2), result_8(3)>
  # DEBUG result => result_1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return result_1;

}


