/**
 * \file
 *
 * \brief AUTOSAR E2EXf
 *
 * This file contains the implementation of the AUTOSAR
 * module E2EXf.
 *
 * \version 1.0.37
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef E2EXF_CFG_H
#define E2EXF_CFG_H

/*==================[includes]==============================================*/

#include <Std_Types.h>

/*==================[macros]================================================*/

#if (defined E2EXF_VERSION_INFO_API) /* To prevent double declaration */
#error E2EXF_VERSION_INFO_API already defined
#endif /* (defined E2EXF_VERSION_INFO_API) */

/** \brief This macro specifies if the E2EXf_GetVersionInfo API is enabled by XfrmVersionInfoApi. 
  *        */
#define E2EXF_VERSION_INFO_API   STD_OFF


#if (defined E2EXF_XFRMBUFFERLENGTH_TYPE) /* To prevent double declaration */
#error E2EXF_XFRMBUFFERLENGTH_TYPE already defined
#endif /* (defined E2EXF_XFRMBUFFERLENGTH_TYPE) */

/** \brief Type of buffer length (uint32 or uint16) according to configuration parameter 
  *        XfrmBufferLengthType. */
#define E2EXF_XFRMBUFFERLENGTH_TYPE   uint16


#if (defined E2EXF_IN_USE) /* To prevent double declaration */
#error E2EXF_IN_USE already defined
#endif /* (defined E2EXF_IN_USE) */

/** \brief This macro specifies if E2EXf module is in use. */
#define E2EXF_IN_USE   STD_ON


#if (defined E2EXF_WAIT_FOR_FIRST_DATA_INIT_VALUE) /* To prevent double declaration */
#error E2EXF_WAIT_FOR_FIRST_DATA_INIT_VALUE already defined
#endif /* (defined E2EXF_WAIT_FOR_FIRST_DATA_INIT_VALUE) */

/** \brief This macro specifies the initial value of WaitForFirstData profile parameter according 
  *        to configuration parameter E2EWaitForFirstData. */
#define E2EXF_WAIT_FOR_FIRST_DATA_INIT_VALUE   FALSE


#if (defined E2ESM_MAX_WINDOW_SIZE) /* To prevent double declaration */
#error E2ESM_MAX_WINDOW_SIZE already defined
#endif /* (defined E2ESM_MAX_WINDOW_SIZE) */

/** \brief This macro specifies the maximum value of all configured windowSize profile parameter 
  *        values. */
#define E2ESM_MAX_WINDOW_SIZE   10U


/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef E2EXF_CFG_H  */
/*==================[end of file]===========================================*/
