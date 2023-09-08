
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Csm_Int_CallbackNotification/2:
    indirect simple callsite, calling param -1, offset 0, for stmt _6 (0);
       param 0: CONST: 0
         value: 0x0, mask: 0x0
         Unknown VR
    indirect simple callsite, calling param -1, offset 0, for stmt _2 (result_12(D));
       param 0: PASS THROUGH: 1, op nop_expr
         value: 0x0, mask: 0xff
         Unknown VR
  Jump functions of caller  Csm_QueueDelJob/1:
  Jump functions of caller  Csm_QueuePushJob/0:

 Propagating constants:

Not considering Csm_Int_CallbackNotification for cloning; -fipa-cp-clone disabled.
Not considering Csm_QueueDelJob for cloning; -fipa-cp-clone disabled.
Not considering Csm_QueuePushJob for cloning; -fipa-cp-clone disabled.

overall_size: 110, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: Csm_Int_CallbackNotification/2:
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
  Node: Csm_QueueDelJob/1:
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
  Node: Csm_QueuePushJob/0:
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

Csm_JobExtraData/4 (Csm_JobExtraData) @06bb2900
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Csm_Int_CallbackNotification/2 (write)Csm_Int_CallbackNotification/2 (read)Csm_Int_CallbackNotification/2 (write)
  Availability: not_available
  Varpool flags:
Csm_JobExtraCnfg/3 (Csm_JobExtraCnfg) @06bb2828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Csm_Int_CallbackNotification/2 (read)Csm_Int_CallbackNotification/2 (read)
  Availability: not_available
  Varpool flags: read-only
Csm_Int_CallbackNotification/2 (Csm_Int_CallbackNotification) @06b0f000
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Csm_JobExtraCnfg/3 (read)Csm_JobExtraData/4 (write)Csm_JobExtraCnfg/3 (read)Csm_JobExtraData/4 (read)Csm_JobExtraData/4 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(187904819 (estimated locally),0.17 per call) 
   Indirect call(375809639 (estimated locally),0.35 per call) 
Csm_QueueDelJob/1 (Csm_QueueDelJob) @06b04c40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:231907082 (estimated locally) body optimize_size
  Called by: 
  Calls: 
Csm_QueuePushJob/0 (Csm_QueuePushJob) @06b04460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:515198619 (estimated locally) body optimize_size
  Called by: 
  Calls: 

;; Function Csm_QueuePushJob (Csm_QueuePushJob, funcdef_no=0, decl_uid=5539, cgraph_uid=1, symbol_order=0)

