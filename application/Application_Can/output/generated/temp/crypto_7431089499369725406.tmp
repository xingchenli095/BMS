/**
 * \file
 *
 * \brief AUTOSAR Crypto
 *
 * This file contains the implementation of the AUTOSAR
 * module Crypto.
 *
 * \version 1.7.51
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */


/* !LINKSTO SWS_Crypto_00005, 1, SWS_Crypto_00012, 1 */

/*==[Misra deviations]============================================================================*/

/*
 * Misra-C:2012 Deviation List
 *
 * MISRAC2012-1) Deviated Rule: 16.3 (Required)
 * An unconditional break statement shall terminate every switch-clause.
 *
 * Reason:
 * The switch statement is used to avoid complex and difficult to read if/else constructs.
 * Implementing this in terms of conditional statements makes it more complex and makes it more
 * difficult to understand the code.
 *
 * MISRAC2012-2) Deviated Rule: 16.1 (Required)
 * All switch statements shall be well-formed.
 *
 * Reason:
 * This warning is raised because the rule 16.3 is violated. Since the rule above is now deviated
 * from, this warning is implicitly raised as well. The deviation is kept for the same reasons as
 * for the rule above.
 *
 * MISRAC2012-3) Deviated Rule: 13.5 (Required)
 * The right hand operand of a logical && or || operator shall not contain persistent side effects.
 *
 * Reason:
 * In DET checks, there is a specified order that needs to be followed when checking for development
 * errors. Rule 13.5 can not be followed here without making the DET checks more complex and
 * difficult to read.
 */

/*==[Includes]====================================================================================*/

#include <TSAutosar.h> /* EB specific standard types */
#include <SchM_Crypto.h>

/* !LINKSTO SWS_Crypto_00009, 1, SWS_Crypto_00010, 1 */
#include <Crypto.h>
#include <CryIf_Cbk.h>
#include <Crypto_Int.h>
#include <Crypto_Version.h>

/* !LINKSTO SWS_Crypto_00126, 1 */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
#include <Det.h>
#endif

/*==[Macros]======================================================================================*/

/*==[Types]=======================================================================================*/

/*==[Declaration of functions with internal linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>


/** \brief Subfunction to handle queuing and processing of a job.
 *
 * This function is called after dispatching and checks whether the job has to be put into the
 * queue or can be processed directly. If the job can be processed directly, the passed
 * processFunction is used.
 *
 * \param[in] ObjectId        Identifier of the crypto driver object that shall process the job.
 * \param[in] Job             Reference to the job that shall be processed.
 * \param[in] ProcessFunction Function of the process layer that shall be used to process the job.
 *
 * \returns Result of the job processing
 * \retval E_OK                                 Job has been put into the queue or
 *                                              successfully processed.
 * \retval E_NOT_OK                             Job could not be processed.
 * \retval CRYPTO_E_BUSY                        Request failed, the crypto driver
 *                                              object is busy.
 * \retval CRYPTO_E_KEY_NOT_VALID               Request failed, the key to be used is not valid.
 * \retval CRYPTO_E_KEY_SIZE_MISMATCH           Request failed, a key element has
 *                                              the wrong size.
 * \retval CRYPTO_E_QUEUE_FULL                  Request failed, the queue of the crypto driver
 *                                              object is full.
 * \retval CRYPTO_E_ENTROPY_EXHAUSTION          Request failed, the entropy is exhausted.
 * \retval CRYPTO_E_SMALL_BUFFER                Request failed, the provided buffer is
 *                                              too small to store the result.
 * \retval CRYPTO_E_JOB_CANCELED                Request failed, the synchronous job
 *                                              was canceled.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HandleQueuingAndProcessing
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Crypto_ProcessFuncPtr_t ProcessFunction
);

/** \brief Subfunction to handle cancellation of a job.
 *
 * This function attempts to cancel the requested job by removing it from the queue.
 * If the job is currently not in the queue, the cancellation request is forwarded to the process
 * layer.
 *
 * \param[in] ObjectId       Identifier of the crypto driver object that processes the job.
 * \param[in] Job            Reference to the job that shall be canceled.
 * \param[in] CancelFunction Function of the process layer that shall be used to cancel the job.
 *
 * \returns Result of the job cancellation attempt.
 * \retval E_OK              Job has been successfully canceled.
 * \retval E_NOT_OK          Job could not be canceled.
 * \retval CRYPTO_E_CANCELED Active job has been successfully canceled.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HandleQueuingAndCancellation
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Crypto_CancelFuncPtr_t CancelFunction
);
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
/** \brief Subfunction to check whether the mode of the job is provided if required by the service.
 *
 * This function checks whether the mode is not equal to zero if it is required by the service
 * according to SWS_Crypto_00071. If E_NOT_OK is returned and Det is enabled, CRYPTO_E_PARAM_HANDLE
 * shall be reported to the Det.
 *
 * \param[in] Job Reference to the job that shall be checked.
 *
 * \returns Result of the check.
 * \retval E_OK     Mode is provided or not required by the service.
 * \retval E_NOT_OK Mode is required by the service but not provided, i.e. it is set to 0U.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckMode
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Subfunction to check whether the length pointers of the job are provided if required by
 *         the service.
 *
 * This function checks whether all length pointer values are not equal to zero if they are required
 * by the service according to SWS_Crypto_00071. If E_NOT_OK is returned and Det is enabled,
 * CRYPTO_E_PARAM_VALUE shall be reported to the Det.
 *
 * \param[in] Job Reference to the job that shall be checked.
 *
 * \returns Result of the check.
 * \retval E_OK     All length pointers are provided or not required by the service.
 * \retval E_NOT_OK At least one length pointer is required by the service but not provided, i.e.
 *                  it points to a value of 0U.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckBufferPtrsVal
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Subfunction to check whether the pointers of the job are provided if required by the
 *         service.
 *
 * This function checks whether all pointers do not point to NULL_PTR if they are required by the
 * service according to SWS_Crypto_00071. If E_NOT_OK is returned and Det is enabled,
 * CRYPTO_E_PARAM_POINTER shall be reported to the Det.
 *
 * \param[in] Job Reference to the job that shall be checked.
 *
 * \returns Result of the check.
 * \retval E_OK     All pointers are provided or not required by the service.
 * \retval E_NOT_OK At least one pointer is required by the service but not provided, i.e. it
 *                  is a null pointer.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckBufferPtrs
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Subfunction to check whether the lengths of the job are provided if required by the
 *         service.
 *
 * This function checks whether all lengths are not equal to zero if they are required by the
 * service according to SWS_Crypto_00071. If E_NOT_OK is returned and Det is enabled,
 * CRYPTO_E_PARAM_VALUE shall be reported to the Det.
 *
 * \param[in] Job Reference to the job that shall be checked.
 *
 * \returns Result of the check.
 * \retval E_OK     All lengths are provided or not required by the service.
 * \retval E_NOT_OK At least one length is required by the service but not provided, i.e. it
 *                  is equal to 0U.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckBufferLen
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

#endif /* #if (CRYPTO_DEV_ERROR_DETECT == STD_ON) */


