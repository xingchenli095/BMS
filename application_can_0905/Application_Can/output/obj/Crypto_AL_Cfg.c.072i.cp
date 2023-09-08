
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

Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE/8 (Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE) @06bc3318
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_KeyData_1/5 (addr)Crypto_AL_KeyData_0/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE/7 (Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE) @06bc32d0
  Type: variable
  Body removed by symtab_remove_unreachable_nodes
  Visibility: external public
  References: 
  Referring: Crypto_AL_KeyData_1/5 (addr)Crypto_AL_KeyData_0/4 (addr)
  Availability: not_available
  Varpool flags: read-only
Crypto_AL_Keys_Data/6 (Crypto_AL_Keys_Data) @06bc3240
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: Crypto_AL_KeyData_0/4 (addr)Crypto_AL_KeyData_1/5 (addr)
  Referring: 
  Availability: available
  Varpool flags: initialized
Crypto_AL_KeyData_1/5 (Crypto_AL_KeyData_1) @06bc31f8
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AL_KeyElemData_1_0/2 (addr)Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE/7 (addr)Crypto_AL_KeyElemData_1_1/3 (addr)Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE/8 (addr)
  Referring: Crypto_AL_Keys_Data/6 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_AL_KeyData_0/4 (Crypto_AL_KeyData_0) @06bc31b0
  Type: variable definition analyzed
  Visibility: prevailing_def_ironly
  References: Crypto_AL_KeyElemData_0_0/0 (addr)Crypto_CRYPTOKEYELEMENT_SECOC_KEY_INIT_VALUE/7 (addr)Crypto_AL_KeyElemData_0_1/1 (addr)Crypto_CRYPTOKEYELEMENT_KEY_CHECKSUM_INIT_VALUE/8 (addr)
  Referring: Crypto_AL_Keys_Data/6 (addr)
  Availability: available
  Varpool flags: initialized
Crypto_AL_KeyElemData_1_1/3 (Crypto_AL_KeyElemData_1_1) @06bc3168
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_AL_KeyData_1/5 (addr)
  Availability: available
  Varpool flags:
Crypto_AL_KeyElemData_1_0/2 (Crypto_AL_KeyElemData_1_0) @06bc3120
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_AL_KeyData_1/5 (addr)
  Availability: available
  Varpool flags:
Crypto_AL_KeyElemData_0_1/1 (Crypto_AL_KeyElemData_0_1) @06bc30d8
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_AL_KeyData_0/4 (addr)
  Availability: available
  Varpool flags:
Crypto_AL_KeyElemData_0_0/0 (Crypto_AL_KeyElemData_0_0) @06bc3090
  Type: variable definition analyzed
  Visibility: externally_visible public
  References: 
  Referring: Crypto_AL_KeyData_0/4 (addr)
  Availability: available
  Varpool flags:
