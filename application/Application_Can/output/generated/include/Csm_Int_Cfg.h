/**
 * \file
 *
 * \brief AUTOSAR Csm
 *
 * This file contains the implementation of the AUTOSAR
 * module Csm.
 *
 * \version 3.1.22
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef CSM_INT_CFG_H
#define CSM_INT_CFG_H

/*==================[misra deviations]============================================================*/

/*==================[includes]====================================================================*/

#include <Csm_Types.h>
#include <Csm_Cfg.h>
#include <Csm_Int_Types.h>

/*==================[macros]======================================================================*/

/* --- CryIf channels --- */

/** \brief  The value representing an empty CryIf channel reference in internal Csm_QueueType
 **/
#if (defined CSM_CHN_EMPTY)
  #error CSM_CHN_EMPTY is already defined
#endif
#define  CSM_CHN_EMPTY  0xFFFFFFFFU

/* --- Callbacks --- */

/** \brief  The value representing an empty callback in Crypto_JobPrimitiveInfoType
**/
#if (defined CSM_CBK_EMPTY)
#error CSM_CBK_EMPTY is already defined
#endif
#define  CSM_CBK_EMPTY  0xFFFFFFFFU
/** \brief  Number of Csm callbacks
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00018,1 */
#if (defined CSM_CBK_COUNT)
  #error CSM_CBK_COUNT is already defined
#endif
#define  CSM_CBK_COUNT  0x00000000U

/* --- Queues --- */

/** \brief  The value representing an empty queue
**/
#if (defined CSM_QUE_EMPTY)
#error CSM_QUE_EMPTY is already defined
#endif
#define  CSM_QUE_EMPTY            0xFFFFFFFFU
/** \brief  Csm callback 'CSM_QUE_CSMQUEUE_CRYPTO'
**/
/* !LINKSTO CSM.Dsn.Api/Macros/00019,1 */
#if (defined CSM_QUE_CSMQUEUE_CRYPTO)
#error CSM_QUE_CSMQUEUE_CRYPTO is already defined
#endif
#define  CSM_QUE_CSMQUEUE_CRYPTO  0x00000000U
/** \brief  Number of Csm queues
 **/
/* !LINKSTO CSM.Dsn.Api/Macros/00020,1 */
#if (defined CSM_QUE_COUNT)
  #error CSM_QUE_COUNT is already defined
#endif
#define  CSM_QUE_COUNT            0x00000001U

/* --- Queue sizes --- */

/** \brief  Size of Csm queue 'CSM_QUE_SIZE_CSMQUEUE_CRYPTO'
**/
/* !LINKSTO CSM.Dsn.Api/Macros/00021,1 */
#if (defined CSM_QUE_SIZE_CSMQUEUE_CRYPTO)
#error CSM_QUE_SIZE_CSMQUEUE_CRYPTO is already defined
#endif
#define  CSM_QUE_SIZE_CSMQUEUE_CRYPTO  0x0000000BU

/* --- Misc --- */

#if (defined CSM_API_JOBSTATE)
#error CSM_API_JOBSTATE is already defined
#endif
/** \brief  tbd **/
/* !LINKSTO CSM.Dsn.Api/Macros/00023,1 */

#define CSM_API_JOBSTATE jobState


#if (defined CSM_API_JOBPRIMITIVEINPUTOUTPUT)
#error CSM_API_JOBPRIMITIVEINPUTOUTPUT is already defined
#endif
/** \brief  tbd **/
/* !LINKSTO CSM.Dsn.Api/Macros/00024,1 */

#define CSM_API_JOBPRIMITIVEINPUTOUTPUT jobPrimitiveInputOutput


/*==================[type definitions]============================================================*/

/*==================[external constants]==========================================================*/

#define CSM_START_SEC_CONST_32
#include <Csm_MemMap.h>

/* !LINKSTO CSM.Req.Gen/CsmKeys/00001,1 */
 #if (CSM_API_ENABLED_KEYMNGMNT == STD_ON)
/* --- Keys --- */

/** \brief  List of configured Csm keys
 **/
extern CONST(uint32, CSM_CONST) Csm_Keys[CSM_KEY_COUNT];
#endif /* #if (CSM_API_ENABLED_KEYMNGMNT == STD_ON) */

#define CSM_STOP_SEC_CONST_32
#include <Csm_MemMap.h>

#define CSM_START_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/* --- Callbacks --- */


/* --- Queues --- */

/** \brief  List of configured Csm queues
 **/
extern CONSTP2VAR(Csm_QueueType, AUTOMATIC, CSM_APPL_DATA) Csm_Queues[CSM_QUE_COUNT];

/* --- Job additional configurations --- */

/** \brief  List of additional internal configuration sets per Csm job
 **/
extern CONST(Crypto_JobExtraCnfgType, CSM_CONST) Csm_JobExtraCnfg[CSM_JOB_COUNT];

#define CSM_STOP_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external data]===============================================================*/

#define CSM_START_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/* --- Queue element buffers --- */

/** \brief  Instances of configured Csm module queue data elements
 **/
extern VAR(Csm_QueueElementType, CSM_APPL_DATA) Csm_QueueElementsBuffer_CsmQueue_Crypto[CSM_QUE_SIZE_CSMQUEUE_CRYPTO];

/* --- Queues --- */

/** \brief  Instances of configured Csm module queues
 **/
extern VAR(Csm_QueueType, CSM_APPL_DATA) Csm_Queue_CsmQueue_Crypto;

/* --- Job additional datas --- */

/** \brief  List of additional internal data sets per Csm job
 **/
extern VAR(Crypto_JobExtraDataType, CSM_APPL_DATA) Csm_JobExtraData[CSM_JOB_COUNT];


#define CSM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external function declarations]==============================================*/

/*================================================================================================*/

#endif /* #ifndef CSM_INT_CFG_H */

/*==================[end of file]=================================================================*/

