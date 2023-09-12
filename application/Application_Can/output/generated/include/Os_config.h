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
 * Date         : 9/11/23 5:27 PM           !!!IGNORE-LINE!!!
 */

#ifndef OS_CONFIG_H
#define OS_CONFIG_H
#ifdef __cplusplus
extern "C" {
#endif

/*
 * MISRA-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 8.6 (required)
 * An identifier with external linkage shall have exactly one external definition.
 *
 * Reason:
 * These symbols are defined in assembly language files and hence,
 * are not visible to the MISRA-C analyzer.
 */
#include <Os.h>
#include <Os_tool.h>
#include <CORTEXM/Os_CORTEXM_timer_fs_stm.h>

#define OS_GENERATION_ID_OS_CONF_H  0xe65d6702UL

#define OS_AUTOSAROS_VER            6

#define OS_AUTOSAROS_REV            1

#define OS_AUTOSAROS_CORE_BUILD     20221021

#define OS_AUTOSAROS_ARCH_BUILD     20221021

#ifndef OS_ASM
extern const os_uint32_t OS_os_GenBuildId;
#endif  /* OS_ASM */
#ifndef OS_ASM
extern const os_uint32_t OS_OS_SYSTEM_0GenBuildId;
#endif  /* OS_ASM */

/*===================================================================
 * Advanced Logical Core Interface
 *==================================================================*/
/* Advanced Logical Core Interface preprocessor macros. */
#define OS_ALCI_LOG_TO_PHY_CORE0  0

#define OS_ALCI_PHY_TO_LOG_CORE0  0

/*===================================================================
 * Alarms
 *==================================================================*/
#define OS_NALARMS  1
#define OS_NALARMCALLBACKS  0

#define OS_SchM_DefaultScheduleTable  1
#define OS_Rte_DefaultScheduleTable  2

#define OS_ALARM  OS_ALARM_INIT(    /* AlarmIncrementRteCounter */  \
  /* Application id */                        OS_SYSTEM_0,  \
  /* Application pointer */                   &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                           0x1u,  \
  /* Counter wrapper */                       &OS_WrapIncrementCounter,  \
  /* Not used */                              0,  \
  /* Incremented counter */                   Rte_Counter,  \
  /* Alarm counter */                         HwCounter,  \
  /* dynamic data */                          &OS_alarmDynamic_core0[0]  \
),  \
OS_ALARM_INIT(    /* OS_SchM_DefaultScheduleTable */  \
  /* Application id */                        OS_SYSTEM_0,  \
  /* Application pointer */                   &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                           0x1u,  \
  /* Schedule table wrapper */                &OS_WrapRunSchedule,  \
  /* Not used */                              0,  \
  /* Schedule table */                        SchM_DefaultScheduleTable,  \
  /* Alarm counter */                         HwCounter,  \
  /* dynamic data */                          &OS_alarmDynamic_core0[1]  \
),  \
OS_ALARM_INIT(    /* OS_Rte_DefaultScheduleTable */  \
  /* Application id */                        OS_SYSTEM_0,  \
  /* Application pointer */                   &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                           0x1u,  \
  /* Schedule table wrapper */                &OS_WrapRunSchedule,  \
  /* Not used */                              0,  \
  /* Schedule table */                        Rte_DefaultScheduleTable,  \
  /* Alarm counter */                         HwCounter,  \
  /* dynamic data */                          &OS_alarmDynamic_core0[2]  \
)
#define OS_NALARMS_CORE0  1

/*===================================================================
 * Application modes
 *==================================================================*/
#define OS_NSTARTMODES  1
/* Autostart Tasks */
#define OS_AUTOSTARTTASKS  \
  Init_Task,  \
  OS_NULLTASK

#define OS_STARTMODETASKS  \
  0

/* Autostart Alarms */
#define OS_AUTOSTARTALARMS  \
    {  \
      AlarmIncrementRteCounter,  \
      OS_STARTMETHOD_REL,  \
      OS_NsToTicks_HwCounter(1000000),  \
      OS_NsToTicks_HwCounter(1000000)  \
    },  \
    {  \
      OS_NULLALARM,  \
      OS_STARTMETHOD_REL,  \
      0,  \
      0  \
    }

#define OS_STARTMODEALARMS  \
  0

/* Autostart ScheduleTables */


/*===================================================================
 * Applications
 *==================================================================*/
#define OS_NAPPS        1
#define OS_NAPPSNONPRIV  0
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define OS_SYSTEM_0  0
#endif

#define OS_APPCONFIG  OS_APPCONFIG_INIT(    /* OS_SYSTEM_0 */  \
  /* Build ID */                                    &OS_OS_SYSTEM_0GenBuildId,  \
  /* Startup Hook */                                OS_NULL,  \
  /* Shutdown Hook */                               OS_NULL,  \
  /* Error hook */                                  OS_NULL,  \
  /* start of data/bss */                           OS_NULL,  \
  /* end of data/bss */                             OS_NULL,  \
  /* start of initial data */                       OS_NULL,  \
  /* end of initial data */                         OS_NULL,  \
  /* Permission Bit */                              0x1,  \
  /* Accessing applications */                      0x1,  \
  /* Startup hook stack */                          0,  \
  /* Shutdown hook stack */                         0,  \
  /* Error hook stack */                            0,  \
  /* Restart Task */                                OS_NULLTASK,  \
  /* Flags */                                       (OS_APP_TRUSTED|OS_APP_SYSTEM),  \
  /* Application ID */                              OS_SYSTEM_0,  \
  /* dynamic data */                                &OS_appDynamic_core0[0],  \
  /* CPU core */                                    0,  \
    OS_ARCHAPP_INIT(  \
      /* size of the private data region for MPU */                    OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
)

/* Trusted Functions */
#define OS_NFUNCTIONS  0

#define OS_SHOOKSTACKLEN  0
#define OS_EHOOKSTACKLEN  0
#define OS_NAPPS_CORE0    1

/*===================================================================
 * CPU Core configuration
 *==================================================================*/
#define OS_PROPERTIES_CORE0  (OS_U(0)|OS_COREPROP_USED_BIT)

/*===================================================================
 * Channel Initializers
 *==================================================================*/
#define OS_IOC_ENABLED  0

/*===================================================================
 * Configured Modes
 *==================================================================*/
#define OS_CONFIGMODE        (OS_ECC2|OS_SCHEDMIX|OS_EXTENDED|OS_DBGPROT_FULL)
#define OS_IECMODE           (OS_IEC_AUTOSAR)
#define OS_HOOKSELECTION     (OS_ACTION_PROTECTIONHOOK|OS_ACTION_ERRORHOOK)
#define OS_PERMITTEDCONTEXT  (OS_permittedContextAutosar)
#define OS_INCLUDE_RTE       0

/*===================================================================
 * Counters
 *==================================================================*/
#define OS_NSHAREDHWCOUNTERTIMESTAMP         0
#define OS_SHAREDHWCOUNTERTIMESTAMP_ALARMID  -1
#define OS_SHAREDHWCOUNTERTIMESTAMP_COREID   -1
#define OS_NCOUNTERS    2
#define OS_NSWCOUNTERS  1

#define OS_COUNTER  OS_COUNTER_INIT(    /* Rte_Counter */  \
  /* Application id */       OS_SYSTEM_0,  \
  /* Application pointer */  &OS_appTable[OS_SYSTEM_0],  \
  /* Update function */      OS_NULL,  \
  /* Permissions */          0x1u,  \
  /* Hardware timer */       OS_NULL,  \
  /* Max allowed value */    (os_tick_t)4294967295u,  \
  /* Ticks per base */       (os_tick_t)1u,  \
  /* Min cycle */            (os_tick_t)1u,  \
  /* dynamic data */         &OS_counterDynamic_core0[0]  \
),  \
OS_COUNTER_INIT(    /* HwCounter */  \
  /* Application id */       OS_SYSTEM_0,  \
  /* Application pointer */  &OS_appTable[OS_SYSTEM_0],  \
  /* Update function */      &OS_HwCounterUpdate,  \
  /* Permissions */          0x1u,  \
  /* Hardware timer */       &OS_hwTimer[0],  \
  /* Max allowed value */    (os_tick_t)4294967295u,  \
  /* Ticks per base */       (os_tick_t)1000u,  \
  /* Min cycle */            (os_tick_t)1u,  \
  /* dynamic data */         &OS_counterDynamic_core0[1]  \
)

#define OS_NINTERNALTICKERS  0
/* Number of counters available on cores */
#define OS_NCOUNTERS_CORE0  2

/*===================================================================
 * Events
 *==================================================================*/
#define OS_NEVENTS  18

/*===================================================================
 * Execution timer
 *==================================================================*/
#define OS_EXECUTIONTIMER_INIT     /* Execution timer init */  \
  OS_NULL

/*===================================================================
 * Time-stamp timer
 *==================================================================*/

/*===================================================================
 * Hardware Timers
 *==================================================================*/
#define OS_NHWTIMERS        1
#define OS_NHWTIMERS_CORE0  1

#define OS_HWTIMER {    /* STM0_0 */  \
  /* Driver table */                     &OS_timerSTMdriver,  \
  /* HwTimer Last Value */               &OS_hwtLastValue_core0[0],  \
  /* Max delta */                        3221225472u,  \
  /* Default delta if max exceeded */    2147483648u,  \
  /* Wrap mask */                        4294967295u,  \
  /* Driver number */                    0u,  \
  /* Driver channel */                   0u,  \
  /* core */                             0u,  \
}

/*===================================================================
 * Hook Functions
 *==================================================================*/
#define OS_ERRORHOOK       &ErrorHook
#define OS_SHUTDOWNHOOK    &ShutdownHook

