#ifndef BSWM_ECUM_H
#define BSWM_ECUM_H

/**
 * \file
 *
 * \brief AUTOSAR BswM
 *
 * This file contains the implementation of the AUTOSAR
 * module BswM.
 *
 * \version 1.16.0
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

 /* \addtogroup Mode Management Stack
  * @{ */

/*==================[includes]===============================================*/

#include <EcuM.h>   /* EcuM types */

/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

#define BSWM_START_SEC_CODE
#include <BswM_MemMap.h>

/** \brief Indicates the current ECU Operation Mode (Called by EcuM).
 **
 ** This function is called by EcuM to indicate the current ECU Operation Mode.
 **
 ** Precondition: None
 **
 ** \param[in]    CurrentState - The requested ECU Operation Mode.
 ** \param[inout] None.
 ** \param[out]   None.
 **
 ** \ServiceID{0x0F}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous} */
extern FUNC(void, BSWM_CODE) BswM_EcuM_CurrentState
(
EcuM_StateType CurrentState
);

/** \brief Indicates the current state of a wakeup source (Called by EcuM).
 **
 ** This function is called by EcuM to indicate the current state of a wakeup source.
 **
 ** Precondition: None
 **
 ** \param[in]    source - Wakeup source(s) that changed state.
 **               state  - The new state of the wakeup source(s) .
 ** \param[inout] None.
 ** \param[out]   None.
 **
 ** \ServiceID{0x10}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous} */
extern FUNC(void, BSWM_CODE) BswM_EcuM_CurrentWakeup
(
EcuM_WakeupSourceType source,
EcuM_WakeupStatusType state
);

#define BSWM_STOP_SEC_CODE
#include <BswM_MemMap.h>

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

/** @} doxygen end group definition */
#endif /* ifndef BSWM_ECUM_H */
/*==================[end of file]============================================*/

/*==================[end of file]============================================*/
