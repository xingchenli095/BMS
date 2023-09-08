
IPA constant propagation start:
Determining dynamic type for call: newTmrVal_22 = _2 (ptimeStampTimer_17);
  Starting walk at: newTmrVal_22 = _2 (ptimeStampTimer_17);
  instance pointer: ptimeStampTimer_17  Outer instance pointer: ptimeStampTimer_17 offset: 0 (bits) vtbl reference: 
  Function call may change dynamic type:newTmrVal_22 = _2 (ptimeStampTimer_17);

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_GetTimeStampGeneric/0:
    indirect simple callsite, calling param -1, offset 0, for stmt newTmrVal_22 = _2 (ptimeStampTimer_17);
       param 0: UNKNOWN
         value: 0x0, mask: 0xffffffff
         Unknown VR

 Propagating constants:

Not considering OS_GetTimeStampGeneric for cloning; -fipa-cp-clone disabled.

overall_size: 41, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_GetTimeStampGeneric/0:
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

OS_timeStampValue/3 (OS_timeStampValue) @06c5b8b8
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTimeStampGeneric/0 (read)OS_GetTimeStampGeneric/0 (read)
  Availability: not_available
  Varpool flags:
OS_lastTimeStampTime/2 (OS_lastTimeStampTime) @06c5b870
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTimeStampGeneric/0 (read)
  Availability: not_available
  Varpool flags:
OS_timeStampTimer/1 (OS_timeStampTimer) @06c5b828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_GetTimeStampGeneric/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_GetTimeStampGeneric/0 (OS_GetTimeStampGeneric) @06c7bc40
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_timeStampTimer/1 (read)OS_timeStampValue/3 (read)OS_lastTimeStampTime/2 (read)OS_timeStampValue/3 (read)
  Referring: 
  Availability: available
  Function flags: count:57368491 (estimated locally) body optimize_size
  Called by: 
  Calls: 
   Indirect call(1073741824 (estimated locally),18.72 per call) 

;; Function OS_GetTimeStampGeneric (OS_GetTimeStampGeneric, funcdef_no=0, decl_uid=6190, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_GetTimeStampGeneric/0
__attribute__((target ("general-regs-only")))
OS_GetTimeStampGeneric (struct os_timestamp_t * out)
{
  unsigned int timeStampValue2$tsHi;
  unsigned int timeStampValue2$tsLo;
  unsigned int timeStampValue1$tsHi;
  unsigned int timeStampValue1$tsLo;
  os_timervalue_t localLastTimeStampTime;
  struct os_timestamp_t timeStampValue2;
  struct os_timestamp_t timeStampValue1;
  os_timervalue_t diff;
  os_timervalue_t newTmrVal;
  const struct os_hwt_t * const ptimeStampTimer;
  const struct os_hwtdrv_t * _1;
  os_timervalue_t (*<T526>) (const struct os_hwt_t *) _2;
  unsigned int _7;
  unsigned int _8;
  unsigned int _10;
  unsigned int _11;
  unsigned int _12;

  <bb 2> [local count: 57368491]:
  # DEBUG BEGIN_STMT
  ptimeStampTimer_17 = OS_timeStampTimer;
  # DEBUG ptimeStampTimer => ptimeStampTimer_17
  # DEBUG BEGIN_STMT
  if (ptimeStampTimer_17 != 0B)
    goto <bb 10>; [70.00%]
  else
    goto <bb 8>; [30.00%]

  <bb 10> [local count: 40157944]:
  goto <bb 9>; [100.00%]

  <bb 3> [local count: 1033583881]:

  <bb 9> [local count: 1073741824]:
  # DEBUG plastTimeStampTime => NULL
  # DEBUG ptimeStampValue => NULL
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  timeStampValue1 ={v} OS_timeStampValue;
  timeStampValue1$tsLo_18 = MEM[(struct os_timestamp_s *)&timeStampValue1];
  # DEBUG timeStampValue1$tsLo => timeStampValue1$tsLo_18
  timeStampValue1$tsHi_19 = MEM[(struct os_timestamp_s *)&timeStampValue1 + 4B];
  # DEBUG timeStampValue1$tsHi => timeStampValue1$tsHi_19
  # DEBUG BEGIN_STMT
  _1 = ptimeStampTimer_17->driver;
  _2 = _1->hwtRead;
  newTmrVal_22 = _2 (ptimeStampTimer_17);
  # DEBUG newTmrVal => newTmrVal_22
  # DEBUG BEGIN_STMT
  localLastTimeStampTime_23 ={v} OS_lastTimeStampTime;
  # DEBUG localLastTimeStampTime => localLastTimeStampTime_23
  # DEBUG BEGIN_STMT
  timeStampValue2 ={v} OS_timeStampValue;
  timeStampValue2$tsLo_30 = MEM[(struct os_timestamp_s *)&timeStampValue2];
  # DEBUG timeStampValue2$tsLo => timeStampValue2$tsLo_30
  timeStampValue2$tsHi_31 = MEM[(struct os_timestamp_s *)&timeStampValue2 + 4B];
  # DEBUG timeStampValue2$tsHi => timeStampValue2$tsHi_31
  # DEBUG BEGIN_STMT
  if (timeStampValue1$tsHi_19 != timeStampValue2$tsHi_31)
    goto <bb 3>; [66.00%]
  else
    goto <bb 4>; [34.00%]

  <bb 4> [local count: 365072220]:
  if (timeStampValue1$tsLo_18 != timeStampValue2$tsLo_30)
    goto <bb 3>; [89.00%]
  else
    goto <bb 5>; [11.00%]

  <bb 5> [local count: 40157944]:
  # newTmrVal_4 = PHI <newTmrVal_22(4)>
  # localLastTimeStampTime_5 = PHI <localLastTimeStampTime_23(4)>
  # timeStampValue2$tsLo_6 = PHI <timeStampValue2$tsLo_30(4)>
  # timeStampValue2$tsHi_9 = PHI <timeStampValue2$tsHi_31(4)>
  # DEBUG BEGIN_STMT
  _7 = newTmrVal_4 - localLastTimeStampTime_5;
  _8 = ptimeStampTimer_17->wrapMask;
  diff_25 = _7 & _8;
  # DEBUG diff => diff_25
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  out_26(D)->tsHi = timeStampValue2$tsHi_9;
  # DEBUG BEGIN_STMT
  _10 = ~diff_25;
  if (timeStampValue2$tsLo_6 > _10)
    goto <bb 6>; [50.00%]
  else
    goto <bb 7>; [50.00%]

  <bb 6> [local count: 20078972]:
  # DEBUG BEGIN_STMT
  _11 = timeStampValue2$tsHi_9 + 1;
  out_26(D)->tsHi = _11;

  <bb 7> [local count: 40157944]:
  # DEBUG BEGIN_STMT
  _12 = timeStampValue2$tsLo_6 + diff_25;
  out_26(D)->tsLo = _12;
  # DEBUG BEGIN_STMT
  # DEBUG D#1 => {CLOBBER}
  # DEBUG timeStampValue1$tsLo => D#1
  # DEBUG D#2 => {CLOBBER}
  # DEBUG timeStampValue1$tsHi => D#2
  # DEBUG D#3 => {CLOBBER}
  # DEBUG timeStampValue2$tsLo => D#3
  # DEBUG D#4 => {CLOBBER}
  # DEBUG timeStampValue2$tsHi => D#4

  <bb 8> [local count: 57368492]:
  return;

}

