#ifndef SCHM_WDGM_APPL_H
#define SCHM_WDGM_APPL_H
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
#include <SchM_WdgM_ApplType.h>

/* ==================[Declaration of functions with external linkage]========= */
#define WDGM_APPL_START_SEC_CODE
#include <WdgM_Appl_MemMap.h>
#ifndef RTE_SCHM_SWCBSW_WDGM_APPL_WDGM_TRIGGERSWC_CYCLIC
#define RTE_SCHM_SWCBSW_WDGM_APPL_WDGM_TRIGGERSWC_CYCLIC
extern FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_TriggerSWC_Cyclic (void);
#endif

#ifndef RTE_SCHM_SWCBSW_WDGM_APPL_WDGM_DEADLINEMONITORSTOP
#define RTE_SCHM_SWCBSW_WDGM_APPL_WDGM_DEADLINEMONITORSTOP
extern FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_DeadLineMonitorStop (void);
#endif

#ifndef RTE_SCHM_SWCBSW_WDGM_APPL_WDGM_DEADLINEMONITORSTART
#define RTE_SCHM_SWCBSW_WDGM_APPL_WDGM_DEADLINEMONITORSTART
extern FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_DeadLineMonitorStart (void);
#endif

#define WDGM_APPL_STOP_SEC_CODE
#include <WdgM_Appl_MemMap.h>

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */