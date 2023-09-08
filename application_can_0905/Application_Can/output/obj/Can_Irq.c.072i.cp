
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Can_ProcessBusOffInterrupt/3:
  Jump functions of caller  Can_ProcessMesgBufferCommonInterrupt/2:
  Jump functions of caller  Can_ErrorIrqCallback/1:
  Jump functions of caller  Can_CommonIrqCallback/0:

 Propagating constants:

Not considering Can_ErrorIrqCallback for cloning; -fipa-cp-clone disabled.
Not considering Can_CommonIrqCallback for cloning; -fipa-cp-clone disabled.

overall_size: 60, max_new_size: 11001
 - context independent values, size: 7, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: Can_ErrorIrqCallback/1:
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
  Node: Can_CommonIrqCallback/0:
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

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Can_ProcessBusOffInterrupt/3 (Can_ProcessBusOffInterrupt) @07e8b1c0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_ErrorIrqCallback/1 (217325345 (estimated locally),0.20 per call) 
  Calls: 
Can_ProcessMesgBufferCommonInterrupt/2 (Can_ProcessMesgBufferCommonInterrupt) @07e8b000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: Can_CommonIrqCallback/0 (59063713 (estimated locally),0.06 per call) Can_CommonIrqCallback/0 (59063713 (estimated locally),0.06 per call) Can_CommonIrqCallback/0 (59063713 (estimated locally),0.06 per call) Can_CommonIrqCallback/0 (59063713 (estimated locally),0.06 per call) Can_CommonIrqCallback/0 (59063713 (estimated locally),0.06 per call) Can_CommonIrqCallback/0 (60232941 (estimated locally),0.06 per call) 
  Calls: 
Can_ErrorIrqCallback/1 (Can_ErrorIrqCallback) @07e5fee0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_ProcessBusOffInterrupt/3 (217325345 (estimated locally),0.20 per call) 
Can_CommonIrqCallback/0 (Can_CommonIrqCallback) @07e5fd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073670964 (estimated locally) body optimize_size
  Called by: 
  Calls: Can_ProcessMesgBufferCommonInterrupt/2 (59063713 (estimated locally),0.06 per call) Can_ProcessMesgBufferCommonInterrupt/2 (59063713 (estimated locally),0.06 per call) Can_ProcessMesgBufferCommonInterrupt/2 (59063713 (estimated locally),0.06 per call) Can_ProcessMesgBufferCommonInterrupt/2 (59063713 (estimated locally),0.06 per call) Can_ProcessMesgBufferCommonInterrupt/2 (59063713 (estimated locally),0.06 per call) Can_ProcessMesgBufferCommonInterrupt/2 (60232941 (estimated locally),0.06 per call) 

;; Function Can_CommonIrqCallback (Can_CommonIrqCallback, funcdef_no=0, decl_uid=11780, cgraph_uid=1, symbol_order=0)

Modification phase of node Can_CommonIrqCallback/0
Can_CommonIrqCallback (uint8 u8Instance, Flexcan_Ip_EventType event, uint32 u32buffIdx, const struct Flexcan_Ip_StateType * driverState)
{
  unsigned char _1;
  unsigned char _2;
  unsigned char _3;
  unsigned char _4;
  unsigned char _5;
  unsigned char _6;

  <bb 2> [local count: 1073670964]:
  # DEBUG BEGIN_STMT
  if (u32buffIdx_8(D) == 255)
    goto <bb 3>; [34.00%]
  else
    goto <bb 6>; [66.00%]

  <bb 3> [local count: 365048128]:
  # DEBUG BEGIN_STMT
  _1 = driverState_10(D)->enhancedFifoOutput.isPolling;
  if (_1 == 0)
    goto <bb 4>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 4> [local count: 182524064]:
  # DEBUG BEGIN_STMT
  switch (event_11(D)) <default: <L19> [67.00%], case 5: <L2> [33.00%], case 7: <L2> [33.00%]>

  <bb 5> [local count: 60232941]:
<L2>:
  # DEBUG BEGIN_STMT
  _2 = (unsigned char) event_11(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_12(D), _2, 2);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 6> [local count: 708622837]:
  # DEBUG BEGIN_STMT
  _3 = driverState_10(D)->mbs[u32buffIdx_8(D)].isPolling;
  if (_3 == 0)
    goto <bb 7>; [50.00%]
  else
    goto <bb 13>; [50.00%]

  <bb 7> [local count: 354311418]:
  # DEBUG BEGIN_STMT
  switch (event_11(D)) <default: <L19> [16.67%], case 0: <L10> [16.67%], case 1: <L11> [16.67%], case 2: <L12> [16.67%], case 3: <L13> [16.67%], case 4: <L9> [16.67%]>

  <bb 8> [local count: 59063713]:
<L9>:
  # DEBUG BEGIN_STMT
  _4 = (unsigned char) u32buffIdx_8(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_12(D), _4, 3);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 9> [local count: 59063713]:
<L10>:
  # DEBUG BEGIN_STMT
  _5 = (unsigned char) u32buffIdx_8(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_12(D), _5, 0);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 10> [local count: 59063713]:
<L11>:
  # DEBUG BEGIN_STMT
  _6 = (unsigned char) u32buffIdx_8(D);
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_12(D), _6, 1);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 11> [local count: 59063713]:
<L12>:
  # DEBUG BEGIN_STMT
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_12(D), 6, 1);
  # DEBUG BEGIN_STMT
  goto <bb 13>; [100.00%]

  <bb 12> [local count: 59063713]:
<L13>:
  # DEBUG BEGIN_STMT
  Can_ProcessMesgBufferCommonInterrupt (u8Instance_12(D), 7, 1);
  # DEBUG BEGIN_STMT

  <bb 13> [local count: 1073741824]:
<L19>:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}



;; Function Can_ErrorIrqCallback (Can_ErrorIrqCallback, funcdef_no=1, decl_uid=11785, cgraph_uid=2, symbol_order=1)

Modification phase of node Can_ErrorIrqCallback/1
Can_ErrorIrqCallback (uint8 u8Instance, Flexcan_Ip_EventType event, uint32 u32ErrStatus, const struct Flexcan_Ip_StateType * driverState)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  if (event_2(D) == 11)
    goto <bb 3>; [20.24%]
  else
    goto <bb 4>; [79.76%]

  <bb 3> [local count: 217325345]:
<L0>:
  # DEBUG BEGIN_STMT
  Can_ProcessBusOffInterrupt (u8Instance_4(D));
  # DEBUG BEGIN_STMT

  <bb 4> [local count: 1073741824]:
  return;

}


