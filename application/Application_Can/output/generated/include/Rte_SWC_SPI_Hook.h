#ifndef RTE_SWC_SPI_HOOK_H
#define RTE_SWC_SPI_HOOK_H
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
 * This file contains Rte hook declarations for the software component type SWC_SPI
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Wed Sep 20 10:38:36 CST 2023. !!!IGNORE-LINE!!!
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
#if (defined(Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Start
#endif
#if defined(Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Start)
#undef Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Start
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Start (P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Start(data) ((void)0)
#endif
#if (defined(Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Return
#endif
#if defined(Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Return)
#undef Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Return
extern FUNC(void, RTE_APPL_CODE) Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Return (P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) data);
#else
#define Rte_ReadHook_SWC_SPI_Rp_AdcValue_ArgData_Return(data) ((void)0)
#endif
#if (defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Start
#endif
#if defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Start)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Start
extern FUNC(void, RTE_APPL_CODE) Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Start (NvM_DstPtrType DstPtr);
#else
#define Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Start(DstPtr) ((void)0)
#endif
#if (defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Return
#endif
#if defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Return)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Return
extern FUNC(void, RTE_APPL_CODE) Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Return (NvM_DstPtrType DstPtr);
#else
#define Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_ReadBlock_Return(DstPtr) ((void)0)
#endif
#if (defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Start
#endif
#if defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Start)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Start
extern FUNC(void, RTE_APPL_CODE) Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Start (NvM_SrcPtrType SrcPtr);
#else
#define Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Start(SrcPtr) ((void)0)
#endif
#if (defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Return
#endif
#if defined(Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Return)
#undef Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Return
extern FUNC(void, RTE_APPL_CODE) Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Return (NvM_SrcPtrType SrcPtr);
#else
#define Rte_CallHook_SWC_SPI_PS_NvM_Block_voltage_WriteBlock_Return(SrcPtr) ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_SPI_NvM_Cyclic_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_SPI_NvM_Cyclic_Start
#endif
#if defined(Rte_Runnable_SWC_SPI_NvM_Cyclic_Start)
#undef Rte_Runnable_SWC_SPI_NvM_Cyclic_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_SPI_NvM_Cyclic_Start (void);
#else
#define Rte_Runnable_SWC_SPI_NvM_Cyclic_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_SPI_NvM_Cyclic_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_SPI_NvM_Cyclic_Return
#endif
#if defined(Rte_Runnable_SWC_SPI_NvM_Cyclic_Return)
#undef Rte_Runnable_SWC_SPI_NvM_Cyclic_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_SPI_NvM_Cyclic_Return (void);
#else
#define Rte_Runnable_SWC_SPI_NvM_Cyclic_Return() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_SPI_SPI_cyclic_Start)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_SPI_SPI_cyclic_Start
#endif
#if defined(Rte_Runnable_SWC_SPI_SPI_cyclic_Start)
#undef Rte_Runnable_SWC_SPI_SPI_cyclic_Start
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_SPI_SPI_cyclic_Start (void);
#else
#define Rte_Runnable_SWC_SPI_SPI_cyclic_Start() ((void)0)
#endif
#if (defined(Rte_Runnable_SWC_SPI_SPI_cyclic_Return)) && (RTE_VFB_TRACE == FALSE)
#undef Rte_Runnable_SWC_SPI_SPI_cyclic_Return
#endif
#if defined(Rte_Runnable_SWC_SPI_SPI_cyclic_Return)
#undef Rte_Runnable_SWC_SPI_SPI_cyclic_Return
extern FUNC(void, RTE_APPL_CODE) Rte_Runnable_SWC_SPI_SPI_cyclic_Return (void);
#else
#define Rte_Runnable_SWC_SPI_SPI_cyclic_Return() ((void)0)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
