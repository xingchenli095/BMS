
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_UserResumeInterrupts/14:
  Jump functions of caller  OS_UserSuspendInterrupts/13:
  Jump functions of caller  Atomics_ClearFlag/12:
  Jump functions of caller  Atomics_TestAndSetFlag/11:
  Jump functions of caller  Atomics_FetchXor/10:
  Jump functions of caller  Atomics_FetchAnd/9:
  Jump functions of caller  Atomics_FetchOr/8:
  Jump functions of caller  Atomics_FetchSub/7:
  Jump functions of caller  Atomics_FetchAdd/6:
  Jump functions of caller  Atomics_CompareExchange/5:
  Jump functions of caller  Atomics_Exchange/4:
  Jump functions of caller  Atomics_Load/3:
  Jump functions of caller  Atomics_Store/2:
  Jump functions of caller  Atomics_Init/1:
  Jump functions of caller  Atomics_ThreadFence/0:

 Propagating constants:

Not considering Atomics_ClearFlag for cloning; -fipa-cp-clone disabled.
Not considering Atomics_TestAndSetFlag for cloning; -fipa-cp-clone disabled.
Not considering Atomics_FetchXor for cloning; -fipa-cp-clone disabled.
Not considering Atomics_FetchAnd for cloning; -fipa-cp-clone disabled.
Not considering Atomics_FetchOr for cloning; -fipa-cp-clone disabled.
Not considering Atomics_FetchSub for cloning; -fipa-cp-clone disabled.
Not considering Atomics_FetchAdd for cloning; -fipa-cp-clone disabled.
Not considering Atomics_CompareExchange for cloning; -fipa-cp-clone disabled.
Not considering Atomics_Exchange for cloning; -fipa-cp-clone disabled.
Not considering Atomics_Load for cloning; -fipa-cp-clone disabled.
Not considering Atomics_Store for cloning; -fipa-cp-clone disabled.
Not considering Atomics_Init for cloning; -fipa-cp-clone disabled.
Not considering Atomics_ThreadFence for cloning; -fipa-cp-clone disabled.

overall_size: 118, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Atomics_ClearFlag/12:
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
  Node: Atomics_TestAndSetFlag/11:
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
  Node: Atomics_FetchXor/10:
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
  Node: Atomics_FetchAnd/9:
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
  Node: Atomics_FetchOr/8:
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
  Node: Atomics_FetchSub/7:
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
  Node: Atomics_FetchAdd/6:
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
  Node: Atomics_CompareExchange/5:
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
  Node: Atomics_Exchange/4:
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
  Node: Atomics_Load/3:
    param [0]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: Atomics_Store/2:
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
  Node: Atomics_Init/1:
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
  Node: Atomics_ThreadFence/0:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_UserResumeInterrupts/14 (OS_UserResumeInterrupts) @06d74c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Atomics_ClearFlag/12 (1073741824 (estimated locally),1.00 per call) Atomics_TestAndSetFlag/11 (1073741824 (estimated locally),1.00 per call) Atomics_FetchXor/10 (1073741824 (estimated locally),1.00 per call) Atomics_FetchAnd/9 (1073741824 (estimated locally),1.00 per call) Atomics_FetchOr/8 (1073741824 (estimated locally),1.00 per call) Atomics_FetchSub/7 (1073741824 (estimated locally),1.00 per call) Atomics_FetchAdd/6 (1073741824 (estimated locally),1.00 per call) Atomics_CompareExchange/5 (1073741824 (estimated locally),1.00 per call) Atomics_Exchange/4 (1073741824 (estimated locally),1.00 per call) Atomics_Load/3 (1073741824 (estimated locally),1.00 per call) Atomics_Store/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_UserSuspendInterrupts/13 (OS_UserSuspendInterrupts) @06d74b60
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Atomics_ClearFlag/12 (1073741824 (estimated locally),1.00 per call) Atomics_TestAndSetFlag/11 (1073741824 (estimated locally),1.00 per call) Atomics_FetchXor/10 (1073741824 (estimated locally),1.00 per call) Atomics_FetchAnd/9 (1073741824 (estimated locally),1.00 per call) Atomics_FetchOr/8 (1073741824 (estimated locally),1.00 per call) Atomics_FetchSub/7 (1073741824 (estimated locally),1.00 per call) Atomics_FetchAdd/6 (1073741824 (estimated locally),1.00 per call) Atomics_CompareExchange/5 (1073741824 (estimated locally),1.00 per call) Atomics_Exchange/4 (1073741824 (estimated locally),1.00 per call) Atomics_Load/3 (1073741824 (estimated locally),1.00 per call) Atomics_Store/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
Atomics_ClearFlag/12 (Atomics_ClearFlag) @06d747e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_TestAndSetFlag/11 (Atomics_TestAndSetFlag) @06d74380
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_FetchXor/10 (Atomics_FetchXor) @06d71ee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_FetchAnd/9 (Atomics_FetchAnd) @06d71a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_FetchOr/8 (Atomics_FetchOr) @06d71620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_FetchSub/7 (Atomics_FetchSub) @06d711c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_FetchAdd/6 (Atomics_FetchAdd) @06d3cd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_CompareExchange/5 (Atomics_CompareExchange) @06d3c8c0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_Exchange/4 (Atomics_Exchange) @06d3c460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_Load/3 (Atomics_Load) @06d3c000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_Store/2 (Atomics_Store) @06d34c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_UserResumeInterrupts/14 (1073741824 (estimated locally),1.00 per call) OS_UserSuspendInterrupts/13 (1073741824 (estimated locally),1.00 per call) 
Atomics_Init/1 (Atomics_Init) @06d347e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Atomics_ThreadFence/0 (Atomics_ThreadFence) @06d34540
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Atomics_ThreadFence (Atomics_ThreadFence, funcdef_no=0, decl_uid=7775, cgraph_uid=1, symbol_order=0)

