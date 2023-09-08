/**
 * \file
 *
 * \brief AUTOSAR CanIf
 *
 * This file contains the implementation of the AUTOSAR
 * module CanIf.
 *
 * \version 6.10.26
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef CANIF_CANTRCV_H
#define CANIF_CANTRCV_H

/*==================[inclusions]=============================================*/
#include <Can_GeneralTypes.h>   /* AUTOSAR CAN general types */
/*==================[macros]=================================================*/

/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

#define CANIF_START_SEC_CODE
#include <CanIf_MemMap.h>

/** \brief Transceiver mode indication callback function
 **
 ** This is the transceiver mode indication callback function.
 **
 ** Preconditions:
 ** - The parameter \p Transceiver must be a valid CanIf transceiver ID
 **
 ** \param[in] Transceiver Transceiver for which the mode is indicated
 ** \param[in] TransceiverMode Mode to which the transceiver switched
 **
 ** \ServiceID{0x18}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous}
 */
extern FUNC( void, CANIF_CODE ) CanIf_TrcvModeIndication
(
  uint8 Transceiver,
  CanTrcv_TrcvModeType TransceiverMode
);


/** \brief Indicate that the transceiver is running in PN communication mode
 **
 ** \param[in] Transceiver  Transceiver for which the mode is indicated
 **
 ** \ServiceId{0x1a}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous}
 */
extern FUNC( void, CANIF_CODE ) CanIf_ConfirmPnAvailability
(
  uint8 Transceiver
);

/** \brief Indicate that the transceiver has cleared the WufFlag
 **
 ** \param[in] Transceiver  Transceiver for which the mode is indicated
 **
 ** \ServiceId{0x20}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous}
 */
extern FUNC( void, CANIF_CODE ) CanIf_ClearTrcvWufFlagIndication
(
  uint8 Transceiver
);

/** \brief Indicate the reason for the wake up that the CAN transceiver has detected
 **
 ** \param[in] Transceiver  Transceiver for which the mode is indicated
 **
 ** \ServiceId{0x21}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous}
 */
extern FUNC( void, CANIF_CODE ) CanIf_CheckTrcvWakeFlagIndication
(
  uint8 Transceiver
);

#define CANIF_STOP_SEC_CODE
#include <CanIf_MemMap.h>

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#endif /* ifndef CANIF_CANTRCV_H */
/*==================[end of file]============================================*/
