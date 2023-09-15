/* This file is generated automatically. DO NOT EDIT!!
 *
 * EB tresos AutoCore OS 6.1.113 CORTEXM/S32K34X
 * (Build 20221021)
 *
 * (c) 1998-2023 Elektrobit Automotive GmbH
 * Am Wolfsmantel 46
 * 91058 Erlangen
 * GERMANY
 *
 * Date         : 9/15/23 12:55 PM           !!!IGNORE-LINE!!!
 */

#include <Os_config.h>
#include <Os_kernel.h>
#include <Os_tool.h>

#if OS_GENERATION_ID_OS_H!=0x6e614cafUL
#error "Build-Ids of src\Os_gen.c and include\Os_user.h did not match! Hint: A wrong include\Os_user.h was most probably included."
#endif
#if OS_GENERATION_ID_OS_CONF_H!=0x6e614cafUL
#error "Build-Ids of src\Os_gen.c and include\Os_config.h did not match! Hint: A wrong include\Os_config.h was most probably included."
#endif
#if OS_GENERATION_ID_OS_KCONF_H!=0x6e614cafUL
#error "Build-Ids of src\Os_gen.c and include\Os_kconfig.h did not match! Hint: A wrong include\Os_kconfig.h was most probably included."
#endif

const os_uint32_t OS_os_GenBuildId = 0x6e614cafUL;

/*===================================================================
 * Counters
 *==================================================================*/

void OS_CounterIsr_HwCounter(void)
{
  OS_HwCounterUpdate(&OS_counterTableBase[HwCounter]);
}

/*===================================================================
 * Stacks
 *==================================================================*/
/* Task stacks */
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot0, .bss.core0.os_taskstack0_slot0, 276, 8);
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot1, .bss.core0.os_taskstack0_slot1, 276, 8);
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot2, .bss.core0.os_taskstack0_slot2, 276, 8);
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot3, .bss.core0.os_taskstack0_slot3, 276, 8);
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot4, .bss.core0.os_taskstack0_slot4, 276, 8);
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot5, .bss.core0.os_taskstack0_slot5, 276, 8);
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_taskStack0_slot6, .bss.core0.os_taskstack0_slot6, 276, 8);
#endif

/* Interrupt stacks */
#if OS_KERNEL_TYPE != OS_MICROKERNEL
OS_GEN_STACK(OS_kernStack0, .bss.core0.os_kernstack0, 768, 8);
#endif
