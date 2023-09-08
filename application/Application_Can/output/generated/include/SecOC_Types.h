/**
 * \file
 *
 * \brief AUTOSAR SecOC
 *
 * This file contains the implementation of the AUTOSAR
 * module SecOC.
 *
 * \version 2.8.1
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#ifndef SECOC_TYPES_H
#define SECOC_TYPES_H
/*==================[deviations]==================================================================*/

/*==================[includes]====================================================================*/







/* !LINKSTO SecOC.ASR430.SWS_SecOC_00002,1 */
#include <ComStack_Types.h>
#include <Csm.h>
#include <SecOC_Version.h>

#include <Rte_SecOC_Type.h>

/*==================[macros]======================================================================*/

/** \brief SecOC module is not initialized
 */
#if (defined SECOC_UNINIT)
#error SECOC_UNINIT already defined
#endif
#define SECOC_UNINIT                                                                    0U

/** \brief SecOC module is initialized
 */
#if (defined SECOC_INIT)
#error SECOC_INIT already defined
#endif
#define SECOC_INIT                                                                      1U

/** \brief Return value for a successful "get freshness value" request
 */
#if (defined SECOC_E_OK)
#error SECOC_E_OK already defined
#endif
#define SECOC_E_OK                                                                      0U

/** \brief Return value for an unsuccessful "get freshness value" request
 */
#if (defined SECOC_E_NOT_OK)
#error SECOC_E_NOT_OK already defined
#endif
#define SECOC_E_NOT_OK                                                                  1U

/** \brief Return value if the "get freshness value" service is currently busy
 */
#if (defined SECOC_E_BUSY)
#error SECOC_E_BUSY already defined
#endif
#define SECOC_E_BUSY                                                                    2U

/** \brief Defines, that Both 'True' and 'False' AuthenticationStatus is propagated
 */
#if (defined SECOC_STATUS_PROP_BOTH)
#error SECOC_STATUS_PROP_BOTH already defined
#endif
#define SECOC_STATUS_PROP_BOTH                                                          2U

/** \brief Defines, that Only 'False' AuthenticationStatus is propagated
 */
#if (defined SECOC_STATUS_PROP_FAILURE_ONLY)
#error SECOC_STATUS_PROP_FAILURE_ONLY already defined
#endif
#define SECOC_STATUS_PROP_FAILURE_ONLY                                                  1U

/** \brief Defines, that No AuthenticationStatus is propagated
 */
#if (defined SECOC_STATUS_PROP_NONE)
#error SECOC_STATUS_PROP_NONE already defined
#endif
#define SECOC_STATUS_PROP_NONE                                                          0U

/** \brief SecOC does not queries the freshness.
 */
#if (defined SECOC_FRESHNESS_NONE)
#error SECOC_FRESHNESS_NONE already defined
#endif
#define SECOC_FRESHNESS_NONE                                                            0U

/** \brief SecOC queries the freshness for every PDU to process using the Rte service port
 *         FreshnessManagement.
 */
#if (defined SECOC_FRESHNESS_RTE)
#error SECOC_FRESHNESS_RTE already defined
#endif
#define SECOC_FRESHNESS_RTE                                                             1U

/** \brief SecOC queries the freshness for every PDU to process using the C function defined by the
 *         configuration parameter SecOCFreshnessValueFuncName.
 */
#if (defined SECOC_FRESHNESS_CFUNC)
#error SECOC_FRESHNESS_CFUNC already defined
#endif
#define SECOC_FRESHNESS_CFUNC                                                           2U

/** \brief SecOC does not propagate the verification status.
 */
#if (defined SECOC_VERIFICATION_STATUS_PROP_NONE)
#error SECOC_VERIFICATION_STATUS_PROP_NONE already defined
#endif
#define SECOC_VERIFICATION_STATUS_PROP_NONE   0U

/** \brief SecOC propagates the verification status via the AUTOSAR defined API(s).
 */
#if (defined SECOC_VERIFICATION_STATUS_PROP_AUTOSAR)
#error SECOC_VERIFICATION_STATUS_PROP_AUTOSAR already defined
#endif
#define SECOC_VERIFICATION_STATUS_PROP_AUTOSAR    1U

/** \brief SecOC propagates the verification status via the custom API(s).
 */
#if (defined SECOC_VERIFICATION_STATUS_PROP_EB)
#error SECOC_VERIFICATION_STATUS_PROP_EB already defined
#endif
#define SECOC_VERIFICATION_STATUS_PROP_EB  2U

/** \brief Macro which defines that the GetTxFreshness function shall be used to
 *         obtain the freshness value.
 */