Modification phase of node Csm_QueuePushJob/0
Csm_QueuePushJob (struct Csm_QueueType * csmQueuePtr, struct Crypto_JobType * csmJobPtr)
{
  struct Csm_QueueElementType * newElement;
  struct Csm_QueueElementType * previous;
  struct Csm_QueueElementType * current;
  uint32 queueElementIndex;
  Std_ReturnType retVal;
  long unsigned int _1;
  long unsigned int _2;
  struct Csm_QueueElementType * _3;
  long unsigned int _4;
  struct Csm_QueueElementType * _5;
  long unsigned int _6;
  struct Csm_QueueElementType * _7;
  struct Crypto_JobType * _8;
  struct Csm_QueueElementType * _11;
  struct Crypto_JobType * _12;
  const struct Crypto_JobInfoType * _13;
  long unsigned int _14;
  const struct Crypto_JobInfoType * _15;
  long unsigned int _16;
  long unsigned int _17;

  <bb 2> [local count: 515198619]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG queueElementIndex => 0
  # DEBUG BEGIN_STMT
  # DEBUG current => 0B
  # DEBUG BEGIN_STMT
  # DEBUG previous => 0B
  # DEBUG BEGIN_STMT
  # DEBUG newElement => 0B
  # DEBUG BEGIN_STMT
  if (csmQueuePtr_25(D) == 0B)
    goto <bb 19>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 360639033]:
  # DEBUG BEGIN_STMT
  if (csmJobPtr_26(D) == 0B)
    goto <bb 19>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 4> [local count: 252447323]:
  # DEBUG BEGIN_STMT
  _1 = csmQueuePtr_25(D)->currentSize;
  _2 = csmQueuePtr_25(D)->maxSize;
  if (_1 >= _2)
    goto <bb 19>; [35.00%]
  else
    goto <bb 5>; [65.00%]

  <bb 5> [local count: 164090760]:
  # DEBUG BEGIN_STMT
  current_28 = csmQueuePtr_25(D)->head;
  # DEBUG current => current_28
  # DEBUG BEGIN_STMT
  if (current_28 == 0B)
    goto <bb 6>; [30.00%]
  else
    goto <bb 20>; [70.00%]

  <bb 20> [local count: 114863532]:
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 49227228]:
  # DEBUG BEGIN_STMT
  _3 = csmQueuePtr_25(D)->data;
  _3->job = csmJobPtr_26(D);
  # DEBUG BEGIN_STMT
  _3->next = 0B;
  # DEBUG BEGIN_STMT
  csmQueuePtr_25(D)->head = _3;
  # DEBUG BEGIN_STMT
  _4 = _1 + 1;
  csmQueuePtr_25(D)->currentSize = _4;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  goto <bb 19>; [100.00%]

  <bb 7> [local count: 1014686024]:
  # DEBUG BEGIN_STMT
  _5 = csmQueuePtr_25(D)->data;
  _6 = queueElementIndex_19 * 8;
  _7 = _5 + _6;
  _8 = _7->job;
  if (_8 == 0B)
    goto <bb 8>; [5.50%]
  else
    goto <bb 9>; [94.50%]

  <bb 8> [local count: 55807731]:
  # _11 = PHI <_7(7)>
  # DEBUG BEGIN_STMT
  _11->job = csmJobPtr_26(D);
  # DEBUG BEGIN_STMT
  # DEBUG newElement => _11
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 9> [local count: 958878293]:
  # DEBUG BEGIN_STMT
  queueElementIndex_29 = queueElementIndex_19 + 1;
  # DEBUG queueElementIndex => queueElementIndex_29

  <bb 10> [local count: 1073741824]:
  # queueElementIndex_19 = PHI <queueElementIndex_29(9), 0(20)>
  # DEBUG queueElementIndex => queueElementIndex_19
  # DEBUG BEGIN_STMT
  if (_2 > queueElementIndex_19)
    goto <bb 7>; [94.50%]
  else
    goto <bb 12>; [5.50%]

  <bb 11> [local count: 958878289]:
  # DEBUG BEGIN_STMT
  # DEBUG previous => current_20
  # DEBUG BEGIN_STMT
  current_31 = current_20->next;
  # DEBUG current => current_31
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 114863532]:
  # newElement_40 = PHI <0B(10), _11(8)>

  <bb 13> [local count: 1073741821]:
  # current_20 = PHI <current_28(12), current_31(11)>
  # previous_21 = PHI <0B(12), current_20(11)>
  # DEBUG newElement => newElement_40
  # DEBUG previous => previous_21
  # DEBUG current => current_20
  # DEBUG BEGIN_STMT
  if (current_20 != 0B)
    goto <bb 14>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 14> [local count: 1014686021]:
  _12 = current_20->job;
  _13 = _12->jobInfo;
  _14 = _13->jobPriority;
  _15 = csmJobPtr_26(D)->jobInfo;
  _16 = _15->jobPriority;
  if (_14 >= _16)
    goto <bb 11>; [94.50%]
  else
    goto <bb 15>; [5.50%]

  <bb 15> [local count: 114863531]:
  # current_9 = PHI <current_20(13), current_20(14)>
  # previous_10 = PHI <previous_21(13), previous_21(14)>
  # DEBUG BEGIN_STMT
  if (previous_10 == 0B)
    goto <bb 16>; [30.00%]
  else
    goto <bb 17>; [70.00%]

  <bb 16> [local count: 34459059]:
  # DEBUG BEGIN_STMT
  csmQueuePtr_25(D)->head = newElement_40;
  goto <bb 18>; [100.00%]

  <bb 17> [local count: 80404472]:
  # DEBUG BEGIN_STMT
  previous_10->next = newElement_40;

  <bb 18> [local count: 114863531]:
  # DEBUG BEGIN_STMT
  newElement_40->next = current_9;
  # DEBUG BEGIN_STMT
  _17 = _1 + 1;
  csmQueuePtr_25(D)->currentSize = _17;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0

  <bb 19> [local count: 515198618]:
  # retVal_18 = PHI <1(2), 1(3), 5(4), 0(6), 0(18)>
  # DEBUG retVal => retVal_18
  # DEBUG BEGIN_STMT
  return retVal_18;

}



;; Function Csm_QueueDelJob (Csm_QueueDelJob, funcdef_no=1, decl_uid=5542, cgraph_uid=2, symbol_order=1)