/*===================================================================
 * Interrupts
 *==================================================================*/

#define OS_NINTERRUPTS         5
#define OS_NCAT1_INTERRUPTS    0
#define OS_NCAT2_INTERRUPTS    5
#define OS_NCATK_INTERRUPTS    0
#define OS_NCAT2K_INTERRUPTS   0
#define OS_NISRSEXECTIMELIMIT  0
#define OS_NISRSINTLOCKLIMIT   0
#define OS_NISRSRESLOCKLIMIT   0
#define OS_NISRACCOUNTING      0
#define OS_CAT1LOCK            2
#define OS_CAT2LOCK            2
#define OS_KERNLOCK            2
#define OS_XCOREUNLOCK         OS_KERNLOCK
#define OS_ENABLEALLLOCK       15

/* Internal Interrupt Ids */
#if OS_KERNEL_TYPE != OS_MICROKERNEL
#define Os_Counter_STM0_0  4
#endif

/* Isr Config Struct Init Macros. */
#define OS_ISRCONFIG  OS_ISRCONFIG_INIT(    /* CAN0_ORED_IRQHandler */  \
  /* Application */                       &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                       0x1u,  \
  /* Accounting structure */              OS_NULL,  \
  /* start of data/bss */                 OS_NULL,  \
  /* end of data/bss */                   OS_NULL,  \
  /* start of initial data */             OS_NULL,  \
  /* end of initial data */               OS_NULL,  \
  /* Interrupt entry */                   &OS_ISR_CAN0_ORED_IRQHandler,  \
  /* Execution budget */                  0u,  \
  /* Os interrupt lock budget */          0u,  \
  /* All interrupt lock budget */         0u,  \
  /* Resource lock budget */              OS_NULL,  \
  /* Stack size */                        1024u,  \
  /* Rate monitor */                      OS_NULLRATEMONITOR,  \
  /* Isr id */                            CAN0_ORED_IRQHandler,  \
  /* dynamic data */                      &OS_isrDynamic_core0[0],  \
  /* Flags */                             (OS_ISRF_CAT2|OS_ISRF_ENABLE),  \
    OS_ARCHISR_INIT(  \
      /* ISR source */                                                 109,  \
      /* ISR priority */                                               7,  \
      /* Target core */                                                OS_CORTEXM_INT_TARGET_DEFAULT,  \
      /* size of the private data region for MPU */                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the ISR stack for MPU */                              OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_ISRCONFIG_INIT(    /* CAN0_ORED_0_31_MB_IRQHandler */  \
  /* Application */                       &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                       0x1u,  \
  /* Accounting structure */              OS_NULL,  \
  /* start of data/bss */                 OS_NULL,  \
  /* end of data/bss */                   OS_NULL,  \
  /* start of initial data */             OS_NULL,  \
  /* end of initial data */               OS_NULL,  \
  /* Interrupt entry */                   &OS_ISR_CAN0_ORED_0_31_MB_IRQHandler,  \
  /* Execution budget */                  0u,  \
  /* Os interrupt lock budget */          0u,  \
  /* All interrupt lock budget */         0u,  \
  /* Resource lock budget */              OS_NULL,  \
  /* Stack size */                        1024u,  \
  /* Rate monitor */                      OS_NULLRATEMONITOR,  \
  /* Isr id */                            CAN0_ORED_0_31_MB_IRQHandler,  \
  /* dynamic data */                      &OS_isrDynamic_core0[1],  \
  /* Flags */                             (OS_ISRF_CAT2|OS_ISRF_ENABLE),  \
    OS_ARCHISR_INIT(  \
      /* ISR source */                                                 110,  \
      /* ISR priority */                                               7,  \
      /* Target core */                                                OS_CORTEXM_INT_TARGET_DEFAULT,  \
      /* size of the private data region for MPU */                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the ISR stack for MPU */                              OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_ISRCONFIG_INIT(    /* CAN0_ORED_32_63_MB_IRQHandler */  \
  /* Application */                       &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                       0x1u,  \
  /* Accounting structure */              OS_NULL,  \
  /* start of data/bss */                 OS_NULL,  \
  /* end of data/bss */                   OS_NULL,  \
  /* start of initial data */             OS_NULL,  \
  /* end of initial data */               OS_NULL,  \
  /* Interrupt entry */                   &OS_ISR_CAN0_ORED_32_63_MB_IRQHandler,  \
  /* Execution budget */                  0u,  \
  /* Os interrupt lock budget */          0u,  \
  /* All interrupt lock budget */         0u,  \
  /* Resource lock budget */              OS_NULL,  \
  /* Stack size */                        1024u,  \
  /* Rate monitor */                      OS_NULLRATEMONITOR,  \
  /* Isr id */                            CAN0_ORED_32_63_MB_IRQHandler,  \
  /* dynamic data */                      &OS_isrDynamic_core0[2],  \
  /* Flags */                             (OS_ISRF_CAT2|OS_ISRF_ENABLE),  \
    OS_ARCHISR_INIT(  \
      /* ISR source */                                                 111,  \
      /* ISR priority */                                               7,  \
      /* Target core */                                                OS_CORTEXM_INT_TARGET_DEFAULT,  \
      /* size of the private data region for MPU */                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the ISR stack for MPU */                              OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_ISRCONFIG_INIT(    /* Adc_Sar_0_Isr */  \
  /* Application */                       &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                       0x1u,  \
  /* Accounting structure */              OS_NULL,  \
  /* start of data/bss */                 OS_NULL,  \
  /* end of data/bss */                   OS_NULL,  \
  /* start of initial data */             OS_NULL,  \
  /* end of initial data */               OS_NULL,  \
  /* Interrupt entry */                   &OS_ISR_Adc_Sar_0_Isr,  \
  /* Execution budget */                  0u,  \
  /* Os interrupt lock budget */          0u,  \
  /* All interrupt lock budget */         0u,  \
  /* Resource lock budget */              OS_NULL,  \
  /* Stack size */                        1024u,  \
  /* Rate monitor */                      OS_NULLRATEMONITOR,  \
  /* Isr id */                            Adc_Sar_0_Isr,  \
  /* dynamic data */                      &OS_isrDynamic_core0[3],  \
  /* Flags */                             (OS_ISRF_CAT2|OS_ISRF_ENABLE),  \
    OS_ARCHISR_INIT(  \
      /* ISR source */                                                 180,  \
      /* ISR priority */                                               7,  \
      /* Target core */                                                OS_CORTEXM_INT_TARGET_DEFAULT,  \
      /* size of the private data region for MPU */                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the ISR stack for MPU */                              OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_ISRCONFIG_INIT(    /* Os_Counter_STM0_0 */  \
  /* Application */                       &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                       0x1u,  \
  /* Accounting structure */              OS_NULL,  \
  /* start of data/bss */                 OS_NULL,  \
  /* end of data/bss */                   OS_NULL,  \
  /* start of initial data */             OS_NULL,  \
  /* end of initial data */               OS_NULL,  \
  /* Interrupt entry */                   &OS_CounterIsr_HwCounter,  \
  /* Execution budget */                  0u,  \
  /* Os interrupt lock budget */          0u,  \
  /* All interrupt lock budget */         0u,  \
  /* Resource lock budget */              OS_NULL,  \
  /* Stack size */                        512u,  \
  /* Rate monitor */                      OS_NULLRATEMONITOR,  \
  /* Isr id */                            Os_Counter_STM0_0,  \
  /* dynamic data */                      &OS_isrDynamic_core0[4],  \
  /* Flags */                             (OS_ISRF_CAT2|OS_ISRF_ENABLE),  \
    OS_ARCHISR_INIT(  \
      /* ISR source */                                                 39,  \
      /* ISR priority */                                               2,  \
      /* Target core */                                                OS_CORTEXM_INT_TARGET_DEFAULT,  \
      /* size of the private data region for MPU */                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the ISR stack for MPU */                              OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
)

/* Stack Macros */
#define OS_ISTACKBASE_0          OS_kernStack0
#define OS_ISTACKLEN_0           OS_U( 3072 )
#define OS_NINTERRUPTS_CORE0     5
#define OS_NISRACCOUNTING_CORE0  0

/*===================================================================
 * Kernel data
 *==================================================================*/
#define OS_KERNELDATA_INIT_CORE0  /* kernel data core 0 */  \
  /* taskQueueHead */            OS_NULL,  \
  /* taskCurrent */              OS_NULL,  \
  /* iSpInitial */               OS_GetInitialStackPointer( OS_ISTACKBASE_0, OS_ISTACKLEN_0 ),  \
  /* hookApp */                  OS_NULL,  \
  /* inKernel */                 0,  \
  /* idleMode */                 IDLE_NO_HALT,  \
  /* inFunction */               0,  \
  /* tfCalledFrom */             0,  \
  /* iStackBase */               OS_ISTACKBASE_0,  \
  /* iStackLen */                OS_ISTACKLEN_0,  \
  /* isrCurrent */               OS_NULLISR,  \
  /* isrLastLock */              OS_NULLOBJECT,  \
  /* oldSuspendOs */             0,  \
  /* oldSuspendAll */            0,  \
  /* nestSuspendOs */            0,  \
  /* nestSuspendAll */           0,  \
  /* errorStatus */              OS_ERRORSTATUS_INIT,  \
  /* sHookContext */             OS_HOOKCONTEXT_INIT,  \
  /* eHookContext */             OS_HOOKCONTEXT_INIT,  \
  /* errorHookNesting */         0,  \
  /* accounting */               OS_ACCOUNTINGS_INIT,  \
  /* appsStarted */              0,  \
  /* panicCode */                OS_PANIC_NONE

/*===================================================================
 * Optimization
 *==================================================================*/
#define OS_CAT1_DIRECTCALL  0

/*===================================================================
 * Rate Monitor
 *==================================================================*/
#define OS_NRATEMONS  0
#define OS_NRATEMONS_CORE0  0

#define OS_NRATETIMERS    OS_NRATETIMERS_CORE0
#define OS_RATEMONCONFIG  OS_RATEMONCONFIG_CORE0

/*===================================================================
 * Resource Lock Timing
 *==================================================================*/
#define OS_NRESLOCKTIMES  0

/*===================================================================
 * Resources
 *==================================================================*/
#define OS_NRESOURCES  4


#define OS_RESOURCES  OS_RESOURCES_INIT(    /* RES_SCHEDULER_0 */  \
  /* Application */          &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */          0x1u,  \
  /* Priority */             6,  \
  /* dynamic data */         &OS_resourceDynamic_core0[0]  \
),  \
OS_RESOURCES_INIT(    /* Rte_Res_0 */  \
  /* Application */          &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */          0x1u,  \
  /* Priority */             2,  \
  /* dynamic data */         &OS_resourceDynamic_core0[1]  \
),  \
OS_RESOURCES_INIT(    /* Rte_Res_1 */  \
  /* Application */          &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */          0x1u,  \
  /* Priority */             2,  \
  /* dynamic data */         &OS_resourceDynamic_core0[2]  \
),  \
OS_RESOURCES_INIT(    /* Rte_Res_2 */  \
  /* Application */          &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */          0x1u,  \
  /* Priority */             2,  \
  /* dynamic data */         &OS_resourceDynamic_core0[3]  \
)
/* Number of Non-Internal Used resources on cores */
#define OS_NRESOURCES_CORE0  4

/*===================================================================
 * Schedule Tables
 *==================================================================*/
#define OS_NSCHEDULES      2
#define OS_NSCHEDULESSYNC  0

#define OS_STCONFIG  OS_STCONFIG_INIT(    /* SchM_DefaultScheduleTable */  \
  /* Application id */                OS_SYSTEM_0,  \
  /* Application pointer */           &OS_appTable[OS_SYSTEM_0], \
  /* Permissions */                   0x1u,  \
  /* Schedule table entries */        &OS_stEntries[0],  \
  /* Duration */                      40000000,  \
  /* Cut off */                       0,  \
  /* Precision */                     0,  \
  /* Alarm ID */                      1,  \
  /* Number of expiry points */       650,  \
  /* Flags */                         (OS_ST_REPEATING),  \
  /* dynamic data */                  &OS_scheduleDynamic_core0[0]  \
),  \
OS_STCONFIG_INIT(    /* Rte_DefaultScheduleTable */  \
  /* Application id */                OS_SYSTEM_0,  \
  /* Application pointer */           &OS_appTable[OS_SYSTEM_0], \
  /* Permissions */                   0x1u,  \
  /* Schedule table entries */        &OS_stEntries[650],  \
  /* Duration */                      40000000,  \
  /* Cut off */                       0,  \
  /* Precision */                     0,  \
  /* Alarm ID */                      2,  \
  /* Number of expiry points */       100,  \
  /* Flags */                         (OS_ST_REPEATING),  \
  /* dynamic data */                  &OS_scheduleDynamic_core0[1]  \
)

/* ScheduleTables expiry points */
#define OS_NSTENTRIES  750
#define OS_STENTRIES  \
  /* EP_0 */  \
  {  \
    /* Offset */                      0,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  /* EP_0 */  \
  {  \
    /* Offset */                      0,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_0 */  \
  {  \
    /* Offset */                      0,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_0 */  \
  {  \
    /* Offset */                      0,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_0 */  \
    /* Offset */                      0,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_147E97E564FE829F3F8D2217BDD620DE | Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_5000 */  \
  {  \
    /* Offset */                      200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_5000 */  \
    /* Offset */                      200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_10000 */  \
  {  \
    /* Offset */                      400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_10000 */  \
  {  \
    /* Offset */                      400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_10000 */  \
  {  \
    /* Offset */                      400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_10000 */  \
    /* Offset */                      400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_15000 */  \
  {  \
    /* Offset */                      600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_15000 */  \
    /* Offset */                      600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_20000 */  \
  {  \
    /* Offset */                      800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_20000 */  \
  {  \
    /* Offset */                      800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_20000 */  \
  {  \
    /* Offset */                      800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_20000 */  \
  {  \
    /* Offset */                      800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_20000 */  \
    /* Offset */                      800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_25000 */  \
  {  \
    /* Offset */                      1000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_25000 */  \
    /* Offset */                      1000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_30000 */  \
  {  \
    /* Offset */                      1200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_30000 */  \
  {  \
    /* Offset */                      1200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_30000 */  \
  {  \
    /* Offset */                      1200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_30000 */  \
    /* Offset */                      1200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_35000 */  \
  {  \
    /* Offset */                      1400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_35000 */  \
    /* Offset */                      1400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_40000 */  \
  {  \
    /* Offset */                      1600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_40000 */  \
  {  \
    /* Offset */                      1600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_40000 */  \
  {  \
    /* Offset */                      1600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_40000 */  \
  {  \
    /* Offset */                      1600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_40000 */  \
    /* Offset */                      1600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_45000 */  \
  {  \
    /* Offset */                      1800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_45000 */  \
    /* Offset */                      1800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_50000 */  \
  {  \
    /* Offset */                      2000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_50000 */  \
  {  \
    /* Offset */                      2000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_50000 */  \
  {  \
    /* Offset */                      2000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_50000 */  \
    /* Offset */                      2000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_55000 */  \
  {  \
    /* Offset */                      2200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_55000 */  \
    /* Offset */                      2200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_60000 */  \
  {  \
    /* Offset */                      2400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_60000 */  \
  {  \
    /* Offset */                      2400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_60000 */  \
  {  \
    /* Offset */                      2400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_60000 */  \
  {  \
    /* Offset */                      2400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_60000 */  \
    /* Offset */                      2400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_65000 */  \
  {  \
    /* Offset */                      2600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_65000 */  \
    /* Offset */                      2600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_70000 */  \
  {  \
    /* Offset */                      2800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_70000 */  \
  {  \
    /* Offset */                      2800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_70000 */  \
  {  \
    /* Offset */                      2800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_70000 */  \
    /* Offset */                      2800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_75000 */  \
  {  \
    /* Offset */                      3000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_75000 */  \
    /* Offset */                      3000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_80000 */  \
  {  \
    /* Offset */                      3200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_80000 */  \
  {  \
    /* Offset */                      3200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_80000 */  \
  {  \
    /* Offset */                      3200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_80000 */  \
  {  \
    /* Offset */                      3200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_80000 */  \
    /* Offset */                      3200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_85000 */  \
  {  \
    /* Offset */                      3400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_85000 */  \
    /* Offset */                      3400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_90000 */  \
  {  \
    /* Offset */                      3600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_90000 */  \
  {  \
    /* Offset */                      3600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_90000 */  \
  {  \
    /* Offset */                      3600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_90000 */  \
    /* Offset */                      3600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_95000 */  \
  {  \
    /* Offset */                      3800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_95000 */  \
    /* Offset */                      3800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_100000 */  \
  {  \
    /* Offset */                      4000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_100000 */  \
  {  \
    /* Offset */                      4000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_100000 */  \
  {  \
    /* Offset */                      4000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_100000 */  \
  {  \
    /* Offset */                      4000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_100000 */  \
    /* Offset */                      4000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_105000 */  \
  {  \
    /* Offset */                      4200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_105000 */  \
    /* Offset */                      4200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_110000 */  \
  {  \
    /* Offset */                      4400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_110000 */  \
  {  \
    /* Offset */                      4400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_110000 */  \
  {  \
    /* Offset */                      4400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_110000 */  \
    /* Offset */                      4400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_115000 */  \
  {  \
    /* Offset */                      4600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_115000 */  \
    /* Offset */                      4600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_120000 */  \
  {  \
    /* Offset */                      4800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_120000 */  \
  {  \
    /* Offset */                      4800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_120000 */  \
  {  \
    /* Offset */                      4800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_120000 */  \
  {  \
    /* Offset */                      4800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_120000 */  \
    /* Offset */                      4800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_125000 */  \
  {  \
    /* Offset */                      5000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_125000 */  \
    /* Offset */                      5000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_130000 */  \
  {  \
    /* Offset */                      5200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_130000 */  \
  {  \
    /* Offset */                      5200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_130000 */  \
  {  \
    /* Offset */                      5200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_130000 */  \
    /* Offset */                      5200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_135000 */  \
  {  \
    /* Offset */                      5400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_135000 */  \
    /* Offset */                      5400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_140000 */  \
  {  \
    /* Offset */                      5600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_140000 */  \
  {  \
    /* Offset */                      5600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_140000 */  \
  {  \
    /* Offset */                      5600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_140000 */  \
  {  \
    /* Offset */                      5600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_140000 */  \
    /* Offset */                      5600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_145000 */  \
  {  \
    /* Offset */                      5800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_145000 */  \
    /* Offset */                      5800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_150000 */  \
  {  \
    /* Offset */                      6000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_150000 */  \
  {  \
    /* Offset */                      6000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_150000 */  \
  {  \
    /* Offset */                      6000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_150000 */  \
    /* Offset */                      6000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_155000 */  \
  {  \
    /* Offset */                      6200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_155000 */  \
    /* Offset */                      6200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_160000 */  \
  {  \
    /* Offset */                      6400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_160000 */  \
  {  \
    /* Offset */                      6400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_160000 */  \
  {  \
    /* Offset */                      6400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_160000 */  \
  {  \
    /* Offset */                      6400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_160000 */  \
    /* Offset */                      6400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_165000 */  \
  {  \
    /* Offset */                      6600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_165000 */  \
    /* Offset */                      6600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_170000 */  \
  {  \
    /* Offset */                      6800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_170000 */  \
  {  \
    /* Offset */                      6800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_170000 */  \
  {  \
    /* Offset */                      6800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_170000 */  \
    /* Offset */                      6800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_175000 */  \
  {  \
    /* Offset */                      7000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_175000 */  \
    /* Offset */                      7000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_180000 */  \
  {  \
    /* Offset */                      7200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_180000 */  \
  {  \
    /* Offset */                      7200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_180000 */  \
  {  \
    /* Offset */                      7200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_180000 */  \
  {  \
    /* Offset */                      7200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_180000 */  \
    /* Offset */                      7200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_185000 */  \
  {  \
    /* Offset */                      7400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_185000 */  \
    /* Offset */                      7400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_190000 */  \
  {  \
    /* Offset */                      7600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_190000 */  \
  {  \
    /* Offset */                      7600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_190000 */  \
  {  \
    /* Offset */                      7600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_190000 */  \
    /* Offset */                      7600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_195000 */  \
  {  \
    /* Offset */                      7800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_195000 */  \
    /* Offset */                      7800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_200000 */  \
  {  \
    /* Offset */                      8000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_200000 */  \
  {  \
    /* Offset */                      8000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_200000 */  \
  {  \
    /* Offset */                      8000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_200000 */  \
  {  \
    /* Offset */                      8000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_200000 */  \
    /* Offset */                      8000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_205000 */  \
  {  \
    /* Offset */                      8200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_205000 */  \
    /* Offset */                      8200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_210000 */  \
  {  \
    /* Offset */                      8400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_210000 */  \
  {  \
    /* Offset */                      8400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_210000 */  \
  {  \
    /* Offset */                      8400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_210000 */  \
    /* Offset */                      8400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_215000 */  \
  {  \
    /* Offset */                      8600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_215000 */  \
    /* Offset */                      8600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_220000 */  \
  {  \
    /* Offset */                      8800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_220000 */  \
  {  \
    /* Offset */                      8800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_220000 */  \
  {  \
    /* Offset */                      8800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_220000 */  \
  {  \
    /* Offset */                      8800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_220000 */  \
    /* Offset */                      8800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_225000 */  \
  {  \
    /* Offset */                      9000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_225000 */  \
    /* Offset */                      9000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_230000 */  \
  {  \
    /* Offset */                      9200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_230000 */  \
  {  \
    /* Offset */                      9200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_230000 */  \
  {  \
    /* Offset */                      9200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_230000 */  \
    /* Offset */                      9200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_235000 */  \
  {  \
    /* Offset */                      9400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_235000 */  \
    /* Offset */                      9400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_240000 */  \
  {  \
    /* Offset */                      9600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_240000 */  \
  {  \
    /* Offset */                      9600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_240000 */  \
  {  \
    /* Offset */                      9600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_240000 */  \
  {  \
    /* Offset */                      9600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_240000 */  \
    /* Offset */                      9600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_245000 */  \
  {  \
    /* Offset */                      9800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_245000 */  \
    /* Offset */                      9800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_250000 */  \
  {  \
    /* Offset */                      10000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_250000 */  \
  {  \
    /* Offset */                      10000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_250000 */  \
  {  \
    /* Offset */                      10000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_250000 */  \
    /* Offset */                      10000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_255000 */  \
  {  \
    /* Offset */                      10200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_255000 */  \
    /* Offset */                      10200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_260000 */  \
  {  \
    /* Offset */                      10400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_260000 */  \
  {  \
    /* Offset */                      10400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_260000 */  \
  {  \
    /* Offset */                      10400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_260000 */  \
  {  \
    /* Offset */                      10400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_260000 */  \
    /* Offset */                      10400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_265000 */  \
  {  \
    /* Offset */                      10600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_265000 */  \
    /* Offset */                      10600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_270000 */  \
  {  \
    /* Offset */                      10800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_270000 */  \
  {  \
    /* Offset */                      10800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_270000 */  \
  {  \
    /* Offset */                      10800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_270000 */  \
    /* Offset */                      10800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_275000 */  \
  {  \
    /* Offset */                      11000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_275000 */  \
    /* Offset */                      11000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_280000 */  \
  {  \
    /* Offset */                      11200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_280000 */  \
  {  \
    /* Offset */                      11200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_280000 */  \
  {  \
    /* Offset */                      11200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_280000 */  \
  {  \
    /* Offset */                      11200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_280000 */  \
    /* Offset */                      11200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_285000 */  \
  {  \
    /* Offset */                      11400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_285000 */  \
    /* Offset */                      11400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_290000 */  \
  {  \
    /* Offset */                      11600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_290000 */  \
  {  \
    /* Offset */                      11600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_290000 */  \
  {  \
    /* Offset */                      11600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_290000 */  \
    /* Offset */                      11600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_295000 */  \
  {  \
    /* Offset */                      11800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_295000 */  \
    /* Offset */                      11800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_300000 */  \
  {  \
    /* Offset */                      12000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_300000 */  \
  {  \
    /* Offset */                      12000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_300000 */  \
  {  \
    /* Offset */                      12000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_300000 */  \
  {  \
    /* Offset */                      12000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_300000 */  \
    /* Offset */                      12000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_305000 */  \
  {  \
    /* Offset */                      12200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_305000 */  \
    /* Offset */                      12200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_310000 */  \
  {  \
    /* Offset */                      12400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_310000 */  \
  {  \
    /* Offset */                      12400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_310000 */  \
  {  \
    /* Offset */                      12400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_310000 */  \
    /* Offset */                      12400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_315000 */  \
  {  \
    /* Offset */                      12600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_315000 */  \
    /* Offset */                      12600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_320000 */  \
  {  \
    /* Offset */                      12800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_320000 */  \
  {  \
    /* Offset */                      12800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_320000 */  \
  {  \
    /* Offset */                      12800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_320000 */  \
  {  \
    /* Offset */                      12800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_320000 */  \
    /* Offset */                      12800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_325000 */  \
  {  \
    /* Offset */                      13000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_325000 */  \
    /* Offset */                      13000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_330000 */  \
  {  \
    /* Offset */                      13200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_330000 */  \
  {  \
    /* Offset */                      13200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_330000 */  \
  {  \
    /* Offset */                      13200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_330000 */  \
    /* Offset */                      13200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_335000 */  \
  {  \
    /* Offset */                      13400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_335000 */  \
    /* Offset */                      13400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_340000 */  \
  {  \
    /* Offset */                      13600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_340000 */  \
  {  \
    /* Offset */                      13600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_340000 */  \
  {  \
    /* Offset */                      13600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_340000 */  \
  {  \
    /* Offset */                      13600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_340000 */  \
    /* Offset */                      13600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_345000 */  \
  {  \
    /* Offset */                      13800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_345000 */  \
    /* Offset */                      13800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_350000 */  \
  {  \
    /* Offset */                      14000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_350000 */  \
  {  \
    /* Offset */                      14000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_350000 */  \
  {  \
    /* Offset */                      14000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_350000 */  \
    /* Offset */                      14000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_355000 */  \
  {  \
    /* Offset */                      14200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_355000 */  \
    /* Offset */                      14200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_360000 */  \
  {  \
    /* Offset */                      14400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_360000 */  \
  {  \
    /* Offset */                      14400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_360000 */  \
  {  \
    /* Offset */                      14400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_360000 */  \
  {  \
    /* Offset */                      14400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_360000 */  \
    /* Offset */                      14400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_365000 */  \
  {  \
    /* Offset */                      14600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_365000 */  \
    /* Offset */                      14600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_370000 */  \
  {  \
    /* Offset */                      14800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_370000 */  \
  {  \
    /* Offset */                      14800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_370000 */  \
  {  \
    /* Offset */                      14800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_370000 */  \
    /* Offset */                      14800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_375000 */  \
  {  \
    /* Offset */                      15000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_375000 */  \
    /* Offset */                      15000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_380000 */  \
  {  \
    /* Offset */                      15200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_380000 */  \
  {  \
    /* Offset */                      15200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_380000 */  \
  {  \
    /* Offset */                      15200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_380000 */  \
  {  \
    /* Offset */                      15200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_380000 */  \
    /* Offset */                      15200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_385000 */  \
  {  \
    /* Offset */                      15400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_385000 */  \
    /* Offset */                      15400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_390000 */  \
  {  \
    /* Offset */                      15600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_390000 */  \
  {  \
    /* Offset */                      15600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_390000 */  \
  {  \
    /* Offset */                      15600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_390000 */  \
    /* Offset */                      15600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_395000 */  \
  {  \
    /* Offset */                      15800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_395000 */  \
    /* Offset */                      15800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_400000 */  \
  {  \
    /* Offset */                      16000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_400000 */  \
  {  \
    /* Offset */                      16000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_400000 */  \
  {  \
    /* Offset */                      16000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_400000 */  \
  {  \
    /* Offset */                      16000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_400000 */  \
    /* Offset */                      16000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_405000 */  \
  {  \
    /* Offset */                      16200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_405000 */  \
    /* Offset */                      16200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_410000 */  \
  {  \
    /* Offset */                      16400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_410000 */  \
  {  \
    /* Offset */                      16400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_410000 */  \
  {  \
    /* Offset */                      16400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_410000 */  \
    /* Offset */                      16400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_415000 */  \
  {  \
    /* Offset */                      16600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_415000 */  \
    /* Offset */                      16600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_420000 */  \
  {  \
    /* Offset */                      16800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_420000 */  \
  {  \
    /* Offset */                      16800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_420000 */  \
  {  \
    /* Offset */                      16800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_420000 */  \
  {  \
    /* Offset */                      16800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_420000 */  \
    /* Offset */                      16800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_425000 */  \
  {  \
    /* Offset */                      17000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_425000 */  \
    /* Offset */                      17000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_430000 */  \
  {  \
    /* Offset */                      17200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_430000 */  \
  {  \
    /* Offset */                      17200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_430000 */  \
  {  \
    /* Offset */                      17200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_430000 */  \
    /* Offset */                      17200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_435000 */  \
  {  \
    /* Offset */                      17400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_435000 */  \
    /* Offset */                      17400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_440000 */  \
  {  \
    /* Offset */                      17600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_440000 */  \
  {  \
    /* Offset */                      17600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_440000 */  \
  {  \
    /* Offset */                      17600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_440000 */  \
  {  \
    /* Offset */                      17600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_440000 */  \
    /* Offset */                      17600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_445000 */  \
  {  \
    /* Offset */                      17800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_445000 */  \
    /* Offset */                      17800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_450000 */  \
  {  \
    /* Offset */                      18000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_450000 */  \
  {  \
    /* Offset */                      18000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_450000 */  \
  {  \
    /* Offset */                      18000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_450000 */  \
    /* Offset */                      18000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_455000 */  \
  {  \
    /* Offset */                      18200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_455000 */  \
    /* Offset */                      18200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_460000 */  \
  {  \
    /* Offset */                      18400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_460000 */  \
  {  \
    /* Offset */                      18400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_460000 */  \
  {  \
    /* Offset */                      18400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_460000 */  \
  {  \
    /* Offset */                      18400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_460000 */  \
    /* Offset */                      18400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_465000 */  \
  {  \
    /* Offset */                      18600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_465000 */  \
    /* Offset */                      18600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_470000 */  \
  {  \
    /* Offset */                      18800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_470000 */  \
  {  \
    /* Offset */                      18800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_470000 */  \
  {  \
    /* Offset */                      18800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_470000 */  \
    /* Offset */                      18800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_475000 */  \
  {  \
    /* Offset */                      19000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_475000 */  \
    /* Offset */                      19000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_480000 */  \
  {  \
    /* Offset */                      19200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_480000 */  \
  {  \
    /* Offset */                      19200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_480000 */  \
  {  \
    /* Offset */                      19200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_480000 */  \
  {  \
    /* Offset */                      19200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_480000 */  \
    /* Offset */                      19200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_485000 */  \
  {  \
    /* Offset */                      19400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_485000 */  \
    /* Offset */                      19400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_490000 */  \
  {  \
    /* Offset */                      19600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_490000 */  \
  {  \
    /* Offset */                      19600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_490000 */  \
  {  \
    /* Offset */                      19600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_490000 */  \
    /* Offset */                      19600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_495000 */  \
  {  \
    /* Offset */                      19800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_495000 */  \
    /* Offset */                      19800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_500000 */  \
  {  \
    /* Offset */                      20000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_500000 */  \
  {  \
    /* Offset */                      20000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_500000 */  \
  {  \
    /* Offset */                      20000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_500000 */  \
  {  \
    /* Offset */                      20000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_500000 */  \
    /* Offset */                      20000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_505000 */  \
  {  \
    /* Offset */                      20200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_505000 */  \
    /* Offset */                      20200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_510000 */  \
  {  \
    /* Offset */                      20400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_510000 */  \
  {  \
    /* Offset */                      20400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_510000 */  \
  {  \
    /* Offset */                      20400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_510000 */  \
    /* Offset */                      20400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_515000 */  \
  {  \
    /* Offset */                      20600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_515000 */  \
    /* Offset */                      20600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_520000 */  \
  {  \
    /* Offset */                      20800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_520000 */  \
  {  \
    /* Offset */                      20800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_520000 */  \
  {  \
    /* Offset */                      20800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_520000 */  \
  {  \
    /* Offset */                      20800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_520000 */  \
    /* Offset */                      20800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_525000 */  \
  {  \
    /* Offset */                      21000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_525000 */  \
    /* Offset */                      21000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_530000 */  \
  {  \
    /* Offset */                      21200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_530000 */  \
  {  \
    /* Offset */                      21200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_530000 */  \
  {  \
    /* Offset */                      21200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_530000 */  \
    /* Offset */                      21200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_535000 */  \
  {  \
    /* Offset */                      21400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_535000 */  \
    /* Offset */                      21400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_540000 */  \
  {  \
    /* Offset */                      21600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_540000 */  \
  {  \
    /* Offset */                      21600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_540000 */  \
  {  \
    /* Offset */                      21600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_540000 */  \
  {  \
    /* Offset */                      21600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_540000 */  \
    /* Offset */                      21600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_545000 */  \
  {  \
    /* Offset */                      21800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_545000 */  \
    /* Offset */                      21800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_550000 */  \
  {  \
    /* Offset */                      22000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_550000 */  \
  {  \
    /* Offset */                      22000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_550000 */  \
  {  \
    /* Offset */                      22000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_550000 */  \
    /* Offset */                      22000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_555000 */  \
  {  \
    /* Offset */                      22200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_555000 */  \
    /* Offset */                      22200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_560000 */  \
  {  \
    /* Offset */                      22400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_560000 */  \
  {  \
    /* Offset */                      22400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_560000 */  \
  {  \
    /* Offset */                      22400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_560000 */  \
  {  \
    /* Offset */                      22400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_560000 */  \
    /* Offset */                      22400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_565000 */  \
  {  \
    /* Offset */                      22600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_565000 */  \
    /* Offset */                      22600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_570000 */  \
  {  \
    /* Offset */                      22800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_570000 */  \
  {  \
    /* Offset */                      22800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_570000 */  \
  {  \
    /* Offset */                      22800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_570000 */  \
    /* Offset */                      22800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_575000 */  \
  {  \
    /* Offset */                      23000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_575000 */  \
    /* Offset */                      23000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_580000 */  \
  {  \
    /* Offset */                      23200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_580000 */  \
  {  \
    /* Offset */                      23200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_580000 */  \
  {  \
    /* Offset */                      23200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_580000 */  \
  {  \
    /* Offset */                      23200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_580000 */  \
    /* Offset */                      23200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_585000 */  \
  {  \
    /* Offset */                      23400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_585000 */  \
    /* Offset */                      23400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_590000 */  \
  {  \
    /* Offset */                      23600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_590000 */  \
  {  \
    /* Offset */                      23600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_590000 */  \
  {  \
    /* Offset */                      23600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_590000 */  \
    /* Offset */                      23600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_595000 */  \
  {  \
    /* Offset */                      23800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_595000 */  \
    /* Offset */                      23800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_600000 */  \
  {  \
    /* Offset */                      24000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_600000 */  \
  {  \
    /* Offset */                      24000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_600000 */  \
  {  \
    /* Offset */                      24000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_600000 */  \
  {  \
    /* Offset */                      24000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_600000 */  \
    /* Offset */                      24000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_605000 */  \
  {  \
    /* Offset */                      24200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_605000 */  \
    /* Offset */                      24200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_610000 */  \
  {  \
    /* Offset */                      24400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_610000 */  \
  {  \
    /* Offset */                      24400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_610000 */  \
  {  \
    /* Offset */                      24400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_610000 */  \
    /* Offset */                      24400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_615000 */  \
  {  \
    /* Offset */                      24600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_615000 */  \
    /* Offset */                      24600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_620000 */  \
  {  \
    /* Offset */                      24800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_620000 */  \
  {  \
    /* Offset */                      24800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_620000 */  \
  {  \
    /* Offset */                      24800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_620000 */  \
  {  \
    /* Offset */                      24800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_620000 */  \
    /* Offset */                      24800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_625000 */  \
  {  \
    /* Offset */                      25000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_625000 */  \
    /* Offset */                      25000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_630000 */  \
  {  \
    /* Offset */                      25200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_630000 */  \
  {  \
    /* Offset */                      25200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_630000 */  \
  {  \
    /* Offset */                      25200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_630000 */  \
    /* Offset */                      25200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_635000 */  \
  {  \
    /* Offset */                      25400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_635000 */  \
    /* Offset */                      25400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_640000 */  \
  {  \
    /* Offset */                      25600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_640000 */  \
  {  \
    /* Offset */                      25600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_640000 */  \
  {  \
    /* Offset */                      25600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_640000 */  \
  {  \
    /* Offset */                      25600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_640000 */  \
    /* Offset */                      25600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_645000 */  \
  {  \
    /* Offset */                      25800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_645000 */  \
    /* Offset */                      25800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_650000 */  \
  {  \
    /* Offset */                      26000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_650000 */  \
  {  \
    /* Offset */                      26000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_650000 */  \
  {  \
    /* Offset */                      26000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_650000 */  \
    /* Offset */                      26000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_655000 */  \
  {  \
    /* Offset */                      26200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_655000 */  \
    /* Offset */                      26200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_660000 */  \
  {  \
    /* Offset */                      26400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_660000 */  \
  {  \
    /* Offset */                      26400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_660000 */  \
  {  \
    /* Offset */                      26400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_660000 */  \
  {  \
    /* Offset */                      26400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_660000 */  \
    /* Offset */                      26400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_665000 */  \
  {  \
    /* Offset */                      26600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_665000 */  \
    /* Offset */                      26600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_670000 */  \
  {  \
    /* Offset */                      26800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_670000 */  \
  {  \
    /* Offset */                      26800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_670000 */  \
  {  \
    /* Offset */                      26800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_670000 */  \
    /* Offset */                      26800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_675000 */  \
  {  \
    /* Offset */                      27000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_675000 */  \
    /* Offset */                      27000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_680000 */  \
  {  \
    /* Offset */                      27200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_680000 */  \
  {  \
    /* Offset */                      27200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_680000 */  \
  {  \
    /* Offset */                      27200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_680000 */  \
  {  \
    /* Offset */                      27200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_680000 */  \
    /* Offset */                      27200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_685000 */  \
  {  \
    /* Offset */                      27400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_685000 */  \
    /* Offset */                      27400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_690000 */  \
  {  \
    /* Offset */                      27600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_690000 */  \
  {  \
    /* Offset */                      27600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_690000 */  \
  {  \
    /* Offset */                      27600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_690000 */  \
    /* Offset */                      27600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_695000 */  \
  {  \
    /* Offset */                      27800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_695000 */  \
    /* Offset */                      27800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_700000 */  \
  {  \
    /* Offset */                      28000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_700000 */  \
  {  \
    /* Offset */                      28000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_700000 */  \
  {  \
    /* Offset */                      28000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_700000 */  \
  {  \
    /* Offset */                      28000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_700000 */  \
    /* Offset */                      28000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_705000 */  \
  {  \
    /* Offset */                      28200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_705000 */  \
    /* Offset */                      28200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_710000 */  \
  {  \
    /* Offset */                      28400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_710000 */  \
  {  \
    /* Offset */                      28400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_710000 */  \
  {  \
    /* Offset */                      28400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_710000 */  \
    /* Offset */                      28400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_715000 */  \
  {  \
    /* Offset */                      28600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_715000 */  \
    /* Offset */                      28600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_720000 */  \
  {  \
    /* Offset */                      28800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_720000 */  \
  {  \
    /* Offset */                      28800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_720000 */  \
  {  \
    /* Offset */                      28800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_720000 */  \
  {  \
    /* Offset */                      28800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_720000 */  \
    /* Offset */                      28800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_725000 */  \
  {  \
    /* Offset */                      29000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_725000 */  \
    /* Offset */                      29000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_730000 */  \
  {  \
    /* Offset */                      29200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_730000 */  \
  {  \
    /* Offset */                      29200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_730000 */  \
  {  \
    /* Offset */                      29200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_730000 */  \
    /* Offset */                      29200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_735000 */  \
  {  \
    /* Offset */                      29400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_735000 */  \
    /* Offset */                      29400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_740000 */  \
  {  \
    /* Offset */                      29600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_740000 */  \
  {  \
    /* Offset */                      29600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_740000 */  \
  {  \
    /* Offset */                      29600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_740000 */  \
  {  \
    /* Offset */                      29600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_740000 */  \
    /* Offset */                      29600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_745000 */  \
  {  \
    /* Offset */                      29800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_745000 */  \
    /* Offset */                      29800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_750000 */  \
  {  \
    /* Offset */                      30000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_750000 */  \
  {  \
    /* Offset */                      30000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_750000 */  \
  {  \
    /* Offset */                      30000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_750000 */  \
    /* Offset */                      30000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_755000 */  \
  {  \
    /* Offset */                      30200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_755000 */  \
    /* Offset */                      30200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_760000 */  \
  {  \
    /* Offset */                      30400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_760000 */  \
  {  \
    /* Offset */                      30400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_760000 */  \
  {  \
    /* Offset */                      30400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_760000 */  \
  {  \
    /* Offset */                      30400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_760000 */  \
    /* Offset */                      30400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_765000 */  \
  {  \
    /* Offset */                      30600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_765000 */  \
    /* Offset */                      30600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_770000 */  \
  {  \
    /* Offset */                      30800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_770000 */  \
  {  \
    /* Offset */                      30800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_770000 */  \
  {  \
    /* Offset */                      30800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_770000 */  \
    /* Offset */                      30800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_775000 */  \
  {  \
    /* Offset */                      31000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_775000 */  \
    /* Offset */                      31000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_780000 */  \
  {  \
    /* Offset */                      31200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_780000 */  \
  {  \
    /* Offset */                      31200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_780000 */  \
  {  \
    /* Offset */                      31200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_780000 */  \
  {  \
    /* Offset */                      31200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_780000 */  \
    /* Offset */                      31200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_785000 */  \
  {  \
    /* Offset */                      31400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_785000 */  \
    /* Offset */                      31400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_790000 */  \
  {  \
    /* Offset */                      31600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_790000 */  \
  {  \
    /* Offset */                      31600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_790000 */  \
  {  \
    /* Offset */                      31600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_790000 */  \
    /* Offset */                      31600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_795000 */  \
  {  \
    /* Offset */                      31800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_795000 */  \
    /* Offset */                      31800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_800000 */  \
  {  \
    /* Offset */                      32000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_800000 */  \
  {  \
    /* Offset */                      32000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_800000 */  \
  {  \
    /* Offset */                      32000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_800000 */  \
  {  \
    /* Offset */                      32000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_800000 */  \
    /* Offset */                      32000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_805000 */  \
  {  \
    /* Offset */                      32200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_805000 */  \
    /* Offset */                      32200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_810000 */  \
  {  \
    /* Offset */                      32400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_810000 */  \
  {  \
    /* Offset */                      32400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_810000 */  \
  {  \
    /* Offset */                      32400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_810000 */  \
    /* Offset */                      32400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_815000 */  \
  {  \
    /* Offset */                      32600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_815000 */  \
    /* Offset */                      32600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_820000 */  \
  {  \
    /* Offset */                      32800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_820000 */  \
  {  \
    /* Offset */                      32800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_820000 */  \
  {  \
    /* Offset */                      32800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_820000 */  \
  {  \
    /* Offset */                      32800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_820000 */  \
    /* Offset */                      32800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_825000 */  \
  {  \
    /* Offset */                      33000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_825000 */  \
    /* Offset */                      33000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_830000 */  \
  {  \
    /* Offset */                      33200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_830000 */  \
  {  \
    /* Offset */                      33200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_830000 */  \
  {  \
    /* Offset */                      33200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_830000 */  \
    /* Offset */                      33200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_835000 */  \
  {  \
    /* Offset */                      33400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_835000 */  \
    /* Offset */                      33400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_840000 */  \
  {  \
    /* Offset */                      33600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_840000 */  \
  {  \
    /* Offset */                      33600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_840000 */  \
  {  \
    /* Offset */                      33600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_840000 */  \
  {  \
    /* Offset */                      33600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_840000 */  \
    /* Offset */                      33600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_845000 */  \
  {  \
    /* Offset */                      33800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_845000 */  \
    /* Offset */                      33800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_850000 */  \
  {  \
    /* Offset */                      34000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_850000 */  \
  {  \
    /* Offset */                      34000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_850000 */  \
  {  \
    /* Offset */                      34000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_850000 */  \
    /* Offset */                      34000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_855000 */  \
  {  \
    /* Offset */                      34200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_855000 */  \
    /* Offset */                      34200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_860000 */  \
  {  \
    /* Offset */                      34400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_860000 */  \
  {  \
    /* Offset */                      34400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_860000 */  \
  {  \
    /* Offset */                      34400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_860000 */  \
  {  \
    /* Offset */                      34400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_860000 */  \
    /* Offset */                      34400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_865000 */  \
  {  \
    /* Offset */                      34600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_865000 */  \
    /* Offset */                      34600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_870000 */  \
  {  \
    /* Offset */                      34800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_870000 */  \
  {  \
    /* Offset */                      34800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_870000 */  \
  {  \
    /* Offset */                      34800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_870000 */  \
    /* Offset */                      34800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_875000 */  \
  {  \
    /* Offset */                      35000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_875000 */  \
    /* Offset */                      35000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_880000 */  \
  {  \
    /* Offset */                      35200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_880000 */  \
  {  \
    /* Offset */                      35200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_880000 */  \
  {  \
    /* Offset */                      35200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_880000 */  \
  {  \
    /* Offset */                      35200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_880000 */  \
    /* Offset */                      35200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_885000 */  \
  {  \
    /* Offset */                      35400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_885000 */  \
    /* Offset */                      35400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_890000 */  \
  {  \
    /* Offset */                      35600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_890000 */  \
  {  \
    /* Offset */                      35600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_890000 */  \
  {  \
    /* Offset */                      35600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_890000 */  \
    /* Offset */                      35600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_895000 */  \
  {  \
    /* Offset */                      35800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_895000 */  \
    /* Offset */                      35800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_900000 */  \
  {  \
    /* Offset */                      36000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_900000 */  \
  {  \
    /* Offset */                      36000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_900000 */  \
  {  \
    /* Offset */                      36000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_900000 */  \
  {  \
    /* Offset */                      36000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_900000 */  \
    /* Offset */                      36000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_905000 */  \
  {  \
    /* Offset */                      36200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_905000 */  \
    /* Offset */                      36200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_910000 */  \
  {  \
    /* Offset */                      36400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_910000 */  \
  {  \
    /* Offset */                      36400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_910000 */  \
  {  \
    /* Offset */                      36400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_910000 */  \
    /* Offset */                      36400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_915000 */  \
  {  \
    /* Offset */                      36600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_915000 */  \
    /* Offset */                      36600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_920000 */  \
  {  \
    /* Offset */                      36800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_920000 */  \
  {  \
    /* Offset */                      36800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_920000 */  \
  {  \
    /* Offset */                      36800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_920000 */  \
  {  \
    /* Offset */                      36800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_920000 */  \
    /* Offset */                      36800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_925000 */  \
  {  \
    /* Offset */                      37000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_925000 */  \
    /* Offset */                      37000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_930000 */  \
  {  \
    /* Offset */                      37200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_930000 */  \
  {  \
    /* Offset */                      37200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_930000 */  \
  {  \
    /* Offset */                      37200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_930000 */  \
    /* Offset */                      37200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_935000 */  \
  {  \
    /* Offset */                      37400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_935000 */  \
    /* Offset */                      37400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_940000 */  \
  {  \
    /* Offset */                      37600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_940000 */  \
  {  \
    /* Offset */                      37600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_940000 */  \
  {  \
    /* Offset */                      37600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_940000 */  \
  {  \
    /* Offset */                      37600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_940000 */  \
    /* Offset */                      37600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_945000 */  \
  {  \
    /* Offset */                      37800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_945000 */  \
    /* Offset */                      37800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_950000 */  \
  {  \
    /* Offset */                      38000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_950000 */  \
  {  \
    /* Offset */                      38000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_950000 */  \
  {  \
    /* Offset */                      38000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_950000 */  \
    /* Offset */                      38000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_955000 */  \
  {  \
    /* Offset */                      38200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_955000 */  \
    /* Offset */                      38200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_960000 */  \
  {  \
    /* Offset */                      38400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_960000 */  \
  {  \
    /* Offset */                      38400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_960000 */  \
  {  \
    /* Offset */                      38400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_960000 */  \
  {  \
    /* Offset */                      38400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_960000 */  \
    /* Offset */                      38400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_965000 */  \
  {  \
    /* Offset */                      38600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_965000 */  \
    /* Offset */                      38600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_970000 */  \
  {  \
    /* Offset */                      38800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_970000 */  \
  {  \
    /* Offset */                      38800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_970000 */  \
  {  \
    /* Offset */                      38800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_970000 */  \
    /* Offset */                      38800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_975000 */  \
  {  \
    /* Offset */                      39000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_975000 */  \
    /* Offset */                      39000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_980000 */  \
  {  \
    /* Offset */                      39200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_980000 */  \
  {  \
    /* Offset */                      39200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_980000 */  \
  {  \
    /* Offset */                      39200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  /* EP_980000 */  \
  {  \
    /* Offset */                      39200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMDiagStateTask_20ms  \
  },  \
  {  /* EP_980000 */  \
    /* Offset */                      39200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_985000 */  \
  {  \
    /* Offset */                      39400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_985000 */  \
    /* Offset */                      39400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_990000 */  \
  {  \
    /* Offset */                      39600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  /* EP_990000 */  \
  {  \
    /* Offset */                      39600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_10ms  \
  },  \
  /* EP_990000 */  \
  {  \
    /* Offset */                      39600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMMemTask_10ms  \
  },  \
  {  /* EP_990000 */  \
    /* Offset */                      39600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  /* EP_995000 */  \
  {  \
    /* Offset */                      39800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       0,  \
    /* Task */                        SchMComTask_5ms  \
  },  \
  {  /* EP_995000 */  \
    /* Offset */                      39800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_D3499F3675C83D894764E034B9E1C95A,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_0 */  \
    /* Offset */                      0,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_FB569F32E86BE9DE6593E2D9B5D6CB4E | Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8 | Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_10000 */  \
    /* Offset */                      400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_20000 */  \
    /* Offset */                      800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_30000 */  \
    /* Offset */                      1200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_40000 */  \
    /* Offset */                      1600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_50000 */  \
    /* Offset */                      2000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_60000 */  \
    /* Offset */                      2400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_70000 */  \
    /* Offset */                      2800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_80000 */  \
    /* Offset */                      3200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_90000 */  \
    /* Offset */                      3600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_100000 */  \
    /* Offset */                      4000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_110000 */  \
    /* Offset */                      4400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_120000 */  \
    /* Offset */                      4800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_130000 */  \
    /* Offset */                      5200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_140000 */  \
    /* Offset */                      5600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_150000 */  \
    /* Offset */                      6000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_160000 */  \
    /* Offset */                      6400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_170000 */  \
    /* Offset */                      6800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_180000 */  \
    /* Offset */                      7200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_190000 */  \
    /* Offset */                      7600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_200000 */  \
    /* Offset */                      8000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8 | Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_210000 */  \
    /* Offset */                      8400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_220000 */  \
    /* Offset */                      8800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_230000 */  \
    /* Offset */                      9200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_240000 */  \
    /* Offset */                      9600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_250000 */  \
    /* Offset */                      10000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_260000 */  \
    /* Offset */                      10400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_270000 */  \
    /* Offset */                      10800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_280000 */  \
    /* Offset */                      11200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_290000 */  \
    /* Offset */                      11600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_300000 */  \
    /* Offset */                      12000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_310000 */  \
    /* Offset */                      12400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_320000 */  \
    /* Offset */                      12800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_330000 */  \
    /* Offset */                      13200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_340000 */  \
    /* Offset */                      13600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_350000 */  \
    /* Offset */                      14000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_360000 */  \
    /* Offset */                      14400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_370000 */  \
    /* Offset */                      14800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_380000 */  \
    /* Offset */                      15200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_390000 */  \
    /* Offset */                      15600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_400000 */  \
    /* Offset */                      16000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8 | Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_410000 */  \
    /* Offset */                      16400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_420000 */  \
    /* Offset */                      16800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_430000 */  \
    /* Offset */                      17200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_440000 */  \
    /* Offset */                      17600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_450000 */  \
    /* Offset */                      18000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_460000 */  \
    /* Offset */                      18400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_470000 */  \
    /* Offset */                      18800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_480000 */  \
    /* Offset */                      19200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_490000 */  \
    /* Offset */                      19600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_500000 */  \
    /* Offset */                      20000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_510000 */  \
    /* Offset */                      20400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_520000 */  \
    /* Offset */                      20800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_530000 */  \
    /* Offset */                      21200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_540000 */  \
    /* Offset */                      21600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_550000 */  \
    /* Offset */                      22000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_560000 */  \
    /* Offset */                      22400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_570000 */  \
    /* Offset */                      22800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_580000 */  \
    /* Offset */                      23200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_590000 */  \
    /* Offset */                      23600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_600000 */  \
    /* Offset */                      24000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8 | Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_610000 */  \
    /* Offset */                      24400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_620000 */  \
    /* Offset */                      24800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_630000 */  \
    /* Offset */                      25200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_640000 */  \
    /* Offset */                      25600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_650000 */  \
    /* Offset */                      26000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_660000 */  \
    /* Offset */                      26400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_670000 */  \
    /* Offset */                      26800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_680000 */  \
    /* Offset */                      27200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_690000 */  \
    /* Offset */                      27600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_700000 */  \
    /* Offset */                      28000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_710000 */  \
    /* Offset */                      28400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_720000 */  \
    /* Offset */                      28800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_730000 */  \
    /* Offset */                      29200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_740000 */  \
    /* Offset */                      29600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_750000 */  \
    /* Offset */                      30000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_760000 */  \
    /* Offset */                      30400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_770000 */  \
    /* Offset */                      30800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_780000 */  \
    /* Offset */                      31200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_790000 */  \
    /* Offset */                      31600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_800000 */  \
    /* Offset */                      32000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_09949D2EF70F7870E5AC33D18A3F29C8 | Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_810000 */  \
    /* Offset */                      32400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_820000 */  \
    /* Offset */                      32800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_830000 */  \
    /* Offset */                      33200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_840000 */  \
    /* Offset */                      33600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_850000 */  \
    /* Offset */                      34000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_860000 */  \
    /* Offset */                      34400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_870000 */  \
    /* Offset */                      34800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_880000 */  \
    /* Offset */                      35200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_890000 */  \
    /* Offset */                      35600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_900000 */  \
    /* Offset */                      36000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_910000 */  \
    /* Offset */                      36400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_920000 */  \
    /* Offset */                      36800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_930000 */  \
    /* Offset */                      37200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_940000 */  \
    /* Offset */                      37600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_950000 */  \
    /* Offset */                      38000000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_960000 */  \
    /* Offset */                      38400000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_970000 */  \
    /* Offset */                      38800000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_980000 */  \
    /* Offset */                      39200000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  },  \
  {  /* EP_990000 */  \
    /* Offset */                      39600000,  \
    /* Max advance */                 0,  \
    /* Max retard */                  0,  \
    /* Event */                       Rte_OSTimingEvent_Rte_Time_Task_TE_6E112CFF2BCB051EBE4C32AE20F72131,  \
    /* Task */                        Rte_Time_Task  \
  }

#define OS_NSCHEDULES_CORE0  2

/*===================================================================
 * Spinlocks
 *==================================================================*/
#define OS_NAUTOSARSPINLOCKS  0

/*===================================================================
 * Stacks
 *==================================================================*/
#define OS_STACK_REGION_ALIGNMENT  8
/* Task Stacks */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot0, .bss.core0.os_taskstack0_slot0, 276, 8 );
#endif
#endif  /* OS_ASM */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot1, .bss.core0.os_taskstack0_slot1, 276, 8 );
#endif
#endif  /* OS_ASM */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot2, .bss.core0.os_taskstack0_slot2, 276, 8 );
#endif
#endif  /* OS_ASM */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot3, .bss.core0.os_taskstack0_slot3, 276, 8 );
#endif
#endif  /* OS_ASM */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot4, .bss.core0.os_taskstack0_slot4, 276, 8 );
#endif
#endif  /* OS_ASM */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot5, .bss.core0.os_taskstack0_slot5, 276, 8 );
#endif
#endif  /* OS_ASM */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_taskStack0_slot6, .bss.core0.os_taskstack0_slot6, 276, 8 );
#endif
#endif  /* OS_ASM */
/* Interrupt Stacks */
#ifndef OS_ASM
#if OS_KERNEL_TYPE != OS_MICROKERNEL
extern OS_GEN_STACK_DECL( OS_kernStack0, .bss.core0.os_kernstack0, 768, 8 );
#endif
#endif  /* OS_ASM */

/*===================================================================
 * Tasks
 *==================================================================*/
#ifndef OS_ASM
DeclareTask(Rte_Event_Task);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(Rte_Time_Task);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(TASK_RTE_ModeSwitchEvent);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(Init_Task);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(SchMComTask_10ms);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(SchMComTask_5ms);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(SchMDiagStateTask_20ms);
#endif  /* OS_ASM */
#ifndef OS_ASM
DeclareTask(SchMMemTask_10ms);
#endif  /* OS_ASM */

#define OS_NTASKS               8
#define OS_NETASKS              3
#define OS_NTASKSEXECTIMELIMIT  0
#define OS_NTASKSINTLOCKLIMIT   0
#define OS_NTASKSRESLOCKLIMIT   0
#define OS_TASKCONFIG  OS_TASKCONFIG_INIT(    /* Rte_Event_Task */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[0],  \
  /* Run priority */                   1u,  \
  /* Queuing priority */               1u,  \
  /* Activation index */               1,  \
  /* Task entry */                     &OS_TASK_Rte_Event_Task,  \
  /* Stack base */                     &OS_taskStack0_slot0[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          (OS_TF_EXTENDED),  \
  /* Task ID */                        Rte_Event_Task,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* Rte_Time_Task */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[1],  \
  /* Run priority */                   2u,  \
  /* Queuing priority */               2u,  \
  /* Activation index */               2,  \
  /* Task entry */                     &OS_TASK_Rte_Time_Task,  \
  /* Stack base */                     &OS_taskStack0_slot1[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          (OS_TF_EXTENDED),  \
  /* Task ID */                        Rte_Time_Task,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* TASK_RTE_ModeSwitchEvent */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[2],  \
  /* Run priority */                   0u,  \
  /* Queuing priority */               0u,  \
  /* Activation index */               3,  \
  /* Task entry */                     &OS_TASK_TASK_RTE_ModeSwitchEvent,  \
  /* Stack base */                     &OS_taskStack0_slot2[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          (OS_TF_EXTENDED),  \
  /* Task ID */                        TASK_RTE_ModeSwitchEvent,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* Init_Task */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[3],  \
  /* Run priority */                   6u,  \
  /* Queuing priority */               6u,  \
  /* Activation index */               4,  \
  /* Task entry */                     &OS_TASK_Init_Task,  \
  /* Stack base */                     &OS_taskStack0_slot3[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          (OS_TF_NONPREEMPT),  \
  /* Task ID */                        Init_Task,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* SchMComTask_10ms */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[4],  \
  /* Run priority */                   5u,  \
  /* Queuing priority */               5u,  \
  /* Activation index */               5,  \
  /* Task entry */                     &OS_TASK_SchMComTask_10ms,  \
  /* Stack base */                     &OS_taskStack0_slot4[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          0,  \
  /* Task ID */                        SchMComTask_10ms,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* SchMComTask_5ms */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[5],  \
  /* Run priority */                   6u,  \
  /* Queuing priority */               6u,  \
  /* Activation index */               6,  \
  /* Task entry */                     &OS_TASK_SchMComTask_5ms,  \
  /* Stack base */                     &OS_taskStack0_slot3[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          0,  \
  /* Task ID */                        SchMComTask_5ms,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* SchMDiagStateTask_20ms */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[6],  \
  /* Run priority */                   3u,  \
  /* Queuing priority */               3u,  \
  /* Activation index */               7,  \
  /* Task entry */                     &OS_TASK_SchMDiagStateTask_20ms,  \
  /* Stack base */                     &OS_taskStack0_slot5[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          0,  \
  /* Task ID */                        SchMDiagStateTask_20ms,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
),  \
OS_TASKCONFIG_INIT(    /* SchMMemTask_10ms */  \
  /* Dynamic task structure */         &OS_taskDynamic_core0[7],  \
  /* Run priority */                   4u,  \
  /* Queuing priority */               4u,  \
  /* Activation index */               8,  \
  /* Task entry */                     &OS_TASK_SchMMemTask_10ms,  \
  /* Stack base */                     &OS_taskStack0_slot6[0],  \
  /* Stack size */                     1104u,  \
  /* Max. activations */               0u,  \
  /* Flags */                          0,  \
  /* Task ID */                        SchMMemTask_10ms,  \
  /* Accounting structure */           OS_NULL,  \
  /* start of data/bss */              OS_NULL,  \
  /* end of data/bss */                OS_NULL,  \
  /* start of initial data */          OS_NULL,  \
  /* end of initial data */            OS_NULL,  \
  /* Execution budget */               0u,  \
  /* Os interrupt lock budget */       0u,  \
  /* All interrupt lock budget */      0u,  \
  /* Resource lock budget */           OS_NULL,  \
  /* Rate monitor */                   OS_NULLRATEMONITOR,  \
  /* Application */                    &OS_appTable[OS_SYSTEM_0],  \
  /* Permissions */                    0x1u,  \
    OS_ARCHTASK_INIT(  \
      /* size of the private data region for MPU*/                    OS_CORTEXM_MPU_SIZE_DISABLED,  \
      /* size of the task stack for MPU*/                             OS_CORTEXM_MPU_SIZE_DISABLED  \
    )  \
)
#define OS_NTASKS_CORE0  8

/*===================================================================
 * Tasks Common Scheduling
 *==================================================================*/
#define OS_NPRIORITIES_CORE0  7

/*===================================================================
 * Tasks Linked List Scheduling
 *==================================================================*/
#define OS_NTASKACCOUNTING  0
#define OS_NTASKACTIVATIONS  8
#define OS_NTASKACCOUNTING_CORE0   0
#define OS_NTASKACTIVATIONS_CORE0  8
#define OS_TASKACTIVATIONS_CORE0   \
  /* 0 */ &OS_taskTable[Rte_Event_Task],    \
  /* 1 */ &OS_taskTable[Rte_Time_Task],    \
  /* 2 */ &OS_taskTable[TASK_RTE_ModeSwitchEvent],    \
  /* 3 */ &OS_taskTable[Init_Task],    \
  /* 4 */ &OS_taskTable[SchMComTask_10ms],    \
  /* 5 */ &OS_taskTable[SchMComTask_5ms],    \
  /* 6 */ &OS_taskTable[SchMDiagStateTask_20ms],    \
  /* 7 */ &OS_taskTable[SchMMemTask_10ms]

/*===================================================================
 * CORTEXM memory region sizes for MPU
 *==================================================================*/
#define OS_CORTEXM_MPU_GLOBAL_ROM_SIZE  OS_CORTEXM_MPU_SIZE_4M
#define OS_CORTEXM_MPU_GLOBAL_RAM_SIZE  OS_CORTEXM_MPU_SIZE_512K
#define OS_CORTEXM_MPU_SHOOK_SIZE       OS_CORTEXM_MPU_SIZE_DISABLED
#define OS_CORTEXM_MPU_EHOOK_SIZE       OS_CORTEXM_MPU_SIZE_DISABLED
#define OS_CORTEXM_MPU_SIZE_KERNSTACK0  OS_CORTEXM_MPU_SIZE_4K

/*===================================================================
 * CORTEXM Interrupts
 *==================================================================*/
#define OS_SRC6d_C0_NAME                      _OS_VECTOR_I109_FlexCAN0_0
#define OS_SRC6d_C0_ISRID                     CAN0_ORED_IRQHandler
#define OS_SRC6d_C0_ENTRY                     OS_Cat2Entry
#define OS_SRC6d_C0_EXIT                      OS_CORTEXM_IntCat2Exit
#define OS_SRC6d_C0_LOCKLEVEL                 OS_KERNLOCK
#define OS_SRC6e_C0_NAME                      _OS_VECTOR_I110_FlexCAN0_1
#define OS_SRC6e_C0_ISRID                     CAN0_ORED_0_31_MB_IRQHandler
#define OS_SRC6e_C0_ENTRY                     OS_Cat2Entry
#define OS_SRC6e_C0_EXIT                      OS_CORTEXM_IntCat2Exit
#define OS_SRC6e_C0_LOCKLEVEL                 OS_KERNLOCK
#define OS_SRC6f_C0_NAME                      _OS_VECTOR_I111_FlexCAN0_2
#define OS_SRC6f_C0_ISRID                     CAN0_ORED_32_63_MB_IRQHandler
#define OS_SRC6f_C0_ENTRY                     OS_Cat2Entry
#define OS_SRC6f_C0_EXIT                      OS_CORTEXM_IntCat2Exit
#define OS_SRC6f_C0_LOCKLEVEL                 OS_KERNLOCK
#define OS_SRCb4_C0_NAME                      _OS_VECTOR_I180_ADC_0
#define OS_SRCb4_C0_ISRID                     Adc_Sar_0_Isr
#define OS_SRCb4_C0_ENTRY                     OS_Cat2Entry
#define OS_SRCb4_C0_EXIT                      OS_CORTEXM_IntCat2Exit
#define OS_SRCb4_C0_LOCKLEVEL                 OS_KERNLOCK
#define OS_SRC27_C0_NAME                      _OS_VECTOR_I039_STM_0
#define OS_SRC27_C0_ISRID                     Os_Counter_STM0_0
#define OS_SRC27_C0_ENTRY                     OS_Cat2Entry
#define OS_SRC27_C0_EXIT                      OS_CORTEXM_IntCat2Exit
#define OS_SRC27_C0_LOCKLEVEL                 OS_KERNLOCK

#ifdef __cplusplus
}
#endif
#endif  /* OS_CONFIG_H */