Modification phase of node Atomics_ThreadFence/0
Atomics_ThreadFence ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Atomics_Init (Atomics_Init, funcdef_no=1, decl_uid=7778, cgraph_uid=2, symbol_order=1)

Modification phase of node Atomics_Init/1
Atomics_Init (volatile Atomic_t * object, Atomic_value_t initValue)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *object_2(D) ={v} initValue_3(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Atomics_Store (Atomics_Store, funcdef_no=2, decl_uid=7781, cgraph_uid=3, symbol_order=2)

Modification phase of node Atomics_Store/2
Atomics_Store (volatile Atomic_t * object, Atomic_value_t newValue)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *object_3(D) ={v} newValue_4(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG success => D#1
  return;

}



;; Function Atomics_Load (Atomics_Load, funcdef_no=3, decl_uid=7783, cgraph_uid=4, symbol_order=3)

Modification phase of node Atomics_Load/3
Atomics_Load (const Atomic_t * object)
{
  Atomic_value_t ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_4 ={v} *object_3(D);
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#2 => {CLOBBER}
  # DEBUG success => D#2
  return ret_4;

}



;; Function Atomics_Exchange (Atomics_Exchange, funcdef_no=4, decl_uid=7786, cgraph_uid=5, symbol_order=4)

Modification phase of node Atomics_Exchange/4
Atomics_Exchange (volatile Atomic_t * object, Atomic_value_t newValue)
{
  Atomic_value_t ret;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_4 ={v} *object_3(D);
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *object_3(D) ={v} newValue_5(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_4
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#3 => {CLOBBER}
  # DEBUG success => D#3
  return ret_4;

}



;; Function Atomics_CompareExchange (Atomics_CompareExchange, funcdef_no=5, decl_uid=7790, cgraph_uid=6, symbol_order=5)

Modification phase of node Atomics_CompareExchange/5
Atomics_CompareExchange (volatile Atomic_t * object, Atomic_t * expected, Atomic_value_t newValue)
{
  const Atomic_value_t tmp;
  boolean ret;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  tmp_7 ={v} *object_6(D);
  # DEBUG tmp => tmp_7
  # DEBUG BEGIN_STMT
  _1 = *expected_8(D);
  if (_1 == tmp_7)
    goto <bb 3>; [34.00%]
  else
    goto <bb 4>; [66.00%]

  <bb 3> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  *object_6(D) ={v} newValue_10(D);
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 1
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  *expected_8(D) = tmp_7;

  <bb 5> [local count: 1073741824]:
  # ret_2 = PHI <1(3), 0(4)>
  # DEBUG ret => ret_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_2
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#4 => {CLOBBER}
  # DEBUG success => D#4
  return ret_2;

}



;; Function Atomics_FetchAdd (Atomics_FetchAdd, funcdef_no=6, decl_uid=7793, cgraph_uid=7, symbol_order=6)

Modification phase of node Atomics_FetchAdd/6
Atomics_FetchAdd (volatile Atomic_t * object, Atomic_value_t operand)
{
  Atomic_value_t ret;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 ={v} *object_4(D);
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ret_5 + operand_6(D);
  *object_4(D) ={v} _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#5 => {CLOBBER}
  # DEBUG success => D#5
  return ret_5;

}



;; Function Atomics_FetchSub (Atomics_FetchSub, funcdef_no=7, decl_uid=7796, cgraph_uid=8, symbol_order=7)

Modification phase of node Atomics_FetchSub/7
Atomics_FetchSub (volatile Atomic_t * object, Atomic_value_t operand)
{
  Atomic_value_t ret;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 ={v} *object_4(D);
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ret_5 - operand_6(D);
  *object_4(D) ={v} _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#6 => {CLOBBER}
  # DEBUG success => D#6
  return ret_5;

}



;; Function Atomics_FetchOr (Atomics_FetchOr, funcdef_no=8, decl_uid=7799, cgraph_uid=9, symbol_order=8)

Modification phase of node Atomics_FetchOr/8
Atomics_FetchOr (volatile Atomic_t * object, Atomic_value_t operand)
{
  Atomic_value_t ret;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 ={v} *object_4(D);
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ret_5 | operand_6(D);
  *object_4(D) ={v} _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#7 => {CLOBBER}
  # DEBUG success => D#7
  return ret_5;

}



;; Function Atomics_FetchAnd (Atomics_FetchAnd, funcdef_no=9, decl_uid=7802, cgraph_uid=10, symbol_order=9)

Modification phase of node Atomics_FetchAnd/9
Atomics_FetchAnd (volatile Atomic_t * object, Atomic_value_t operand)
{
  Atomic_value_t ret;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 ={v} *object_4(D);
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ret_5 & operand_6(D);
  *object_4(D) ={v} _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#8 => {CLOBBER}
  # DEBUG success => D#8
  return ret_5;

}



;; Function Atomics_FetchXor (Atomics_FetchXor, funcdef_no=10, decl_uid=7805, cgraph_uid=11, symbol_order=10)

Modification phase of node Atomics_FetchXor/10
Atomics_FetchXor (volatile Atomic_t * object, Atomic_value_t operand)
{
  Atomic_value_t ret;
  long unsigned int _1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_5 ={v} *object_4(D);
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ret_5 ^ operand_6(D);
  *object_4(D) ={v} _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_5
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#9 => {CLOBBER}
  # DEBUG success => D#9
  return ret_5;

}



;; Function Atomics_TestAndSetFlag (Atomics_TestAndSetFlag, funcdef_no=11, decl_uid=7808, cgraph_uid=12, symbol_order=11)

Modification phase of node Atomics_TestAndSetFlag/11
Atomics_TestAndSetFlag (volatile Atomic_t * object, Atomic_value_t flagSelectionMask)
{
  Atomic_value_t ret;
  long unsigned int _1;
  long unsigned int _2;
  _Bool _3;
  boolean _11;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG ret => 0
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  ret_7 ={v} *object_6(D);
  # DEBUG ret => ret_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ret_7 | flagSelectionMask_8(D);
  *object_6(D) ={v} _1;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG ret => ret_7
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _2 = ret_7 & flagSelectionMask_8(D);
  _3 = _2 != 0;
  _11 = (boolean) _3;
  # DEBUG D#10 => {CLOBBER}
  # DEBUG success => D#10
  return _11;

}



;; Function Atomics_ClearFlag (Atomics_ClearFlag, funcdef_no=12, decl_uid=7811, cgraph_uid=13, symbol_order=12)

Modification phase of node Atomics_ClearFlag/12
Atomics_ClearFlag (volatile Atomic_t * object, Atomic_value_t flagSelectionMask)
{
  const Atomic_value_t flags;
  long unsigned int _1;
  long unsigned int _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserSuspendInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  flags_6 ={v} *object_5(D);
  # DEBUG flags => flags_6
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _1 = ~flagSelectionMask_7(D);
  _2 = _1 & flags_6;
  *object_5(D) ={v} _2;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  OS_UserResumeInterrupts (1);
  # DEBUG BEGIN_STMT
  # DEBUG success => 1
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG D#11 => {CLOBBER}
  # DEBUG success => D#11
  return;

}


