#ifndef RTE_SWC_APPSTATEHANDLER_TYPE_H
#define RTE_SWC_APPSTATEHANDLER_TYPE_H
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
 * This file contains the application-specific types for component type SWC_AppStateHandler
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
#include <Rte_Type.h>

/* ==================[Macros]================================================= */
/* ------------------[enumeration constants]---------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#ifndef EB_INTGR_APP_STARTUP
#define EB_INTGR_APP_STARTUP 1U
#endif
#ifndef EB_INTGR_APP_ACTIVE
#define EB_INTGR_APP_ACTIVE 2U
#endif
#ifndef EB_INTGR_APP_INACTIVE
#define EB_INTGR_APP_INACTIVE 3U
#endif
#ifndef EB_INTGR_APP_SLEEP
#define EB_INTGR_APP_SLEEP 4U
#endif
#ifndef EB_INTGR_APP_WAKEUP
#define EB_INTGR_APP_WAKEUP 5U
#endif
#endif

/* ------------------[range definitions]-------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ------------------[invalid values]----------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ------------------[mode declarations]-------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_TRANSITION_AppStateModeGroup
#define RTE_TRANSITION_AppStateModeGroup 9U
#endif
#ifndef RTE_MODE_AppStateModeGroup_EB_INTGR_APP_ACTIVE
#define RTE_MODE_AppStateModeGroup_EB_INTGR_APP_ACTIVE 2U
#endif
#ifndef RTE_MODE_AppStateModeGroup_EB_INTGR_APP_INACTIVE
#define RTE_MODE_AppStateModeGroup_EB_INTGR_APP_INACTIVE 3U
#endif
#ifndef RTE_MODE_AppStateModeGroup_EB_INTGR_APP_SLEEP
#define RTE_MODE_AppStateModeGroup_EB_INTGR_APP_SLEEP 4U
#endif
#ifndef RTE_MODE_AppStateModeGroup_EB_INTGR_APP_STARTUP
#define RTE_MODE_AppStateModeGroup_EB_INTGR_APP_STARTUP 1U
#endif
#ifndef RTE_MODE_AppStateModeGroup_EB_INTGR_APP_WAKEUP
#define RTE_MODE_AppStateModeGroup_EB_INTGR_APP_WAKEUP 5U
#endif
#endif

/* ------------------[API]---------------------------------------------------- */
#ifndef RTE_CORE /* if included by software component */
#endif

/* ==================[Types]================================================== */
/* ------------------[mode declaration group types]--------------------------- */
#ifndef RTE_CORE /* if included by software component */
#ifndef RTE_MODETYPE_AppStateModeGroup
#define RTE_MODETYPE_AppStateModeGroup
typedef VAR(uint8, TYPEDEF) Rte_ModeType_AppStateModeGroup;
#endif
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif
/** @} doxygen end group definition  */
/* ==================[end of file]============================================ */