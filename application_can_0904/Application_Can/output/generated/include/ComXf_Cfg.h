/**
 * \file
 *
 * \brief AUTOSAR ComXf
 *
 * This file contains the implementation of the AUTOSAR
 * module ComXf.
 *
 * \version 1.0.40
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef COMXF_CFG_H
#define COMXF_CFG_H
/*==================[includes]==============================================*/

#include <Std_Types.h>           /* EB specific standard types */

/*==================[macros]================================================*/

#if (defined COMXF_VERSION_INFO_API) /* To prevent double declaration */
#error COMXF_VERSION_INFO_API already defined
#endif /* (defined COMXF_VERSION_INFO_API) */

/** \brief This macro specifies if the ComXf_GetVersionInfo API is enabled by XfrmVersionInfoApi. 
  *        */
#define COMXF_VERSION_INFO_API   STD_OFF


#if (defined COMXF_DEV_ERROR_DETECT) /* To prevent double declaration */
#error COMXF_DEV_ERROR_DETECT already defined
#endif /* (defined COMXF_DEV_ERROR_DETECT) */

/** \brief This macro specifies if the Development Error Detection and Notification is enabled 
  *        according to configuration parameter XfrmDevErrorDetect. */
#define COMXF_DEV_ERROR_DETECT   STD_ON


#if (defined COMXF_XFRMBUFFERLENGTHTYPE_ISUINT32) /* To prevent double declaration */
#error COMXF_XFRMBUFFERLENGTHTYPE_ISUINT32 already defined
#endif /* (defined COMXF_XFRMBUFFERLENGTHTYPE_ISUINT32) */

/** \brief Type of buffer length (uint32 or uint16) according to configuration parameter 
  *        XfrmBufferLengthType. */
#define COMXF_XFRMBUFFERLENGTHTYPE_ISUINT32   STD_OFF


/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef COMXF_CFG_H  */
/*==================[end of file]===========================================*/
