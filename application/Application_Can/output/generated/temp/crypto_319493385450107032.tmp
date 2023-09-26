#
# \file
#
# \brief AUTOSAR Crypto
#
# This file contains the implementation of the AUTOSAR
# module Crypto.
#
# \version 1.7.51
#
# \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
#
# Copyright 2005 - 2022 Elektrobit Automotive GmbH
# All rights exclusively reserved for Elektrobit Automotive GmbH,
# unless expressly agreed to otherwise.


#================================================================
# DEFINITIONS

Crypto_INSTANCE                      := Crypto

ifeq ($(BUILD_MODE),LIB)
ifeq ($(MODULE),Crypto)
LIB_VARIANTS += Crypto_BASE
endif
endif

Crypto_CORE_PATH           ?=
Crypto_OUTPUT_PATH         ?= $(AUTOSAR_BASE_OUTPUT_PATH)

Crypto_GEN_FILES           := \
  $(Crypto_CORE_PATH)/generate/include/Crypto_Cfg.h

Crypto_lib_LIB_OUTPUT_PATH := $(Crypto_CORE_PATH)/lib

#================================================================
# REGISTRY

SSC_PLUGINS                          += Crypto
Crypto_DEPENDENT_PLUGINS   := base_make tresos
Crypto_DESCRIPTION         := Crypto Basic Software Makefile PlugIn for Autosar

CC_INCLUDE_PATH += \
  $(Crypto_OUTPUT_PATH)/instance/$(Crypto_INSTANCE)/include \
  $(Crypto_OUTPUT_PATH)/include


