
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Com_ComXf_Get_RxSignalGroupSize/6:
  Jump functions of caller  Det_ASR40_ReportError/5:
  Jump functions of caller  ComXf_EB_Inv_CheckInput/3:
  Jump functions of caller  ComXf_EB_CheckInput/2:
  Jump functions of caller  ComXf_DeInit/1:
  Jump functions of caller  ComXf_Init/0:

 Propagating constants:

Not considering ComXf_EB_Inv_CheckInput for cloning; -fipa-cp-clone disabled.
Not considering ComXf_EB_CheckInput for cloning; -fipa-cp-clone disabled.
Not considering ComXf_DeInit for cloning; -fipa-cp-clone disabled.
Not considering ComXf_Init for cloning; -fipa-cp-clone disabled.

overall_size: 86, max_new_size: 11001
 - context independent values, size: 11, time_benefit: 1.000000

IPA lattices after all propagation:

Lattices:
  Node: ComXf_EB_Inv_CheckInput/3:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
    param [4]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComXf_EB_CheckInput/2:
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
    param [3]: BOTTOM
         ctxs: BOTTOM
         Bits unusable (BOTTOM)
         VARYING
        AGGS BOTTOM
  Node: ComXf_DeInit/1:
  Node: ComXf_Init/0:
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

Com_ComXf_Get_RxSignalGroupSize/6 (Com_ComXf_Get_RxSignalGroupSize) @06bbbd20
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComXf_EB_Inv_CheckInput/3 (365072220 (estimated locally),0.34 per call) 
  Calls: 
Det_ASR40_ReportError/5 (Det_ASR40_ReportError) @06bbb9a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: ComXf_EB_Inv_CheckInput/3 (35202480 (estimated locally),0.03 per call) ComXf_EB_Inv_CheckInput/3 (99475244 (estimated locally),0.09 per call) ComXf_EB_Inv_CheckInput/3 (63632088 (estimated locally),0.06 per call) ComXf_EB_Inv_CheckInput/3 (708669605 (estimated locally),0.66 per call) ComXf_EB_CheckInput/2 (65227791 (estimated locally),0.06 per call) ComXf_EB_CheckInput/2 (78996961 (estimated locally),0.07 per call) ComXf_EB_CheckInput/2 (95672716 (estimated locally),0.09 per call) ComXf_EB_CheckInput/2 (524845004 (estimated locally),0.49 per call) ComXf_Init/0 (524845004 (estimated locally),0.49 per call) 
  Calls: 
Com_InitStatus/4 (Com_InitStatus) @06b7d558
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: ComXf_Init/0 (read)ComXf_EB_CheckInput/2 (read)ComXf_EB_Inv_CheckInput/3 (read)
  Availability: not_available
  Varpool flags:
ComXf_EB_Inv_CheckInput/3 (ComXf_EB_Inv_CheckInput) @06bbb7e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Com_InitStatus/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/5 (35202480 (estimated locally),0.03 per call) Det_ASR40_ReportError/5 (99475244 (estimated locally),0.09 per call) Det_ASR40_ReportError/5 (63632088 (estimated locally),0.06 per call) Com_ComXf_Get_RxSignalGroupSize/6 (365072220 (estimated locally),0.34 per call) Det_ASR40_ReportError/5 (708669605 (estimated locally),0.66 per call) 
ComXf_EB_CheckInput/2 (ComXf_EB_CheckInput) @06bbb620
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Com_InitStatus/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/5 (65227791 (estimated locally),0.06 per call) Det_ASR40_ReportError/5 (78996961 (estimated locally),0.07 per call) Det_ASR40_ReportError/5 (95672716 (estimated locally),0.09 per call) Det_ASR40_ReportError/5 (524845004 (estimated locally),0.49 per call) 
ComXf_DeInit/1 (ComXf_DeInit) @06bbb460
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
ComXf_Init/0 (ComXf_Init) @06bbb2a0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Com_InitStatus/4 (read)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Det_ASR40_ReportError/5 (524845004 (estimated locally),0.49 per call) 

;; Function ComXf_Init (ComXf_Init, funcdef_no=0, decl_uid=6207, cgraph_uid=1, symbol_order=0)

Modification phase of node ComXf_Init/0
ComXf_Init (const ComXf_ConfigType * config)
{
  unsigned char Com_InitStatus.0_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Com_InitStatus.0_1 = Com_InitStatus;
  if (Com_InitStatus.0_1 != 1)
    goto <bb 3>; [48.88%]
  else
    goto <bb 4>; [51.12%]

  <bb 3> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 1, 1);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComXf_DeInit (ComXf_DeInit, funcdef_no=1, decl_uid=6209, cgraph_uid=2, symbol_order=1)

Modification phase of node ComXf_DeInit/1
ComXf_DeInit ()
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  return;

}



;; Function ComXf_EB_CheckInput (ComXf_EB_CheckInput, funcdef_no=2, decl_uid=6214, cgraph_uid=3, symbol_order=2)

Modification phase of node ComXf_EB_CheckInput/2
ComXf_EB_CheckInput (const uint8 * buffer, uint16 * bufferLength, const void * dataElement, uint8 * retvalPtr)
{
  uint8 retval;
  unsigned char Com_InitStatus.1_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retval => 129
  # DEBUG BEGIN_STMT
  if (bufferLength_5(D) != 0B)
    goto <bb 3>; [70.00%]
  else
    goto <bb 4>; [30.00%]

  <bb 3> [local count: 751619278]:
  # DEBUG BEGIN_STMT
  *bufferLength_5(D) = 0;

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Com_InitStatus.1_1 = Com_InitStatus;
  if (Com_InitStatus.1_1 != 1)
    goto <bb 5>; [48.88%]
  else
    goto <bb 6>; [51.12%]

  <bb 5> [local count: 524845004]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 3, 1);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 6> [local count: 548896821]:
  # DEBUG BEGIN_STMT
  if (buffer_8(D) == 0B)
    goto <bb 7>; [17.43%]
  else
    goto <bb 8>; [82.57%]

  <bb 7> [local count: 95672716]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 3, 4);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 8> [local count: 453224104]:
  # DEBUG BEGIN_STMT
  if (bufferLength_5(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 78996961]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 3, 4);
  # DEBUG BEGIN_STMT
  goto <bb 12>; [100.00%]

  <bb 10> [local count: 374227143]:
  # DEBUG BEGIN_STMT
  if (dataElement_9(D) == 0B)
    goto <bb 11>; [17.43%]
  else
    goto <bb 12>; [82.57%]

  <bb 11> [local count: 65227791]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 3, 4);
  # DEBUG BEGIN_STMT

  <bb 12> [local count: 1073741824]:
  # retval_2 = PHI <129(5), 129(7), 129(9), 129(11), 0(10)>
  # DEBUG retval => retval_2
  # DEBUG BEGIN_STMT
  *retvalPtr_14(D) = retval_2;
  return;

}



;; Function ComXf_EB_Inv_CheckInput (ComXf_EB_Inv_CheckInput, funcdef_no=3, decl_uid=6220, cgraph_uid=4, symbol_order=3)

Modification phase of node ComXf_EB_Inv_CheckInput/3
ComXf_EB_Inv_CheckInput (const uint8 * buffer, uint16 bufferLength, const void * dataElement, uint8 * retvalPtr, Com_SignalIdType SignalGroupId)
{
  const uint16 expectedLength;
  uint8 retval;
  unsigned char Com_InitStatus.2_1;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG retval => 129
  # DEBUG BEGIN_STMT
  Com_InitStatus.2_1 = Com_InitStatus;
  if (Com_InitStatus.2_1 != 1)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 3> [local count: 708669605]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 4, 1);
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 4> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  expectedLength_7 = Com_ComXf_Get_RxSignalGroupSize (SignalGroupId_5(D));
  # DEBUG expectedLength => expectedLength_7
  # DEBUG BEGIN_STMT
  if (buffer_8(D) == 0B)
    goto <bb 5>; [17.43%]
  else
    goto <bb 6>; [82.57%]

  <bb 5> [local count: 63632088]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 4, 4);
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 6> [local count: 301440132]:
  # DEBUG BEGIN_STMT
  if (expectedLength_7 > bufferLength_9(D))
    goto <bb 7>; [33.00%]
  else
    goto <bb 8>; [67.00%]

  <bb 7> [local count: 99475244]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 4, 3);
  # DEBUG BEGIN_STMT
  goto <bb 10>; [100.00%]

  <bb 8> [local count: 201964889]:
  # DEBUG BEGIN_STMT
  if (dataElement_10(D) == 0B)
    goto <bb 9>; [17.43%]
  else
    goto <bb 10>; [82.57%]

  <bb 9> [local count: 35202480]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  Det_ASR40_ReportError (175, 0, 4, 4);
  # DEBUG BEGIN_STMT

  <bb 10> [local count: 1073741824]:
  # retval_2 = PHI <129(3), 129(5), 129(7), 129(9), 0(8)>
  # DEBUG retval => retval_2
  # DEBUG BEGIN_STMT
  *retvalPtr_15(D) = retval_2;
  return;

}


