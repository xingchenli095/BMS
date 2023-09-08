#ifndef SCHM_MCU_H
#define SCHM_MCU_H
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
#include <SchM_McuType.h>

/* ==================[Declaration of functions with external linkage]========= */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
extern FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_00 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_00 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_01 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_01 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Mcu_MCU_EXCLUSIVE_AREA_02 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Mcu_MCU_EXCLUSIVE_AREA_02 (void);
#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