#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[Constants with internal linkage]=============================================================*/

/*==[Variables with internal linkage]=============================================================*/

/*==[Constants with external linkage]=============================================================*/

/*==[Variables with external linkage]=============================================================*/

#define CRYPTO_START_SEC_VAR_INIT_BOOLEAN
#include <Crypto_MemMap.h>

/** \brief Variable indicating whether the crypto driver has been initialized. */
VAR(boolean, CRYPTO_VAR) Crypto_Initialized = FALSE;

#define CRYPTO_STOP_SEC_VAR_INIT_BOOLEAN
#include <Crypto_MemMap.h>

/*==[Definition of functions with external linkage]===============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

/* !LINKSTO SWS_Crypto_91000, 1 */
FUNC(void, CRYPTO_CODE) Crypto_Init
(
  void
)
{
  /* !LINKSTO EB_Crypto_000061, 1 */
  if(Crypto_Initialized == FALSE)
  {

#if (STD_ON == CRYPTO_API_ENABLED_KEYMNGMNT)
    /* Forward initialization request to the process layer. */
    /* !LINKSTO EB_Crypto_00006, 1 */
    Crypto_PL_Init();

#endif /* #if (STD_ON == CRYPTO_API_ENABLED_KEYMNGMNT) */
    Crypto_Initialized = TRUE;
  }
}

#if (CRYPTO_VERSION_INFO_API == STD_ON)
/* !LINKSTO SWS_Crypto_91001_CORRECTION, 1 */
FUNC(void, CRYPTO_CODE) Crypto_GetVersionInfo
(
  P2VAR(Std_VersionInfoType, AUTOMATIC, CRYPTO_APPL_DATA) versioninfo
)
{
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
  /*  Check if result buffer is valid */
  if (NULL_PTR == versioninfo)
  {
    /* !LINKSTO SWS_Crypto_00047, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_GETVERSIONINFO,
      CRYPTO_E_PARAM_POINTER
    );
  }
  else
#endif
  {
    /* Copy version information to provided buffer */
    versioninfo->vendorID = CRYPTO_VENDOR_ID;
    versioninfo->moduleID = CRYPTO_MODULE_ID;
    versioninfo->sw_major_version = CRYPTO_SW_MAJOR_VERSION;
    versioninfo->sw_minor_version = CRYPTO_SW_MINOR_VERSION;
    versioninfo->sw_patch_version = CRYPTO_SW_PATCH_VERSION;
  }
}
#endif

