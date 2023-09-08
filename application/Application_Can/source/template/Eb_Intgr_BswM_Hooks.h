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

#ifndef EB_INTGR_BSWM_HOOKS_H
#define EB_INTGR_BSWM_HOOKS_H


/*==================[includes]==============================================*/

#include <TSAutosar.h>     /* EB specific standard types */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/
typedef struct time_stamp_s time_stamp_t;

struct time_stamp_s
{
	uint32 Time_Stamp_Hook_OnStartupTwoA;	/* Time stamp when Eb_Intgr_BswM_Hook_OnStartupTwoA is call */
	uint32 Time_Stamp_Hook_OnStartupTwoB;	/* Time stamp when Eb_Intgr_BswM_Hook_OnStartupTwoB is call */
    uint32 Time_Stamp_Hook_OnRunTwo;	    /* Time stamp when Eb_Intgr_BswM_Hook_OnRunTwo is call */
    uint32 Time_Stamp_Hook_OnPostRun;	    /* Time stamp when Eb_Intgr_BswM_Hook_OnPostRun is call */
    uint32 Time_Stamp_Hook_OnPrpShutdown;	/* Time stamp when Eb_Intgr_BswM_Hook_OnPrpShutdown is call */
    uint32 Time_Stamp_Hook_OnGoOffOneA;	    /* Time stamp when Eb_Intgr_BswM_Hook_OnGoOffOneA is call */
    uint32 Time_Stamp_Hook_OnGoOffOneB;	    /* Time stamp when Eb_Intgr_BswM_Hook_OnGoOffOneB is call */
};

extern time_stamp_t TimeStamp;
/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/* AUTOSAR Memory Mapping - start section for code */
#define BSWM_START_SEC_CODE
#include <MemMap.h>


extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnStartupTwoA(void);
extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnStartupTwoB(void);
extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnRunTwo(void);
extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnPostRun(void);
extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnPrpShutdown(void);
extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnGoOffOneA(void);
extern FUNC(void, BSWM_APPL_CODE) Eb_Intgr_BswM_Hook_OnGoOffOneB(void);


#define BSWM_STOP_SEC_CODE
#include <MemMap.h>


/*==================[internal function definitions]=========================*/


#endif /* ifndef EB_INTGR_BSWM_USERCALLOUTS_H */

/*==================[end of file]===========================================*/
