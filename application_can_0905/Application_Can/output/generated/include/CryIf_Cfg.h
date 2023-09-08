/**
 * \file
 *
 * \brief AUTOSAR CryIf
 *
 * This file contains the implementation of the AUTOSAR
 * module CryIf.
 *
 * \version 1.0.32
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef CRYIF_CFG_H
#define CRYIF_CFG_H

/* !LINKSTO SWS_CryIf_00007, 1 */

/*==================[misra deviations]============================================================*/

/*==================[inclusions]==================================================================*/

/* !LINKSTO EB_CryIf_00011, 1 */
#include <Std_Types.h>
#include <Csm_Types.h>

#include <Crypto.h>

/*==================[macros]======================================================================*/

/* !LINKSTO CryIf.Dsn.NoCodeUnconfiguredKeyMgmt, 1 */
#if (defined CRYIF_API_ENABLED_KEYMNGMNT)
#error CRYIF_API_ENABLED_KEYMNGMNT is already defined
#endif
/** \brief Key management API enabled/disabled info */
/* !LINKSTO CryIf.Dsn.Api/Macros/00002, 1 */
#define CRYIF_API_ENABLED_KEYMNGMNT STD_ON

#if (defined CRYIF_API_ENABLED_DEVERRORDETECT)
#error CRYIF_API_ENABLED_DEVERRORDETECT is already defined
#endif
/** \brief Configuration parameter CryIfDevErrorDetection */
/* !LINKSTO CryIf.Dsn.Api/Macros/00001, 1 */
#define CRYIF_API_ENABLED_DEVERRORDETECT STD_ON

#if (defined CRYIF_API_ENABLED_KEYGETSTATUS)
#error CRYIF_API_ENABLED_KEYGETSTATUS is already defined
#endif
/** \brief Configuration parameter CryIfEbEnhancementApiCryIfKeyGetStatus */
/* !LINKSTO CryIf.Dsn.Api/Macros/00013, 1 */
#define CRYIF_API_ENABLED_KEYGETSTATUS STD_OFF

#if (defined CRYIF_API_ENABLED_KEYSETINVALID)
#error CRYIF_API_ENABLED_KEYSETINVALID is already defined
#endif
/** \brief Configuration parameter CryIfEbEnhancementApiCryIfKeySetInvalid */
/* !LINKSTO CryIf.Dsn.Api/Macros/00014, 1 */
#define CRYIF_API_ENABLED_KEYSETINVALID STD_OFF

#if (defined CRYIF_API_ENABLED_VERSIONINFO)
#error CRYIF_API_ENABLED_VERSIONINFO is already defined
#endif
/** \brief Configuration parameter CryIfVersionInfoApi */
/* !LINKSTO CryIf.Dsn.Api/Macros/00005, 1 */
#define CRYIF_API_ENABLED_VERSIONINFO STD_OFF

#if (defined CRYIF_CHANNEL_COUNT)
#error CRYIF_CHANNEL_COUNT is already defined
#endif
/** \brief Number of CryIf channels */
/* !LINKSTO CryIf.Dsn.Api/Macros/00004, 1 */
#define CRYIF_CHANNEL_COUNT 1U

#if (defined CryIfConf_CryIfChannel_CryIfChannel_Crypto)
#error CryIfConf_CryIfChannel_CryIfChannel_Crypto is already defined
#endif
/** \brief CryIf channel CryIfChannel_Crypto */
#define CryIfConf_CryIfChannel_CryIfChannel_Crypto 0U


#if (defined CRYIF_KEY_COUNT)
#error CRYIF_KEY_COUNT is already defined
#endif
/** \brief Number of CryIf keys */
/* !LINKSTO CryIf.Dsn.Api/Macros/00009, 1 */
#define CRYIF_KEY_COUNT 2U

#if (defined CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R)
#error CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R is already defined
#endif
/** \brief CryIf key CryIfKey_Pdu_SecuredIn_R */
#define CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R 0U

#if (defined CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T)
#error CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T is already defined
#endif
/** \brief CryIf key CryIfKey_Pdu_SecuredOut_T */
#define CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T 1U


#if (defined CRYIF_MAX_KEY_ELEMENTS_IN_KEY)
#error CRYIF_MAX_KEY_ELEMENTS_IN_KEY is already defined
#endif
/** \brief Maximum number of key elements in a key */
/* !LINKSTO CryIf.Dsn.Api/Macros/00006, 1 */
#define CRYIF_MAX_KEY_ELEMENTS_IN_KEY 2U

#if (defined CRYIF_MAX_KEY_ELEMNT_COPY_SIZE)
#error CRYIF_MAX_KEY_ELEMNT_COPY_SIZE is already defined
#endif
/** \brief Maximum key size for key or element copy in bytes */
/* !LINKSTO CryIf.Dsn.Api/Macros/00010, 1 */
#define CRYIF_MAX_KEY_ELEMNT_COPY_SIZE 1U

/* --- Misc --- */

/* !LINKSTO CryIf.Req.Api/CRYIF_API_VERSION_430/00001,1 */
#if (defined CRYIF_API_VERSION_430)
  #error CRYIF_API_VERSION_430 is already defined
#endif /* #if (defined CRYIF_API_VERSION_430) */
#define CRYIF_API_VERSION_430  0x00U

/* !LINKSTO CryIf.Req.Api/CRYIF_API_VERSION_431/00001,1 */
#if (defined CRYIF_API_VERSION_431)
  #error CRYIF_API_VERSION_431 is already defined
#endif /* #if (defined CRYIF_API_VERSION_431) */
#define CRYIF_API_VERSION_431  0x01U

/* !LINKSTO CryIf.Req.Api/CRYIF_API_VERSION_440/00001,1 */
#if (defined CRYIF_API_VERSION_440)
  #error CRYIF_API_VERSION_440 is already defined
#endif /* #if (defined CRYIF_API_VERSION_440) */
#define CRYIF_API_VERSION_440  0x02U

/* !LINKSTO CryIf.Req.Api/CRYIF_API_VERSION_EB/00001,2 */
#if (defined CRYIF_API_VERSION_EB)
  #error CRYIF_API_VERSION_EB is already defined
#endif /* #if (defined CRYIF_API_VERSION_EB) */
#define CRYIF_API_VERSION_EB   0x0FU

#if (defined CRYIF_KEY_EMPTY)
  #error CRYIF_KEY_EMPTY is already defined
#endif /* #if (defined CRYIF_KEY_EMPTY) */
/** \brief Value of the empty key for services that to not need a Crypto key */
#define CRYIF_KEY_EMPTY 0xFFFFFFFFU

#if (defined CRYIF_API_VERSION)
#error CRYIF_API_VERSION is already defined
#endif
/** \brief  The API version that shall be supported by the CryIf. **/
/* !LINKSTO CryIf.Dsn.Api/Macros/00012,1 */
#define CRYIF_API_VERSION CRYIF_API_VERSION_EB

/*==================[declaration of types]========================================================*/

/*==================[declaration of external constants]===========================================*/

/*==================[declaration of external variables]===========================================*/

/*==================[declaration of external functions]===========================================*/

/*================================================================================================*/

#endif /* #ifndef CRYIF_CFG_H */

/*==================[end of file]=================================================================*/
