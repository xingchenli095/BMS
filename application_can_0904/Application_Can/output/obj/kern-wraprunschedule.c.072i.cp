
IPA constant propagation start:

IPA structures before propagation:

Jump functions:
  Jump functions of caller  OS_RunSchedule/2:
  Jump functions of caller  OS_WrapRunSchedule/0:

 Propagating constants:

Not considering OS_WrapRunSchedule for cloning; -fipa-cp-clone disabled.

overall_size: 9, max_new_size: 11001

IPA lattices after all propagation:

Lattices:
  Node: OS_WrapRunSchedule/0:
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

OS_RunSchedule/2 (OS_RunSchedule) @06c59c40
  Type: function
  Visibility: external public
  References: 
  Referring: 
  Availability: not_available
  Function flags: optimize_size
  Called by: OS_WrapRunSchedule/0 (1073741824 (estimated locally),1.00 per call) 
  Calls: 
OS_kernelData/1 (OS_kernelData) @06c35678
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: OS_WrapRunSchedule/0 (read)OS_WrapRunSchedule/0 (write)OS_WrapRunSchedule/0 (write)
  Availability: not_available
  Varpool flags:
OS_WrapRunSchedule/0 (OS_WrapRunSchedule) @06c59a80
  Type: function definition analyzed
  Visibility: externally_visible public
  References: OS_kernelData/1 (read)OS_kernelData/1 (write)OS_kernelData/1 (write)
  Referring: 
  Availability: available
  Function flags: count:1073741824 (estimated locally) body optimize_size
  Called by: 
  Calls: OS_RunSchedule/2 (1073741824 (estimated locally),1.00 per call) 

;; Function OS_WrapRunSchedule (OS_WrapRunSchedule, funcdef_no=0, decl_uid=6330, cgraph_uid=1, symbol_order=0)

Modification phase of node OS_WrapRunSchedule/0
__attribute__((target ("general-regs-only")))
OS_WrapRunSchedule (const struct os_alarm_t * a)
{
  os_uint8_t save;
  unsigned int _1;
  unsigned char _2;

  <bb 2> [local count: 1073741824]:
  # DEBUG BEGIN_STMT
  # DEBUG BEGIN_STMT
  # DEBUG kernel_data => &OS_kernelData
  # DEBUG BEGIN_STMT
  save_4 = OS_kernelData.inFunction;
  # DEBUG save => save_4
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = 7;
  # DEBUG BEGIN_STMT
  _1 = a_6(D)->object;
  _2 = (unsigned char) _1;
  OS_RunSchedule (_2);
  # DEBUG BEGIN_STMT
  OS_kernelData.inFunction = save_4;
  return;

}


