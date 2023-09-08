
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  Dio_WriteChannel/5:
  Jump functions of caller  ComM_ASR40_RequestComMode/4:
  Jump functions of caller  SWC_IoHwAbs_SetDiscreteValue/3:
  Jump functions of caller  LedControl_IO/2:

 Propagating constants:

Not considering SWC_IoHwAbs_SetDiscreteValue for cloning; -fipa-cp-clone disabled.
Not considering LedControl_IO for cloning; -fipa-cp-clone disabled.

overall_size: 28, max_new_size: 11001
 - context independent values, size: 3, time_benefit: 2.000000

IPA lattices after all propagation:

Lattices:
  Node: SWC_IoHwAbs_SetDiscreteValue/3:
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
  Node: LedControl_IO/2:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

Dio_WriteChannel/5 (Dio_WriteChannel) @07027380
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LedControl_IO/2 (536870913 (estimated locally),0.50 per call) LedControl_IO/2 (536870913 (estimated locally),0.50 per call) 
  Calls: 
ComM_ASR40_RequestComMode/4 (ComM_ASR40_RequestComMode) @070272a0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: LedControl_IO/2 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
SWC_IoHwAbs_SetDiscreteValue/3 (SWC_IoHwAbs_SetDiscreteValue) @070270e0
  Type: function definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: 
LedControl_IO/2 (LedControl_IO) @07024d20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: Count/1 (read)Count/1 (write)flag/0 (read)Count/1 (read)flag/0 (read)flag/0 (write)Count/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: Dio_WriteChannel/5 (536870913 (estimated locally),0.50 per call) Dio_WriteChannel/5 (536870913 (estimated locally),0.50 per call) ComM_ASR40_RequestComMode/4 (1073741824 (estimated locally),1.00 per call) 
Count/1 (Count) @06f09ea0
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: LedControl_IO/2 (read)LedControl_IO/2 (write)LedControl_IO/2 (read)LedControl_IO/2 (write)
  Availability: available
  Varpool flags: initialized
flag/0 (flag) @06f09e58
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: LedControl_IO/2 (read)LedControl_IO/2 (read)LedControl_IO/2 (write)
  Availability: available
  Varpool flags: initialized

;; Function LedControl_IO (LedControl_IO, funcdef_no=0, decl_uid=5718, cgraph_uid=1, symbol_order=2)

Modification phase of node LedControl_IO/2
LedControl_IO ()
{
  int Count.0_1;
  int _2;
  int flag.1_3;
  int Count.2_4;
  int flag.3_5;
  int _6;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  ComM_ASR40_RequestComMode (0, 2);
  # DEBUG BEGIN_STMT
  Count.0_1 = Count;
  _2 = Count.0_1 + 1;
  Count = _2;
  # DEBUG BEGIN_STMT
  flag.1_3 = flag;
  if (flag.1_3 != 0)
    goto <bb 3>; [50.00%]
  else
    goto <bb 4>; [50.00%]

  <bb 3> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (8, 1);
  goto <bb 5>; [100.00%]

  <bb 4> [local count: 536870913]:
  # DEBUG BEGIN_STMT
  Dio_WriteChannel (8, 0);

  <bb 5> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  Count.2_4 = Count;
  if (Count.2_4 == 50)
    goto <bb 6>; [34.00%]
  else
    goto <bb 7>; [66.00%]

  <bb 6> [local count: 365072220]:
  # DEBUG BEGIN_STMT
  flag.3_5 = flag;
  _6 = ~flag.3_5;
  flag = _6;
  # DEBUG BEGIN_STMT
  Count = 0;

  <bb 7> [local count: 1073741824]:
  return;

}



;; Function SWC_IoHwAbs_SetDiscreteValue (SWC_IoHwAbs_SetDiscreteValue, funcdef_no=1, decl_uid=5721, cgraph_uid=2, symbol_order=3)

Modification phase of node SWC_IoHwAbs_SetDiscreteValue/3
SWC_IoHwAbs_SetDiscreteValue (uint32 pdav0, uint32 value)
{
  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  return;

}


