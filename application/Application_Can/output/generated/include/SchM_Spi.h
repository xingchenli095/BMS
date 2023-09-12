#ifndef SCHM_SPI_H
#define SCHM_SPI_H
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
 * on Sat Sep 09 19:51:33 CST 2023. !!!IGNORE-LINE!!!
 */

/*
 * \addtogroup Rte Runtime Environment
 * @{
 */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ==================[Includes]=============================================== */
#include <SchM_SpiType.h>

/* ==================[Declaration of functions with external linkage]========= */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_00 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_00 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_01 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_01 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_02 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_02 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_03 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_03 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_04 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_04 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_05 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_05 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_06 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_06 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_07 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_07 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_08 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_08 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_09 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_09 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_10 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_10 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_11 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_11 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_12 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_12 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_13 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_13 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_14 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_14 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_15 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_15 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_16 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_16 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_17 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_17 (void);
extern FUNC(void, RTE_CODE) SchM_Enter_Spi_SPI_EXCLUSIVE_AREA_18 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Spi_SPI_EXCLUSIVE_AREA_18 (void);
#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>
#define SPI_START_SEC_CODE
#include <Spi_MemMap.h>
#ifndef RTE_SCHM_SWCBSW_SPI_MAINFUNCTION_HANDLING
#define RTE_SCHM_SWCBSW_SPI_MAINFUNCTION_HANDLING
extern FUNC(void, SPI_CODE) Spi_MainFunction_Handling (void);
#endif

#define SPI_STOP_SEC_CODE
#include <Spi_MemMap.h>

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
