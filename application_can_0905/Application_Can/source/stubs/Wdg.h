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

#if (!defined WDG_H)
#define WDG_1_EB_H

/*==[Includes]================================================================*/

#include <WdgIf_Types.h>


/*==[Macros]==================================================================*/


/* Wdg_VersionMacros_Dummy */
#define WDG_AR_RELEASE_MAJOR_VERSION 4U
#define WDG_AR_RELEASE_MINOR_VERSION 0U

/*==[Types]===================================================================*/

typedef struct
{
   uint8 PBcfg_dummy;
} Wdg_ConfigType;

/*==[Declaration of functions with external linkage]==========================*/

#define WDG_START_SEC_CODE
#include <MemMap.h>

extern FUNC(void, EBSTUBS_CODE) Wdg_Init
(
  P2CONST(Wdg_ConfigType, AUTOMATIC, EBSTUBS_APPL_CONST) ConfigPtr
);

extern FUNC(Std_ReturnType, WDG_CODE) Wdg_SetMode
(
  WdgIf_ModeType Mode
);

extern FUNC(void, WDG_CODE) Wdg_SetTriggerCondition
(
  uint16 timeout
);


#define WDG_STOP_SEC_CODE
#include <MemMap.h>


#endif /* !defined WDG_1_EB_H */
