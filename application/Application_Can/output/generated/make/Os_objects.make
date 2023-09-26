# This file is generated automatically. DO NOT EDIT!!
# 
# EB tresos AutoCore OS 6.1.113 CORTEXM/S32K34X
# (Build 20221021)
# 
# (c) 1998-2023 Elektrobit Automotive GmbH
# Am Wolfsmantel 46
# 91058 Erlangen
# GERMANY
# 
# Date         : 9/20/23 8:27 PM           !!!IGNORE-LINE!!!

ifndef OS_OBJECTS_MAKE_INCLUDED
OS_OBJECTS_MAKE_INCLUDED := 1

OS_GENERATED_APPL_FILES +=$(AutosarOS_OUTPUT_PATH)\src\OS_SYSTEM_0_gen.c
OS_CORE_OS_SYSTEM_0 = 0
# OS_OPTIMIZED_LIB_ID tells the build process the name of the optimized library
OS_OPTIMIZED_LIB_ID = 4003af7b98

#####################################################################
# Advanced Logical Core Interface
#####################################################################
# OS_ALCI tells the build process whether to enable ALCI feature.
OS_ALCI = FALSE

#####################################################################
# Applications
#####################################################################
# The APPLICATIONS macro tells the build process the names
# of all the application objects
APPLICATIONS = OS_SYSTEM_0

# For each application XXX in the APPLICATIONS macro:
# - the macro TASKS_XXX tells the build process the names of all the tasks
#   that belong to the application XXX
# - the macro ISRS_XXX tells the build process the names of all the ISRs
#   that belong to the application XXX

TASKS_OS_SYSTEM_0 = Init_Task Rte_Event_Task Rte_Time_Task SchMComTask_10ms SchMComTask_5ms SchMDiagStateTask_20ms SchMMemTask_10ms TASK_RTE_ModeSwitchEvent
ISRS_OS_SYSTEM_0 = CAN0_ORED_IRQHandler CAN0_ORED_0_31_MB_IRQHandler CAN0_ORED_32_63_MB_IRQHandler Adc_Sar_0_Isr SIUL2_EXT_IRQ_24_31_ISR SIUL2_EXT_IRQ_0_7_ISR CMP_0_ISR EMIOS0_5_IRQ

#####################################################################
# Configured Modes
#####################################################################
# OS_CONFIG_EXTENDED_STATUS tells the build process which error library to use.
OS_CONFIG_EXTENDED_STATUS = TRUE
# The OS TRACER is configured as follows:
OS_TRACE = FALSE

#####################################################################
# Core Mapping
#####################################################################
# OS_INITCORE tells the build process which core the OS uses (singlecore).
OS_INITCORE = 0

#####################################################################
# Counters
#####################################################################

#####################################################################
# Interrupts
#####################################################################
# This variable tells the build process the number of stack slots that are generated
# for the stack type kernStack
OS_NUM_KERNSTACK_SLOTS = 1

#####################################################################
# Kernel Type
#####################################################################
# Defines which trapping mechanism the OS shall use.
OS_KERNEL_TYPE = SYSTEM_CALL

#####################################################################
# Memory Regions
#####################################################################

#####################################################################
# Multicore
#####################################################################
# Defines the number of CPU cores assigned to EB tresos AutoCore OS.
OS_N_CORES := 1
# Defines the maximum number of CPU cores supported.
OS_N_CORES_MAX := 1

#####################################################################
# Optimization
#####################################################################
# Defines if library shall be optimized according to configuration
OS_BUILD_OPTIMIZED_LIB_FROM_SOURCE = FALSE

#####################################################################
# Tasks
#####################################################################
# This variable tells the build process the number of stack slots that are generated
# for the stack type taskStack
OS_NUM_TASKSTACK_SLOTS = 7



#####################################################################
# CORTEXM memory region sizes for MPU
#####################################################################
OS_CORTEXM_GBL_ROM_SIZE = 0x400000
OS_CORTEXM_GBL_RAM_SIZE = 0x80000
OS_CORTEXM_REGION_SIZE_OS_SYSTEM_0 = 0x0
OS_CORTEXM_REGION_SIZE_Rte_Event_Task = 0x0
OS_CORTEXM_REGION_SIZE_Rte_Time_Task = 0x0
OS_CORTEXM_REGION_SIZE_TASK_RTE_ModeSwitchEvent = 0x0
OS_CORTEXM_REGION_SIZE_Init_Task = 0x0
OS_CORTEXM_REGION_SIZE_SchMComTask_10ms = 0x0
OS_CORTEXM_REGION_SIZE_SchMComTask_5ms = 0x0
OS_CORTEXM_REGION_SIZE_SchMDiagStateTask_20ms = 0x0
OS_CORTEXM_REGION_SIZE_SchMMemTask_10ms = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot0 = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot1 = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot2 = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot3 = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot4 = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot5 = 0x0
OS_CORTEXM_REGION_SIZE_os_taskstack0_slot6 = 0x0
OS_CORTEXM_REGION_SIZE_CAN0_ORED_IRQHandler = 0x0
OS_CORTEXM_REGION_SIZE_CAN0_ORED_0_31_MB_IRQHandler = 0x0
OS_CORTEXM_REGION_SIZE_CAN0_ORED_32_63_MB_IRQHandler = 0x0
OS_CORTEXM_REGION_SIZE_Adc_Sar_0_Isr = 0x0
OS_CORTEXM_REGION_SIZE_SIUL2_EXT_IRQ_24_31_ISR = 0x0
OS_CORTEXM_REGION_SIZE_SIUL2_EXT_IRQ_0_7_ISR = 0x0
OS_CORTEXM_REGION_SIZE_CMP_0_ISR = 0x0
OS_CORTEXM_REGION_SIZE_EMIOS0_5_IRQ = 0x0
OS_CORTEXM_REGION_SIZE_Os_Counter_STM0_0 = 0x0
OS_CORTEXM_REGION_SIZE_os_kernstack0 = 0x1000

#####################################################################
# Stacks
#####################################################################
# This variable tells the build process the name of the task stack sections.
OS_STACKS +=  os_taskstack0_slot0 os_taskstack0_slot1 os_taskstack0_slot2 os_taskstack0_slot3 os_taskstack0_slot4 os_taskstack0_slot5 os_taskstack0_slot6

# This variable tells the build process the name of the kernel/interrupt stack sections.
OS_STACKS +=  os_kernstack0

# CORTEXM MPU region sizes for stacks. Useful to align the linker sections.
# All stack sizes (ordered as list)

endif
