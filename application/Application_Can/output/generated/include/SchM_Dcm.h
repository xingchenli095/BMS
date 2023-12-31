#ifndef SCHM_DCM_H
#define SCHM_DCM_H
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
#include <SchM_DcmType.h>

/* ==================[Declaration of functions with external linkage]========= */
#define RTE_START_SEC_CODE
#include <Rte_MemMap.h>
extern FUNC(void, RTE_CODE) SchM_Enter_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 (void);
extern FUNC(void, RTE_CODE) SchM_Exit_Dcm_SCHM_DCM_EXCLUSIVE_AREA_0 (void);
extern FUNC(Std_ReturnType, RTE_CODE) SchM_Switch_Dcm_DcmDiagnosticSessionControl (uint8 mode);
extern FUNC(Std_ReturnType, RTE_CODE) SchM_Switch_Dcm_DcmEcuReset (uint8 mode);
extern FUNC(Std_ReturnType, RTE_CODE) SchM_Switch_Dcm_DcmRapidPowerShutdown (uint8 mode);
extern FUNC(Std_ReturnType, RTE_CODE) SchM_Switch_Dcm_DcmCommunicationControl_CanNetwork (uint8 mode);
extern FUNC(Std_ReturnType, RTE_CODE) SchM_Switch_Dcm_DcmControlDTCSetting (uint8 mode);
extern FUNC(Std_ReturnType, RTE_CODE) SchM_Switch_Dcm_DcmResponseOnEvent_0 (uint8 mode);
#define RTE_STOP_SEC_CODE
#include <Rte_MemMap.h>
#define DCM_START_SEC_CODE
#include <Dcm_MemMap.h>
#ifndef RTE_SCHM_SWCBSW_DCM_MAINFUNCTION
#define RTE_SCHM_SWCBSW_DCM_MAINFUNCTION
extern FUNC(void, DCM_CODE) Dcm_MainFunction (void);
#endif

#define DCM_STOP_SEC_CODE
#include <Dcm_MemMap.h>

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */
