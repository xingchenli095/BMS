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

/*==[Includes]================================================================*/

#include <Std_Types.h>
#include <WdgIf_Types.h>
#include <Wdg.h>


/*==[Macros]==================================================================*/

/*==[Types]===================================================================*/

/*==[Declaration of functions with internal linkage]==========================*/

/*==[Constants with internal linkage]=========================================*/

/*==[Variables with internal linkage]=========================================*/

/*==[Constants with external linkage]=========================================*/

/*==[Variables with external linkage]=========================================*/

/*==[Definition of functions with external linkage]===========================*/

#define WDG_START_SEC_CODE
#include <MemMap.h>


FUNC(void, WDG_CODE) Wdg_Init
(
  P2CONST(Wdg_ConfigType, AUTOMATIC, WDG_APPL_CONST) ConfigPtr
)
{
   (void)ConfigPtr;
}


FUNC(Std_ReturnType, WDG_CODE) Wdg_SetMode
(
   WdgIf_ModeType Mode
)
{
   (void)Mode;
   
   return E_OK;
}

FUNC(void, WDG_CODE) Wdg_SetTriggerCondition
(
   uint16 timeout
)
{
   (void)timeout;
}


#define WDG_STOP_SEC_CODE
#include <MemMap.h>

/*==[Definition of functions with internal linkage]===========================*/

