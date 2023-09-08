/**
 * \file
 *
 * \brief AUTOSAR WdgM
 *
 * This file contains the implementation of the AUTOSAR
 * module WdgM.
 *
 * \version 6.1.42
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/* !LINKSTO WDGM.EB.TIMEPM.WDGM020200,1 */
#ifndef WDGM_CALLOUTS_H
#define WDGM_CALLOUTS_H

/*==================[includes]===================================================================*/
/* !LINKSTO WDGM.EB.Design.IncludeFileStructure,4 */
#include <WdgM_Types.h>
/*==================[macros]=====================================================================*/

/*==================[type definitions]===========================================================*/

/*==================[external function declarations]=============================================*/

#define WDGM_START_SEC_CALLOUT_CODE_ASIL_D
#include <WdgM_MemMap.h>

/** \brief Provide actual / get expected initialization state
 *
 * The callout is invoked at the beginning of WdgM_MainFunction cycle.
 * Possible values for InitStatus:
 * WDGM_EB_INIT_STATUS_INIT   The WdgM shall be initialized,
 *                         respectively stay initialized.
 * WDGM_EB_INIT_STATUS_DEINIT The WdgM shall be de-initialized,
 *                         respectively stay de-initialized.
 *
 * \param[inout] InitStatus The caller of this API (WdgM)
 *               provides the current initial status,
 *               the expected initial status for the
 *               WdgM shall be returned in case E_OK is returned.
 *
 * \return Success of operation
 * \retval E_OK     The returned value in InitStatus is valid.
 *                  The WdgM changes to the expected state.
 * \retval E_NOT_OK The returned value is not valid and will be ignored.
 *                  WdgM continues normal operation.
 */
extern FUNC(Std_ReturnType, WDGM_CODE) Supervisor_WdgM_GetExpectedInitStateCallout
(
  P2VAR(WdgM_EB_InitStatusType, AUTOMATIC, WDGM_APPL_DATA) InitStatus
);

/** \brief Provide actual / get expected WdgM Mode
 *
 * The callout is invoked at the beginning
 * of WdgM_MainFunction cycle if WdgM is initialized and the prior
 * call to WdgMGetExpectedInitStateCallout
 * also returned WDGM_EB_INIT_STATUS_INIT.
 *
 * \param[inout] WdgMMode The caller of this API (WdgM)
 *               provides the current mode,
 *               the expected WdgM mode
 *               shall be returned in case E_OK is returned.
 *
 * \return Success of operation
 * \retval E_OK     The WdgM shall perform a mode switch
 *                  to the mode stored in the argument WdgMMode.
 * \retval E_NOT_OK The returned value is not valid and will be ignored.
 *                  WdgM continues normal operation.
 */
extern FUNC(Std_ReturnType, WDGM_CODE) Supervisor_WdgM_GetExpectedWdgMModeCallout
(
  P2VAR(WdgM_ModeType, AUTOMATIC, WDGM_APPL_DATA) WdgMMode
);

/** \brief Get elapsed time
 *
 * \param[inout] PreviousTime The old time is passed in order to calculate the
 *               difference with respect to the actual time. The actual time is
 *               returned via this variable.
 * \param[out] ElapsedTime The elapsed time with respect to the time passed via parameter
 *             \a PreviousTime.
 */
extern FUNC(void, WDGM_CODE) Supervisor_WdgM_GetElapsedTimeCallout
(
  P2VAR(uint32, AUTOMATIC, WDGM_APPL_DATA) PreviousTime,
  P2VAR(uint32, AUTOMATIC, WDGM_APPL_DATA) ElapsedTime
);





#define WDGM_STOP_SEC_CALLOUT_CODE_ASIL_D
#include <WdgM_MemMap.h>

/*==================[external constants]=========================================================*/

/*==================[external data]==============================================================*/

#endif /* ifndef WDGM_CALLOUTS_H */
/*==================[end of file]================================================================*/
