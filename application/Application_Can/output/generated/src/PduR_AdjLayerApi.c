/**
 * \file
 *
 * \brief AUTOSAR PduR
 *
 * This file contains the implementation of the AUTOSAR
 * module PduR.
 *
 * \version 5.3.49
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */


/*==================[includes]==============================================*/


#include <TSAutosar.h> /* EB specific standard types */
#include <ComStack_Types.h> /* AUTOSAR Communication Stack types */
#include <PduR_Internal_Static.h> /* Internal API (static part) */
#ifdef PDUR_NO_PBCFG_REQUIRED
  #undef PDUR_NO_PBCFG_REQUIRED
#endif
#define PDUR_NO_PBCFG_REQUIRED /* This prevents the inclusion of the symbolic name value header */
#include <PduR_CanIf.h> /* Header provided to Generic Upper Layer */
#undef PDUR_NO_PBCFG_REQUIRED
#define PDUR_NO_PBCFG_REQUIRED /* This prevents the inclusion of the symbolic name value header */
#include <PduR_CanNm.h> /* Header provided to Generic Upper Layer */
#undef PDUR_NO_PBCFG_REQUIRED
#define PDUR_NO_PBCFG_REQUIRED /* This prevents the inclusion of the symbolic name value header */
#include <PduR_CanTp.h> /* Header provided to Generic Upper Layer */
#undef PDUR_NO_PBCFG_REQUIRED
#define PDUR_NO_PBCFG_REQUIRED /* This prevents the inclusion of the symbolic name value header */
#include <PduR_Com.h> /* Header provided to Generic Upper Layer */
#undef PDUR_NO_PBCFG_REQUIRED
#define PDUR_NO_PBCFG_REQUIRED /* This prevents the inclusion of the symbolic name value header */
#include <PduR_Dcm.h> /* Header provided to Generic Upper Layer */
#undef PDUR_NO_PBCFG_REQUIRED
#define PDUR_NO_PBCFG_REQUIRED /* This prevents the inclusion of the symbolic name value header */
#include <PduR_SecOC.h> /* Header provided to Generic Upper Layer */
#undef PDUR_NO_PBCFG_REQUIRED
#include <PduR_Lcfg.h> /* Link-time configurable data */
#include <PduR_Types.h> /* PduR specific types */

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

typedef P2VAR(PduInfoType, AUTOMATIC, TYPEDEF) PduR_PduInfoPtrType;
typedef P2VAR(RetryInfoType, AUTOMATIC, TYPEDEF) PduR_RetryInfoPtrType;

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/


/*==================[external function definitions]=========================*/

/* AUTOSAR Memory Mapping - start section for code */
#define PDUR_START_SEC_CODE
#include <PduR_MemMap.h>

/*****************************************************************************
    IF APIs for generic layer CanIf
*****************************************************************************/

FUNC(void, PDUR_CODE) PduR_CanIfRxIndication
(
    PduIdType    RxPduId,
    P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    /* Call generic RxIndication function with index PduR_CanIfRTabLoIfConfigIdx for
     * selecting the proper configuration */
    PduR_GenericIfRxIndication(RxPduId, PduInfoPtr, PduR_CanIfRTabLoIfConfigIdx);
}

FUNC(void, PDUR_CODE) PduR_CanIfTxConfirmation
(
    PduIdType    TxPduId
)
{
    /* Call generic TxConfirmation function with index PduR_CanIfRTabLoIfConfigIdx
     * to select the proper configuration */
    PduR_GenericIfTxConfirmation(TxPduId, PduR_CanIfRTabLoIfConfigIdx);
}

/*****************************************************************************
    IF APIs for generic layer CanNm
*****************************************************************************/

FUNC(void, PDUR_CODE) PduR_CanNmRxIndication
(
    PduIdType    RxPduId,
    P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    /* Call generic RxIndication function with index PduR_CanNmRTabLoIfConfigIdx for
     * selecting the proper configuration */
    PduR_GenericIfRxIndication(RxPduId, PduInfoPtr, PduR_CanNmRTabLoIfConfigIdx);
}
FUNC(Std_ReturnType, PDUR_CODE) PduR_CanNmTriggerTransmit
(
    PduIdType    TxPduId,
    P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    Std_ReturnType RetVal;

    /* Call generic TriggerTransmit function with index PduR_CanNmRTabLoIfConfigIdx for
     * selecting the proper configuration */
    RetVal = PduR_GenericIfTriggerTransmit(TxPduId, PduInfoPtr, PduR_CanNmRTabLoIfConfigIdx);

    return RetVal;
}

FUNC(void, PDUR_CODE) PduR_CanNmTxConfirmation
(
    PduIdType    TxPduId
)
{
    /* Call generic TxConfirmation function with index PduR_CanNmRTabLoIfConfigIdx
     * to select the proper configuration */
    PduR_GenericIfTxConfirmation(TxPduId, PduR_CanNmRTabLoIfConfigIdx);
}

/*****************************************************************************
    TP API for generic layer CanTp
*****************************************************************************/

FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpStartOfReception
(
    PduIdType RxPduId,
    PduLengthType TpSduLength,
    P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) BufferSizePtr
)
{
    BufReq_ReturnType RetVal;

    /* Call generic StartOfReception function with index PduR_CanTpRTabLoTpConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericTpStartOfReception(RxPduId, TpSduLength, BufferSizePtr, PduR_CanTpRTabLoTpConfigIdx);

    return RetVal;
}

FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyRxData
(
    PduIdType RxPduId,
    P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_CONST) PduInfoPtr,
    P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) BufferSizePtr
)
{
    BufReq_ReturnType RetVal;

    /* Call generic CopyRxData function with index PduR_CanTpRTabLoTpConfigIdx for
     * selecting the proper configuration */
    RetVal = PduR_GenericTpCopyRxData(RxPduId, PduInfoPtr, BufferSizePtr, PduR_CanTpRTabLoTpConfigIdx);

    return RetVal;
}


