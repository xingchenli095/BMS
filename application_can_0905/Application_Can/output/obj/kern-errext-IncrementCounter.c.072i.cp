
IPA constant propagation start:

IPA structures before propagation:

Jump functions:

 Propagating constants:


overall_size: 0, max_new_size: 11001

IPA lattices after all propagation:

Lattices:

IPA decision stage:


IPA constant propagation end

Reclaiming functions:
Reclaiming variables:
Clearing address taken flags:
Symbol table:

OS_svc_IncrementCounter/1 (OS_svc_IncrementCounter) @06cd9480
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_errtblIncrementCounter/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_errtblIncrementCounter/0 (OS_errtblIncrementCounter) @06cd9438
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OS_svc_IncrementCounter/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known