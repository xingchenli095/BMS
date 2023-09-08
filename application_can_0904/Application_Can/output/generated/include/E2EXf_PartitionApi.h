/**
 * \file
 *
 * \brief AUTOSAR E2EXf
 *
 * This file contains the implementation of the AUTOSAR
 * module E2EXf.
 *
 * \version 1.0.37
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2022 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#ifndef E2EXF_PARTITIONAPI_H
#define E2EXF_PARTITIONAPI_H

/*==================[includes]==============================================*/

#include <Std_Types.h>         /* AUTOSAR standard types */
#include <TransformerTypes.h>  /* Transformer specific standard types **/
#include <E2E_P05_E2EXf.h>  /* Profile specific definitions of functions and types */

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

#define E2EXF_START_SEC_CODE
#include <E2EXf_MemMap.h>

/**
 ** \brief Initializes the state of a partition of the E2E Transformer.
 **
 ** This function initializes the E2E library state structures, which is done by calling
 ** init-functions from all configured partitions.
 **
 ** \Reentrancy{Re-entrant}
 ** \Synchronicity{Synchronous}
 **/
E2EXF_DECL_FUNC_PARTITIONINIT(_);

/**
 ** \brief Deinitializes the state of a partition of the E2E Transformer.
 **
 ** \Reentrancy{Re-entrant}
 ** \Synchronicity{Synchronous}
 **/
E2EXF_DECL_FUNC_PARTITIONDEINIT(_);

/**
 ** \brief Protects the array/buffer to be transmitted, using the in-place transformation.
 **
 ** \param[in]  InputBufferLength  This argument holds the length of the E2E transformer's input
 **             data (in the inputBuffer argument).
 ** \param[in,out]  BufferPtr  This is the buffer where the E2E transformer places its output data.
 **             With the E2E transformer configured for in-place transformation, it also contains
 **             its input data.
 **             With the E2E transformer using in-place transformation and having a headerLength
 **             different from 0, the output data of the previous transformer begin at position
 **             headerLength.
 **             It is the buffer allocated by the RTE, where the transformed data has to be stored
 **             by the transformer.
 ** \param[out]  BufferLengthPtr  Used length of the buffer
 **
 ** \return Function execution success status
 ** \retval 0x00  (E_OK): Function performed successfully.
 ** \retval 0x77  (E_SAFETY_SOFT_RUNTIMEERROR): A runtime error occurred, safety properties could
 **               not be checked (state or status cannot be determined) but non-protected output
 **               data could be produced nonetheless.
 ** \retval 0xFF  (E_SAFETY_HARD_RUNTIMEERROR): A runtime error occurred, safety properties could
 **               not be checked and no output data could be produced.
 **
 ** \ServiceID{0x03}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous}
 **/
E2EXF_DECL_FUNC_XF_INPLACE(E2EXf_9D7FDE5D5F414438C76F1B9E84FCBFC8);

/**
 ** \brief This function checks the received data. using the in-place inverse transformation.
 **        If the data can be used by the caller, then the function returns E_OK.
 **
 ** \param[in]  InputBufferLength  This argument holds the length of the E2E transformer's input
 **             data (in the inputBuffer argument).
 **             If executeDespiteDataUnavailability is set to true and the transformer is
 **             executed without valid input data, the length will be equal to 0.
 ** \param[in,out]  BufferPtr  This is the buffer where the E2E transformer places its output data.
 **             With the E2E transformer configured for in-place transformation, it also contains
 **             its input data.
 **             With the E2E transformer using in-place transformation and having a headerLength
 **             different from 0, the output data of the previous transformer begin at position
 **             headerLength.
 **             It is the buffer allocated by the RTE, where the transformed data has to be stored
 **             by the transformer.
 ** \param[out]  BufferLengthPtr  Used length of the buffer
 **
 ** \return Function execution success status. The high nibble represents the state of the E2E
 **         state machine, the low nibble represents the status of the last E2E check.
 **         For the following return codes, please see SWS Transformer General:
 ** \retval 0x00 (E_OK) This means VALID_OK
 ** \retval 0x01 (E_SAFETY_VALID_REP)
 ** \retval 0x02 (E_SAFETY_VALID_SEQ)
 ** \retval 0x03 (E_SAFETY_VALID_ERR)
 ** \retval 0x05 (E_SAFETY_VALID_NND)
 **
 ** \retval 0x20 (E_SAFETY_NODATA_OK)
 ** \retval 0x21 (E_SAFETY_NODATA_REP)
 ** \retval 0x22 (E_SAFETY_NODATA_SEQ)
 ** \retval 0x23 (E_SAFETY_NODATA_ERR)
 ** \retval 0x25 (E_SAFETY_NODATA_NND)
 **
 ** \retval 0x30 (E_SAFETY_INIT_OK)
 ** \retval 0x31 (E_SAFETY_INIT_REP)
 ** \retval 0x32 (E_SAFETY_INIT_SEQ)
 ** \retval 0x33 (E_SAFETY_INIT_ERR)
 ** \retval 0x35 (E_SAFETY_INIT_NND)
 **
 ** \retval 0x40 (E_SAFETY_INVALID_OK)
 ** \retval 0x41 (E_SAFETY_INVALID_REP)
 ** \retval 0x42 (E_SAFETY_INVALID_SEQ)
 ** \retval 0x43 (E_SAFETY_INVALID_ERR)
 ** \retval 0x45 (E_SAFETY_INVALID_NND)
 **
 ** \retval 0x77 (E_SAFETY_SOFT_RUNTIMEERROR): A runtime error occurred, safety properties could not
 **         be checked (state or status cannot be determined) but non-protected output data could
 **         be produced nonetheless.
 ** \retval 0xFF (E_SAFETY_HARD_RUNTIMEERROR): A runtime error occurred, safety properties could not
 **         be checked and no output data could be produced.
 **
 ** \ServiceID{0x04}
 ** \Reentrancy{Reentrant}
 ** \Synchronicity{Synchronous}
 **/
E2EXF_DECL_FUNC_INVXF_INPLACE(E2EXf_Inv_520AB6FCDD97019CD777879A4674C0ED_DF484B1EBB580D89DBA52DABCC7DEFEC_F01A0E3D96E0654D01BEA3CFC0D9035A);

#define E2EXF_STOP_SEC_CODE
#include <E2EXf_MemMap.h>

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* ifndef E2EXF_PARTITIONAPI_H  */
/*==================[end of file]===========================================*/
