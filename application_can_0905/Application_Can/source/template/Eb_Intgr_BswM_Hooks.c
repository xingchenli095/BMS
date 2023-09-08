/**
 * \file
 *
 * \brief AUTOSAR ApplTemplates
 *
 * This file contains the implementation of the AUTOSAR
 * module ApplTemplates.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2016 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]============================================*/

#include <Std_Types.h>                  /* AUTOSAR standard types        */
#include <TSAutosar.h>                  /* EB specific standard types    */
#include <Eb_Intgr_BswM_Hooks.h>        /* Callout function declarations */
#include <FreeTimer.h>                 


/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/
uint32 CurrentTime;
time_stamp_t TimeStamp;
/*==================[external function definitions]=========================*/

#define BSWM_START_SEC_CODE
#include <MemMap.h>

/*------------------[User callouts]------------------------------------------*/

/* Function Eb_Intgr_BswM_Hook_OnStartupTwoA is call from context BswM_Act_HookOnStartupTwoA belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnStartupTwoA(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnStartupTwoA = CurrentTime;
}

/* Function Eb_Intgr_BswM_Hook_OnStartupTwoB is call from context BswM_Act_HookOnStartupTwoB belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnStartupTwoB(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnStartupTwoB = CurrentTime;
}

/* Function Eb_Intgr_BswM_Hook_OnPrpShutdown is call from context BswM_Act_HookOnPrpShutdown belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnPrpShutdown(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnPrpShutdown = CurrentTime;
}

/* Function Eb_Intgr_BswM_Hook_OnGoOffOneA is call from context BswM_Act_HookOnGoOffOneA belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnGoOffOneA(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnGoOffOneA = CurrentTime;
}

/* Function Eb_Intgr_BswM_Hook_OnGoOffOneB is call from context BswM_Act_HookOnGoOffOneB belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnGoOffOneB(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnGoOffOneB = CurrentTime;
}

/* Function Eb_Intgr_BswM_Hook_OnRunTwo is call from context BswM_Act_HookOnRunTwo belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnRunTwo(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnRunTwo = CurrentTime;
}

/* Function Eb_Intgr_BswM_Hook_OnPostRun is call from context BswM_Act_HookOnPostRun belonging to BswMAction */
FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnPostRun(void)
{
	/*Get current time*/
	FreeTimer_StartTimeMeasurement(&CurrentTime);
	/*convert current time to us*/
	CurrentTime = FreeTimer_ConvertTicks2Us(CurrentTime);
	TimeStamp.Time_Stamp_Hook_OnPostRun = CurrentTime;
}

#define BSWM_STOP_SEC_CODE
#include <MemMap.h>


/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
