/**
 * \file
 *
 * \brief AUTOSAR Application_Can
 *
 * This file contains the implementation of the AUTOSAR
 * module Application_Can.
 *
 * \version 1.0.10
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*
#ifndef I_KNOW_THAT_THIS_CODE_IS_NOT_FOR_PRODUCTION
#error "the program must not be used in connection with series production"
#endif
*/

#include <WdgM_Appl.h>
#include <Std_Types.h>            /* AUTOSAR Standard Types                   */
#include <WdgM.h>                 /* AUTOSAR WdgM                             */
#include <WdgM_Callouts.h>
#include <WdgM_Cfg.h>
#include <Rte_SWC_AppStateHandler.h>
#include "FreeTimer.h"                    /* Own header file                   */

#define WDGM_START_SEC_CODE
#include "MemMap.h"

/*******************************************************************************
**                                                                            **
** FUNC-NAME     : WdgM_Appl_TriggerTaskCom                                   **
**                                                                            **
** DESCRIPTION   : Triggers the Watchdog in the Task_Com                      **
**                                                                            **
** PRECONDITIONS : ---                                                        **
**                                                                            **
** GLOBAL DATA   : ---                                                        **
**                                                                            **
** PARAMETER     : ---                                                        **
**                                                                            **
** RETURN        : ---                                                        **
**                                                                            **
** REMARKS       : ---                                                        **
**                                                                            **
*******************************************************************************/


FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_TriggerSWC_Cyclic(void)
{
  WdgM_CheckpointReached
  (
      WdgMConf_WdgMSupervisedEntity_WDGM_SE_TASK_SWC_Cyclic,
      WdgMConf_WdgMCheckpoint_WdgMCheckpoint_TASK_SWC_Cyclic
  );
}  

FUNC(void, WDGM_APPL_CODE)WdgM_Appl_WdgM_DeadLineMonitorStart(void)
{
    WdgM_CheckpointReached
  (
      WdgMConf_WdgMSupervisedEntity_WdgM_DeadLineMonitor,
      WdgMConf_WdgMCheckpoint_DeadLineStart
  );

}

FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_DeadLineMonitorStop (void)
{
  	  WdgM_CheckpointReached
  (
      WdgMConf_WdgMSupervisedEntity_WdgM_DeadLineMonitor,
      WdgMConf_WdgMCheckpoint_DeadLineStop
  );

}


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
FUNC(Std_ReturnType, WDGM_CODE) Supervisor_WdgM_GetExpectedInitStateCallout
(
  P2VAR(WdgM_EB_InitStatusType, AUTOMATIC, WDGM_APPL_DATA) InitStatus
  )
  {	 
	uint8 currentMode;
	currentMode = Rte_Mode_AppState_AppStateMode();
	switch(currentMode)
	{
		case EB_INTGR_APP_STARTUP:
        
			*InitStatus = WDGM_EB_INIT_STATUS_INIT;
        
			break;
		case EB_INTGR_APP_ACTIVE:
        
			*InitStatus = WDGM_EB_INIT_STATUS_INIT;

			break;
		case EB_INTGR_APP_INACTIVE:
        
			*InitStatus = WDGM_EB_INIT_STATUS_DEINIT;
        
			break;
		default:
			break;
	}
  	return E_OK;
  }

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
FUNC(Std_ReturnType, WDGM_CODE) Supervisor_WdgM_GetExpectedWdgMModeCallout
(
  P2VAR(WdgM_ModeType, AUTOMATIC, WDGM_APPL_DATA) WdgMMode
  )
  {
	uint8 currentMode;
    Std_ReturnType RetValue = 0U;
	currentMode = Rte_Mode_AppState_AppStateMode();
	switch(currentMode)
	{
		case EB_INTGR_APP_STARTUP:
			
			*WdgMMode = WdgMConf_WdgMMode_WDGM_STARTUP;
			RetValue = E_OK;
		  break;
		case EB_INTGR_APP_ACTIVE:
			
			*WdgMMode = WdgMConf_WdgMMode_WDGM_NORMAL_OPERATION;
			RetValue = E_OK;
		  break;
		case EB_INTGR_APP_INACTIVE:
			
			*WdgMMode = WdgMConf_WdgMMode_WDGM_SHUTDOWN;
			RetValue = E_OK;
		  break;
		default:
			
			*WdgMMode = WdgMConf_WdgMMode_WDGM_NORMAL_OPERATION;
			RetValue = E_NOT_OK;
		  break;
	}

	return RetValue;
  }


/** \brief Get elapsed time
 *
 * \param[inout] PreviousTime The old time is passed in order to calculate the
 *               difference with respect to the actual time. The actual time is
 *               returned via this variable.
 * \param[out] ElapsedTime The elapsed time with respect to the time passed via parameter
 *             \a PreviousTime.
 */
 
FUNC(void, WDGM_CODE) Supervisor_WdgM_GetElapsedTimeCallout
(
  P2VAR(uint32, AUTOMATIC, WDGM_APPL_DATA) PreviousTime,
  P2VAR(uint32, AUTOMATIC, WDGM_APPL_DATA) ElapsedTime
  
  )
  {
	/*input and output parameters are in us*/
	/*FreeTimer_StartTimeMeasurement sets curent time in ticks inside the given parameter*/
	uint32 CurrentTime;
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	/*calculate elapsed time*/
	*ElapsedTime = CurrentTime - *PreviousTime;
	/*update previous time to current time*/
	*PreviousTime = CurrentTime;
	
  }



#define WDGM_STOP_SEC_CODE
#include "MemMap.h"

/*** End of file **************************************************************/