#if (defined SECOC_GET_TX_FRESHNESS_FUNC_TYPE)
#error SECOC_GET_TX_FRESHNESS_FUNC_TYPE already defined
#endif
#define SECOC_GET_TX_FRESHNESS_FUNC_TYPE                                                0U

/** \brief Macro which defines that the GetTxFreshnessTruncData function shall be used to
 *         obtain the freshness value.
 */
#if (defined SECOC_GET_TX_FRESHNESS_TRUNCDATA_FUNC_TYPE)
#error SECOC_GET_TX_FRESHNESS_TRUNCDATA_FUNC_TYPE already defined
#endif
#define SECOC_GET_TX_FRESHNESS_TRUNCDATA_FUNC_TYPE                                      1U

/** \brief Macro which defines that the GetTxFreshness function shall be used to
 *         obtain the freshness value.
 */
#if (defined SECOC_GET_RX_FRESHNESS_FUNC_TYPE)
#error SECOC_GET_RX_FRESHNESS_FUNC_TYPE already defined
#endif
#define SECOC_GET_RX_FRESHNESS_FUNC_TYPE                                                0U

/** \brief Macro which defines that the GetRxFreshnessAuthData function shall be used to
 *         obtain the freshness value.
 */
#if (defined SECOC_GET_RX_FRESHNESS_AUTHDATA_FUNC_TYPE)
#error SECOC_GET_RX_FRESHNESS_AUTHDATA_FUNC_TYPE already defined
#endif
#define SECOC_GET_RX_FRESHNESS_AUTHDATA_FUNC_TYPE                                       1U

/** \brief Macro which defines that the Csm_MacGenerate function shall be used to generate
 *         the authentication information.
 */
#if (defined SECOC_TX_MACGENERATE_FUNC_TYPE)
#error SECOC_TX_MACGENERATE_FUNC_TYPE already defined
#endif
#define SECOC_TX_MACGENERATE_FUNC_TYPE                                                  0U

/** \brief Macro which defines that the Csm_SignatureGenerate function shall be used to generate
 *         the authentication information.
 */
#if (defined SECOC_TX_SIGNATUREGENERATE_FUNC_TYPE)
#error SECOC_TX_SIGNATUREGENERATE_FUNC_TYPE already defined
#endif
#define SECOC_TX_SIGNATUREGENERATE_FUNC_TYPE                                            1U

/** \brief Macro which defines that the Csm_MacVerify function shall be used to verify
 *         the authentication information.
 */
#if (defined SECOC_RX_MACVERIFY_FUNC_TYPE)
#error SECOC_RX_MACVERIFY_FUNC_TYPE already defined
#endif
#define SECOC_RX_MACVERIFY_FUNC_TYPE                                                    0U

/** \brief Macro which defines that the Csm_SignatureVerify function shall be used to verify
 *         the authentication information.
 */
#if (defined SECOC_RX_SIGNATUREVERIFY_FUNC_TYPE)
#error SECOC_RX_SIGNATUREVERIFY_FUNC_TYPE already defined
#endif
#define SECOC_RX_SIGNATUREVERIFY_FUNC_TYPE                                              1U

/*==================[type definitions]============================================================*/

#ifndef RTE_TYPE_SecOC_StateType
/* \cond SECOC_DOC_INTERNAL_MACROS */
#define RTE_TYPE_SecOC_StateType
/* \endcond */
/** \brief States of the SecOC module.
 *
 * Range: SECOC_UNINIT, SECOC_INIT.
 */
typedef uint8 SecOC_StateType;
#endif /* #ifndef RTE_TYPE_SecOC_StateType */

/** \brief Length type of the Data ID element.
 */
typedef uint16 SecOC_DataIdLengthType;

/**
 * \brief state machine state type
 */
typedef P2FUNC(void, TYPEDEF, SecOC_SmStateType) (uint16 instId);

#ifndef RTE_TYPE_SecOC_VerificationResultType
/* \cond SECOC_DOC_INTERNAL_MACROS */
#define RTE_TYPE_SecOC_VerificationResultType
/* \endcond */
/* !LINKSTO SecOC.ASR430.Rx.SWS_SecOC_00149,3, SecOC.ASR20-11.Rx.SWS_SecOC_00149,1 */
/** \brief Type, to indicate verification results
 *
 * Range: SECOC_VERIFICATIONSUCCESS, SECOC_VERIFICATIONFAILURE, SECOC_FRESHNESSFAILURE,
 *        SECOC_AUTHENTICATIONBUILDFAILURE, SECOC_NO_VERIFICATION, SECOC_MACSERVICEFAILURE.
 */
typedef uint8 SecOC_VerificationResultType;
#endif /* #ifndef RTE_TYPE_SecOC_VerificationResultType */

