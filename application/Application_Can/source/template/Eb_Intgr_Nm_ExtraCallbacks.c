/**
 * \file
 *
 * \brief AUTOSAR Nm
 *
 * This file contains the implementation of the AUTOSAR
 * module Nm.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2017 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]============================================*/

#include <Nm_Trace.h>

#include <TSAutosar.h>     /* EB specific standard types, TS_PARAM_UNUSED() */

#include <Nm_Cbk.h>        /* Extra callback functions of Nm */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

#define NM_START_SEC_CODE
#include <MemMap.h>

/*----------------------[Nm_PduRxIndication]----------------------------------*/
#if (NM_PDU_RX_INDICATION_ENABLED == STD_ON)
FUNC(void, NM_CODE) Nm_PduRxIndication
(
  const NetworkHandleType nmNetworkHandle
)
{
  /* Implement here the functionality to notify an NM message has been received
   * This functionality is only available if 'NmPduRxIndicationEnabled' is set to TRUE */

  TS_PARAM_UNUSED(nmNetworkHandle); /* remove if parameter is used */

}
#endif

/*----------------------[Nm_RepeatMessageIndication]--------------------------*/
#if (NM_REPEAT_MESSAGE_INDICATION == STD_ON)
FUNC(void, NM_CODE) Nm_RepeatMessageIndication
(
  const NetworkHandleType nmNetworkHandle
)
{
  /*  This function indicates an NM message with Repeat Message Request Bit
   *  set has been received
   *  This function is only available if NmRepeatMsgIndEnabled is set to TRUE. */

  TS_PARAM_UNUSED(nmNetworkHandle);  /* remove if parameter is used */

}
#endif

/*----------------------[Nm_TxTimeoutException]-------------------------------*/
FUNC(void, NM_CODE) Nm_TxTimeoutException
(
  const NetworkHandleType nmNetworkHandle
)
{
  /*  This function indicates an attempt to send an NM message has failed
   *  The function  Nm_TxTimeoutException will be called from BusNms when
   *  the NM Message Tx Timeout Timer expires. */

  TS_PARAM_UNUSED(nmNetworkHandle);  /* remove if parameter is used */

}

/*----------------------[Nm_CarWakeUpIndication]-------------------------------*/
#if (NM_CAR_WAKEUPRX_INDICATION == STD_ON)
FUNC(void, NM_CODE) Nm_CarWakeUpIndication
(
  const NetworkHandleType nmChannelHandle
)
{
  /*  This funtion is only available if  NmCarWakeUpRxEnabled is set to TRUE
   *
   *  The application, called by NmCarWakeUpCallback, is responsible to
   *  manage the Car Wake Up (CWU) request and distribute the Request to
   *  other Nm channels by setting the CWU bit in its own Nm message.
   *  This application has to drop the CWU request if the request is
   *  not repeated within a specific time. If the <bus>Nm calls
   *  Nm_CarWakeUpIndication, the NM Interface shall call the callback function
   *  defined by NmCarWakeUpCallback with nmNetworkHandle as parametere */

  TS_PARAM_UNUSED(nmChannelHandle);  /* remove if parameter is used */

}
#endif

/*----------------------[Nm_CoordReadyToSleepIndication]-------------------------------*/
#if (NM_BUS_SYNCHRONIZATION_ENABLED == STD_ON)
FUNC(void, NM_CODE) Nm_CoordReadyToSleepIndication
(
 const NetworkHandleType nmChannelHandle
)
{
  /* This functionality is only available if Bus synchronization is enabled
   *
   * This function indicates the co-ordinator is ready to sleep. It sets
   * an indication, when the NM Coordinator Sleep Ready bit in the Control
   * Bit Vector is set */

  TS_PARAM_UNUSED(nmChannelHandle);  /* remove if parameter is used */

}
#endif
/*----------------------[Nm_StateChangeNotificationCallout]-------------------------------*/
#if (NM_STATE_CHANGE_NOTIFICATION_CALLOUT == STD_ON)
FUNC(void, NM_CODE) Nm_StateChangeNotificationCallout
(
  const NetworkHandleType nmNetworkHandle,
  const Nm_StateType nmPreviousState,
  const Nm_StateType nmCurrentState
)
{
  /* This functionality is only available if state change callback is enabled.
   *
   * Nm_StateChangeNotification() forwards the values of the previous state
   * and current state to this function.
   * This is an additional EB specific callout function which can be implemented
   * by the user for handling the state changes in the BusNm modules.
   */
  TS_PARAM_UNUSED(nmNetworkHandle);  /* remove if parameter is used */
  TS_PARAM_UNUSED(nmPreviousState);  /* remove if parameter is used */
  TS_PARAM_UNUSED(nmCurrentState);   /* remove if parameter is used */
}
#endif

#define NM_STOP_SEC_CODE
#include <MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
