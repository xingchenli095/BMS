
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

/*==================[includes]====================================================================*/

#include <CryIf.h>

#include <Csm_Types.h>
#include <Csm_Int_Cfg.h>
#include <Csm_Cfg.h>


/*==================[macros]======================================================================*/

/*==================[type definitions]============================================================*/

/*==================[internal function declarations]==============================================*/

/*==================[internal constants]==========================================================*/

/*==================[internal data]===============================================================*/

/*==================[external constants]==========================================================*/

#define CSM_START_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/* Job PrimitiveInfos */
/* !LINKSTO CSM.Dsn.Api/Consts/00001,1,
            CSM.Req.Gen/Crypto_PrimitiveInfoType/00001,1,
            CSM.Req.Gen/Crypto_PrimitiveInfoType/00002,1,
            CSM.Req.Gen/Crypto_PrimitiveInfoType/00003,1
 */

CONST(Crypto_PrimitiveInfoType, CSM_CONST) Csm_PI_CsmJob_Pdu_SecuredIn_R_CsmPrim_MacVer_SecOC =
{
  24U,
  CRYPTO_MACVERIFY,
  {
    CRYPTO_ALGOFAM_AES,
    CRYPTO_ALGOFAM_NOT_SET,
    16U,
    CRYPTO_ALGOMODE_CMAC
  }
};

CONST(Crypto_PrimitiveInfoType, CSM_CONST) Csm_PI_CsmJob_Pdu_SecuredOut_T_CsmPrim_MacGen_SecOC =
{
  3U,
  CRYPTO_MACGENERATE,
  {
    CRYPTO_ALGOFAM_AES,
    CRYPTO_ALGOFAM_NOT_SET,
    16U,
    CRYPTO_ALGOMODE_CMAC
  }
};

/* Job JobPrimitiveInfos */
/* !LINKSTO CSM.Dsn.Api/Consts/00002,1 */

CONST(Crypto_JobPrimitiveInfoType, CSM_CONST) Csm_JPI_CsmJob_Pdu_SecuredIn_R =
{
  CSM_CBK_EMPTY,
  &Csm_PI_CsmJob_Pdu_SecuredIn_R_CsmPrim_MacVer_SecOC,
  0U,
#if defined(CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R)
  CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R,
#else  /* #if defined(CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R) */
  0U,
#endif /* #if defined(CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredIn_R) */
  CRYPTO_PROCESSING_SYNC,
  STD_OFF
};

CONST(Crypto_JobPrimitiveInfoType, CSM_CONST) Csm_JPI_CsmJob_Pdu_SecuredOut_T =
{
  CSM_CBK_EMPTY,
  &Csm_PI_CsmJob_Pdu_SecuredOut_T_CsmPrim_MacGen_SecOC,
  0U,
#if defined(CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T)
  CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T,
#else  /* #if defined(CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T) */
  1U,
#endif /* #if defined(CryIfConf_CryIfKey_CryIfKey_Pdu_SecuredOut_T) */
  CRYPTO_PROCESSING_SYNC,
  STD_OFF
};

/* Job JobInfos */
/* !LINKSTO CSM.Dsn.Api/Consts/00003,1 */

CONST(Crypto_JobInfoType, CSM_CONST) Csm_JI_CsmJob_Pdu_SecuredIn_R =
{
  0U,
  0U
};

CONST(Crypto_JobInfoType, CSM_CONST) Csm_JI_CsmJob_Pdu_SecuredOut_T =
{
  1U,
  0U
};

#define CSM_STOP_SEC_CONST_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external data]===============================================================*/

#define CSM_START_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/* Jobs */
/* !LINKSTO CSM.Dsn.Api/Datas/00002,1 */

VAR(Crypto_JobType, CSM_APPL_DATA) Csm_JobConfigurations[CSM_JOB_COUNT] =
{
  {
    0,
    CRYPTO_JOBSTATE_IDLE,
    {
      NULL_PTR, 0U,
      NULL_PTR, 0U,
      NULL_PTR, 0U,
      NULL_PTR, NULL_PTR,
      NULL_PTR, NULL_PTR,
          NULL_PTR,
      CRYPTO_OPERATIONMODE_SINGLECALL
    },
    &Csm_JPI_CsmJob_Pdu_SecuredIn_R,
    &Csm_JI_CsmJob_Pdu_SecuredIn_R,
    CSM_KEY_EMPTY
  },
  {
    1,
    CRYPTO_JOBSTATE_IDLE,
    {
      NULL_PTR, 0U,
      NULL_PTR, 0U,
      NULL_PTR, 0U,
      NULL_PTR, NULL_PTR,
      NULL_PTR, NULL_PTR,
          NULL_PTR,
      CRYPTO_OPERATIONMODE_SINGLECALL
    },
    &Csm_JPI_CsmJob_Pdu_SecuredOut_T,
    &Csm_JI_CsmJob_Pdu_SecuredOut_T,
    CSM_KEY_EMPTY
  },
};

#define CSM_STOP_SEC_VAR_INIT_UNSPECIFIED
#include <Csm_MemMap.h>

/*==================[external function definitions]===============================================*/


/*==================[internal function definitions]===============================================*/

/*==================[end of file]=================================================================*/

