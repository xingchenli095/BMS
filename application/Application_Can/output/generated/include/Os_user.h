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
 * Date         : 10/11/23 4:15 PM           !!!IGNORE-LINE!!!
 */

#ifndef OS_USER_H
#define OS_USER_H
#ifdef __cplusplus
extern "C" {
#endif

#define OS_GENERATION_ID_OS_H    0xd1177377UL

#define OS_AUTOSAROS_VER         6

#define OS_AUTOSAROS_REV         1

#define OS_AUTOSAROS_CORE_BUILD  20221021

#define OS_AUTOSAROS_ARCH_BUILD  20221021

#ifndef OS_INTERRUPT_KEYWORD
#define OS_INTERRUPT_KEYWORD
#endif

#include <Os_api.h>

/*===================================================================
 * Alarms
 *==================================================================*/
#define AlarmIncrementRteCounter  0

/*===================================================================
 * Application modes
 *==================================================================*/
#define OSDEFAULTAPPMODE  0

/*===================================================================
 * Applications
 *==================================================================*/
/* Application Hooks */
/* Trusted Functions */

/*===================================================================
 * CPU Core configuration
 *==================================================================*/
#define OS_CORE_ID_0  0

/*===================================================================
 * Core Mapping
 *==================================================================*/
#define RES_SCHEDULER  0u

/*===================================================================
 * Counters
 *==================================================================*/
/* Macros for the configured counter values and time conversions */
#define OSMAXALLOWEDVALUE_Rte_Counter  OS_U(4294967295)
#define OSTICKSPERBASE_Rte_Counter  OS_U(1)
#define OSMINCYCLE_Rte_Counter  OS_U(1)
#define OS_NsToTicks_Rte_Counter(x)  ((x)/1000000)
#define OS_TicksToNs_Rte_Counter(x)  ((x)*1000000)
#define OS_TICKS2NS_Rte_Counter(x)   (OS_TicksToNs_Rte_Counter((x)))
#define OS_TICKS2US_Rte_Counter(x)   (OS_TicksToNs_Rte_Counter((x)))/1000u
#define OS_TICKS2MS_Rte_Counter(x)   (OS_TicksToNs_Rte_Counter((x)))/1000000u
#define OS_TICKS2SEC_Rte_Counter(x)  (OS_TicksToNs_Rte_Counter((x)))/1000000000u
#define OSMAXALLOWEDVALUE_HwCounter  OS_U(4294967295)
#define OSTICKSPERBASE_HwCounter  OS_U(1000)
#define OSMINCYCLE_HwCounter  OS_U(1)
#ifndef OS_ASM
extern void OS_CounterIsr_HwCounter(void);
#endif  /* OS_ASM */
#define OS_NsToTicks_HwCounter(x)  OS_NsToTicks_STM0_0((x))
#define OS_TicksToNs_HwCounter(x)  OS_TicksToNs_STM0_0((x))
#define OS_TICKS2NS_HwCounter(x)   (OS_TicksToNs_STM0_0((x)))
#define OS_TICKS2US_HwCounter(x)   (OS_TicksToNs_STM0_0((x))/1000u)
#define OS_TICKS2MS_HwCounter(x)   (OS_TicksToNs_STM0_0((x))/1000000u)
#define OS_TICKS2SEC_HwCounter(x)  (OS_TicksToNs_STM0_0((x))/1000000000u)

/* Non-Internal Counter Ids */
#define Rte_Counter  0
#define HwCounter  1


/* System Counter Macros */
#define OSMAXALLOWEDVALUE  OSMAXALLOWEDVALUE_HwCounter
#define OSTICKSPERBASE     OSTICKSPERBASE_HwCounter
#define OSMINCYCLE         OSMINCYCLE_HwCounter
#define OSTICKDURATION     OS_TicksToNs_HwCounter(1u)

/*===================================================================
 * Events
 *==================================================================*/
#define SchM_OSShutdownEvent  0x0001u
#define Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8  0x0002u
#define Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A  0x0004u
#define Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131  0x0008u
#define Rte_OSTimingEvent_Rte_Time_Task_TE_59EBA845D7BAF6524BFCB941DB91C3D6  0x0010u
#define Rte_OSTimingEvent_Rte_Time_Task_TE_FB569F32E86BE9DE6593E2D9B5D6CB4E  0x0020u

/*===================================================================
 * Interrupts
 *==================================================================*/
#ifndef OS_ASM
extern void OS_ISR_CAN0_ORED_IRQHandler(void);
#endif  /* OS_ASM */
#define CAN0_ORED_IRQHandler_ISR_CATEGORY  2
#define CAN0_ORED_IRQHandler_ISR_VECTOR    109
#define CAN0_ORED_IRQHandler_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_CAN0_ORED_0_31_MB_IRQHandler(void);
#endif  /* OS_ASM */
#define CAN0_ORED_0_31_MB_IRQHandler_ISR_CATEGORY  2
#define CAN0_ORED_0_31_MB_IRQHandler_ISR_VECTOR    110
#define CAN0_ORED_0_31_MB_IRQHandler_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_CAN0_ORED_32_63_MB_IRQHandler(void);
#endif  /* OS_ASM */
#define CAN0_ORED_32_63_MB_IRQHandler_ISR_CATEGORY  2
#define CAN0_ORED_32_63_MB_IRQHandler_ISR_VECTOR    111
#define CAN0_ORED_32_63_MB_IRQHandler_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_Adc_Sar_0_Isr(void);
#endif  /* OS_ASM */
#define Adc_Sar_0_Isr_ISR_CATEGORY  2
#define Adc_Sar_0_Isr_ISR_VECTOR    180
#define Adc_Sar_0_Isr_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_SIUL2_EXT_IRQ_24_31_ISR(void);
#endif  /* OS_ASM */
#define SIUL2_EXT_IRQ_24_31_ISR_ISR_CATEGORY  2
#define SIUL2_EXT_IRQ_24_31_ISR_ISR_VECTOR    56
#define SIUL2_EXT_IRQ_24_31_ISR_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_SIUL2_EXT_IRQ_0_7_ISR(void);
#endif  /* OS_ASM */
#define SIUL2_EXT_IRQ_0_7_ISR_ISR_CATEGORY  2
#define SIUL2_EXT_IRQ_0_7_ISR_ISR_VECTOR    53
#define SIUL2_EXT_IRQ_0_7_ISR_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_CMP_0_ISR(void);
#endif  /* OS_ASM */
#define CMP_0_ISR_ISR_CATEGORY  2
#define CMP_0_ISR_ISR_VECTOR    183
#define CMP_0_ISR_ISR_LEVEL     7
#ifndef OS_ASM
extern void OS_ISR_EMIOS0_5_IRQ(void);
#endif  /* OS_ASM */
#define EMIOS0_5_IRQ_ISR_CATEGORY  2
#define EMIOS0_5_IRQ_ISR_VECTOR    66
#define EMIOS0_5_IRQ_ISR_LEVEL     7
#define Os_Counter_STM0_0_ISR_CATEGORY  2
#define Os_Counter_STM0_0_ISR_VECTOR    39
#define Os_Counter_STM0_0_ISR_LEVEL     2
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define CAN0_ORED_IRQHandler  0
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define CAN0_ORED_0_31_MB_IRQHandler  1
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define CAN0_ORED_32_63_MB_IRQHandler  2
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define Adc_Sar_0_Isr  3
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define SIUL2_EXT_IRQ_24_31_ISR  4
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define SIUL2_EXT_IRQ_0_7_ISR  5
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define CMP_0_ISR  6
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define EMIOS0_5_IRQ  7
#endif

/*===================================================================
 * Resources
 *==================================================================*/
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define RES_SCHEDULER_0  0
#endif

/*===================================================================
 * Schedule Tables
 *==================================================================*/
#define SchM_DefaultScheduleTable  0
#define Rte_DefaultScheduleTable  1

/*===================================================================
 * Spinlocks
 *==================================================================*/

/*===================================================================
 * Tasks
 *==================================================================*/
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define Rte_Time_Task  0
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define Init_Task  1
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define Rte_Event_Task  2
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define SchMComTask_10ms  3
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define SchMComTask_5ms  4
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define SchMDiagStateTask_20ms  5
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define SchMMemTask_10ms  6
#endif
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define TASK_RTE_ModeSwitchEvent  7
#endif

/*===================================================================
 * Time-stamp timer
 *==================================================================*/
#ifdef __cplusplus
}
#endif
#endif  /* OS_USER_H */
