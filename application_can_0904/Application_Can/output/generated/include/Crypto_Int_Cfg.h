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


#ifndef CRYPTO_INT_CFG_H
#define CRYPTO_INT_CFG_H

/*==================[misra deviations]============================================================*/

/*==================[inclusions]==================================================================*/

#include <Crypto.h>

/*==================[defensive programming]=======================================================*/

#if (defined CRYPTO_DEFENSIVE_PROGRAMMING_ENABLED)
#error CRYPTO_DEFENSIVE_PROGRAMMING_ENABLED is already defined
#endif
/** \brief Defensive programming usage
 *         En- or disables the usage of the defensive programming
 */
#define CRYPTO_DEFENSIVE_PROGRAMMING_ENABLED STD_OFF

#if (defined CRYPTO_PRECONDITION_ASSERT_ENABLED)
#error CRYPTO_PRECONDITION_ASSERT_ENABLED is already defined
#endif
/** \brief Precondition assertion usage
 *         En- or disables the usage of precondition assertion checks
 */
#define CRYPTO_PRECONDITION_ASSERT_ENABLED STD_OFF

#if (defined CRYPTO_POSTCONDITION_ASSERT_ENABLED)
#error CRYPTO_POSTCONDITION_ASSERT_ENABLED is already defined
#endif
/** \brief Postcondition assertion usage
 *         En- or disables the usage of postcondition assertion checks
 */
#define CRYPTO_POSTCONDITION_ASSERT_ENABLED STD_OFF

#if (defined CRYPTO_UNREACHABLE_CODE_ASSERT_ENABLED)
#error CRYPTO_UNREACHABLE_CODE_ASSERT_ENABLED is already defined
#endif
/** \brief Unreachable code assertion usage
 *         En- or disables the usage of unreachable code assertion checks
 */
#define CRYPTO_UNREACHABLE_CODE_ASSERT_ENABLED STD_OFF

#if (defined CRYPTO_INVARIANT_ASSERT_ENABLED)
#error CRYPTO_INVARIANT_ASSERT_ENABLED is already defined
#endif
/** \brief Invariant assertion usage
 *         En- or disables the usage of invariant assertion checks
 */
#define CRYPTO_INVARIANT_ASSERT_ENABLED STD_OFF

#if (defined CRYPTO_STATIC_ASSERT_ENABLED)
#error CRYPTO_STATIC_ASSERT_ENABLED is already defined
#endif
/** \brief Static assertion usage
 *         En- or disables the usage of static assertion checks
 */
#define CRYPTO_STATIC_ASSERT_ENABLED STD_OFF

/*==================[macros]======================================================================*/

/*==================[declaration of types]========================================================*/

/*==================[declaration of external constants]===========================================*/

/*==================[declaration of external variables]===========================================*/

/*==================[declaration of external functions]===========================================*/

