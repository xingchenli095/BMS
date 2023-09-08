
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_Error/4:
  Jump functions of caller  OS_LocalSetEvent/3:
  Jump functions of caller  OS_WrapSetEvent/0:

 Propagating constants:

Not considering OS_WrapSetEvent for cloning; -fipa-cp-clone disabled.

overall_size: 24, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_WrapSetEvent/0:
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

OS_svc_SetEvent/5 (OS_svc_SetEvent) @06c57828
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapSetEvent/0 (addr)
  Availability: not_available
  Varpool flags: read-only
OS_Error/4 (OS_Error) @06c7c000
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapSetEvent/0 (354334802 (estimated locally),0.33 per call) 
  Calls: 
OS_LocalSetEvent/3 (OS_LocalSetEvent) @06c7cee0
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapSetEvent/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_taskTableBase/2 (OS_taskTableBase) @06c57750
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapSetEvent/0 (read)
  Availability: not_available
  Varpool flags: read-only
OS_kernelData/1 (OS_kernelData) @06c57708
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapSetEvent/0 (read)OS_WrapSetEvent/0 (write)OS_WrapSetEvent/0 (write)
  Availability: not_available
  Varpool flags:
OS_WrapSetEvent/0 (OS_WrapSetEvent) @06c7cd20
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_taskTableBase/2 (read)OS_kernelData/1 (read)OS_kernelData/1 (write)OS_svc_SetEvent/5 (addr)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_Error/4 (354334802 (estimated locally),0.33 per call) OS_LocalSetEvent/3 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_WrapSetEvent (OS_WrapSetEvent, funcdef_no=0, decl_uid=6324, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_WrapSetEvent/0
__attribute__((target ("general-regs-only")))
OS_WrapSetEvent (const struct os_alarm_t * a)
{
  os_paramtype_t p[3];
  os_errorresult_t e;
  os_uint8_t save;
  const os_eventmask_t evt;
  const struct os_task_t * ts;
  unsigned int _1;
  const struct os_task_t * OS_taskTableBase.0_2;
  unsigned int _3;
  unsigned int _5;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  _1 = a_7(D)->object;
  # DEBUG t => (const os_taskid_t) _1
  # DEBUG BEGIN_STMT
  OS_taskTableBase.0_2 = OS_taskTableBase;
  _5 = _1 & 255;
  _3 = _5 * 76;
  ts_8 = OS_taskTableBase.0_2 + _3;
  # DEBUG ts => ts_8
  # DEBUG BEGIN_STMT
  evt_9 = a_7(D)->event;
  # DEBUG evt => evt_9
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  save_10 = OS_kernelData.inFunction;
  # DEBUG save => save_10
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 7;
  # DEBUG BEGIN_STMT
  e_13 = OS_LocalSetEvent (ts_8, evt_9);
  # DEBUG e => e_13
  # DEBUG BEGIN_STMT
  if (e_13 != 0)
    goto <bb 3>; [33.00%]
  else
    goto <bb 4>; [67.00%]

  <bb 3> [local count: 354334802]:
  # DEBUG BEGIN_STMT
  p[0] = _5;
  # DEBUG BEGIN_STMT
  p[1] = evt_9;
  # DEBUG BEGIN_STMT
  OS_Error (&OS_svc_SetEvent, e_13, &p);

  <bb 4> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = save_10;
  p ={v} {CLOBBER};
  return;

}


