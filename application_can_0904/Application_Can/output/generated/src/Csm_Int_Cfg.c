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

/*==================[misra deviations]============================================================*/

/* MISRA-C:2012 Deviations
 *
 * MISRAC2012-1) Deviated Rule: 11.1 (required)
 *   Conversions shall not be performed between a pointer to a function and any other type.
 *
 *   Reason:
 *   The calls to callbacks accessible via Rte must be inserted in the array of API callbacks
 *   returning void. That's why the return value of Rte callbacks has to be casted.
 */

/*==================[includes]====================================================================*/

#include <Csm_Types.h>
#include <Csm_Int_Types.h>
#include <Csm_Int_Cfg.h>
#include <Csm_Cfg.h>

#include <CryIf.h>


/*==================[macros]======================================================================*/

/*==================[type definitions]============================================================*/

/*==================[internal function declarations]==============================================*/

/*==================[internal constants]==========================================================*/

/*==================[internal data]===============================================================*/

/*==================[external constants]==========================================================*/

#define CSM_START_SEC_CONST_32
#include <Csm_MemMap.h>

/* --- Keys --- */
/* !LINKSTO CSM.Dsn.Api/Consts/00005,1 */

/* !LINKSTO CSM.Req.Gen/CsmKeys/00001,1 */
#if (CSM_API_ENABLED_KEYMNGMNT == STD_ON)
CONST(uint32, CSM_CONST) Csm_Keys[CSM_KEY_COUNT] =
{
  0U, /* CryIfKey_Pdu_SecuredIn_R" */
  1U, /* CryIfKey_Pdu_SecuredOut_T" */
};
#endif /* #if (CSM_API_ENABLED_KEYMNGMNT == STD_ON) */

#define CSM_STOP_SEC_CONST_32
#include <Csm_MemMap.h>

#define CSM_START_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/* --- Callbacks --- */
/* !LINKSTO CSM.Dsn.Api/Consts/00004,2 */

/* --- Queues --- */
/* !LINKSTO CSM.Dsn.Api/Consts/00006,1 */

CONSTP2VAR(Csm_QueueType, AUTOMATIC, CSM_APPL_DATA) Csm_Queues[CSM_QUE_COUNT] =
{
  &(Csm_Queue_CsmQueue_Crypto),
};

/* --- Job additional configurations --- */
/* !LINKSTO CSM.Dsn.Api/Consts/00007,1 */

/* Deviation MISRAC2012-1 <START> */
CONST(Crypto_JobExtraCnfgType, CSM_CONST) Csm_JobExtraCnfg[CSM_JOB_COUNT] =
{
  {
    &Csm_Queue_CsmQueue_Crypto,
    NULL_PTR,
    NULL_PTR
  },
  {
    &Csm_Queue_CsmQueue_Crypto,
    NULL_PTR,
    NULL_PTR
  },
};
/* Deviation MISRAC2012-1 <STOP> */

#define CSM_STOP_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external data]===============================================================*/

#define CSM_START_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/* ---- Queue element buffers --- */
/* !LINKSTO CSM.Dsn.Api/Datas/00003,1 */

VAR(Csm_QueueElementType, CSM_APPL_DATA) Csm_QueueElementsBuffer_CsmQueue_Crypto[CSM_QUE_SIZE_CSMQUEUE_CRYPTO] =
{
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
  { NULL_PTR, NULL_PTR },
};

/* --- Queues --- */
/* !LINKSTO CSM.Dsn.Api/Datas/00005,1 */

VAR(Csm_QueueType, CSM_APPL_DATA) Csm_Queue_CsmQueue_Crypto =
{
  0U,
  FALSE,
  FALSE,
#if defined(CryIfConf_CryIfChannel_CryIfChannel_Crypto)
  CryIfConf_CryIfChannel_CryIfChannel_Crypto,
#else
  0U,
#endif
  0U,
  CSM_QUE_SIZE_CSMQUEUE_CRYPTO,
  NULL_PTR,
  &(Csm_QueueElementsBuffer_CsmQueue_Crypto[0U])
};

/* --- Job additional datas --- */
/* !LINKSTO CSM.Dsn.Api/Datas/00004,1 */

VAR(Crypto_JobExtraDataType, CSM_APPL_DATA) Csm_JobExtraData[CSM_JOB_COUNT] =
{
  { CSM_QL_NONE, FALSE, E_NOT_OK },
  { CSM_QL_NONE, FALSE, E_NOT_OK },
};

#define CSM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external function definitions]===============================================*/

/*==================[internal function definitions]===============================================*/

/*==================[end of file]=================================================================*/