FUNC(BufReq_ReturnType, PDUR_CODE) PduR_CanTpCopyTxData
(
    PduIdType TxPduId,
    P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr,
    P2VAR(RetryInfoType, AUTOMATIC, PDUR_APPL_DATA) RetryInfoPtr,
    P2VAR(PduLengthType, AUTOMATIC, PDUR_APPL_DATA) AvailableDataPtr
)
{
    BufReq_ReturnType RetVal;

    /* Call generic CopyTxData function with index PduR_CanTpRTabLoTpConfigIdx
     * for selecting the proper configuration */
    RetVal = PduR_GenericTpCopyTxData(TxPduId, PduInfoPtr, RetryInfoPtr, AvailableDataPtr, PduR_CanTpRTabLoTpConfigIdx);

    return RetVal;
}



FUNC(void, PDUR_CODE) PduR_CanTpRxIndication
(
    PduIdType    RxPduId,
    NotifResultType  Result
)
{
    /* Call generic RxIndication function with index PduR_CanTpRTabLoTpConfigIdx
     * to select the proper configuration */
    PduR_GenericTpRxIndication(RxPduId, Result, PduR_CanTpRTabLoTpConfigIdx);
}



FUNC(void, PDUR_CODE) PduR_CanTpTxConfirmation
(
    PduIdType    TxPduId,
    NotifResultType  Result
)
{
    /* Call generic TxConfirmation function with index PduR_CanTpRTabLoTpConfigIdx
     * for selecting the proper configuration */
    PduR_GenericTpTxConfirmation(TxPduId, Result, PduR_CanTpRTabLoTpConfigIdx);
}



/*****************************************************************************
    IF APIs for generic layer Com
*****************************************************************************/

FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit
(
    PduIdType TxPduId,
    P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    Std_ReturnType RetVal;

    /* Call generic Transmit function with index PduR_ComRTabUpIfTxConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericIfTransmit(TxPduId, PduInfoPtr, PduR_ComRTabUpIfTxConfigIdx);

    return RetVal;
}

/*****************************************************************************
    TP API for generic layer Dcm
*****************************************************************************/

FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmTransmit
(
    PduIdType TxPduId,
    P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    Std_ReturnType RetVal;

    /* Call generic Transmit function with index PduR_DcmRTabUpTpConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericTpTransmit(TxPduId, PduInfoPtr, PduR_DcmRTabUpTpConfigIdx);

    return RetVal;
}

FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmCancelTransmit
(
    PduIdType TxPduId
)
{
    Std_ReturnType RetVal;

    /* Call generic CancelTransmit function with index PduR_DcmRTabUpTpConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericTpCancelTransmit(TxPduId, PduR_DcmRTabUpTpConfigIdx);

    return RetVal;
}

FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmCancelReceive
(
    PduIdType RxPduId
)
{
    Std_ReturnType RetVal;

    /* Call generic CancelReceive function with index PduR_DcmRTabUpTpConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericTpCancelReceive(RxPduId, PduR_DcmRTabUpTpConfigIdx);

    return RetVal;
}

/*****************************************************************************
    IF APIs for generic layer Dcm
*****************************************************************************/

FUNC(Std_ReturnType, PDUR_CODE) PduR_DcmIfTransmit
(
    PduIdType TxPduId,
    P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    Std_ReturnType RetVal;

    /* Call generic Transmit function with index PduR_DcmRTabUpIfTxConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericIfTransmit(TxPduId, PduInfoPtr, PduR_DcmRTabUpIfTxConfigIdx);

    return RetVal;
}

/*****************************************************************************
    IF APIs for generic layer SecOC
*****************************************************************************/

FUNC(Std_ReturnType, PDUR_CODE) PduR_SecOCTransmit
(
    PduIdType TxPduId,
    P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    Std_ReturnType RetVal;

    /* Call generic Transmit function with index PduR_SecOCRTabUpIfTxConfigIdx
     * to select the proper configuration */
    RetVal = PduR_GenericIfTransmit(TxPduId, PduInfoPtr, PduR_SecOCRTabUpIfTxConfigIdx);

    return RetVal;
}

FUNC(void, PDUR_CODE) PduR_SecOCRxIndication
(
    PduIdType    RxPduId,
    P2VAR(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) PduInfoPtr
)
{
    /* Call generic RxIndication function with index PduR_SecOCRTabLoIfConfigIdx for
     * selecting the proper configuration */
    PduR_GenericIfRxIndication(RxPduId, PduInfoPtr, PduR_SecOCRTabLoIfConfigIdx);
}

FUNC(void, PDUR_CODE) PduR_SecOCTxConfirmation
(
    PduIdType    TxPduId
)
{
    /* Call generic TxConfirmation function with index PduR_SecOCRTabLoIfConfigIdx
     * to select the proper configuration */
    PduR_GenericIfTxConfirmation(TxPduId, PduR_SecOCRTabLoIfConfigIdx);
}

/* AUTOSAR Memory Mapping - stop section for code */
#define PDUR_STOP_SEC_CODE
#include <PduR_MemMap.h>

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