Modification phase of node Csm_QueueDelJob/1
Csm_QueueDelJob (struct Csm_QueueType * csmQueuePtr, struct Crypto_JobType * csmJobPtr)
{
  struct Csm_QueueElementType * previous;
  struct Csm_QueueElementType * current;
  Std_ReturnType retVal;
  struct Csm_QueueElement * _2;
  struct Csm_QueueElement * _3;
  long unsigned int _4;
  long unsigned int _5;
  struct Crypto_JobType * _6;
  const struct Crypto_JobInfoType * _7;
  long unsigned int _8;
  const struct Crypto_JobInfoType * _9;
  long unsigned int _10;

  <bb 2> [local count: 231907082]:
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 1
  # DEBUG BEGIN_STMT
  # DEBUG current => 0B
  # DEBUG BEGIN_STMT
  # DEBUG previous => 0B
  # DEBUG BEGIN_STMT
  if (csmQueuePtr_16(D) == 0B)
    goto <bb 13>; [30.00%]
  else
    goto <bb 3>; [70.00%]

  <bb 3> [local count: 162334957]:
  # DEBUG BEGIN_STMT
  if (csmJobPtr_17(D) == 0B)
    goto <bb 13>; [30.00%]
  else
    goto <bb 4>; [70.00%]

  <bb 4> [local count: 113634470]:
  # DEBUG BEGIN_STMT
  current_19 = csmQueuePtr_16(D)->head;
  # DEBUG current => current_19
  # DEBUG BEGIN_STMT
  goto <bb 11>; [100.00%]

  <bb 5> [local count: 996582264]:
  # DEBUG BEGIN_STMT
  if (_6 == csmJobPtr_17(D))
    goto <bb 6>; [3.66%]
  else
    goto <bb 10>; [96.34%]

  <bb 6> [local count: 36474911]:
  # current_1 = PHI <current_12(5)>
  # previous_20 = PHI <previous_13(5)>
  # DEBUG BEGIN_STMT
  if (current_1 == current_19)
    goto <bb 7>; [30.00%]
  else
    goto <bb 8>; [70.00%]

  <bb 7> [local count: 10942473]:
  # DEBUG BEGIN_STMT
  _2 = current_1->next;
  csmQueuePtr_16(D)->head = _2;
  goto <bb 9>; [100.00%]

  <bb 8> [local count: 25532438]:
  # DEBUG BEGIN_STMT
  _3 = current_1->next;
  previous_20->next = _3;

  <bb 9> [local count: 36474911]:
  # DEBUG BEGIN_STMT
  current_1->job = 0B;
  # DEBUG BEGIN_STMT
  current_1->next = 0B;
  # DEBUG BEGIN_STMT
  _4 = csmQueuePtr_16(D)->currentSize;
  _5 = _4 + 4294967295;
  csmQueuePtr_16(D)->currentSize = _5;
  # DEBUG BEGIN_STMT
  # DEBUG retVal => 0
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 960107354]:
  # DEBUG BEGIN_STMT
  # DEBUG previous => current_12
  # DEBUG BEGIN_STMT
  current_21 = current_12->next;
  # DEBUG current => current_21

  <bb 11> [local count: 1073741824]:
  # current_12 = PHI <current_19(4), current_21(10)>
  # previous_13 = PHI <0B(4), current_12(10)>
  # DEBUG previous => previous_13
  # DEBUG current => current_12
  # DEBUG BEGIN_STMT
  if (current_12 != 0B)
    goto <bb 12>; [96.34%]
  else
    goto <bb 13>; [3.66%]

  <bb 12> [local count: 1034442873]:
  _6 = current_12->job;
  _7 = _6->jobInfo;
  _8 = _7->jobPriority;
  _9 = csmJobPtr_17(D)->jobInfo;
  _10 = _9->jobPriority;
  if (_8 >= _10)
    goto <bb 5>; [96.34%]
  else
    goto <bb 13>; [3.66%]

  <bb 13> [local count: 231907082]:
  # retVal_11 = PHI <1(2), 1(3), 0(9), 1(11), 1(12)>
  # DEBUG retVal => retVal_11
  # DEBUG BEGIN_STMT
  return retVal_11;

}



;; Function Csm_Int_CallbackNotification (Csm_Int_CallbackNotification, funcdef_no=2, decl_uid=5545, cgraph_uid=3, symbol_order=2)

Modification phase of node Csm_Int_CallbackNotification/2
Csm_Int_CallbackNotification (const struct Crypto_JobType * job, Std_ReturnType result)
{
  long unsigned int _1;
  void (*<T4b8>) (Crypto_ResultType) _2;
  long unsigned int _3;
  unsigned char _4;
  long unsigned int _5;
  void (*<T4b8>) (Crypto_ResultType) _6;
  long unsigned int _7;
  unsigned char _8;
  unsigned char _19;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  if (result_12(D) != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 6>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _1 = job_14(D)->jobId;
  _2 = Csm_JobExtraCnfg[_1].csmSWCCallback;
  if (_2 != 0B)
    goto <bb 4>; [70.00%]
  else
    goto <bb 5>; [30.00%]

  <bb 4> [local count: 375809639]:
  # DEBUG BEGIN_STMT
  _2 (result_12(D));

  <bb 5> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _3 = job_14(D)->jobId;
  Csm_JobExtraData[_3].csmQueueLevel = 0;
  goto <bb 11>; [100.00%]

  <bb 6> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  _4 = job_14(D)->jobPrimitiveInputOutput.mode;
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _19 = _4 & 4;
  if (_19 != 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 11>; [50.00%]

  <bb 7> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  _5 = job_14(D)->jobId;
  _6 = Csm_JobExtraCnfg[_5].csmSWCCallback;
  if (_6 != 0B)
    goto <bb 8>; [70.00%]
  else
    goto <bb 9>; [30.00%]

  <bb 8> [local count: 187904819]:
  # DEBUG BEGIN_STMT
  _6 (0);

  <bb 9> [local count: 268435456]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  _7 = job_14(D)->jobId;
  _8 = Csm_JobExtraData[_7].csmQueueLevel;
  if (_8 == 2)
    goto <bb 10>; [34.00%]
  else
    goto <bb 11>; [66.00%]

  <bb 10> [local count: 91268055]:
  # DEBUG BEGIN_STMT
  Csm_JobExtraData[_7].csmQueueLevel = 0;

  <bb 11> [local count: 1073741824]:
  return;

}


