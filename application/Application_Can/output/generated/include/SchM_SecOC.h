#ifndef SCHM_SECOC_H
#define SCHM_SECOC_H
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
 * This file is the Module Interlink Header which contains the declarations relevant for that instance of a basic software module.
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
#include <SchM_SecOCType.h>

/* ==================[Declaration of functions with external linkage]========= */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
extern FUNC(void, RTE_CODE) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_0 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_SecOC_SCHM_SECOC_EXCLUSIVE_AREA_1 (void);
#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>
#define SECOC_START_SEC_CODE
#include <SecOC_MemMap.h>
#ifndef RTE_SCHM_SWCBSW_SECOC_MAINFUNCTIONRX
#define RTE_SCHM_SWCBSW_SECOC_MAINFUNCTIONRX
extern FUNC(void, SECOC_CODE) SecOC_MainFunctionRx (void);
#endif

#ifndef RTE_SCHM_SWCBSW_SECOC_MAINFUNCTIONTX
#define RTE_SCHM_SWCBSW_SECOC_MAINFUNCTIONTX
extern FUNC(void, SECOC_CODE) SecOC_MainFunctionTx (void);
#endif

#define SECOC_STOP_SEC_CODE
#include <SecOC_MemMap.h>

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
