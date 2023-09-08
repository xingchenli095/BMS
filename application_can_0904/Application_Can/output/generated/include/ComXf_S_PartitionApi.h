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
#ifndef COMXF_S_PARTITIONAPI_H
#define COMXF_S_PARTITIONAPI_H
/*==================[includes]==============================================*/

#include <Std_Types.h>           /* EB specific standard types */
#include <TransformerTypes.h>    /* General transformer data types */
#include <SchM_ComXfType.h>      /* Module interlink types */
#include <E2E_ComXf_S_Stc.h>

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

#define COMXF_START_SEC_CODE
#include <ComXf_MemMap.h>

/*------------- C O M   b a s e d   s e r i a l i z a t i o n --------------*/

/**
 ** \brief The COM transformer interface for 'ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8'
 **
 ** This function transforms a Sender/Receiver communication
 ** using the serialization of COM Based Transformer. It takes
 ** the data element as input and outputs an uint8 array contain-
 ** ing the serialized data.
 **
 ** Preconditions:
 ** The COM module must be initialized.
 **
 ** \param[in]  dataElement   Data element which shall be transformed.
 ** \param[out] buffer        Buffer allocated by the RTE, where the transformed data has to
 **                           be stored by the transformer.
 ** \param[out] bufferLength  Used length of the buffer.
 **
 ** \return Result of request to serialize the dataElement
 ** \retval 0x00 (E_OK): Serialization successful
 ** \retval 0x81 (E_SER_GENERIC_ERROR): A generic error occurred
 **/
COMXF_S_DECL_FUNC_XF(ComXf_9D7FDE5D5F414438C76F1B9E84FCBFC8, E2EProt_Data);


/*----------- C O M   b a s e d   d e s e r i a l i z a t i o n ------------*/


/**
 ** \brief The COM deserializer interface for 'ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A'
 **
 ** This function deserializes a Sender/Receiver communication
 ** using the deserialization of COM Based Transformer. It takes
 ** the uint8 array containing the serialized data as input and
 ** outputs the original data element which will be passed to the
 ** Rte.
 **
 ** Preconditions:
 ** The COM module must be initialized.
 **
 ** \param[in] buffer        Buffer allocated by the RTE, where the still serialized data are
 **                          stored by the Rte.
 ** \param[in] bufferLength  Used length of the buffer.
 ** \param[out] dataElement  Data element which is the result of the transformation and contains
 **                          the deserialized data element.
 **
 ** \return Result of request to serialize the dataElement
 ** \retval 0x00 (E_OK): Serialization successful
 ** \retval 0x81 (E_SER_GENERIC_ERROR): A generic error occurred
 **/
COMXF_S_DECL_FUNC_INVXF(ComXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A, E2EProt_Data);


#define COMXF_STOP_SEC_CODE
#include <ComXf_MemMap.h>

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef COMXF_S_PARTITIONAPI_H  */
/*==================[end of file]===========================================*/
