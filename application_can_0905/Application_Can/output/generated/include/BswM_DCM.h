#ifndef BSWM_DCM_H
#define BSWM_DCM_H

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

#include <Dcm_Types.h>     /* Dcm API */

/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

#define BSWM_START_SEC_CODE
#include <BswM_MemMap.h>

/** \brief Indicates communication modes (Called by DCM).
 **
 ** This function is called by DCM to indicate the current communication mode
 **
 ** Precondition: None
 **
 ** \param[in]    Network       - The communication channel that the diagnostic
 **                               mode corresponds to.
 **               RequestedMode - The indicated diagnostic communication mode.
 ** \param[inout] None.
 ** \param[out]   None.
 **
 ** \ServiceID{6}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous} */
extern FUNC(void, BSWM_CODE) BswM_Dcm_CommunicationMode_CurrentState(
NetworkHandleType Network,
Dcm_CommunicationModeType RequestedMode
);

/** \brief Indicates an updated application (Called by DCM).
 **
 ** This function is called by DCM in order to report an updated application.
 **
 ** Precondition: None
 **
 ** \param[in]    None.
 ** \param[inout] None.
 ** \param[out]   None.
 **
 ** \ServiceID{14}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous} */
extern FUNC(void, BSWM_CODE) BswM_Dcm_ApplicationUpdated
(
void
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
#endif /* ifndef BSWM_DCM_H */
/*==================[end of file]============================================*/

/*==================[end of file]============================================*/
