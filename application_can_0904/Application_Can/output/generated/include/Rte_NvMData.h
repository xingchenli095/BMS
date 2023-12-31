#ifndef RTE_NVMDATA_H
#define RTE_NVMDATA_H
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
 * This file contains external declarations of per-instance memory buffers and calibration parameter constants which are mapped to NvM blocks.
 *
 * This file has been automatically generated by
 * EB tresos AutoCore Rte Generator Version 6.8.4
 * on Tue Aug 29 10:19:27 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ==================[Includes]=============================================== */
#include <Rte_Type.h>

/* ==================[Definition of variables with external linkage]========== */
#define RTE_START_SEC_VAR_INIT_UNSPECIFIED
#include <Rte_MemMap.h>
extern VAR(Rte_PimType_SWC_CyclicCounter_CounterValueType, RTE_VAR) Demo_CyclicCounter_Ram_Block;
#define RTE_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Rte_MemMap.h>
#define RTE_START_SEC_CONST_8
#include <Rte_MemMap.h>
extern CONST(uint8, RTE_CONST) Demo_CyclicCounter_Rom_Block;
#define RTE_STOP_SEC_CONST_8
#include <Rte_MemMap.h>

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
