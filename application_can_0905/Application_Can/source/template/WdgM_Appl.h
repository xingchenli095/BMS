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

#ifndef WDGM_APPL_H
#define WDGM_APPL_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include <Std_Types.h>     /* AUTOSAR standard types */

/*******************************************************************************
**                      external function declarations                        **
*******************************************************************************/

#define WDGM_START_SEC_CODE
#include "MemMap.h"

extern FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_TriggerSWC_Cyclic(void);

extern FUNC(void, WDGM_APPL_CODE)WdgM_Appl_WdgM_DeadLineMonitorStart(void);

extern FUNC(void, WDGM_APPL_CODE) WdgM_Appl_WdgM_DeadLineMonitorStop (void);

#define WDGM_STOP_SEC_CODE
#include "MemMap.h"

#endif /* WDGM_APPL_H                                                         */

/*** End of file **************************************************************/