#define CRYPTO_START_SEC_CODE
#include <Crypto_MemMap.h>

      /** \brief Process function for MACGENERATE_AES_CMAC
 *
 *  This function processes the request for service MACGENERATE with algorithm family
 *  AES and algorithm mode
 *  CMAC
 *
 *  \param[in] ObjectId       Identifier of the crypto driver object that shall process the request
 *  \param[in] Job            Reference to the job that shall be processed
 *
 *  \returns  Result of the job processing
 *  \retval   E_OK                         Job has been successfully processed (synchronous request)
 *                                         or has been forwarded to the crypto engine
 *                                         (asynchronous request)
 *  \retval   E_NOT_OK                     Request failed
 *  \retval   CRYPTO_E_KEY_NOT_VALID       Request failed, the key to be used is not valid
 *  \retval   CRYPTO_E_KEY_SIZE_MISMATCH   Request failed, a key element has the wrong size
 *  \retval   CRYPTO_E_ENTROPY_EXHAUSTION  Request failed, the entropy is exhausted
 *  \retval   CRYPTO_E_SMALL_BUFFER        Request failed, the provided buffer is too small to
 *                                         store the result
 *  \retval   CRYPTO_E_JOB_CANCELED        Request failed, the synchronous job was canceled
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_PL_MACGENERATE_AES_CMAC_Process
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Cancel function for MACGENERATE_AES_CMAC
 *
 *  This function attempts to cancel the job for service MACGENERATE with algorithm family
 *  AES and algorithm mode
 *  CMAC
 *
 *  \param[in] ObjectId       Identifier of the crypto driver object that processes the job
 *  \param[in] Job            Reference to the job that shall be cancelled
 *
 *  \returns  Result of the job cancellation attempt
 *  \retval   E_OK                         Job has been successfully cancelled
 *  \retval   E_NOT_OK                     Job could not be cancelled
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_PL_MACGENERATE_AES_CMAC_Cancel
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Process function for MACGENERATE_AES_CMAC_Process_SyncUpdate
 *
 *  This function processes the sync update request for service MACGENERATE with algorithm family
 *  AES and algorithm mode
 *  CMAC
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_PL_MACGENERATE_AES_CMAC_Process_SyncUpdate
(
  uint32 ObjectId,
  boolean Busy,
  Std_ReturnType RetVal,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);



      /** \brief Process function for MACVERIFY_AES_CMAC
 *
 *  This function processes the request for service MACVERIFY with algorithm family
 *  AES and algorithm mode
 *  CMAC
 *
 *  \param[in] ObjectId       Identifier of the crypto driver object that shall process the request
 *  \param[in] Job            Reference to the job that shall be processed
 *
 *  \returns  Result of the job processing
 *  \retval   E_OK                         Job has been successfully processed (synchronous request)
 *                                         or has been forwarded to the crypto engine
 *                                         (asynchronous request)
 *  \retval   E_NOT_OK                     Request failed
 *  \retval   CRYPTO_E_KEY_NOT_VALID       Request failed, the key to be used is not valid
 *  \retval   CRYPTO_E_KEY_SIZE_MISMATCH   Request failed, a key element has the wrong size
 *  \retval   CRYPTO_E_ENTROPY_EXHAUSTION  Request failed, the entropy is exhausted
 *  \retval   CRYPTO_E_SMALL_BUFFER        Request failed, the provided buffer is too small to
 *                                         store the result
 *  \retval   CRYPTO_E_JOB_CANCELED        Request failed, the synchronous job was canceled
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_PL_MACVERIFY_AES_CMAC_Process
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Cancel function for MACVERIFY_AES_CMAC
 *
 *  This function attempts to cancel the job for service MACVERIFY with algorithm family
 *  AES and algorithm mode
 *  CMAC
 *
 *  \param[in] ObjectId       Identifier of the crypto driver object that processes the job
 *  \param[in] Job            Reference to the job that shall be cancelled
 *
 *  \returns  Result of the job cancellation attempt
 *  \retval   E_OK                         Job has been successfully cancelled
 *  \retval   E_NOT_OK                     Job could not be cancelled
 *
 *  \Reentrancy{Nonreentrant}
 *  \Synchronicity{Synchronous}
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_PL_MACVERIFY_AES_CMAC_Cancel
(
  uint32 ObjectId,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);

/** \brief Process function for MACVERIFY_AES_CMAC_Process_SyncUpdate
 *
 *  This function processes the sync update request for service MACVERIFY with algorithm family
 *  AES and algorithm mode
 *  CMAC
 */
extern FUNC(Std_ReturnType, CRYPTO_CODE) Crypto_PL_MACVERIFY_AES_CMAC_Process_SyncUpdate
(
  uint32 ObjectId,
  boolean Busy,
  Std_ReturnType RetVal,
  P2VAR(Crypto_JobType, AUTOMATIC, CRYPTO_APPL_DATA) Job
);


#define CRYPTO_STOP_SEC_CODE
#include <Crypto_MemMap.h>

/*================================================================================================*/

#endif /* #ifndef CRYPTO_INT_CFG_H */

/*==================[end of file]=================================================================*/

