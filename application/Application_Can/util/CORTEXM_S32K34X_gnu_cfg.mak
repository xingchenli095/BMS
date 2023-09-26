# \file
#
# \brief AUTOSAR Os
#
# This file contains the implementation of the AUTOSAR
# module Os.
#
# \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
#
# Copyright 1998 - 2018 Elektrobit Automotive GmbH
# All rights exclusively reserved for Elektrobit Automotive GmbH,
# unless expressly agreed to otherwise.

#################################################################
# TOOLPATH_COMPILER:
# The root directory of the Greenhills multi toolchain for ARM must
# be set by the help of the variable TOOLPATH_COMPILER.
# If an environment is defined, the value of this variable will be
# used.
TOOLPATH_COMPILER ?=

#################################################################
# Adapt compiler executable names for linaro armeabi toolchain
#
# DISABLE_DEFAULT_CC = YES
# CC			= $(TOOLPATH_COMPILER)/bin/arm-eabi-gcc.exe
# DISABLE_DEFAULT_CCLIB = YES
# CCLIB		= $(TOOLPATH_COMPILER)/bin/arm-eabi-ar.exe
# DISABLE_DEFAULT_CPP = YES
# CPP			= $(TOOLPATH_COMPILER)/bin/arm-eabi-cpp.exe

#################################################################
# COMMON_OPT:
# Common options used by all tools.

#################################################################
# CC_OPT:
# The variable CC_OPT contains all default compiler switches.

CC_OPT += -mcpu=cortex-m7
CC_OPT += -mthumb
CC_OPT += -mlittle-endian
CC_OPT += -mfpu=fpv5-sp-d16
CC_OPT += -mfloat-abi=hard
CC_OPT += -c99
CC_OPT += -Os
CC_OPT += -ggdb3
CC_OPT += -Wall
CC_OPT += -Wextra
CC_OPT += -pedantic
CC_OPT += -Wstrict-prototypes
CC_OPT += -Wundef
CC_OPT += -Wunused
CC_OPT += -Werror=implicit-function-declaration
CC_OPT += -Wsign-compare
CC_OPT += -Wdouble-promotion
CC_OPT += -fno-short-enums
CC_OPT += -funsigned-char
CC_OPT += -funsigned-bitfields
CC_OPT += -fomit-frame-pointer
CC_OPT += -fno-common
CC_OPT += -fstack-usage
CC_OPT += -fdump-ipa-all
CC_OPT += -c
CC_OPT += -DS32XX 
CC_OPT += -DS32K342
CC_OPT += -DGHS
CC_OPT += -DUSE_SW_VECTOR_MODE 
CC_OPT += -DD_CACHE_ENABLE 
CC_OPT += -DI_CACHE_ENABLE 
CC_OPT += -DENABLE_FPU 
CC_OPT += -DMCAL_ENABLE_USER_MODE_SUPPORT
CC_OPT += -DOSB_TOOL=OSB_gnu

#################################################################
# ASM_OPT:
# The variable ASM_OPT contains the switches for the assembler call.

ASM_OPT += -mcpu=cortex-m7 
ASM_OPT += -mfloat-abi=hard
ASM_OPT += -mfpu=fpv5-sp-d16
ASM_OPT += -x assembler-with-cpp
ASM_OPT += -c
ASM_OPT += -DOSB_TOOL=OSB_gnu

#################################################################
# CPP_OPT:
# The variable CPP_OPT contains the switches for the cpp compiler call.
#
CPP_OPT  +=

#################################################################
# LINK_OPT:
# The variable LINK_OPT contains the switches for the linker call.
#

LINK_OPT += -Wl,-Map=$(BIN_OUTPUT_PATH)\$(PROJECT).$(MAP_FILE_SUFFIX)
LINK_OPT += --entry=Reset_Handler
LINK_OPT += -nostartfiles
LINK_OPT += -mcpu=cortex-m7
LINK_OPT += -mthumb
LINK_OPT += -mfpu=fpv5-sp-d16
LINK_OPT += -mfloat-abi=hard
LINK_OPT += -mlittle-endian
LINK_OPT += -ggdb3
LINK_OPT += -nostdlib

################################################################
# AR_OPT:
# The variable AR_OPT contains the options for the archiver call.
#
# Example: AR_OPT += --some-option

# none needed for gcc.

#################################################################
# EXT_LOCATOR_FILE:
# This variable specifies the name for an external locator/linker file.
# If the variable is empty, the board makefile will generate a default
# locator/linker file.
#
EXT_LOCATOR_FILE +=

#################################################################
# CREATE_PREPROCESSOR_FILE:
# This variable allows to define if a secial preprocessor file
# (output/obj/*.pre) shall be created or not.
CREATE_PREPROCESSOR_FILE = NO

