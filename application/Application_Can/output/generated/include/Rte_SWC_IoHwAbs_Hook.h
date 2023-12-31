#ifndef RTE_SWC_IOHWABS_HOOK_H
#define RTE_SWC_IOHWABS_HOOK_H
/**
 * \file
 *
 * \brief AUTOSAR Rte
 *
 * This file contains the implementation of the AUTOSAR
 * module Rte.
 *
 * \version 6.8.4
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
 * This file contains Rte hook declarations for the software component type SWC_IoHwAbs
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Wed Oct 11 14:59:36 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ==================[Includes]=============================================== */
#include <Rte_Cfg.h>
#include <Rte_Type.h>

/* ==================[Macros]================================================= */
#ifndef RTE_CORE
#ifndef RTE_VFB_TRACE
#define RTE_VFB_TRACE 0
#endif
#endif
#if (defined(Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Start
#endif
#if defined(Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Start)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Start (uint16 data);
#else
#define Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Start(data) ((void)0)
#endif
#if (defined(Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Return
#endif
#if defined(Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Return)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Return (uint16 data);
#else
#define Rte_WriteHook_SWC_IoHwAbs_Pp_AdcValue_ArgData_Return(data) ((void)0)
#endif
#if (defined(Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Start
#endif
#if defined(Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Start)
#undef Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Start
extern FUNC(void, RTE_APPL_CODE) Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Start (void);
#else
#define Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Start() ((void)0)
#endif
#if (defined(Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Return
#endif
#if defined(Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Return)
#undef Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Return
extern FUNC(void, RTE_APPL_CODE) Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Return (void);
#else
#define Rte_DReadHook_SWC_IoHwAbs_Rp_Can_Receive_Can_Return() ((void)0)
#endif
#if (defined(Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start
#endif
#if defined(Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start (uint8 data);
#else
#define Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start(data) ((void)0)
#endif
#if (defined(Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return
#endif
#if defined(Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return)
#undef Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return
extern FUNC(void, RTE_APPL_CODE) Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return (uint8 data);
#else
#define Rte_WriteHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return(data) ((void)0)
#endif
#if (defined(Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start
#endif
#if defined(Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start)
#undef Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start
extern FUNC(void, RTE_APPL_CODE) Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start (void);
#else
#define Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Start() ((void)0)
#endif
#if (defined(Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return
#endif
#if defined(Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return)
#undef Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return
extern FUNC(void, RTE_APPL_CODE) Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return (void);
#else
#define Rte_FeedbackHook_SWC_IoHwAbs_Pp_Can_Send_Can_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Start
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Start)
#undef Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Start (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Return
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Return)
#undef Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Return (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_Adc_ReadValue_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_Can_Receive_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Receive_Start
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_Can_Receive_Start)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Receive_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_Can_Receive_Start (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_Can_Receive_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_Can_Receive_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Receive_Return
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_Can_Receive_Return)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Receive_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_Can_Receive_Return (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_Can_Receive_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_Can_Send_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Send_Start
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_Can_Send_Start)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Send_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_Can_Send_Start (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_Can_Send_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_Can_Send_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Send_Return
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_Can_Send_Return)
#undef Rte_Runnable_SWC_IoHwAbs_Can_Send_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_Can_Send_Return (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_Can_Send_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Start
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Start)
#undef Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Start (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Return
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Return)
#undef Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Return (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_LedControl_IO_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Start
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Start)
#undef Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Start (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Return
#endif
#if defined(Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Return)
#undef Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Return (void);
#else
#define Rte_Runnable_SWC_IoHwAbs_SetDiscreteValue_Return() ((void)0)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