/** \brief This type defines the possibilities that are available to override the verification status
 */
#ifndef RTE_TYPE_SecOC_OverrideStatusType
/** \cond SECOC_DOC_INTERNAL_MACROS */
#define RTE_TYPE_SecOC_OverrideStatusType
/** \endcond */
/* !LINKSTO SecOC.ASR20-11.Rx.SWS_SecOC_00991,1 */
typedef uint8 SecOC_OverrideStatusType;
#endif

#ifndef RTE_TYPE_SecOC_VerificationStatusType
/** \cond SECOC_DOC_INTERNAL_MACROS */
#define RTE_TYPE_SecOC_VerificationStatusType
/** \endcond */
/* !LINKSTO SecOC.ASR430.Rx.SWS_SecOC_00160,4, SecOC.ASR20-11.Rx.SWS_SecOC_00160,1 */
/**
 * \struct SecOC_VerificationStatusType
 * \brief Data structure to bundle the status of a verification attempt for a specific Freshness
 *        Value and Data ID.
 *//**
 * \var SecOC_VerificationStatusType::freshnessValueID
 * \brief Identifier of the Freshness Value which resulted in the Verification Result
 *//**
 * \var SecOC_VerificationStatusType::verificationStatus
 * \brief Result of verification attempt.
 *//**
 * \var SecOC_VerificationStatusType::secOCDataId
 * \brief Identifier for the Secured I-PDU.
 *//**
 * \var SecOC_VerificationStatusType::verificationReturn
 * \brief Result of verification attempt.
 */
typedef struct
{
  uint16                       freshnessValueID;
  SecOC_VerificationResultType verificationStatus;
  SecOC_DataIdLengthType       secOCDataId;
}
SecOC_VerificationStatusType;
#endif



/**
 * \struct SecOC_RxConfigType
 * \brief SecOC Configuration type for Rx Pdus, which shall be verified by the SecOC module.
 */
typedef struct
{
  /* Csm Job ID */
  uint32                             CsmJobId;
  /* ID of the secured Pdu at SecOC (used for e.g. SecOC_StartOfReception) */
  uint16                             PduIdForSecuredPduAtSecOC;
  /* Max allowed Freshness Value sync Attempts */
  uint16                             MaxFVSyncAttempts;
  /* Max allowed of authentication build attempts that are to be carried out  */
  uint16                             MaxAuthAttempts;
  /* Flag which indicates the reception overflow strategy */
  uint8                              ReceptionStrategy;
  /* Defines which freshness function should be called */
  uint8                              GetRxFreshnessFuncType;
  /* Defines which Csm function should be called */
  uint8                              CsmFuncType;
  /* Flag which indicates whether the TP interfaces (in the communication with PduR) will be used or not */
  boolean                            UseTp;
  /* Flag indicating if the dynamic length of the PDU is accepted or not */
  boolean                            UseDynamicLength;
}
SecOC_RxConfigType;

/**
 * \struct SecOC_RxDataType
 * \brief Structure holding the Datas of a Rx Pdu
 */
typedef struct
{
  /* Holds the length and the pointer to buffer holding the received secured Pdu */
  PduInfoType                              ReceivedSecuredPdu;
  /* Holds the length and the pointer to buffer holding the secured Pdu */
  PduInfoType                              SecuredPdu;
  /* Pointer to buffer holding the data to authenticator (used for eg. MAC services) */
  P2VAR(uint8, TYPEDEF, SECOC_VAR)         DataToAuthenticator;
  /* Pointer to buffer holding the complete freshness value */
  P2VAR(uint8, TYPEDEF, SECOC_VAR)         FreshnessVerifyValue;
  /* Pointer to buffer holding the authenticator (eg. MAC) */
  P2VAR(uint8, TYPEDEF, SECOC_VAR)         Authenticator;
  /* The length of the payload within the secured PDU (authentic data) */
  PduLengthType                            DataLength;
  /* !LINKSTO SecOC.ASR430.Rx.SWS_SecOC_00234,1 */
  /* Number of authentication (build) attempts */
  uint16                                   AuthAttempts;
  /* Number of sync attempts */
  uint16                                   FVSyncAttempts;
  /* The verification procedure result */
  SecOC_VerificationResultType             VerificationResult;
  /* The verification override status (on init, nothing shall be overridden) */
  uint8                                    VerifyStatusOverride;
  /* The number of messages to override (on init, nothing shall be overridden) */
  uint8                                    NumMsgToOverride;
  /* The index of the SecOC Rx state machine for each PDU configured */
  uint8                                    State;
  /* Rx state machine events emitted by APIs to the PduR */
  uint8                                    PduREvent;
  /* Variable to hold the verification result of the Csm */
  Crypto_VerifyResultType                  CsmVerificationResult;
  /* Flag which indicates if the buffers corresponding to a Pdu are currently in use */
  boolean                                  PduInProcess;
  /* Flag which indicates if the verification of the Secured I-PDU is currently ongoing */
  boolean                                  ProcessingVerification;
  /* Flag which indicates if the SecOC_RxRenewVerifyStatusOverride was already called */
  boolean                                  RenewedVerStatus;
}
SecOC_RxDataType;


