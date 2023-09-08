
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

OS_svc_ShutdownAllCores/1 (OS_svc_ShutdownAllCores) @06c38438
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: OS_errtblShutdownAllCores/0 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized read-only const-value-known
OS_errtblShutdownAllCores/0 (OS_errtblShutdownAllCores) @06c383f0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: 
  Referring: OS_svc_ShutdownAllCores/1 (addr)
  Availability: available
  Varpool flags: initialized read-only const-value-known