/* !LINKSTO SWS_Crypto_91003, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_ProcessJob
(
  uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
  /* Check if the module is already initialized */
  if (FALSE == Crypto_Initialized)
  {
    /* !LINKSTO SWS_Crypto_00057, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_UNINIT
    );
    RetVal = E_NOT_OK;
  }
  /* Check if passed job is valid */
  else if (NULL_PTR == job)
  {
    /* !LINKSTO SWS_Crypto_00059, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_PARAM_POINTER
    );
    RetVal = E_NOT_OK;
  }
  /* Service and mode shall exist before we continue with further checks */
  /* CRYPTO_RANDOMGENERATE has the highest possible service id */
  else if (
           (E_NOT_OK == Crypto_CheckMode(job)) ||
           (CRYPTO_RANDOMGENERATE < job->jobPrimitiveInfo->primitiveInfo->service)
          )
  {
    /* !LINKSTO SWS_Crypto_00071, 1 */
    /* !LINKSTO SWS_Crypto_00064, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_PARAM_HANDLE
    );
    RetVal = E_NOT_OK;
  }
#endif /* if (CRYPTO_DEV_ERROR_DETECT == STD_ON) */


#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
  else if (E_NOT_OK == Crypto_CheckBufferPtrs(job))
  {
    /* !LINKSTO SWS_Crypto_00070, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_PARAM_POINTER
    );
    RetVal = E_NOT_OK;
  }
  /* Deviation MISRAC2012-3*/
  else if (
            (E_NOT_OK == Crypto_CheckBufferLen(job)) ||
            (E_NOT_OK == Crypto_CheckBufferPtrsVal(job))
          )
  {
    /* !LINKSTO SWS_Crypto_00142_CORRECTION, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_PARAM_VALUE
    );
    RetVal = E_NOT_OK;
  }
  else
#endif
  {
  RetVal = Crypto_ProcessJob_Dispatch(objectId, RetVal, job);
  }

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
  /* !LINKSTO SWS_Crypto_00137, 1 */
  if (CRYPTO_E_COUNTER_OVERFLOW == RetVal)
  {
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_PARAM_HANDLE
    );
  }
  /* !LINKSTO SWS_Crypto_00141_CORRECTION, 2 */
  else if (CRYPTO_E_ENTROPY_EXHAUSTION == RetVal)
  {
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_PROCESSJOB,
      CRYPTO_E_RE_ENTROPY_EXHAUSTED
    );
  }
  else
  {
    /* !LINKSTO SWS_Crypto_00136, 2 */
    if (CRYPTO_E_SMALL_BUFFER == RetVal)
    {
      (void) Det_ReportError
      (
        CRYPTO_MODULE_ID,
        CRYPTO_INSTANCE_ID,
        CRYPTO_SID_PROCESSJOB,
        CRYPTO_E_RE_SMALL_BUFFER
      );
    }
  }
#endif
  return RetVal;
}

FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_ProcessJob_Dispatch
(
  uint32 objectId,
  Std_ReturnType RetVal,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) job
)
{
  /* !LINKSTO EB_Crypto_00004, 1 */
  switch (objectId)
  {
    case CryptoConf_CryptoDriverObject_CryptoDriverObject_Software:
    {



              if
        (
          (CRYPTO_MACGENERATE == job->jobPrimitiveInfo->primitiveInfo->service) &&
          (CRYPTO_ALGOFAM_AES == job->jobPrimitiveInfo->primitiveInfo->algorithm.family) &&
          (CRYPTO_ALGOMODE_CMAC == job->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        )
        {
          RetVal = Crypto_HandleQueuingAndProcessing
                   (
                     objectId,
                     job,
                     &Crypto_PL_MACGENERATE_AES_CMAC_Process
                   );
        }



              else if
        (
          (CRYPTO_MACVERIFY == job->jobPrimitiveInfo->primitiveInfo->service) &&
          (CRYPTO_ALGOFAM_AES == job->jobPrimitiveInfo->primitiveInfo->algorithm.family) &&
          (CRYPTO_ALGOMODE_CMAC == job->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        )
        {
          RetVal = Crypto_HandleQueuingAndProcessing
                   (
                     objectId,
                     job,
                     &Crypto_PL_MACVERIFY_AES_CMAC_Process
                   );
        }
      else
      {
        /* Requested algorithm family/mode is not supported by the requested crypto driver object */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        /* !LINKSTO SWS_Crypto_00067, 1 */
        (void) Det_ReportError
        (
          CRYPTO_MODULE_ID,
          CRYPTO_INSTANCE_ID,
          CRYPTO_SID_PROCESSJOB,
          CRYPTO_E_PARAM_HANDLE
        );
        RetVal = E_NOT_OK;
#endif
      }
      break;
    }

    default:
    {
      /* Crypto driver object ID is out of range */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
      /* !LINKSTO SWS_Crypto_00058, 1 */
      (void) Det_ReportError
      (
        CRYPTO_MODULE_ID,
        CRYPTO_INSTANCE_ID,
        CRYPTO_SID_PROCESSJOB,
        CRYPTO_E_PARAM_HANDLE
      );
      RetVal = E_NOT_OK;
#endif
      break;
    }
  }
  return RetVal;
}

/* !LINKSTO SWS_Crypto_00122_CORRECTION, 1 */
FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CancelJob
(
  uint32 objectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) job
)
{
  Std_ReturnType RetVal = E_NOT_OK;

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
  /* Check if module is already initialized */
  if (FALSE == Crypto_Initialized)
  {
    /* !LINKSTO SWS_Crypto_00123, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_CANCELJOB,
      CRYPTO_E_UNINIT
    );
    RetVal = E_NOT_OK;
  }
  /* Check if job that shall be canceled is valid */
  else if (NULL_PTR == job)
  {
    /* !LINKSTO SWS_Crypto_00125, 1 */
    (void) Det_ReportError
    (
      CRYPTO_MODULE_ID,
      CRYPTO_INSTANCE_ID,
      CRYPTO_SID_CANCELJOB,
      CRYPTO_E_PARAM_POINTER
    );
    RetVal = E_NOT_OK;
  }
  else
#endif
  {
    /* !LINKSTO EB_Crypto_00005, 1 */
    switch (objectId)
    {
      case CryptoConf_CryptoDriverObject_CryptoDriverObject_Software:
      {

              if
        (
          (CRYPTO_MACGENERATE == job->jobPrimitiveInfo->primitiveInfo->service) &&
          (CRYPTO_ALGOFAM_AES == job->jobPrimitiveInfo->primitiveInfo->algorithm.family) &&
          (CRYPTO_ALGOMODE_CMAC == job->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        )
        {
        
          RetVal = Crypto_HandleQueuingAndCancellation
                   (
                     objectId,
                     job,
                     &Crypto_PL_MACGENERATE_AES_CMAC_Cancel
                   );
        }

              else if
        (
          (CRYPTO_MACVERIFY == job->jobPrimitiveInfo->primitiveInfo->service) &&
          (CRYPTO_ALGOFAM_AES == job->jobPrimitiveInfo->primitiveInfo->algorithm.family) &&
          (CRYPTO_ALGOMODE_CMAC == job->jobPrimitiveInfo->primitiveInfo->algorithm.mode)
        )
        {
        
          RetVal = Crypto_HandleQueuingAndCancellation
                   (
                     objectId,
                     job,
                     &Crypto_PL_MACVERIFY_AES_CMAC_Cancel
                   );
        }
        else
        {
          /* Requested algorithm family/mode is not supported by the requested crypto driver object */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
          /* !LINKSTO SWS_Crypto_00067, 1
          */
          (void) Det_ReportError
          (
            CRYPTO_MODULE_ID,
            CRYPTO_INSTANCE_ID,
            CRYPTO_SID_PROCESSJOB,
            CRYPTO_E_PARAM_HANDLE
          );
          RetVal = E_NOT_OK;
#endif
        }
        break;
      }
      default:
      {
        /* Crypto driver object ID is out of range */
#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
        /* !LINKSTO SWS_Crypto_00124, 1 */
        (void) Det_ReportError
        (
          CRYPTO_MODULE_ID,
          CRYPTO_INSTANCE_ID,
          CRYPTO_SID_CANCELJOB,
          CRYPTO_E_PARAM_HANDLE
        );
        RetVal = E_NOT_OK;
#endif
        break;
      }
    }
  }
  return RetVal;
}

#if CRYPTO_CRYPTO_MAIN_FUNCTION_EXISTS == STD_ON
/* !LINKSTO SWS_Crypto_91012, 1 */
FUNC(void, CRYPTO_CODE) Crypto_MainFunction
(
  void
)
{
#if (CRYPTO_QUEUE == STD_ON)
  uint32 ObjectId = 0U;
  Crypto_DriverObject* DriverObj = &Crypto_DriverObjects[ObjectId];
  Crypto_QueueType* Queue = DriverObj->Queue;
  Crypto_QueueElementType* QueueElement = NULL_PTR;

  /* !LINKSTO EB_Crypto_00041, 1 */
  /* Loop over all crypto driver objects to check the respective queues */
#if (1U < CRYPTO_DRIVER_OBJECT_COUNT)
  for (ObjectId = 0U; ObjectId < CRYPTO_DRIVER_OBJECT_COUNT; ObjectId++)
#endif /* #if (1U < CRYPTO_DRIVER_OBJECT_COUNT) */
  {
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* Queue checking is only necessary if driver object is idle */
    if (CRYPTO_DRIVER_OBJECT_STATE_IDLE == DriverObj->DriverObjectState)
    {
      /* Check if a queue is configured for driver object and if the queue contains elements */
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
      if ((NULL_PTR != Queue) && (0U < Queue->CurrentSize))
      {
        /* Dequeue first element from the queue */
        QueueElement = Crypto_DequeueElement(Queue);
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
        if (
            (NULL_PTR != QueueElement) &&
            ((NULL_PTR != QueueElement->Job) && (NULL_PTR != QueueElement->ProcessFunction))
           )
        {
          DriverObj->DriverObjectState = CRYPTO_DRIVER_OBJECT_STATE_BUSY;
          DriverObj->CurrentJob = QueueElement->Job;

          DriverObj->SkipPeriodicMainFunction = FALSE;
          SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
          /* !LINKSTO Crypto.Dsn.JobTransition.Idle2Active, 1 */
          QueueElement->Job->jobState = CRYPTO_JOBSTATE_ACTIVE;
          /* Call the process function to process the dequeued element */
          QueueElement->ProcessFunction(ObjectId, QueueElement->Job);
          QueueElement->Job = NULL_PTR;
          QueueElement->ProcessFunction = NULL_PTR;
        }
        else
        {
          SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
        }
      }
      else
      {
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      }
    }
    else
    {
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    }
  }
#endif /* #if (CRYPTO_QUEUE == STD_ON) */
  /* !LINKSTO EB_Crypto_00042, 1 */
  Crypto_PL_MainFunction();
}

#endif /* CRYPTO_CRYPTO_MAIN_FUNCTION_EXISTS == STD_ON */

/*==[Definition of functions with internal linkage]===============================================*/

#if (CRYPTO_DEV_ERROR_DETECT == STD_ON)
static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckMode
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* !LINKSTO SWS_Crypto_00071, 1 */
  Std_ReturnType RetVal = E_NOT_OK;

  switch (Job->jobPrimitiveInfo->primitiveInfo->service)
  {
    case CRYPTO_SECCOUNTERINCREMENT:
    {
      /* These services do not require a mode */
      RetVal = E_OK;
      break;
    }
    default:
    {
      /* All other services require a mode, i.e. it shall not be set to zero */
      /* Only consider the bits that are valid for the mode */
      if (
           (0U != Job->jobPrimitiveInputOutput.mode) &&
           (
             /* The only valid mode larger than Finish is SingleCall. */
             (CRYPTO_OPERATIONMODE_FINISH >= Job->jobPrimitiveInputOutput.mode) ||
             (CRYPTO_OPERATIONMODE_SINGLECALL == Job->jobPrimitiveInputOutput.mode)
           )
         )
      {
        RetVal = E_OK;
      }
      break;
    }
  }

  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckBufferPtrsVal
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* !LINKSTO SWS_Crypto_00071, 1 */
  /* Needed for START and in case no mode is required */
  Std_ReturnType RetVal = E_OK;

  if (
       CRYPTO_OPERATIONMODE_UPDATE ==
       (CRYPTO_OPERATIONMODE_UPDATE & Job->jobPrimitiveInputOutput.mode)
     )
  {
    /* Check pointer values for UPDATE */
    switch (Job->jobPrimitiveInfo->primitiveInfo->service)
    {
      case CRYPTO_ENCRYPT:
      case CRYPTO_DECRYPT:
      case CRYPTO_AEADENCRYPT:
      case CRYPTO_AEADDECRYPT:
      {
        /* These services require an output length pointer value,
           i.e. it shall not be set to zero. */
        if (0U == *(Job->jobPrimitiveInputOutput.outputLengthPtr))
        {
          RetVal |= E_NOT_OK;
        }
        break;
      }
      default:
      {
        /* do nothing */
        break;
      }
    }
  }
  if (
       CRYPTO_OPERATIONMODE_FINISH ==
       (CRYPTO_OPERATIONMODE_FINISH & Job->jobPrimitiveInputOutput.mode)
     )
  {
    /* Check pointer values for FINISH */
    switch (Job->jobPrimitiveInfo->primitiveInfo->service)
    {
      case CRYPTO_HASH:
      case CRYPTO_MACGENERATE:
      case CRYPTO_ENCRYPT:
      case CRYPTO_DECRYPT:
      case CRYPTO_AEADENCRYPT:
      case CRYPTO_AEADDECRYPT:
      case CRYPTO_SIGNATUREGENERATE:
      case CRYPTO_RANDOMGENERATE:
      {
        /* These services require an output length pointer value */
        if (0U == *(Job->jobPrimitiveInputOutput.outputLengthPtr))
        {
          RetVal |= E_NOT_OK;
        }
        if (
              (CRYPTO_AEADENCRYPT == Job->jobPrimitiveInfo->primitiveInfo->service) &&
              (0U == *(Job->jobPrimitiveInputOutput.secondaryOutputLengthPtr))
          )
        {
          /* This service requires a secondary output length pointer value */
          RetVal |= E_NOT_OK;
        }
        break;
      }
      default:
      {
        /* do nothing */
        break;
      }
    }
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckBufferPtrs
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* !LINKSTO SWS_Crypto_00071, 1 */
  /* Needed for START and in case no mode is required */
  Std_ReturnType RetVal = E_OK;

  if (
       CRYPTO_OPERATIONMODE_UPDATE ==
       (CRYPTO_OPERATIONMODE_UPDATE & Job->jobPrimitiveInputOutput.mode)
     )
  {
    /* Check pointers for UPDATE */
    RetVal = E_NOT_OK;
    /* Deviation MISRAC2012-2 */
    switch (Job->jobPrimitiveInfo->primitiveInfo->service)
    {
      case CRYPTO_ENCRYPT:
      case CRYPTO_DECRYPT:
      case CRYPTO_AEADENCRYPT:
      /* Deviation MISRAC2012-1 */
      case CRYPTO_AEADDECRYPT:
      {
        /* These services require output pointer and corresponding length pointer */
        if (
             (NULL_PTR == Job->jobPrimitiveInputOutput.outputPtr) ||
             (NULL_PTR == Job->jobPrimitiveInputOutput.outputLengthPtr)
           )
        {
          /* In case of missing pointer we can stop here */
          break;
        }
      }
      /* For above services the following check is also needed. */
      case CRYPTO_HASH:
      case CRYPTO_MACGENERATE:
      case CRYPTO_MACVERIFY:
      case CRYPTO_SIGNATUREGENERATE:
      case CRYPTO_SIGNATUREVERIFY:
      {
        /* These services require input pointer */
        if (NULL_PTR != Job->jobPrimitiveInputOutput.inputPtr)
        {
          RetVal = E_OK;
        }
        else
        {
          /* In case of missing pointer we can stop here */
          RetVal = E_NOT_OK;
        }
        break;
      }
      default:
      {
        RetVal = E_OK;
        break;
      }
    }
  }
  /* !LINKSTO SWS_Crypto_00023, 1 */
  if (
       CRYPTO_OPERATIONMODE_FINISH ==
       (CRYPTO_OPERATIONMODE_FINISH & Job->jobPrimitiveInputOutput.mode)
     )
  {
    /* Check pointers for FINISH */
    RetVal = E_NOT_OK;
    /* Deviation MISRAC2012-2 */
    switch (Job->jobPrimitiveInfo->primitiveInfo->service)
    {
      /* Deviation MISRAC2012-1 */
      case CRYPTO_AEADENCRYPT:
      {
        /* These services require in/output pointer and corresponding length pointer */
        if (
             (
               (NULL_PTR == Job->jobPrimitiveInputOutput.secondaryOutputPtr) ||
               (NULL_PTR == Job->jobPrimitiveInputOutput.secondaryOutputLengthPtr)
             ) ||
             (NULL_PTR == Job->jobPrimitiveInputOutput.secondaryInputPtr)
           )
        {
          /* In case of missing pointer we can stop here */
          break;
        }
      }
      /* For above services the following check is also needed. */
      case CRYPTO_HASH:
      case CRYPTO_MACGENERATE:
      case CRYPTO_ENCRYPT:
      case CRYPTO_DECRYPT:
      case CRYPTO_SIGNATUREGENERATE:
      case CRYPTO_RANDOMGENERATE:
      {
        /* These services require output pointer and corresponding length pointer */
        if (
             (NULL_PTR != Job->jobPrimitiveInputOutput.outputPtr) &&
             (NULL_PTR != Job->jobPrimitiveInputOutput.outputLengthPtr)
           )
        {
          RetVal = E_OK;
        }
        else
        {
          RetVal = E_NOT_OK;
        }
        /* Stop here for above services */
        break;
      }
      /* Deviation MISRAC2012-1 */
      case CRYPTO_AEADDECRYPT:
      {
        /* This service requires output pointer, output length pointer and tertiary input pointer */
        if (
             (
               (NULL_PTR == Job->jobPrimitiveInputOutput.outputPtr) ||
               (NULL_PTR == Job->jobPrimitiveInputOutput.outputLengthPtr)
             ) ||
             (NULL_PTR == Job->jobPrimitiveInputOutput.tertiaryInputPtr)
           )
        {
          /* In case of missing pointer we can stop here */
          break;
        }
      }
      /* For above services the following check is also needed. */
      case CRYPTO_MACVERIFY:
      case CRYPTO_SIGNATUREVERIFY:
      {
        /* These services require secondary input and verify pointer */
        if (
             (NULL_PTR != Job->jobPrimitiveInputOutput.secondaryInputPtr) &&
             (NULL_PTR != Job->jobPrimitiveInputOutput.verifyPtr)
           )
        {
          RetVal = E_OK;
        }
        else
        {
          RetVal = E_NOT_OK;
        }
        /* Stop here for above services */
        break;
      }
      default:
      {
        /* All other services do not require any pointer */
        RetVal = E_OK;
        break;
      }
    }
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_CheckBufferLen
(
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
)
{
  /* !LINKSTO SWS_Crypto_00071, 1 */
  /* Needed for START and in case no mode is required */
  Std_ReturnType RetVal = E_OK;

  if (
       CRYPTO_OPERATIONMODE_UPDATE ==
       (CRYPTO_OPERATIONMODE_UPDATE & Job->jobPrimitiveInputOutput.mode)
     )
  {
    switch (Job->jobPrimitiveInfo->primitiveInfo->service)
    {
      case CRYPTO_HASH:
      case CRYPTO_MACGENERATE:
      case CRYPTO_MACVERIFY:
      case CRYPTO_ENCRYPT:
      case CRYPTO_DECRYPT:
      case CRYPTO_AEADENCRYPT:
      case CRYPTO_AEADDECRYPT:
      case CRYPTO_SIGNATUREGENERATE:
      case CRYPTO_SIGNATUREVERIFY:
      {
        if (0U == Job->jobPrimitiveInputOutput.inputLength)
        {
          /* These services require an input length */
          RetVal |= E_NOT_OK;
        }
        /* Stop here for above services */
        break;
      }
      default:
      {
        /* do nothing */
        break;
      }
    }
  }
  if (
       CRYPTO_OPERATIONMODE_FINISH ==
       (CRYPTO_OPERATIONMODE_FINISH & Job->jobPrimitiveInputOutput.mode)
     )
  {
    switch (Job->jobPrimitiveInfo->primitiveInfo->service)
    {
      case CRYPTO_MACVERIFY:
      case CRYPTO_AEADENCRYPT:
      case CRYPTO_AEADDECRYPT:
      case CRYPTO_SIGNATUREVERIFY:
      {
        if (0U == Job->jobPrimitiveInputOutput.secondaryInputLength)
        {
          /* All other services do not require any length */
          RetVal |= E_NOT_OK;
        }
        if (
            (CRYPTO_AEADDECRYPT == Job->jobPrimitiveInfo->primitiveInfo->service) &&
            (0U == Job->jobPrimitiveInputOutput.tertiaryInputLength)
          )
        {
          /* This service requries a tertiary input length */
          RetVal |= E_NOT_OK;
        }
        /* Stop here for above services */
        break;
      }
      default:
      {
        /* do nothing */
        break;
      }
    }
  }
  return RetVal;
}

#endif /* #if (CRYPTO_DEV_ERROR_DETECT == STD_ON) */


static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HandleQueuingAndProcessing
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Crypto_ProcessFuncPtr_t ProcessFunction
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  Crypto_DriverObject* DriverObj = &Crypto_DriverObjects[ObjectId];
#if (CRYPTO_QUEUE == STD_ON)
  Crypto_QueueType* Queue = DriverObj->Queue;
#endif /* #if (CRYPTO_QUEUE == STD_ON) */
  Crypto_ServiceInfoType Service = Job->jobPrimitiveInfo->primitiveInfo->service;
  boolean KeyNeeded = (
                         (CRYPTO_HASH != Service) &&
                         (CRYPTO_SECCOUNTERREAD != Service) &&
                         (CRYPTO_SECCOUNTERINCREMENT != Service) &&
                         (CRYPTO_RANDOMGENERATE != Service)
                      );

  /* !LINKSTO SWS_Crypto_00072, 1 */
  /* Check if a valid key is referenced in the job if a key is needed */
#if (CRYPTO_API_ENABLED_KEYMNGMNT != STD_ON)
  if (TRUE == KeyNeeded)
  {
    RetVal = E_NOT_OK;
  }
#else /* #if (CRYPTO_API_ENABLED_KEYMNGMNT == STD_ON) */
  if ((TRUE == KeyNeeded) && (CRYPTO_KEY_COUNT <= Job->cryptoKeyId))
  {
    RetVal = E_NOT_OK;
  }

  /* Check if key is in state valid, if a key is needed */
  else if (
            (TRUE == KeyNeeded) &&
            (CRYPTO_KEY_STATE_INVALID == Crypto_Keys[Job->cryptoKeyId].KeyState)
          )
  {
    /* !LINKSTO SWS_Crypto_00039_CORRECTION, 1 */
    RetVal = CRYPTO_E_KEY_NOT_VALID;
  }
#endif /* #if (CRYPTO_API_ENABLED_KEYMNGMNT == STD_ON) */

  /* !LINKSTO SWS_Crypto_00118, 1 */
  /* Job has to be either already active or has to be started by using operationmode start */
  else if (
            (CRYPTO_JOBSTATE_IDLE == Job->jobState) &&
            ((CRYPTO_OPERATIONMODE_START & Job->jobPrimitiveInputOutput.mode) == 0U)
          )
  {
    RetVal = E_NOT_OK;
  }
  else if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
  {
    /* !LINKSTO SWS_Crypto_00121, 1 */
    /* If driver object is currently processing the requested job, queue shall be bypassed */
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    if (DriverObj->CurrentJob == Job)
    {
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      RetVal = ProcessFunction(ObjectId, Job);
    }
    /* !LINKSTO SWS_Crypto_00014, 1, SWS_Crypto_00117, 1 */
    else if (CRYPTO_DRIVER_OBJECT_STATE_BUSY == DriverObj->DriverObjectState)
    {
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
#if (CRYPTO_QUEUE == STD_ON)
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
      /* !LINKSTO SWS_Crypto_00179, 1 */
      /* If job is async and driver object is busy, the job shall be enqueued */
      if (NULL_PTR != Queue)
      {
        /* !LINKSTO SWS_Crypto_00033, 1 */
        RetVal = Crypto_EnqueueJob(Queue, Job, ProcessFunction);
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
      }
      /* If job is async, driver object is busy and has no Queue, an error is returned */
      else
#endif /* #if (CRYPTO_QUEUE == STD_ON) */
      {
#if (CRYPTO_QUEUE == STD_ON)
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
#endif /* #if (CRYPTO_QUEUE == STD_ON) */
        RetVal = CRYPTO_E_BUSY;
      }
    }
    else
    {
#if (CRYPTO_QUEUE == STD_ON)
      /* !LINKSTO SWS_Crypto_00179, 1, SWS_Crypto_00031, 1, SWS_Crypto_00029, 1 */
      /* If driver object is idle and has no queue or no elements within the queue, the job can be
         processed */
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
      if ((NULL_PTR == Queue) || (0U == Queue->CurrentSize))
      {
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
        DriverObj->DriverObjectState = CRYPTO_DRIVER_OBJECT_STATE_BUSY;
        DriverObj->CurrentJob = Job;

        DriverObj->SkipPeriodicMainFunction = FALSE;
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
        /* !LINKSTO Crypto.Dsn.JobTransition.Idle2Active, 1 */
        Job->jobState = CRYPTO_JOBSTATE_ACTIVE;
        RetVal = ProcessFunction(ObjectId, Job);
      }
      else
      {
        /* If the queue contains elements, the job is put into the queue */
        RetVal = Crypto_EnqueueJob(Queue, Job, ProcessFunction);
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
        SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      }
#else /* #if (CRYPTO_QUEUE == STD_ON) */
      DriverObj->DriverObjectState = CRYPTO_DRIVER_OBJECT_STATE_BUSY;
      DriverObj->CurrentJob = Job;

      DriverObj->SkipPeriodicMainFunction = FALSE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      /* !LINKSTO Crypto.Dsn.JobTransition.Idle2Active, 1 */
      Job->jobState = CRYPTO_JOBSTATE_ACTIVE;
      RetVal = ProcessFunction(ObjectId, Job);
#endif /* #if (CRYPTO_QUEUE == STD_ON) */
    }
  }
  else
  {
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* If the synchronous job is already being processed, the process function can be called */
    /* !LINKSTO SWS_Crypto_00121, 1 */
    if (DriverObj->CurrentJob == Job)
    {
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      RetVal = ProcessFunction(ObjectId, Job);
    }
    /* !LINKSTO SWS_Crypto_00034, 1, SWS_Crypto_00014, 1, SWS_Crypto_00117, 1 */
    /* If driver object is busy, the synchronous job can not be processed */
    else if (CRYPTO_DRIVER_OBJECT_STATE_BUSY == DriverObj->DriverObjectState)
    {
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      RetVal = CRYPTO_E_BUSY;
    }
    /* If driver object is idle, the synchronous job can be processed */
    else
    {
      DriverObj->DriverObjectState = CRYPTO_DRIVER_OBJECT_STATE_BUSY;
      DriverObj->CurrentJob = Job;

      DriverObj->SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      /* !LINKSTO Crypto.Dsn.JobTransition.Idle2Active, 1 */
      Job->jobState = CRYPTO_JOBSTATE_ACTIVE;
      RetVal = ProcessFunction(ObjectId, Job);
    }
  }
  return RetVal;
}

static FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_HandleQueuingAndCancellation
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job,
  Crypto_CancelFuncPtr_t CancelFunction
)
{
  Std_ReturnType RetVal = E_NOT_OK;
  Crypto_DriverObject* DriverObj = &Crypto_DriverObjects[ObjectId];

#if (CRYPTO_QUEUE == STD_ON)
  Crypto_QueueType* Queue = DriverObj->Queue;
#endif /* #if (CRYPTO_QUEUE == STD_ON) */

  /* !LINKSTO EB_Crypto_01050, 1 */
  SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
  /* !LINKSTO SWS_Crypto_00143_CORRECTION, 1 */
  /* If the job that shall be canceled is currently processed, the cancel request is forwarded to
     the process layer */
  if (DriverObj->CurrentJob == Job)
  {
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    RetVal = CancelFunction(ObjectId, Job);
    /* If the job was sucessfully canceled, the driver object is now idle */
    if (E_OK == RetVal)
    {
      /* !LINKSTO EB_Crypto_01050, 1 */
      SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      DriverObj->DriverObjectState = CRYPTO_DRIVER_OBJECT_STATE_IDLE;
      DriverObj->CurrentJob = NULL_PTR;

      DriverObj->SkipPeriodicMainFunction = TRUE;
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
      /* !LINKSTO Crypto.Dsn.JobTransition.ActiveCancel2Idle, 1 */
      Job->jobState = CRYPTO_JOBSTATE_IDLE;

      /* !LINKSTO SWS_Crypto_00144_CORRECTION, 1 */
      if (CRYPTO_PROCESSING_ASYNC == Job->jobPrimitiveInfo->processingType)
      {
        CryIf_CallbackNotification(Job, CRYPTO_E_JOB_CANCELED);
      }
    }
  }
#if (CRYPTO_QUEUE == STD_ON)
  /* If the job is not currently processed, the queue has to be checked for the job */
  else
  {
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* !LINKSTO EB_Crypto_01050, 1 */
    SchM_Enter_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
    if ((NULL_PTR != Queue) && (0U < Queue->CurrentSize))
    {
      /* Request to remove the job if it is enqueued */
      /* !LINKSTO SWS_Crypto_00143_CORRECTION, 1 */
      RetVal = Crypto_RemoveJob(Queue, Job);
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
    }
    else
    {
      SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_QUEUE();
      /* No request for this job was issued */
      RetVal = E_NOT_OK;
    }
  }
#else
  else
  {
    SchM_Exit_Crypto_SCHM_CRYPTO_EXCLUSIVE_AREA_DRIVEROBJECT();
    /* No request for this job was issued */
    RetVal = E_NOT_OK;
  }
#endif /* #if (CRYPTO_QUEUE == STD_ON) */

  return RetVal;
}

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*==[End of file]=================================================================================*/
