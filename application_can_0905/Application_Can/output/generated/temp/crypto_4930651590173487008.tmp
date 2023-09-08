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

/*==[includes directives]=========================================================================*/

#ifndef CRYPTO_AL_AES_CFB_H
#define CRYPTO_AL_AES_CFB_H
#include <Std_Types.h>
#include <Crypto_AL_Cfg.h>

/*==[Macro definitions]===========================================================================*/

/*==[Type declarations]===========================================================================*/

/*==[Declaration of constants with external linkage]==============================================*/

/*==[Declaration of variables with external linkage]==============================================*/

/*==[Declaration of functions with external linkage]==============================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

#if (CRYPTO_AES_CFB_ENC_ENABLED == STD_ON)
/** \brief This is the abstraction layer function for ENCRYPT_AES_CFB
 *
 * This function actually performs the start request for service ENCRYPT with algorithm family AES
 * and algorithm mode CFB.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the Job processing
 * \retval E_OK     Job has been successfully processed
 * \retval E_NOT_OK Request failed
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_AES_CFB_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for ENCRYPT_AES_CFB
 *
 * This function actually performs the update request for service ENCRYPT with algorithm family AES
 * and algorithm mode CFB.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the Job processing
 * \retval E_OK          Job has been successfully processed
 * \retval CRYPTO_E_BUSY Request failed, a service is already beeing processed.

 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_AES_CFB_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for ENCRYPT_AES_CFB
 *
 * This function actually performs the finish request for service ENCRYPT with algorithm family AES
 * and algorithm mode CFB.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the Job processing
 * \retval E_OK          Job has been successfully processed
 * \retval CRYPTO_E_BUSY Request failed, a service is already beeing processed.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_AES_CFB_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for ENCRYPT_AES_CFB
 *
 * This function actually performs the cancel request for service ENCRYPT with algorithm family AES
 * and algorithm mode CFB. It cancels the Job and removes it from the queue.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the cancellation attempt
 * \retval E_OK                  Job was successfully canceled.
 * \retval E_NOT_OK              Job could not be canceled.
 * \retval CRYPTO_E_JOB_CANCELED Job could not be canceled immediately
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_ENCRYPT_AES_CFB_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for ENCRYPT_AES_CFB
 *
 * This function actually performs the main function request for service ENCRYPT with algorithm
 * family AES and algorithm mode CFB.
 *
 * \param[in,out] Result This parameter holds the result of the last
 *                       called Crypto_AL_ENCRYPT_AES_CBC_MainFunction.
 * \param[in,out] Busy   This parameter holds the state of the primitive. This state is set to FALSE
 *                       after the primitive has performed start or update or it has finished.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(void, CRYPTO_CODE) Crypto_AL_ENCRYPT_AES_CFB_MainFunction
(
  P2VAR(Std_ReturnType,AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);
#endif /* CRYPTO_AES_CFB_ENC_ENABLED */

#if (CRYPTO_AES_CFB_DEC_ENABLED == STD_ON)
/** \brief This is the abstraction layer function for DECRYPT_AES_CFB
 *
 * This function actually performs the start request for service DECRYPT with algorithm family AES
 * and algorithm mode CFB.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the Job processing
 * \retval E_OK     Job has been successfully processed
 * \retval E_NOT_OK Request failed
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_AES_CFB_Start
(
  uint32                                                       ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for DECRYPT_AES_CFB
 *
 * This function actually performs the update request for service DECRYPT with algorithm family AES
 * and algorithm mode CFB.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the Job processing
 * \retval E_OK          Job has been successfully processed
 * \retval CRYPTO_E_BUSY Request failed, a service is already beeing processed.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_AES_CFB_Update
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for DECRYPT_AES_CFB
 *
 * This function actually performs the finish request for service DECRYPT with algorithm family AES
 * and algorithm mode CFB.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the Job processing
 * \retval E_OK          Job has been successfully processed
 * \retval CRYPTO_E_BUSY Request failed, a service is already beeing processed.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_AES_CFB_Finish
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);


/** \brief This is the abstraction layer function for DECRYPT_AES_CFB
 *
 * This function actually performs the cancel request for service DECRYPT with algorithm family AES
 * and algorithm mode CBC. It cancels the Job and removes it from the queue.
 *
 * \param[in] ObjectId Identifier of the crypto driver object that shall process the request
 * \param[in] Job      Reference to the Job that shall be processed
 *
 * \returns Result of the cancellation attempt
 * \retval E_OK                  Job was successfully canceled.
 * \retval E_NOT_OK              Job could not be canceled.
 * \retval CRYPTO_E_JOB_CANCELED Job could not be canceled immediately
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_AL_DECRYPT_AES_CFB_Cancel
(
  uint32                                                         ObjectId,
  P2CONST(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief This is the abstraction layer function for DECRYPT_AES_CFB
 *
 * This function actually performs the main function request for service DECRYPT with algorithm
 * family AES and algorithm mode CFB.
 *
 * \param[in,out] Result This parameter holds the result of the last called
 *                       Crypto_AL_DECRYPT_AES_CBC_MainFunction.
 * \param[in,out] Busy   This parameter holds the state of the primitive. This state is set to
 *                       FALSE after the primitive has performed Start or update or it has Finished.
 *
 * \Reentrancy{Nonreentrant}
 * \Synchronicity{Synchronous}
 *
 */
extern FUNC(void, CRYPTO_CODE) Crypto_AL_DECRYPT_AES_CFB_MainFunction
(
  P2VAR(Std_ReturnType,AUTOMATIC, CRYPTO_APPL_DATA) Result,
  P2VAR(boolean,AUTOMATIC, CRYPTO_APPL_DATA)        Busy
);
#endif /* #if (CRYPTO_AES_CFB_DEC_ENABLED == STD_ON) */

#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

#endif /* CRYPTO_AL_AES_CFB_H */

