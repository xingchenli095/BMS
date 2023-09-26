# --------{ EB Automotive Makefile }--------

#################################################################
# TOOLPATH_COMPILER:
# The root directory (prefix) of the GNU C Compiler for ARM chain must
# be set by the help of the variable TOOLPATH_COMPILER.
# If an environment is defined, the value of this variable will be
# used.
#
TOOLPATH_COMPILER ?= C:\Tools\ghs\comp_202114

#################################################################
# CC_OPT:
# GreenHills Compiler Options
CC_OPT += -DOSB_TOOL=OSB_ghs
# Selects target processor: Arm Cortex M7
CC_OPT += -cpu=cortexm7
# Selects generating code that executes in Thumb state
CC_OPT += -thumb
# Specifies hardware floating-point using the v5 version of the VFP instruction set, with 16 double-precision floating-point registers
CC_OPT += -fpu=vfpv5_d16
# Use hardware single-precision, software double-precision FP instructions
CC_OPT += -fsingle
# Use ISO C99 standard with extensions
CC_OPT += -c99
# Use the most recent version of Green Hills Standard mode (which enables warnings and errors that enforce a stricter coding standard than regular C and C++)
CC_OPT += --ghstd=last
# Optimize for size.
CC_OPT += -O0
# Enables GNU extended asm syntax support
CC_OPT += --gnu_asm
# Generate DWARF 2.0 debug information
CC_OPT += -dual_debug
# Generate debug information
CC_OPT += -G
# Prevents the deletion of temporary files after they are used. If an assembly language file is created by the compiler, 
# this option will place it in the current directory instead of the temporary directory.
CC_OPT += -keeptempfiles
# Issues a warning if the return type of a function is not declared before it is called
CC_OPT += -Wimplicit-int
# Issues a warning if the declaration of a local variable shadows the declaration of a variable of the same name declared at the global scope, or at an outer scope
CC_OPT += -Wshadow
# Issues a warning for any use of trigraphs
CC_OPT += -Wtrigraphs
# Generates warnings for undefined symbols in preprocessor expressions
CC_OPT += -Wundef
# Let the type char be unsigned, like unsigned char
CC_OPT += --unsigned_chars
# Bitfelds declared with an integer type are unsigned
CC_OPT += --unsigned_fields
# Controls the start files to be linked into the executable
CC_OPT += -nostartfiles
# Allocates uninitialized global variables to a section and initializes them to zero at program startup.
CC_OPT += --no_commons
# Disables support for exception handling
CC_OPT += --no_exceptions
# C++ like comments will generate a compilation error
#CC_OPT += --no_slash_comment
# Generates errors when functions referenced or called have no prototype
CC_OPT += --prototype_errors
# Valid #pragma directives with wrong syntax are treated as warnings
CC_OPT += --incorrect_pragma_warnings
# Stop after assembly and produce an object file for each source file
CC_OPT += -c
# Predefine S32K3XX as a macro, with definition 1
CC_OPT += -DS32K3XX
# Predefine S32K344 as a macro, with definition 1
CC_OPT += -DS32K344
# Predefine GHS as a macro, with definition 1
CC_OPT += -DGHS
# Predefine USE_SW_VECTOR_MODE as a macro, with definition 1
CC_OPT += -DUSE_SW_VECTOR_MODE
# Predefine D_CACHE_ENABLE as a macro, with definition 1 
CC_OPT += -DD_CACHE_ENABLE
# Predefine I_CACHE_ENABLE as a macro, with definition 1
CC_OPT += -DI_CACHE_ENABLE
# Predefine ENABLE_FPU as a macro, with definition 1
CC_OPT += -DENABLE_FPU
# Predefine MCAL_ENABLE_USER_MODE_SUPPORT as a macro, with definition 1
CC_OPT += -DMCAL_ENABLE_USER_MODE_SUPPORT

#################################################################
# ASM_OPT:
# GreenHills Assembler Options
# The variable ASM_OPT contains the switches for the assembler call.
ASM_OPT += -DOSB_TOOL=OSB_ghs
# Selects target processor: Arm Cortex M7
ASM_OPT += -cpu=cortexm7
# Specifies hardware floating-point using the v5 version of the VFP instruction set, with 16 double-precision floating-point registers
ASM_OPT += -fpu=vfpv5_d16
# Use hardware single-precision, software double-precision FP instructions
ASM_OPT += -fsingle
# Preprocesses assembly files
ASM_OPT += -preprocess_assembly_files
# Stop after assembly and produce an object file for each source file
ASM_OPT += -c
# Creates a listing by using the name and directory of the object file with the .lst extension
ASM_OPT += -list

#################################################################
# LINK_OPT:
# GreenHills Linker Options
LINK_OPT += -cpu=cortexm7
# Creates a detailed map file
LINK_OPT += -map
# Controls the retention of the map file in the event of a link error
LINK_OPT += -keepmap
# Map file numeric ordering
LINK_OPT += -Mn
# Removal from the executable of functions that are unused and unreferenced
LINK_OPT += -delete
# Ignores relocations from DWARF debug sections when using -delete.
LINK_OPT += -ignore_debug_references
# Link thumb2 library
LINK_OPT += -L$(TOOLPATH_COMPILER)/lib/thumb2
# Link architecture specific library
LINK_OPT += -larch
# Link run-time environment startup routines
LINK_OPT += -lstartup
# Link language-independent library, containing e.g. some general purpose routines of the ANSI C library
LINK_OPT += -lind_sd
# Display removed unused functions
LINK_OPT += -v

#################################################################
# The Application Makefile (Makefile.mak) contains the variable
# COMPILER_MODE. This variable defines, how the include paths and
# the flags (parameters) will be passed to the compiler. Normally,
# all parameters are passed by the windows command line but
# Windows 2000 has a restriction of 2048 characters
# (Windows XP - 8192). Therefore the Customer Build Environment
# supports up to three different compiler parameter modes.
#
# GLOBAL_OPTION_FILE:
# Before calling the compiler, a global parameter file is
# created by the Compiler Makefile Plugin. This file contains
# all include paths and the compiler flags. It is used
# for all source files. This means that the options
# <source_file>_CC_OPT and <source_file>_INCLUDE have no effect.
# This is the default compiler mode.
#
# NO_OPTION_FILE mode:
# All parameters are passed using the command line. If the include
# paths are longer than the limitations of the command line,
# the make run will abort with an error message.
#
# LOCAL_OPTION_FILE:
# If the value LOCAL_OPTION_FILE is set, a parameter file with
# the include paths and compiler flags will be created for each
# source file. The make process will be VERY slow when this option
# is used. The advantage is, that different include path and
# parameters can be defined for every source file. If you do not
# need this feature, you should not use this option.

COMPILER_MODE := GLOBAL_OPTION_FILE

################################################################
# AR_OPT:
# The variable AR_OPT contains the options for the library call.
#
# Default: -r (added elsewhere).

# create archive if it doesn't exist
AR_OPT += -archive

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