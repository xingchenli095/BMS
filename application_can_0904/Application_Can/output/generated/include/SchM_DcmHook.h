#ifndef SCHM_DCMHOOK_H
#define SCHM_DCMHOOK_H
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
 * This file contains Rte hook declarations for the basic software module instance Dcm
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Tue Aug 29 10:19:28 CST 2023. !!!IGNORE-LINE!!!
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
#if (defined(SchM_Schedulable_Dcm_MainFunction_Start)) && (RTE_VFB_TRACE == FALSE)
#undef SchM_Schedulable_Dcm_MainFunction_Start
#endif
#if defined(SchM_Schedulable_Dcm_MainFunction_Start)
#undef SchM_Schedulable_Dcm_MainFunction_Start
extern FUNC(void, RTE_APPL_CODE) SchM_Schedulable_Dcm_MainFunction_Start (void);
#else
#define SchM_Schedulable_Dcm_MainFunction_Start() ((void)0)
#endif
#if (defined(SchM_Schedulable_Dcm_MainFunction_Return)) && (RTE_VFB_TRACE == FALSE)
#undef SchM_Schedulable_Dcm_MainFunction_Return
#endif
#if defined(SchM_Schedulable_Dcm_MainFunction_Return)
#undef SchM_Schedulable_Dcm_MainFunction_Return
extern FUNC(void, RTE_APPL_CODE) SchM_Schedulable_Dcm_MainFunction_Return (void);
#else
#define SchM_Schedulable_Dcm_MainFunction_Return() ((void)0)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