/**
 * \struct SecOC_TxConfigType
 * \brief SecOC Configuration type for Tx Pdus, which shall be authenticated by the SecOC module.
 */
typedef struct
{
  /* Csm Job ID */
  uint32                            CsmJobId;
  /* ID of the secured Pdu at SecOC (used for e.g. SecOC_TxConfirmation) */
  uint16                            PduIdForSecuredPduAtSecOC;
  /* Number of maximal allowed authentication attempts */
  uint16                            MaxAuthAttempts;
  /* Defines which freshness function should be called */
  uint8                             GetTxFreshnessFuncType;
  /* Defines which Csm function should be called */
  uint8                             CsmFuncType;
  /* Flag which indicates whether the TP interfaces (in the communication with PduR) will be used or not */
  boolean                           UseTp;
  /* Flag indicating if the dynamic length of the PDU is accepted or not */
  boolean                           UseDynamicLength;
}
SecOC_TxConfigType;

/**
 * \struct SecOC_TxDataType
 * \brief Structure holding the Datas of a Tx Pdu
 */
typedef struct
{
  /* Variable passed to the authentication algorithm, where the length result is stored */
  uint32                                   AuthenticatorLength;
  /* Holds the length and the pointer to buffer holding the received authentic Pdu */
  PduInfoType                              ReceivedAuthPdu;
  /* Holds the length and the pointer to buffer holding the secured Pdu */
  PduInfoType                              SecuredPdu;
  /* Pointer to buffer holding the data to authenticator (used for eg. MAC services) */
  P2VAR(uint8, TYPEDEF, SECOC_VAR)         DataToAuthenticator;
  /* Pointer to buffer holding the authenticator (eg. MAC) */
  P2VAR(uint8, TYPEDEF, SECOC_VAR)         Authenticator;
  /* The length of the payload within the secured PDU (authentic data) */
  PduLengthType                            DataLength;
  /* Copied data from the secured PDU length (copied via SecOC_CopyTxData) */
  PduLengthType                            CopiedDataFromSecLength;
  /* !LINKSTO SecOC.ASR430.Tx.SWS_SecOC_00225,1 */
  /* Number of authentication (build) attempts */
  uint16                                   AuthAttempts;
  /* The index of the SecOC Tx state machine for each PDU configured */
  uint8                                    State;
  /* Tx state machine events emitted by APIs to the PduR */
  uint8                                    PduREvent;
  /* Tx state machine events emitted by SecOC_Transmit */
  uint8                                    TransmitEvent;
  /* Flag which indicates if the authentication of the I-PDU is currently ongoing */
  boolean                                  ProcessingAuthentication;
}
SecOC_TxDataType;

#ifndef RTE_TYPE_SecOC_MacGenerateStatusType
/** \cond SECOC_DOC_INTERNAL_MACROS */
#define RTE_TYPE_SecOC_MacGenerateStatusType
/** \endcond */
/* !LINKSTO SecOC.EB.Tx.SWS_SecOC_00014,2 */
/**
 * \struct SecOC_MacGenerateStatusType
 * \brief Data structure to bundle the status of a MAC generate attempt for a specific Freshness
 *        Value and Data ID.
 *//**
 * \var SecOC_MacGenerateStatusType::freshnessValueID
 * \brief Identifier of the Freshness Value which resulted in the Verification Result
 *//**
 * \var SecOC_MacGenerateStatusType::macGenerateStatus
 * \brief Result of the MAC Generate procedure.
 *//**
 * \var SecOC_MacGenerateStatusType::secOCDataId
 * \brief Identifier for the Secured I-PDU.
 */
typedef struct
{
  uint16                 freshnessValueID;
  Std_ReturnType         macGenerateStatus;
  SecOC_DataIdLengthType secOCDataId;
}
SecOC_MacGenerateStatusType;
#endif


/*==================[external constants]==========================================================*/

/*==================[external data]===============================================================*/

/*==================[external function declarations]==============================================*/

/*================================================================================================*/
#endif /* #ifndef SECOC_TYPES_H */

/*==================[end of file]=================================================================*/

